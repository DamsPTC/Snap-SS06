/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ee8928; end: 106ee8e9b; -[SCSpectaclesPairingLagunaBTAuthenticator communicationClient:didReceiveNetworkResponse:] */

void FUN_106ee8928(char *param_1,undefined8 param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar3 = param_1;
  func_0x00010bf3ca40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (pcVar3 != param_3) goto LAB_106ee8e50;
  pcVar3 = param_4;
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  func_0x00010bfd4580();
  if (((ulong)pcVar4 & 1) == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c40();
    pcVar4 = param_1;
  }
  else {
    pcVar5 = pcVar3;
    func_0x00010bf10900();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar5;
    func_0x00010c13b7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar5);
    pcVar5 = param_1;
    func_0x00010bf5f6e0();
    iVar2 = (int)pcVar5;
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        pcVar5 = param_1;
        func_0x00010bf10dc0();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar3;
        func_0x00010bf10900(pcVar3);
        _objc_retainAutoreleasedReturnValue();
        pcVar13 = pcVar9;
        func_0x00010c13b7e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar5;
        func_0x00010c1c78c0(pcVar5,param_2,pcVar13);
        _objc_release(pcVar13);
        _objc_release(pcVar9);
        _objc_release(pcVar5);
        if (((ulong)pcVar10 & 1) != 0) {
          uVar11 = 2;
          goto LAB_106ee8ddc;
        }
LAB_106ee8e20:
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f2c40();
      }
      else {
        if (iVar2 != 2) goto LAB_106ee8e44;
        pcVar5 = param_1;
        func_0x00010bf10dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126d3178;
        func_0x00010c0ccf40(PTR_PTR_1126d3178);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d3178;
        func_0x00010c0ccf20(PTR_PTR_1126d3178);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar5;
        func_0x00010c298b00(pcVar5,param_2,pcVar4,puVar6,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(pcVar5);
        if (((ulong)pcVar9 & 1) == 0) goto LAB_106ee8e20;
        pcVar5 = param_1;
        func_0x00010bf10dc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar5;
        func_0x00010bfbf9a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9e960(param_1,param_2,3,pcVar9);
        _objc_release(pcVar9);
        param_1 = pcVar5;
      }
LAB_106ee8e3c:
      _objc_release(param_1);
    }
    else if (iVar2 == 3) {
      pcVar5 = param_1;
      func_0x00010bf10dc0();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar3;
      func_0x00010bf10900(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar13 = pcVar9;
      func_0x00010c13b7e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar5;
      func_0x00010c2988c0(pcVar5,param_2,pcVar13);
      _objc_release(pcVar13);
      _objc_release(pcVar9);
      _objc_release(pcVar5);
      if (((ulong)pcVar10 & 1) == 0) goto LAB_106ee8e20;
      uVar11 = 4;
LAB_106ee8ddc:
      func_0x00010be9e960(param_1,param_2,uVar11,0);
    }
    else if (iVar2 == 4) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      pcVar5 = param_1;
      func_0x00010bf108c0();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar5;
      func_0x00010bf52a60();
      if (pcVar9 != (char *)0x0) {
        lVar12 = *plStack_120;
        do {
          pcVar13 = (char *)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(pcVar5);
            }
            lVar14 = *(long *)(lStack_128 + (long)pcVar13 * 8);
            pcVar10 = pcVar3;
            func_0x00010bf10900(pcVar3);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar10;
            func_0x00010c13b7e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf04d60(lVar14,param_2,pcVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pcVar8);
            _objc_release(pcVar10);
            if (lVar14 != 0) {
              func_0x00010be9e960(param_1,param_2,5,lVar14);
              _objc_release(lVar14);
              goto LAB_106ee8e04;
            }
            pcVar13 = pcVar13 + 1;
          } while (pcVar9 != pcVar13);
          pcVar9 = pcVar5;
          func_0x00010bf52a60(pcVar5,param_2,&uStack_130,auStack_f0,0x10);
        } while (pcVar9 != (char *)0x0);
      }
      _objc_release(pcVar5);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2c40();
      pcVar5 = param_1;
LAB_106ee8e04:
      _objc_release(pcVar5);
    }
    else if (iVar2 == 5) {
      pcVar5 = pcVar3;
      func_0x00010bf10900();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar5;
      func_0x00010c13b7e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar13 = pcVar9;
      func_0x00010c08fa60();
      if (pcVar13 == (char *)0x1) {
        pcVar13 = pcVar3;
        func_0x00010bf10900();
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar13;
        func_0x00010c13b7e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar10;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        cVar1 = *pcVar8;
        _objc_release(pcVar10);
        _objc_release(pcVar13);
        _objc_release(pcVar9);
        _objc_release(pcVar5);
        if (cVar1 == '\x01') {
          pcVar5 = param_1;
          func_0x00010bf3ca40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c264060();
          _objc_release(pcVar5);
          pcVar5 = param_1;
          func_0x00010bf3ca40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c7280();
          _objc_release(pcVar5);
          pcVar5 = param_1;
          func_0x00010bf3ca40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c180fa0();
          _objc_release(pcVar5);
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f2c80();
          goto LAB_106ee8e3c;
        }
      }
      else {
        _objc_release(pcVar9);
        _objc_release(pcVar5);
      }
      goto LAB_106ee8e20;
    }
  }
