/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102853654; end: 1028536bf;  */

void FUN_102853654(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6142c(uVar1);
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x000107c61170(param_1[2]);
  param_1[2] = param_4;
  return;
}



/* Entry: 1028536c0; end: 1028539bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028536c0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_80 = param_2;
  uStack_78 = param_3;
  func_0x000107c6157c(uVar6);
  uVar1 = 0x112ec4710;
  func_0x0001000285a8(0x112ec4710,&UNK_10dae47e8);
  puVar4 = auStack_90;
  func_0x000100075034(&uStack_68,FUN_102853f84,puVar4,uVar1);
  func_0x000107c61574(uVar6);
  if (uStack_68 != 0) {
    uVar2 = uStack_68;
    func_0x000107c3d458();
    func_0x000107c61180();
    if (uVar2 != 0) {
      if ((*(long *)(uVar2 + _DAT_1138152f0) == 0) ||
         ((*(byte *)(*(long *)(uVar2 + _DAT_1138152f0) + _DAT_11308ef18) & 1) == 0)) {
        func_0x000107c61170(uStack_68);
        uStack_68 = uVar2;
      }
      else {
        uVar7 = ((ulong *)(uVar2 + _DAT_11308f138))[1];
        if (uVar7 == 0) {
          func_0x000107c61170();
          func_0x000107c61170(uStack_68);
          goto LAB_102853984;
        }
        uVar5 = *(ulong *)(uVar2 + _DAT_11308f138);
        uVar3 = uVar5 & 0xffffffffffff;
        if ((uVar7 & 0x2000000000000000) != 0) {
          uVar3 = uVar7 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          puVar9 = (undefined1 *)((ulong *)(uVar2 + _DAT_11308f140))[1];
          if (puVar9 == (undefined1 *)0x0) {
            func_0x000107c61434(uVar7);
            uVar3 = uStack_68;
            func_0x000107c51f70();
            func_0x000107c61180();
            if (uVar3 == 0) {
              func_0x000107c6142c(uVar7);
              goto LAB_10285394c;
            }
            uVar10 = uVar3;
            func_0x000107c5faec();
            func_0x000107c61170(uVar3);
          }
          else {
            uVar10 = *(ulong *)(uVar2 + _DAT_11308f140);
            func_0x000107c61434(puVar9);
            func_0x000107c61434(uVar7);
            puVar4 = puVar9;
          }
          func_0x000107c61170(uStack_68);
          uVar3 = uVar10 & 0xffffffffffff;
          if (((ulong)puVar4 & 0x2000000000000000) != 0) {
            uVar3 = (ulong)puVar4 >> 0x38 & 0xf;
          }
          if (uVar3 != 0) {
            uVar3 = *(ulong *)(uVar2 + _DAT_11308f148);
            uVar12 = ((ulong *)(uVar2 + _DAT_11308f148))[1];
            uVar15 = *(ulong *)(uVar2 + _DAT_11308f130);
            uVar13 = ((ulong *)(uVar2 + _DAT_11308f130))[1];
            uVar8 = *(ulong *)(uVar2 + _DAT_113815200);
            uVar16 = *(ulong *)(uVar2 + _DAT_11308f158);
            uVar14 = ((ulong *)(uVar2 + _DAT_11308f158))[1];
            uVar11 = *(ulong *)(uVar2 + _DAT_11308f128);
            func_0x000107c61434(uVar14);
            func_0x000107c61434(uVar12);
            func_0x000107c61434(uVar13);
            func_0x000107c61170(uVar2);
            goto LAB_102853988;
          }
          func_0x000107c61170();
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(puVar4);
          goto LAB_102853984;
        }
LAB_10285394c:
        func_0x000107c61170();
      }
    }
    func_0x000107c61170(uStack_68);
  }
LAB_102853984:
  uVar12 = 0;
  uVar8 = 0;
  uVar3 = 0;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  puVar4 = (undefined1 *)0x0;
  uVar10 = 0;
  uVar5 = 0;
  uVar7 = 0;
  uVar11 = 0;
LAB_102853988:
  *param_1 = uVar5;
  param_1[1] = uVar7;
  param_1[2] = uVar10;
  param_1[3] = (ulong)puVar4;
  param_1[4] = uVar3;
  param_1[5] = uVar12;
  param_1[6] = uVar15;
  param_1[7] = uVar13;
  param_1[8] = uVar16;
  param_1[9] = uVar14;
  param_1[10] = uVar8;
  param_1[0xb] = uVar11;
  return;
}



/* Entry: 1028539c0; end: 102853a53;  */

