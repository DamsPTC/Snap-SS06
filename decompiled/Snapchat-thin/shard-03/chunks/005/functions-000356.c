/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029b7d8c; end: 1029b7f93;  */

/* WARNING: Possible PIC construction at 0x0001029b7dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b7f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b7f54) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f34) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f0c) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f90) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f20) */
/* WARNING: Removing unreachable block (ram,0x0001029b7ee4) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f8c) */
/* WARNING: Removing unreachable block (ram,0x0001029b7ef8) */
/* WARNING: Removing unreachable block (ram,0x0001029b7e6c) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f88) */
/* WARNING: Removing unreachable block (ram,0x0001029b7ed0) */
/* WARNING: Removing unreachable block (ram,0x0001029b7e10) */
/* WARNING: Removing unreachable block (ram,0x0001029b7e28) */
/* WARNING: Removing unreachable block (ram,0x0001029b7e3c) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f84) */
/* WARNING: Removing unreachable block (ram,0x0001029b7e5c) */
/* WARNING: Removing unreachable block (ram,0x0001029b7dd0) */
/* WARNING: Removing unreachable block (ram,0x0001029b7dd4) */
/* WARNING: Removing unreachable block (ram,0x0001029b7de8) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f80) */
/* WARNING: Removing unreachable block (ram,0x0001029b7dfc) */
/* WARNING: Removing unreachable block (ram,0x0001029b7f64) */

void FUN_1029b7d8c(long param_1)

{
  code *pcVar1;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4c97c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b7f80);
  (*pcVar1)();
}



/* Entry: 1029b7f94; end: 1029b7fd3;  */

void FUN_1029b7f94(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1029b7fd4; end: 1029b7fe3;  */

void FUN_1029b7fd4(long param_1,long param_2)

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



/* Entry: 1029b7fe4; end: 1029b8253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b7fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126abc30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c6071c();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed3de8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ed3df0);
  puVar3 = &UNK_11057bb50;
  func_0x000107c613fc(&UNK_11057bb50,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(long *)(puVar3 + 0x40) = lVar1;
  uStack_70 = 0x1029b84f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11057bb68;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  func_0x0001013c2988(param_3,param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1029b8254; end: 1029b830b;  */

void FUN_1029b8254(double param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x000107c6071c();
  dVar2 = (dVar2 - param_1) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b8304);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar2) {
    if (dVar2 < 9.223372036854776e+18) {
      func_0x00010607a854(param_4,param_3 == 0,(long)dVar2);
      if (param_5 != (code *)0x0) {
        (*param_5)(param_3);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b830c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b8308);
  (*pcVar1)();
}



/* Entry: 1029b830c; end: 1029b8383;  */

/* WARNING: Possible PIC construction at 0x0001029b8368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b836c) */

void FUN_1029b830c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1029b8384; end: 1029b842f; -[_TtC25SpotlightTileServicesImpl30SpotlightTileUploadServiceImpl uploadWithSnapDoc:completion:] */

/* WARNING: Possible PIC construction at 0x0001029b8414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b8418) */

void FUN_1029b8384(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11057bb28;
    func_0x000107c613fc(&UNK_11057bb28,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_1029b84e8;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029b7fe4(param_3,pcVar2,puVar1);
  func_0x0001013c2974(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029b8430; end: 1029b848f; -[_TtC25SpotlightTileServicesImpl30SpotlightTileUploadServiceImpl init] */

void FUN_1029b8430(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightTileServicesImpl.SpotlightTileUploadServiceImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b845c);
  (*pcVar1)();
}



/* Entry: 1029b8490; end: 1029b84c7; -[_TtC25SpotlightTileServicesImpl30SpotlightTileUploadServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029b84ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b84b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b8490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3de8));
  return;
}



/* Entry: 1029b84c8; end: 1029b84e7;  */

void FUN_1029b84c8(void)

{
  func_0x000107c61168(&PTR_PTR_112879518);
  return;
}



/* Entry: 1029b84e8; end: 1029b851f;  */

void FUN_1029b84e8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029b8520; end: 1029b858b;  */

void FUN_1029b8520(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1029b9008(0,0x112d51360,&PTR_PTR_1126becd8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ed3e20;
  plVar5 = (long *)&UNK_10dafcaa0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1029b858c; end: 1029b8953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b858c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112ed3de8) = param_1;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0d4ae0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112ed3df0) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b8954; end: 1029b8ff7;  */

undefined * FUN_1029b8954(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined *)0x0;
  func_0x000107c5ed50();
  uVar24 = *(long *)((long)puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar24 + 0x40));
  lVar22 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8fdc);
    (*pcVar3)();
  }
  lVar23 = lVar4;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar23 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8fe0);
    (*pcVar3)();
  }
  lStack_a0 = param_1;
  func_0x000107c600f4(lVar22);
  func_0x000107c61170(lVar23);
  func_0x000107c5ed4c(auStack_80);
  if (lStack_68 == 0) {
    uStack_98 = 0;
    puStack_90 = (undefined1 *)0xe000000000000000;
    uVar9 = 0;
    puVar19 = (undefined1 *)0xe000000000000000;
  }
  else {
    uVar6 = 0;
    FUN_1029b9008(0,0x112d55598,&PTR_PTR_1126b25d0);
    puVar10 = PTR___sypN_11034f1a8;
    uStack_98 = 0;
    puStack_90 = (undefined1 *)0xe000000000000000;
    uVar9 = 0;
    puVar19 = (undefined1 *)0xe000000000000000;
    do {
      while( true ) {
        puStack_a8 = puVar19;
        puVar7 = &uStack_88;
        puVar18 = auStack_80;
        func_0x000107c6147c(puVar7,puVar18,puVar10 + 8,uVar6,6);
        uVar2 = uStack_88;
        if (((ulong)puVar7 & 1) != 0) break;
LAB_1029b8a84:
        func_0x000107c5ed4c(auStack_80);
        puVar19 = puStack_a8;
        if (lStack_68 == 0) goto LAB_1029b8ca8;
      }
      uVar8 = uStack_88;
      func_0x000107c4abb4();
      if ((int)uVar8 != 1) {
        func_0x000107c61170(uVar2);
        goto LAB_1029b8a84;
      }
      uVar8 = uVar2;
      uStack_b0 = uVar24;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8ff4);
        (*pcVar3)();
      }
      uVar24 = uVar8;
      func_0x000107c427c8();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar24 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8fec);
        (*pcVar3)();
      }
      uVar8 = uVar24;
      uStack_c0 = uVar9;
      puStack_b8 = puVar5;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      func_0x000107c61170(uVar24);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8ff8);
        (*pcVar3)();
      }
      uVar24 = uVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar8);
      func_0x000107c5fb04(lVar13);
      uVar9 = uVar24;
      puVar19 = puVar18;
      func_0x000107c5faf0(uVar24,puVar18,lVar13);
      func_0x00010006c090(uVar24);
      if (puVar19 != (undefined1 *)0x0) {
        uVar24 = uVar9 & 0xffffffffffff;
        if (((ulong)puVar19 & 0x2000000000000000) != 0) {
          uVar24 = (ulong)puVar19 >> 0x38 & 0xf;
        }
        puVar1 = puStack_90;
        if (uVar24 != 0) {
          puVar1 = puVar19;
          uStack_98 = uVar9;
          puVar19 = puStack_90;
        }
        puStack_90 = puVar1;
        func_0x000107c6142c(puVar19);
      }
      uVar24 = uVar2;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar24 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8fe4);
        (*pcVar3)();
      }
      uVar9 = uVar24;
      func_0x000107c427c8();
      func_0x000107c61180();
      func_0x000107c61170(uVar24);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8fe8);
        (*pcVar3)();
      }
      uVar24 = uVar9;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      if (uVar24 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029b8ff0);
        (*pcVar3)();
      }
      uVar9 = uVar24;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar24);
      func_0x000107c5fb04(lVar13);
      uVar8 = uVar9;
      puVar19 = puVar18;
      func_0x000107c5faf0(uVar9,puVar18,lVar13);
      func_0x000107c61170(uVar2);
      func_0x00010006c090(uVar9,puVar18);
      uVar24 = uStack_b0;
      puVar5 = puStack_b8;
      uVar9 = uStack_c0;
      if (puVar19 == (undefined1 *)0x0) goto LAB_1029b8a84;
      uVar2 = uVar8 & 0xffffffffffff;
      if (((ulong)puVar19 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)puVar19 >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        func_0x000107c6142c(puVar19);
        goto LAB_1029b8a84;
      }
      func_0x000107c6142c(puStack_a8);
      func_0x000107c5ed4c(auStack_80);
      uVar9 = uVar8;
    } while (lStack_68 != 0);
  }
