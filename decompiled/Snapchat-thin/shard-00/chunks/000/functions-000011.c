/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10006c248; end: 10006c34f;  */

void FUN_10006c248(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  lVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  puVar2 = (undefined4 *)0x4;
  func_0x000107c6158c(4,0xffffffffffffffff);
  *(undefined4 **)(lVar1 + 0x10) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x000107c40f44(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c445f8(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  *puVar2 = 0;
  unaff_x20[2] = lVar1;
  (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return;
}



/* Entry: 10006c350; end: 10006c363;  */

void FUN_10006c350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10006c364; end: 10006c57f; -[SCAppStartExperimentReader initWithFilePathURL:allowedConfigs:recoveryKey:heuristicRecoveryManager:startupJournalManager:] */

undefined1 *
FUN_10006c364(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_11270b818;
  uStack_70 = param_2;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c6071c();
    dVar8 = param_1;
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined8 *)((long)puVar3 + 8) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x10);
    *(undefined8 *)((long)puVar3 + 0x10) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x40);
    *(undefined8 *)((long)puVar3 + 0x40) = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x48);
    *(undefined8 *)((long)puVar3 + 0x48) = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x50);
    *(undefined8 *)((long)puVar3 + 0x50) = param_8;
    func_0x000107c61170(uVar4);
    uVar2 = (undefined1)*(undefined8 *)((long)puVar3 + 0x48);
    func_0x000107c4a368();
    *(undefined1 *)((long)puVar3 + 0x69) = uVar2;
    puVar5 = (undefined1 *)puVar3;
    func_0x000107c50774(puVar3);
    func_0x000107c61180();
    puVar6 = (undefined1 *)puVar3;
    func_0x000107c3b72c();
    func_0x000107c61180();
    puVar1 = puRam00000001137fc1d8;
    puRam00000001137fc1d8 = puVar6;
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x28);
    *(undefined **)((long)puVar3 + 0x28) = puVar7;
    func_0x000107c61170(uVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x30);
    *(undefined **)((long)puVar3 + 0x30) = puVar7;
    func_0x000107c61170(uVar4);
    puVar7 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x38);
    *(undefined **)((long)puVar3 + 0x38) = puVar7;
    func_0x000107c61170(uVar4);
    func_0x000107c6071c();
    *(double *)((long)puVar3 + 0x60) = dVar8 - param_1;
    puVar7 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c4a02c();
    *(char *)((long)puVar3 + 0x68) = (char)puVar7;
    *(undefined4 *)((long)puVar3 + 0x6c) = 0;
    *(undefined1 *)((long)puVar3 + 0x6a) = 0;
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 10006c580; end: 10006c59b; -[SCConfigHeuristicRecoveryManagerImpl isSafeModeNeeded] */

undefined1 FUN_10006c580(void)

{
  if (lRam0000000113084238 == -1) {
    return uRam0000000113813c21;
  }
  func_0x000107c61568(0x113084238,FUN_10006c5e0);
  return uRam0000000113813c21;
}



/* Entry: 10006c59c; end: 10006c5df;  */

undefined1
FUN_10006c59c(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  if (*param_3 == -1) {
    return *param_4;
  }
  func_0x000107c61568(param_3,param_5);
  return *param_4;
}



/* Entry: 10006c5e0; end: 10006c7c7;  */

void FUN_10006c5e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000113084230 != -1) {
    func_0x000107c61568(0x113084230,0x10006c6e8);
  }
  if (lRam00000001130841f8 != -1) {
    func_0x000107c61568(0x1130841f8,FUN_10006c7c8);
  }
  FUN_10006c804();
  if (lRam0000000113084228 != -1) {
    func_0x000107c61568(0x113084228,0x10006a064);
  }
  if (lRam0000000113084208 != -1) {
    func_0x000107c61568(0x113084208,FUN_10006c80c);
  }
  uVar1 = uRam0000000113084210;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_100070c04();
  func_0x000107c61170(uVar1);
  FUN_100070bfc();
  bRam0000000113813c21 = (byte)uVar2 & 1;
  return;
}



/* Entry: 10006c7c8; end: 10006c803;  */

void FUN_10006c7c8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  uRam0000000113084200 = uVar1;
  return;
}



/* Entry: 10006c804; end: 10006c80b;  */

void FUN_10006c804(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_lock_11034c780)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10006c80c; end: 10006c8d7;  */

void FUN_10006c80c(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lRam00000001130842b8 != -1) {
    func_0x000107c61568(0x1130842b8,FUN_10006c8d8);
  }
  lVar2 = lVar1;
  FUN_100028790(lVar1,0x113813c28);
  (**(code **)(lVar5 + 0x10))(puVar4,lVar2,lVar1);
  puVar3 = puVar4;
  FUN_10006cb28();
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  puRam0000000113084210 = puVar3;
  return;
}



/* Entry: 10006c8d8; end: 10006c91f;  */

void FUN_10006c8d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5ede0(0);
  func_0x000100028750();
  FUN_100028790(uVar1,0x113813c28);
  FUN_10006c920(uVar1);
  return;
}



/* Entry: 10006c920; end: 10006cb27;  */

void FUN_10006c920(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  lVar4 = *(long *)(puVar2 + 0x10);
  if (lVar4 == 0) {
    func_0x000107c6142c(puVar2);
  }
  else {
    (**(code **)(lVar8 + 0x10))
              (lVar6,puVar2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
  }
  (**(code **)(lVar8 + 0x38))(lVar6,lVar4 == 0,1,lVar1);
  FUN_100029394(lVar6,lVar7);
  lVar4 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
  if ((int)lVar4 == 1) {
    func_0x0001000293e4(lVar7);
    func_0x000107c5ed80(param_1,0,0xe000000000000000);
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar5,lVar7,lVar1);
    func_0x000107c5ed9c(param_1,0xd000000000000019,0x800000010ef3eb20);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
  }
  func_0x0001000293e4(lVar6);
  return;
}



/* Entry: 10006cb28; end: 10006d1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10006cb28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  char *pcVar11;
  long lVar12;
  code *pcVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  char *pcVar20;
  long extraout_x8;
  long extraout_x12;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  char *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = (char *)0x0;
  func_0x000107c5ede0();
  lVar23 = *(long *)(pcVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar22 = (long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar21 = (code *)(lVar22 - extraout_x12);
  (**(code **)(lVar23 + 0x10))(pcVar21,param_2,pcVar11);
  lVar12 = 0;
  FUN_10006d1fc();
  func_0x000107c610f8();
  pcVar10 = pcVar21;
  FUN_10006d21c();
  if (pcVar10 == (code *)0x0) {
    func_0x000107c5ee58();
    func_0x00010006a044();
    if (lRam0000000113084258 != -1) {
      func_0x000107c61568(0x113084258,FUN_10006e83c);
    }
    pcStack_a0 = pcVar10;
    func_0x000107c5ffe4(&uStack_b8,&UNK_10453111c,&puStack_b0,PTR___sSdN_11034dd90);
    uVar24 = uStack_b8;
    puVar16 = PTR___sSiN_11034deb0;
    pcStack_a0 = pcVar10;
    func_0x000107c5ffe4(&uStack_b8,&UNK_104531130,&puStack_b0,PTR___sSiN_11034deb0);
    uVar3 = uStack_b8;
    pcStack_a0 = pcVar10;
    func_0x000107c5ffe4(&uStack_b8,&UNK_104531144,&puStack_b0,puVar16);
    lVar15 = lVar12;
    func_0x000107c610f8();
    lVar4 = _DAT_113084310;
    *(undefined8 *)(lVar15 + _DAT_113084310) = 0;
    lVar5 = _DAT_113084318;
    *(undefined8 *)(lVar15 + _DAT_113084318) = 0;
    lVar6 = _DAT_113084320;
    *(undefined8 *)(lVar15 + _DAT_113084320) = 0;
    lVar7 = _DAT_113084328;
    *(undefined8 *)(lVar15 + _DAT_113084328) = 0;
    lVar8 = _DAT_113084330;
    *(undefined8 *)(lVar15 + _DAT_113084330) = 0;
    puVar1 = (undefined8 *)(lVar15 + _DAT_113084338);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    lVar9 = _DAT_113084340;
    *(undefined8 *)(lVar15 + _DAT_113084340) = 0xffffffffffffffff;
    puVar1 = (undefined8 *)(lVar15 + _DAT_113084348);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar2 = (undefined8 *)(lVar15 + _DAT_113084350);
    *(undefined8 *)(lVar15 + lVar4) = param_1;
    *(undefined8 *)(lVar15 + lVar5) = 0;
    *(undefined8 *)(lVar15 + lVar6) = uVar24;
    *(undefined8 *)(lVar15 + lVar7) = uVar3;
    *(undefined8 *)(lVar15 + lVar8) = uStack_b8;
    *(undefined8 *)(lVar15 + lVar9) = 0xffffffffffffffff;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    pcVar10 = (code *)&lStack_d0;
    pcVar20 = PTR_s_init_1125d9248;
    lStack_d0 = lVar15;
    lStack_c8 = lVar12;
    func_0x000107c61154(pcVar10);
    puVar16 = PTR_PTR_1126bdbc0;
    func_0x000107c61168();
    func_0x000107c41308();
    func_0x000107c61180();
    if (puVar16 != (undefined *)0x0) {
      puVar17 = puVar16;
      func_0x000107c5ee30();
      pcStack_d8 = pcVar20;
      func_0x000107c61170(puVar16);
      func_0x000107c5eda8(lVar22);
      puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar18 = puVar16;
      func_0x000107c5ed90();
      puStack_b0 = (undefined *)0x0;
      puVar19 = puVar16;
      func_0x000107c409e4();
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar18);
      puVar16 = puStack_b0;
      if ((int)puVar19 == 0) {
        puVar18 = puStack_b0;
        func_0x000107c61174(puStack_b0);
        func_0x000107c5ed30(puVar16);
        func_0x000107c61170(puVar18);
        func_0x000107c61654();
        func_0x00010006c090(puVar17,pcStack_d8);
        (**(code **)(lVar23 + 8))(lVar22,pcVar11);
        func_0x000107c614ac(puVar16);
        pcVar20 = pcVar11;
      }
      else {
        func_0x000107c61174(puStack_b0);
        pcVar20 = pcStack_d8;
        func_0x000107c5ee40(param_2,0,puVar17,pcStack_d8);
        (**(code **)(lVar23 + 8))(lVar22,pcVar11);
        func_0x00010006c090(puVar17,pcVar20);
      }
    }
  }
  else {
    pcVar13 = pcVar10;
    func_0x00010006a044();
    uVar24 = *(undefined8 *)(pcVar10 + _DAT_113084320);
    if (lRam0000000113084258 != -1) {
      func_0x000107c61568(0x113084258,FUN_10006e83c);
    }
    uVar3 = uRam0000000113084260;
    puVar16 = &UNK_110785170;
    func_0x000107c613fc(&UNK_110785170,0x20,7);
    *(code **)(puVar16 + 0x10) = pcVar13;
    *(undefined8 *)(puVar16 + 0x18) = uVar24;
    puVar17 = &UNK_110785198;
    func_0x000107c613fc(&UNK_110785198,0x20,7);
    *(code **)(puVar17 + 0x10) = FUN_10006eb80;
    *(undefined **)(puVar17 + 0x18) = puVar16;
    puVar18 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_10006eb5c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10006eb60;
    puStack_98 = &UNK_1107851b0;
    ppuVar14 = &puStack_b0;
    puStack_88 = puVar17;
    func_0x000107c60bc4(ppuVar14);
    puVar19 = puStack_88;
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar19);
    FUN_10006eaa4(uVar3,ppuVar14);
    func_0x000107c60bd0(ppuVar14);
    puVar19 = puVar17;
    func_0x000107c61544(puVar17,"",0x73,0x2d,0x18,1);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar19 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10006d1dc);
      (*pcVar10)();
    }
    uVar24 = *(undefined8 *)(pcVar10 + _DAT_113084328);
    puVar16 = &UNK_1107851e8;
    func_0x000107c613fc(&UNK_1107851e8,0x20,7);
    *(code **)(puVar16 + 0x10) = pcVar13;
    *(undefined8 *)(puVar16 + 0x18) = uVar24;
    puVar17 = &UNK_110785210;
    func_0x000107c613fc(&UNK_110785210,0x20,7);
    *(undefined8 *)(puVar17 + 0x10) = 0x10006ebe0;
    *(undefined **)(puVar17 + 0x18) = puVar16;
    pcStack_90 = (code *)0x10006ebdc;
    puStack_b0 = puVar18;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10006eb60;
    puStack_98 = &UNK_110785228;
    ppuVar14 = &puStack_b0;
    puStack_88 = puVar17;
    func_0x000107c60bc4(ppuVar14);
    puVar19 = puStack_88;
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar19);
    FUN_10006eaa4(uVar3,ppuVar14);
    func_0x000107c60bd0(ppuVar14);
    puVar19 = puVar17;
    func_0x000107c61544(puVar17,"",0x73,0x3a,0x18,1);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar19 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10006d1e0);
      (*pcVar10)();
    }
    uVar24 = *(undefined8 *)(pcVar10 + _DAT_113084330);
    puVar16 = &UNK_110785260;
    func_0x000107c613fc(&UNK_110785260,0x20,7);
    *(code **)(puVar16 + 0x10) = pcVar13;
    *(undefined8 *)(puVar16 + 0x18) = uVar24;
    puVar17 = &UNK_110785288;
    func_0x000107c613fc(&UNK_110785288,0x20,7);
    *(undefined8 *)(puVar17 + 0x10) = 0x10006ec04;
    *(undefined **)(puVar17 + 0x18) = puVar16;
    pcStack_90 = (code *)0x10006ec00;
    puStack_b0 = puVar18;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10006eb60;
    puStack_98 = &UNK_1107852a0;
    ppuVar14 = &puStack_b0;
    puStack_88 = puVar17;
    func_0x000107c60bc4(ppuVar14);
    puVar18 = puStack_88;
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar18);
    FUN_10006eaa4(uVar3,ppuVar14);
    func_0x000107c60bd0(ppuVar14);
    pcVar20 = "";
    puVar18 = puVar17;
    func_0x000107c61544(puVar17,"",0x73,0x54,0x18,1);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar18 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10006cec0);
      (*pcVar10)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    *(undefined1 **)(pcVar21 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(pcVar21 + -8) = FUN_10006d1fc;
    ppuVar14 = &PTR_PTR_1129cd3f8;
    func_0x000107c61168(&PTR_PTR_1129cd3f8);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = ppuVar14;
    return auVar26;
  }
  auVar25._8_8_ = pcVar20;
  auVar25._0_8_ = pcVar10;
  return auVar25;
}



/* Entry: 10006d1fc; end: 10006d21b;  */

