pipeline {
    agent any
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
                echo "Testing.."
                sh '''
                echo "doing test stuff.."
                '''
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