LAB_1029b8ca8:
  uStack_b0 = uVar9;
  (**(code **)(uVar24 + 8))(lVar22);
  lVar4 = lStack_a0;
  lVar22 = lStack_a0;
  func_0x0001029b86cc(lStack_a0);
  puVar10 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  func_0x00010006c00c(lVar22,puVar5);
  lVar23 = lVar22;
  func_0x000107c5ee20(lVar22,puVar5);
  func_0x000107c45ae0();
  func_0x000107c61170(lVar23);
  lVar23 = (long)puVar5;
  func_0x00010006c090(lVar22);
  func_0x000107c4050c();
  func_0x000107c61180();
  puStack_b8 = puVar10;
  puStack_a8 = puVar19;
  if (lVar4 == 0) {
    lVar21 = 0;
    lVar23 = -0x4000000000000000;
  }
  else {
    lVar21 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c5fb04(lVar13);
  lVar11 = lVar21;
  lVar20 = lVar23;
  func_0x000107c5faf0(lVar21,lVar23,lVar13);
  func_0x00010006c090(lVar21,lVar23);
  lVar4 = 0;
  if (lVar20 != 0) {
    lVar4 = lVar11;
  }
  lVar13 = -0x2000000000000000;
  if (lVar20 != 0) {
    lVar13 = lVar20;
  }
  puVar12 = PTR_PTR_1126becd8;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar4,lVar13);
  func_0x000107c6142c(lVar13);
  lVar13 = 0;
  func_0x000107c5ee20(0,0xc000000000000000);
  func_0x000107c48a8c();
  func_0x000107c61170(lVar4);
  func_0x000107c61170();
  FUN_1029b8520();
  func_0x000107c613fc();
  *(undefined8 *)(lVar13 + 0x18) = 3;
  *(undefined8 *)(lVar13 + 0x10) = 1;
  *(undefined **)(lVar13 + 0x20) = puVar12;
  puVar14 = PTR_PTR_1126bece0;
  func_0x000107c610f8(PTR_PTR_1126bece0);
  func_0x000107c61174(puVar12);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = PTR___sSSN_11034da80;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  uVar6 = 0;
  FUN_1029b9008(0,0x112d51360,&PTR_PTR_1126becd8);
  lVar4 = lVar13;
  func_0x000107c5fc48(lVar13,uVar6);
  func_0x000107c61574(lVar13);
  puVar16 = puVar17;
  func_0x000107c5fc48(puVar17,puVar10);
  func_0x000107c5fc48(puVar17,puVar10);
  func_0x000107c461c0(puVar14);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar17);
  puVar17 = PTR_PTR_1126bece8;
  func_0x000107c610f8(PTR_PTR_1126bece8);
  func_0x000107c46524();
  puVar18 = puStack_90;
  uVar24 = uStack_98;
  func_0x000107c5fadc(uStack_98,puStack_90);
  func_0x000107c54580(puVar17);
  func_0x000107c61170(uVar24);
  puVar19 = puStack_a8;
  uVar24 = uStack_b0;
  func_0x000107c5fadc(uStack_b0,puStack_a8);
  func_0x000107c5457c(puVar17);
  func_0x000107c61170(uVar24);
  puVar15 = PTR_PTR_1126becf0;
  func_0x000107c610f8(PTR_PTR_1126becf0);
  puVar10 = puStack_b8;
  func_0x000107c48720();
  func_0x000107c6142c(puVar19);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar17);
  func_0x00010006c090(lVar22,puVar5);
  func_0x000107c6142c(puVar18);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar12);
  return puVar15;
}



/* Entry: 1029b8ff8; end: 1029b9007;  */

void FUN_1029b8ff8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  dVar3 = dVar4;
  func_0x000107c6071c();
  dVar3 = (dVar3 - dVar4) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b8304);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar3) {
    if (dVar3 < 9.223372036854776e+18) {
      func_0x00010607a854(uVar1,param_2 == 0,(long)dVar3);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_2);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b830c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b8308);
  (*pcVar2)();
}



/* Entry: 1029b9008; end: 1029b9047;  */

void FUN_1029b9008(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1029b9048; end: 1029b904f;  */

void FUN_1029b9048(long param_1,long param_2)

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



/* Entry: 1029b9050; end: 1029b92d3;  */

long FUN_1029b9050(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b90e4);
  (*pcVar1)();
}



/* Entry: 1029b92d4; end: 1029b937f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b92d4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  puVar2 = &UNK_11057bc98;
  func_0x000107c613fc(&UNK_11057bc98,0x18,7);
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648(param_1);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  func_0x000107c61574(param_1);
  lVar3 = 0;
  FUN_1029b9774();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed3f00);
  *puVar1 = 0x1029b97a4;
  puVar1[1] = puVar2;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b9380; end: 1029b9387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b9380(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  puVar2 = &UNK_11057bc98;
  func_0x000107c613fc(&UNK_11057bc98,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar3);
  func_0x000107c61644(puVar2 + 0x10,lVar3);
  func_0x000107c61574(lVar3);
  lVar4 = 0;
  FUN_1029b9774();
  lVar3 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed3f00);
  *puVar1 = 0x1029b97a4;
  puVar1[1] = puVar2;
  lStack_48 = lVar3;
  lStack_40 = lVar4;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b9388; end: 1029b940f;  */

undefined8 FUN_1029b9388(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1029b9410(param_1,param_2,param_3 & 1);
    func_0x000107c61574(param_4);
  }
  return param_1;
}



/* Entry: 1029b9410; end: 1029b9507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b9410(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ed4238);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x0001012db084(0);
    func_0x000107c5fc48(param_1,uVar2);
    lVar3 = lVar1;
    func_0x000107c40b80();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
      FUN_1029ba5f0(0);
      func_0x000107c610f8();
      func_0x000107c615f0(uVar2);
      FUN_1029bab34(lVar3,uVar2);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(uVar2);
    }
  }
  return;
}



/* Entry: 1029b9508; end: 1029b953f;  */

