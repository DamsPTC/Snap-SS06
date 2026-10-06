/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106574844; end: 106574897;  */

void FUN_106574844(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde28e0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106574888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106574898; end: 1065748bf; -[SCChatInputItemDrawerCoordinator inputStateEvents] */

void FUN_106574898(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065748c0; end: 1065748e7; -[SCChatInputItemDrawerCoordinator keyboardDidHideEvents] */

void FUN_1065748c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065748e8; end: 10657491b; -[SCChatInputItemDrawerCoordinator isKeyboardDrawerActive] */

bool FUN_1065748e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return lVar1 == param_1;
}



/* Entry: 10657491c; end: 106574a2f; -[SCChatInputItemDrawerCoordinator setDefaultHeight:] */

void FUN_10657491c(double param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(double *)(param_2 + 0xb8) != param_1) {
    *(double *)(param_2 + 0xb8) = param_1;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    param_2 = *(long *)(param_2 + 0x10);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_2);
          }
          func_0x00010c18af60(param_1,*(undefined8 *)(lStack_118 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = param_2;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release();
    param_4 = (undefined1 *)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  puVar3 = param_4;
  func_0x00010c065bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7240(param_2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bfa2fa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_106574b3c;
  puStack_178 = &UNK_11092b078;
  lStack_170 = param_2;
  _objc_retain(param_4);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x106574b9c;
  puStack_1a8 = &UNK_11092b0a8;
  lStack_1a0 = param_2;
  puStack_198 = param_4;
  puStack_168 = param_4;
  _objc_retain(param_4);
  func_0x00010c0bd940(puVar3,param_3,&puStack_190,&puStack_1c0);
  _objc_release(puVar3);
  _objc_release(puStack_198);
  _objc_release(puStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106574a30; end: 106574b3b; -[SCChatInputItemDrawerCoordinator addFeature:] */

void FUN_106574a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c065bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7240(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfa2fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106574b3c;
  puStack_58 = &UNK_11092b078;
  uStack_50 = param_1;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106574b9c;
  puStack_88 = &UNK_11092b0a8;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bd940(uVar2,param_2,&puStack_70,&puStack_a0);
  _objc_release(uVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106574b3c; end: 106574bfb;  */

void FUN_106574b3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c065bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd04c0(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106574bfc; end: 106574d9b; -[SCChatInputItemDrawerCoordinator addPlugins:] */

void FUN_106574bfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined1 *puVar7;
  long unaff_x26;
  long lVar8;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x26 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(long *)(lStack_128 + lVar8 * 8);
        lVar2 = unaff_x23;
        func_0x00010c101d20();
        if (lVar2 != 3) {
          unaff_x22 = unaff_x23;
          func_0x00010c065bc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = *(undefined8 *)(param_1 + 0x20);
          unaff_x25 = unaff_x22;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x24,param_2,unaff_x23,unaff_x25);
          _objc_release(unaff_x25);
          func_0x00010bdc7240(param_1,param_2,unaff_x22);
          lVar2 = unaff_x23;
          func_0x00010c101d20();
          if (lVar2 == 2) {
            func_0x00010bf56b00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdd04a0(param_1,param_2,unaff_x22,unaff_x23);
            _objc_release(unaff_x23);
          }
          _objc_release(unaff_x22);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  pcStack_138 = FUN_106574d9c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 **)(lVar1 + 0x30) = puVar5;
  _objc_release(uVar3);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  _objc_retain(puVar5);
  puVar4 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar8 = *plStack_240;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar8) {
          _objc_enumerationMutation(puVar5);
        }
        uVar3 = *(undefined8 *)(lStack_248 + (long)puVar7 * 8);
        lVar2 = lVar1 + 0x40;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c1276e0(uVar3,param_2,lVar2);
        _objc_release(lVar2);
        puVar7 = puVar7 + 1;
      } while (puVar4 != puVar7);
      puVar4 = (undefined1 *)puVar5;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010befbd40(puVar6,param_2,puVar5,PTR_s__externalPan__112560f90);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c252440();
  if (puVar4 == (undefined1 *)0x1) {
    func_0x00010be0d7c0(puVar5,param_2,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106574d9c; end: 106574ed7; -[SCChatInputItemDrawerCoordinator addObservers:] */

void FUN_106574d9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        lVar3 = param_1 + 0x40;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c1276e0(uVar1,param_2,lVar3);
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010befbd40(puVar5,param_2,param_3,PTR_s__externalPan__112560f90);
  puVar4 = (undefined1 *)puVar5;
  func_0x00010c252440();
  if (puVar4 == (undefined1 *)0x1) {
    func_0x00010be0d7c0(param_3,param_2,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106574ed8; end: 106574f33; -[SCChatInputItemDrawerCoordinator registerPanGesture:] */

void FUN_106574ed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010befbd40(param_3,param_2,param_1,PTR_s__externalPan__112560f90);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010be0d7c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106574f34; end: 106574f4b; -[SCChatInputItemDrawerCoordinator unregisterPanGesture:] */

void FUN_106574f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_removeTarget_action__112629468,param_1,PTR_s__externalPan__112560f90);
  return;
}



/* Entry: 106574f4c; end: 106575073; -[SCChatInputItemDrawerCoordinator selectItemWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

void FUN_106574f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106575074; end: 106575137;  */

void FUN_106575074(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106575138;
    puStack_50 = &UNK_11092b0d8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar4;
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    lStack_38 = lVar1;
    func_0x00010bf97e80(uVar2,param_2,&puStack_68);
    _objc_release(uVar2);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106575138; end: 1065751e3;  */

void FUN_106575138(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf68640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010c15b4c0(param_2);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf5e780(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf721e0();
      _objc_release(uVar2);
    }
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065751e4; end: 1065751eb; -[SCChatInputItemDrawerCoordinator setState:] */

void FUN_1065751e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 1065751ec; end: 10657528f; -[SCChatInputItemDrawerCoordinator _heightForDrawer:state:] */

undefined8
FUN_1065751ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (param_5 == 2) {
    func_0x00010c0c3420(param_4);
    uVar2 = param_1;
  }
  else {
    uVar2 = 0;
    if (param_5 == 1) {
      lVar1 = param_4;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        func_0x00010bf697e0(param_2);
      }
      else {
        func_0x00010bf693e0(param_4);
      }
      _objc_release(lVar1);
      uVar2 = param_1;
    }
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106575290; end: 1065752eb; -[SCChatInputItemDrawerCoordinator heightForTargetState:] */

undefined8 FUN_106575290(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_2 + 0xa8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be34fe0(param_2,param_3,lVar1,param_4);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 1065752ec; end: 1065753c3; -[SCChatInputItemDrawerCoordinator setStyle:] */

void FUN_1065752ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_setStyle__1126614d0,param_3);
  return;
}



/* Entry: 1065753c4; end: 106575493;  */

void FUN_1065753c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a54f0);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c20eaa0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106575494; end: 1065754a7; -[SCChatInputItemDrawerCoordinator suspendStateAnnouncements] */

void FUN_106575494(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c20a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_setStateAnnouncementsSuspended__112660248,1);
  return;
}



/* Entry: 1065754a8; end: 1065754b7; -[SCChatInputItemDrawerCoordinator resumeStateAnnouncements] */

void FUN_1065754a8(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c20a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_setStateAnnouncementsSuspended__112660248,0);
  return;
}



/* Entry: 1065754b8; end: 1065755cf; -[SCChatInputItemDrawerCoordinator inputViewDidDisappear] */

void FUN_1065754b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_inputViewDidDisappear_1125f7318;
  while (PTR_s_inputViewDidDisappear_1125f7318 = puVar1, lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(ulong *)(lVar11 * 8);
      uVar4 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c066420(uVar10);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_inputViewDidDisappear_1125f7318;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar5 = *(long *)(lVar2 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar2 = *plStack_230;
    do {
      puVar1 = PTR_s_inputViewDidAppear_1125f7310;
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar2) {
          _objc_enumerationMutation(lVar5);
        }
        uVar10 = *(ulong *)(lStack_238 + lVar9 * 8);
        uVar4 = uVar10;
        _objc_opt_respondsToSelector(uVar10,puVar1);
        if ((uVar4 & 1) != 0) {
          func_0x00010c066400(uVar10);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar5;
      puVar7 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar9 = *(long *)(lVar5 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  while (PTR_s_interceptMessageSendAttemptForPl_1125f7dc0 = puVar1, lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar9);
      }
      uVar10 = *(ulong *)(lVar12 * 8);
      uVar4 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c068ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar10 != 0) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(uVar10);
      }
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  }
  _objc_release(lVar9);
  lVar2 = *(long *)(lVar5 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  while (PTR_s_interceptMessageSendAttemptForPl_1125f7dc0 = puVar1, lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(ulong *)(lVar9 * 8);
      uVar4 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c068ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar10 != 0) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(uVar10);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar8 = (undefined1 *)puVar7;
  func_0x00010be414e0();
  if ((int)puVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar7,PTR_s__activateKeyboardOnItemDeselecti_11254ece8,
               *(undefined8 *)((long)puVar7 + 0xc0));
    return;
  }
  return;
}



/* Entry: 1065755d0; end: 1065756e7; -[SCChatInputItemDrawerCoordinator inputViewDidAppear] */

void FUN_1065755d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_110;
    do {
      puVar1 = PTR_s_inputViewDidAppear_1125f7310;
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(ulong *)(lStack_118 + lVar11 * 8);
        uVar4 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar1);
        if ((uVar4 & 1) != 0) {
          func_0x00010c066400(uVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = *(long *)(lVar2 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  while (PTR_s_interceptMessageSendAttemptForPl_1125f7dc0 = puVar1, lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar11);
      }
      uVar9 = *(ulong *)(lVar12 * 8);
      uVar4 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c068ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar9 != 0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(uVar9);
      }
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar11;
    func_0x00010bf52a60();
    puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  }
  _objc_release(lVar11);
  lVar10 = *(long *)(lVar2 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  while (PTR_s_interceptMessageSendAttemptForPl_1125f7dc0 = puVar1, lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar10);
      }
      uVar9 = *(ulong *)(lVar11 * 8);
      uVar4 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c068ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar9 != 0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(uVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar10;
    func_0x00010bf52a60();
    puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar7 = (undefined1 *)puVar6;
  func_0x00010be414e0();
  if ((int)puVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar6,PTR_s__activateKeyboardOnItemDeselecti_11254ece8,
               *(undefined8 *)((long)puVar6 + 0xc0));
    return;
  }
  return;
}



/* Entry: 1065756e8; end: 106575933; -[SCChatInputItemDrawerCoordinator interceptMessageSendAttemptForPlugin:] */

void FUN_1065756e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  while (PTR_s_interceptMessageSendAttemptForPl_1125f7dc0 = puVar1, lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar6 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar6 & 1) != 0) {
        func_0x00010c068ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar4;
    func_0x00010bf52a60();
    puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  while (PTR_s_interceptMessageSendAttemptForPl_1125f7dc0 = puVar1, lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar6 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar6 & 1) != 0) {
        func_0x00010c068ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar4;
    func_0x00010bf52a60();
    puVar1 = PTR_s_interceptMessageSendAttemptForPl_1125f7dc0;
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar5 = param_3;
  func_0x00010be414e0();
  if ((int)lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s__activateKeyboardOnItemDeselecti_11254ece8,
               *(undefined8 *)(param_3 + 0xc0));
    return;
  }
  return;
}