LAB_106ee8e44:
  _objc_release(pcVar4);
  _objc_release(pcVar3);
LAB_106ee8e50:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106ee8e9c; end: 106ee8ecb; -[SCSpectaclesPairingLagunaBTAuthenticator communicationClientDidTimeOut:] */

void FUN_106ee8e9c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ee8ecc; end: 106ee8ed3; -[SCSpectaclesPairingLagunaBTAuthenticator client] */

undefined8 FUN_106ee8ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ee8ed4; end: 106ee8f03; -[SCSpectaclesPairingLagunaBTAuthenticator setClient:] */

void FUN_106ee8ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee8f04; end: 106ee8f1b; -[SCSpectaclesPairingLagunaBTAuthenticator delegate] */

void FUN_106ee8f04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ee8f1c; end: 106ee8f27; -[SCSpectaclesPairingLagunaBTAuthenticator setDelegate:] */

void FUN_106ee8f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106ee8f28; end: 106ee8f2f; -[SCSpectaclesPairingLagunaBTAuthenticator currentOperation] */

undefined4 FUN_106ee8f28(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106ee8f30; end: 106ee8f37; -[SCSpectaclesPairingLagunaBTAuthenticator setCurrentOperation:] */

void FUN_106ee8f30(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ee8f38; end: 106ee8f3f; -[SCSpectaclesPairingLagunaBTAuthenticator authenticator] */

undefined8 FUN_106ee8f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ee8f40; end: 106ee8f6f; -[SCSpectaclesPairingLagunaBTAuthenticator setAuthenticator:] */

void FUN_106ee8f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee8f70; end: 106ee8f77; -[SCSpectaclesPairingLagunaBTAuthenticator authProviders] */

undefined8 FUN_106ee8f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ee8f78; end: 106ee8fa7; -[SCSpectaclesPairingLagunaBTAuthenticator setAuthProviders:] */

void FUN_106ee8f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee8fa8; end: 106ee8feb; -[SCSpectaclesPairingLagunaBTAuthenticator .cxx_destruct] */

void FUN_106ee8fa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ee8fec; end: 106ee9057; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator initWithDelegate:] */

undefined1 * FUN_106ee8fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7c48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ee9058; end: 106ee91ff; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator startConnecting] */