void FUN_1029b9508(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029b9540; end: 1029b955b;  */

void FUN_1029b9540(long param_1,long param_2)

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



/* Entry: 1029b955c; end: 1029b9577;  */

void FUN_1029b955c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1029b9578; end: 1029b95c3;  */

void FUN_1029b9578(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029b95c4; end: 1029b9647;  */

void FUN_1029b95c4(undefined8 param_1)

{
  if (lRam0000000112ed3e50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7042ec);
  return;
}



/* Entry: 1029b9648; end: 1029b966b;  */

void FUN_1029b9648(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001029b9160();
  *param_1 = param_2;
  return;
}



/* Entry: 1029b966c; end: 1029b96ff; -[_TtC46ComposerRankedPostableDestinationsServicesImplP33_B0336C8F2547B58C90ECFFA62D552EBE53ClosureComposerRankedPostableDestinationsStoreFactory createStoreWithPreSelectedItems:snapSource:isEligibleForSpotlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b966c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  func_0x0001012db084(0);
  func_0x000107c5fc54(param_3,uVar2);
  pcVar1 = *(code **)(param_1 + _DAT_112ed3f00);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  (*pcVar1)(param_3,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029b9700; end: 1029b975f; -[_TtC46ComposerRankedPostableDestinationsServicesImplP33_B0336C8F2547B58C90ECFFA62D552EBE53ClosureComposerRankedPostableDestinationsStoreFactory init] */

void FUN_1029b9700(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerRankedPostableDestinationsServicesImpl.ClosureComposerRankedPostableDestinationsStoreFactory"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b972c);
  (*pcVar1)();
}



/* Entry: 1029b9760; end: 1029b9773; -[_TtC46ComposerRankedPostableDestinationsServicesImplP33_B0336C8F2547B58C90ECFFA62D552EBE53ClosureComposerRankedPostableDestinationsStoreFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b9760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed3f00 + 8));
  return;
}



/* Entry: 1029b9774; end: 1029b9793;  */

void FUN_1029b9774(void)

{
  func_0x000107c61168(&PTR_PTR_1128795e0);
  return;
}



/* Entry: 1029b9794; end: 1029b97d3;  */

void FUN_1029b9794(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1029b97d4; end: 1029b9817;  */

void FUN_1029b97d4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1029b9818; end: 1029b9963;  */

/* WARNING: Possible PIC construction at 0x0001029b98b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b9944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b98b4) */
/* WARNING: Removing unreachable block (ram,0x0001029b9948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b9818(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _DAT_112ed3f48) == '\x01') &&
     (*(long *)(unaff_x20 + _DAT_112ed3f50) == 0)) {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ed3f40);
    func_0x000107c4307c(uVar1);
    func_0x000107c61180();
    func_0x0001000b637c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1029b9964; end: 1029b998b; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl prewarmSendToDestinations] */

void FUN_1029b9964(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029b9818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029b998c; end: 1029b9b2f;  */

/* WARNING: Possible PIC construction at 0x0001029b9a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b9ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b9a38) */
/* WARNING: Removing unreachable block (ram,0x0001029b9adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b998c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_1 == 0) {
LAB_1029b99c4:
    if (*(long *)(unaff_x20 + _DAT_112ed3f50) != 0) {
      func_0x000107c5cb24();
      goto code_r0x000107c61180;
    }
  }
  else {
    func_0x000107c49820();
    if (param_1 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b9b04);
      (*pcVar1)();
    }
    if (0x7fffffff < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b9b08);
      (*pcVar1)();
    }
    if ((int)param_1 == 0) goto LAB_1029b99c4;
    if ((int)param_1 != 1) {
      func_0x0001029b97ac(0);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b9b30);
      (*pcVar1)();
    }
  }
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000107c4307c(*(undefined8 *)(unaff_x20 + _DAT_112ed3f40));
code_r0x000107c61180:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1029b9b30; end: 1029b9b8f; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl fetchDestinationsWithSharingSource:] */

void FUN_1029b9b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029b998c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1029b9b90; end: 1029b9f9b;  */

void FUN_1029b9b90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar8 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puStack_80 = (undefined *)0x0;
    uVar3 = 0;
    func_0x000103eed1c4(0);
    func_0x000107c5fc50(uVar8,&puStack_80,uVar3);
    puVar6 = puStack_80;
    if (puStack_80 != (undefined *)0x0) {
      if ((ulong)puStack_80 >> 0x3e == 0) {
        puVar9 = *(undefined **)((undefined *)((ulong)puStack_80 & 0xffffffffffffff8) + 0x10);
        if (puVar9 != (undefined *)0x0) goto LAB_1029b9c18;
LAB_1029b9d0c:
        func_0x000107c6142c(puVar6);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar9 = puStack_80;
        if (-1 < (long)puStack_80) {
          puVar9 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff8);
        }
        func_0x000107c60480();
        if (puVar9 == (undefined *)0x0) goto LAB_1029b9d0c;
LAB_1029b9c18:
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1029ba618(0,(ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b9da8);
          (*pcVar2)();
        }
        puVar10 = (undefined *)0x0;
        do {
          puVar7 = puStack_80;
          if (((ulong)puVar6 & 0xc000000000000001) == 0) {
            puVar4 = *(undefined **)(puVar6 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar4 = puVar10;
            FUN_1029ba998(puVar10,puVar6);
          }
          puVar5 = puVar4;
          FUN_1029babf8();
          func_0x000107c61170(puVar4);
          uVar1 = *(ulong *)(puVar7 + 0x10);
          puStack_80 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            FUN_1029ba618(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          puVar7 = puStack_80;
          puVar10 = puVar10 + 1;
          *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_80 + uVar1 * 8 + 0x20) = puVar5;
        } while (puVar9 != puVar10);
        func_0x000107c6142c(puVar6);
      }
      puVar9 = puVar7;
      func_0x0001029b9da8(puVar7);
      func_0x000107c6142c(puVar7);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      puVar7 = puVar9;
      func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar9);
      func_0x000107c45788();
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar7);
      goto LAB_1029b9d80;
    }
    func_0x000107c61170(param_3);
  }
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1029b9d80:
  *param_1 = puVar6;
  return;
}



/* Entry: 1029b9f9c; end: 1029ba147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029b9f9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112ed3f80,&UNK_10dafcc50);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ed3f40);
  func_0x000107c5b97c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_11057bd70;
  func_0x000107c613fc(&UNK_11057bd70,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uVar1 = 0;
  FUN_1029bae3c(0,0x112ed3f88,&PTR_PTR_1126abc38);
  pcVar4 = FUN_1029ba610;
  func_0x00010068b194(FUN_1029ba610,puVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  puVar5 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar5;
}



/* Entry: 1029ba148; end: 1029ba17b; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl fetchSpotlightStory] */

void FUN_1029ba148(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029b9f9c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029ba17c; end: 1029ba25f; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl viewMoreThresholdWithSharingSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba17c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ed3f40);
  func_0x000107c61174();
  func_0x000107c5df00(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029ba260; end: 1029ba2d3; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl setCustomTTLWithCustomTTL:destinationId:storyType:] */

void FUN_1029ba260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  func_0x0001029ba1e8(param_3,param_4,param_2,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029ba2d4; end: 1029ba2e3; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl setAllowPostingToMapStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1671d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ed3f40),PTR_s_setAllowPostingToMapStories__112637690)
  ;
  return;
}