/* Entry: 106575934; end: 10657596f; -[SCChatInputItemDrawerCoordinator deactivateSubmenuDrawerIfShown] */

void FUN_106575934(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be414e0(param_1,param_2,*(undefined8 *)(param_1 + 0xc0));
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__activateKeyboardOnItemDeselecti_11254ece8,
               *(undefined8 *)(param_1 + 0xc0));
    return;
  }
  return;
}



/* Entry: 106575970; end: 106575a13; -[SCChatInputItemDrawerCoordinator _keyboardWillChangeFrame:] */

void FUN_106575970(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c073040();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126cb8a8;
  if (((int)lVar2 != 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf89dc0();
    func_0x00010c28c6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106575a14; end: 106575afb; -[SCChatInputItemDrawerCoordinator _keyboardWillShow:] */

void FUN_106575a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  lVar1 = param_5 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c073040();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bed6be0(param_1,param_2,param_3,param_4,param_5);
    func_0x00010bdf83a0(param_5,param_6,*(undefined8 *)(param_5 + 0xc0));
    func_0x00010bf18e00(param_5,param_6,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106575afc; end: 106575bb7; -[SCChatInputItemDrawerCoordinator _updateDefaultHeightForEndFrame:] */

void FUN_106575afc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar1);
  dVar3 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  if (dVar2 < dVar3) {
    return;
  }
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c18b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setDefaultHeight__112640638);
  return;
}



/* Entry: 106575bb8; end: 106575c13; -[SCChatInputItemDrawerCoordinator _keyboardDidShow:] */

void FUN_106575bb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c073040();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeTransitionToState__1125ae8c0,1);
    return;
  }
  return;
}



