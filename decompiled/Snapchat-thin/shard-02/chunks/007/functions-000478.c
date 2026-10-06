/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020b1ee4; end: 1020b1f23;  */

void FUN_1020b1ee4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020b1f24; end: 1020b1f2b;  */

void FUN_1020b1f24(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1020b1f2c; end: 1020b1f93;  */

undefined8 * FUN_1020b1f2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1020b1f94; end: 1020b209b;  */

int FUN_1020b1f94(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 1020b209c; end: 1020b2173;  */

undefined * FUN_1020b209c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1,param_2,2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4036800000000000);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1020b2174; end: 1020b25a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020b2174(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112e56510;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e56510);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c5a100(puVar3,param_2,0x16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174();
    func_0x000107c5af88(puVar2,param_2,0xc6);
    func_0x000107c61180();
    func_0x000107c59c78(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c55f80(puVar3,param_2,4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1020b25a8; end: 1020b274f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1020b25a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar3 = &DAT_112e56508;
  *(undefined8 *)(unaff_x20 + _DAT_112e56508) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56510) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56518) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56520) = 0;
  puVar5 = &DAT_112e56528;
  *(undefined8 *)(unaff_x20 + _DAT_112e56528) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56530) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x0001020b2460(&DAT_112e56508,FUN_1020b209c);
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  puVar2 = puVar1;
  func_0x000107c40510(puVar1);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x0001020b230c();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  puVar2 = puVar1;
  func_0x000107c40510(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x0001020b2460(&DAT_112e56528,0x1020b24bc);
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  FUN_1020b2750();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1020b2750; end: 1020b2e4b;  */

/* WARNING: Possible PIC construction at 0x0001020b27e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b280c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b28a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b28ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b295c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b29c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b29fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b2de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b2dc4) */
/* WARNING: Removing unreachable block (ram,0x0001020b2d78) */
/* WARNING: Removing unreachable block (ram,0x0001020b2d54) */
/* WARNING: Removing unreachable block (ram,0x0001020b2d08) */
/* WARNING: Removing unreachable block (ram,0x0001020b2ce8) */
/* WARNING: Removing unreachable block (ram,0x0001020b2c9c) */
/* WARNING: Removing unreachable block (ram,0x0001020b2c78) */
/* WARNING: Removing unreachable block (ram,0x0001020b2c28) */
/* WARNING: Removing unreachable block (ram,0x0001020b2c04) */
/* WARNING: Removing unreachable block (ram,0x0001020b2bb0) */
/* WARNING: Removing unreachable block (ram,0x0001020b2b8c) */
/* WARNING: Removing unreachable block (ram,0x0001020b2b40) */
/* WARNING: Removing unreachable block (ram,0x0001020b2b1c) */
/* WARNING: Removing unreachable block (ram,0x0001020b2ad0) */
/* WARNING: Removing unreachable block (ram,0x0001020b2ab0) */
/* WARNING: Removing unreachable block (ram,0x0001020b2a5c) */
/* WARNING: Removing unreachable block (ram,0x0001020b2a24) */
/* WARNING: Removing unreachable block (ram,0x0001020b2a00) */
/* WARNING: Removing unreachable block (ram,0x0001020b29cc) */
/* WARNING: Removing unreachable block (ram,0x0001020b2984) */
/* WARNING: Removing unreachable block (ram,0x0001020b2960) */
/* WARNING: Removing unreachable block (ram,0x0001020b2914) */
/* WARNING: Removing unreachable block (ram,0x0001020b28f0) */
/* WARNING: Removing unreachable block (ram,0x0001020b28a4) */
/* WARNING: Removing unreachable block (ram,0x0001020b2884) */
/* WARNING: Removing unreachable block (ram,0x0001020b2834) */
/* WARNING: Removing unreachable block (ram,0x0001020b2810) */
/* WARNING: Removing unreachable block (ram,0x0001020b27e4) */
/* WARNING: Removing unreachable block (ram,0x0001020b2de8) */

void FUN_1020b2750(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0x1f;
  *(undefined8 *)(puVar1 + 0x10) = 0xf;
  puVar1 = &DAT_112e56508;
  func_0x0001020b2460(&DAT_112e56508,FUN_1020b209c);
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020b2e4c; end: 1020b2e6b; -[_TtC18GamesFriendsFeedUI15GameListRowCell initWithFrame:] */

void FUN_1020b2e4c(void)

{
  FUN_1020b25a8();
  return;
}



/* Entry: 1020b2e6c; end: 1020b2e9f; -[_TtC18GamesFriendsFeedUI15GameListRowCell initWithCoder:] */

undefined8 FUN_1020b2e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001020b35e8();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1020b2ea0; end: 1020b336f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b2ea0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  code *pcVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong *puVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puStack_b8;
  long alStack_b0 [4];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long lStack_70;
  code *pcStack_68;
  
  lVar7 = param_1;
  FUN_1020b2174();
  uVar20 = *(undefined8 *)(param_1 + 0x10);
  pcVar3 = *(code **)(param_1 + 0x18);
  func_0x000107c61434(pcVar3);
  uVar14 = uVar20;
  pcVar6 = pcVar3;
  func_0x000107c5fadc(uVar20);
  func_0x000107c59c6c(lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar14);
  func_0x0001020b2240();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  if (pcVar4 == (code *)0x0) {
    uVar15 = 0;
  }
  else {
    func_0x000107c61434(pcVar4);
    uVar15 = uVar13;
    pcVar6 = pcVar4;
    func_0x000107c5fadc(uVar13);
  }
  func_0x000107c59c6c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112e56518));
  lVar7 = _DAT_112e56530;
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112e56530);
  pcVar19 = *(code **)(param_1 + 0x30);
  if (uVar8 == 0) {
    if (pcVar19 == (code *)0x0) goto LAB_1020b3068;
    func_0x000107c61174(pcVar19);
    uVar8 = 0;
LAB_1020b3034:
    *(code **)(unaff_x20 + lVar7) = pcVar19;
    func_0x000107c61170(uVar8);
    pcVar9 = (code *)&DAT_112e56508;
    pcVar6 = FUN_1020b209c;
    func_0x0001020b2460(&DAT_112e56508);
    func_0x000107c55258();
  }
  else {
    if (pcVar19 == (code *)0x0) goto LAB_1020b3034;
    FUN_1020b3688(0,0x112e56538,&PTR_PTR_1126b5928);
    pcVar9 = pcVar19;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar21 = uVar8;
    pcVar6 = pcVar9;
    func_0x000107c60118();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(pcVar9);
    if ((uVar21 & 1) == 0) {
      uVar8 = *(ulong *)(unaff_x20 + lVar7);
      goto LAB_1020b3034;
    }
  }
  func_0x000107c61170(pcVar9);