/* Entry: 1029ba2e4; end: 1029ba2f3; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl setAllowPostingToPublicStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1671f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ed3f40),
             PTR_s_setAllowPostingToPublicStories__112637698);
  return;
}



/* Entry: 1029ba2f4; end: 1029ba303; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl setShowBestOfSpectacles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2017f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ed3f40),PTR_s_setShowBestOfSpectacles__11265e020);
  return;
}



/* Entry: 1029ba304; end: 1029ba313; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl setOurStorySubtextObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d6cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ed3f40),PTR_s_setOurStorySubtextObservable__112653558
            );
  return;
}



/* Entry: 1029ba314; end: 1029ba323; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl setOurStorySubtextAndPlaceTagObservable:placeTagsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ed3f40),
             PTR_s_setOurStorySubtextAndPlaceTagObs_112653550);
  return;
}



/* Entry: 1029ba324; end: 1029ba407;  */

/* WARNING: Possible PIC construction at 0x0001029ba39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ba3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ba3a0) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3bc) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3dc) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3c4) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3e0) */

void FUN_1029ba324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126abc48;
  func_0x000107c610f8(PTR_PTR_1126abc48);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c458d4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029ba408; end: 1029ba557;  */

/* WARNING: Possible PIC construction at 0x0001029ba468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ba4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ba46c) */
/* WARNING: Removing unreachable block (ram,0x0001029ba49c) */
/* WARNING: Removing unreachable block (ram,0x0001029ba474) */
/* WARNING: Removing unreachable block (ram,0x0001029ba4a0) */
/* WARNING: Removing unreachable block (ram,0x0001029ba4b4) */

void FUN_1029ba408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b27a8;
  func_0x000107c61168();
  func_0x000107c45160();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c30e3c();
    func_0x000107c61180();
    func_0x000107c55258(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1029ba558; end: 1029ba5b7; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl init] */

void FUN_1029ba558(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerRankedPostableDestinationsServicesImpl.ComposerRankedPostableDestinationsStoreImpl"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ba584);
  (*pcVar1)();
}



/* Entry: 1029ba5b8; end: 1029ba5ef; -[_TtC46ComposerRankedPostableDestinationsServicesImpl43ComposerRankedPostableDestinationsStoreImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ba5b8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed3f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3f50));
  return;
}



/* Entry: 1029ba5f0; end: 1029ba60f;  */

void FUN_1029ba5f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128796a0);
  return;
}



/* Entry: 1029ba610; end: 1029ba617;  */

void FUN_1029ba610(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  func_0x0001000285a8(0x112ed3f90,&UNK_10dafcc58);
  if (lVar1 == 0) {
    func_0x000104886440();
  }
  else {
    FUN_1029babf8();
    uStack_50 = uVar2;
    func_0x000100854cb0(&uStack_50);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029ba618; end: 1029ba633;  */

void FUN_1029ba618(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1029ba634();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1029ba634; end: 1029ba767;  */

undefined * FUN_1029ba634(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ba768);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1029ba768();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1029bae3c(0,0x112ed3f88,&PTR_PTR_1126abc38);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1029ba768; end: 1029ba7d3;  */

void FUN_1029ba768(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1029bae3c(0,0x112ed3f88,&PTR_PTR_1126abc38);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ed3f98;
  plVar5 = (long *)&UNK_10dafcc60;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1029ba7d4; end: 1029ba997;  */

ulong FUN_1029ba7d4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ba8b8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ba8bc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126abc38;
    func_0x000107c61168(PTR_PTR_1126abc38);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126abc38;
    func_0x000107c61168(PTR_PTR_1126abc38);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1029bae3c(0,0x112ed3f88,&PTR_PTR_1126abc38);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ba998);
  (*pcVar2)();
}



/* Entry: 1029ba998; end: 1029bab33;  */

ulong FUN_1029ba998(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029baa68);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029baa6c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103eed1c4(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103eed1c4(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000023,0x800000010f0d4c90);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bab34);
  (*pcVar2)();
}



/* Entry: 1029bab34; end: 1029babf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029bab34(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3f50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed3f40) = param_1;
  func_0x000107c615f0(param_1);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0d4cc0);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(unaff_x20 + _DAT_112ed3f48) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029babf8; end: 1029bae1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029babf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  undefined1 auStack_90 [16];
  undefined *puStack_80;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  
  puVar4 = PTR_PTR_1126abc40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  iVar3 = 0x29bae1c;
  puStack_a0 = puVar4;
  puStack_80 = puVar4;
  puStack_60 = puVar4;
  func_0x000103eeb59c(FUN_1029bae1c,auStack_70,0x1029bae24,auStack_90,0x1029bae2c,auStack_b0);
  FUN_1029bae80();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11302d1d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302d1d0))[1];
  uVar6 = *(undefined8 *)(param_1 + _DAT_11302d1e8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11302d1e8))[1];
  puVar5 = PTR_PTR_1126abc38;
  func_0x000107c610f8(PTR_PTR_1126abc38);
  func_0x000107c61174(puVar4);
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c46d84(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  if (((undefined8 *)(param_1 + _DAT_11302d1f0))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11302d1f0);
    func_0x000107c5fadc(uVar7);
  }
  func_0x000107c59a8c(puVar5);
  func_0x000107c61170(uVar7);
  uVar6 = 0;
  if (*(long *)(param_1 + _DAT_11302d1f8) != 0) {
    func_0x0001029bb1a4();
    uVar6 = uVar7;
  }
  func_0x000107c53d84(puVar5);
  func_0x000107c61170(uVar6);
  if (iVar3 == 3) {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52bb8(puVar5);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 1029bae1c; end: 1029bae3b;  */

/* WARNING: Possible PIC construction at 0x0001029ba39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ba3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ba3a0) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3bc) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3dc) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3c4) */
/* WARNING: Removing unreachable block (ram,0x0001029ba3e0) */

void FUN_1029bae1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126abc48;
  func_0x000107c610f8(PTR_PTR_1126abc48);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c458d4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029bae3c; end: 1029bae7b;  */

void FUN_1029bae3c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1029bae7c; end: 1029bae7f;  */

void FUN_1029bae7c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar9 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puStack_80 = (undefined *)0x0;
    uVar4 = 0;
    func_0x000103eed1c4(0);
    func_0x000107c5fc50(uVar9,&puStack_80,uVar4);
    puVar7 = puStack_80;
    if (puStack_80 != (undefined *)0x0) {
      if ((ulong)puStack_80 >> 0x3e == 0) {
        puVar10 = *(undefined **)((undefined *)((ulong)puStack_80 & 0xffffffffffffff8) + 0x10);
        if (puVar10 != (undefined *)0x0) goto LAB_1029b9c18;
LAB_1029b9d0c:
        func_0x000107c6142c(puVar7);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar10 = puStack_80;
        if (-1 < (long)puStack_80) {
          puVar10 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff8);
        }
        func_0x000107c60480();
        if (puVar10 == (undefined *)0x0) goto LAB_1029b9d0c;
LAB_1029b9c18:
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1029ba618(0,(ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b9da8);
          (*pcVar2)();
        }
        puVar11 = (undefined *)0x0;
        do {
          puVar8 = puStack_80;
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            puVar5 = *(undefined **)(puVar7 + (long)puVar11 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar11;
            FUN_1029ba998(puVar11,puVar7);
          }
          puVar6 = puVar5;
          FUN_1029babf8();
          func_0x000107c61170(puVar5);
          uVar1 = *(ulong *)(puVar8 + 0x10);
          puStack_80 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            FUN_1029ba618(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
          }
          puVar8 = puStack_80;
          puVar11 = puVar11 + 1;
          *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_80 + uVar1 * 8 + 0x20) = puVar6;
        } while (puVar10 != puVar11);
        func_0x000107c6142c(puVar7);
      }
      puVar10 = puVar8;
      func_0x0001029b9da8(puVar8);
      func_0x000107c6142c(puVar8);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      puVar8 = puVar10;
      func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar10);
      func_0x000107c45788();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar8);
      goto LAB_1029b9d80;
    }
    func_0x000107c61170(lVar3);
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1029b9d80:
  *param_1 = puVar7;
  return;
}