/* Entry: 106575c14; end: 106575c83; -[SCChatInputItemDrawerCoordinator _keyboardWillHide:] */

void FUN_106575c14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c073040();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    func_0x00010bf18e00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeTransitionToState__1125ae8c0,0);
    return;
  }
  return;
}



/* Entry: 106575c84; end: 106575cff; -[SCChatInputItemDrawerCoordinator _keyboardDidHide:] */

void FUN_106575c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x7c) == '\x01') &&
     (*(undefined1 *)(param_1 + 0x7c) = 0, *(long *)(param_1 + 0xb0) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106575d00; end: 106575e07; -[SCChatInputItemDrawerCoordinator gestureRecognizerShouldBegin:] */

bool FUN_106575d00(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar6 = true;
  }
  else {
    uVar3 = param_3 + 0x40;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c074c20();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      uVar3 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5);
      _objc_release(uVar3);
      bVar6 = ABS(param_1) < ABS(param_2);
    }
    else {
      bVar6 = false;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return bVar6;
}



/* Entry: 106575e08; end: 106575e23; -[SCChatInputItemDrawerCoordinator _addControlEventsForItem:] */

void FUN_106575e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_addTarget_action_forControlEvent_11259c900,param_1,
             PTR_s__didTouchUpInside__1125311a8,0x40);
  return;
}



/* Entry: 106575e24; end: 10657611b; -[SCChatInputItemDrawerCoordinator _didTouchUpInside:] */

void FUN_106575e24(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c07d660();
  lVar3 = param_2;
  func_0x00010be068a0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (((uVar2 & 1) == 0) && (lVar3 != 0)) {
    lVar5 = param_2 + 0x40;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2 + 0x40;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c065860(lVar4,param_3,lVar7,param_4);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar5);
    lVar7 = *(long *)(param_2 + 0xb0);
    lVar5 = param_2 + 0x40;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf89dc0();
    dVar8 = param_1;
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010becaba0(param_2,param_3,lVar3,lVar7);
    func_0x00010be34fe0(param_2,param_3,lVar3,lVar5);
    if (lVar7 == 2) {
      dVar9 = dVar8;
      func_0x00010c0c3420(lVar3);
      dVar10 = dVar9;
      func_0x00010bf693e0(lVar3);
      bVar1 = dVar10 < dVar9;
    }
    else {
      bVar1 = false;
    }
    if (((lVar5 == 2) || (param_1 == dVar8 && lVar7 == 1)) || (bVar1)) {
      func_0x00010c2642a0(param_2);
    }
    if (*(long *)(param_2 + 0xc0) == 0) {
      lVar4 = param_2;
      func_0x00010c075ec0();
      if ((int)lVar4 != 0) {
        lVar4 = param_2 + 0xa8;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bdf8300(param_2,param_3,lVar4);
        _objc_release(lVar4);
      }
    }
    else {
      func_0x00010bdf83a0(param_2);
    }
    func_0x00010bdc4d00(param_2,param_3,param_4);
    lVar4 = param_2 + 0x40;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfa2fc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101b80(lVar6,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar4);
    if (*(char *)(param_2 + 0x7b) == '\x01') {
      func_0x00010c13d980(param_2);
    }
    func_0x00010be6d020(param_1,param_2,param_3,lVar7,lVar5);
    if ((*(byte *)(param_2 + 0x7b) & 1) == 0) {
      func_0x00010c13d980(param_2);
    }
    lVar5 = param_2;
    func_0x00010be414e0(param_2,param_3,param_4);
    if ((int)lVar5 != 0) {
      param_2 = param_2 + 0x40;
      _objc_loadWeakRetained(param_2);
      func_0x00010c28a7e0();
      _objc_release(param_2);
    }
  }
  else if ((uVar2 & 1) == 0) {
    func_0x00010c1fadc0(param_4,param_3,1);
    param_2 = param_2 + 0x40;
    _objc_loadWeakRetained(param_2);
    lVar5 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfa2fc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101b80(lVar5,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(param_2);
    func_0x00010c1fadc0(param_4,param_3,0);
  }
  else {
    func_0x00010bdc4d20(param_2,param_3,param_4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10657611c; end: 1065761c3; -[SCChatInputItemDrawerCoordinator _isItemInSubmenu:] */

long FUN_10657611c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ec80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010c065be0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return lVar3;
}



/* Entry: 1065761c4; end: 106576223; -[SCChatInputItemDrawerCoordinator _targetStateForDrawer:currentState:] */

ulong FUN_1065761c4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_preferredTargetState_11261f5e8);
  if ((uVar1 & 1) == 0) {
    if (param_4 < 2) {
      param_4 = 1;
    }
  }
  else {
    param_4 = param_3;
    func_0x00010c106f20(param_3);
  }
  _objc_release(param_3);
  return param_4;
}



/* Entry: 106576224; end: 106576507; -[SCChatInputItemDrawerCoordinator _externalPan:] */