void FUN_106ee9058(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x00010bf7fea0();
  if ((int)puVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c00(param_1,param_2,puVar3);
    puVar2 = param_1;
    goto LAB_106ee91e4;
  }
  puVar1 = param_1;
  func_0x00010c1196e0();
  if (puVar1 == (undefined *)0x0) {
    uVar4 = 1;
LAB_106ee90d0:
    puVar1 = PTR_PTR_1126d3218;
    func_0x00010bf61100(PTR_PTR_1126d3218,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193380(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  else if (puVar1 == (undefined *)0x1) {
    uVar4 = 2;
    goto LAB_106ee90d0;
  }
  puVar1 = param_1;
  func_0x00010bf8bfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfbfe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168e80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf05bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa80(puVar1,param_2,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(puVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
LAB_106ee91e4:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106ee9200; end: 106ee94d7; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator _tryPeerVerification] */

void FUN_106ee9200(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar2 = param_1;
  func_0x00010c1196e0();
  uVar3 = param_1;
  func_0x00010c27bc00();
  uVar5 = param_1;
  uVar6 = param_1;
  uVar7 = param_1;
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, func_0x00010bf80600(), (uVar3 & 1) == 0)) {
    func_0x00010c21a260(param_1,param_2,1);
    uVar3 = param_1;
    func_0x00010c1196e0();
    ppuVar1 = &PTR_FUN_11318aed8;
    if (uVar3 != 0) {
      ppuVar1 = &PTR_FUN_11318aee0;
    }
    puVar8 = *ppuVar1;
    puVar4 = PTR_PTR_1126d3220;
    _objc_alloc(PTR_PTR_1126d3220);
    func_0x00010bf05bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f70c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22bf40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_1;
    func_0x00010c27bbe0();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    func_0x00010c21a220(param_1,param_2,1);
    puVar4 = PTR_PTR_1126d3220;
    _objc_alloc(PTR_PTR_1126d3220);
    func_0x00010bf05bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f70c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22bf40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_FUN_11318aef0;
  }
  func_0x00010bff3540(puVar4,param_2,uVar5,uVar6,uVar7,uVar2 != 0,puVar8);
  func_0x00010c16c9a0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar2 = param_1;
  func_0x00010bf10dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc06c0();
  _objc_retain(0);
  _objc_retain(0);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
  }
  else {
    puVar4 = PTR_PTR_1126b6718;
    func_0x00010c2989e0(PTR_PTR_1126b6718,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da0e0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f71a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar2,param_2,param_1);
    _objc_release(param_1);
    param_1 = uVar2;
  }
  _objc_release(param_1);
  _objc_release(0);
  _objc_release(0);
  return;
}



/* Entry: 106ee94d8; end: 106ee982f; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator handleResponse:] */

void FUN_106ee94d8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf10dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c0f70e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) goto LAB_106ee9818;
    puVar3 = param_3;
    func_0x00010c0f7160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar3 == (undefined *)0x0) goto LAB_106ee9818;
    puVar1 = param_1;
    func_0x00010bf8bfe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c0f70e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfc0160(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff0c0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c0f7160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da080(param_1,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c22bf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) goto LAB_106ee97c4;
LAB_106ee97d0:
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
  }
  else {
    puVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) goto LAB_106ee9818;
    puVar3 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0f71a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (puVar3 != puVar4) goto LAB_106ee9818;
    puVar1 = param_3;
    func_0x00010c13bcc0();
    if (puVar1 != (undefined *)0x4) {
LAB_106ee97c4:
      func_0x00010bed0400(param_1);
      goto LAB_106ee9818;
    }
    puVar1 = param_1;
    func_0x00010bf10dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c0f7140(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c0f7200(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f4720(puVar1,param_2,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d3178;
    if (((ulong)puVar2 & 1) == 0) goto LAB_106ee97d0;
    puVar3 = param_1;
    func_0x00010bf10dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c086b40();
    func_0x00010c0f7100(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
LAB_106ee97f0:
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2c20();
    }
    else {
      puVar3 = param_1;
      func_0x00010bf10dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2985a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x0) goto LAB_106ee97f0;
      puVar3 = param_1;
      func_0x00010bf8bfe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c22bf40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bfbf460(puVar3,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2c00();
      _objc_release(param_1);
      param_1 = puVar2;
    }
    _objc_release(param_1);
    param_1 = puVar1;
  }
  _objc_release(param_1);
LAB_106ee9818:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ee9830; end: 106ee9837; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator disableEncryption] */

undefined1 FUN_106ee9830(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106ee9838; end: 106ee983f; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setDisableEncryption:] */

void FUN_106ee9838(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ee9840; end: 106ee9847; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator disableProdAuthentication] */

undefined1 FUN_106ee9840(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106ee9848; end: 106ee984f; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setDisableProdAuthentication:] */

void FUN_106ee9848(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106ee9850; end: 106ee9857; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator protocol] */

undefined8 FUN_106ee9850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ee9858; end: 106ee985f; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setProtocol:] */

void FUN_106ee9858(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106ee9860; end: 106ee9877; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator delegate] */

void FUN_106ee9860(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ee9878; end: 106ee9883; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setDelegate:] */

void FUN_106ee9878(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106ee9884; end: 106ee988b; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator ecdh] */

undefined8 FUN_106ee9884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ee988c; end: 106ee98bb; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setEcdh:] */

void FUN_106ee988c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee98bc; end: 106ee98c3; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator authenticator] */

undefined8 FUN_106ee98bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ee98c4; end: 106ee98f3; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setAuthenticator:] */

void FUN_106ee98c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee98f4; end: 106ee98fb; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator appNonce] */

undefined8 FUN_106ee98f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ee98fc; end: 106ee992b; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setAppNonce:] */

void FUN_106ee98fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee992c; end: 106ee9933; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator peerNonce] */

undefined8 FUN_106ee992c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ee9934; end: 106ee9963; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setPeerNonce:] */

void FUN_106ee9934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee9964; end: 106ee996b; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator sharedSecret] */

undefined8 FUN_106ee9964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ee996c; end: 106ee999b; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setSharedSecret:] */

void FUN_106ee996c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee999c; end: 106ee99a3; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator peerVerificationRequest] */

undefined8 FUN_106ee999c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ee99a4; end: 106ee99d3; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setPeerVerificationRequest:] */

void FUN_106ee99a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee99d4; end: 106ee99db; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator triedProdKey] */

undefined1 FUN_106ee99d4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106ee99dc; end: 106ee99e3; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setTriedProdKey:] */

void FUN_106ee99dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106ee99e4; end: 106ee99eb; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator triedDevKey] */

undefined1 FUN_106ee99e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106ee99ec; end: 106ee99f3; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setTriedDevKey:] */

void FUN_106ee99ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 106ee99f4; end: 106ee9a5b; -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator .cxx_destruct] */