/* Entry: 1029bae80; end: 1029baf8f;  */

undefined4 FUN_1029bae80(void)

{
  undefined1 auStack_1a0 [16];
  undefined4 *puStack_190;
  undefined1 auStack_180 [16];
  undefined4 *puStack_170;
  undefined1 auStack_160 [16];
  undefined4 *puStack_150;
  undefined1 auStack_140 [16];
  undefined4 *puStack_130;
  undefined1 auStack_120 [16];
  undefined4 *puStack_110;
  undefined1 auStack_100 [16];
  undefined4 *puStack_f0;
  undefined1 auStack_e0 [16];
  undefined4 *puStack_d0;
  undefined1 auStack_c0 [16];
  undefined4 *puStack_b0;
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  undefined1 auStack_60 [16];
  undefined4 *puStack_50;
  undefined1 auStack_40 [16];
  undefined4 *puStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  puStack_190 = &uStack_24;
  puStack_170 = puStack_190;
  puStack_150 = puStack_190;
  puStack_130 = puStack_190;
  puStack_110 = puStack_190;
  puStack_f0 = puStack_190;
  puStack_d0 = puStack_190;
  puStack_b0 = puStack_190;
  puStack_90 = puStack_190;
  puStack_70 = puStack_190;
  puStack_50 = puStack_190;
  puStack_30 = puStack_190;
  func_0x000103eed49c(FUN_1029baf90,auStack_40,0x1029baf9c,auStack_60,0x1029bafac,auStack_80,
                      0x1029bafbc,auStack_a0,0x1029bafcc,auStack_c0,0x1029bafdc,auStack_e0,
                      0x1029bafec,auStack_100,0x1029baffc,auStack_120,0x1029bb00c,auStack_140,
                      0x1029bb01c,auStack_160,0x1029bb02c,auStack_180,0x1029bb03c,auStack_1a0);
  return uStack_24;
}



/* Entry: 1029baf90; end: 1029bb04b;  */

void FUN_1029baf90(void)

{
  long unaff_x20;
  
  **(undefined4 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1029bb04c; end: 1029bb4a3;  */

void FUN_1029bb04c(undefined4 param_1)

{
  code *pcVar1;
  
  switch(param_1) {
  case 0:
    func_0x000103eed7e8(0);
    func_0x000103eed340();
    break;
  case 1:
    func_0x000103eed7e8(0);
    func_0x000103eed350();
    break;
  case 2:
    func_0x000103eed7e8(0);
    func_0x000103eed360();
    break;
  case 3:
    func_0x000103eed7e8(0);
    func_0x000103eed370();
    break;
  case 4:
    func_0x000103eed7e8(0);
    func_0x000103eed390();
    break;
  case 5:
    func_0x000103eed7e8(0);
    func_0x000103eed3a0();
    break;
  case 6:
    func_0x000103eed7e8(0);
    func_0x000103eed3b0();
    break;
  case 7:
    func_0x000103eed7e8(0);
    func_0x000103eed3c0();
    break;
  case 8:
    func_0x000103eed7e8(0);
    func_0x000103eed3d0();
    break;
  case 9:
    func_0x000103eed7e8(0);
    func_0x000103eed3f0();
    break;
  case 10:
    func_0x000103eed7e8(0);
    func_0x000103eed380();
    break;
  case 0xb:
    func_0x000103eed7e8(0);
    func_0x000103eed3e0();
    break;
  default:
    func_0x0001029b97c0(0);
    func_0x000107c60614();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bb1a4);
    (*pcVar1)();
  }
  return;
}



/* Entry: 1029bb4a4; end: 1029bb4b3; -[ComposerRankedPostableDestinationsServices storeFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029bb4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ed3fa0));
  return;
}



/* Entry: 1029bb4b4; end: 1029bb54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029bb4b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3fa0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029bb54c; end: 1029bb5ab; -[ComposerRankedPostableDestinationsServices init] */

void FUN_1029bb54c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerRankedPostableDestinationsServices.ComposerRankedPostableDestinationsServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bb578);
  (*pcVar1)();
}



/* Entry: 1029bb5ac; end: 1029bb5bb; -[ComposerRankedPostableDestinationsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029bb5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3fa0));
  return;
}



/* Entry: 1029bb5bc; end: 1029bb65b;  */

void FUN_1029bb5bc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c30a94();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000108f3e0f0();
    if (param_2 - 1U < 3) {
      uVar4 = *(undefined8 *)(&UNK_10dafcde0 + (param_2 - 1U) * 8);
    }
    else {
      uVar4 = 0x29;
    }
    func_0x000107c5af88(puVar1,param_3,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1029bb65c; end: 1029bb6cf;  */

void FUN_1029bb65c(undefined1 *param_1,undefined1 param_2)

{
  func_0x000108f421b0();
  *param_1 = param_2;
  return;
}



/* Entry: 1029bb6d0; end: 1029bb877;  */

void FUN_1029bb6d0(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c49ec4();
    uVar2 = (undefined1)lVar1;
    func_0x000107c615e8(param_2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1029bb878; end: 1029bb917;  */

bool FUN_1029bb878(long param_1)

{
  undefined *puVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
    func_0x000107c61180();
    func_0x000107c58e3c(param_1);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
  }
  return param_1 == 0;
}



/* Entry: 1029bb918; end: 1029bc0c3;  */

void FUN_1029bb918(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cStack_81;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar7 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    puStack_80 = (undefined *)0x0;
    uVar3 = 0;
    FUN_1029bd7fc(0,0x112e3c238,&PTR_PTR_1126c51c8);
    func_0x000107c5fc50(uVar7,&puStack_80,uVar3);
    puVar8 = puStack_80;
    if (puStack_80 != (undefined *)0x0) {
      puVar4 = puStack_80;
      func_0x0001029bbbe0(puStack_80,param_4);
      func_0x000107c6142c(puVar8);
      func_0x0001000d224c(&cStack_81);
      if (cStack_81 == '\x01') {
        if ((ulong)puVar4 >> 0x3e != 0) {
          puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar4) {
            puVar8 = puVar4;
          }
          func_0x000107c60480(puVar8);
        }
        uVar7 = *(undefined8 *)(param_3 + 0x68);
        func_0x000107c6157c(uVar7);
        func_0x0001000d224c(&puStack_80);
        func_0x000107c61574(uVar7);
      }
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar8 = *(undefined **)((undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        if (puVar8 == (undefined *)0x0) goto LAB_1029bbb30;
LAB_1029bba48:
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001029bd1bc(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bbbcc);
          (*pcVar2)();
        }
        puVar10 = (undefined *)0x0;
        do {
          puVar9 = puStack_80;
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            puVar5 = *(undefined **)(puVar4 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar10;
            func_0x000101ef05a8(puVar10,puVar4);
          }
          puVar6 = puVar5;
          func_0x0001029bbda8();
          func_0x000107c61170(puVar5);
          uVar1 = *(ulong *)(puVar9 + 0x10);
          puStack_80 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
            func_0x0001029bd1bc(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
          }
          puVar9 = puStack_80;
          puVar10 = puVar10 + 1;
          *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_80 + uVar1 * 8 + 0x20) = puVar6;
        } while (puVar8 != puVar10);
        func_0x000107c6142c(puVar4);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar4) {
          puVar8 = puVar4;
        }
        func_0x000107c60480();
        if (puVar8 != (undefined *)0x0) goto LAB_1029bba48;
LAB_1029bbb30:
        func_0x000107c6142c(puVar4);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      puVar4 = puVar9;
      FUN_1029bc0c4(puVar9);
      func_0x000107c6142c(puVar9);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      puVar10 = puVar4;
      func_0x000107c5fc48(puVar4,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar4);
      func_0x000107c45788();
      func_0x000107c61574(param_3);
      func_0x000107c61170(puVar10);
      goto LAB_1029bbba4;
    }
    func_0x000107c61574(param_3);
  }
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1029bbba4:
  *param_1 = puVar8;
  return;
}