void FUN_106576224(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2cfa0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_3 + 0x40;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c074c20();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      uVar4 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIScrollView_1126af098;
      _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      uVar4 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5);
      dVar9 = param_1;
      dVar12 = param_2;
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5);
      dVar10 = dVar9;
      dVar13 = dVar12;
      _objc_release(uVar4);
      lVar1 = param_3 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c065720();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5);
      dVar11 = dVar10;
      dVar14 = dVar13;
      _objc_release(lVar7);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c065720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar4 = param_5;
      func_0x00010c252440();
      if (uVar4 - 3 < 2) {
        uVar8 = *(undefined8 *)(param_3 + 0x70);
        *(undefined8 *)(param_3 + 0x70) = 0;
        _objc_release(uVar8);
        func_0x00010be0d800(param_1,param_2,dVar9,dVar12,param_3);
      }
      else if (uVar4 == 2) {
        func_0x00010be0d820(dVar10,dVar13,param_1,param_2,dVar9,dVar12,param_3);
      }
      else if (uVar4 == 1) {
        lVar1 = param_3 + 0x40;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010c065720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetMaxY();
        *(ulong *)(param_3 + 0x68) = (ulong)(dVar11 <= dVar14);
        _objc_release(lVar2);
        _objc_release(lVar1);
        func_0x00010be0d7e0(dVar9,dVar12,param_3);
      }
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106576508; end: 1065765c7; -[SCChatInputItemDrawerCoordinator _externalPanDidBeginAtPanLocation:externalScrollView:velocity:] */