LAB_1020b3068:
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c55528();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c52100();
  func_0x000107c61170(lVar7);
  func_0x000107c40510();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  uStack_90 = uVar20;
  pcStack_88 = pcVar3;
  uStack_80 = uVar13;
  pcStack_78 = pcVar4;
  func_0x0001070bd6d4();
  func_0x000107c61180();
  if (lVar7 == 0) {
    pcVar6 = (code *)0xe400000000000000;
    lVar18 = 0x79616c50;
  }
  else {
    lVar18 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  uVar8 = 0;
  lStack_70 = lVar18;
  pcStack_68 = pcVar6;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar21 = uVar8;
    if (uVar8 < 4) {
      uVar21 = 3;
    }
    lVar7 = uVar8 * 0x10 + 0x28;
    do {
      lVar18 = lVar7;
      if (uVar8 == 3) {
        uVar20 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000107c61408(&uStack_90,3,uVar20);
        uVar8 = 0;
        uVar21 = *(ulong *)(puVar12 + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          puVar16 = (ulong *)(puVar12 + uVar8 * 0x10 + 0x28);
          do {
            if (uVar21 == uVar8) {
              func_0x000107c6142c(puVar12);
              uVar20 = 0x112d38270;
              puStack_b8 = puVar10;
              func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
              uVar13 = uVar20;
              func_0x00010011d734();
              uVar14 = 0x202e;
              uVar15 = 0xe200000000000000;
              func_0x000107c5fa80(0x202e,0xe200000000000000,uVar20,uVar13);
              func_0x000107c61574(puVar10);
              func_0x000107c5fadc(uVar14,uVar15);
              func_0x000107c6142c(uVar15);
              func_0x000107c520fc(unaff_x20);
              func_0x000107c61170(unaff_x20);
              func_0x000107c61170(uVar14);
              return;
            }
            if (*(ulong *)(puVar12 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1020b3370);
              (*pcVar6)();
            }
            uVar1 = puVar16[-1];
            uVar5 = *puVar16;
            puVar16 = puVar16 + 2;
            uVar8 = uVar8 + 1;
            uVar2 = uVar1 & 0xffffffffffff;
            if ((uVar5 & 0x2000000000000000) != 0) {
              uVar2 = uVar5 >> 0x38 & 0xf;
            }
          } while (uVar2 == 0);
          func_0x000107c61434(uVar5);
          puVar11 = puVar10;
          func_0x000107c61558();
          puStack_b8 = puVar10;
          if (((ulong)puVar11 & 1) == 0) {
            func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(puStack_b8 + 0x10);
          if (*(ulong *)(puStack_b8 + 0x18) >> 1 <= uVar2) {
            func_0x000100403514(1 < *(ulong *)(puStack_b8 + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(puStack_b8 + 0x10) = uVar2 + 1;
          *(ulong *)(puStack_b8 + uVar2 * 0x10 + 0x20) = uVar1;
          *(ulong *)(puStack_b8 + uVar2 * 0x10 + 0x28) = uVar5;
          puVar10 = puStack_b8;
        } while( true );
      }
      uVar8 = uVar8 + 1;
      if (uVar21 + 1 == uVar8) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020b336c);
        (*pcVar6)();
      }
      lVar17 = *(long *)((long)alStack_b0 + lVar18);
      lVar7 = lVar18 + 0x10;
    } while (lVar17 == 0);
    uVar20 = *(undefined8 *)((long)alStack_b0 + lVar18 + -8);
    func_0x000107c61434(lVar17);
    puVar10 = puVar12;
    func_0x000107c61558();
    puVar11 = puVar12;
    if (((ulong)puVar10 & 1) == 0) {
      puVar11 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
    }
    uVar21 = *(ulong *)(puVar11 + 0x10);
    puVar12 = puVar11;
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar21) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
      func_0x0001000d182c(puVar12,uVar21 + 1,1,puVar11);
    }
    *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
    *(undefined8 *)(puVar12 + uVar21 * 0x10 + 0x20) = uVar20;
    *(long *)(puVar12 + uVar21 * 0x10 + 0x28) = lVar17;
  } while( true );
}



/* Entry: 1020b3370; end: 1020b344b;  */

/* WARNING: Possible PIC construction at 0x0001020b33ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b33f0) */
/* WARNING: Removing unreachable block (ram,0x0001020b33fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b3370(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e56530);
  if (lVar1 != 0) {
    FUN_1020b3688(0,0x112e56538,&PTR_PTR_1126b5928);
    func_0x000107c61174(param_2);
    func_0x000107c61174(lVar1);
    func_0x000107c60118(param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1020b344c; end: 1020b34f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b344c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_prepareForReuse_112620008);
  puVar1 = &DAT_112e56508;
  func_0x0001020b2460(&DAT_112e56508,FUN_1020b209c);
  func_0x000107c55258();
  func_0x000107c61170(puVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e56530);
  *(undefined8 *)(unaff_x20 + _DAT_112e56530) = 0;
  func_0x000107c61170(uVar2);
  func_0x0001020b2174();
  func_0x000107c59c6c();
  func_0x000107c61170(uVar2);
  func_0x0001020b2240();
  func_0x000107c59c6c();
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1020b34f4; end: 1020b351b; -[_TtC18GamesFriendsFeedUI15GameListRowCell prepareForReuse] */

void FUN_1020b34f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020b344c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020b351c; end: 1020b354f;  */

void FUN_1020b351c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020b3550; end: 1020b35c7; -[_TtC18GamesFriendsFeedUI15GameListRowCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020b356c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b358c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b35ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b3590) */
/* WARNING: Removing unreachable block (ram,0x0001020b3570) */
/* WARNING: Removing unreachable block (ram,0x0001020b35b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b3550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56508));
  return;
}



/* Entry: 1020b35c8; end: 1020b3687;  */

void FUN_1020b35c8(void)

{
  func_0x000107c61168(&PTR_PTR_11281cfd0);
  return;
}



/* Entry: 1020b3688; end: 1020b36c7;  */

void FUN_1020b3688(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020b36c8; end: 1020b3853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020b36c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e56570;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e56570);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c4aba4(puVar3);
    func_0x000107c61180();
    func_0x000107c539d4(0x4034000000000000);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1020b3854; end: 1020b39ab;  */

undefined * FUN_1020b3854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1,param_2,0x16);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xc6);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1,param_2,2);
  func_0x000107c55f80(puVar1,param_2,4);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1020b39ac; end: 1020b3b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020b39ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e56590;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e56590);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001020b3a10();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1020b3b7c; end: 1020b3c5b;  */