void FUN_1028539c0(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  if (((param_4 == 0) || (param_2[1] == 0)) ||
     ((uVar1 = *param_2, uVar1 != param_3 || param_2[1] != param_4 &&
      (func_0x000107c605b8(), (uVar1 & 1) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2[2];
    if (uVar1 != 0) {
      func_0x000107c3f334();
      func_0x000107c61180();
    }
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102853a54; end: 102853c03;  */

void FUN_102853a54(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1a0 [96];
  undefined8 uStack_140;
  long lStack_138;
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
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
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
  
  uVar1 = *param_5;
  lVar7 = param_5[1];
  uVar2 = param_5[2];
  uVar8 = param_5[3];
  uVar3 = param_5[4];
  uVar9 = param_5[5];
  uVar4 = param_5[6];
  uVar10 = param_5[7];
  uVar5 = param_5[8];
  uVar11 = param_5[9];
  uVar6 = param_5[10];
  uVar12 = param_5[0xb];
  func_0x000107c61428(param_2 + 0x10,auStack_e0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1028536c0(&uStack_c8,param_3,param_4);
    func_0x000107c61574(param_2);
    if (lStack_c0 != 0) goto LAB_102853bcc;
  }
  if (lVar7 == 0) {
    uStack_c8 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_c0 = -0x2000000000000000;
    uStack_70 = 10;
    uStack_78 = 0x17;
    uStack_b0 = 0xe000000000000000;
    uStack_90 = 0xe000000000000000;
  }
  else {
    uStack_140 = uVar1;
    lStack_138 = lVar7;
    uStack_130 = uVar2;
    uStack_128 = uVar8;
    uStack_120 = uVar3;
    uStack_118 = uVar9;
    uStack_110 = uVar4;
    uStack_108 = uVar10;
    uStack_100 = uVar5;
    uStack_f8 = uVar11;
    uStack_f0 = uVar6;
    uStack_e8 = uVar12;
    FUN_102853f50(&uStack_140,auStack_1a0);
    uStack_b0 = uVar8;
    uStack_78 = uVar6;
    uStack_90 = uVar10;
    lStack_c0 = lVar7;
    uStack_c8 = uVar1;
    uStack_b8 = uVar2;
    uStack_a8 = uVar3;
    uStack_70 = uVar12;
    uStack_a0 = uVar9;
    uStack_98 = uVar4;
    uStack_88 = uVar5;
    uStack_80 = uVar11;
  }
LAB_102853bcc:
  *param_1 = uStack_c8;
  param_1[1] = lStack_c0;
  param_1[2] = uStack_b8;
  param_1[3] = uStack_b0;
  param_1[4] = uStack_a8;
  param_1[5] = uStack_a0;
  param_1[6] = uStack_98;
  param_1[7] = uStack_90;
  param_1[8] = uStack_88;
  param_1[9] = uStack_80;
  param_1[10] = uStack_78;
  param_1[0xb] = uStack_70;
  return;
}



/* Entry: 102853c04; end: 102853c57;  */

void FUN_102853c04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102853c58; end: 102853cc3;  */

long FUN_102853c58(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102853cc4; end: 102853d47;  */

undefined8 * FUN_102853cc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102853d48; end: 102853e23;  */

undefined8 * FUN_102853d48(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 102853e24; end: 102853e9f;  */

undefined8 * FUN_102853e24(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 102853ea0; end: 102853f4f;  */

int FUN_102853ea0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102853f50; end: 102853f83;  */

undefined8 FUN_102853f50(undefined8 param_1,undefined8 param_2)

{
  FUN_102853cc4(param_2,param_1,&UNK_110557d90);
  return param_2;
}



/* Entry: 102853f84; end: 102853f9b;  */

void FUN_102853f84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028539c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102853f9c; end: 102853fbb; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin actionMenuPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102853f9c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102853fbc; end: 102853fcf; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setActionMenuPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102853fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4718,param_3);
  return;
}



/* Entry: 102853fd0; end: 102853fef; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin chatPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102853fd0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102853ff0; end: 102854003; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setChatPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102853ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4720,param_3);
  return;
}



/* Entry: 102854004; end: 102854023; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102854004(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4728);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102854024; end: 102854037; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102854024(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4728,param_3);
  return;
}



/* Entry: 102854038; end: 102854057; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin multiDirectionUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102854038(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102854058; end: 10285406b; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setMultiDirectionUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102854058(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4730,param_3);
  return;
}



/* Entry: 10285406c; end: 10285407b; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285406c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4740));
  return;
}



/* Entry: 10285407c; end: 1028540e7; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Possible PIC construction at 0x0001028540c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028540d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028540c4) */
/* WARNING: Removing unreachable block (ram,0x0001028540d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285407c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4740);
  *(undefined8 *)(param_1 + _DAT_112ec4740) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028540e8; end: 10285435b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028540e8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec4738);
  *(undefined **)(unaff_x20 + _DAT_112ec4738) = puVar1;
  func_0x000107c61170(uVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4740);
  if (lVar2 != 0) {
    func_0x000107c421ac();
    func_0x000107c61180();
    puVar1 = &UNK_110557fb0;
    func_0x000107c613fc(&UNK_110557fb0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    uStack_50 = 0x1028573e4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x102857454;
    puStack_58 = &UNK_110558180;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar4 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar4);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10285435c; end: 10285436b; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285435c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4748));
  return;
}



/* Entry: 10285436c; end: 1028543ab; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setActiveConversationIdObservable:] */

void FUN_10285436c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028543ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028543ac; end: 1028544eb;  */

/* WARNING: Possible PIC construction at 0x0001028543e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102854490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028544ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102854494) */
/* WARNING: Removing unreachable block (ram,0x0001028543e4) */
/* WARNING: Removing unreachable block (ram,0x0001028544d0) */
/* WARNING: Removing unreachable block (ram,0x0001028543ec) */
/* WARNING: Removing unreachable block (ram,0x0001028544b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028543ac(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4748);
  *(undefined8 *)(unaff_x20 + _DAT_112ec4748) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028544ec; end: 10285457f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028544ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec4758);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x000100075034(FUN_102854580,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102854580; end: 1028545b7;  */

void FUN_102854580(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  *param_1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 1028545b8; end: 102854603;  */

void FUN_1028545b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102854604; end: 102854623; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102854604(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102854624; end: 102854637; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102854624(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4750,param_3);
  return;
}



/* Entry: 102854638; end: 102855233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102854638(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  long lVar21;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *apuStack_118 [3];
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
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
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec4760);
  uVar7 = param_2;
  func_0x000107c4ce08(uVar2,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar3 == 0) {
LAB_102854810:
    func_0x000107c615e8(uVar2);
    return 0;
  }
  uVar4 = uVar3;
  func_0x000107c404a8();
  if ((int)uVar4 != 0x18) {
    func_0x000107c61170(uVar3);
    goto LAB_102854810;
  }
  uVar4 = uVar3;
  func_0x000107c3ec0c();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d18);
    (*pcVar1)();
  }
  uVar5 = uVar4;
  func_0x000107c44af4();
  func_0x000107c61170(uVar4);
  if ((int)uVar5 != 0) {
    uVar4 = uVar3;
    func_0x000107c3ec0c();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d20);
      (*pcVar1)();
    }
    uVar5 = uVar4;
    func_0x000107c5a944();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d24);
      (*pcVar1)();
    }
    uVar4 = uVar5;
    func_0x000107c449fc();
    func_0x000107c61170(uVar5);
    if ((int)uVar4 != 0) {
      uVar4 = uVar3;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d28);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c5a944();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d2c);
        (*pcVar1)();
      }
      uVar4 = uVar5;
      func_0x000107c4e0b8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c5cb4c();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 != 0) {
          uVar4 = uVar5;
          func_0x000107c5faec(uVar5);
          func_0x000107c61170(uVar5);
          uVar5 = uVar3;
          func_0x000107c3ec0c();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar10 = uVar5;
            func_0x000107c3ec9c();
            func_0x000107c61170(uVar5);
            func_0x000102854d30(param_1,uVar4,uVar7,uVar10);
            func_0x000107c615e8(uVar2);
            func_0x000107c61170(uVar3);
            func_0x000107c6142c(uVar7);
            return param_1;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d30);
          (*pcVar1)();
        }
      }
    }
  }
  uVar4 = uVar2;
  func_0x000107c4cde0(uVar2);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ab388;
  func_0x000107c610f8();
  func_0x000107c477a0();
  func_0x000107c61170(uVar4);
  uVar4 = uVar2;
  FUN_102855234();
  uStack_c8 = param_1;
  func_0x000100087c34(&uStack_c8);
  uVar7 = 0;
  FUN_10285730c(0,0x112d4e4a8,&PTR__OBJC_CLASS___NSData_1126ae778);
  pcVar1 = FUN_102855394;
  func_0x0001000d5158(FUN_102855394,0,uVar7);
  pcVar8 = pcVar1;
  FUN_102857298();
  func_0x0001000c2068();
  func_0x000107c61574();
  func_0x0001004575f0();
  pcVar9 = pcVar1;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(pcVar1);
  uVar5 = uVar2;
  func_0x000102856248();
  uVar10 = uVar2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  uVar10 = uVar3;
  func_0x000107c3ec0c();
  func_0x000107c61180();
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102854d1c);
    (*pcVar1)();
  }
  uVar12 = uVar10;
  func_0x000107c3ec9c();
  func_0x000107c61170(uVar10);
  puVar13 = PTR_PTR_1126ab390;
  func_0x000107c610f8();
  func_0x000107c46078();
  lVar21 = *(long *)(unaff_x20 + _DAT_112ec4788);
  if (lVar21 != 0) {
    uVar10 = unaff_x20 + _DAT_112ec4730;
    func_0x000107c61618();
    uVar14 = uVar10;
    (**(code **)(lVar21 + 0x10))();
    if ((uVar14 & 1) == 0) {
LAB_102854af0:
      func_0x000107c615e8(uVar10);
    }
    else if (uVar10 != 0) {
      func_0x000107c615f0(uVar10);
      if ((uVar5 & 1) == 0) {
        FUN_1028536c0(&uStack_c8,uVar11,param_2);
        if (lStack_c0 == 0) {
          func_0x000107c615e8(uVar10);
          goto LAB_102854af0;
        }
        uStack_160 = uStack_70;
        uStack_170 = uStack_80;
        uStack_168 = uStack_78;
        uStack_178 = uStack_88;
        uStack_188 = uStack_98;
        uStack_180 = uStack_90;
        uStack_198 = uStack_a8;
        uStack_190 = uStack_a0;
        uStack_1a8 = uStack_b8;
        uStack_1a0 = uStack_b0;
        lStack_1b8 = lStack_c0;
        uStack_1b0 = uStack_c8;
      }
      else {
        uStack_160 = 0;
        lStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
      }
      puVar15 = &UNK_110558028;
      func_0x000107c613fc(&UNK_110558028,0x18,7);
      func_0x000107c61644(puVar15 + 0x10,lVar21);
      puVar16 = &UNK_110558050;
      func_0x000107c613fc(&UNK_110558050,0x88,7);
      *(undefined **)(puVar16 + 0x10) = puVar15;
      *(ulong *)(puVar16 + 0x18) = uVar11;
      *(undefined8 *)(puVar16 + 0x20) = param_2;
      *(undefined8 *)(puVar16 + 0x28) = uStack_1b0;
      *(long *)(puVar16 + 0x30) = lStack_1b8;
      *(undefined8 *)(puVar16 + 0x38) = uStack_1a8;
      *(undefined8 *)(puVar16 + 0x40) = uStack_1a0;
      *(undefined8 *)(puVar16 + 0x48) = uStack_198;
      *(undefined8 *)(puVar16 + 0x50) = uStack_190;
      *(undefined8 *)(puVar16 + 0x58) = uStack_188;
      *(undefined8 *)(puVar16 + 0x60) = uStack_180;
      *(undefined8 *)(puVar16 + 0x68) = uStack_178;
      *(undefined8 *)(puVar16 + 0x70) = uStack_170;
      *(undefined8 *)(puVar16 + 0x78) = uStack_168;
      *(undefined8 *)(puVar16 + 0x80) = uStack_160;
      pcVar1 = *(code **)(lVar21 + 0x20);
      func_0x000107c61434(param_2);
      puVar15 = (undefined *)0x1028572f4;
      (*pcVar1)(0x1028572f4,puVar16,uVar11,param_2,uVar12 & 0xffffffff,uVar10);
      func_0x000107c61574(puVar16);
      func_0x000107c615ec(uVar10,2);
      puStack_f8 = puVar15;
      goto LAB_102854b10;
    }
  }
  func_0x000100083b20(&puStack_f8);
LAB_102854b10:
  puVar15 = puStack_f8;
  func_0x000107c5a6a4(puVar13);
  func_0x000107c615e8(puVar15);
  FUN_102855bac();
  func_0x000107c53e8c(puVar13);
  func_0x000107c61170(pcVar9);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(puVar15);
  puVar15 = &UNK_110557fb0;
  func_0x000107c613fc(&UNK_110557fb0,0x18,7);
  func_0x000107c61614(puVar15 + 0x10);
  puVar16 = &UNK_110557fd8;
  func_0x000107c613fc(&UNK_110557fd8,0x20,7);
  *(undefined **)(puVar16 + 0x10) = puVar15;
  *(undefined8 *)(puVar16 + 0x18) = param_1;
  pcStack_d8 = FUN_1028572ec;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0x42000000;
  pcStack_e8 = FUN_10285584c;
  puStack_e0 = &UNK_110557ff0;
  ppuVar17 = &puStack_f8;
  puStack_d0 = puVar16;
  func_0x000107c60bc4(ppuVar17);
  puVar15 = puStack_d0;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar15);
  func_0x000107c56e90(puVar13);
  func_0x000107c60bd0(ppuVar17);
  uVar7 = 0x112ec47d8;
  uVar18 = 0;
  FUN_10285730c(0,0x112ec47d8,&PTR_PTR_1126ab398);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar19 = uVar18;
  func_0x000107c5faec();
  func_0x000107c61170(uVar18);
  uVar18 = 0;
  FUN_10285730c(0,0x112ec47e0,&PTR_PTR_1126ab388);
  uVar20 = 0;
  puStack_f8 = puVar6;
  puStack_e0 = (undefined *)uVar18;
  FUN_10285730c(0,0x112ec47e8,&PTR_PTR_1126ab390);
  apuStack_118[0] = puVar13;
  uStack_100 = uVar20;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar13);
  FUN_1027efbc4(uVar19,uVar7,&puStack_f8,apuStack_118);
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar8);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  return uVar19;
}



/* Entry: 102855234; end: 102855393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102855234(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong auStack_70 [2];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112ec4758;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec4758);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(auStack_70);
  func_0x000107c61574(uVar5);
  lVar2 = param_1;
  func_0x000107c40258();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  if (*(long *)(auStack_70[0] + 0x10) != 0) {
    func_0x000107c61434(auStack_70[0]);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(auStack_70[0] + 0x38) + lVar3 * 8);
      func_0x000107c6157c(uVar5);
      func_0x000107c6142c(param_2);
      func_0x000107c61430(auStack_70[0],2);
      return uVar5;
    }
    func_0x000107c6142c(param_2);
    param_2 = auStack_70[0];
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(auStack_70[0]);
  func_0x0001000285a8(0x112ec26e8,&UNK_10dae0a60);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  lStack_60 = param_1;
  uStack_58 = uVar5;
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1028573c4,auStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar6);
  return uVar5;
}



/* Entry: 102855394; end: 10285542f;  */

void FUN_102855394(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar3 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
    lVar1 = lVar3;
    func_0x000107c5ee20(lVar3,param_3);
    func_0x00010006c090(lVar3,param_3);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102855430; end: 10285584b;  */

void FUN_102855430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  pcVar1 = "valdiContextParams(for:conversationParticipants:)";
  func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
  func_0x000107c61180();
  puVar2 = &UNK_110557fb0;
  func_0x000107c613fc(&UNK_110557fb0,0x18,7);
  func_0x000107c61428(param_7 + 0x10,auStack_78,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61618(param_7);
  func_0x000107c61614(puVar2 + 0x10,param_7);
  func_0x000107c61170(param_7);
  puVar3 = &UNK_110558118;
  func_0x000107c613fc(&UNK_110558118,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined8 *)(puVar3 + 0x40) = param_5;
  *(undefined8 *)(puVar3 + 0x48) = param_6;
  uStack_88 = 0x1028573b0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110558130;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_80;
  func_0x000107c61174(param_8);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10285584c; end: 102855913;  */

void FUN_10285584c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_2);
  uVar5 = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c5faec(param_3);
  uVar3 = uVar5;
  func_0x000107c5faec(param_4);
  (*pcVar1)(param_2,uVar4,param_3,uVar5,param_4,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102855914; end: 10285598b; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102855914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102854638(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285598c; end: 1028559a3; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028559a0) */

void FUN_10285598c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028559a4; end: 1028559ab; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin pluginType] */

undefined8 FUN_1028559a4(void)

{
  return 0;
}



/* Entry: 1028559ac; end: 1028559bb; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin dismissPresentedView] */

void FUN_1028559ac(void)

{
  return;
}



/* Entry: 1028559bc; end: 102855aeb;  */

void FUN_1028559bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  pcVar1 = "contextParamsForSharedResponse(message:originalSenderUserId:browserType:)";
  func_0x0001000c10c0("contextParamsForSharedResponse(message:originalSenderUserId:browserType:)");
  func_0x000107c61180();
  puVar2 = &UNK_110557fb0;
  func_0x000107c613fc(&UNK_110557fb0,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_1105580c8;
  func_0x000107c613fc(&UNK_1105580c8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_68 = FUN_1028573a4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1105580e0;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102855aec; end: 102855bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102855aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ec4720;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      func_0x000104522c9c(0);
      func_0x00010452281c(param_2,param_3,uVar2);
      func_0x000107c5395c(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102855bac; end: 102855cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102855bac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  if (lStack_48 != 0) {
    lVar1 = unaff_x20 + _DAT_112ec4750;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c615e8(lStack_48);
    }
    else {
      lVar2 = lStack_48;
      func_0x000107c409cc(lStack_48,param_2,lVar1);
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c508d0();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c40974();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        lVar3 = lVar4;
        func_0x000107c41408(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_48);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar4);
        return lVar3;
      }
      func_0x000107c615e8(lStack_48);
      func_0x000107c61170(lVar1);
    }
  }
  return 0;
}



/* Entry: 102855cc0; end: 102855dbf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102855cc0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (param_2 == 0) {
    uVar4 = 0;
    uVar5 = 0xf000000000000000;
  }
  else {
    uVar2 = param_2;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    uVar4 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = (uint)(uVar1 >> 0x3e);
    if (uVar3 == 1) {
      uVar2 = uVar1 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102855dc0; end: 102855e2f;  */

void FUN_102855dc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  iVar3 = (int)&uStack_50;
  func_0x0001000bb420(param_1,auStack_40);
  func_0x000107c6147c(&uStack_50,auStack_40,PTR___sypN_11034f1a8 + 8,
                      PTR___s10Foundation4DataVN_110350ae0,6);
  if (iVar3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0xf000000000000000;
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_3 = uStack_50;
  param_3[1] = uStack_48;
  func_0x0001000b44c0(uVar1,uVar2);
  return;
}



/* Entry: 102855e30; end: 102855ed7;  */

void FUN_102855e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2;
  func_0x000107c40258(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  func_0x000107c6157c(param_3);
  uVar2 = *param_1;
  func_0x000107c61558(uVar2);
  uVar4 = *param_1;
  FUN_1027f6fa0(param_3,uVar1,uVar3,uVar2);
  func_0x000107c6142c(uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 102855ed8; end: 102855f37; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin init] */

void FUN_102855ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BotResponseMessagePlugin.BotResponseMessagePlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102855f04);
  (*pcVar1)();
}



/* Entry: 102855f38; end: 10285604f; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102855f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102855fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102856014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102855fb8) */
/* WARNING: Removing unreachable block (ram,0x000102855f98) */
/* WARNING: Removing unreachable block (ram,0x000102856018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102855f38(long param_1)

{
  func_0x000100d0ab30(param_1 + _DAT_112ec4718);
  func_0x000100d0ab30(param_1 + _DAT_112ec4720);
  func_0x000100d0ab30(param_1 + _DAT_112ec4728);
  func_0x000100d0ab30(param_1 + _DAT_112ec4730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4738));
  return;
}



/* Entry: 102856050; end: 10285606f;  */

void FUN_102856050(void)

{
  func_0x000107c61168(&PTR_PTR_1128663b0);
  return;
}



/* Entry: 102856070; end: 1028560e3; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_102856070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102856668(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1028560e4; end: 1028560eb; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin canForwardMessageFromCTA:] */

undefined8 FUN_1028560e4(void)

{
  return 0;
}



/* Entry: 1028560ec; end: 102856183; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_1028560ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028567e0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102856184; end: 102856347; -[_TtC24BotResponseMessagePlugin24BotResponseMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x00010285621c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285622c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102856220) */
/* WARNING: Removing unreachable block (ram,0x000102856230) */

void FUN_102856184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102856ac8(param_3,param_4,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102856348; end: 102856667;  */

undefined1  [16] FUN_102856348(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  puVar6 = &UNK_110557e48;
  func_0x000107c613fc(&UNK_110557e48,0x20,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_80;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  puVar7 = &UNK_110557e70;
  func_0x000107c613fc(&UNK_110557e70,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x102857220;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_102857228;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_10006eb60;
  puStack_98 = &UNK_110557e88;
  ppuVar8 = &puStack_b0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_88;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110557ec0;
  func_0x000107c613fc(&UNK_110557ec0,0x20,7);
  *(undefined8 **)(puVar9 + 0x10) = &uStack_80;
  *(undefined8 *)(puVar9 + 0x18) = param_2;
  puVar10 = &UNK_110557ee8;
  func_0x000107c613fc(&UNK_110557ee8,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_102857248;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_90 = FUN_102857250;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1011a7a34;
  puStack_98 = &UNK_110557f00;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar12 = puStack_88;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_110557f38;
  func_0x000107c613fc(&UNK_110557f38,0x18,7);
  *(undefined8 **)(puVar12 + 0x10) = &uStack_80;
  puVar13 = &UNK_110557f60;
  func_0x000107c613fc(&UNK_110557f60,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_102857270;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_90 = FUN_102857278;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1011a64f8;
  puStack_98 = &UNK_110557f78;
  ppuVar14 = &puStack_b0;
  puStack_88 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar2 = puStack_88;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar2);
  func_0x000107c4c640(param_1);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  auVar1._8_8_ = uStack_78;
  auVar1._0_8_ = uStack_80;
  func_0x000100de78a0(uStack_80,uStack_78);
  func_0x0001000b44c0(uVar3,uVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x56,0x103,0x30,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102856660);
    (*pcVar5)();
  }
  puVar6 = puVar10;
  func_0x000107c61544(puVar10,"",0x56,0x105,0x14,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = puVar13;
    func_0x000107c61544(puVar13,"",0x56,0x107,0x17,1);
    func_0x000107c61574(puVar13);
    if (((ulong)puVar6 & 1) == 0) {
      return auVar1;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102856668);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102856664);
  (*pcVar5)();
}



/* Entry: 102856668; end: 1028567df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102856668(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  
  ppuVar2 = *(undefined ***)(unaff_x20 + _DAT_112ec4760);
  func_0x000107c4ce08(ppuVar2,param_2,param_1);
  func_0x000107c61180();
  ppuVar4 = ppuVar2;
  func_0x000107c4cde0();
  func_0x000107c61180();
  ppuVar3 = ppuVar4;
  func_0x000107c5faec();
  lVar6 = param_2;
  func_0x000107c61170(ppuVar4);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e12b58;
  func_0x000107c5faec();
  if (ppuVar3 == ppuVar4 && param_2 == lVar6) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar6);
  }
  else {
    func_0x000107c605b8(ppuVar3,param_2,ppuVar4,lVar6,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar6);
    if (((ulong)ppuVar3 & 1) == 0) goto LAB_1028567bc;
  }
  ppuVar4 = ppuVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar3 = ppuVar4;
    func_0x000107c404a8();
    if ((int)ppuVar3 == 0x18) {
      ppuVar3 = ppuVar4;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028567dc);
        (*pcVar1)();
      }
      ppuVar5 = ppuVar3;
      func_0x000107c5bd00();
      func_0x000107c61170(ppuVar3);
      if ((int)ppuVar5 == 4) {
        ppuVar3 = ppuVar4;
        func_0x000107c3ec0c();
        func_0x000107c61180();
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar5 = ppuVar3;
          func_0x000107c44af4();
          func_0x000107c61170(ppuVar3);
          func_0x000107c615e8(ppuVar2);
          func_0x000107c61170(ppuVar4);
          return (uint)ppuVar5 ^ 1;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028567e0);
        (*pcVar1)();
      }
    }
    func_0x000107c61170(ppuVar4);
  }
LAB_1028567bc:
  func_0x000107c615e8(ppuVar2);
  return 0;
}



/* Entry: 1028567e0; end: 102856a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028567e0(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *apuStack_70 [3];
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec4760);
  func_0x000107c4ce08(uVar3,param_2,param_1);
  func_0x000107c61180();
  FUN_102856348(param_2);
  uVar1 = 0;
  if (param_1 >> 0x3c < 0xf) {
    uVar1 = param_2;
  }
  uVar2 = 0xc000000000000000;
  if (param_1 >> 0x3c < 0xf) {
    uVar2 = param_1;
  }
  uVar4 = uVar3;
  func_0x000107c4cde0(uVar3);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ab378;
  func_0x000107c610f8();
  func_0x00010006c00c(uVar1,uVar2);
  uVar6 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x000107c4608c();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x00010006c090(uVar1,uVar2);
  uVar4 = 0x112ec47c0;
  uVar7 = 0;
  FUN_10285730c(0,0x112ec47c0,&PTR_PTR_1126ab380);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar7 = 0;
  FUN_10285730c(0,0x112ec47c8,&PTR_PTR_1126ab378);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  apuStack_70[0] = puVar5;
  uStack_58 = uVar7;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  func_0x000107c61174(puVar5);
  FUN_1027efbc4(uVar6,uVar4,apuStack_70,&uStack_90);
  puVar8 = PTR_PTR_1126c6898;
  func_0x000107c61168(PTR_PTR_1126c6898);
  func_0x000107c3fff0();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126c68a0;
  func_0x000107c61168(PTR_PTR_1126c68a0);
  func_0x000107c43b80();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126c68a8;
  func_0x000107c610f8(PTR_PTR_1126c68a8);
  func_0x000107c480c8();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c615e8(uVar3);
  return puVar10;
}



/* Entry: 102856a08; end: 102856ac7;  */

/* WARNING: Possible PIC construction at 0x0001028570ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285717c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028570b0) */
/* WARNING: Removing unreachable block (ram,0x000102857180) */
/* WARNING: Removing unreachable block (ram,0x000102856bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102856a08(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  long extraout_x8;
  undefined *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar13 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  puStack_40 = (undefined *)0x0;
  lVar12 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  puVar2 = puStack_40;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar3 = 0;
  uStack_e8 = param_5;
  puStack_e0 = (undefined *)ppuVar13;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar4 = &UNK_110557dd0;
  func_0x000107c613fc(&UNK_110557dd0,0x18,7);
  *(long *)(puVar4 + 0x10) = param_6;
  func_0x000107c60bc4(param_6);
  puVar11 = puVar2;
  FUN_102856348();
  if ((ulong)puVar11 >> 0x3c < 0xf) {
    lStack_f0 = lVar12;
    func_0x000107c610f8(PTR_PTR_1126ba668);
    func_0x00010006c00c(param_2,puVar11);
    uVar5 = param_2;
    FUN_102856a08(param_2,puVar11);
    puVar8 = puVar11;
    func_0x0001000b44c0(param_2);
    if (uVar5 != 0) {
      uStack_f8 = uVar5;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (uVar5 == 0) {
        func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571b0);
        (*pcVar1)();
      }
      uVar6 = uVar5;
      func_0x000107c44af4();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) == 0) {
        puVar7 = PTR_PTR_1126bc778;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puStack_100 = puVar7;
        func_0x000107c51f08(puVar2);
        func_0x000107c61180();
        puVar7 = puVar2;
        func_0x000107c44fc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        puVar2 = puVar7;
        func_0x000107c5ee30(puVar7);
        func_0x000107c61170(puVar7);
        puVar7 = puVar2;
        func_0x000107c5ee20(puVar2,puVar8);
        func_0x00010006c090(puVar2);
        puVar2 = puStack_100;
        func_0x000107c55218(puStack_100);
        func_0x000107c61170(puVar7);
        puVar7 = PTR_PTR_1126ab370;
        func_0x000107c610f8(PTR_PTR_1126ab370);
        func_0x000107c453e4();
        func_0x000107c570c0();
        uVar5 = uStack_f8;
        func_0x000107c3ec0c();
        func_0x000107c61180();
        if (uVar5 == 0) {
          func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571c8);
          (*pcVar1)();
        }
        func_0x000107c59064();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar5);
      }
      uVar5 = uStack_f8;
      uVar6 = uStack_f8;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (uVar6 == 0) {
        func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571bc);
        (*pcVar1)();
      }
      func_0x000107c59850();
      func_0x000107c61170(uVar6);
      uVar6 = uVar5;
      func_0x000107c41214();
      func_0x000107c61180();
      if (uVar6 == 0) {
        (**(code **)(param_6 + 0x10))(param_6,0);
        func_0x000107c61170(uVar5);
        func_0x0001000b44c0(param_2,puVar11);
      }
      else {
        uVar5 = uVar6;
        func_0x000107c5ee30();
        uStack_108 = uVar5;
        puStack_100 = puVar8;
        func_0x000107c61170(uVar6);
        puVar2 = PTR_PTR_1126b1a40;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar7 = puVar2;
        func_0x000107c5e7ec();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        puVar2 = puVar7;
        func_0x000107c5e4a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar7 = puVar2;
        func_0x000107c5e5cc();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x00010011df08();
        func_0x000107c61180();
        if (puVar2 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        puVar8 = puVar7;
        func_0x000107c5e870();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar2);
        uVar14 = *(undefined8 *)(lStack_f0 + _DAT_11307fc80);
        uVar9 = 0;
        func_0x0001044c309c(0);
        func_0x000107c5fc48(uVar14,uVar9);
        if ((long)puStack_e0 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571a4);
          (*pcVar1)();
        }
        uVar9 = uVar14;
        func_0x0001086063d8();
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        puVar2 = puVar8;
        func_0x000107c5e500();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar9);
        func_0x000107c5eea0(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ee70();
        (**(code **)(lVar15 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
        puVar8 = puVar2;
        func_0x000107c5e5b0();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(uVar9);
        puVar2 = puVar8;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = PTR_PTR_1126b28f8;
        func_0x000107c610f8(PTR_PTR_1126b28f8);
        func_0x000107c477a4();
        puVar7 = puVar8;
        puStack_e0 = puVar2;
        func_0x000107c5e42c();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = puVar7;
        func_0x000107c3ecc8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar7 = PTR_PTR_1126be6d0;
        func_0x000107c610f8(PTR_PTR_1126be6d0);
        func_0x000107c61174(puVar8);
        puVar2 = puStack_100;
        uVar5 = uStack_108;
        func_0x00010006c00c(uStack_108,puStack_100);
        uVar6 = uVar5;
        func_0x000107c5ee20(uVar5,puVar2);
        func_0x000107c46080(puVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar6);
        func_0x00010006c090(uVar5,puVar2);
        puVar10 = puVar7;
        func_0x000107c3ecc8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000100083b20(&puStack_d8);
        if (puStack_d8 == (undefined *)0x0) {
          (**(code **)(param_6 + 0x10))(param_6,0);
          func_0x000107c61170(puStack_e0);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar10);
          func_0x00010006c090(uVar5,puVar2);
          func_0x000107c61170(uStack_f8);
          func_0x0001000b44c0(param_2,puVar11);
        }
        else {
          func_0x000107c5fc48(*(undefined8 *)(lStack_f0 + _DAT_11307fc78),PTR___sSSN_11034da80);
          puVar2 = &UNK_110557df8;
          func_0x000107c613fc(&UNK_110557df8,0x20,7);
          *(code **)(puVar2 + 0x10) = FUN_1028571c8;
          *(undefined **)(puVar2 + 0x18) = puVar4;
          pcStack_b8 = FUN_1028571dc;
          puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d0 = 0x42000000;
          puStack_c8 = &UNK_100f5c588;
          puStack_c0 = &UNK_110557e10;
          puStack_b0 = puVar2;
          func_0x000107c60bc4(&puStack_d8);
          puVar2 = puStack_b0;
          func_0x000107c6157c(puVar4);
          puVar4 = puVar2;
        }
      }
      goto code_r0x000107c61574;
    }
    func_0x0001000b44c0(param_2,puVar11);
  }
  (**(code **)(param_6 + 0x10))(param_6,0);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return puVar4;
}



/* Entry: 102856ac8; end: 1028571c7;  */

/* WARNING: Possible PIC construction at 0x0001028570ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285717c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028570b0) */
/* WARNING: Removing unreachable block (ram,0x000102857180) */
/* WARNING: Removing unreachable block (ram,0x000102856bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102856ac8(undefined *param_1,ulong param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar2 = 0;
  uStack_a8 = param_5;
  puStack_a0 = param_4;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar3 = &UNK_110557dd0;
  func_0x000107c613fc(&UNK_110557dd0,0x18,7);
  *(long *)(puVar3 + 0x10) = param_6;
  func_0x000107c60bc4(param_6);
  puVar11 = param_1;
  FUN_102856348();
  if ((ulong)puVar11 >> 0x3c < 0xf) {
    lStack_b0 = param_3;
    func_0x000107c610f8(PTR_PTR_1126ba668);
    func_0x00010006c00c(param_2,puVar11);
    uVar4 = param_2;
    FUN_102856a08(param_2,puVar11);
    puVar9 = puVar11;
    func_0x0001000b44c0(param_2);
    if (uVar4 != 0) {
      uStack_b8 = uVar4;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (uVar4 == 0) {
        func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571b0);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c44af4();
      func_0x000107c61170(uVar4);
      if ((uVar5 & 1) == 0) {
        puVar6 = PTR_PTR_1126bc778;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puStack_c0 = puVar6;
        func_0x000107c51f08(param_1);
        func_0x000107c61180();
        puVar6 = param_1;
        func_0x000107c44fc8();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        puVar7 = puVar6;
        func_0x000107c5ee30(puVar6);
        func_0x000107c61170(puVar6);
        puVar8 = puVar7;
        func_0x000107c5ee20(puVar7,puVar9);
        func_0x00010006c090(puVar7);
        puVar6 = puStack_c0;
        func_0x000107c55218(puStack_c0);
        func_0x000107c61170(puVar8);
        puVar7 = PTR_PTR_1126ab370;
        func_0x000107c610f8(PTR_PTR_1126ab370);
        func_0x000107c453e4();
        func_0x000107c570c0();
        uVar4 = uStack_b8;
        func_0x000107c3ec0c();
        func_0x000107c61180();
        if (uVar4 == 0) {
          func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571c8);
          (*pcVar1)();
        }
        func_0x000107c59064();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar4);
      }
      uVar4 = uStack_b8;
      uVar5 = uStack_b8;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (uVar5 == 0) {
        func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571bc);
        (*pcVar1)();
      }
      func_0x000107c59850();
      func_0x000107c61170(uVar5);
      uVar5 = uVar4;
      func_0x000107c41214();
      func_0x000107c61180();
      if (uVar5 == 0) {
        (**(code **)(param_6 + 0x10))(param_6,0);
        func_0x000107c61170(uVar4);
        func_0x0001000b44c0(param_2,puVar11);
      }
      else {
        uVar4 = uVar5;
        func_0x000107c5ee30();
        uStack_c8 = uVar4;
        puStack_c0 = puVar9;
        func_0x000107c61170(uVar5);
        puVar6 = PTR_PTR_1126b1a40;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar7 = puVar6;
        func_0x000107c5e7ec();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        puVar6 = puVar7;
        func_0x000107c5e4a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar7 = puVar6;
        func_0x000107c5e5cc();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x00010011df08();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar9);
        }
        puVar9 = puVar7;
        func_0x000107c5e870();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        uVar12 = *(undefined8 *)(lStack_b0 + _DAT_11307fc80);
        uVar10 = 0;
        func_0x0001044c309c(0);
        func_0x000107c5fc48(uVar12,uVar10);
        if ((long)puStack_a0 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028571a4);
          (*pcVar1)();
        }
        uVar10 = uVar12;
        func_0x0001086063d8();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        puVar6 = puVar9;
        func_0x000107c5e500();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c5eea0(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ee70();
        (**(code **)(lVar13 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
        puVar9 = puVar6;
        func_0x000107c5e5b0();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar10);
        puVar6 = puVar9;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        puVar9 = PTR_PTR_1126b28f8;
        func_0x000107c610f8(PTR_PTR_1126b28f8);
        func_0x000107c477a4();
        puVar7 = puVar9;
        puStack_a0 = puVar6;
        func_0x000107c5e42c();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        puVar6 = puVar7;
        func_0x000107c3ecc8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar7 = PTR_PTR_1126be6d0;
        func_0x000107c610f8(PTR_PTR_1126be6d0);
        func_0x000107c61174(puVar6);
        puVar9 = puStack_c0;
        uVar4 = uStack_c8;
        func_0x00010006c00c(uStack_c8,puStack_c0);
        uVar5 = uVar4;
        func_0x000107c5ee20(uVar4,puVar9);
        func_0x000107c46080(puVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar5);
        func_0x00010006c090(uVar4,puVar9);
        puVar8 = puVar7;
        func_0x000107c3ecc8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000100083b20(&puStack_98);
        if (puStack_98 == (undefined *)0x0) {
          (**(code **)(param_6 + 0x10))(param_6,0);
          func_0x000107c61170(puStack_a0);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar8);
          func_0x00010006c090(uVar4,puVar9);
          func_0x000107c61170(uStack_b8);
          func_0x0001000b44c0(param_2,puVar11);
        }
        else {
          func_0x000107c5fc48(*(undefined8 *)(lStack_b0 + _DAT_11307fc78),PTR___sSSN_11034da80);
          puVar11 = &UNK_110557df8;
          func_0x000107c613fc(&UNK_110557df8,0x20,7);
          *(code **)(puVar11 + 0x10) = FUN_1028571c8;
          *(undefined **)(puVar11 + 0x18) = puVar3;
          pcStack_78 = FUN_1028571dc;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_100f5c588;
          puStack_80 = &UNK_110557e10;
          puStack_70 = puVar11;
          func_0x000107c60bc4(&puStack_98);
          puVar11 = puStack_70;
          func_0x000107c6157c(puVar3);
          puVar3 = puVar11;
        }
      }
      goto code_r0x000107c61574;
    }
    func_0x0001000b44c0(param_2,puVar11);
  }
  (**(code **)(param_6 + 0x10))(param_6,0);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1028571c8; end: 1028571db;  */

void FUN_1028571c8(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001028571d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1028571dc; end: 102857203;  */

void FUN_1028571dc(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 102857204; end: 102857227;  */

void FUN_102857204(long param_1,long param_2)

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



/* Entry: 102857228; end: 102857247;  */

void FUN_102857228(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102857248; end: 10285724f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102857248(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong *puVar6;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  puVar6 = puVar1;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (uVar5 == 0) {
    uVar5 = 0;
    puVar6 = (ulong *)0xf000000000000000;
  }
  else {
    uVar3 = uVar5;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar3);
  }
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = (ulong)puVar6;
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = (uint)(uVar2 >> 0x3e);
    if (uVar4 == 1) {
      uVar3 = uVar2 & 0x3fffffffffffffff;
    }
    else if (uVar4 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102857250; end: 10285726f;  */

void FUN_102857250(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102857270; end: 102857277;  */

void FUN_102857270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  iVar3 = (int)&uStack_50;
  func_0x0001000bb420(param_1,auStack_40);
  func_0x000107c6147c(&uStack_50,auStack_40,PTR___sypN_11034f1a8 + 8,
                      PTR___s10Foundation4DataVN_110350ae0,6);
  if (iVar3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0xf000000000000000;
  }
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = uStack_50;
  puVar4[1] = uStack_48;
  func_0x0001000b44c0(uVar1,uVar2);
  return;
}



/* Entry: 102857278; end: 102857297;  */

void FUN_102857278(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102857298; end: 1028572eb;  */

void FUN_102857298(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec47d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10285730c(0xff,0x112d4e4a8,&PTR__OBJC_CLASS___NSData_1126ae778);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112ec47d0 = puVar2;
  return;
}



/* Entry: 1028572ec; end: 10285730b;  */

void FUN_1028572ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = "valdiContextParams(for:conversationParticipants:)";
  func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
  func_0x000107c61180();
  puVar3 = &UNK_110557fb0;
  func_0x000107c613fc(&UNK_110557fb0,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_110558118;
  func_0x000107c613fc(&UNK_110558118,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  *(undefined8 *)(puVar5 + 0x38) = param_4;
  *(undefined8 *)(puVar5 + 0x40) = param_5;
  *(undefined8 *)(puVar5 + 0x48) = param_6;
  uStack_88 = 0x1028573b0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110558130;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_80;
  func_0x000107c61174(uVar1);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10285730c; end: 10285734b;  */

void FUN_10285730c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10285734c; end: 1028573a3;  */

void FUN_10285734c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c6142c();
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028573a4; end: 1028573c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028573a4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec4720;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = 0;
      func_0x000104522c9c(0);
      func_0x00010452281c(uVar4,uVar5,uVar3);
      func_0x000107c5395c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 1028573c4; end: 1028573db;  */

void FUN_1028573c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102855e30(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1028573dc; end: 1028573eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028573dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ec4758);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000100075034(FUN_102854580,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1028573ec; end: 102857407;  */

void FUN_1028573ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102853654(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102857408; end: 102857457;  */

void FUN_102857408(long param_1,long param_2)

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



/* Entry: 102857458; end: 10285797f;  */

void FUN_102857458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105581b8;
  func_0x000107c613fc(&UNK_1105581b8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_102857980,puVar1);
  return;
}



/* Entry: 102857980; end: 1028579a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857980(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000100083b20(&puStack_88);
  puVar7 = puStack_88;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_88);
  if (puVar7 != (undefined *)0x0) {
    uVar8 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0c2fd0);
    puVar9 = puVar7;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar7);
    func_0x000107c61170(uVar8);
    plVar10 = (long *)0x0;
    if ((int)puVar9 != 0) {
      func_0x0001000285a8(0x112ec4810,&UNK_10dae4848);
      func_0x000107c6157c(uVar18);
      pcVar6 = FUN_102857be8;
      func_0x0001000823a8(FUN_102857be8,uVar18);
      func_0x0001000285a8(0x112ec4818,&UNK_10dae4850);
      func_0x000107c6157c(uVar13);
      pcVar11 = FUN_102857c84;
      func_0x0001000823a8(FUN_102857c84,uVar13);
      func_0x000100083b20(&lStack_68);
      uVar18 = *(undefined8 *)(lStack_68 + _DAT_11301aef0);
      func_0x000107c615f0(uVar18);
      func_0x000107c61170(lStack_68);
      func_0x0001000285a8(0x112ec4820,&UNK_10dae4858);
      func_0x000107c6157c(uVar2);
      pcVar12 = FUN_102857d04;
      func_0x0001000823a8(FUN_102857d04,uVar2);
      func_0x000100083b20(&uStack_70);
      uVar13 = uStack_70;
      func_0x000107c5dbd4();
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      lVar14 = 0;
      func_0x000102853c38();
      puVar7 = &UNK_110558200;
      func_0x000107c613fc(&UNK_110558200,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar1;
      *(long *)(puVar7 + 0x18) = lVar14;
      puVar9 = &UNK_110558228;
      func_0x000107c613fc(&UNK_110558228,0x30,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar3;
      *(undefined8 *)(puVar9 + 0x18) = uVar1;
      *(long *)(puVar9 + 0x20) = lVar14;
      *(undefined8 *)(puVar9 + 0x28) = uVar4;
      func_0x000107c613fc(lVar14,0x38,7);
      puStack_88 = (undefined *)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      func_0x0001000285a8(0x112ec4828,&UNK_10dae4860);
      func_0x000107c613fc();
      func_0x000107c61580(uVar1,2);
      func_0x000107c6157c(uVar3);
      func_0x000107c6157c(uVar4);
      ppuVar15 = &puStack_88;
      func_0x00010006c248();
      *(undefined **)(lVar14 + 0x28) = puVar9;
      *(undefined ***)(lVar14 + 0x30) = ppuVar15;
      *(undefined8 *)(lVar14 + 0x10) = 0x102857d0c;
      *(undefined **)(lVar14 + 0x18) = puVar7;
      *(code **)(lVar14 + 0x20) = FUN_102857d14;
      lVar16 = 0;
      FUN_102856050();
      lVar17 = lVar16;
      func_0x000107c610f8();
      func_0x000107c61614(lVar17 + _DAT_112ec4718,0);
      func_0x000107c61614(lVar17 + _DAT_112ec4720,0);
      func_0x000107c61614(lVar17 + _DAT_112ec4728,0);
      func_0x000107c61614(lVar17 + _DAT_112ec4730,0);
      lVar5 = _DAT_112ec4738;
      puVar7 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar17 + lVar5) = puVar7;
      *(undefined8 *)(lVar17 + _DAT_112ec4740) = 0;
      *(undefined8 *)(lVar17 + _DAT_112ec4748) = 0;
      func_0x000107c61614(lVar17 + _DAT_112ec4750,0);
      lVar5 = _DAT_112ec4758;
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1027f8eb0();
      puStack_88 = puVar7;
      func_0x0001000285a8(0x112ec2720,&UNK_10dae0ac0);
      func_0x000107c613fc();
      ppuVar15 = &puStack_88;
      func_0x00010006c248();
      *(undefined ***)(lVar17 + lVar5) = ppuVar15;
      lVar5 = _DAT_112ec4790;
      puVar7 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar17 + lVar5) = puVar7;
      *(undefined8 *)(lVar17 + _DAT_112ec4760) = uVar18;
      *(code **)(lVar17 + _DAT_112ec4768) = pcVar12;
      *(code **)(lVar17 + _DAT_112ec4770) = pcVar6;
      *(undefined8 *)(lVar17 + _DAT_112ec4778) = uVar13;
      *(code **)(lVar17 + _DAT_112ec4780) = pcVar11;
      *(long *)(lVar17 + _DAT_112ec4788) = lVar14;
      plVar10 = &lStack_98;
      lStack_98 = lVar17;
      lStack_90 = lVar16;
      func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    }
    *param_1 = (long)plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102857980);
  (*pcVar6)();
}



/* Entry: 1028579a4; end: 102857be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028579a4(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 auStack_d0 [7];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_90 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar3 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&lStack_68);
  func_0x00010092450c(lStack_68 + _DAT_112ffbfa0,auStack_90);
  func_0x000107c61170(lStack_68);
  func_0x0001000a8868(auStack_90,uStack_78);
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar6 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar6)(lVar5,1,1,lVar1);
  (*pcVar6)(lVar3,1,1,lVar1);
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  *(undefined1 *)(lVar4 + -8) = 0;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  *(undefined8 *)(lVar4 + -0x18) = 0;
  *(undefined8 *)(lVar4 + -0x20) = 0;
  *(undefined8 *)(lVar4 + -0x28) = 0;
  *(undefined8 *)(lVar4 + -0x30) = 0;
  *(undefined8 *)(lVar4 + -0x38) = 0;
  *(undefined1 **)(lVar4 + -0x40) = puVar2;
  func_0x000104638e24(lVar4,4,lVar5,0,lVar3,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90();
  lVar1 = lVar4;
  (**(code **)(lStack_70 + 8))();
  func_0x000107c61170(lVar4);
  *param_1 = lVar1;
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 102857be8; end: 102857bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857be8(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 auStack_d0 [7];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_90 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar3 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&lStack_68);
  func_0x00010092450c(lStack_68 + _DAT_112ffbfa0,auStack_90);
  func_0x000107c61170(lStack_68);
  func_0x0001000a8868(auStack_90,uStack_78);
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar6 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar6)(lVar5,1,1,lVar1);
  (*pcVar6)(lVar3,1,1,lVar1);
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  *(undefined1 *)(lVar4 + -8) = 0;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  *(undefined8 *)(lVar4 + -0x18) = 0;
  *(undefined8 *)(lVar4 + -0x20) = 0;
  *(undefined8 *)(lVar4 + -0x28) = 0;
  *(undefined8 *)(lVar4 + -0x30) = 0;
  *(undefined8 *)(lVar4 + -0x38) = 0;
  *(undefined1 **)(lVar4 + -0x40) = puVar2;
  func_0x000104638e24(lVar4,4,lVar5,0,lVar3,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90();
  lVar1 = lVar4;
  (**(code **)(lStack_70 + 8))();
  func_0x000107c61170(lVar4);
  *param_1 = lVar1;
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 102857bf0; end: 102857c83;  */

void FUN_102857bf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102857c84; end: 102857c8b;  */

void FUN_102857c84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102857c8c; end: 102857d03;  */

void FUN_102857c8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c407c0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102857d04; end: 102857d13;  */

void FUN_102857d04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c407c0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102857d14; end: 102857d3b;  */

void FUN_102857d14(void)

{
  FUN_102852eec();
  return;
}



/* Entry: 102857d3c; end: 102857d4b; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4830));
  return;
}



/* Entry: 102857d4c; end: 102857d7f; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4830);
  *(undefined8 *)(param_1 + _DAT_112ec4830) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102857d80; end: 102857d8f; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4838));
  return;
}



/* Entry: 102857d90; end: 102857dc3; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4838);
  *(undefined8 *)(param_1 + _DAT_112ec4838) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102857dc4; end: 102857e37; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102857dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102857f20(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102857e38; end: 102857e4f; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102857e4c) */

void FUN_102857e38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102857e50; end: 102857e57; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin pluginType] */

undefined8 FUN_102857e50(void)

{
  return 1;
}



/* Entry: 102857e58; end: 102857eb7; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin init] */

void FUN_102857e58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CancelledBotResponseMessagePlugin.CancelledBotResponseMessagePlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102857e84);
  (*pcVar1)();
}



/* Entry: 102857eb8; end: 102857eff; -[_TtC33CancelledBotResponseMessagePlugin33CancelledBotResponseMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102857eb8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4830));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4838));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4840));
  return;
}



/* Entry: 102857f00; end: 102857f1f;  */

void FUN_102857f00(void)

{
  func_0x000107c61168(&PTR_PTR_1128664e8);
  return;
}



/* Entry: 102857f20; end: 10285806b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102857f20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4840);
  func_0x000107c4ce08(lVar1,param_2,param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c404a8();
    if (((int)lVar3 == 0x18) && (lVar3 = lVar1, func_0x000107c4477c(), (int)lVar3 != 0)) {
      uVar7 = 0x112ec4870;
      uVar4 = 0;
      FUN_10285806c(0,0x112ec4870,&PTR_PTR_1126ab3c0);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      puVar6 = PTR_PTR_1126ab3c8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar4 = 0;
      FUN_10285806c(0,0x112ec4878,&PTR_PTR_1126ab3c8);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      apuStack_60[0] = puVar6;
      uStack_48 = uVar4;
      func_0x000107c610f8(PTR_PTR_1126c67d8);
      FUN_1027efbc4(uVar5,uVar7,apuStack_60,&uStack_80);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      return uVar5;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c615e8(lVar1);
  return 0;
}



/* Entry: 10285806c; end: 1028580ab;  */

void FUN_10285806c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028580ac; end: 10285812b;  */

void FUN_1028580ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105582f8;
  func_0x000107c613fc(&UNK_1105582f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10285826c,puVar1);
  return;
}



/* Entry: 10285812c; end: 10285826b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285812c(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar3 = lStack_48;
  lVar5 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 != 0) {
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0c2fd0);
    lVar3 = lVar5;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar2);
    plVar4 = (long *)0x0;
    if ((int)lVar3 != 0) {
      func_0x000100083b20(&lStack_48);
      uVar2 = *(undefined8 *)(lStack_48 + _DAT_11301aef0);
      func_0x000107c615f0(uVar2);
      func_0x000107c61170(lStack_48);
      lVar5 = 0;
      FUN_102857f00();
      lVar3 = lVar5;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112ec4830) = 0;
      *(undefined8 *)(lVar3 + _DAT_112ec4838) = 0;
      *(undefined8 *)(lVar3 + _DAT_112ec4840) = uVar2;
      plVar4 = &lStack_58;
      lStack_58 = lVar3;
      lStack_50 = lVar5;
      func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    }
    *param_1 = (long)plVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10285826c);
  (*pcVar1)();
}



/* Entry: 10285826c; end: 102858283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285826c(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar3 = lStack_48;
  lVar5 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 != 0) {
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0c2fd0);
    lVar3 = lVar5;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar2);
    plVar4 = (long *)0x0;
    if ((int)lVar3 != 0) {
      func_0x000100083b20(&lStack_48);
      uVar2 = *(undefined8 *)(lStack_48 + _DAT_11301aef0);
      func_0x000107c615f0(uVar2);
      func_0x000107c61170(lStack_48);
      lVar5 = 0;
      FUN_102857f00();
      lVar3 = lVar5;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112ec4830) = 0;
      *(undefined8 *)(lVar3 + _DAT_112ec4838) = 0;
      *(undefined8 *)(lVar3 + _DAT_112ec4840) = uVar2;
      plVar4 = &lStack_58;
      lStack_58 = lVar3;
      lStack_50 = lVar5;
      func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    }
    *param_1 = (long)plVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10285826c);
  (*pcVar1)();
}



/* Entry: 102858284; end: 102858293; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102858284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4880));
  return;
}