void FUN_10006d1fc(void)

{
  func_0x000107c61168(&PTR_PTR_1129cd3f8);
  return;
}



/* Entry: 10006d21c; end: 10006d533;  */

/* WARNING: Removing unreachable block (ram,0x00010006d2fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10006d21c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  *(undefined8 *)(unaff_x20 + _DAT_113084310) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084318) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084320) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084328) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084330) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084338);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_113084340) = 0xffffffffffffffff;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084348);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084350);
  uVar3 = param_1;
  FUN_10006d1fc();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  uVar10 = 0;
  uVar5 = param_1;
  func_0x000107c5ede8(param_1,0);
  puVar6 = PTR_PTR_1126bdbc0;
  func_0x000107c61168();
  uVar9 = uVar5;
  func_0x000107c5ee20(uVar5,uVar10);
  func_0x000107c4d9f0();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (puVar6 == (undefined *)0x0) {
    lVar7 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar7 + -8) + 8))(param_1,lVar7);
    func_0x00010006c090(uVar5,uVar10);
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_c0,puVar6);
    func_0x00010006c090(uVar5,uVar10);
    func_0x000107c615e8(puVar6);
    lVar7 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar7 + -8) + 8))(param_1,lVar7);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    func_0x000107c61170(puVar4);
    FUN_10006e7f4(&uStack_a0);
  }
  else {
    plVar8 = &lStack_c8;
    func_0x000107c6147c(plVar8,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)plVar8 & 1) != 0) {
      *(undefined8 *)(puVar4 + _DAT_113084310) = *(undefined8 *)(lStack_c8 + _DAT_113084310);
      *(undefined8 *)(puVar4 + _DAT_113084318) = *(undefined8 *)(lStack_c8 + _DAT_113084318);
      *(undefined8 *)(puVar4 + _DAT_113084320) = *(undefined8 *)(lStack_c8 + _DAT_113084320);
      *(undefined8 *)(puVar4 + _DAT_113084328) = *(undefined8 *)(lStack_c8 + _DAT_113084328);
      *(undefined8 *)(puVar4 + _DAT_113084330) = *(undefined8 *)(lStack_c8 + _DAT_113084330);
      uVar2 = *(undefined1 *)((undefined8 *)(lStack_c8 + _DAT_113084338) + 1);
      *(undefined8 *)(puVar4 + _DAT_113084338) = *(undefined8 *)(lStack_c8 + _DAT_113084338);
      *(undefined1 *)((long)(puVar4 + _DAT_113084338) + 8) = uVar2;
      *(undefined8 *)(puVar4 + _DAT_113084340) = *(undefined8 *)(lStack_c8 + _DAT_113084340);
      uVar2 = *(undefined1 *)((undefined8 *)(lStack_c8 + _DAT_113084348) + 1);
      *(undefined8 *)(puVar4 + _DAT_113084348) = *(undefined8 *)(lStack_c8 + _DAT_113084348);
      *(undefined1 *)((long)(puVar4 + _DAT_113084348) + 8) = uVar2;
      uVar3 = *(undefined8 *)(lStack_c8 + _DAT_113084350);
      uVar5 = ((undefined8 *)(lStack_c8 + _DAT_113084350))[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61170(lStack_c8);
      puVar1 = (undefined8 *)(puVar4 + _DAT_113084350);
      uVar9 = puVar1[1];
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      func_0x000107c6142c(uVar9);
      return puVar4;
    }
    func_0x000107c61170(puVar4);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10006d534; end: 10006d53b; +[FastCoder objectWithData:] */

void FUN_10006d534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_objectWithData_adHocDeserializat_112615ab8,param_3,0);
  return;
}



/* Entry: 10006d53c; end: 10006d557; +[FastCoder objectWithData:adHocDeserialization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10006d53c(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  undefined **ppuVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  int *piVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uStack_58;
  
  ppuVar1 = &PTR_FUN_113400808;
  if (param_4 == 0) {
    ppuVar1 = &PTR_FUN_1134009b0;
  }
  piVar4 = param_3;
  func_0x000107c4adac();
  if (((int *)0x7 < piVar4) && (func_0x000107c3eea8(), *param_3 == 0x46415354)) {
    bVar3 = (short)param_3[1] == 3;
    if ((bVar3 && 2 < *(ushort *)((long)param_3 + 6)) &&
        (!bVar3 || *(ushort *)((long)param_3 + 6) != 3)) {
      uStack_58 = 8;
      puVar13 = PTR_PTR_1126e2d38;
      func_0x000107c61160();
      func_0x000107c61104();
      *(undefined ***)(puVar13 + _DAT_112796254) = ppuVar1;
      *(int **)(puVar13 + _DAT_112796258) = param_3;
      puVar10 = &uStack_58;
      *(ulong **)(puVar13 + _DAT_11279625c) = puVar10;
      *(int **)(puVar13 + _DAT_112796260) = piVar4;
      puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      piVar12 = (int *)(uStack_58 + 4);
      if (piVar4 < piVar12) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
        piVar12 = (int *)(*puVar10 + 4);
      }
      *puVar10 = (ulong)piVar12;
      func_0x000107c412ec();
      *(undefined **)(puVar13 + _DAT_112796264) = puVar5;
      puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
      uVar14 = *puVar10 + 4;
      if (*(ulong *)(puVar13 + _DAT_112796260) < uVar14) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
        uVar14 = *puVar10 + 4;
      }
      *puVar10 = uVar14;
      func_0x000107c412ec();
      puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
      uVar14 = *puVar10 + 4;
      if (*(ulong *)(puVar13 + _DAT_112796260) < uVar14) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
        uVar14 = *puVar10 + 4;
      }
      *puVar10 = uVar14;
      func_0x000107c412ec();
      uVar7 = 0;
      func_0x000107c60750(0,0,0);
      func_0x000107c61104();
      *(undefined **)(puVar13 + _DAT_112796268) = puVar5;
      *(undefined **)(puVar13 + _DAT_11279626c) = puVar6;
      *(undefined8 *)(puVar13 + _DAT_112796270) = uVar7;
      puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
      uVar9 = *puVar10;
      uVar14 = uVar9 + 1;
      if (*(ulong *)(puVar13 + _DAT_112796260) < uVar14) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar10 = *(ulong **)(puVar13 + _DAT_11279625c);
        uVar9 = *puVar10;
        uVar14 = uVar9 + 1;
      }
      bVar2 = *(byte *)(*(long *)(puVar13 + _DAT_112796258) + uVar9);
      *puVar10 = uVar14;
      if ((bVar2 < 0x35) &&
         (pcVar11 = *(code **)(*(long *)(puVar13 + _DAT_112796254) + (ulong)bVar2 * 8),
         pcVar11 != (code *)0x0)) {
        (*pcVar11)(puVar13);
      }
      else {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar13 = (undefined *)0x0;
      }
      puVar6 = puVar5;
      func_0x000107c60780();
      if (puVar6 < (undefined *)0x8) {
        return puVar13;
      }
      uVar14 = 0;
      do {
        puVar8 = puVar5;
        func_0x000107c60780();
        if (uVar14 < (ulong)puVar8 >> 3) {
          puVar8 = puVar5;
          func_0x000107c60778();
          puVar8 = *(undefined **)(puVar8 + uVar14 * 8);
        }
        else {
          func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
          puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x000107c4d8b8();
        }
        if (*(long *)(puVar8 + 0x28) != 0) {
          func_0x000107c60fd0();
        }
        uVar14 = uVar14 + 1;
      } while ((ulong)puVar6 >> 3 != uVar14);
      return puVar13;
    }
    func_0x000107c60afc(&PTR____CFConstantStringClassReference_1110260d8);
  }
  return (undefined *)0x0;
}



/* Entry: 10006d558; end: 10006d94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10006d558(int *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  code *pcVar10;
  int *piVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uStack_58;
  
  piVar3 = param_1;
  func_0x000107c4adac();
  if (((int *)0x7 < piVar3) && (func_0x000107c3eea8(), *param_1 == 0x46415354)) {
    bVar2 = (short)param_1[1] == 3;
    if ((bVar2 && 2 < *(ushort *)((long)param_1 + 6)) &&
        (!bVar2 || *(ushort *)((long)param_1 + 6) != 3)) {
      uStack_58 = 8;
      puVar12 = PTR_PTR_1126e2d38;
      func_0x000107c61160();
      func_0x000107c61104();
      *(undefined8 *)(puVar12 + _DAT_112796254) = param_2;
      *(int **)(puVar12 + _DAT_112796258) = param_1;
      puVar9 = &uStack_58;
      *(ulong **)(puVar12 + _DAT_11279625c) = puVar9;
      *(int **)(puVar12 + _DAT_112796260) = piVar3;
      puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      piVar11 = (int *)(uStack_58 + 4);
      if (piVar3 < piVar11) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
        piVar11 = (int *)(*puVar9 + 4);
      }
      *puVar9 = (ulong)piVar11;
      func_0x000107c412ec();
      *(undefined **)(puVar12 + _DAT_112796264) = puVar4;
      puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
      uVar13 = *puVar9 + 4;
      if (*(ulong *)(puVar12 + _DAT_112796260) < uVar13) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
        uVar13 = *puVar9 + 4;
      }
      *puVar9 = uVar13;
      func_0x000107c412ec();
      puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
      uVar13 = *puVar9 + 4;
      if (*(ulong *)(puVar12 + _DAT_112796260) < uVar13) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
        uVar13 = *puVar9 + 4;
      }
      *puVar9 = uVar13;
      func_0x000107c412ec();
      uVar6 = 0;
      func_0x000107c60750(0,0,0);
      func_0x000107c61104();
      *(undefined **)(puVar12 + _DAT_112796268) = puVar4;
      *(undefined **)(puVar12 + _DAT_11279626c) = puVar5;
      *(undefined8 *)(puVar12 + _DAT_112796270) = uVar6;
      puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
      uVar8 = *puVar9;
      uVar13 = uVar8 + 1;
      if (*(ulong *)(puVar12 + _DAT_112796260) < uVar13) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar9 = *(ulong **)(puVar12 + _DAT_11279625c);
        uVar8 = *puVar9;
        uVar13 = uVar8 + 1;
      }
      bVar1 = *(byte *)(*(long *)(puVar12 + _DAT_112796258) + uVar8);
      *puVar9 = uVar13;
      if ((bVar1 < 0x35) &&
         (pcVar10 = *(code **)(*(long *)(puVar12 + _DAT_112796254) + (ulong)bVar1 * 8),
         pcVar10 != (code *)0x0)) {
        (*pcVar10)(puVar12);
      }
      else {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar12 = (undefined *)0x0;
      }
      puVar5 = puVar4;
      func_0x000107c60780();
      if (puVar5 < (undefined *)0x8) {
        return puVar12;
      }
      uVar13 = 0;
      do {
        puVar7 = puVar4;
        func_0x000107c60780();
        if (uVar13 < (ulong)puVar7 >> 3) {
          puVar7 = puVar4;
          func_0x000107c60778();
          puVar7 = *(undefined **)(puVar7 + uVar13 * 8);
        }
        else {
          func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
          puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x000107c4d8b8();
        }
        if (*(long *)(puVar7 + 0x28) != 0) {
          func_0x000107c60fd0();
        }
        uVar13 = uVar13 + 1;
      } while ((ulong)puVar5 >> 3 != uVar13);
      return puVar12;
    }
    func_0x000107c60afc(&PTR____CFConstantStringClassReference_1110260d8);
  }
  return (undefined *)0x0;
}



/* Entry: 10006d950; end: 10006d957;  */