undefined * FUN_1020b3b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c59a2c(puVar1);
  puVar2 = puVar1;
  func_0x000107c59e34(puVar1);
  func_0x0001020badb8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x447a0000,puVar1);
  func_0x000107c537fc(0x447a0000,puVar1);
  func_0x000107c5a378(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1020b3c5c; end: 1020b3e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1020b3c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e56568) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56580) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56588) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56590) = 0;
  puVar7 = &DAT_112e56598;
  *(undefined8 *)(unaff_x20 + _DAT_112e56598) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar4 = puVar3;
  FUN_1020b36c8();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  lVar1 = _DAT_112e56570;
  uVar5 = *(undefined8 *)(puVar2 + _DAT_112e56570);
  func_0x000107c61174(uVar5);
  uVar6 = uVar5;
  func_0x0001020b379c();
  func_0x000107c3d89c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar5 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c61174(uVar5);
  uVar6 = uVar5;
  FUN_1020b39ac();
  func_0x000107c3d89c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c61174(uVar6);
  func_0x0001020b3b20(&DAT_112e56598,FUN_1020b3b7c);
  func_0x000107c3d89c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  FUN_1020b3e9c();
  puVar7 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar6);
  func_0x000107c5af88(puVar8);
  func_0x000107c61180();
  func_0x000100b74f58(0x4020000000000000,0x3fbeb851eb851eb8,0,0x4000000000000000,puVar7,uVar6,puVar8
                     );
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar8);
  return puVar2;
}



/* Entry: 1020b3e9c; end: 1020b452f;  */

/* WARNING: Possible PIC construction at 0x0001020b3f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b3f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b3f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b3fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b3fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b402c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b409c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b40c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b40ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b41d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b425c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b42f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b43a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b43f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b44c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b4478) */
/* WARNING: Removing unreachable block (ram,0x0001020b441c) */
/* WARNING: Removing unreachable block (ram,0x0001020b43f8) */
/* WARNING: Removing unreachable block (ram,0x0001020b43a4) */
/* WARNING: Removing unreachable block (ram,0x0001020b434c) */
/* WARNING: Removing unreachable block (ram,0x0001020b42f4) */
/* WARNING: Removing unreachable block (ram,0x0001020b4298) */
/* WARNING: Removing unreachable block (ram,0x0001020b4260) */
/* WARNING: Removing unreachable block (ram,0x0001020b4234) */
/* WARNING: Removing unreachable block (ram,0x0001020b41dc) */
/* WARNING: Removing unreachable block (ram,0x0001020b4184) */
/* WARNING: Removing unreachable block (ram,0x0001020b4128) */
/* WARNING: Removing unreachable block (ram,0x0001020b40f0) */
/* WARNING: Removing unreachable block (ram,0x0001020b40c4) */
/* WARNING: Removing unreachable block (ram,0x0001020b40a0) */
/* WARNING: Removing unreachable block (ram,0x0001020b4054) */
/* WARNING: Removing unreachable block (ram,0x0001020b4030) */
/* WARNING: Removing unreachable block (ram,0x0001020b3fe4) */
/* WARNING: Removing unreachable block (ram,0x0001020b3fc0) */
/* WARNING: Removing unreachable block (ram,0x0001020b3f6c) */
/* WARNING: Removing unreachable block (ram,0x0001020b3f48) */
/* WARNING: Removing unreachable block (ram,0x0001020b3f1c) */
/* WARNING: Removing unreachable block (ram,0x0001020b44cc) */

void FUN_1020b3e9c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0x1f;
  *(undefined8 *)(puVar1 + 0x10) = 0xf;
  FUN_1020b36c8();
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020b4530; end: 1020b454f; -[_TtC18GamesFriendsFeedUI19GameShareBannerCell initWithFrame:] */

void FUN_1020b4530(void)

{
  FUN_1020b3c5c();
  return;
}



/* Entry: 1020b4550; end: 1020b4583; -[_TtC18GamesFriendsFeedUI19GameShareBannerCell initWithCoder:] */

undefined8 FUN_1020b4550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001020b4a68();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1020b4584; end: 1020b48c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b4584(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  ulong uVar16;
  undefined *apuStack_c8 [7];
  undefined8 uStack_90;
  ulong auStack_88 [4];
  undefined8 uStack_68;
  
  puVar6 = &DAT_112e56580;
  func_0x0001020b3b20(&DAT_112e56580,FUN_1020b3854);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(ulong *)(param_1 + 0x18);
  func_0x000107c61434(uVar16);
  uVar15 = uVar10;
  func_0x000107c5fadc(uVar10,uVar16);
  func_0x000107c59c6c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar15);
  puVar6 = &DAT_112e56588;
  func_0x0001020b3b20(&DAT_112e56588,0x1020b3900);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61434(uVar11);
  uVar13 = uVar15;
  uVar12 = uVar11;
  func_0x000107c5fadc(uVar15);
  func_0x000107c59c6c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112e56588));
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c55528();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c52100();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  lVar8 = lVar7;
  uStack_90 = uVar10;
  auStack_88[0] = uVar16;
  auStack_88[1] = uVar15;
  auStack_88[2] = uVar11;
  func_0x0001020badb8();
  uVar16 = 0;
  auStack_88[3] = lVar8;
  uStack_68 = uVar12;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar16;
    if (uVar16 < 4) {
      uVar1 = 3;
    }
    puVar14 = auStack_88 + uVar16 * 2;
    do {
      if (uVar16 == 3) {
        func_0x000107c61408(&uStack_90,3,PTR___sSSN_11034da80);
        uVar10 = 0x112d38270;
        apuStack_c8[0] = puVar6;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar15 = uVar10;
        func_0x00010011d734();
        uVar11 = 0x202e;
        uVar13 = 0xe200000000000000;
        func_0x000107c5fa80(0x202e,0xe200000000000000,uVar10,uVar15);
        func_0x000107c61574(puVar6);
        func_0x000107c5fadc(uVar11,uVar13);
        func_0x000107c6142c(uVar13);
        func_0x000107c520fc(lVar7);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar11);
        func_0x0001020b379c();
        lVar7 = _DAT_112e56568;
        func_0x000107c61428(unaff_x20 + _DAT_112e56568,apuStack_c8,0,0);
        uVar15 = *(undefined8 *)(unaff_x20 + lVar7);
        uVar10 = uVar15;
        func_0x000107c61174(uVar15);
        FUN_1020b02bc(uVar15);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar10);
        return;
      }
      uVar16 = uVar16 + 1;
      if (uVar1 + 1 == uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020b48c8);
        (*pcVar5)();
      }
      uVar3 = puVar14[-1];
      uVar4 = *puVar14;
      puVar14 = puVar14 + 2;
      uVar2 = uVar3 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar2 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar4);
    puVar9 = puVar6;
    func_0x000107c61558();
    apuStack_c8[0] = puVar6;
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar6 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(apuStack_c8[0] + 0x10);
    if (*(ulong *)(apuStack_c8[0] + 0x18) >> 1 <= uVar1) {
      func_0x000100403514(1 < *(ulong *)(apuStack_c8[0] + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(apuStack_c8[0] + 0x10) = uVar1 + 1;
    *(ulong *)(apuStack_c8[0] + uVar1 * 0x10 + 0x20) = uVar3;
    *(ulong *)(apuStack_c8[0] + uVar1 * 0x10 + 0x28) = uVar4;
    puVar6 = apuStack_c8[0];
  } while( true );
}



/* Entry: 1020b48c8; end: 1020b498b; -[_TtC18GamesFriendsFeedUI19GameShareBannerCell prepareForReuse] */

void FUN_1020b48c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_prepareForReuse_112620008;
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar2);
  puVar2 = &DAT_112e56580;
  func_0x0001020b3b20(&DAT_112e56580,FUN_1020b3854);
  func_0x000107c59c6c();
  func_0x000107c61170(puVar2);
  puVar2 = &DAT_112e56588;
  func_0x0001020b3b20(&DAT_112e56588,0x1020b3900);
  func_0x000107c59c6c();
  func_0x000107c61170(puVar2);
  func_0x0001020b379c();
  FUN_1020b04f4();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020b498c; end: 1020b49bf;  */

