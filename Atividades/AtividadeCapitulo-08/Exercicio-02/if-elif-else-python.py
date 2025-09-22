def main() -> None:
    print(f"===== MENU DE OPCOES =====\n")
    print(f"Escolha a opcao desejada:")
    print(f"1 - Calcular o quadrado de um numero.")
    print(f"2 - Calcular o fatorial de um numero.")
    print(f"3 - Sair do programa.\n")
    opcao = input(f"--> Digite o numero da opcao desejada: ")
    
    if opcao == '1':
        print(f"\n>>> Voce escolheu calcular o QUADRADO de um numero.\n")
    elif opcao == '2':
        print(f"\n>>> Voce escolheu calcular o FATORIAL de um numero.\n")
    elif opcao == '3':
        print(f"\n>>> Voce escolheu SAIR do programa.")
        print(f"\nSaindo...")
    else:
        print(f"\nERRO! Opcao INVALIDA escolhida! O programa ira encerrar.")
        print(f"\nSaindo...")
        
main()