/* WARNING: Removing unreachable block (ram,0x00010006dc50) */
/* WARNING: Removing unreachable block (ram,0x00010006dc64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10006d950(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lStack_a0;
  long alStack_90 [4];
  code *pcStack_70;
  code *pcStack_68;
  
  puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar4 = *puVar6;
  uVar8 = uVar4 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar8) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,0,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar4 = *puVar6;
    uVar8 = uVar4 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar4);
  *puVar6 = uVar8;
  if ((bVar1 < 0x35) &&
     (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
     pcVar7 != (code *)0x0)) {
    lStack_a0 = param_1;
    (*pcVar7)();
  }
  else {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    lStack_a0 = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11279628c);
  lVar2 = *(long *)(param_1 + _DAT_112796270);
  func_0x000107c40808();
  if (lVar2 == 0) {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
    pcStack_68 = FUN_10006def0;
    pcStack_70 = FUN_10006df98;
    func_0x000107c6078c();
    func_0x000107c61104();
    *(long *)(param_1 + _DAT_11279628c) = lVar2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112796270);
    func_0x000107c4aa28();
    *(undefined8 *)(param_1 + _DAT_11279628c) = uVar3;
    func_0x000107c4ff54(*(undefined8 *)(param_1 + _DAT_112796270));
    func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11279628c));
  }
  while( true ) {
    puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar4 = *puVar6;
    uVar8 = uVar4 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar8) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar4 = *puVar6;
      uVar8 = uVar4 + 1;
    }
    uVar4 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar4);
    *puVar6 = uVar8;
    if ((0x34 < uVar4) ||
       (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_112796254) + uVar4 * 8), pcVar7 == (code *)0x0)
       ) break;
    lVar2 = param_1;
    (*pcVar7)();
    if (lVar2 == 0) goto LAB_10006dc18;
    puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar4 = *puVar6;
    uVar8 = uVar4 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar8) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar4 = *puVar6;
      uVar8 = uVar4 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar4);
    *puVar6 = uVar8;
    if ((bVar1 < 0x35) &&
       (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
       pcVar7 != (code *)0x0)) {
      (*pcVar7)(param_1);
    }
    else {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
    func_0x000107c56bd8(*(undefined8 *)(param_1 + _DAT_11279628c));
  }
  func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
LAB_10006dc18:
  lVar2 = lStack_a0;
  func_0x000107c60af0();
  if (lVar2 == 0) {
    lStack_a0 = 0;
  }
  else {
    func_0x000107c60af0();
    func_0x000107c610f4();
    func_0x000107c45e88();
    func_0x000107c61104();
  }
  func_0x000107c3d798(*(undefined8 *)(param_1 + _DAT_112796270));
  *(undefined8 *)(param_1 + _DAT_11279628c) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112796264);
  alStack_90[0] = lStack_a0;
  func_0x000107c60780(uVar5);
  func_0x000107c60768(uVar5,alStack_90,8);
  return lStack_a0;
}



/* Entry: 10006d958; end: 10006dcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10006d958(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  
  puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar5 = *puVar7;
  uVar9 = uVar5 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
  *puVar7 = uVar9;
  if ((bVar1 < 0x35) &&
     (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
     pcVar8 != (code *)0x0)) {
    puStack_a0 = param_1;
    (*pcVar8)();
  }
  else {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    puStack_a0 = (undefined *)0x0;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11279628c);
  lVar2 = *(long *)(param_1 + _DAT_112796270);
  func_0x000107c40808();
  if (lVar2 == 0) {
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcStack_68 = FUN_10006def0;
    pcStack_70 = FUN_10006df98;
    func_0x000107c6078c();
    func_0x000107c61104();
    *(long *)(param_1 + _DAT_11279628c) = lVar2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112796270);
    func_0x000107c4aa28();
    *(undefined8 *)(param_1 + _DAT_11279628c) = uVar3;
    func_0x000107c4ff54(*(undefined8 *)(param_1 + _DAT_112796270));
    func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11279628c));
  }
  while( true ) {
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar5 = *puVar7;
      uVar9 = uVar5 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
    *puVar7 = uVar9;
    if ((0x34 < (ulong)bVar1) ||
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
       pcVar8 == (code *)0x0)) break;
    puVar4 = param_1;
    (*pcVar8)();
    if (puVar4 == (undefined *)0x0) goto LAB_10006dc18;
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar5 = *puVar7;
      uVar9 = uVar5 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
    *puVar7 = uVar9;
    if ((bVar1 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
       pcVar8 != (code *)0x0)) {
      (*pcVar8)(param_1);
    }
    else {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
    func_0x000107c56bd8(*(undefined8 *)(param_1 + _DAT_11279628c));
  }
  func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
LAB_10006dc18:
  puVar4 = puStack_a0;
  func_0x000107c60af0();
  if (puVar4 == (undefined *)0x0) {
    if ((int)param_2 == 0) {
      puStack_a0 = (undefined *)0x0;
    }
    else {
      puStack_a0 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c419a4();
      func_0x000107c3d66c();
    }
  }
  else {
    func_0x000107c60af0();
    func_0x000107c610f4();
    func_0x000107c45e88();
    func_0x000107c61104();
  }
  func_0x000107c3d798(*(undefined8 *)(param_1 + _DAT_112796270));
  *(undefined8 *)(param_1 + _DAT_11279628c) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112796264);
  puStack_90 = puStack_a0;
  func_0x000107c60780(uVar6);
  func_0x000107c60768(uVar6,&puStack_90,8);
  return puStack_a0;
}



/* Entry: 10006dcfc; end: 10006ddeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006dcfc(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = _DAT_11279625c;
  lVar4 = **(long **)(param_1 + _DAT_11279625c);
  lVar2 = *(long *)(param_1 + _DAT_112796258) + lVar4;
  func_0x000107c613d0();
  uVar1 = lVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar1 + lVar4) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    iVar3 = _DAT_11279625c;
  }
  if (1 < uVar1) {
    func_0x000107c6084c(0,*(long *)(param_1 + _DAT_112796258) + **(long **)(param_1 + iVar3),lVar2,
                        0x8000100,0);
    func_0x000107c61104();
    iVar3 = _DAT_11279625c;
  }
  **(long **)(param_1 + iVar3) = **(long **)(param_1 + iVar3) + uVar1;
  return;
}



/* Entry: 10006ddec; end: 10006deef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10006ddec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_10006dcfc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279626c);
  lStack_28 = lVar1;
  func_0x000107c60780(uVar2);
  func_0x000107c60768(uVar2,&lStack_28,8);
  return lVar1;
}



/* Entry: 10006def0; end: 10006deff;  */

void FUN_10006def0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10006df00; end: 10006df97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006df00(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar4) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  cVar1 = *(char *)(*(long *)(param_1 + _DAT_112796258) + uVar2);
  *puVar3 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010c0df710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithChar__1126157d8,(long)cVar1);
  return;
}



/* Entry: 10006df98; end: 10006dfaf;  */

void FUN_10006df98(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c49cec(param_1,param_2,param_2);
  return;
}



/* Entry: 10006dfb0; end: 10006dfc3;  */

undefined8 FUN_10006dfb0(void)

{
  return 0;
}



/* Entry: 10006dfc4; end: 10006dfeb; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata initWithCoder:] */

void FUN_10006dfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10006dfec();
  return;
}



/* Entry: 10006dfec; end: 10006e7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10006dfec(undefined1 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  long unaff_x20;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  *(undefined8 *)(unaff_x20 + _DAT_113084310) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084318) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084320) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084328) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113084330) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084338);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_113084340) = 0xffffffffffffffff;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084348);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084350);
  FUN_10006d1fc();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar7 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f2077b0);
  puVar9 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (puVar9 == (undefined1 *)0x0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_c0,puVar9);
    func_0x000107c615e8(puVar9);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
LAB_10006e538:
    uStack_c0 = uStack_a0;
    uStack_b8 = uStack_98;
    uStack_b0 = uStack_90;
    lStack_a8 = lStack_88;
    func_0x000107c61170(puVar7);
    func_0x000107c61170(param_1);
    FUN_10006e7f4(&uStack_a0);
  }
  else {
    plVar10 = &lStack_d0;
    func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
    lVar11 = lStack_d0;
    if (((ulong)plVar10 & 1) == 0) {
LAB_10006e554:
      func_0x000107c61170(puVar7);
    }
    else {
      uVar8 = 0x436572756c696166;
      func_0x000107c5fadc(0x436572756c696166,0xec000000746e756f);
      puVar9 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_c0,puVar9);
        func_0x000107c615e8(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_10006e538;
      plVar10 = &lStack_d0;
      func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
      lVar2 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_10006e554;
      uVar8 = 0xd000000000000017;
      func_0x000107c5fadc(0xd000000000000017,0x800000010f2077d0);
      puVar9 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_c0,puVar9);
        func_0x000107c615e8(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_10006e538;
      plVar10 = &lStack_d0;
      func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
      lVar3 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_10006e554;
      uVar8 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010f2077f0);
      puVar9 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_c0,puVar9);
        func_0x000107c615e8(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_10006e538;
      plVar10 = &lStack_d0;
      func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
      lVar4 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_10006e554;
      uVar8 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010f207810);
      puVar9 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_c0,puVar9);
        func_0x000107c615e8(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_10006e538;
      plVar10 = &lStack_d0;
      func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
      lVar5 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_10006e554;
      uVar8 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f207850);
      puVar9 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_c0,puVar9);
        func_0x000107c615e8(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_10006e538;
      plVar10 = &lStack_d0;
      func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
      lVar6 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_10006e554;
      if (lStack_d0 + 1U < 3) {
        *(long *)(puVar7 + _DAT_113084310) = lVar11;
        *(long *)(puVar7 + _DAT_113084318) = lVar2;
        *(long *)(puVar7 + _DAT_113084320) = lVar3;
        *(long *)(puVar7 + _DAT_113084328) = lVar4;
        *(long *)(puVar7 + _DAT_113084330) = lVar5;
        uVar8 = 0xd000000000000018;
        func_0x000107c5fadc(0xd000000000000018,0x800000010f207830);
        puVar9 = param_1;
        func_0x000107c41478();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        if (puVar9 == (undefined1 *)0x0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          func_0x000107c60234(&uStack_c0,puVar9);
          func_0x000107c615e8(puVar9);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          FUN_10006e7f4(&uStack_a0);
          lVar11 = 0;
          bVar12 = 1;
        }
        else {
          plVar10 = &lStack_d0;
          func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
          lVar11 = lStack_d0;
          if ((int)plVar10 == 0) {
            lVar11 = 0;
          }
          bVar12 = (byte)plVar10 ^ 1;
        }
        *(long *)(puVar7 + _DAT_113084338) = lVar11;
        *(byte *)((long)(puVar7 + _DAT_113084338) + 8) = bVar12;
        *(long *)(puVar7 + _DAT_113084340) = lVar6;
        uVar8 = 0xd000000000000013;
        func_0x000107c5fadc(0xd000000000000013,0x800000010f207870);
        puVar9 = param_1;
        func_0x000107c41478();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        if (puVar9 == (undefined1 *)0x0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          func_0x000107c60234(&uStack_c0,puVar9);
          func_0x000107c615e8(puVar9);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          FUN_10006e7f4(&uStack_a0);
          lVar11 = 0;
          bVar12 = 1;
        }
        else {
          plVar10 = &lStack_d0;
          func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
          lVar11 = lStack_d0;
          if ((int)plVar10 == 0) {
            lVar11 = 0;
          }
          bVar12 = (byte)plVar10 ^ 1;
        }
        *(long *)(puVar7 + _DAT_113084348) = lVar11;
        *(byte *)((long)(puVar7 + _DAT_113084348) + 8) = bVar12;
        uVar8 = 0xd000000000000011;
        func_0x000107c5fadc(0xd000000000000011,0x800000010f207890);
        puVar9 = param_1;
        func_0x000107c41478();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        if (puVar9 == (undefined1 *)0x0) {
          func_0x000107c61170(param_1);
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          func_0x000107c60234(&uStack_c0,puVar9);
          func_0x000107c615e8(puVar9);
          func_0x000107c61170(param_1);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          FUN_10006e7f4(&uStack_a0);
          lStack_d0 = 0;
          lStack_c8 = 0;
        }
        else {
          plVar10 = &lStack_d0;
          func_0x000107c6147c(plVar10,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if ((int)plVar10 == 0) {
            lStack_d0 = 0;
            lStack_c8 = 0;
          }
        }
        plVar10 = (long *)(puVar7 + _DAT_113084350);
        lVar11 = plVar10[1];
        *plVar10 = lStack_d0;
        plVar10[1] = lStack_c8;
        func_0x000107c6142c(lVar11);
        return puVar7;
      }
      func_0x000107c61170(param_1);
      param_1 = puVar7;
    }
    func_0x000107c61170(param_1);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10006e7e4; end: 10006e7f3; -[FCNSDecoder decodeObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279628c),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10006e7f4; end: 10006e83b;  */

undefined8 FUN_10006e7f4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d387f8;
  FUN_1000285a8(0x112d387f8,&UNK_10d902650);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10006e83c; end: 10006ea07;  */