void FUN_1020b498c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020b49c0; end: 1020b4a47; -[_TtC18GamesFriendsFeedUI19GameShareBannerCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020b49dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b49fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b4a00) */
/* WARNING: Removing unreachable block (ram,0x0001020b49e0) */
/* WARNING: Removing unreachable block (ram,0x0001020b4a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b49c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56568));
  return;
}



/* Entry: 1020b4a48; end: 1020b4b13;  */

void FUN_1020b4a48(void)

{
  func_0x000107c61168(&PTR_PTR_11281d0b0);
  return;
}



/* Entry: 1020b4b14; end: 1020b4bd7;  */

void FUN_1020b4b14(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020b4bd8; end: 1020b4ca7;  */

/* WARNING: Possible PIC construction at 0x0001020b4bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001020b4bf8) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c70) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c24) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c80) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c00) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c40) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c90) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c48) */

void FUN_1020b4bd8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1020b4ca8; end: 1020b4ce3;  */

void FUN_1020b4ca8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_1020b4bd8(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b4ce4; end: 1020b4ce7;  */

/* WARNING: Possible PIC construction at 0x0001020b4bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b4c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001020b4bf8) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c70) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c24) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c80) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c00) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c40) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c90) */
/* WARNING: Removing unreachable block (ram,0x0001020b4c48) */

void FUN_1020b4ce4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1020b4ce8; end: 1020b4d1f;  */

void FUN_1020b4ce8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1020b4bd8(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b4d20; end: 1020b4d67;  */

uint FUN_1020b4d20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1020b5a70(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1020b4d68; end: 1020b4d6b;  */

uint FUN_1020b4d68(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar2 == 0) goto LAB_1020b5c0c;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 = param_1[4], uVar3 == param_2[4] && (param_1[5] == uVar2)) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)))) {
LAB_1020b5c0c:
      uVar3 = param_1[6];
      uVar2 = param_2[6];
      if (uVar3 == 0) {
        if (uVar2 == 0) {
LAB_1020b5c6c:
          if (((char)param_1[7] == (char)param_2[7]) &&
             (*(char *)((long)param_1 + 0x39) == *(char *)((long)param_2 + 0x39))) {
            uVar2 = param_1[8];
            FUN_1020b4d6c(uVar2,param_2[8]);
            if ((uVar2 & 1) != 0) {
              uStack_78 = param_1[10];
              uStack_80 = param_1[9];
              uStack_68 = param_1[0xc];
              uStack_70 = param_1[0xb];
              uStack_58 = param_1[0xe];
              uStack_60 = param_1[0xd];
              uStack_48 = param_1[0x10];
              uStack_50 = param_1[0xf];
              uStack_b8 = param_2[10];
              uStack_c0 = param_2[9];
              uStack_a8 = param_2[0xc];
              uStack_b0 = param_2[0xb];
              uStack_98 = param_2[0xe];
              uStack_a0 = param_2[0xd];
              uStack_88 = param_2[0x10];
              uStack_90 = param_2[0xf];
              puVar5 = &uStack_80;
              FUN_1020b5a70(puVar5,&uStack_c0);
              uVar1 = (uint)puVar5;
              goto LAB_1020b5ce0;
            }
          }
        }
      }
      else if (uVar2 != 0) {
        FUN_1020b71b4(0);
        func_0x000107c61174(uVar2);
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c60118();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        if ((uVar4 & 1) != 0) goto LAB_1020b5c6c;
      }
    }
  }
  uVar1 = 0;
LAB_1020b5ce0:
  return uVar1 & 1;
}



/* Entry: 1020b4d6c; end: 1020b4ebf;  */

undefined8 FUN_1020b4d6c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 == 0) || (param_1 == param_2)) {
      return 1;
    }
    uVar1 = *(ulong *)(param_1 + 0x20);
    uVar2 = *(ulong *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar6 = *(long *)(param_2 + 0x28);
    uVar5 = *(ulong *)(param_2 + 0x30);
    lVar3 = *(long *)(param_2 + 0x38);
    if ((uVar1 == *(ulong *)(param_2 + 0x20) && *(long *)(param_1 + 0x28) == lVar6) ||
       (func_0x000107c605b8(uVar1,*(long *)(param_1 + 0x28),*(ulong *)(param_2 + 0x20),lVar6,0),
       (uVar1 & 1) != 0)) {
      plVar8 = (long *)(param_1 + 0x58);
      plVar9 = (long *)(param_2 + 0x58);
      while( true ) {
        lVar7 = lVar7 + -1;
        if (lVar4 == 0) {
          func_0x000107c61438(lVar3,2);
          func_0x000107c61434(lVar6);
          func_0x000107c6142c();
          if (lVar3 != 0) {
            func_0x000107c61430(lVar3,2);
            return 0;
          }
        }
        else {
          if (lVar3 == 0) {
            return 0;
          }
          if (((uVar2 != uVar5) || (lVar4 != lVar3)) &&
             (func_0x000107c605b8(uVar2,lVar4,uVar5,lVar3,0), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        if (lVar7 == 0) {
          return 1;
        }
        uVar1 = plVar8[-3];
        uVar2 = plVar8[-1];
        lVar4 = *plVar8;
        lVar6 = plVar9[-2];
        uVar5 = plVar9[-1];
        lVar3 = *plVar9;
        if (((uVar1 != plVar9[-3]) || (plVar8[-2] != lVar6)) &&
           (func_0x000107c605b8(), (uVar1 & 1) == 0)) break;
        plVar8 = plVar8 + 4;
        plVar9 = plVar9 + 4;
      }
      return 0;
    }
  }
  return 0;
}



/* Entry: 1020b4ec0; end: 1020b4fab;  */

void FUN_1020b4ec0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb58(param_1,unaff_x20[2],unaff_x20[3]);
  lVar1 = unaff_x20[5];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[6];
  }
  else {
    uVar2 = unaff_x20[4];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[6];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar1);
    func_0x000107c6011c(param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + 7));
  func_0x000107c60690(*(undefined1 *)((long)unaff_x20 + 0x39));
  FUN_1020b59b4(param_1,unaff_x20[8]);
  FUN_1020b4bd8(param_1);
  return;
}