void FUN_106576508(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  FUN_1065765c8(param_6,param_5);
  *(char *)(param_3 + 0x59) = (char)param_6;
  lVar3 = param_3 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf89dc0();
  *(undefined8 *)(param_3 + 0x50) = param_1;
  _objc_release(lVar3);
  bVar1 = param_2 != 0.0 && param_2 >= 0.0;
  bVar2 = bVar1;
  if (param_5 == 0) {
    bVar2 = param_2 < 0.0;
  }
  if (param_5 != 1) {
    bVar1 = bVar2;
  }
  if ((*(long *)(param_3 + 0xb0) == 0) && ((*(byte *)(param_3 + 0x59) & bVar1) != 0)) {
    lVar3 = param_3 + 0xa8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bdc4c40(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1065765c8; end: 106576623;  */

uint FUN_1065765c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint unaff_w20;
  
  _objc_retain();
  if (param_2 == 1) {
    uVar1 = param_1;
    func_0x00010c06c7a0(param_1);
    unaff_w20 = (uint)uVar1;
  }
  else if (param_2 == 0) {
    uVar1 = param_1;
    func_0x00010c06c720(param_1);
    unaff_w20 = (uint)uVar1;
  }
  _objc_release(param_1);
  return unaff_w20 & 1;
}



/* Entry: 106576624; end: 10657682f; -[SCChatInputItemDrawerCoordinator _externalPanGestureRecognizer:didChangeLocationInSuperview:panLocation:externalScrollView:translation:velocity:] */

void FUN_106576624(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,double param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte unaff_w25;
  long lVar7;
  float fVar8;
  double dVar9;
  
  _objc_retain(param_9);
  _objc_retain(param_11);
  lVar1 = param_7 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_7 + 0x68);
  _objc_retain();
  if (lVar7 == 1) {
    func_0x00010bfb68e0(lVar2);
    _CGRectGetMaxY();
    unaff_w25 = param_2 <= param_1;
  }
  else if (lVar7 == 0) {
    func_0x00010bfb68e0(lVar2);
    _CGRectGetMaxY();
    unaff_w25 = param_1 <= param_2;
  }
  fVar8 = SUB84(param_1,0);
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = param_11;
  FUN_1065765c8(param_11,*(undefined8 *)(param_7 + 0x68));
  _objc_release(param_11);
  uVar4 = (uint)(param_6 != 0.0 && param_6 >= 0.0);
  uVar6 = uVar4;
  if (param_10 == 0) {
    uVar6 = (uint)(param_6 < 0.0);
  }
  if (param_10 != 1) {
    uVar4 = uVar6;
  }
  if ((((unaff_w25 & 1) == 0) && ((*(byte *)(param_7 + 0x58) & 1) == 0)) &&
     ((*(byte *)(param_7 + 0x59) & uVar4 & (uint)uVar5 &
      (uint)(param_10 == 1 && *(long *)(param_7 + 0xb0) == 2)) == 0)) {
    uVar5 = *(undefined8 *)(param_7 + 0x60);
    *(undefined8 *)(param_7 + 0x60) = 0;
    _objc_release(uVar5);
  }
  else {
    if (*(long *)(param_7 + 0x60) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      dVar9 = param_4;
      func_0x00010c0df720(param_4);
      fVar8 = SUB84(dVar9,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_7 + 0x60);
      *(undefined **)(param_7 + 0x60) = puVar3;
      _objc_release(uVar5);
    }
    if ((*(byte *)(param_7 + 0x58) & 1) == 0) {
      lVar1 = param_7 + 0xa8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c2a5a40();
      _objc_release(lVar1);
    }
    func_0x00010bfb2c80(*(undefined8 *)(param_7 + 0x60));
    *(undefined1 *)(param_7 + 0x58) = 1;
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)(param_7 + 0x70);
    *(undefined8 *)(param_7 + 0x70) = param_9;
    _objc_release(uVar5);
    func_0x00010be6fd80(param_3,param_4 - (double)fVar8,param_5,param_6,
                        *(undefined8 *)(param_7 + 0x50),param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 106576830; end: 1065768cf; -[SCChatInputItemDrawerCoordinator _externalPanDidFinishWithTranslation:velocity:completion:] */

void FUN_106576830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  if (*(char *)(param_5 + 0x58) == '\x01') {
    func_0x00010be6fda0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x50),param_5,
                        param_6,param_7);
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  *(undefined1 *)(param_5 + 0x58) = 0;
  *(undefined8 *)(param_5 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_5 + 0x60);
  *(undefined8 *)(param_5 + 0x60) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1065768d0; end: 106576a43; -[SCChatInputItemDrawerCoordinator _panDrawer:] */

void FUN_1065768d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2cfa0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5,param_4,lVar2);
    uVar3 = param_1;
    uVar5 = param_2;
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5,param_4,lVar1);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c252440();
    if (lVar1 - 3U < 2) {
      uVar4 = *(undefined8 *)(param_3 + 0x70);
      *(undefined8 *)(param_3 + 0x70) = 0;
      _objc_release(uVar4);
      func_0x00010be6fda0(param_1,param_2,uVar3,uVar5,*(undefined8 *)(param_3 + 0x50),param_3,
                          param_4,0);
    }
    else if (lVar1 == 2) {
      func_0x00010be6fd80(param_1,param_2,uVar3,uVar5,*(undefined8 *)(param_3 + 0x50),param_3,
                          param_4,param_5);
    }
    else if (lVar1 == 1) {
      _objc_retain(param_5);
      uVar3 = *(undefined8 *)(param_3 + 0x70);
      *(long *)(param_3 + 0x70) = param_5;
      _objc_release(uVar3);
      func_0x00010be6fd60(param_3,param_4,param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106576a44; end: 106576abb; -[SCChatInputItemDrawerCoordinator _panDidBegin:] */

void FUN_106576a44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010be34b80(param_2);
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf89dc0();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  _objc_release(lVar1);
  param_2 = param_2 + 0xa8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c2a5a40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106576abc; end: 106576dbf; -[SCChatInputItemDrawerCoordinator _panDidChangeWithTranslation:velocity:startHeight:gestureRecognizer:] */

void FUN_106576abc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_8);
  func_0x00010be068c0(param_1,param_2,param_5,param_6);
  lVar1 = param_6 + 0x40;
  dVar7 = param_1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf89dc0();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126cb8a8;
  if (param_1 == dVar7) {
    uVar6 = *(undefined8 *)(param_6 + 0x98);
    lVar1 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf89dc0();
    func_0x00010c0f3680(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_7,puVar4);
  }
  else {
    if (((0.0 < param_1) && (*(long *)(param_6 + 0xb0) == 0)) &&
       (uVar2 = param_6, func_0x00010be3f5c0(), (uVar2 & 1) == 0)) {
      lVar1 = param_6 + 0xa8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bdc4c40(param_6,param_7,lVar1);
      _objc_release(lVar1);
    }
    lVar1 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c191880(param_1);
    _objc_release(lVar1);
    lVar1 = param_6 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf78240();
    _objc_release(lVar1);
    lVar1 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar7 = param_1;
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010beed160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar8 = dVar7;
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_6 + 0x90);
    puVar4 = PTR_PTR_1126cb8b0;
    _objc_alloc(PTR_PTR_1126cb8b0);
    func_0x00010c02f920(dVar8,param_1 - dVar7);
    func_0x00010c0d9840(uVar6,param_7,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126cb8a8;
    uVar6 = *(undefined8 *)(param_6 + 0x98);
    lVar1 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf89dc0();
    func_0x00010c0f3680(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_7,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar1);
    lVar1 = param_6 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    puVar4 = (undefined *)(param_6 + 0x40);
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c23d160(param_2,param_3,lVar1);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 106576dc0; end: 106576fc3; -[SCChatInputItemDrawerCoordinator _panDidFinishWithTranslation:velocity:startHeight:completion:] */

void FUN_106576dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  
  _objc_retain(param_8);
  if ((*(byte *)(param_6 + 0x79) & 1) == 0) {
    uVar8 = param_6;
    func_0x00010be09960(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar8 = 0;
  }
  puVar2 = PTR_PTR_1126cb8a8;
  uVar9 = *(undefined8 *)(param_6 + 0x98);
  lVar1 = param_6 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf89dc0();
  func_0x00010c0f36a0(puVar2,param_7,uVar8 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9,param_7,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  *(undefined1 *)(param_6 + 0x79) = 0;
  lVar1 = param_6 + 0xa8;
  _objc_loadWeakRetained();
  uVar3 = param_6;
  func_0x00010c075ec0();
  if ((uVar8 != 0) && ((uVar3 & 1) == 0)) {
    lVar4 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_6 + 0x40;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c252440();
    func_0x00010c0a8b40(lVar5,param_7,lVar1,lVar7,uVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  func_0x00010c2a63a0(lVar1,param_7,uVar8);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106576fc4;
  puStack_a0 = &UNK_11085b7b0;
  lStack_98 = lVar1;
  uStack_90 = param_8;
  uStack_88 = uVar8;
  _objc_retain(param_8);
  _objc_retain(lVar1);
  func_0x00010c27a900(param_6,param_7,uVar8,1,&puStack_b8);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_release(param_8);
  _objc_release(lVar1);
  return;
}



/* Entry: 106576fc4; end: 106577007;  */

void FUN_106576fc4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf75ae0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106576ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 106577008; end: 10657706b; -[SCChatInputItemDrawerCoordinator _haultDrawerAnimator] */

void FUN_106577008(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10657706c; end: 1065770ef; -[SCChatInputItemDrawerCoordinator _isCurrentDrawerActivated] */

uint FUN_10657706c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar1 = param_1;
  func_0x00010c075ec0();
  lVar2 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = (uint)(lVar4 != 0);
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c074c20();
    uVar5 = (uint)lVar3 ^ 1;
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  return uVar5;
}



/* Entry: 1065770f0; end: 106577197; -[SCChatInputItemDrawerCoordinator _drawerHeightWithTranslation:startHeight:] */

double FUN_1065770f0(double param_1,double param_2,double param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xf,4,0);
  if (iVar1 == 0) {
    dVar5 = 0.0;
    dVar3 = param_1;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0xa0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar3 = param_1;
    _objc_release(uVar2);
    dVar5 = param_1;
  }
  param_4 = param_4 + 0xa8;
  _objc_loadWeakRetained(param_4);
  func_0x00010c0c3420();
  _objc_release(param_4);
  dVar4 = param_3 - param_2;
  if (param_3 - param_2 <= dVar5) {
    dVar4 = dVar5;
  }
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  return dVar3;
}



/* Entry: 106577198; end: 10657730b; -[SCChatInputItemDrawerCoordinator _endDrawerStateWithTranslation:velocity:startHeight:] */

undefined8
FUN_106577198(double param_1,undefined8 param_2,undefined8 param_3,double param_4,undefined8 param_5
             ,long param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  func_0x00010be068c0(param_1,param_2,param_5);
  lVar4 = param_6 + 0xa8;
  dVar9 = param_1;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf693e0();
  dVar10 = dVar9;
  _objc_release(lVar4);
  lVar4 = param_6 + 0xa8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0c3420();
  dVar11 = dVar10;
  _objc_release(lVar4);
  func_0x00010bfe0840(param_6,param_7,*(undefined8 *)(param_6 + 0xb0));
  uVar5 = param_6 + 0xa8;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010c2307a0();
  _objc_release(uVar5);
  iVar8 = (int)uVar6;
  if (0.0 <= param_4) {
    if (0.0 < param_4) {
      uVar7 = 1;
      if (iVar8 != 0) {
        uVar7 = 2;
      }
      if (param_1 < dVar9) {
        return 0;
      }
      return uVar7;
    }
    if (param_1 <= dVar9) {
      if (*(long *)(param_6 + 0xb0) != 0) {
        dVar10 = dVar9;
        if (param_1 <= dVar9) {
          dVar10 = param_1;
        }
        if (dVar11 != 0.0) {
          dVar10 = dVar9 - dVar10;
        }
        uVar7 = 1;
        if (iVar8 != 0) {
          uVar7 = 2;
        }
        if (0.3 < dVar10 / dVar9) {
          return 0;
        }
        return uVar7;
      }
      bVar3 = iVar8 == 0;
      goto LAB_106577244;
    }
    dVar12 = dVar10;
    if (param_1 <= dVar10) {
      dVar12 = param_1;
    }
    dVar13 = dVar12 - dVar9;
    if (dVar11 != dVar9) {
      dVar13 = dVar10 - dVar12;
    }
    dVar13 = dVar13 / (dVar10 - dVar9);
    bVar3 = NAN(dVar13);
    bVar2 = dVar13 == 0.3;
    bVar1 = dVar13 < 0.3;
  }
  else {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(dVar9)) {
      bVar1 = param_1 < dVar9;
      bVar2 = param_1 == dVar9;
      bVar3 = false;
    }
  }
  bVar3 = (bVar2 || bVar1 != bVar3) && (uVar6 & 1) == 0;
LAB_106577244:
  uVar7 = 1;
  if (!bVar3) {
    uVar7 = 2;
  }
  return uVar7;
}



/* Entry: 10657730c; end: 10657739b; -[SCChatInputItemDrawerCoordinator _completeAnimationToState:drawer:] */

void FUN_10657730c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf43c60(param_1,param_2,param_3);
  if (param_3 == 0) {
    uVar1 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c074c20();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        func_0x00010bdf8300(param_1,param_2,param_4);
      }
      else {
        func_0x00010bdf83a0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10657739c; end: 1065774a7; -[SCChatInputItemDrawerCoordinator _deactivateDrawer:] */

void FUN_10657739c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c139800();
  _objc_release(lVar4);
  func_0x00010c2a6a00(param_3);
  lVar4 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  func_0x00010bf7a180(param_3);
  lVar4 = *(long *)(param_1 + 0x48);
  _objc_release(param_3);
  if (param_3 != lVar4) {
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c252440();
    func_0x00010c0a8b20(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,lVar4);
  return;
}



/* Entry: 1065774a8; end: 1065775c3; -[SCChatInputItemDrawerCoordinator _activateDrawer:] */

void FUN_1065774a8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x48)) {
    uVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c073040();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c1ad7e0();
      _objc_release(lVar3);
    }
  }
  _objc_storeWeak(param_1 + 0xa8,param_3);
  if (param_3 != *(long *)(param_1 + 0x48)) {
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010c252440();
    func_0x00010c0a8b00(lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  func_0x00010c2a5980(param_3);
  lVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  func_0x00010bf72840(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065775c4; end: 10657773f; -[SCChatInputItemDrawerCoordinator _attachItem:toDrawer:] */

void FUN_1065775c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bf4b900();
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c2a6740(uVar5);
    uVar3 = uVar5;
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar3);
    func_0x00010c12c8e0(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6);
    _objc_release(uVar3);
    func_0x00010c1ad460(param_4);
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1ad2a0(param_4);
    _objc_release(lVar4);
    puVar1 = PTR_DAT_1126a54f8;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    _objc_release(param_4);
    if ((param_4 != 0) && ((int)lVar4 != 0)) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010befbea0();
      _objc_release(param_1);
    }
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106577740; end: 106577897; -[SCChatInputItemDrawerCoordinator _attachItem:toController:] */

void FUN_106577740(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bf4b900();
  if (iVar2 != 0) {
    func_0x00010c18b5e0(param_3);
    func_0x00010c1ad460(param_4);
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1ad2a0(param_4);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(uVar4);
    puVar1 = PTR_DAT_1126a54f0;
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    _objc_release(param_4);
    if ((param_4 != 0) && ((int)lVar3 != 0)) {
      func_0x00010c25dfa0(param_3);
      func_0x00010c20eaa0(param_4);
    }
    puVar1 = PTR_DAT_1126a54f8;
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    _objc_release(param_4);
    if ((param_4 != 0) && ((int)lVar3 != 0)) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010befbea0();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106577898; end: 106577a27; -[SCChatInputItemDrawerCoordinator _attachDrawer:] */

void FUN_106577898(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf697e0(param_1);
    func_0x00010c18af60(param_3);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1ad2a0(param_3);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bef7700();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf77e80(param_3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde6640(param_1);
    _objc_release(lVar2);
    puVar1 = PTR_DAT_1126a54f8;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    _objc_release(param_3);
    if ((param_3 != 0) && ((int)lVar2 != 0)) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010befbea0();
      _objc_release(param_1);
    }
    lVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106577a28; end: 106577c3f; -[SCChatInputItemDrawerCoordinator _constraintDrawerView:] */

void FUN_106577a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c219b60(param_3,param_2,0);
  uVar1 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  func_0x00010c1cbe20(param_3);
  func_0x00010c08cdc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106577c40; end: 106577c8f; -[SCChatInputItemDrawerCoordinator _addItem:] */

void FUN_106577c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
  func_0x00010bdc6660(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106577c90; end: 106577d33; -[SCChatInputItemDrawerCoordinator _deactivateItem:] */

void FUN_106577c90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c1fadc0(param_3,param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _objc_release(uVar1);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0e00e0(lVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010bdf8300(param_1,param_2,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106577d34; end: 106577de7; -[SCChatInputItemDrawerCoordinator _activateItem:] */

void FUN_106577d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1fadc0(param_3,param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (lVar2 != 0) {
    func_0x00010bdd0380(param_1,param_2,lVar2);
    func_0x00010bdc4c40(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106577de8; end: 106577e8f; -[SCChatInputItemDrawerCoordinator _drawerForInputItem:] */

void FUN_106577de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010be851c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106577e90; end: 106577f47; -[SCChatInputItemDrawerCoordinator _queryAndCachePluginDrawerForItem:] */

void FUN_106577e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010c101d20();
  if (lVar3 == 1) {
    lVar3 = lVar2;
    func_0x00010bf55ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd04c0(param_1,param_2,param_3,lVar3);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106577f48; end: 1065781bb; -[SCChatInputItemDrawerCoordinator _openCurrentDrawerWithPreviousState:previousHeight:targetState:] */

void FUN_106577f48(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_4 != 0) && (dVar5 = param_1, func_0x00010bfe0840(param_2), param_1 == dVar5)) {
    lVar1 = param_2 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf89dc0();
    dVar6 = dVar5;
    func_0x00010bfe0840(param_2);
    dVar7 = dVar6;
    _objc_release(lVar1);
    if (dVar5 != dVar6) {
      func_0x00010bfe0840(param_2);
      lVar1 = param_2 + 0x40;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c191880(dVar7);
      _objc_release(lVar1);
      func_0x00010c209fc0(param_2);
      lVar1 = param_2 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010beed160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar5 = dVar7;
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar6 = dVar5;
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_2 + 0x90);
      puVar3 = PTR_PTR_1126cb8b0;
      _objc_alloc(PTR_PTR_1126cb8b0);
      func_0x00010c02f920(dVar6,dVar5 - dVar7);
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126cb8a8;
      uVar4 = *(undefined8 *)(param_2 + 0x98);
      lVar1 = param_2 + 0x40;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf89dc0();
      func_0x00010c28c6e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
      param_2 = param_2 + 0xa8;
      _objc_loadWeakRetained(param_2);
      func_0x00010c23d160(dVar6,dVar5 - dVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c27a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_transitionDrawerToState_animated_11267c468,param_5,1,0);
  return;
}



/* Entry: 1065781bc; end: 1065782a3; -[SCChatInputItemDrawerCoordinator _activateKeyboardOnItemDeselection:] */

void FUN_1065781bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c1fadc0(param_3,param_2,0);
  func_0x00010bdf83a0(param_1,param_2,*(undefined8 *)(param_1 + 0xc0));
  func_0x00010bdc4c40(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0xb0) == 1) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106578274;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
    return;
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf179a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065782a4; end: 1065782fb; -[SCChatInputItemDrawerCoordinator canResignFirstResponder] */

bool FUN_1065782a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    _objc_retain(lVar1);
    func_0x00010c195460(lVar1,param_2,0);
    func_0x00010c195460(lVar1,param_2,1);
    _objc_release(lVar1);
  }
  return lVar1 == 0;
}



/* Entry: 1065782fc; end: 10657836f; -[SCChatInputItemDrawerCoordinator beginTransitionToState:] */

void FUN_1065782fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bdda120();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    puVar2 = PTR_PTR_1126cb8c8;
    func_0x00010c2a70a0(PTR_PTR_1126cb8c8,param_2,*(undefined8 *)(param_1 + 0xb0),param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106578370; end: 1065783f3; -[SCChatInputItemDrawerCoordinator completeTransitionToState:] */

void FUN_106578370(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdda120();
  if ((int)lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c209fc0(param_1,param_2,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    puVar2 = PTR_PTR_1126cb8c8;
    func_0x00010bf7db40(PTR_PTR_1126cb8c8,param_2,uVar4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1065783f4; end: 10657841b; -[SCChatInputItemDrawerCoordinator _canTransitionToState:] */

bool FUN_1065783f4(long param_1,undefined8 param_2,long param_3)

{
  if (((*(byte *)(param_1 + 0x78) & 1) == 0) && (*(long *)(param_1 + 0x70) == 0)) {
    return param_3 != *(long *)(param_1 + 0xb0);
  }
  return false;
}



/* Entry: 10657841c; end: 106578433; -[SCChatInputItemDrawerCoordinator currentDrawer] */

void FUN_10657841c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106578434; end: 10657843f; -[SCChatInputItemDrawerCoordinator setCurrentDrawer:] */

void FUN_106578434(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106578440; end: 106578447; -[SCChatInputItemDrawerCoordinator state] */

undefined8 FUN_106578440(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106578448; end: 10657844f; -[SCChatInputItemDrawerCoordinator defaultHeight] */

undefined8 FUN_106578448(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106578450; end: 106578457; -[SCChatInputItemDrawerCoordinator currentItem] */

undefined8 FUN_106578450(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106578458; end: 106578487; -[SCChatInputItemDrawerCoordinator setCurrentItem:] */

void FUN_106578458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106578488; end: 10657856b; -[SCChatInputItemDrawerCoordinator .cxx_destruct] */

void FUN_106578488(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10657856c; end: 1065786b7; -[SCChatInputItemKeyboardController initWithInputViewController:sizeEventPublisher:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10657856c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1c00;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274a9a8,param_3);
    lVar4 = (long)_DAT_11274a9ac;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a9b0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274a9b0) = puVar3;
    _objc_release(uVar2);
    func_0x00010be89aa0(puVar1);
    _objc_release(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1065786b8; end: 1065786f7;  */

void FUN_1065786b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e54138,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1065786f8; end: 106578757; -[SCChatInputItemKeyboardController _inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065786f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1 + _DAT_11274a9a8;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cb878;
  _objc_opt_class(PTR_PTR_1126cb878);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106578758; end: 1065787f3; -[SCChatInputItemKeyboardController _registerNotifications] */

void FUN_106578758(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065787f4; end: 106578863; -[SCChatInputItemKeyboardController setDefaultDrawerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065787f4(double param_1,long param_2)

{
  long lVar1;
  
  if (*(double *)(param_2 + _DAT_11274a9a0) != param_1) {
    *(double *)(param_2 + _DAT_11274a9a0) = param_1;
    lVar1 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar1);
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106578864; end: 106578bef; -[SCChatInputItemKeyboardController _keyboardWillChangeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578864(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  ulong uVar6;
  
  _objc_retain(param_7);
  lVar10 = (long)_DAT_11274a9a8;
  lVar2 = param_5 + lVar10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c073040();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    uVar9 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    dVar14 = param_1;
    uVar12 = param_3;
    uVar13 = param_4;
    _objc_release(uVar4);
    _objc_release(uVar9);
    uVar9 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar4);
    _objc_release(uVar9);
    uVar5 = *(ulong *)(param_5 + _DAT_11274a9b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    iVar1 = (int)uVar6;
    if ((uVar6 & 1) == 0) {
      dVar11 = param_1;
      _CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)PTR__CGRectZero_110347608,
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      _objc_release(uVar5);
      dVar14 = dVar11;
      if (iVar1 != 0) {
        puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c760();
        _CGRectGetHeight();
        dVar14 = dVar11;
        _objc_release(puVar7);
        param_2 = dVar11;
        param_3 = uVar12;
        param_4 = uVar13;
      }
    }
    else {
      _objc_release(uVar5);
    }
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetHeight();
    dVar11 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar14 = dVar14 - dVar11;
    _objc_release(puVar7);
    lVar2 = param_5 + lVar10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf89dc0();
    _objc_release(lVar2);
    if (dVar14 != dVar11) {
      lVar2 = param_5 + lVar10;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x0001008cd514();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c148fc0();
      _objc_release(lVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_5 + lVar10;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c065720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_5 + lVar10;
      _objc_loadWeakRetained();
      func_0x00010c252440();
      _objc_release(lVar2);
      if ((*(byte *)(param_5 + _DAT_11274a9b4) & 1) == 0) {
        lVar2 = param_5 + lVar10;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c191880(dVar14);
        _objc_release(lVar2);
        uVar9 = *(undefined8 *)(param_5 + _DAT_11274a9ac);
        puVar7 = PTR_PTR_1126cb8b0;
        _objc_alloc(PTR_PTR_1126cb8b0);
        lVar10 = param_5 + lVar10;
        _objc_loadWeakRetained(lVar10);
        lVar2 = lVar10;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        func_0x00010c02f920(puVar7);
        func_0x00010c0d9840(uVar9,param_6,puVar7);
        _objc_release(puVar7);
        _objc_release(lVar2);
        _objc_release(lVar10);
      }
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      func_0x00010c18af60(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106578bf0; end: 106578ca3; -[SCChatInputItemKeyboardController _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578bf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11274a9a8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c073040();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c074c20();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010c2a5980(param_1);
      lVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf72850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didBecomeActive_1125ba3b8);
      return;
    }
  }
  return;
}



/* Entry: 106578ca4; end: 106578cb3; -[SCChatInputItemKeyboardController setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274a9a4) = param_3;
  return;
}



/* Entry: 106578cb4; end: 106578cbb; -[SCChatInputItemKeyboardController canPanDrawer] */

undefined8 FUN_106578cb4(void)

{
  return 1;
}



/* Entry: 106578cbc; end: 106578d63; -[SCChatInputItemKeyboardController willBeginPanningFromState:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578cbc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010c195460(param_4,param_2,0);
    func_0x00010c195460(param_4,param_2,1);
    if (param_3 == 1) {
      param_1 = param_1 + _DAT_11274a9a8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c13a0e0();
    }
    else {
      if (param_3 != 0) goto LAB_106578d50;
      param_1 = param_1 + _DAT_11274a9a8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf179a0();
    }
    _objc_release(param_1);
  }
LAB_106578d50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106578d64; end: 106578d67; -[SCChatInputItemKeyboardController didPanFromState:gestureRecognizer:] */

void FUN_106578d64(void)

{
  return;
}



/* Entry: 106578d68; end: 106578d6b; -[SCChatInputItemKeyboardController willEndPanningToState:] */

void FUN_106578d68(void)

{
  return;
}



/* Entry: 106578d6c; end: 106578e03; -[SCChatInputItemKeyboardController didEndPanningToState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578d6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar1 = param_1 + _DAT_11274a9a8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c073040();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010be3c160(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c065720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28c260();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106578e04; end: 106578e13; -[SCChatInputItemKeyboardController maximumDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106578e04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a9a0);
}



/* Entry: 106578e14; end: 106578e17; -[SCChatInputItemKeyboardController willBecomeActive] */

void FUN_106578e14(void)

{
  return;
}



/* Entry: 106578e18; end: 106578e1b; -[SCChatInputItemKeyboardController didBecomeActive] */

void FUN_106578e18(void)

{
  return;
}



/* Entry: 106578e1c; end: 106578e1f; -[SCChatInputItemKeyboardController willResignActive] */

void FUN_106578e1c(void)

{
  return;
}



/* Entry: 106578e20; end: 106578eef; -[SCChatInputItemKeyboardController didResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578e20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_11274a9a8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c073040();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010be3c160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c065720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c260();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106578ef0;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  }
  return;
}



/* Entry: 106578ef0; end: 106578f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578ef0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11274a9a8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106578f28; end: 106578f2b; -[SCChatInputItemKeyboardController sizeDidChange:] */

void FUN_106578f28(void)

{
  return;
}



/* Entry: 106578f2c; end: 106578f2f; -[SCChatInputItemKeyboardController willResumeActive] */

void FUN_106578f2c(void)

{
  return;
}



/* Entry: 106578f30; end: 106578f33; -[SCChatInputItemKeyboardController willSuspendActive] */

void FUN_106578f30(void)

{
  return;
}



/* Entry: 106578f34; end: 106578f37; -[SCChatInputItemKeyboardController didActivateDrawerWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

void FUN_106578f34(void)

{
  return;
}



/* Entry: 106578f38; end: 106578f3f; -[SCChatInputItemKeyboardController shouldForceMaximumHeight] */

undefined8 FUN_106578f38(void)

{
  return 0;
}



/* Entry: 106578f40; end: 106578f43; -[SCChatInputItemKeyboardController inputViewController:textViewWillEndEditing:] */

void FUN_106578f40(void)

{
  return;
}