void FUN_106ee99f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 106ee9a5c; end: 106ee9c8f; -[SCSpectaclesPairingManager initWithDeviceStore:listener:centralManager:spectaclesProfile:authorizationProvider:fideliusKeyProvider:usernameProvider:] */

undefined1 *
FUN_106ee9a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f7c50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x58),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3258;
    _objc_alloc();
    func_0x00010bffd5a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3260;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ee9c90; end: 106ee9d13; -[SCSpectaclesPairingManager scanForDevices] */

void FUN_106ee9c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d3268;
  _objc_alloc_init(PTR_PTR_1126d3268);
  func_0x00010c16e0a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171940();
  _objc_release(uVar2);
  func_0x00010c14f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ee9d14; end: 106ee9dd7; -[SCSpectaclesPairingManager openCommunicationStream] */

void FUN_106ee9d14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1,param_2,7,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c95b0);
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e98e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ee9dd8; end: 106eea12f; -[SCSpectaclesPairingManager authenticatePeripheral] */

void FUN_106ee9dd8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c074be0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    puVar1 = param_1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0774a0();
    if ((int)puVar3 == 0) {
      puVar3 = param_1;
      func_0x00010bf13800();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c078aa0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)puVar5 == 0) {
        puVar1 = param_1;
        func_0x00010bf13800();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c06e7e0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if ((int)puVar3 == 0) {
          puVar1 = PTR_PTR_1126d3280;
          _objc_alloc(PTR_PTR_1126d3280);
          puVar2 = PTR_PTR_1126d3178;
          func_0x00010c2982c0(PTR_PTR_1126d3178);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0608e0(puVar1,param_2,puVar2,param_1);
          func_0x00010c171900(param_1,param_2,puVar1);
          _objc_release(puVar1);
          goto LAB_106eea0a4;
        }
        puVar2 = PTR_PTR_1126d3270;
        _objc_alloc(PTR_PTR_1126d3270);
        puVar1 = param_1;
        func_0x00010c0f98a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c033840(puVar2,param_2,1,param_1,puVar1);
        _objc_release(puVar1);
        func_0x00010c18e760(puVar2,param_2,0);
        goto LAB_106eea098;
      }
    }
    else {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar2 = PTR_PTR_1126d3278;
    _objc_alloc(PTR_PTR_1126d3278);
    func_0x00010c00a2c0();
    func_0x00010c18e780();
    func_0x00010c18eaa0(puVar2,param_2,0);
    puVar1 = param_1;
    func_0x00010befe420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x000106eefd18();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c071ae0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)puVar4 != 0) {
      func_0x00010c1e5260(puVar2,param_2,1);
    }
  }
  else {
    puVar2 = PTR_PTR_1126d3270;
    _objc_alloc(PTR_PTR_1126d3270);
    puVar1 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033840(puVar2,param_2,0,param_1,puVar1);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0776e0();
    if ((int)puVar4 == 0) {
      _objc_release(puVar3);
    }
    else {
      func_0x00010b6fc0bc();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (((ulong)puVar4 & 1) == 0) goto LAB_106eea098;
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7960(puVar2,param_2,puVar1);
    }
    _objc_release(puVar1);
  }
LAB_106eea098:
  func_0x00010c171900(param_1,param_2,puVar2);
LAB_106eea0a4:
  _objc_release(puVar2);
  func_0x00010bf1ca40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eea130; end: 106eea323; -[SCSpectaclesPairingManager validatePairing] */

void FUN_106eea130(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c074be0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6718;
  if ((int)puVar3 == 0) {
    puVar1 = param_1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c06e7e0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,5);
      return;
    }
    puVar1 = PTR_PTR_1126d3288;
    _objc_opt_new(PTR_PTR_1126d3288);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c087b20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfc06a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c296a20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar4);
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c0f99c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0();
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296a20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0f99c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0();
    puVar1 = param_1;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106eea324; end: 106eea4fb; -[SCSpectaclesPairingManager requestBasicDeviceInformation] */