/* Entry: 1020b4fac; end: 1020b4fe7;  */

void FUN_1020b4fac(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_1020b4ec0(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b4fe8; end: 1020b4feb;  */

void FUN_1020b4fe8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb58(param_1,unaff_x20[2],unaff_x20[3]);
  lVar1 = unaff_x20[5];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[6];
  }
  else {
    uVar2 = unaff_x20[4];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[6];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar1);
    func_0x000107c6011c(param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + 7));
  func_0x000107c60690(*(undefined1 *)((long)unaff_x20 + 0x39));
  FUN_1020b59b4(param_1,unaff_x20[8]);
  FUN_1020b4bd8(param_1);
  return;
}



/* Entry: 1020b4fec; end: 1020b5023;  */

void FUN_1020b4fec(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1020b4ec0(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b5024; end: 1020b50a3;  */

uint FUN_1020b5024(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_1020b5b6c(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1020b50a4; end: 1020b50af;  */

undefined * FUN_1020b50a4(void)

{
  return &UNK_10da59130;
}



/* Entry: 1020b50b0; end: 1020b5203;  */

void FUN_1020b50b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fb58(auStack_88,uVar1,uVar4);
  func_0x000107c5fb58(auStack_88,uVar2,uVar5);
  func_0x000107c5fb58(auStack_88,uVar3,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b5204; end: 1020b5247;  */

uint FUN_1020b5204(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1020b5cfc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1020b5248; end: 1020b538f;  */

void FUN_1020b5248(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined1 auStack_248 [72];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_108 = unaff_x20[0xd];
  uStack_110 = unaff_x20[0xc];
  uStack_f8 = unaff_x20[0xf];
  uStack_100 = unaff_x20[0xe];
  uStack_f0 = unaff_x20[0x10];
  uStack_148 = unaff_x20[5];
  uStack_150 = unaff_x20[4];
  uStack_138 = unaff_x20[7];
  uStack_140 = unaff_x20[6];
  uStack_128 = unaff_x20[9];
  uStack_130 = unaff_x20[8];
  uStack_118 = unaff_x20[0xb];
  uStack_120 = unaff_x20[10];
  uStack_168 = unaff_x20[1];
  uStack_170 = *unaff_x20;
  uStack_158 = unaff_x20[3];
  uStack_160 = unaff_x20[2];
  func_0x000107c6068c(auStack_248,0);
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_60 = unaff_x20[0x10];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  iVar7 = (int)&uStack_170;
  FUN_10209de84();
  puVar8 = &uStack_e0;
  func_0x000100ce0ed0();
  if (iVar7 == 1) {
    uVar1 = *puVar8;
    uVar4 = puVar8[1];
    uVar2 = puVar8[2];
    uVar5 = puVar8[3];
    uVar3 = puVar8[4];
    uVar6 = puVar8[5];
    func_0x000107c60690(1);
    func_0x000107c5fb58(auStack_248,uVar1,uVar4);
    func_0x000107c5fb58(auStack_248,uVar2,uVar5);
    func_0x000107c5fb58(auStack_248,uVar3,uVar6);
  }
  else {
    uStack_198 = puVar8[0xd];
    uStack_1a0 = puVar8[0xc];
    uStack_188 = puVar8[0xf];
    uStack_190 = puVar8[0xe];
    uStack_180 = puVar8[0x10];
    uStack_1d8 = puVar8[5];
    uStack_1e0 = puVar8[4];
    uStack_1c8 = puVar8[7];
    uStack_1d0 = puVar8[6];
    uStack_1b8 = puVar8[9];
    uStack_1c0 = puVar8[8];
    uStack_1a8 = puVar8[0xb];
    uStack_1b0 = puVar8[10];
    uStack_1f8 = puVar8[1];
    uStack_200 = *puVar8;
    uStack_1e8 = puVar8[3];
    uStack_1f0 = puVar8[2];
    func_0x000107c60690(0);
    FUN_1020b4ec0(auStack_248);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b5390; end: 1020b54cf;  */

void FUN_1020b5390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_100 = unaff_x20[0x10];
  uStack_70 = unaff_x20[0x10];
  iVar7 = (int)&uStack_180;
  FUN_10209de84();
  puVar8 = &uStack_f0;
  func_0x000100ce0ed0();
  if (iVar7 == 1) {
    uVar1 = *puVar8;
    uVar4 = puVar8[1];
    uVar2 = puVar8[2];
    uVar5 = puVar8[3];
    uVar3 = puVar8[4];
    uVar6 = puVar8[5];
    func_0x000107c60690(1);
    func_0x000107c5fb58(param_1,uVar1,uVar4);
    func_0x000107c5fb58(param_1,uVar2,uVar5);
    func_0x000107c5fb58(param_1,uVar3,uVar6);
  }
  else {
    func_0x000107c60690(0);
    FUN_1020b4ec0(param_1);
  }
  return;
}



/* Entry: 1020b54d0; end: 1020b5613;  */

void FUN_1020b54d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined1 auStack_248 [72];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_108 = unaff_x20[0xd];
  uStack_110 = unaff_x20[0xc];
  uStack_f8 = unaff_x20[0xf];
  uStack_100 = unaff_x20[0xe];
  uStack_f0 = unaff_x20[0x10];
  uStack_148 = unaff_x20[5];
  uStack_150 = unaff_x20[4];
  uStack_138 = unaff_x20[7];
  uStack_140 = unaff_x20[6];
  uStack_128 = unaff_x20[9];
  uStack_130 = unaff_x20[8];
  uStack_118 = unaff_x20[0xb];
  uStack_120 = unaff_x20[10];
  uStack_168 = unaff_x20[1];
  uStack_170 = *unaff_x20;
  uStack_158 = unaff_x20[3];
  uStack_160 = unaff_x20[2];
  func_0x000107c6068c(auStack_248);
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_60 = unaff_x20[0x10];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  iVar7 = (int)&uStack_170;
  FUN_10209de84();
  puVar8 = &uStack_e0;
  func_0x000100ce0ed0();
  if (iVar7 == 1) {
    uVar1 = *puVar8;
    uVar4 = puVar8[1];
    uVar2 = puVar8[2];
    uVar5 = puVar8[3];
    uVar3 = puVar8[4];
    uVar6 = puVar8[5];
    func_0x000107c60690(1);
    func_0x000107c5fb58(auStack_248,uVar1,uVar4);
    func_0x000107c5fb58(auStack_248,uVar2,uVar5);
    func_0x000107c5fb58(auStack_248,uVar3,uVar6);
  }
  else {
    uStack_198 = puVar8[0xd];
    uStack_1a0 = puVar8[0xc];
    uStack_188 = puVar8[0xf];
    uStack_190 = puVar8[0xe];
    uStack_180 = puVar8[0x10];
    uStack_1d8 = puVar8[5];
    uStack_1e0 = puVar8[4];
    uStack_1c8 = puVar8[7];
    uStack_1d0 = puVar8[6];
    uStack_1b8 = puVar8[9];
    uStack_1c0 = puVar8[8];
    uStack_1a8 = puVar8[0xb];
    uStack_1b0 = puVar8[10];
    uStack_1f8 = puVar8[1];
    uStack_200 = *puVar8;
    uStack_1e8 = puVar8[3];
    uStack_1f0 = puVar8[2];
    func_0x000107c60690(0);
    FUN_1020b4ec0(auStack_248);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b5614; end: 1020b5693;  */

uint FUN_1020b5614(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_1020b5d94(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1020b5694; end: 1020b571b;  */

void FUN_1020b5694(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fb58(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar2,lVar4);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b571c; end: 1020b5783;  */

/* WARNING: Possible PIC construction at 0x0001020b5738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b573c) */
/* WARNING: Removing unreachable block (ram,0x0001020b5768) */
/* WARNING: Removing unreachable block (ram,0x0001020b5740) */

void FUN_1020b571c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1020b5784; end: 1020b5807;  */

void FUN_1020b5784(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_88);
  func_0x000107c5fb58(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar2,lVar4);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b5808; end: 1020b5823;  */

undefined8 FUN_1020b5808(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (((uVar4 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(uVar4,param_1[1],*param_2,param_2[1],0), (uVar4 & 1) == 0)) {
    return 0;
  }
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return 0;
    }
  }
  else if ((uVar3 == 0) ||
          (((uVar5 != uVar1 || (uVar2 != uVar3)) &&
           (func_0x000107c605b8(uVar5,uVar2,uVar1,uVar3,0), (uVar5 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 1020b5824; end: 1020b59b3;  */

void FUN_1020b5824(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar1,uVar3);
  func_0x000107c5fb58(auStack_78,uVar2,uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020b59b4; end: 1020b5a6f;  */

void FUN_1020b59b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x000107c60690(lVar5);
  if (lVar5 != 0) {
    plVar6 = (long *)(param_2 + 0x38);
    do {
      lVar1 = plVar6[-3];
      lVar3 = plVar6[-2];
      lVar2 = plVar6[-1];
      lVar4 = *plVar6;
      func_0x000107c61434(lVar4);
      func_0x000107c61434(lVar3);
      func_0x000107c5fb58(param_1,lVar1,lVar3);
      if (lVar4 == 0) {
        func_0x000107c60694(0);
      }
      else {
        func_0x000107c60694(1);
        func_0x000107c5fb58(param_1,lVar2,lVar4);
        func_0x000107c6142c(lVar4);
      }
      plVar6 = plVar6 + 4;
      func_0x000107c6142c(lVar3);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1020b5a70; end: 1020b5b6b;  */

undefined8 FUN_1020b5a70(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
      {
        return 0;
      }
    }
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[7];
    if (param_1[7] == 0) {
      if (uVar1 == 0) {
        return 1;
      }
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[6], uVar2 == param_2[6] && (param_1[7] == uVar1)) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1020b5b6c; end: 1020b5cfb;  */

uint FUN_1020b5b6c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar2 == 0) goto LAB_1020b5c0c;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 = param_1[4], uVar3 == param_2[4] && (param_1[5] == uVar2)) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)))) {
LAB_1020b5c0c:
      uVar3 = param_1[6];
      uVar2 = param_2[6];
      if (uVar3 == 0) {
        if (uVar2 == 0) {
LAB_1020b5c6c:
          if (((char)param_1[7] == (char)param_2[7]) &&
             (*(char *)((long)param_1 + 0x39) == *(char *)((long)param_2 + 0x39))) {
            uVar2 = param_1[8];
            FUN_1020b4d6c(uVar2,param_2[8]);
            if ((uVar2 & 1) != 0) {
              uStack_78 = param_1[10];
              uStack_80 = param_1[9];
              uStack_68 = param_1[0xc];
              uStack_70 = param_1[0xb];
              uStack_58 = param_1[0xe];
              uStack_60 = param_1[0xd];
              uStack_48 = param_1[0x10];
              uStack_50 = param_1[0xf];
              uStack_b8 = param_2[10];
              uStack_c0 = param_2[9];
              uStack_a8 = param_2[0xc];
              uStack_b0 = param_2[0xb];
              uStack_98 = param_2[0xe];
              uStack_a0 = param_2[0xd];
              uStack_88 = param_2[0x10];
              uStack_90 = param_2[0xf];
              puVar5 = &uStack_80;
              FUN_1020b5a70(puVar5,&uStack_c0);
              uVar1 = (uint)puVar5;
              goto LAB_1020b5ce0;
            }
          }
        }
      }
      else if (uVar2 != 0) {
        FUN_1020b71b4(0);
        func_0x000107c61174(uVar2);
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c60118();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        if ((uVar4 & 1) != 0) goto LAB_1020b5c6c;
      }
    }
  }
  uVar1 = 0;
LAB_1020b5ce0:
  return uVar1 & 1;
}



/* Entry: 1020b5cfc; end: 1020b5d93;  */

/* WARNING: Possible PIC construction at 0x0001020b5d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b5d30) */

long FUN_1020b5cfc(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  uVar2 = param_1[2];
  if ((uVar2 == param_2[2] && param_1[3] == param_2[3]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
     ) {
    lVar1 = param_1[4];
    if ((lVar1 != param_2[4]) || (param_1[5] != param_2[5])) goto code_r0x000107c605b8;
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1020b5d94; end: 1020b5fc7;  */

uint FUN_1020b5d94(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  iVar8 = (int)&uStack_2a0;
  puVar15 = &uStack_2a0;
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_100 = param_1[0x10];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  iVar9 = (int)&uStack_180;
  FUN_10209de84();
  puVar11 = &uStack_180;
  func_0x000100ce0ed0();
  if (iVar9 == 1) {
    uVar12 = *puVar11;
    uVar3 = puVar11[1];
    uVar13 = puVar11[2];
    uVar4 = puVar11[3];
    uVar14 = puVar11[4];
    uVar5 = puVar11[5];
    uStack_88 = param_2[0xd];
    uStack_90 = param_2[0xc];
    uStack_78 = param_2[0xf];
    uStack_80 = param_2[0xe];
    uStack_70 = param_2[0x10];
    uStack_c8 = param_2[5];
    uStack_d0 = param_2[4];
    uStack_b8 = param_2[7];
    uStack_c0 = param_2[6];
    uStack_a8 = param_2[9];
    uStack_b0 = param_2[8];
    uStack_98 = param_2[0xb];
    uStack_a0 = param_2[10];
    uStack_e8 = param_2[1];
    uStack_f0 = *param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    iVar9 = (int)&uStack_f0;
    FUN_10209de84();
    puVar11 = &uStack_f0;
    func_0x000100ce0ed0();
    if (iVar9 == 1) {
      uVar1 = puVar11[2];
      uVar6 = puVar11[3];
      uVar2 = puVar11[4];
      uVar7 = puVar11[5];
      if (((((uVar12 == *puVar11) && (uVar3 == puVar11[1])) ||
           (func_0x000107c605b8(uVar12,uVar3,*puVar11,puVar11[1],0), (uVar12 & 1) != 0)) &&
          (((uVar13 == uVar1 && (uVar4 == uVar6)) ||
           (func_0x000107c605b8(uVar13,uVar4,uVar1,uVar6,0), (uVar13 & 1) != 0)))) &&
         (((uVar14 == uVar2 && (uVar5 == uVar7)) ||
          (func_0x000107c605b8(uVar14,uVar5,uVar2,uVar7,0), (uVar14 & 1) != 0)))) {
        uVar10 = 1;
        goto LAB_1020b5fa4;
      }
    }
  }
  else {
    uStack_98 = puVar11[0xb];
    uStack_a0 = puVar11[10];
    uStack_88 = puVar11[0xd];
    uStack_90 = puVar11[0xc];
    uStack_78 = puVar11[0xf];
    uStack_80 = puVar11[0xe];
    uStack_70 = puVar11[0x10];
    uStack_d8 = puVar11[3];
    uStack_e0 = puVar11[2];
    uStack_c8 = puVar11[5];
    uStack_d0 = puVar11[4];
    uStack_b8 = puVar11[7];
    uStack_c0 = puVar11[6];
    uStack_a8 = puVar11[9];
    uStack_b0 = puVar11[8];
    uStack_e8 = puVar11[1];
    uStack_f0 = *puVar11;
    uStack_278 = param_2[5];
    uStack_280 = param_2[4];
    uStack_268 = param_2[7];
    uStack_270 = param_2[6];
    uStack_298 = param_2[1];
    uStack_2a0 = *param_2;
    uStack_288 = param_2[3];
    uStack_290 = param_2[2];
    uStack_220 = param_2[0x10];
    uStack_238 = param_2[0xd];
    uStack_240 = param_2[0xc];
    uStack_228 = param_2[0xf];
    uStack_230 = param_2[0xe];
    uStack_258 = param_2[9];
    uStack_260 = param_2[8];
    uStack_248 = param_2[0xb];
    uStack_250 = param_2[10];
    FUN_10209de84();
    func_0x000100ce0ed0();
    if (iVar8 != 1) {
      uStack_1a8 = puVar15[0xd];
      uStack_1b0 = puVar15[0xc];
      uStack_198 = puVar15[0xf];
      uStack_1a0 = puVar15[0xe];
      uStack_190 = puVar15[0x10];
      uStack_1e8 = puVar15[5];
      uStack_1f0 = puVar15[4];
      uStack_1d8 = puVar15[7];
      uStack_1e0 = puVar15[6];
      uStack_1c8 = puVar15[9];
      uStack_1d0 = puVar15[8];
      uStack_1b8 = puVar15[0xb];
      uStack_1c0 = puVar15[10];
      uStack_208 = puVar15[1];
      uStack_210 = *puVar15;
      uStack_1f8 = puVar15[3];
      uStack_200 = puVar15[2];
      puVar11 = &uStack_f0;
      FUN_1020b5b6c(puVar11,&uStack_210);
      uVar10 = (uint)puVar11;
      goto LAB_1020b5fa4;
    }
  }
  uVar10 = 0;
LAB_1020b5fa4:
  return uVar10 & 1;
}



/* Entry: 1020b5fc8; end: 1020b6067;  */

undefined8
FUN_1020b5fc8(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_8 != 0) {
      return 0;
    }
  }
  else if ((param_8 == 0) ||
          (((param_3 != param_7 || (param_4 != param_8)) &&
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 1020b6068; end: 1020b606b;  */

void FUN_1020b6068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59140;
  func_0x000107c61520(&UNK_10da59140,&UNK_1104c7068);
  puRam0000000112e565c8 = puVar1;
  return;
}



/* Entry: 1020b606c; end: 1020b60ab;  */

void FUN_1020b606c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59140;
  func_0x000107c61520(&UNK_10da59140,&UNK_1104c7068);
  puRam0000000112e565c8 = puVar1;
  return;
}



/* Entry: 1020b60ac; end: 1020b60af;  */

void FUN_1020b60ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da591a8;
  func_0x000107c61520(&UNK_10da591a8,&UNK_1104c70f8);
  puRam0000000112e565d0 = puVar1;
  return;
}



/* Entry: 1020b60b0; end: 1020b60ef;  */

void FUN_1020b60b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da591a8;
  func_0x000107c61520(&UNK_10da591a8,&UNK_1104c70f8);
  puRam0000000112e565d0 = puVar1;
  return;
}



/* Entry: 1020b60f0; end: 1020b60f3;  */

void FUN_1020b60f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59250;
  func_0x000107c61520(&UNK_10da59250,&UNK_1104c7170);
  puRam0000000112e565d8 = puVar1;
  return;
}



/* Entry: 1020b60f4; end: 1020b6133;  */

void FUN_1020b60f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59250;
  func_0x000107c61520(&UNK_10da59250,&UNK_1104c7170);
  puRam0000000112e565d8 = puVar1;
  return;
}



/* Entry: 1020b6134; end: 1020b613b;  */

void FUN_1020b6134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e55ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da592b8;
  func_0x000107c61520(&UNK_10da592b8,&UNK_1104c71f8);
  puRam0000000112e55ff0 = puVar1;
  return;
}



/* Entry: 1020b613c; end: 1020b617b;  */

void FUN_1020b613c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59320;
  func_0x000107c61520(&UNK_10da59320,&UNK_1104c7290);
  puRam0000000112e565e0 = puVar1;
  return;
}



/* Entry: 1020b617c; end: 1020b617f;  */

void FUN_1020b617c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59388;
  func_0x000107c61520(&UNK_10da59388,&UNK_1104c7330);
  puRam0000000112e565e8 = puVar1;
  return;
}



/* Entry: 1020b6180; end: 1020b61bf;  */

void FUN_1020b6180(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59388;
  func_0x000107c61520(&UNK_10da59388,&UNK_1104c7330);
  puRam0000000112e565e8 = puVar1;
  return;
}



/* Entry: 1020b61c0; end: 1020b61c3;  */

void FUN_1020b61c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da593f0;
  func_0x000107c61520(&UNK_10da593f0,&UNK_1104c73a8);
  puRam0000000112e565f0 = puVar1;
  return;
}



/* Entry: 1020b61c4; end: 1020b6203;  */

void FUN_1020b61c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da593f0;
  func_0x000107c61520(&UNK_10da593f0,&UNK_1104c73a8);
  puRam0000000112e565f0 = puVar1;
  return;
}



/* Entry: 1020b6204; end: 1020b6207;  */

void FUN_1020b6204(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59458;
  func_0x000107c61520(&UNK_10da59458,&UNK_1104c7428);
  puRam0000000112e565f8 = puVar1;
  return;
}



/* Entry: 1020b6208; end: 1020b6247;  */

void FUN_1020b6208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e565f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59458;
  func_0x000107c61520(&UNK_10da59458,&UNK_1104c7428);
  puRam0000000112e565f8 = puVar1;
  return;
}



/* Entry: 1020b6248; end: 1020b63af;  */

void FUN_1020b6248(void)

{
  return;
}



/* Entry: 1020b63b0; end: 1020b63e7;  */

/* WARNING: Possible PIC construction at 0x0001020b63c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b63d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b63c8) */
/* WARNING: Removing unreachable block (ram,0x0001020b63d8) */

void FUN_1020b63b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020b63e8; end: 1020b64f7;  */

undefined8 * FUN_1020b63e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1020b64f8; end: 1020b655b;  */

undefined8 * FUN_1020b64f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020b655c; end: 1020b6603;  */

int FUN_1020b655c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020b6604; end: 1020b6663;  */

/* WARNING: Possible PIC construction at 0x0001020b6618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b6628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b6638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b6648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b663c) */
/* WARNING: Removing unreachable block (ram,0x0001020b662c) */
/* WARNING: Removing unreachable block (ram,0x0001020b661c) */
/* WARNING: Removing unreachable block (ram,0x0001020b664c) */

void FUN_1020b6604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020b6664; end: 1020b6737;  */

undefined8 * FUN_1020b6664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar7 = param_2[6];
  param_1[6] = uVar7;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar4 = param_2[9];
  param_1[8] = uVar1;
  param_1[9] = uVar4;
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  uVar6 = param_2[0xe];
  uVar8 = param_2[0xf];
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar8;
  uVar8 = param_2[0x10];
  param_1[0x10] = uVar8;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar8);
  return param_1;
}



/* Entry: 1020b6738; end: 1020b6883;  */

undefined8 * FUN_1020b6738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xf] = param_2[0xf];
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020b6884; end: 1020b693f;  */

undefined8 * FUN_1020b6884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c61170(uVar2);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0x10];
  uVar1 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020b6940; end: 1020b69f7;  */