/* Entry: 1029bc0c4; end: 1029bc287;  */

undefined * FUN_1029bc0c4(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bc288);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000103eed1c4(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1029ba998(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x000103eed1c4(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1029bc288; end: 1029bc3a3; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl fetchDestinationsWithSharingSource:] */

void FUN_1029bc288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c(param_1);
  func_0x000107c430c0(uVar5);
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x0001000b637c();
  func_0x000107c61170(uVar5);
  puVar2 = &UNK_11057bf28;
  func_0x000107c613fc(&UNK_11057bf28,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_11057bfc8;
  func_0x000107c613fc(&UNK_11057bfc8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uVar4 = 0;
  FUN_1029bd7fc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = 0x1029bd7f4;
  func_0x0001000bfde0(0x1029bd7f4,puVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1029bc3a4; end: 1029bc4b3;  */

/* WARNING: Possible PIC construction at 0x0001029bc3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029bc3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029bc3c8) */
/* WARNING: Removing unreachable block (ram,0x0001029bc490) */
/* WARNING: Removing unreachable block (ram,0x0001029bc3cc) */
/* WARNING: Removing unreachable block (ram,0x0001029bc3dc) */

void FUN_1029bc3a4(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1029bc4b4; end: 1029bc9db;  */

void FUN_1029bc4b4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  byte bStack_91;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  uVar14 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puStack_c8 = (undefined *)0x0;
    uVar5 = 0;
    FUN_1029bd7fc(0,0x112e3c238,&PTR_PTR_1126c51c8);
    func_0x000107c5fc50(uVar14,&puStack_c8,uVar5);
    puVar16 = puStack_c8;
    if (puStack_c8 == (undefined *)0x0) {
      func_0x000107c61574(param_2);
    }
    else {
      puVar13 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
      if ((ulong)puStack_c8 >> 0x3e == 0) {
        puVar17 = *(undefined **)(puVar13 + 0x10);
      }
      else {
        puVar17 = puStack_c8;
        if (-1 < (long)puStack_c8) {
          puVar17 = puVar13;
        }
        func_0x000107c60480();
      }
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar17 != (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar16 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar13 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc778);
                (*pcVar4)();
              }
              puVar6 = *(undefined **)(puVar16 + (long)puVar19 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar6 = puVar19;
              func_0x000101ef05a8(puVar19,puVar16);
            }
            puVar1 = puVar19 + 1;
            if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc774);
              (*pcVar4)();
            }
            bStack_91 = 0;
            puVar7 = &UNK_11057bf50;
            func_0x000107c613fc(&UNK_11057bf50,0x18,7);
            *(byte **)(puVar7 + 0x10) = &bStack_91;
            puVar8 = &UNK_11057bf78;
            func_0x000107c613fc(&UNK_11057bf78,0x20,7);
            *(code **)(puVar8 + 0x10) = FUN_1029bd72c;
            *(undefined **)(puVar8 + 0x18) = puVar7;
            pcStack_a8 = FUN_1029bd780;
            puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c0 = 0x42000000;
            pcStack_b8 = FUN_1029bcf24;
            puStack_b0 = &UNK_11057bf90;
            ppuVar9 = &puStack_c8;
            puStack_a0 = puVar8;
            func_0x000107c60bc4(ppuVar9);
            puVar2 = puStack_a0;
            func_0x000107c61174();
            func_0x000107c6157c(puVar8);
            func_0x000107c61574(puVar2);
            func_0x000107c4c6a8(puVar6);
            func_0x000107c60bd0(ppuVar9);
            bVar3 = bStack_91;
            func_0x000107c61574(puVar7);
            puVar7 = puVar8;
            func_0x000107c61544(puVar8,"",0x70,0xb,0x60,1);
            func_0x000107c61170(puVar6);
            func_0x000107c61574(puVar8);
            if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc77c);
              (*pcVar4)();
            }
            if ((bVar3 & 1) != 0) break;
            func_0x000107c61170(puVar6);
            puVar19 = puVar19 + 1;
            if (puVar1 == puVar17) goto LAB_1029bc798;
          }
          puVar19 = puVar15;
          func_0x000107c61558();
          puStack_90 = puVar15;
          if (((ulong)puVar19 & 1) == 0) {
            FUN_1029bd1a0(0,*(long *)(puVar15 + 0x10) + 1,1);
          }
          uVar18 = *(ulong *)(puStack_90 + 0x10);
          if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar18) {
            FUN_1029bd1a0(1 < *(ulong *)(puStack_90 + 0x18),uVar18 + 1,1);
          }
          *(ulong *)(puStack_90 + 0x10) = uVar18 + 1;
          *(undefined **)(puStack_90 + uVar18 * 8 + 0x20) = puVar6;
          puVar19 = puVar1;
          puVar15 = puStack_90;
        } while (puVar1 != puVar17);
      }