void FUN_106eea324(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6718;
  func_0x00010c27d400(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6718;
  func_0x00010c27d6c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6718;
  func_0x00010bf70aa0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6718;
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db180(puVar3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eea4fc; end: 106eea617; -[SCSpectaclesPairingManager unpairOtherDevicesIfNecessary] */

void FUN_106eea4fc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074be0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bec21e0(param_1);
  }
  uVar1 = param_1;
  func_0x00010bdfbf80();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171940();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c09a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492c0(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c95c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,7);
  return;
}



/* Entry: 106eea618; end: 106eea9db; -[SCSpectaclesPairingManager nameDevice] */

void FUN_106eea618(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar1 = param_1;
  func_0x00010be80100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171940();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf71080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf70e00();
    lVar6 = lVar2;
    func_0x00010c0d9880(lVar2,param_2,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126c0c78;
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22d260(puVar7,param_2,lVar6,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar10 = PTR_PTR_1126d3290;
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9a80(puVar10,param_2,uVar11,puVar7,lVar3,uVar9,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1500();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffb20();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cc20();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c09a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492c0(lVar2,param_2,5,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c95e0);
    _objc_release(puVar10);
    _objc_release(puVar7);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0d4f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1500();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0d4f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1ca80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffb20();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0692a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70cc0();
    lVar3 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cc20();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010becf280(param_1,param_2,8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eea9dc; end: 106eeaae7; -[SCSpectaclesPairingManager requestLocationPermission] */

void FUN_106eea9dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be80100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010c09a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492c0(lVar2,param_2,6,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c95f8);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0692a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09edc0();
    lVar3 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf9a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010becf280(param_1,param_2,9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eeaae8; end: 106eeadc3; -[SCSpectaclesPairingManager connectAccessory] */

void FUN_106eeaae8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171940();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174100();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074be0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar1 = param_1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e7e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar1 = param_1;
      func_0x00010bf13800();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0774a0();
      if ((uVar3 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010bf13800(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078aa0();
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar5 = PTR_PTR_1126d3298;
      _objc_alloc(PTR_PTR_1126d3298);
      uVar1 = param_1;
      func_0x00010bf13800(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf13800(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfbb7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c044980(puVar5);
      func_0x00010c1740c0(param_1);
      _objc_release(puVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf21a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e5c0();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c09a420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf13800(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf708e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2492c0(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9610);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,10);
  return;
}



/* Entry: 106eeadc4; end: 106eeae5f; -[SCSpectaclesPairingManager sendPairingSessionIdRequest] */

void FUN_106eeadc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6718;
  uVar1 = param_1;
  func_0x00010c0f3420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106eeae60; end: 106eeb2a3; -[SCSpectaclesPairingManager authenticateAccessory] */

void FUN_106eeae60(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c074be0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    puVar1 = PTR_PTR_1126d32a8;
    _objc_alloc(PTR_PTR_1126d32a8);
    puVar2 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075fc0();
    puVar4 = param_1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e7e0();
    func_0x00010c04b000(puVar1);
    func_0x00010c21df20(param_1);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c15c320(param_1);
    puVar2 = PTR_PTR_1126d32a0;
    _objc_alloc(PTR_PTR_1126d32a0);
    func_0x00010c04afe0();
    func_0x00010c21df20(param_1);
  }
  _objc_release(puVar2);
  puVar1 = param_1;
  func_0x00010c09a420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  puVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0774a0();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = param_1;
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c078aa0();
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = param_1;
      func_0x00010bf13800();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c06e7e0();
      if (((ulong)puVar7 & 1) == 0) {
        puVar7 = param_1;
        func_0x00010bf13800();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c074be0();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (((ulong)puVar9 & 1) == 0) {
          puVar1 = PTR_PTR_1126d32b0;
          _objc_alloc(PTR_PTR_1126d32b0);
          puVar2 = param_1;
          func_0x00010bf13800(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010beed080();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          func_0x00010bf13800(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_1;
          func_0x00010bf108c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfefde0(puVar1);
          func_0x00010c1740a0(param_1);
          _objc_release(puVar1);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar1 = PTR_PTR_1126bc890;
          func_0x00010c150380(0x4034000000000000,PTR_PTR_1126bc890);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20a180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar1);
          return;
        }
        goto LAB_106eeb0dc;
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_106eeb0dc:
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0xb);
  return;
}



/* Entry: 106eeb2a4; end: 106eeb337; -[SCSpectaclesPairingManager associateUser] */

void FUN_106eeb2a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf21a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3ca40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc100();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2913e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24de40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eeb338; end: 106eeb4df; -[SCSpectaclesPairingManager completePairingFlow] */

void FUN_106eeb338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_1;
  func_0x00010bf71080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf34940(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f3260(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c09a420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c14f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafba0();
  _objc_release(uVar1);
  func_0x00010becf280(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106eeb4e0; end: 106eeb513;  */

void FUN_106eeb4e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2db20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eeb514; end: 106eeb553; -[SCSpectaclesPairingManager cancelPairingFlow] */

void FUN_106eeb514(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c14f800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f020();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
  return;
}



/* Entry: 106eeb554; end: 106eeb67b; -[SCSpectaclesPairingManager resetStateMachine] */

void FUN_106eeb554(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == param_1) {
    lVar1 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f99c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c16e0a0(param_1);
  func_0x00010c166300(param_1);
  lVar1 = param_1;
  func_0x00010c14f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166320();
  _objc_release(lVar1);
  func_0x00010c171900(param_1);
  func_0x00010c1740c0(param_1);
  func_0x00010c1740a0(param_1);
  func_0x00010c21df20(param_1);
  func_0x00010c224a20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 106eeb67c; end: 106eeb6a3; -[SCSpectaclesPairingManager _handlePairingSuccess:] */

void FUN_106eeb67c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9640;
  if (param_3 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9658;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,ppuVar1);
  return;
}



/* Entry: 106eeb6a4; end: 106eeb6c7; -[SCSpectaclesPairingManager _mapStateToEvent:] */

undefined8 FUN_106eeb6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xe) {
    return *(undefined8 *)(&UNK_10ddf0c50 + (param_3 - 1U) * 8);
  }
  return 0xd;
}



/* Entry: 106eeb6c8; end: 106eeb6e7; -[SCSpectaclesPairingManager _nameForEvent:] */

undefined * FUN_106eeb6c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xe) {
    return (&PTR_PTR_110983398)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 106eeb6e8; end: 106eeb74b; -[SCSpectaclesPairingManager _transitionToState:] */

void FUN_106eeb6e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == param_3) {
    return;
  }
  func_0x00010c209fc0(param_1);
  func_0x00010c20a180(param_1);
  lVar1 = param_1;
  func_0x00010be5ce80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_handleEvent__1125d1dd0,lVar1);
  return;
}



/* Entry: 106eeb74c; end: 106eeb903; -[SCSpectaclesPairingManager _deviceStoreHasOtherPairedDevices] */

long FUN_106eeb74c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = param_1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar6 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bf13800(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c071ae0(uVar2,param_2,lVar4);
        if ((uVar5 & 1) == 0) {
          func_0x00010c082060();
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(uVar2);
          if ((uVar7 & 1) == 0) {
            lVar6 = 1;
            goto LAB_106eeb8bc;
          }
        }
        else {
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(uVar2);
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar6 != 0);
  }
  lVar6 = 0;
LAB_106eeb8bc:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar6 = lVar1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13800(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf704e0(lVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return lVar9;
}



/* Entry: 106eeb904; end: 106eeb98f; -[SCSpectaclesPairingManager _previouslyPairedDevice] */

void FUN_106eeb904(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf704e0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106eeb990; end: 106eeb9e7; -[SCSpectaclesPairingManager _startWatchdogTimer] */

void FUN_106eeb990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x4024000000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__timerKick_1125360b8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224a20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106eeb9e8; end: 106eebb7b; -[SCSpectaclesPairingManager _timerKick] */

void FUN_106eeb9e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 < 9) {
    if (4 < lVar1 - 4U) {
      return;
    }
LAB_106eeba18:
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0f99c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c0f3520(PTR_PTR_1126b6718);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 == 9) {
      lVar1 = param_1;
      func_0x00010bf13800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0f99c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b6718;
      func_0x00010c0f3520(PTR_PTR_1126b6718);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(lVar2,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bf13800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0f99c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 10) {
        if (lVar1 != 0xb) {
          return;
        }
        goto LAB_106eeba18;
      }
      func_0x00010bf13800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0f99c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010bf023a0(PTR_PTR_1126b6718);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c15c6e0(lVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eebb7c; end: 106eebc83; -[SCSpectaclesPairingManager startSearchForNewDevicesWithUserDisplayName:targetDeviceProductType:] */

void FUN_106eebb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 != 1) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106eebc84; end: 106eebd1b;  */

void FUN_106eebc84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  if (lVar2 == 0) {
    func_0x00010c21e360(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = lVar1;
    func_0x00010bdc9860(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c14f800(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166320();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010becf280(lVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eebd1c; end: 106eebe9b; -[SCSpectaclesPairingManager _advertisementCodeWithTargetDeviceProductType:] */

void FUN_106eebd1c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar7 = param_3;
  _objc_opt_new();
  puVar2 = puVar1;
  if (param_3 == (undefined *)0x0) {
    param_3 = puVar1;
    FUN_106eefc08();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_3;
    puStack_a0 = param_3;
    func_0x000106eefc4c();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    puStack_98 = unaff_x21;
    func_0x000106eefc90();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x22;
    puStack_90 = unaff_x22;
    func_0x000106eefcd4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_88 = puVar2;
    func_0x000106eefd18();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    puStack_80 = puVar3;
    func_0x000106eefd5c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    puStack_78 = puVar4;
    func_0x000106eefda0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010befa160(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar2 = param_3;
    _objc_release(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_106eebe9c;
  puStack_d0 = unaff_x22;
  puStack_c8 = unaff_x21;
  puStack_c0 = param_3;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_initWeak(auStack_d8,puVar2);
  func_0x00010c0f98a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_d8);
  _objc_retain(puVar7);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar7);
  return;
}



/* Entry: 106eebe9c; end: 106eebf93; -[SCSpectaclesPairingManager cancelSearchForNewDevicesWithCompletion:] */

void FUN_106eebe9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eebf94; end: 106eebfd7;  */

void FUN_106eebf94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010becf280();
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eebfd8; end: 106eec04f; -[SCSpectaclesPairingManager factoryResetNewDevice] */

void FUN_106eebfd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6718;
  func_0x00010c0f8740(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eec050; end: 106eec09f; -[SCSpectaclesPairingManager addAuthenticationProvider:] */

void FUN_106eec050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf108c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eec0a0; end: 106eec167; -[SCSpectaclesPairingManager confirmUnpairPreviousDevice] */

void FUN_106eec0a0(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106eec168; end: 106eec1c7;  */

void FUN_106eec168(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 6) {
    lVar1 = param_1;
    func_0x00010bf71080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f32c0();
    _objc_release(lVar1);
    func_0x00010becf280(param_1,param_2,7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eec1c8; end: 106eec28f; -[SCSpectaclesPairingManager confirmKeepPreviousDevicePaired] */

void FUN_106eec1c8(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106eec290; end: 106eec2cf;  */

void FUN_106eec290(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 6) {
    func_0x00010becf280(param_1,param_2,7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eec2d0; end: 106eec3d3; -[SCSpectaclesPairingManager setPairingDisplayName:] */

void FUN_106eec2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be86820();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106eec3d4; end: 106eec47b;  */

void FUN_106eec3d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1500();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c078aa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar1 = 8;
  if ((int)lVar4 == 0) {
    uVar1 = 9;
  }
  func_0x00010becf280(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eec47c; end: 106eec573; -[SCSpectaclesPairingManager setPairingSessionId:] */

void FUN_106eec47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eec574; end: 106eec5bb;  */

void FUN_106eec574(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eec5bc; end: 106eec693; -[SCSpectaclesPairingManager setPairingDeviceLocationEnabled:] */

void FUN_106eec5bc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106eec694; end: 106eec6f7;  */

void FUN_106eec694(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf9a0();
  _objc_release(lVar1);
  func_0x00010becf280(param_1,param_2,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eec6f8; end: 106eec77b; -[SCSpectaclesPairingManager pairingMaxDeviceNameLimit] */

undefined * FUN_106eec6f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be86820();
  puVar2 = PTR_PTR_1126c0c78;
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x17;
  }
  else {
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c26a0(puVar2,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return puVar2;
}



/* Entry: 106eec77c; end: 106eec85b; -[SCSpectaclesPairingManager pairingDisplayNameWithoutEmoji] */

void FUN_106eec77c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010be86820();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0f3060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfbb7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf51e00();
    _objc_release(lVar4);
    _objc_release(param_1);
    lVar4 = lVar2;
    if (lVar1 == 0) {
      _objc_retain();
    }
    else {
      lVar3 = lVar2;
      func_0x00010c11f420(lVar2,param_2,lVar1);
      if (lVar3 == 0) {
        lVar3 = lVar1;
        func_0x00010c08fa60(lVar1);
        func_0x00010c260c00(lVar2,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar4 = 0;
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106eec85c; end: 106eec8cf; -[SCSpectaclesPairingManager pairingDisplayNameWithEmoji] */

void FUN_106eec85c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010be86820();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfbb7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106eec8d0; end: 106eec987; -[SCSpectaclesPairingManager pairingEmoji] */

void FUN_106eec8d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010be86820();
  puVar4 = PTR_PTR_1126c0c78;
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf70cc0();
    func_0x00010bf8e400(puVar4,param_2,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106eec988; end: 106eec9a7; -[SCSpectaclesPairingManager _readyForNameChoosing] */

bool FUN_106eec988(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    return *(long *)(param_1 + 0x60) == 7;
  }
  return false;
}



/* Entry: 106eec9a8; end: 106eec9eb; -[SCSpectaclesPairingManager pairingDeviceInfo] */

void FUN_106eec9a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf13800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eec9ec; end: 106eeca17; -[SCSpectaclesPairingManager pairingStateShortCode] */

undefined ** FUN_106eec9ec(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x60) - 1;
  if (uVar1 < 0xe) {
    return (undefined **)(&PTR_PTR_110983408)[uVar1];
  }
  return &PTR____CFConstantStringClassReference_110dbc338;
}



/* Entry: 106eeca18; end: 106eecaeb; -[SCSpectaclesPairingManager confirmKeepPairingAfterValidatingRequest] */

void FUN_106eeca18(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 4) {
    _objc_initWeak(auStack_28,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106eecaec; end: 106eecb1b;  */

void FUN_106eecaec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eecb1c; end: 106eecb5b; -[SCSpectaclesPairingManager pairingScannerDidUpdateState:] */

void FUN_106eecb1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
    func_0x00010bf13800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106eecb5c; end: 106eecf77; -[SCSpectaclesPairingManager pairingScannerDidConnectPeripheral:advertisementCode:] */

void FUN_106eecb5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c166300(param_1);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000106eefda0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000106eefd5c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      func_0x000106eefcd4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c071ae0();
      if ((int)uVar2 == 0) {
        func_0x000106eefd18();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c071ae0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar3 == 0) {
          func_0x000106eefc90();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          func_0x00010c071ae0();
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            func_0x000106eefc4c();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_4;
            func_0x00010c071ae0();
            _objc_release(uVar1);
            if ((int)uVar2 == 0) {
              func_0x000106eefde4();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c071ae0();
              _objc_release(uVar1);
              puVar7 = PTR_PTR_1126c0c70;
              if ((int)uVar2 == 0) {
                func_0x00010c087d40(PTR_PTR_1126c0c70);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010bf38ca0();
                _objc_retainAutoreleasedReturnValue();
              }
            }
            else {
              puVar7 = PTR_PTR_1126c0c70;
              func_0x00010c0b7ce0(PTR_PTR_1126c0c70);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            puVar7 = PTR_PTR_1126c0c70;
            func_0x00010c0d76a0(PTR_PTR_1126c0c70);
            _objc_retainAutoreleasedReturnValue();
          }
          goto LAB_106eecc9c;
        }
      }
      else {
        _objc_release(uVar1);
      }
      puVar7 = PTR_PTR_1126c0c70;
      func_0x00010c0d9800(PTR_PTR_1126c0c70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = PTR_PTR_1126c0c70;
      func_0x00010bfe0c40(PTR_PTR_1126c0c70);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar7 = PTR_PTR_1126c0c70;
    func_0x00010c0bc520(PTR_PTR_1126c0c70);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106eecc9c:
  _objc_release(param_4);
  _objc_release(param_4);
  lVar4 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640();
  _objc_release(lVar4);
  _objc_release(puVar7);
  lVar4 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074be0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe680();
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126d3238;
  lVar4 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9aa0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1daac0();
  _objc_release(lVar6);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195ce0();
  _objc_release(lVar4);
  _objc_release(puVar7);
  lVar4 = param_1;
  func_0x00010c09a420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,2);
  return;
}



/* Entry: 106eecf78; end: 106eed00f; -[SCSpectaclesPairingManager pairingScannerDidDisconnectPeripheral:] */

void FUN_106eecf78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c09a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf13800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf708e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0xd);
  return;
}



/* Entry: 106eed010; end: 106eed197; -[SCSpectaclesPairingManager pairingScannerDidFindBackupPairingWithAdvertisementCode:] */

undefined8 FUN_106eed010(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3f9c0(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c09a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492c0(uVar1,param_2,2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c96a0;
  }
  else {
    uVar1 = param_1;
    func_0x00010be3e2c0(param_1,param_2,param_3);
    uVar3 = param_1;
    func_0x00010c09a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf13800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf708e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) != 0) {
      func_0x00010c2492c0(uVar3,param_2,0,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c96d0);
      uVar6 = 1;
      goto LAB_106eed178;
    }
    func_0x00010c2492c0(uVar3,param_2,1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c96b8;
  }
  func_0x00010c0d9840(uVar6,param_2,ppuVar5);
  uVar6 = 0;
LAB_106eed178:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106eed198; end: 106eed1bb; -[SCSpectaclesPairingManager pairingScannerDidUpdateCBManagerState:] */

void FUN_106eed198(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 5) && ((*(byte *)(param_1 + 0x40) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c96e8);
    return;
  }
  return;
}



/* Entry: 106eed1bc; end: 106eed35b; -[SCSpectaclesPairingManager _isDeviceSupportedWithAdvertisementCode:] */

undefined * FUN_106eed1bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_3;
  _objc_retain();
  func_0x000106eefcd4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000106eefcd4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  uStack_78 = uVar2;
  func_0x000106eefd5c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  uStack_70 = uVar3;
  func_0x000106eefda0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar8 = puVar7;
  uVar2 = param_3;
  func_0x00010bf4b900();
  if ((int)puVar8 == 0) {
    puVar8 = puVar5;
    uVar2 = param_3;
    func_0x00010bf4b900();
    if ((int)puVar8 == 0) {
      puVar8 = (undefined *)0x1;
    }
    else {
      iVar1 = 0x68766331;
      _VTIsHardwareDecodeSupported();
      puVar8 = (undefined *)(ulong)(iVar1 != 0);
    }
  }
  else {
    puVar6 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c07e1c0();
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  uVar3 = uVar2;
  _objc_retain();
  func_0x00010b6fc1e0();
  if ((uVar3 & 1) == 0) {
    func_0x000106eefda0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    puVar7 = (undefined *)(ulong)((uint)uVar4 ^ 1);
  }
  else {
    puVar7 = (undefined *)0x1;
  }
  _objc_release(uVar2);
  return puVar7;
}



/* Entry: 106eed35c; end: 106eed3cf; -[SCSpectaclesPairingManager _isAppSupportedWithAdvertisementCode:] */

uint FUN_106eed35c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x00010b6fc1e0();
  if ((uVar1 & 1) == 0) {
    func_0x000106eefda0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,uVar1);
    _objc_release(uVar1);
    uVar3 = (uint)uVar2 ^ 1;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}