int FUN_1020b6940(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020b69f8; end: 1020b6a27;  */

/* WARNING: Possible PIC construction at 0x0001020b6a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b6a10) */

void FUN_1020b69f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020b6a28; end: 1020b6b07;  */

undefined8 * FUN_1020b6a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1020b6b08; end: 1020b6b5b;  */

undefined8 * FUN_1020b6b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020b6b5c; end: 1020b6bff;  */

int FUN_1020b6b5c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020b6c00; end: 1020b6c47;  */

void FUN_1020b6c00(undefined8 *param_1)

{
  FUN_1020a11ac(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10]);
  return;
}



/* Entry: 1020b6c48; end: 1020b6e57;  */

undefined8 * FUN_1020b6c48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar5 = param_2[8];
  uVar13 = param_2[9];
  uVar6 = param_2[10];
  uVar14 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar15 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar16 = param_2[0xf];
  uVar17 = param_2[0x10];
  FUN_1020a10b0(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar5,uVar13,uVar6,uVar14,uVar7,
                uVar15,uVar8,uVar16,uVar17);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  param_1[8] = uVar5;
  param_1[9] = uVar13;
  param_1[10] = uVar6;
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar15;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar16;
  param_1[0x10] = uVar17;
  return param_1;
}



/* Entry: 1020b6e58; end: 1020b6edb;  */