LAB_1029bc798:
      func_0x000107c6142c(puVar16);
      if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
        puVar16 = puVar15;
        func_0x000107c60480();
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar16 = *(undefined **)(puVar15 + 0x10);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
      if (puVar16 != (undefined *)0x0) {
        uVar18 = 0;
        do {
          if (((ulong)puVar15 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar15 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc8c8);
              (*pcVar4)();
            }
            uVar10 = *(ulong *)(puVar15 + uVar18 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar10 = uVar18;
            func_0x000101ef05a8(uVar18,puVar15);
          }
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc8c4);
            (*pcVar4)();
          }
          puVar19 = (undefined *)(uVar18 + 1);
          uVar11 = uVar10;
          func_0x0001029bbda8();
          func_0x000107c61170(uVar10);
          puVar17 = puVar13;
          func_0x000107c61550();
          if ((((int)puVar17 == 0) || ((long)puVar13 < 0)) ||
             (puVar17 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar13 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar13) {
                puVar6 = puVar13;
              }
              func_0x000107c60480(puVar6);
            }
            puVar17 = (undefined *)0x0;
            FUN_1029bd50c(0,puVar6 + 1,1,puVar13);
          }
          uVar12 = (ulong)puVar17 & 0xffffffffffffff8;
          uVar10 = *(ulong *)(uVar12 + 0x10);
          puVar13 = puVar17;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar10) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_1029bd50c(puVar13,uVar10 + 1,1,puVar17);
            uVar12 = (ulong)puVar13 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar10 + 1;
          *(ulong *)(uVar12 + uVar10 * 8 + 0x20) = uVar11;
          uVar18 = uVar18 + 1;
        } while (puVar19 != puVar16);
      }
      func_0x000107c61574(puVar15);
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar16 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar16 = puVar13;
        }
        func_0x000107c60480();
      }
      if (puVar16 != (undefined *)0x0) {
        if (((ulong)puVar13 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc9dc);
            (*pcVar4)();
          }
          puVar16 = *(undefined **)(puVar13 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar16 = (undefined *)0x0;
          FUN_1029ba998(0,puVar13);
        }
        func_0x000107c6142c(puVar13);
        func_0x0001000285a8(0x112ed3f80,&UNK_10dafcc50);
        puStack_c8 = puVar16;
        func_0x000100854cb0(&puStack_c8);
        func_0x000107c61170(puVar16);
        func_0x000107c61574(param_2);
        return;
      }
      func_0x000107c61574(param_2);
      func_0x000107c6142c(puVar13);
    }
  }
  func_0x0001000285a8(0x112ed3f80,&UNK_10dafcc50);
  func_0x000104886440();
  return;
}



/* Entry: 1029bc9dc; end: 1029bca0f; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl spotlightStory] */

void FUN_1029bc9dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1029bc3a4();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029bca10; end: 1029bcb73; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl viewMoreThreshold] */

void FUN_1029bca10(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5df04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bca5c);
  (*pcVar1)();
}



/* Entry: 1029bcb74; end: 1029bcb7b;  */

void FUN_1029bcb74(void)

{
  return;
}



/* Entry: 1029bcb7c; end: 1029bcbff; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl setCustomTTL:for:type:] */

void FUN_1029bcb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  func_0x0001029bca5c(param_3,param_4,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029bcc00; end: 1029bcc07; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl setAllowPostingToMapStories:] */

void FUN_1029bcc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1671d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setAllowPostingToMapStories__112637690);
  return;
}



/* Entry: 1029bcc08; end: 1029bcc0f; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl setAllowPostingToPublicStories:] */

void FUN_1029bcc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1671f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setAllowPostingToPublicStories__112637698);
  return;
}



/* Entry: 1029bcc10; end: 1029bcc17; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl setShowBestOfSpectacles:] */

void FUN_1029bcc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2017f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setShowBestOfSpectacles__11265e020);
  return;
}



/* Entry: 1029bcc18; end: 1029bcc1f; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl setOurStorySubtextObservable:] */

void FUN_1029bcc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d6cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOurStorySubtextObservable__112653558);
  return;
}



/* Entry: 1029bcc20; end: 1029bcc27; -[_TtC27PostableContentDestinations38PostableContentDestinationsServiceImpl setOurStorySubtextAndPlaceTagObservable:placeTagsTracker:] */

void FUN_1029bcc20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOurStorySubtextAndPlaceTagObs_112653550);
  return;
}



/* Entry: 1029bcc28; end: 1029bcd07;  */

undefined1  [16] FUN_1029bcc28(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 < 2) {
    if (lStack_38 == 0) {
      func_0x000108f5836c();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bccc0);
        (*pcVar1)();
      }
      goto LAB_1029bccd0;
    }
    if (lStack_38 == 1) {
      func_0x000108f58384();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bcc74);
        (*pcVar1)();
      }
      goto LAB_1029bccd0;
    }
  }
  else {
    if (lStack_38 == 2) {
      func_0x000108f5839c();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bcd08);
        (*pcVar1)();
      }
      goto LAB_1029bccd0;
    }
    if (lStack_38 == 3) {
      func_0x000108f583b4();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bcc98);
        (*pcVar1)();
      }
      goto LAB_1029bccd0;
    }
  }
  func_0x000108f5836c();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bccac);
    (*pcVar1)();
  }
LAB_1029bccd0:
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 1029bcd08; end: 1029bcdd3;  */

void FUN_1029bcd08(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1029bcdd4; end: 1029bce2f;  */

void FUN_1029bcdd4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11057bee8;
  if (lRam0000000112ed40e0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ed40e0 = param_1;
  }
  return;
}



/* Entry: 1029bce30; end: 1029bce77;  */

void FUN_1029bce30(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c53d74(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029bce78; end: 1029bce7b;  */

void FUN_1029bce78(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c53d78(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029bce7c; end: 1029bcec3;  */

void FUN_1029bce7c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c53d78(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029bcec4; end: 1029bcecb;  */

void FUN_1029bcec4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  byte bStack_91;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  uVar15 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    puStack_c8 = (undefined *)0x0;
    uVar6 = 0;
    FUN_1029bd7fc(0,0x112e3c238,&PTR_PTR_1126c51c8);
    func_0x000107c5fc50(uVar15,&puStack_c8,uVar6);
    puVar17 = puStack_c8;
    if (puStack_c8 == (undefined *)0x0) {
      func_0x000107c61574(lVar5);
    }
    else {
      puVar14 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
      if ((ulong)puStack_c8 >> 0x3e == 0) {
        puVar18 = *(undefined **)(puVar14 + 0x10);
      }
      else {
        puVar18 = puStack_c8;
        if (-1 < (long)puStack_c8) {
          puVar18 = puVar14;
        }
        func_0x000107c60480();
      }
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar18 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar17 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar14 + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc778);
                (*pcVar4)();
              }
              puVar7 = *(undefined **)(puVar17 + (long)puVar20 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar7 = puVar20;
              func_0x000101ef05a8(puVar20,puVar17);
            }
            puVar1 = puVar20 + 1;
            if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc774);
              (*pcVar4)();
            }
            bStack_91 = 0;
            puVar8 = &UNK_11057bf50;
            func_0x000107c613fc(&UNK_11057bf50,0x18,7);
            *(byte **)(puVar8 + 0x10) = &bStack_91;
            puVar9 = &UNK_11057bf78;
            func_0x000107c613fc(&UNK_11057bf78,0x20,7);
            *(code **)(puVar9 + 0x10) = FUN_1029bd72c;
            *(undefined **)(puVar9 + 0x18) = puVar8;
            pcStack_a8 = FUN_1029bd780;
            puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c0 = 0x42000000;
            pcStack_b8 = FUN_1029bcf24;
            puStack_b0 = &UNK_11057bf90;
            ppuVar10 = &puStack_c8;
            puStack_a0 = puVar9;
            func_0x000107c60bc4(ppuVar10);
            puVar2 = puStack_a0;
            func_0x000107c61174();
            func_0x000107c6157c(puVar9);
            func_0x000107c61574(puVar2);
            func_0x000107c4c6a8(puVar7);
            func_0x000107c60bd0(ppuVar10);
            bVar3 = bStack_91;
            func_0x000107c61574(puVar8);
            puVar8 = puVar9;
            func_0x000107c61544(puVar9,"",0x70,0xb,0x60,1);
            func_0x000107c61170(puVar7);
            func_0x000107c61574(puVar9);
            if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc77c);
              (*pcVar4)();
            }
            if ((bVar3 & 1) != 0) break;
            func_0x000107c61170(puVar7);
            puVar20 = puVar20 + 1;
            if (puVar1 == puVar18) goto LAB_1029bc798;
          }
          puVar20 = puVar16;
          func_0x000107c61558();
          puStack_90 = puVar16;
          if (((ulong)puVar20 & 1) == 0) {
            FUN_1029bd1a0(0,*(long *)(puVar16 + 0x10) + 1,1);
          }
          uVar19 = *(ulong *)(puStack_90 + 0x10);
          if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar19) {
            FUN_1029bd1a0(1 < *(ulong *)(puStack_90 + 0x18),uVar19 + 1,1);
          }
          *(ulong *)(puStack_90 + 0x10) = uVar19 + 1;
          *(undefined **)(puStack_90 + uVar19 * 8 + 0x20) = puVar7;
          puVar20 = puVar1;
          puVar16 = puStack_90;
        } while (puVar1 != puVar18);
      }