void FUN_10006e83c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_1000295c4();
  uStack_78 = uVar4;
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_10006ea08(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x00010006ea48(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar4 = 0xd00000000000002f;
  func_0x000107c5ffec(0xd00000000000002f,0x800000010f207360,lVar3,lVar8,puVar7,0);
  uRam0000000113084260 = uVar4;
  return;
}



/* Entry: 10006ea08; end: 10006ea8b;  */

void FUN_10006ea08(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10006ea8c; end: 10006eaa3;  */

void FUN_10006ea8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10006eaa4; end: 10006eb5b;  */

/* WARNING: Possible PIC construction at 0x00010006eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006eb08) */

void FUN_10006eaa4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  if ((bRam0000000113817d68 & 1) == 0) {
    iVar1 = 0x13817d68;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_sync");
      pcRam0000000113817d60 = pcVar2;
      func_0x000107c60e4c(0x113817d68);
    }
  }
  pcVar2 = pcRam0000000113817d60;
  FUN_10002a3a8(param_2);
  func_0x000107c61180();
  (*pcVar2)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10006eb5c; end: 10006eb5f;  */

void FUN_10006eb5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10006eb60; end: 10006eb7f;  */

void FUN_10006eb60(long param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}



/* Entry: 10006eb80; end: 10006eb83;  */

void FUN_10006eb80(void)

{
  long unaff_x20;
  
  uRam00000001130842c0 = *(undefined8 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 10006eb84; end: 10006eba3;  */

void FUN_10006eb84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10006eba4; end: 10006ec23;  */

void FUN_10006eba4(void)

{
  long unaff_x20;
  
  uRam00000001130842c0 = *(undefined8 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 10006ec24; end: 10006f31b;  */

/* WARNING: Removing unreachable block (ram,0x00010006f0fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ec24(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x12;
  uint uVar12;
  undefined8 unaff_x20;
  code *pcVar13;
  long lVar14;
  double dVar15;
  double dStack_100;
  uint uStack_f4;
  undefined *puStack_f0;
  long lStack_e8;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&dStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar9 - extraout_x12;
  func_0x000107c5ee58();
  dVar15 = *(double *)(param_2 + _DAT_113084310);
  if (lRam0000000113084258 != -1) {
    func_0x000107c61568(0x113084258,FUN_10006e83c);
  }
  uVar4 = uRam0000000113084260;
  func_0x000107c5ffe4(&dStack_b8,FUN_10006f32c,&puStack_b0,PTR___sSdN_11034dd90);
  lVar1 = _DAT_113084318;
  if (param_1 - dVar15 < dStack_b8) {
    uVar4 = 0xd00000000000003b;
    func_0x000107c5fadc(0xd00000000000003b,0x800000010f207770);
    func_0x000107c30ac8();
    func_0x000107c61170(uVar4);
    goto LAB_10006f294;
  }
  dVar15 = (double)(*(long *)(param_2 + _DAT_113084318) + 1);
  if (SCARRY8(*(long *)(param_2 + _DAT_113084318),1)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10006f2f0);
    (*pcVar13)();
  }
  puVar5 = &UNK_1107850f8;
  lStack_e8 = lVar9;
  func_0x000107c613fc(&UNK_1107850f8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(double *)(puVar5 + 0x18) = dVar15;
  puVar6 = &UNK_110785120;
  func_0x000107c613fc(&UNK_110785120,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x10006f348;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  uStack_90 = 0x10006f344;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_10006eb60;
  puStack_98 = &UNK_110785138;
  ppuVar7 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_88;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  FUN_10006eaa4(uVar4,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  puVar8 = puVar6;
  func_0x000107c61544(puVar6,"",0x73,0x47,0x18,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10006f2f4);
    (*pcVar13)();
  }
  puStack_b0 = (undefined *)0x0;
  uStack_a8 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  puStack_f0 = &UNK_10dd155a0;
  func_0x000107c5fb78(0xd000000000000022,0x800000010dd155a0);
  func_0x000107c5fb78(0xd000000000000035,0x800000010f207680);
  puVar5 = PTR___sSiN_11034deb0;
  dStack_b8 = *(double *)(param_2 + lVar1);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  uVar4 = uStack_a8;
  puVar6 = puStack_b0;
  func_0x000107c5fadc(puStack_b0,uStack_a8);
  func_0x000107c6142c(uVar4);
  func_0x00010006f364(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c5ffe4(&dStack_b8,FUN_10006f378,&puStack_b0,puVar5);
  dVar2 = dStack_b8;
  if (dVar15 == dStack_b8) {
    uVar12 = 1;
  }
  else if ((long)dStack_b8 < (long)dVar15) {
    if (dStack_b8 == 0.0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10006f314);
      (*pcVar13)();
    }
    lVar9 = 0;
    if (dStack_b8 != 0.0) {
      lVar9 = (long)dVar15 / (long)dStack_b8;
    }
    uVar12 = (uint)(dVar15 == (double)(lVar9 * (long)dStack_b8));
  }
  else {
    uVar12 = 0;
  }
  func_0x000107c5ffe4(&dStack_b8,0x10006f38c,&puStack_b0,PTR___sSdN_11034dd90);
  *(double *)(param_2 + _DAT_113084320) = dStack_b8;
  *(double *)(param_2 + _DAT_113084328) = dVar2;
  *(double *)(param_2 + lVar1) = dVar15;
  if (lRam00000001130842b8 != -1) {
    func_0x000107c61568(0x1130842b8,FUN_10006c8d8);
  }
  lVar9 = lVar3;
  FUN_100028790(lVar3,0x113813c28);
  (**(code **)(lVar11 + 0x10))(lVar14,lVar9,lVar3);
  puVar5 = PTR_PTR_1126bdbc0;
  func_0x000107c61168();
  func_0x000107c41308();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    pcVar13 = *(code **)(lVar11 + 8);
  }
  else {
    puVar6 = puVar5;
    dStack_100 = dVar15;
    uStack_f4 = uVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    lVar1 = lStack_e8;
    func_0x000107c5eda8(lStack_e8);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar8 = puVar5;
    func_0x000107c5ed90();
    puStack_b0 = (undefined *)0x0;
    puVar10 = puVar5;
    func_0x000107c409e4();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
    puVar5 = puStack_b0;
    if ((int)puVar10 == 0) {
      puVar8 = puStack_b0;
      func_0x000107c61174(puStack_b0);
      func_0x000107c5ed30(puVar5);
      func_0x000107c61170(puVar8);
      func_0x000107c61654();
      func_0x00010006c090(puVar6,lVar9);
      pcVar13 = *(code **)(lVar11 + 8);
      (*pcVar13)(lVar1,lVar3);
      func_0x000107c614ac(puVar5);
      dVar15 = dStack_100;
      uVar12 = uStack_f4;
    }
    else {
      func_0x000107c61174(puStack_b0);
      func_0x000107c5ee40(lVar14,0,puVar6,lVar9);
      pcVar13 = *(code **)(lVar11 + 8);
      (*pcVar13)(lVar1,lVar3);
      func_0x00010006c090(puVar6,lVar9);
      dVar15 = dStack_100;
      uVar12 = uStack_f4;
    }
  }
  (*pcVar13)(lVar14,lVar3);
  if (uVar12 != 0) {
    uVar4 = 0xd00000000000004f;
    func_0x000107c5fadc(0xd00000000000004f,0x800000010f207720);
    func_0x00010006f364();
    func_0x000107c61170(uVar4);
    func_0x00010452d864();
    func_0x00010452ecd8(0,2);
    uVar4 = 1;
    goto LAB_10006f298;
  }
  if (SBORROW8((long)dVar2,1)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10006f310);
    (*pcVar13)();
  }
  if (dVar15 == (double)((long)dVar2 + -1)) {
LAB_10006f1e0:
    puStack_b0 = (undefined *)0x0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x58);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000022,(ulong)puStack_f0 | 0x8000000000000000);
    func_0x000107c5fb78(0xd000000000000055,0x800000010f2076c0);
    uVar4 = uStack_a8;
    puVar5 = puStack_b0;
    func_0x000107c5fadc(puStack_b0,uStack_a8);
    func_0x000107c6142c(uVar4);
    func_0x00010006f364(puVar5);
    func_0x000107c61170(puVar5);
    func_0x00010452ecd8(1,2);
  }
  else if ((long)dVar2 < (long)dVar15) {
    if (dVar2 == 0.0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10006f318);
      (*pcVar13)();
    }
    lVar3 = 0;
    if (dVar2 != 0.0) {
      lVar3 = (long)dVar15 / (long)dVar2;
    }
    if ((long)dVar15 - lVar3 * (long)dVar2 == (long)dVar2 + -1) goto LAB_10006f1e0;
  }
LAB_10006f294:
  uVar4 = 0;
LAB_10006f298:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78(uVar4);
    *extraout_x8_00 = uRam00000001130842c0;
    return;
  }
  return;
}



/* Entry: 10006f31c; end: 10006f32b;  */

void FUN_10006f31c(undefined8 *param_1)

{
  *param_1 = uRam00000001130842c0;
  return;
}



/* Entry: 10006f32c; end: 10006f33f;  */

void FUN_10006f32c(void)

{
  FUN_10006f31c();
  return;
}



/* Entry: 10006f340; end: 10006f377;  */

void FUN_10006f340(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10006f378; end: 10006f39f;  */

void FUN_10006f378(void)

{
  func_0x00010006f368();
  return;
}



/* Entry: 10006f3a0; end: 10006f5af; +[FastCoder dataWithRootObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10006f3a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c41304(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,8);
    puVar1 = puVar7;
    func_0x000107c4d2d0();
    *puVar1 = 0x4000346415354;
    uStack_80._0_4_ = 0;
    func_0x000107c3deec(puVar7);
    uStack_80._0_4_ = 0;
    func_0x000107c3deec(puVar7);
    uStack_80 = (ulong)uStack_80._4_4_ << 0x20;
    puVar1 = puVar7;
    func_0x000107c3deec(puVar7);
    func_0x000107c6110c();
    uStack_80 = *(long *)PTR__kCFTypeDictionaryKeyCallBacks_11034ac18;
    uStack_70 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_11034ac18 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_11034ac18 + 8);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uVar2 = 0;
    func_0x000107c6078c(0,0,&uStack_80,0);
    func_0x000107c61104();
    uVar3 = 0;
    func_0x000107c6078c(0,0,0,0);
    func_0x000107c61104();
    puVar6 = PTR__kCFCopyStringDictionaryKeyCallBacks_11034abb8;
    uVar4 = 0;
    func_0x000107c6078c(0,0,PTR__kCFCopyStringDictionaryKeyCallBacks_11034abb8,0);
    func_0x000107c61104();
    uVar5 = 0;
    func_0x000107c6078c(0,0,puVar6,0);
    func_0x000107c61104();
    puVar6 = PTR_PTR_1126e2d40;
    func_0x000107c61160();
    func_0x000107c61104();
    *(long *)(puVar6 + _DAT_112796274) = param_3;
    *(undefined8 **)(puVar6 + _DAT_112796278) = puVar7;
    *(undefined8 *)(puVar6 + _DAT_11279627c) = uVar2;
    *(undefined8 *)(puVar6 + _DAT_112796280) = uVar3;
    *(undefined8 *)(puVar6 + _DAT_112796284) = uVar4;
    *(undefined8 *)(puVar6 + _DAT_112796288) = uVar5;
    func_0x000107c3ab6c(param_3);
    func_0x000107c40808();
    func_0x000107c50150(puVar7);
    func_0x000107c40808();
    func_0x000107c50150(puVar7);
    func_0x000107c40808();
    func_0x000107c50150(puVar7);
    func_0x000107c61108(puVar1);
  }
  return puVar7;
}



/* Entry: 10006f5b0; end: 10006f74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10006f5b0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + _DAT_11279627c);
  func_0x000107c60794(lVar1,param_1);
  uVar2 = 0x7fffffffffffffff;
  if (lVar1 != 0) {
    uVar2 = lVar1 - 1;
  }
  if (uVar2 < 0x100) {
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    return 1;
  }
  if (uVar2 >> 0x10 == 0) {
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    uVar2 = *(ulong *)(param_2 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 1) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_2 + _DAT_112796278));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112796278);
  }
  else {
    if (uVar2 == 0x7fffffffffffffff) {
      return 0;
    }
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    uVar2 = *(ulong *)(param_2 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_2 + _DAT_112796278));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112796278);
  }
  func_0x000107c3deec(uVar3);
  return 1;
}



/* Entry: 10006f74c; end: 10006ff07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10006f74c(ulong *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  FUN_10006f5b0(param_1,param_3);
  if (((ulong)puVar10 & 1) == 0) {
    puVar10 = param_1;
    func_0x000107c4ec78();
    if ((((ulong)puVar10 & 1) == 0) &&
       (puVar10 = param_1, func_0x000107c4ec7c(), ((ulong)puVar10 & 1) == 0)) {
      func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
      puVar10 = param_1;
      func_0x000107c3fa20();
      func_0x000107c60b14();
      if (puVar10 == (ulong *)0x0) {
        func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
      }
      else {
        func_0x000107c3ab6c();
      }
      func_0x000107c42754(param_1);
      func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
      puVar10 = *(ulong **)(param_3 + _DAT_11279627c);
      puVar3 = puVar10;
      func_0x000107c60790(puVar10);
      func_0x000107c60798(puVar10,param_1,(long)puVar3 + 1);
    }
    else {
      func_0x000107c5e364(param_1);
      puVar10 = param_1;
      func_0x000107c3fa24();
      puVar3 = param_1;
      func_0x000107c4ec7c();
      lVar2 = *(long *)(param_3 + _DAT_112796280);
      func_0x000107c60794(lVar2,puVar10);
      uVar6 = lVar2 - 1;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = puVar10;
        func_0x000107c3ab68();
        if (lVar2 == 0 || uVar6 == 0x7fffffffffffffff) {
          uVar9 = *(ulong *)(param_3 + _DAT_112796280);
          uVar6 = uVar9;
          func_0x000107c60790();
          func_0x000107c60798(uVar9,puVar10,uVar6 + 1);
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          func_0x000107c60b14();
          func_0x000107c3ac4c();
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
          if (puVar10 != (ulong *)0x0) {
            func_0x000107c613d0();
          }
          func_0x000107c3deec(uVar8);
          uVar9 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar9 & 3) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          func_0x000107c40808();
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          puVar10 = puVar3;
          func_0x000107c4080c();
          lVar2 = lRam0000000000000000;
          while (puVar10 != (ulong *)0x0) {
            puVar11 = (ulong *)0x0;
            do {
              while( true ) {
                if (lRam0000000000000000 != lVar2) {
                  func_0x000107c61128(puVar3);
                }
                lVar7 = *(long *)((long)puVar11 * 8);
                func_0x000107c3ac4c();
                uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
                if (lVar7 == 0) break;
                func_0x000107c613d0();
                func_0x000107c3deec(uVar8);
                puVar11 = (ulong *)((long)puVar11 + 1);
                if (puVar10 == puVar11) goto LAB_10006fc58;
              }
              func_0x000107c3deec(uVar8);
              puVar11 = (ulong *)((long)puVar11 + 1);
            } while (puVar10 != puVar11);
LAB_10006fc58:
            puVar10 = puVar3;
            func_0x000107c4080c();
          }
        }
        lVar7 = *(long *)(param_3 + _DAT_11279627c);
        lVar2 = lVar7;
        func_0x000107c60790(lVar7);
        func_0x000107c60798(lVar7,param_1,lVar2 + 1);
        if (uVar6 < 0x100) {
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
        }
        else if (uVar6 >> 0x10 == 0) {
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar6 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar6 & 1) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
        }
        else {
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar6 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar6 & 3) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
        }
        func_0x000107c3deec(uVar8);
        puVar11 = puVar3;
        func_0x000107c4080c();
        lVar2 = lRam0000000000000000;
        while (puVar10 = (ulong *)0x0, puVar11 != (ulong *)0x0) {
          puVar10 = (ulong *)0x0;
          do {
            while( true ) {
              if (lRam0000000000000000 != lVar2) {
                func_0x000107c61128(puVar3);
              }
              puVar4 = param_1;
              func_0x000107c5dc2c();
              if (puVar4 == (ulong *)0x0) break;
              func_0x000107c3ab6c();
              puVar10 = (ulong *)((long)puVar10 + 1);
              if (puVar11 == puVar10) goto LAB_10006fe40;
            }
            func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
            puVar10 = (ulong *)((long)puVar10 + 1);
          } while (puVar11 != puVar10);
LAB_10006fe40:
          puVar11 = puVar3;
          func_0x000107c4080c();
        }
      }
      else {
        func_0x000107c42e04();
        puVar3 = puVar10;
        func_0x000107c42e00();
        if (lVar2 == 0 || uVar6 == 0x7fffffffffffffff) {
          uVar9 = *(ulong *)(param_3 + _DAT_112796280);
          uVar6 = uVar9;
          func_0x000107c60790();
          func_0x000107c60798(uVar9,puVar10,uVar6 + 1);
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          func_0x000107c60b14();
          func_0x000107c3ac4c();
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
          if (puVar10 != (ulong *)0x0) {
            func_0x000107c613d0();
          }
          func_0x000107c3deec(uVar8);
          uVar9 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar9 & 3) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar9 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar9 & 7) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          if (*puVar3 != 0) {
            uVar9 = 2;
            do {
              func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
              bVar1 = uVar9 <= *puVar3;
              uVar9 = (ulong)((int)uVar9 + 1);
            } while (bVar1);
          }
        }
        lVar7 = *(long *)(param_3 + _DAT_11279627c);
        lVar2 = lVar7;
        func_0x000107c60790(lVar7);
        func_0x000107c60798(lVar7,param_1,lVar2 + 1);
        if (uVar6 < 0x100) {
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
        }
        else if (uVar6 >> 0x10 == 0) {
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar6 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar6 & 1) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
        }
        else {
          func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
          uVar6 = *(ulong *)(param_3 + _DAT_112796278);
          func_0x000107c4adac();
          if ((uVar6 & 3) != 0) {
            func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
          }
          uVar8 = *(undefined8 *)(param_3 + _DAT_112796278);
        }
        func_0x000107c3deec(uVar8);
        func_0x000107c42758(param_1);
        puVar10 = param_1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar10;
  }
  func_0x000107c60e78();
  return (ulong *)0x0;
}



/* Entry: 10006ff08; end: 10006ff17;  */

undefined8 FUN_10006ff08(void)

{
  return 0;
}



/* Entry: 10006ff18; end: 1000701ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ff18(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_120 [128];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined2 uStack_62;
  
  puVar7 = param_1;
  func_0x000107c3ac4c();
  puVar2 = param_1;
  func_0x000107c3fa20();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000107c61158();
  if (puVar2 == puVar3) {
    puVar2 = param_1;
    FUN_10006f5b0(param_1,param_3);
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
    lVar6 = *(long *)(param_3 + _DAT_11279627c);
    lVar8 = lVar6;
    func_0x000107c60790(lVar6);
    func_0x000107c60798(lVar6,param_1,lVar8 + 1);
    uVar4 = *(undefined8 *)(param_3 + _DAT_112796278);
    if (puVar7 != (undefined *)0x0) {
      auStack_120[0] = 0x18;
      goto LAB_10006fffc;
    }
    auStack_120[0] = 0x31;
  }
  else {
    puVar2 = param_1;
    FUN_100070200(param_1,param_3);
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
    lVar6 = *(long *)(param_3 + _DAT_112796284);
    lVar8 = lVar6;
    func_0x000107c60790(lVar6);
    func_0x000107c60798(lVar6,param_1,lVar8 + 1);
    uVar4 = *(undefined8 *)(param_3 + _DAT_112796278);
    if (puVar7 != (undefined *)0x0) {
      auStack_120[0] = 8;
LAB_10006fffc:
      func_0x000107c3deec(uVar4);
      uVar4 = *(undefined8 *)(param_3 + _DAT_112796278);
      func_0x000107c613d0(puVar7);
      goto LAB_1000701dc;
    }
    auStack_120[0] = 0x30;
  }
  func_0x000107c3deec(uVar4);
  uVar5 = *(ulong *)(param_3 + _DAT_112796278);
  func_0x000107c4adac();
  if ((uVar5 & 1) != 0) {
    func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_112796278);
  puVar7 = param_1;
  func_0x000107c60860();
  puVar2 = param_1;
  func_0x000107c60864();
  if ((puVar7 == (undefined *)0x0) && (uStack_62 = 0, 0 < (long)puVar2)) {
    lStack_88 = 0;
    puVar7 = param_1;
    puStack_a0 = param_1;
    puStack_80 = puVar2;
    func_0x000107c60860();
    puStack_98 = puVar7;
    puStack_90 = (undefined *)0x0;
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c60858(param_1,0x600);
      puStack_90 = param_1;
    }
    lVar6 = 0;
    puVar7 = (undefined *)0x0;
    lVar8 = 0x40;
    lStack_78 = 0;
    puStack_70 = (undefined *)0x0;
    do {
      puVar3 = puVar7;
      if ((undefined *)0x3 < puVar7) {
        puVar3 = (undefined *)0x4;
      }
      if (((((long)puVar7 < (long)puStack_80) && (puStack_98 == (undefined *)0x0)) &&
          (puStack_90 == (undefined *)0x0)) &&
         ((long)puStack_70 <= (long)puVar7 || (long)puVar7 < lStack_78)) {
        lStack_78 = (long)puVar7 - (long)puVar3;
        puStack_70 = (undefined *)(lStack_78 + 0x40);
        if ((long)puStack_80 <= lStack_78 + 0x40) {
          puStack_70 = puStack_80;
        }
        puVar1 = puStack_80;
        if (lVar8 - (long)puVar3 <= (long)puStack_80) {
          puVar1 = (undefined *)(lVar8 - (long)puVar3);
        }
        func_0x000107c6085c(puStack_a0,lStack_78 + lStack_88,puVar1 + (long)(puVar3 + lVar6),
                            auStack_120);
      }
      func_0x000107c3deec(uVar4);
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + 1;
    } while (puVar2 != puVar7);
  }
LAB_1000701dc:
  func_0x000107c3deec(uVar4);
  return;
}



/* Entry: 100070200; end: 10007039b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100070200(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + _DAT_112796284);
  func_0x000107c60794(lVar1,param_1);
  uVar2 = 0x7fffffffffffffff;
  if (lVar1 != 0) {
    uVar2 = lVar1 - 1;
  }
  if (uVar2 < 0x100) {
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    return 1;
  }
  if (uVar2 >> 0x10 == 0) {
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    uVar2 = *(ulong *)(param_2 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 1) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_2 + _DAT_112796278));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112796278);
  }
  else {
    if (uVar2 == 0x7fffffffffffffff) {
      return 0;
    }
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278));
    uVar2 = *(ulong *)(param_2 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_2 + _DAT_112796278));
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112796278);
  }
  func_0x000107c3deec(uVar3);
  return 1;
}



/* Entry: 10007039c; end: 1000703eb; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x0001000703d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000703d8) */

void FUN_10007039c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1000703ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000703ec; end: 1000706ff;  */

/* WARNING: Possible PIC construction at 0x00010007044c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100070494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000704d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100070518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007055c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000705c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100070604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010007066c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100070608) */
/* WARNING: Removing unreachable block (ram,0x000100070628) */
/* WARNING: Removing unreachable block (ram,0x000100070620) */
/* WARNING: Removing unreachable block (ram,0x000100070634) */
/* WARNING: Removing unreachable block (ram,0x0001000705c8) */
/* WARNING: Removing unreachable block (ram,0x000100070560) */
/* WARNING: Removing unreachable block (ram,0x000100070580) */
/* WARNING: Removing unreachable block (ram,0x000100070578) */
/* WARNING: Removing unreachable block (ram,0x00010007058c) */
/* WARNING: Removing unreachable block (ram,0x00010007051c) */
/* WARNING: Removing unreachable block (ram,0x0001000704d8) */
/* WARNING: Removing unreachable block (ram,0x000100070498) */
/* WARNING: Removing unreachable block (ram,0x000100070450) */
/* WARNING: Removing unreachable block (ram,0x000100070670) */
/* WARNING: Removing unreachable block (ram,0x0001000706ac) */
/* WARNING: Removing unreachable block (ram,0x000100070684) */
/* WARNING: Removing unreachable block (ram,0x0001000706b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000703ec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113084310);
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f2077b0);
  func_0x000107c42730(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100070700; end: 1000707bb; -[FCNSCoder encodeDouble:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100070700(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_4 == 0) {
    uStack_32 = 0;
    func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278),param_3,&uStack_32,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(param_1);
  }
  else {
    func_0x000107c3ab6c(param_4,param_3,param_2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(param_1);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c3ab6c();
    return;
  }
  uStack_31 = 0;
  func_0x000107c3deec(*(undefined8 *)(param_2 + _DAT_112796278),param_3,&uStack_31,1);
  return;
}



/* Entry: 1000707bc; end: 100070ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000707bc(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uStack_40;
  undefined1 uStack_31;
  
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = (undefined4)param_1;
  puVar4 = &uStack_40;
  uVar2 = param_2;
  func_0x000107c607c8();
  uVar1 = uStack_40;
  switch(uVar2) {
  case 1:
  case 7:
    goto code_r0x000100070934;
  case 2:
  case 8:
    goto code_r0x0001000708c8;
  case 3:
  case 9:
  case 10:
  case 0xe:
    goto code_r0x000100070864;
  case 4:
  case 0xb:
  case 0xf:
    break;
  case 5:
  case 0xc:
    uStack_40 = CONCAT71(uStack_40._1_7_,0x13);
    func_0x000107c3deec(*(undefined8 *)(param_4 + _DAT_112796278),param_3,&uStack_40,1);
    func_0x000107c436dc(param_2);
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar8);
    uVar2 = *(ulong *)(param_4 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_4 + _DAT_112796278),param_3,4 - (uVar2 & 3));
    }
    goto code_r0x000100070a2c;
  case 6:
  case 0xd:
  case 0x10:
    uStack_40 = CONCAT71(uStack_40._1_7_,0x14);
    func_0x000107c3deec(*(undefined8 *)(param_4 + _DAT_112796278),param_3,&uStack_40,1);
    func_0x000107c4223c(param_2);
    uStack_40 = CONCAT44(uVar9,uVar8);
    uVar2 = *(ulong *)(param_4 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 7) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_4 + _DAT_112796278),param_3,8 - (uVar2 & 7));
    }
code_r0x0001000709c4:
    uVar3 = *(undefined8 *)(param_4 + _DAT_112796278);
    uVar5 = 8;
    puVar4 = &uStack_40;
    goto code_r0x000100070aa0;
  default:
    goto LAB_100070aa4;
  }
  uVar1 = param_2;
  func_0x000107c4c0a8();
  if (uVar1 != (long)(int)uVar1) {
    uStack_31 = 0x12;
    uStack_40 = uVar1;
    func_0x000107c3deec(*(undefined8 *)(param_4 + _DAT_112796278),param_3,&uStack_31,1);
    uVar2 = *(ulong *)(param_4 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 7) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_4 + _DAT_112796278),param_3,8 - (uVar2 & 7));
    }
    goto code_r0x0001000709c4;
  }
code_r0x000100070864:
  uStack_40 = uVar1;
  uVar2 = param_2;
  func_0x000107c49804();
  uStack_40 = CONCAT44(uStack_40._4_4_,(int)uVar2);
  if ((int)uVar2 == (int)(short)uVar2) {
code_r0x0001000708c8:
    uVar2 = param_2;
    func_0x000107c49804();
    uStack_40 = CONCAT62(uStack_40._2_6_,(short)uVar2);
    if ((int)(char)uVar2 == (int)(short)uVar2) {
code_r0x000100070934:
      uVar2 = param_2;
      func_0x000107c49804();
      uStack_31 = (undefined1)uVar2;
      if ((uVar2 & 0xff) == 0) {
        uVar2 = *(ulong *)PTR__kCFBooleanFalse_11034ab88;
        uVar6 = 0x2f;
        uVar7 = 0xe;
code_r0x000100070a54:
        if (param_2 != uVar2) {
          uVar7 = uVar6;
        }
        uVar3 = *(undefined8 *)(param_4 + _DAT_112796278);
        uStack_40 = CONCAT71(uStack_40._1_7_,uVar7);
      }
      else {
        if (((uint)uVar2 & 0xff) == 1) {
          uVar2 = *(ulong *)PTR__kCFBooleanTrue_11034ab90;
          uVar6 = 0x2e;
          uVar7 = 0xd;
          goto code_r0x000100070a54;
        }
        uStack_40 = CONCAT71(uStack_40._1_7_,0xf);
        func_0x000107c3deec(*(undefined8 *)(param_4 + _DAT_112796278),param_3,&uStack_40,1);
        uVar3 = *(undefined8 *)(param_4 + _DAT_112796278);
        puVar4 = (ulong *)&uStack_31;
      }
      uVar5 = 1;
    }
    else {
      uStack_31 = 0x10;
      func_0x000107c3deec(*(undefined8 *)(param_4 + _DAT_112796278),param_3,&uStack_31,1);
      uVar2 = *(ulong *)(param_4 + _DAT_112796278);
      func_0x000107c4adac();
      if ((uVar2 & 1) != 0) {
        func_0x000107c45310(*(undefined8 *)(param_4 + _DAT_112796278),param_3,1);
      }
      uVar3 = *(undefined8 *)(param_4 + _DAT_112796278);
      uVar5 = 2;
      puVar4 = &uStack_40;
    }
  }
  else {
    uStack_31 = 0x11;
    func_0x000107c3deec(*(undefined8 *)(param_4 + _DAT_112796278),param_3,&uStack_31,1);
    uVar2 = *(ulong *)(param_4 + _DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)(param_4 + _DAT_112796278),param_3,4 - (uVar2 & 3));
    }
code_r0x000100070a2c:
    uVar3 = *(undefined8 *)(param_4 + _DAT_112796278);
    uVar5 = 4;
    puVar4 = &uStack_40;
  }
code_r0x000100070aa0:
  func_0x000107c3deec(uVar3,param_3,puVar4,uVar5);
LAB_100070aa4:
  return;
}



/* Entry: 100070ab8; end: 100070b67; -[FCNSCoder encodeInteger:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100070ab8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x000107c3deec(*(undefined8 *)(param_1 + _DAT_112796278),param_2,&uStack_22,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  }
  else {
    func_0x000107c3ab6c(param_4,param_2,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c3ab6c();
    return;
  }
  uStack_21 = 0;
  func_0x000107c3deec(*(undefined8 *)(param_1 + _DAT_112796278),param_2,&uStack_21,1);
  return;
}



/* Entry: 100070b68; end: 100070bfb; -[FCNSCoder encodeObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100070b68(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_4 == 0) {
    uStack_22 = 0;
    func_0x000107c3deec(*(undefined8 *)(param_1 + _DAT_112796278),param_2,&uStack_22,1);
  }
  else {
    func_0x000107c3ab6c(param_4,param_2,param_1);
  }
  if (param_3 != 0) {
    func_0x000107c3ab6c(param_3,param_2,param_1);
    return;
  }
  uStack_21 = 0;
  func_0x000107c3deec(*(undefined8 *)(param_1 + _DAT_112796278),param_2,&uStack_21,1);
  return;
}



/* Entry: 100070bfc; end: 100070c03;  */

void FUN_100070bfc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100070c04; end: 1000718c3;  */

/* WARNING: Removing unreachable block (ram,0x000100071054) */
/* WARNING: Removing unreachable block (ram,0x000100070ee8) */
/* WARNING: Removing unreachable block (ram,0x0001000716bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100070c04(double param_1,long param_2)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined1 *puVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 *puVar15;
  double dVar16;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar15 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = puVar15 + (-extraout_x12_00 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar13 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar2 - extraout_x12_03;
  if (*(int *)(param_2 + _DAT_113084340) != -1) {
    lStack_e0 = _DAT_113084340;
    lStack_d0 = _DAT_113084318;
    lVar11 = *(long *)(param_2 + _DAT_113084318);
    uStack_e8 = extraout_x14;
    uStack_d8 = unaff_x20;
    lStack_c8 = extraout_x13;
    lStack_c0 = param_2;
    if (lRam0000000113084258 != -1) {
      func_0x000107c61568(0x113084258,FUN_10006e83c);
    }
    uVar5 = uStack_d8;
    lVar4 = lRam0000000113084260;
    uStack_80 = uStack_d8;
    func_0x000107c5ffe4(&lStack_a8,FUN_1000718c4,&lStack_90,PTR___sSiN_11034deb0);
    lVar3 = lStack_c0;
    if (lVar11 == lStack_a8) {
      func_0x000107c5ee58();
      lVar13 = lStack_c0;
      pdVar1 = (double *)(lStack_c0 + _DAT_113084338);
      *pdVar1 = param_1;
      *(undefined1 *)(pdVar1 + 1) = 0;
      if (lRam00000001130842b8 != -1) {
        func_0x000107c61568(0x1130842b8,FUN_10006c8d8);
      }
      lVar4 = lStack_b8;
      lVar3 = lStack_b8;
      FUN_100028790(lStack_b8,0x113813c28);
      lVar11 = lStack_c8;
      (**(code **)(lStack_c8 + 0x10))(lVar12,lVar3,lVar4);
      puVar6 = PTR_PTR_1126bdbc0;
      func_0x000107c61168();
      func_0x000107c41308();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        pcVar14 = *(code **)(lVar11 + 8);
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar6);
        func_0x000107c5eda8(lVar2);
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar6;
        func_0x000107c5ed90();
        lStack_90 = 0;
        puVar9 = puVar6;
        func_0x000107c409e4();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        lVar11 = lStack_90;
        if ((int)puVar9 == 0) {
          lVar4 = lStack_90;
          func_0x000107c61174(lStack_90);
          func_0x000107c5ed30(lVar11);
          func_0x000107c61170(lVar4);
          func_0x000107c61654();
          func_0x00010006c090(puVar7,lVar3);
          lVar4 = lStack_b8;
          pcVar14 = *(code **)(lStack_c8 + 8);
          (*pcVar14)(lVar2,lStack_b8);
          func_0x000107c614ac(lVar11);
        }
        else {
          func_0x000107c61174(lStack_90);
          func_0x000107c5ee40(lVar12,0,puVar7,lVar3);
          lVar4 = lStack_b8;
          pcVar14 = *(code **)(lStack_c8 + 8);
          (*pcVar14)(lVar2,lStack_b8);
          func_0x00010006c090(puVar7,lVar3);
        }
      }
      (*pcVar14)(lVar12,lVar4);
      func_0x00010452ecd8(3,2);
      lStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x3e);
      func_0x000107c5fb78(0x5b,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000022,0x800000010dd155a0);
      func_0x000107c5fb78(0xd000000000000027,0x800000010f207630);
      lStack_a8 = *(long *)(lVar13 + lStack_d0);
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f207660);
      func_0x000107c5fddc(param_1,&lStack_90,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar5 = uStack_88;
      lVar2 = lStack_90;
      func_0x000107c5fadc(lStack_90,uStack_88);
      func_0x000107c6142c(uVar5);
      func_0x00010006f364(lVar2);
LAB_100071330:
      func_0x000107c61170(lVar2);
      lVar2 = *(long *)(lVar13 + lStack_e0);
      if (lVar2 != -1) {
        if (lVar2 == 1) {
          func_0x00010452ee38(lVar13);
        }
        else if (lVar2 == 0) {
          func_0x00010452ee38(lVar13);
          goto LAB_100071544;
        }
        uVar5 = 1;
        goto LAB_100071548;
      }
    }
    else {
      lVar2 = *(long *)(lStack_c0 + lStack_d0);
      uStack_80 = uVar5;
      func_0x000107c5ffe4(&lStack_a8,FUN_1000718d4,&lStack_90,PTR___sSiN_11034deb0);
      pdVar1 = (double *)(lVar3 + _DAT_113084338);
      if (lStack_a8 < lVar2) {
        *pdVar1 = 0.0;
        *(undefined1 *)(pdVar1 + 1) = 1;
        if (lRam00000001130842b8 != -1) {
          func_0x000107c61568(0x1130842b8,FUN_10006c8d8);
        }
        lVar11 = lStack_b8;
        lVar3 = lStack_b8;
        FUN_100028790(lStack_b8,0x113813c28);
        lVar2 = lStack_c8;
        (**(code **)(lStack_c8 + 0x10))(lVar13,lVar3,lVar11);
        puVar6 = PTR_PTR_1126bdbc0;
        func_0x000107c61168();
        lVar12 = lStack_c0;
        func_0x000107c41308();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          pcVar14 = *(code **)(lVar2 + 8);
        }
        else {
          lStack_e0 = lVar4;
          puVar7 = puVar6;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar6);
          func_0x000107c5eda8(puVar10);
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar8 = puVar6;
          func_0x000107c5ed90();
          lStack_90 = 0;
          puVar9 = puVar6;
          func_0x000107c409e4();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar8);
          lVar2 = lStack_90;
          if ((int)puVar9 == 0) {
            lVar11 = lStack_90;
            func_0x000107c61174(lStack_90);
            func_0x000107c5ed30(lVar2);
            func_0x000107c61170(lVar11);
            func_0x000107c61654();
            func_0x00010006c090(puVar7,lVar3);
            lVar11 = lStack_b8;
            pcVar14 = *(code **)(lStack_c8 + 8);
            (*pcVar14)(puVar10,lStack_b8);
            func_0x000107c614ac(lVar2);
          }
          else {
            func_0x000107c61174(lStack_90);
            func_0x000107c5ee40(lVar13,0,puVar7,lVar3);
            lVar11 = lStack_b8;
            pcVar14 = *(code **)(lStack_c8 + 8);
            (*pcVar14)(puVar10,lStack_b8);
            func_0x00010006c090(puVar7,lVar3);
          }
        }
        (*pcVar14)(lVar13,lVar11);
        func_0x00010452ecd8(0,1);
        lStack_90 = 0;
        uStack_88 = 0xe000000000000000;
        func_0x000107c602fc(0x81);
        lStack_a8 = lStack_90;
        uStack_a0 = uStack_88;
        func_0x000107c5fb78(0x5b,0xe100000000000000);
        func_0x000107c5fb78(0xd000000000000022,0x800000010dd155a0);
        func_0x000107c5fb78(0xd000000000000016,0x800000010f207590);
        puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar6 = PTR___sSiN_11034deb0;
        lStack_90 = *(long *)(lVar12 + lStack_d0);
        puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar8);
        func_0x000107c5fb78(0xd000000000000022,0x800000010f2075b0);
        uStack_80 = uStack_d8;
        func_0x000107c5ffe4(auStack_b0,&UNK_104531108,&lStack_90,puVar6);
        func_0x000107c6057c(puVar6,puVar7);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c5fb78(0xd000000000000042,0x800000010f2075e0);
        uVar5 = uStack_a0;
        lVar2 = lStack_a8;
        func_0x000107c5fadc(lStack_a8,uStack_a0);
        func_0x000107c6142c(uVar5);
        func_0x00010006f364(lVar2);
      }
      else {
        if (*(char *)(pdVar1 + 1) == '\x01') goto LAB_100071544;
        dVar16 = *pdVar1;
        func_0x000107c5ee58();
        param_1 = param_1 - dVar16;
        if (param_1 < 7200.0) {
          func_0x00010452ecd8(4,2);
          lStack_90 = 0;
          uStack_88 = 0xe000000000000000;
          func_0x000107c602fc(0x70);
          func_0x000107c5fb78(0x5b,0xe100000000000000);
          func_0x000107c5fb78(0xd000000000000022,0x800000010dd155a0);
          func_0x000107c5fb78(0xd00000000000001c,0x800000010f207520);
          puVar7 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
          puVar6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
          func_0x000107c5fddc(param_1,&lStack_90,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0xd000000000000044,0x800000010f207540);
          func_0x000107c5fddc(0x40bc200000000000,&lStack_90,puVar6,puVar7);
          func_0x000107c5fb78(0x73646e6f63657320,0xe90000000000002e);
          uVar5 = uStack_88;
          lVar2 = lStack_90;
          func_0x000107c5fadc(lStack_90,uStack_88);
          func_0x000107c6142c(uVar5);
          func_0x000107c30ac8(lVar2);
          lVar13 = lStack_c0;
          goto LAB_100071330;
        }
        *pdVar1 = 0.0;
        *(undefined1 *)(pdVar1 + 1) = 1;
        if (lRam00000001130842b8 != -1) {
          func_0x000107c61568(0x1130842b8,FUN_10006c8d8);
        }
        lVar12 = lStack_b8;
        lVar13 = lStack_b8;
        FUN_100028790(lStack_b8,0x113813c28);
        lVar2 = lStack_c8;
        (**(code **)(lStack_c8 + 0x10))(uStack_e8,lVar13,lVar12);
        puVar6 = PTR_PTR_1126bdbc0;
        func_0x000107c61168();
        func_0x000107c41308();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          pcVar14 = *(code **)(lVar2 + 8);
          lVar2 = lStack_b8;
        }
        else {
          puVar7 = puVar6;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar6);
          func_0x000107c5eda8(puVar15);
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar8 = puVar6;
          func_0x000107c5ed90();
          lStack_90 = 0;
          puVar9 = puVar6;
          func_0x000107c409e4();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar8);
          lVar12 = lStack_90;
          if ((int)puVar9 == 0) {
            lVar2 = lStack_90;
            func_0x000107c61174(lStack_90);
            func_0x000107c5ed30(lVar12);
            func_0x000107c61170(lVar2);
            func_0x000107c61654();
            func_0x00010006c090(puVar7,lVar13);
            lVar2 = lStack_b8;
            pcVar14 = *(code **)(lStack_c8 + 8);
            (*pcVar14)(puVar15,lStack_b8);
            func_0x000107c614ac(lVar12);
          }
          else {
            func_0x000107c61174(lStack_90);
            func_0x000107c5ee40(uStack_e8,0,puVar7,lVar13);
            lVar2 = lStack_b8;
            pcVar14 = *(code **)(lStack_c8 + 8);
            (*pcVar14)(puVar15,lStack_b8);
            func_0x00010006c090(puVar7,lVar13);
          }
        }
        (*pcVar14)(uStack_e8,lVar2);
        func_0x00010452ecd8(1,1);
        lStack_90 = 0;
        uStack_88 = 0xe000000000000000;
        func_0x000107c602fc(0x91);
        func_0x000107c5fb78(0x5b,0xe100000000000000);
        func_0x000107c5fb78(0xd000000000000022,0x800000010dd155a0);
        func_0x000107c5fb78(0xd000000000000034,0x800000010f207490);
        puVar7 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
        puVar6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
        func_0x000107c5fddc(0x40bc200000000000,&lStack_90,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0xd00000000000004d,0x800000010f2074d0);
        func_0x000107c5fddc(param_1,&lStack_90,puVar6,puVar7);
        func_0x000107c5fb78(0x73646e6f63657320,0xe90000000000002e);
        uVar5 = uStack_88;
        lVar2 = lStack_90;
        func_0x000107c5fadc(lStack_90,uStack_88);
        func_0x000107c6142c(uVar5);
        func_0x000107c30ac8(lVar2);
      }
      func_0x000107c61170(lVar2);
    }
  }
LAB_100071544:
  uVar5 = 0;
LAB_100071548:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78(uVar5);
    *extraout_x8_00 = uRam00000001130842d0;
    return;
  }
  return;
}



/* Entry: 1000718c4; end: 1000718d3;  */

void FUN_1000718c4(undefined8 *param_1)

{
  *param_1 = uRam00000001130842d0;
  return;
}



/* Entry: 1000718d4; end: 1000718e7;  */

void FUN_1000718d4(void)

{
  FUN_1000718c4();
  return;
}



/* Entry: 1000718e8; end: 100071ab3; -[SCAppStartExperimentReader retrieveConfigResults] */

void FUN_1000718e8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  func_0x000107c3b040();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412f8(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar5);
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3e814();
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126bdbc0;
    func_0x000107c4d9f0(PTR_PTR_1126bdbc0,param_2,puVar2);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar3);
  }
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x000107c400ec(puVar1);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4f520(puVar1);
    func_0x000107c3bf10(param_1,param_2,puVar5,puVar3,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar5 = param_1;
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100071ab4; end: 100071d43; -[SCAppStartExperimentReader _checkForRecoveryData] */

void FUN_100071ab4(undefined *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  if ((uVar2 == 0) || (func_0x000107c4aa08(), (uVar2 & 1) != 0)) {
LAB_100071ae0:
    puVar5 = param_1;
    func_0x000107c3c220();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) goto LAB_100071b24;
    puVar5 = param_1;
    func_0x000107c3c210();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) goto LAB_100071b24;
  }
  else {
    puVar5 = param_1;
    func_0x000107c3c210();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) goto LAB_100071b24;
    if (lRam00000001137fc1f8 != -1) {
      FUN_10002a2fc(0x1137fc1f8,&PTR___NSConcreteGlobalBlock_110d66948);
    }
    if ((bRam00000001137fc1e0 & 1) != 0) goto LAB_100071ae0;
  }
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x000107c4a300();
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar5);
  if (iVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3e814();
    func_0x000107c61170(puVar5);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    puStack_58 = &UNK_10b88acec;
    puStack_50 = &UNK_10b88acfc;
    uStack_48 = 0;
    uVar3 = 0;
    func_0x000107c60f6c();
    func_0x000107c61174();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c61174(uVar3);
    func_0x000107c44244(uVar4);
    func_0x000107c3ce08(param_1);
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar5);
    if (puStack_68[5] == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126e1968;
      func_0x000107c610fc(PTR_PTR_1126e1968);
      func_0x000107c5374c();
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c60bcc(&uStack_70,8);
    func_0x000107c61170(uStack_48);
  }
LAB_100071b24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100071d44; end: 100071d77; -[SCStartupJournalManager lastLaunchHadCrash] */

uint FUN_100071d44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100071e30();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100071d78; end: 100071d8f;  */

undefined8 FUN_100071d78(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (cRam00000001137fc7d8 != '\0') {
    uVar1 = 0x1137fc7d9;
  }
  return uVar1;
}



/* Entry: 100071d90; end: 100071e2f;  */

undefined * FUN_100071d90(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_100071d78();
  if (param_1 == 0) {
    FUN_100071e7c();
    if (param_2 == 0) {
      return (undefined *)0x0;
    }
  }
  else {
    func_0x000107c5fb80();
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  puVar2 = puVar1;
  func_0x000107c43418(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 100071e30; end: 100071e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100071e30(void)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = _DAT_1130843b0;
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130843b0);
  uVar4 = (ulong)bVar1;
  uVar3 = (uint)bVar1;
  if (bVar1 == 2) {
    FUN_100071d90();
    uVar3 = (uint)uVar4;
    if ((uVar4 & 1) == 0) {
      FUN_1000721a8();
    }
    else {
      func_0x00010453a034();
      uVar3 = 1;
    }
    *(char *)(unaff_x20 + lVar2) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 100071e7c; end: 100071fe7;  */

/* WARNING: Removing unreachable block (ram,0x000100071fe4) */

undefined1  [16] FUN_100071e7c(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_100071fe8(puVar2);
  puVar3 = puVar2;
  (**(code **)(lVar5 + 0x30))(puVar2,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar2);
    puVar2 = (undefined1 *)0x0;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4 - extraout_x12,puVar2,lVar1);
    func_0x000107c5fb80();
    puVar3 = puVar2;
    func_0x000107c5ed9c(lVar4);
    func_0x000107c6142c(puVar2);
    func_0x000107c5edc4();
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(lVar4,lVar1);
    (*pcVar6)(lVar4 - extraout_x12,lVar1);
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 100071fe8; end: 1000721a7;  */

ulong FUN_100071fe8(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long alStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar7 - extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  uStack_60 = 0;
  puVar3 = puVar2;
  func_0x000107c3ac20();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar5 = uStack_60;
  if (puVar3 == (undefined *)0x0) {
    uVar4 = uStack_60;
    func_0x000107c61174(uStack_60);
    func_0x000107c5ed30(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x000107c614ac(uVar5);
  }
  else {
    func_0x000107c5edb4(puVar7,puVar3);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(puVar3);
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    func_0x000107c5ed9c(param_1,0x6964656d61726150,0xe900000000000063);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  (**(code **)(lVar8 + 0x38))(param_1,puVar3 == (undefined *)0x0,1,lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  func_0x000107c60e78();
  if (lRam0000000113846a88 != -1) {
    *(undefined1 **)(lVar6 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar6 + -8) = FUN_1000721a8;
    FUN_10002a2fc(0x113846a88,&PTR___NSConcreteGlobalBlock_110d96538);
  }
  return (ulong)bRam0000000113846a90;
}



/* Entry: 1000721a8; end: 1000721e7;  */

undefined1 FUN_1000721a8(void)

{
  if (lRam0000000113846a88 != -1) {
    FUN_10002a2fc(0x113846a88,&PTR___NSConcreteGlobalBlock_110d96538);
  }
  return uRam0000000113846a90;
}



/* Entry: 1000721e8; end: 1000722ff;  */

void FUN_1000721e8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113846a98 != -1) {
    FUN_10002a2fc(0x113846a98,&PTR___NSConcreteGlobalBlock_110d96558);
  }
  uVar1 = uRam0000000113846aa0;
  func_0x000107c61174(uRam0000000113846aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100072300; end: 1000724b3; -[SCAppStartExperimentReader _readLocalFileRecoveryResponse] */

void FUN_100072300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b7870;
  func_0x000107c44228(PTR_PTR_1126b7870);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4e430(puVar1);
  func_0x000107c61180();
  puVar2 = puVar4;
  func_0x000107c43418(puVar4,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  if ((int)puVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c412f8(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar1);
    func_0x000107c61180();
  }
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126e1968;
    func_0x000107c610f4();
    func_0x000107c4636c();
    puVar3 = puVar2;
    func_0x000107c447bc();
    if ((int)puVar3 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x000107c400ec(puVar2);
      func_0x000107c61180();
      func_0x000107c3b044(param_1,param_2,puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61174(puVar2);
      puVar3 = puVar2;
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1000724b4; end: 10007251f; +[SCTracer shared] */

void FUN_1000724b4(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309bf48 != -1) {
    func_0x000107c61568(0x11309bf48,0x100029950);
  }
  func_0x000107c61428(0x113815538,auStack_38,0,0);
  func_0x000107c6117c(uRam0000000113815538);
  return;
}



/* Entry: 100072520; end: 10007256b; -[SCTracer beginSyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100072520(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3e814();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10007256c; end: 10007265b; +[SCAppStartExperimentReaderConstants getPushRecoveryLocalFileURL] */

void FUN_10007256c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc218 != -1) {
    FUN_10002a2fc(0x1137fc218,&PTR___NSConcreteGlobalBlock_110d669c8);
  }
  uVar1 = uRam00000001137fc210;
  func_0x000107c61174(uRam00000001137fc210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10007265c; end: 10007270b; -[SCTracer endSyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007265c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11309bf58;
    func_0x000107c61618();
    if (param_1 != 0) {
      func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10007270c; end: 100072727; -[SCConfigHeuristicRecoveryManagerImpl isRecoveryNeeded] */

undefined1 FUN_10007270c(void)

{
  if (lRam0000000113084230 == -1) {
    return uRam0000000113813c20;
  }
  func_0x000107c61568(0x113084230,0x10006c6e8);
  return uRam0000000113813c20;
}



/* Entry: 100072728; end: 100072a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100072728(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puStack_68;
  
  puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar5 = *puVar7;
  if ((uVar5 & 3) != 0) {
    uVar5 = (uVar5 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar5;
  }
  uVar6 = uVar5 + 4;
  puVar2 = param_1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar6) {
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar5 = *puVar7;
    uVar6 = uVar5 + 4;
  }
  iVar12 = *(int *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
  *puVar7 = uVar6;
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (iVar12 != 0) {
    func_0x000107c60744();
    func_0x000107c60738();
    puVar3 = puVar2;
    func_0x000107c60744();
    func_0x000107c60738();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
    lVar10 = 0;
    do {
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar5) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar6 = *puVar7;
        uVar5 = uVar6 + 1;
      }
      bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar6);
      *puVar7 = uVar5;
      if ((bVar1 < 0x35) &&
         (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
         pcVar8 != (code *)0x0)) {
        puVar11 = param_1;
        (*pcVar8)();
      }
      else {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar11 = (undefined *)0x0;
      }
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar5) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar6 = *puVar7;
        uVar5 = uVar6 + 1;
      }
      bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar6);
      *puVar7 = uVar5;
      if ((bVar1 < 0x35) &&
         (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
         pcVar8 != (code *)0x0)) {
        puVar4 = param_1;
        (*pcVar8)();
        if ((puVar11 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
          *(undefined **)(puVar3 + lVar10 * 8) = puVar11;
          *(undefined **)(puVar2 + lVar10 * 8) = puVar4;
          lVar10 = lVar10 + 1;
        }
      }
      else {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if (lVar10 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac();
    }
    func_0x000107c60744();
    func_0x000107c60740();
    func_0x000107c60744();
    func_0x000107c60740();
  }
  uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
  puStack_68 = puVar3;
  func_0x000107c60780(uVar9);
  func_0x000107c60768(uVar9,&puStack_68,8);
  return puVar3;
}



/* Entry: 100072a34; end: 100072adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100072a34(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  puVar2 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar1 = *puVar2;
  if ((uVar1 & 3) != 0) {
    uVar1 = (uVar1 & 0xfffffffffffffffc) + 4;
    *puVar2 = uVar1;
  }
  uVar3 = uVar1 + 4;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar3) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar2 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar1 = *puVar2;
    uVar3 = uVar1 + 4;
  }
  uVar4 = *(undefined4 *)(*(long *)(param_1 + _DAT_112796258) + uVar1);
  *puVar2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 100072ae0; end: 100072af7;  */

undefined * FUN_100072ae0(void)

{
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 100072af8; end: 100072bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100072af8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar3 = *puVar4;
  uVar1 = uVar3 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar1) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar4 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar3 = *puVar4;
    uVar1 = uVar3 + 1;
  }
  uVar5 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar3);
  *puVar4 = uVar1;
  uVar3 = *(ulong *)(param_1 + _DAT_11279626c);
  uVar1 = uVar3;
  func_0x000107c60780();
  if (uVar5 < uVar1 >> 3) {
    func_0x000107c60778();
    return *(undefined **)(uVar3 + uVar5 * 8);
  }
  func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return puVar2;
}



/* Entry: 100072bf4; end: 100072def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100072bf4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar2 = *puVar3;
  if ((uVar2 & 3) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffffc) + 4;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 4;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar4) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 4;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + _DAT_112796258) + uVar2);
  *puVar3 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,uVar1);
  return;
}



/* Entry: 100072df0; end: 100072ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100072df0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar2 = *puVar3;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 + 1;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 2;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar4) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 2;
  }
  uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + _DAT_112796258) + uVar2);
  *puVar3 = uVar4;
  uVar4 = *(ulong *)(param_1 + _DAT_11279626c);
  uVar2 = uVar4;
  func_0x000107c60780();
  if (uVar5 < uVar2 >> 3) {
    func_0x000107c60778();
    return *(undefined **)(uVar4 + uVar5 * 8);
  }
  func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return puVar1;
}



/* Entry: 100072ef8; end: 1000730ab; -[SCAppStartExperimentReader _filterConfigResults:] */

undefined *
FUN_100072ef8(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
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
  
  puVar4 = &uStack_130;
  puVar7 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x000107c61174(param_3);
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    func_0x000107c61174(param_3);
    puVar1 = param_3;
  }
  else {
    unaff_x21 = PTR_PTR_1126b7870;
    func_0x000107c442b0();
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x000107c61174(unaff_x21);
    param_4 = auStack_e8;
    param_5 = 0x10;
    puVar2 = unaff_x21;
    func_0x000107c4080c(unaff_x21,param_2,&uStack_130,param_4,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            func_0x000107c61128(unaff_x21);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          puVar3 = param_3;
          func_0x000107c4d9e8(param_3,param_2,unaff_x23);
          func_0x000107c61180();
          func_0x000107c61170();
          unaff_x24 = (undefined *)0x0;
          if (puVar3 != (undefined *)0x0) {
            unaff_x24 = param_3;
            func_0x000107c4d9e8(param_3,param_2,unaff_x23);
            func_0x000107c61180();
            func_0x000107c56bd8(puVar1,param_2,unaff_x24,unaff_x23);
            func_0x000107c61170(unaff_x24);
          }
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        param_4 = auStack_e8;
        param_5 = 0x10;
        puVar2 = unaff_x21;
        puVar4 = &uStack_130;
        func_0x000107c4080c(unaff_x21,param_2,&uStack_130,param_4,0x10);
        unaff_x22 = 0;
      } while (puVar2 != (undefined *)0x0);
    }
    func_0x000107c61170(unaff_x21);
    func_0x000107c61170(unaff_x21);
    puVar2 = (undefined *)puVar4;
  }
  puVar6 = param_3;
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  pcVar8 = FUN_1000730ac;
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar2);
  func_0x000107c470d4(puVar6,param_2,puVar2,param_4,param_5,param_6,1,param_8,unaff_x24,unaff_x23,
                      unaff_x22,unaff_x21,puVar1,param_3,puVar7,pcVar8);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar2);
  return puVar6;
}



/* Entry: 1000730ac; end: 10007312b; -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:] */

undefined8
FUN_1000730ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c470d4(param_1,param_2,param_3,param_4,param_5,param_6,1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10007312c; end: 100073323; -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:adjustableQoS:] */

undefined1 *
FUN_10007312c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,ulong param_6,undefined1 param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar5 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e3f8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    uVar11 = 0;
    if (param_6 < 0x3c) {
      uVar11 = param_6;
    }
    uVar6 = param_3;
    func_0x000107c40794();
    uVar8 = *(undefined8 *)((long)puVar5 + 8);
    *(undefined8 *)((long)puVar5 + 8) = uVar6;
    func_0x000107c61170(uVar8);
    func_0x000107c61174(param_5);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x20);
    *(undefined8 *)((long)puVar5 + 0x20) = param_5;
    func_0x000107c61170(uVar6);
    *(ulong *)((long)puVar5 + 0x30) = uVar11;
    FUN_100073324();
    *(ulong *)((long)puVar5 + 0x38) = uVar11;
    *(undefined4 *)((long)puVar5 + 0x44) = 0;
    iVar2 = 0x15;
    if (param_4 != 0) {
      iVar2 = param_4;
    }
    *(int *)((long)puVar5 + 0x28) = iVar2;
    FUN_10007348c();
    lVar9 = 0;
    uVar3 = iVar2 - 9U >> 2 | (iVar2 - 9U) * 0x40000000;
    if (uVar3 < 5) {
      lVar9 = *(long *)(&UNK_10e6045b0 + (ulong)uVar3 * 8);
    }
    uVar11 = lVar9 + uVar11;
    if (3 < uVar11) {
      uVar11 = 4;
    }
    iVar2 = *(int *)(&UNK_10e6043b0 + uVar11 * 4);
    *(int *)((long)puVar5 + 0x2c) = iVar2;
    uVar1 = 0;
    if (iVar2 != *(int *)((long)puVar5 + 0x28)) {
      uVar1 = param_7;
    }
    *(undefined1 *)((long)puVar5 + 0x40) = uVar1;
    uVar6 = param_3;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    uVar11 = (ulong)*(uint *)((long)puVar5 + 0x28);
    uVar8 = param_5;
    func_0x000107c60f4c(param_5,uVar11,0);
    func_0x000107c61180();
    func_0x000107c60f2c(uVar11,0);
    func_0x000107c61180();
    func_0x000107c60f54(uVar6,uVar8,uVar11);
    uVar10 = *(undefined8 *)((long)puVar5 + 0x10);
    *(undefined8 *)((long)puVar5 + 0x10) = uVar6;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar8);
    uVar4 = (undefined4)*(undefined8 *)((long)puVar5 + 0x10);
    FUN_100073498();
    *(undefined4 *)((long)puVar5 + 0x18) = uVar4;
    *(undefined1 *)((long)puVar5 + 0x50) = 0;
    if (*(char *)((long)puVar5 + 0x40) == '\x01') {
      puVar7 = PTR_PTR_1126b6b18;
      func_0x000107c5a9bc(PTR_PTR_1126b6b18);
      func_0x000107c61180();
      func_0x000107c4fc80();
      func_0x000107c61170(puVar7);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar5;
}



/* Entry: 100073324; end: 1000733c7;  */

undefined8 FUN_100073324(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (lRam00000001137fdf68 != -1) {
    FUN_10002a2fc(0x1137fdf68,&PTR___NSConcreteGlobalBlock_110d98928);
  }
  uVar2 = uRam00000001137fdf60;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9c0(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49820();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return uVar3;
}



/* Entry: 1000733c8; end: 10007348b;  */

/* WARNING: Possible PIC construction at 0x000100073440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100073470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073444) */
/* WARNING: Removing unreachable block (ram,0x000100073458) */
/* WARNING: Removing unreachable block (ram,0x000100073474) */

void FUN_1000733c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xb);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  func_0x000107c61180();
  func_0x000107c56bcc(puVar1,param_2,puVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10007348c; end: 100073497;  */

void FUN_10007348c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef08,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 100073498; end: 100073543;  */

ulong FUN_100073498(ulong param_1)

{
  ulong uVar1;
  
  func_0x000107c61174();
  if (lRam00000001137fe058 != -1) {
    FUN_10002a2fc(0x1137fe058,&PTR___NSConcreteGlobalBlock_110d98b48);
  }
  func_0x000107c611ec(0x1137fe000);
  uVar1 = param_1;
  func_0x000107c60f60(param_1,&UNK_10e6045a8);
  if ((int)uVar1 == 0) {
    uVar1 = (ulong)uRam0000000113403f80;
    uRam0000000113403f80 = uRam0000000113403f80 + 1;
    func_0x000107c60f64(param_1,&UNK_10e6045a8,uVar1,0);
  }
  func_0x000107c611f0(0x1137fe000);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100073544; end: 10007354f;  */

void FUN_100073544(void)

{
  uRam00000001137fe000 = 0;
  return;
}



/* Entry: 100073550; end: 1000735a3; +[SCContextAwareQueuePerformerThrottler shared] */

void FUN_100073550(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf38 != -1) {
    FUN_10002a2fc(0x1137fdf38,&PTR___NSConcreteGlobalBlock_110d98908);
  }
  uVar1 = uRam00000001137fdf40;
  func_0x000107c61174(uRam00000001137fdf40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000735a4; end: 1000735cf;  */

void FUN_1000735a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6b18;
  func_0x000107c61160();
  uVar1 = puRam00000001137fdf40;
  puRam00000001137fdf40 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000735d0; end: 1000736c3; -[SCContextAwareQueuePerformerThrottler init] */

undefined1 * FUN_1000735d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e3e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    func_0x000107c60f4c(0,0x21,0);
    func_0x000107c61180();
    uVar3 = 0x21;
    func_0x000107c60f2c(0x21,0);
    func_0x000107c61180();
    puVar4 = &UNK_10f82ed30;
    func_0x000107c60f54(&UNK_10f82ed30,uVar2,uVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    puVar5 = (undefined1 *)puVar1;
    func_0x000107c3ba40();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar5;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    func_0x000107c61170(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000736c4; end: 10007377b; -[SCContextAwareQueuePerformerThrottler _initializePerformerDict] */

void FUN_1000736c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = 0;
  do {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c44c44(PTR__OBJC_CLASS___NSHashTable_1126b4538,param_2,5);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
    func_0x000107c61180();
    func_0x000107c56bcc(puVar1,param_2,puVar2,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xc);
  puVar2 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10007377c; end: 10007380b; -[SCContextAwareQueuePerformerThrottler registerPerformer:] */

void FUN_10007377c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1000738ec;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  func_0x000107c61174(param_3);
  FUN_10007380c(uVar1,&puStack_60);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10007380c; end: 1000738c3;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_10007380c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar1 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar2;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar2 = pcRam0000000113817cd0;
  FUN_10002a3a8(param_2);
  func_0x000107c61180();
  (*pcVar2)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1000738c4; end: 1000738eb;  */

/* WARNING: Possible PIC construction at 0x0001000738d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000738dc) */

void FUN_1000738c4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1000738ec; end: 100073987;  */

/* WARNING: Possible PIC construction at 0x000100073970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073974) */

void FUN_1000738ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3df7c(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x000107c5add8(uVar2,param_2,uVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c5bbe4(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c4d9c0(uVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100073988; end: 10007398f; -[SCQueuePerformer applicationContext] */

undefined8 FUN_100073988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100073990; end: 100073a0f; -[SCAppStartExperimentReader boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_100073990(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c3cda4();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c3ebcc(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 100073a10; end: 100073b27; -[SCAppStartExperimentReader _valueForConfigKeySync:valueKey:featureProvidedSignals:exposeExperiment:] */

void FUN_100073a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3ce08(param_1);
  lVar1 = lRam00000001137fc1d8;
  if ((*(byte *)(param_1 + 0x6a) & 1) == 0) {
    func_0x000107c61174(lRam00000001137fc1d8);
  }
  else {
    func_0x000107c611ec(param_1 + 0x6c);
    lVar1 = lRam00000001137fc1d8;
    func_0x000107c61174(lRam00000001137fc1d8);
    func_0x000107c611f0(param_1 + 0x6c);
  }
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4d9c0(lVar1,param_2,param_3);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    if ((param_6 != 0) && (lVar3 != 0)) {
      func_0x000107c3be28(param_1,param_2,lVar2,param_3);
    }
    func_0x000107c3be04(param_1,param_2,param_3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


