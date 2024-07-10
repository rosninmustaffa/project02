pipeline {
    agent {
        docker {
            image 'gcc:4.9'
            label 'gcc_docker'
        }
    }   
    stages {
        stage('Build') {
            steps {
                echo "Compiling the calculator code..."
                sh '''
                gcc --version
                gcc -o calculator calculator.c MathOperation.c
                '''
            }
            post {
                success {
                    echo "Compile success..."
                }
                failure {
                    echo "Compile failed..."
                }
            }
        }
        stage('Test') {
            steps {
                echo "Compile test code"
                sh '''
                gcc -o test_calculator test_calculator.c MathOperation.c
                '''
                echo "Test code compile complete."
                echo "Running unit tests..."
                sh '''
                ./test_calculator
                '''
                echo "Unit test complete"
            }
            post {
                success {
                    echo "Test success..."
                }
                failure {
                    echo "Test failed..."
                }
            }
        }
        stage('Deliver') {
            steps {
                echo 'Deliver....'
                sh '''
                echo "doing delivery stuff.."
                '''
            }
        }
    }
}