LAB_1029bc798:
      func_0x000107c6142c(puVar17);
      if (((long)puVar16 < 0) || (((ulong)puVar16 >> 0x3e & 1) != 0)) {
        puVar17 = puVar16;
        func_0x000107c60480();
        puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar17 = *(undefined **)(puVar16 + 0x10);
        puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
      if (puVar17 != (undefined *)0x0) {
        uVar19 = 0;
        do {
          if (((ulong)puVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar16 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc8c8);
              (*pcVar4)();
            }
            uVar11 = *(ulong *)(puVar16 + uVar19 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar11 = uVar19;
            func_0x000101ef05a8(uVar19,puVar16);
          }
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc8c4);
            (*pcVar4)();
          }
          puVar20 = (undefined *)(uVar19 + 1);
          uVar12 = uVar11;
          func_0x0001029bbda8();
          func_0x000107c61170(uVar11);
          puVar18 = puVar14;
          func_0x000107c61550();
          if ((((int)puVar18 == 0) || ((long)puVar14 < 0)) ||
             (puVar18 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar14 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar14) {
                puVar7 = puVar14;
              }
              func_0x000107c60480(puVar7);
            }
            puVar18 = (undefined *)0x0;
            FUN_1029bd50c(0,puVar7 + 1,1,puVar14);
          }
          uVar13 = (ulong)puVar18 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar13 + 0x10);
          puVar14 = puVar18;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_1029bd50c(puVar14,uVar11 + 1,1,puVar18);
            uVar13 = (ulong)puVar14 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
          *(ulong *)(uVar13 + uVar11 * 8 + 0x20) = uVar12;
          uVar19 = uVar19 + 1;
        } while (puVar20 != puVar17);
      }
      func_0x000107c61574(puVar16);
      if ((ulong)puVar14 >> 0x3e == 0) {
        puVar17 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar17 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar14) {
          puVar17 = puVar14;
        }
        func_0x000107c60480();
      }
      if (puVar17 != (undefined *)0x0) {
        if (((ulong)puVar14 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1029bc9dc);
            (*pcVar4)();
          }
          puVar17 = *(undefined **)(puVar14 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar17 = (undefined *)0x0;
          FUN_1029ba998(0,puVar14);
        }
        func_0x000107c6142c(puVar14);
        func_0x0001000285a8(0x112ed3f80,&UNK_10dafcc50);
        puStack_c8 = puVar17;
        func_0x000100854cb0(&puStack_c8);
        func_0x000107c61170(puVar17);
        func_0x000107c61574(lVar5);
        return;
      }
      func_0x000107c61574(lVar5);
      func_0x000107c6142c(puVar14);
    }
  }
  func_0x0001000285a8(0x112ed3f80,&UNK_10dafcc50);
  func_0x000104886440();
  return;
}



/* Entry: 1029bcecc; end: 1029bcf23;  */

void FUN_1029bcecc(void)

{
  code *in_stack_00000050;
  
  (*in_stack_00000050)();
  return;
}



/* Entry: 1029bcf24; end: 1029bd19f;  */

void FUN_1029bcf24(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9,undefined4 param_10,
                  undefined4 param_11,undefined8 param_12,undefined8 param_13,undefined1 param_14)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long lVar11;
  long alStack_120 [6];
  undefined1 auStack_f0 [8];
  undefined8 auStack_e8 [2];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar5 = 0x112d36580;
  puVar9 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  lVar11 = (long)&uStack_d0 + lVar5;
  pcStack_80 = *(code **)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5faec();
  uStack_90 = param_2;
  puStack_78 = puVar9;
  if (param_3 == 0) {
    lStack_98 = 0;
    puStack_70 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    lStack_98 = param_3;
    puStack_70 = puVar9;
  }
  if (param_4 == 0) {
    lVar6 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar11,param_4);
    lVar6 = 0;
    func_0x000107c5ede0();
  }
  uVar10 = (ulong)(param_4 == 0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,uVar10,1);
  func_0x000107c5faec();
  uStack_b0 = param_6;
  uStack_a0 = uVar10;
  if (param_7 == 0) {
    lStack_c0 = 0;
    uStack_a8 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_c0 = param_7;
    uStack_a8 = uVar10;
  }
  lStack_68 = lVar11;
  if (param_8 == 0) {
    param_8 = 0;
    uStack_b8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_b8 = uVar10;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar10 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar7 = param_5;
  func_0x000107c61174();
  uVar8 = param_12;
  uStack_c8 = uVar7;
  func_0x000107c61174();
  uVar7 = param_13;
  uStack_d0 = uVar8;
  func_0x000107c61174(param_13);
  auStack_d8[lVar5] = param_14;
  *(undefined8 *)((long)auStack_e8 + lVar5) = param_12;
  *(undefined8 *)((long)auStack_e8 + lVar5 + 8) = param_13;
  auStack_f0[lVar5 + 1] = param_10._1_1_;
  auStack_f0[lVar5] = (undefined1)param_10;
  *(long *)((long)alStack_120 + lVar5 + 0x20) = param_9;
  *(ulong *)((long)alStack_120 + lVar5 + 0x28) = uVar10;
  uVar1 = uStack_b8;
  *(long *)((long)alStack_120 + lVar5 + 0x10) = param_8;
  *(ulong *)((long)alStack_120 + lVar5 + 0x18) = uVar1;
  uVar2 = uStack_a8;
  *(ulong *)((long)alStack_120 + lVar5 + 8) = uStack_a8;
  *(long *)((long)alStack_120 + lVar5) = lStack_c0;
  lVar5 = lStack_68;
  puVar4 = puStack_70;
  puVar9 = puStack_78;
  uVar3 = uStack_a0;
  (*pcStack_80)(uStack_90,puStack_78,lStack_98,puStack_70,lStack_68,param_5,uStack_b0,uStack_a0);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(puVar4);
  func_0x0001000293e4(lVar5);
  return;
}



/* Entry: 1029bd1a0; end: 1029bd1d7;  */

void FUN_1029bd1a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1029bd1d8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1029bd1d8; end: 1029bd42f;  */

undefined * FUN_1029bd1d8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bd30c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000101eefff0();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1029bd7fc(0,0x112e3c238,&PTR_PTR_1126c51c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}