undefined8 * FUN_1020b6e58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar9 = param_2[0x10];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar10 = param_1[0x10];
  uVar19 = *param_2;
  uVar21 = param_2[3];
  uVar20 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar19;
  param_1[3] = uVar21;
  param_1[2] = uVar20;
  uVar19 = param_2[4];
  uVar21 = param_2[7];
  uVar20 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar19;
  param_1[7] = uVar21;
  param_1[6] = uVar20;
  uVar19 = param_2[8];
  uVar21 = param_2[0xb];
  uVar20 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar19;
  param_1[0xb] = uVar21;
  param_1[10] = uVar20;
  uVar19 = param_2[0xc];
  uVar21 = param_2[0xf];
  uVar20 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar19;
  param_1[0xf] = uVar21;
  param_1[0xe] = uVar20;
  param_1[0x10] = uVar9;
  FUN_1020a11ac(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar10);
  return param_1;
}



/* Entry: 1020b6edc; end: 1020b7007;  */

int FUN_1020b6edc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0xe) >> 2) & 0xffffff80 |
          (uint)*(ulong *)(param_1 + 0xe) >> 1 & 0x7f;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1020b7008; end: 1020b706b;  */

/* WARNING: Possible PIC construction at 0x0001020b701c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b7020) */

void FUN_1020b7008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020b706c; end: 1020b70d7;  */

undefined8 * FUN_1020b706c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020b70d8; end: 1020b711b;  */

undefined8 * FUN_1020b70d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020b711c; end: 1020b71b3;  */

int FUN_1020b711c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020b71b4; end: 1020b71f7;  */

void FUN_1020b71b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e56538 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5928;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e56538 = puVar1;
  return;
}



/* Entry: 1020b71f8; end: 1020b728b;  */

undefined1 FUN_1020b71f8(undefined1 *param_1)

{
  return *param_1;
}


