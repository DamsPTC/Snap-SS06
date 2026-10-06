/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a18214; end: 101a18297;  */

void FUN_101a18214(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x21);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101a183d4;
  plVar6[2] = lVar7;
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  plVar6[3] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101a1744c;
  *(undefined1 *)((long)plVar5 + 0x99) = uVar4;
  *(undefined1 *)(plVar5 + 0x13) = uVar3;
  plVar5[8] = lVar2;
  plVar5[9] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a166a0,0,0);
  return;
}



/* Entry: 101a18298; end: 101a182cb;  */

void FUN_101a18298(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a182cc; end: 101a18347;  */

void FUN_101a182cc(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a18348;
  plVar5[2] = lVar6;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101a171c8;
  *(undefined1 *)(plVar4 + 0x13) = uVar3;
  plVar4[8] = lVar2;
  plVar4[9] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a16414,0,0);
  return;
}



/* Entry: 101a18348; end: 101a18383;  */

void FUN_101a18348(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a18380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a18384; end: 101a183c3;  */

void FUN_101a18384(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a183c4; end: 101a183df;  */

void FUN_101a183c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c3fef8(uVar2,param_2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a17374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a183e0; end: 101a18627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a183e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  uVar5 = *(undefined8 *)(param_10 + _DAT_11303ff50);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174(param_11);
  func_0x000107c6157c(uVar5);
  uVar5 = param_8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x0001000285a8(0x112deba20,&UNK_10d9b7aa0);
  uVar1 = param_9;
  func_0x000107c3e23c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c408ec();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  uVar1 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  puVar3 = &UNK_11042cae8;
  func_0x000107c613fc(&UNK_11042cae8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  uVar5 = 0x112deba28;
  func_0x0001000285a8(0x112deba28,&UNK_10d9b7aa8);
  func_0x000107c613fc();
  pcVar4 = FUN_101a186f0;
  func_0x0001000bdd8c(FUN_101a186f0,puVar3,uVar5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_11);
  *(code **)(unaff_x20 + 0x50) = pcVar4;
  return unaff_x20;
}



/* Entry: 101a18628; end: 101a186ef;  */

void FUN_101a18628(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    func_0x000107c615f0();
    uVar1 = 0xd000000000000037;
    func_0x000107c5fadc(0xd000000000000037,0x800000010efc93d0);
    lVar2 = param_2;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)lVar2 != 0) {
      if (lRam0000000112deb548 != -1) {
        func_0x000107c61568(0x112deb548,FUN_101a05fdc);
      }
      uVar1 = uRam0000000113803a20;
      func_0x000107c61174();
      func_0x000107c615e8(param_2);
      goto LAB_101a186c4;
    }
    func_0x000107c615e8(param_2);
  }
  uVar1 = 0;
LAB_101a186c4:
  *param_1 = uVar1;
  return;
}



/* Entry: 101a186f0; end: 101a186f7;  */

void FUN_101a186f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c615f0();
    uVar1 = 0xd000000000000037;
    func_0x000107c5fadc(0xd000000000000037,0x800000010efc93d0);
    lVar2 = lVar3;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)lVar2 != 0) {
      if (lRam0000000112deb548 != -1) {
        func_0x000107c61568(0x112deb548,FUN_101a05fdc);
      }
      uVar1 = uRam0000000113803a20;
      func_0x000107c61174();
      func_0x000107c615e8(lVar3);
      goto LAB_101a186c4;
    }
    func_0x000107c615e8(lVar3);
  }
  uVar1 = 0;
LAB_101a186c4:
  *param_1 = uVar1;
  return;
}



/* Entry: 101a186f8; end: 101a188cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a186f8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x0001006d9cf0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112deb9b8;
  uVar5 = 0x112debb70;
  func_0x0001000285a8(0x112debb70,&UNK_10d9b7b60);
  func_0x000107c613fc();
  func_0x000101a1f418();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112deb960) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112deb968) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112deb970) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112deb978) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112deb980) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112deb988) = param_7;
  *(undefined8 *)(lVar4 + _DAT_112deb990) = param_8;
  *(undefined8 *)(lVar4 + _DAT_112deb998) = param_9;
  *(undefined8 *)(lVar4 + _DAT_112deb9a0) = param_10;
  *(undefined8 *)(lVar4 + _DAT_112deb9a8) = param_11;
  *(undefined8 *)(lVar4 + _DAT_112deb9b0) = param_12;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c615f0(param_12);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar1);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 101a188cc; end: 101a18907;  */

void FUN_101a188cc(void)

{
  long unaff_x20;
  
  FUN_101a186f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101a18908; end: 101a189a3;  */

void FUN_101a18908(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x0001006d9cf0();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11042ca38;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 101a189a4; end: 101a18a93;  */

/* WARNING: Possible PIC construction at 0x000101a189b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a189c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a189d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a189f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a189d4) */
/* WARNING: Removing unreachable block (ram,0x000101a189c4) */
/* WARNING: Removing unreachable block (ram,0x000101a189b4) */
/* WARNING: Removing unreachable block (ram,0x000101a189fc) */

void FUN_101a189a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a18a94; end: 101a18ab7;  */

void FUN_101a18a94(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001006d9918();
  *param_1 = param_2;
  return;
}



/* Entry: 101a18ab8; end: 101a18acb;  */

void FUN_101a18ab8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c615f0();
    uVar1 = 0xd000000000000037;
    func_0x000107c5fadc(0xd000000000000037,0x800000010efc93d0);
    lVar2 = lVar3;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)lVar2 != 0) {
      if (lRam0000000112deb548 != -1) {
        func_0x000107c61568(0x112deb548,FUN_101a05fdc);
      }
      uVar1 = uRam0000000113803a20;
      func_0x000107c61174();
      func_0x000107c615e8(lVar3);
      goto LAB_101a186c4;
    }
    func_0x000107c615e8(lVar3);
  }
  uVar1 = 0;
LAB_101a186c4:
  *param_1 = uVar1;
  return;
}



/* Entry: 101a18acc; end: 101a18d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101a18acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  FUN_101a18d7c(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_11);
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_8);
  uVar2 = param_1;
  FUN_101a19de8(param_1,param_6,param_7,param_8,param_9._1_1_,param_11);
  *(undefined8 *)(unaff_x20 + _DAT_112debb78) = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112debb80);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112debb88);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112debb90) = (undefined1)param_9;
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_11);
  return puVar3;
}



/* Entry: 101a18d7c; end: 101a18d9b;  */

void FUN_101a18d7c(void)

{
  func_0x000107c61168(&PTR_PTR_112debc00);
  return;
}



/* Entry: 101a18d9c; end: 101a18dfb; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass init] */

void FUN_101a18d9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImageProcessSnapEditorRenderPass.ImageProcessSnapEditorGLRenderPass",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a18dc8);
  (*pcVar1)();
}



/* Entry: 101a18dfc; end: 101a18e9f; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a18e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a18e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a18dfc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112debb78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112debb80 + 8))
  ;
  return;
}



/* Entry: 101a18ea0; end: 101a18edf; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass unloadWithError:] */

undefined8 FUN_101a18ea0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101a18e4c();
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 101a18ee0; end: 101a19a17;  */

/* WARNING: Removing unreachable block (ram,0x000101a19af0) */
/* WARNING: Removing unreachable block (ram,0x000101a19b1c) */
/* WARNING: Removing unreachable block (ram,0x000101a19afc) */
/* WARNING: Removing unreachable block (ram,0x000101a196f4) */
/* WARNING: Removing unreachable block (ram,0x000101a19494) */
/* WARNING: Removing unreachable block (ram,0x000101a19644) */
/* WARNING: Removing unreachable block (ram,0x000101a194f4) */
/* WARNING: Removing unreachable block (ram,0x000101a19730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code *****
FUN_101a18ee0(double param_1,code *****param_2,code *****param_3,code *****param_4,code ****param_5,
             code *****param_6,ulong param_7,code *****param_8)

{
  undefined1 uVar1;
  code ***pppcVar2;
  code *pcVar3;
  code *****pppppcVar4;
  code *****pppppcVar5;
  code *****pppppcVar6;
  code *****pppppcVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *****pppppcVar9;
  long extraout_x12;
  code *****pppppcVar10;
  code *****unaff_x20;
  code *****unaff_x21;
  code *****pppppcVar11;
  code ****ppppcVar12;
  undefined4 uVar13;
  code *****pppppcVar14;
  long lVar15;
  code *****pppppcVar16;
  code *****pppppcVar17;
  code ****ppppcVar18;
  double dVar19;
  double dVar20;
  code ****ppppcVar21;
  code ***apppcStack_180 [10];
  code ****appppcStack_130 [3];
  code ***pppcStack_118;
  uint uStack_10c;
  code ****ppppcStack_108;
  code ****ppppcStack_100;
  code ****ppppcStack_f8;
  code ****ppppcStack_f0;
  code ****ppppcStack_e8;
  code ***pppcStack_e0;
  code ****ppppcStack_d8;
  code ***pppcStack_d0;
  code ****ppppcStack_c8;
  code ***pppcStack_c0;
  code ****ppppcStack_b8;
  code ****ppppcStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code ****ppppcStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcVar14 = (code *****)((ulong)param_5 >> 0x20);
  pppppcVar4 = (code *****)0x0;
  pppppcVar7 = param_3;
  func_0x000107c5f7f0();
  pppcStack_c0 = (code ***)pppppcVar4[-1];
  ppppcStack_b8 = (code ****)pppppcVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppcStack_c0[8]);
  pppppcVar4 = (code *****)((long)appppcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pppppcVar5 = (code *****)0x0;
  ppppcStack_c8 = (code ****)pppppcVar4;
  func_0x000107c5f83c();
  pppcStack_d0 = (code ***)pppppcVar5[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppcStack_d0[8]);
  lVar15 = (long)pppppcVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppcVar9 = (code *****)(lVar15 - extraout_x12);
  uStack_90 = SUB84(param_5,0);
  uVar13 = (undefined4)((ulong)param_5 >> 0x20);
  pppppcVar4 = &ppppcStack_98;
  ppppcStack_e8 = (code ****)param_4;
  pppcStack_e0 = (code ***)param_5;
  ppppcStack_d8 = (code ****)param_6;
  ppppcStack_98 = (code ****)param_4;
  uStack_8c = uVar13;
  ppppcStack_88 = (code ****)param_6;
  func_0x000107c60a3c();
  if ((param_7 & 1) == 0) {
    FUN_101a1c124();
    unaff_x21 = (code *****)&UNK_11042cc90;
    pppppcVar7 = (code *****)0x0;
    pppppcVar16 = (code *****)0x0;
    func_0x000107c613f8();
    ppppcVar21 = (code ****)0xa;
  }
  else {
    ppppcStack_f0 = (code ****)pppppcVar5;
    if ((param_2 != (code *****)0x0) && (param_3 != (code *****)0x0)) {
      pppppcVar16 = (code *****)((ulong)param_2 & 0xffffffffffffff8);
      if ((ulong)param_2 >> 0x3e == 0) {
        pppppcVar4 = (code *****)pppppcVar16[2];
      }
      else {
        pppppcVar4 = param_2;
        if (-1 < (long)param_2) {
          pppppcVar4 = pppppcVar16;
        }
        func_0x000107c60480();
      }
      if (pppppcVar4 == (code *****)0x1) {
        pppppcVar5 = (code *****)((ulong)param_3 & 0xffffffffffffff8);
        if ((ulong)param_3 >> 0x3e == 0) {
          pppppcVar4 = (code *****)pppppcVar5[2];
        }
        else {
          pppppcVar4 = param_3;
          if (-1 < (long)param_3) {
            pppppcVar4 = pppppcVar5;
          }
          func_0x000107c60480();
        }
        if (pppppcVar4 == (code *****)0x1) {
          if (((ulong)param_2 & 0xc000000000000001) == 0) {
            if (pppppcVar16[2] == (code ****)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a19a00);
              (*pcVar3)();
            }
            pppppcVar4 = (code *****)param_2[4];
            func_0x000107c615f0(pppppcVar4);
            param_2 = pppppcVar7;
            if (((ulong)param_3 & 0xc000000000000001) != 0) goto LAB_101a199e8;
LAB_101a19058:
            if (pppppcVar5[2] == (code ****)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a19a04);
              (*pcVar3)();
            }
            pppppcVar17 = (code *****)param_3[4];
            func_0x000107c615f0(pppppcVar17);
          }
          else {
            pppppcVar4 = (code *****)0x0;
            FUN_101a220cc();
            if (((ulong)param_3 & 0xc000000000000001) == 0) goto LAB_101a19058;
LAB_101a199e8:
            pppppcVar17 = (code *****)0x0;
            param_2 = param_3;
            FUN_101a220cc();
          }
          pppppcVar6 = pppppcVar4;
          func_0x000107c615f0();
          func_0x000107c4f9b4();
          pppppcVar10 = pppppcVar4;
          func_0x000107c61104();
          if (pppppcVar6 == (code *****)0x0) {
            FUN_101a1c124();
            unaff_x21 = (code *****)&UNK_11042cc90;
            pppppcVar7 = (code *****)0x0;
            pppppcVar16 = (code *****)0x0;
            func_0x000107c613f8();
            pppppcVar10[1] = (code ****)0x6;
            *pppppcVar10 = (code ****)0x0;
            func_0x000107c61654();
            func_0x000107c615e8(pppppcVar4);
            func_0x000107c615e8();
            param_2 = pppppcVar14;
            goto LAB_101a1998c;
          }
          func_0x000107c61174();
          param_4 = pppppcVar6;
          FUN_101a1bdcc();
          uStack_10c = (uint)param_2;
          param_6 = pppppcVar17;
          func_0x000107c4e7a4();
          pppppcVar7 = (code *****)unaff_x20[0xb];
          ppppcStack_100 = (code ****)pppppcVar6;
          ppppcStack_f8 = (code ****)pppppcVar17;
          if (pppppcVar7 == (code *****)0x0) {
LAB_101a191b0:
            ppppcVar21 = ppppcStack_f8;
            pppppcVar5 = (code *****)((ulong)param_6 | (ulong)param_2);
            if ((long)pppppcVar5 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a19a10);
              (*pcVar3)();
            }
            pppppcVar7 = param_6;
            FUN_101a1bf40(param_6,param_2);
            ppppcVar18 = unaff_x20[0xb];
            unaff_x20[0xb] = (code ****)pppppcVar7;
            func_0x000107c61170(ppppcVar18);
            pppppcVar17 = (code *****)unaff_x20[0xb];
            pppppcVar6 = (code *****)ppppcStack_100;
            if (pppppcVar17 == (code *****)0x0) {
              FUN_101a1c124();
              unaff_x21 = (code *****)&UNK_11042cc90;
              pppppcVar7 = (code *****)0x0;
              pppppcVar16 = (code *****)0x0;
              func_0x000107c613f8();
              pppppcVar17[1] = (code ****)0x9;
              *pppppcVar17 = (code ****)0x0;
              func_0x000107c61654();
              func_0x000107c615e8(pppppcVar4);
              func_0x000107c615e8(ppppcVar21);
              pppppcVar17 = (code *****)ppppcStack_100;
              func_0x000107c61170();
              param_3 = unaff_x20;
              goto LAB_101a1998c;
            }
          }
          else {
            func_0x000107c61174();
            pppppcVar5 = pppppcVar7;
            func_0x000107c60ac8();
            if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a19a0c);
              (*pcVar3)();
            }
            if (pppppcVar5 == param_6) {
              pppppcVar5 = pppppcVar7;
              func_0x000107c60ab8();
              if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101a19a14);
                (*pcVar3)();
              }
              if (pppppcVar5 != param_2) goto LAB_101a19174;
              func_0x000107c61170(pppppcVar7);
            }
            else {
LAB_101a19174:
              FUN_101a1aa18();
              func_0x000107c61170(pppppcVar7);
              ppppcVar21 = unaff_x20[0xb];
              unaff_x20[0xb] = (code ****)0x0;
              func_0x000107c61170(ppppcVar21);
              *(undefined1 *)(unaff_x20 + 0xd) = 0;
            }
            pppppcVar17 = (code *****)unaff_x20[0xb];
            if (pppppcVar17 == (code *****)0x0) goto LAB_101a191b0;
          }
          if (((ulong)param_6 | (ulong)param_2) >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a19a08);
            (*pcVar3)();
          }
          ppppcVar18 = unaff_x20[0xc];
          ppppcStack_98 = (code ****)0x0;
          func_0x000107c61174();
          pppppcVar16 = param_2;
          pppcStack_118 = (code ***)ppppcVar18;
          ppppcStack_108 = (code ****)pppppcVar17;
          func_0x000107c4ee10();
          pppppcVar10 = (code *****)ppppcStack_98;
          ppppcVar21 = ppppcStack_f0;
          if ((int)ppppcVar18 == 0) {
            pppppcVar5 = (code *****)ppppcStack_98;
            func_0x000107c61174();
            func_0x000107c5ed30();
            pppppcVar17 = pppppcVar5;
            func_0x000107c61170();
            func_0x000107c61654();
            FUN_101a1c124();
            unaff_x21 = (code *****)&UNK_11042cc90;
            pppppcVar7 = (code *****)0x0;
            pppppcVar16 = (code *****)0x0;
            func_0x000107c613f8();
            pppppcVar17[1] = (code ****)0xb;
            *pppppcVar17 = (code ****)0x0;
            func_0x000107c61654();
            func_0x000107c614ac(pppppcVar10);
            func_0x000107c615e8(pppppcVar4);
            func_0x000107c615e8(ppppcStack_f8);
            param_3 = pppppcVar6;
LAB_101a193a4:
            func_0x000107c61170(pppppcVar6);
            pppppcVar17 = (code *****)ppppcStack_108;
            func_0x000107c61170();
            param_6 = pppppcVar10;
            goto LAB_101a1998c;
          }
          param_1 = param_1 * 1000.0;
          appppcStack_130[0] = (code ****)param_4;
          appppcStack_130[1] = (code ****)param_6;
          appppcStack_130[2] = (code ****)pppppcVar4;
          func_0x000107c61174();
          func_0x000107c5f830(lVar15);
          pppcVar2 = pppcStack_c0;
          param_3 = (code *****)ppppcStack_c8;
          *ppppcStack_c8 = (code ***)unaff_x20[0x13];
          ppppcVar18 = ppppcStack_b8;
          pppppcVar7 = (code *****)ppppcStack_b8;
          (*(code *)pppcVar2[0xd])
                    (param_3,*(undefined4 *)
                              PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788);
          func_0x000107c5f858(pppppcVar9,lVar15,param_3);
          (*(code *)pppcVar2[1])(param_3,ppppcVar18);
          param_4 = (code *****)pppcStack_d0[1];
          (*(code *)param_4)(lVar15,ppppcVar21);
          pppppcVar6 = (code *****)ppppcStack_100;
          param_6 = (code *****)ppppcStack_108;
          pppppcVar10 = (code *****)unaff_x20[0xe];
          pppppcVar4 = pppppcVar9;
          if (pppppcVar10 == (code *****)0x0) {
            pppppcVar17 = (code *****)ppppcStack_108;
            dVar19 = param_1;
            FUN_101a1ab88(ppppcStack_108,pppppcVar9);
            pppppcVar5 = (code *****)ppppcStack_f8;
            pppppcVar6 = (code *****)ppppcStack_100;
            if (unaff_x21 != (code *****)0x0) {
              (*(code *)param_4)(pppppcVar9,ppppcStack_f0);
              func_0x000107c615e8(appppcStack_130[2]);
              func_0x000107c615e8(pppppcVar5);
              func_0x000107c61170(pppppcVar6);
              pppppcVar17 = param_6;
              func_0x000107c61170();
              param_3 = pppppcVar6;
              goto LAB_101a1998c;
            }
            pppppcVar11 = pppppcVar17;
            ppppcStack_b8 = (code ****)param_2;
            FUN_101a1c040();
LAB_101a1952c:
            func_0x000107c61434();
            pppppcVar10 = pppppcVar17;
          }
          else {
            unaff_x20[0xe] = (code ****)0x0;
            ppppcVar21 = pppppcVar10[2];
            pppppcVar11 = pppppcVar10;
            ppppcStack_b8 = (code ****)param_2;
            FUN_101a1c040(pppppcVar10,pppppcVar9);
            pppppcVar5 = (code *****)ppppcStack_f8;
            if (unaff_x21 != (code *****)0x0) {
              (*(code *)param_4)(pppppcVar9,ppppcStack_f0);
              func_0x000107c615e8(appppcStack_130[2]);
              func_0x000107c615e8(pppppcVar5);
              func_0x000107c61574(pppppcVar10);
              param_2 = pppppcVar6;
              goto LAB_101a193a4;
            }
            dVar19 = ABS((double)ppppcVar21 - param_1);
            pppppcVar17 = pppppcVar10;
            if (dVar19 <= 0.5) goto LAB_101a1952c;
            pppppcVar17 = (code *****)ppppcStack_108;
            dVar19 = param_1;
            FUN_101a1ab88(ppppcStack_108,pppppcVar9);
            FUN_101a1c040();
            func_0x000107c61574(pppppcVar10);
            pppppcVar11 = (code *****)0x0;
          }
          func_0x000107c61574(pppppcVar17);
          pppppcVar17 = (code *****)ppppcStack_108;
          FUN_101a1af94(ppppcStack_108,pppppcVar11);
          param_2 = pppppcVar6;
          if (unaff_x21 != (code *****)0x0) {
            (*(code *)param_4)(pppppcVar9,ppppcStack_f0);
            func_0x000107c615e8(appppcStack_130[2]);
            func_0x000107c615e8(ppppcStack_f8);
            func_0x000107c61170(pppppcVar6);
            func_0x000107c61170(pppppcVar17);
            pppppcVar17 = pppppcVar11;
            func_0x000107c6142c();
            param_6 = pppppcVar10;
            pppppcVar5 = unaff_x20;
            param_3 = pppppcVar11;
            goto LAB_101a1998c;
          }
          func_0x000107c6142c(pppppcVar11);
          param_3 = (code *****)ppppcStack_f0;
          if (*(char *)(unaff_x20 + 5) == '\x01') {
            if (*(char *)(unaff_x20 + 0x12) == '\x01') {
LAB_101a19620:
              dVar19 = 33.333333333333336;
            }
            else {
              ppppcVar21 = unaff_x20[0x10];
              pppppcVar10 = (code *****)unaff_x20[0x11];
              pppppcVar7 = (code *****)unaff_x20[0xf];
              ppppcStack_98 = ppppcStack_e8;
              uStack_90 = SUB84(pppcStack_e0,0);
              ppppcStack_88 = ppppcStack_d8;
              uStack_8c = uVar13;
              func_0x000107c60a3c(&ppppcStack_98);
              pppppcVar17 = (code *****)ppppcStack_108;
              uStack_90 = SUB84(ppppcVar21,0);
              uStack_8c = (undefined4)((ulong)ppppcVar21 >> 0x20);
              dVar20 = dVar19;
              ppppcStack_98 = (code ****)pppppcVar7;
              ppppcStack_88 = (code ****)pppppcVar10;
              func_0x000107c60a3c(&ppppcStack_98);
              dVar19 = (dVar19 - dVar20) * 1000.0;
              if (dVar19 <= 0.0) goto LAB_101a19620;
            }
            pppppcVar7 = pppppcVar17;
            FUN_101a1ab88(param_1 + dVar19,pppppcVar17,pppppcVar9);
            param_3 = (code *****)ppppcStack_f0;
            ppppcVar21 = unaff_x20[0xe];
            unaff_x20[0xe] = (code ****)pppppcVar7;
            func_0x000107c61574(ppppcVar21);
            unaff_x20[0xf] = ppppcStack_e8;
            unaff_x20[0x10] = (code ****)pppcStack_e0;
            unaff_x20[0x11] = ppppcStack_d8;
            *(undefined1 *)(unaff_x20 + 0x12) = 0;
          }
          pppppcVar11 = (code *****)ppppcStack_f8;
          param_6 = (code *****)appppcStack_130[2];
          if ((uStack_10c & 0xff) == 1) {
            pppppcVar5 = (code *****)appppcStack_130[2];
            func_0x000107c3e928();
            pppppcVar11 = (code *****)ppppcStack_f8;
            if (((ulong)pppppcVar5 & 1) == 0) {
              FUN_101a1c124();
              unaff_x21 = (code *****)&UNK_11042cc90;
              pppppcVar7 = (code *****)0x0;
              pppppcVar16 = (code *****)0x0;
              func_0x000107c613f8();
              pppppcVar5[1] = (code ****)0xa;
              *pppppcVar5 = (code ****)0x0;
              func_0x000107c61654();
              func_0x000107c615e8(param_6);
              func_0x000107c615e8(pppppcVar11);
              func_0x000107c61170(pppppcVar6);
              pppppcVar17 = (code *****)ppppcStack_108;
              pppppcVar5 = pppppcVar11;
              goto LAB_101a19860;
            }
            pppppcVar5 = (code *****)ppppcStack_f8;
            func_0x000107c3e92c();
            pppppcVar17 = (code *****)ppppcStack_108;
            if (((ulong)pppppcVar5 & 1) == 0) goto LAB_101a197b8;
            ppppcStack_98 = (code ****)0x0;
            ppppcVar21 = (code ****)pppcStack_118;
            pppppcVar7 = (code *****)appppcStack_130[1];
            pppppcVar16 = (code *****)ppppcStack_b8;
            func_0x000107c40048();
            pppppcVar10 = param_6;
LAB_101a19774:
            param_6 = (code *****)ppppcStack_98;
            if (((ulong)ppppcVar21 & 1) != 0) {
              func_0x000107c61174();
              (*(code *)param_4)(pppppcVar9,param_3);
              func_0x000107c615e8(appppcStack_130[2]);
              func_0x000107c615e8(pppppcVar11);
              func_0x000107c61170(pppppcVar6);
              func_0x000107c61170();
              param_6 = pppppcVar10;
              pppppcVar5 = pppppcVar11;
              goto LAB_101a1998c;
            }
            pppppcVar5 = (code *****)ppppcStack_98;
            func_0x000107c61174();
            func_0x000107c5ed30();
            pppppcVar14 = pppppcVar5;
            func_0x000107c61170();
            func_0x000107c61654();
            FUN_101a1c124();
            unaff_x21 = (code *****)&UNK_11042cc90;
            pppppcVar7 = (code *****)0x0;
            pppppcVar16 = (code *****)0x0;
            func_0x000107c613f8();
            pppppcVar14[1] = (code ****)0xc;
            *pppppcVar14 = (code ****)0x0;
            func_0x000107c61654();
            func_0x000107c61170(pppppcVar6);
            func_0x000107c61170(pppppcVar17);
            func_0x000107c614ac(param_6);
            func_0x000107c615e8(appppcStack_130[2]);
            func_0x000107c615e8(pppppcVar11);
            pppppcVar14 = pppppcVar6;
            pppppcVar6 = pppppcVar11;
          }
          else {
            pppppcVar5 = (code *****)ppppcStack_f8;
            func_0x000107c3e92c();
            param_6 = pppppcVar10;
            if ((int)pppppcVar5 != 0) {
              ppppcStack_98 = (code ****)0x0;
              param_8 = &ppppcStack_98;
              ppppcVar21 = (code ****)pppcStack_118;
              pppppcVar7 = pppppcVar6;
              pppppcVar16 = (code *****)appppcStack_130[0];
              func_0x000107c40050();
              goto LAB_101a19774;
            }
LAB_101a197b8:
            FUN_101a1c124();
            unaff_x21 = (code *****)&UNK_11042cc90;
            pppppcVar7 = (code *****)0x0;
            pppppcVar16 = (code *****)0x0;
            func_0x000107c613f8();
            pppppcVar5[1] = (code ****)0xa;
            *pppppcVar5 = (code ****)0x0;
            func_0x000107c61654();
            func_0x000107c615e8(appppcStack_130[2]);
            func_0x000107c615e8(pppppcVar11);
            func_0x000107c61170(pppppcVar6);
            pppppcVar5 = pppppcVar11;
LAB_101a19860:
            func_0x000107c61170(pppppcVar17);
          }
          pppppcVar17 = pppppcVar9;
          (*(code *)param_4)(pppppcVar9,param_3);
          param_2 = pppppcVar6;
          goto LAB_101a1998c;
        }
      }
    }
    FUN_101a1c124();
    unaff_x21 = (code *****)&UNK_11042cc90;
    pppppcVar7 = (code *****)0x0;
    pppppcVar16 = (code *****)0x0;
    func_0x000107c613f8();
    ppppcVar21 = (code ****)0x7;
  }
  pppppcVar4[1] = ppppcVar21;
  *pppppcVar4 = (code ****)0x0;
  pppppcVar17 = unaff_x21;
  func_0x000107c61654();
  pppppcVar4 = param_2;
  param_2 = pppppcVar14;
LAB_101a1998c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    pppppcVar9[-10] = (code ****)param_2;
    pppppcVar9[-9] = (code ****)pppppcVar4;
    pppppcVar9[-8] = (code ****)pppppcVar14;
    pppppcVar9[-7] = (code ****)param_4;
    pppppcVar9[-6] = (code ****)param_3;
    pppppcVar9[-5] = (code ****)unaff_x21;
    pppppcVar9[-4] = (code ****)pppppcVar5;
    pppppcVar9[-3] = (code ****)param_6;
    pppppcVar9[-2] = (code ****)&stack0xfffffffffffffff0;
    pppppcVar9[-1] = (code ****)FUN_101a19a18;
    uVar1 = *(undefined1 *)pppppcVar9;
    ppppcVar21 = *param_8;
    ppppcVar18 = param_8[1];
    ppppcVar12 = param_8[2];
    if (pppppcVar7 != (code *****)0x0) {
      uVar8 = 0x112debe58;
      func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
      func_0x000107c5fc54(pppppcVar7,uVar8);
    }
    if (pppppcVar16 != (code *****)0x0) {
      uVar8 = 0x112debe58;
      func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
      func_0x000107c5fc54(pppppcVar16,uVar8);
    }
    func_0x000107c61174(pppppcVar17);
    FUN_101a18ee0(pppppcVar7,pppppcVar16,ppppcVar21,ppppcVar18,ppppcVar12,uVar1);
    func_0x000107c61170(pppppcVar17);
    func_0x000107c6142c(pppppcVar16);
    func_0x000107c6142c(pppppcVar7);
    return (code *****)0x1;
  }
  return pppppcVar17;
}



/* Entry: 101a19a18; end: 101a19b43; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:] */

/* WARNING: Removing unreachable block (ram,0x000101a19af0) */
/* WARNING: Removing unreachable block (ram,0x000101a19b1c) */
/* WARNING: Removing unreachable block (ram,0x000101a19afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101a19a18(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *param_7,undefined8 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar4 = param_7[2];
  if (param_3 != 0) {
    uVar3 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(param_3,uVar3);
  }
  if (param_4 != 0) {
    uVar3 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(param_4,uVar3);
  }
  func_0x000107c61174(param_1);
  FUN_101a18ee0(param_3,param_4,uVar1,uVar2,uVar4,param_9);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
  return 1;
}



/* Entry: 101a19b44; end: 101a19b4b; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass textureType] */

undefined8 FUN_101a19b44(void)

{
  return 0;
}



/* Entry: 101a19b4c; end: 101a19b57; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass inputBufferIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a19b4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + _DAT_112debb80))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112debb80);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a19b58; end: 101a19b63; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass outputBufferIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a19b58(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + _DAT_112debb88))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112debb88);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a19b64; end: 101a19bef;  */

void FUN_101a19b64(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + *param_3);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a19bf0; end: 101a19c1b; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass lensIds] */

void FUN_101a19bf0(void)

{
  func_0x000107c5fe08(PTR___swiftEmptySetSingleton_11034f1d8,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a19c1c; end: 101a19d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a19c1c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_70 [16];
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a19d20);
    (*pcVar8)();
  }
  if (*(long *)(param_1 + 0x10) == 1) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101a19d24);
      (*pcVar8)();
    }
    if (*(long *)(param_2 + 0x10) == 1) {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112debb78);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      uVar6 = *(undefined1 *)(unaff_x20 + _DAT_112debb90);
      func_0x000107c610f8();
      *(undefined8 *)(lVar9 + _DAT_112debb78) = uVar10;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112debb80);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112debb88);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      *(undefined1 *)(lVar9 + _DAT_112debb90) = uVar6;
      puVar7 = PTR_s_init_1125d9248;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c6157c(uVar10);
      func_0x000107c61154(auStack_70,puVar7);
    }
  }
  return;
}



/* Entry: 101a19d24; end: 101a19dbf; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:] */

void FUN_101a19d24(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  }
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  FUN_101a19c1c(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101a19dc0; end: 101a19dcf; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass isPixelBufferInputCompatible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101a19dc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112debb90);
}



/* Entry: 101a19dd0; end: 101a19dd7; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass appliesInputOrientation] */

undefined8 FUN_101a19dd0(void)

{
  return 0;
}



/* Entry: 101a19dd8; end: 101a19ddf; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass requiresGPU] */

undefined8 FUN_101a19dd8(void)

{
  return 1;
}



/* Entry: 101a19de0; end: 101a19de7; -[_TtC34SCImageProcessSnapEditorRenderPass34ImageProcessSnapEditorGLRenderPass isOutputDeterministicAndStatic] */

undefined8 FUN_101a19de0(void)

{
  return 0;
}



/* Entry: 101a19de8; end: 101a1a2f3;  */

void FUN_101a19de8(long param_1,ulong param_2,undefined4 param_3,long param_4,uint param_5,
                  undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = param_1;
  func_0x000101a1b81c();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0xe000000000000000;
  *(long *)(unaff_x20 + 0x40) = lVar2;
  func_0x000107c60f34();
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  puVar3 = PTR_PTR_1126a8530;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined1 *)(unaff_x20 + 0x90) = 1;
  *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  *(ulong *)(unaff_x20 + 0x10) = param_2;
  *(undefined4 *)(unaff_x20 + 0x18) = param_3;
  *(long *)(unaff_x20 + 0x20) = param_4;
  *(char *)(unaff_x20 + 0x28) = (char)param_5;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_6;
  if (param_4 == 0) {
    *(undefined8 *)(unaff_x20 + 0x98) = 2;
    func_0x000107c61174(param_2);
    func_0x000107c615f0(param_6);
    uVar1 = 0;
  }
  else {
    func_0x000107c615f0(param_6);
    func_0x000107c615f4(param_4,2);
    func_0x000107c61174(param_2);
    uVar4 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efc94e0);
    lVar2 = param_4;
    func_0x000107c4980c();
    func_0x000107c615e8(param_4);
    func_0x000107c61170(uVar4);
    *(long *)(unaff_x20 + 0x98) = (long)(int)lVar2;
    func_0x000107c615f0(param_4);
    uVar4 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efc9480);
    lVar2 = param_4;
    func_0x000107c3ebd4();
    uVar1 = (undefined1)lVar2;
    func_0x000107c615e8(param_4);
    func_0x000107c61170(uVar4);
    func_0x000107c615f0(param_4);
    uVar4 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010efc94b0);
    lVar2 = param_4;
    func_0x000107c3ebd4();
    func_0x000107c615e8(param_4);
    func_0x000107c61170(uVar4);
    param_5 = (uint)lVar2 & param_5;
  }
  func_0x000107c60f38(*(undefined8 *)(unaff_x20 + 0x48));
  uVar5 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar5 == 0) {
    if (*(char *)(unaff_x20 + 0x50) != '\x01') {
      *(undefined1 *)(unaff_x20 + 0x50) = 1;
      func_0x000107c60f3c(*(undefined8 *)(unaff_x20 + 0x48));
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
  }
  else {
    puVar3 = &UNK_11042cd70;
    puVar6 = puVar3;
    func_0x000107c613fc(&UNK_11042cd70,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_11042cd98;
    func_0x000107c613fc(&UNK_11042cd98,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_1;
    func_0x000107c613fc(&UNK_11042cd70,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar6 = &UNK_11042cdc0;
    func_0x000107c613fc(&UNK_11042cdc0,0x38,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    *(ulong *)(puVar6 + 0x18) = uVar5;
    puVar6[0x20] = uVar1;
    *(code **)(puVar6 + 0x28) = FUN_101a1c3c8;
    *(undefined **)(puVar6 + 0x30) = puVar7;
    if (((param_5 & 1) != 0) &&
       (uVar8 = uVar5,
       func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                           PTR_s_getWorkerOnExecutor_block__1125d0ac0), (uVar8 & 1) != 0)) {
      puVar3 = &UNK_11042cd70;
      func_0x000107c613fc(&UNK_11042cd70,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar9 = &UNK_11042cde8;
      func_0x000107c613fc(&UNK_11042cde8,0x38,7);
      *(undefined **)(puVar9 + 0x10) = puVar3;
      *(undefined8 *)(puVar9 + 0x18) = 0x101a1c3d0;
      *(undefined **)(puVar9 + 0x20) = puVar6;
      *(code **)(puVar9 + 0x28) = FUN_101a1c3c8;
      *(undefined **)(puVar9 + 0x30) = puVar7;
      uStack_70 = 0x101a1c3e0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1011eaae0;
      puStack_78 = &UNK_11042ce00;
      ppuVar10 = &puStack_90;
      puStack_68 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c615f4(uVar5,2);
      func_0x000107c61580(puVar7,2);
      func_0x000107c61174(param_1);
      func_0x000107c6157c(puVar3);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar9);
      func_0x000107c443bc(uVar5);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(param_6);
      func_0x000107c615e8(param_4);
      func_0x000107c60bd0(ppuVar10);
      puVar9 = puStack_68;
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c615ec(uVar5,2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar9);
      return;
    }
    func_0x000107c615f0(uVar5);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar3);
    FUN_101a1a574();
    func_0x000107c615e8(uVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_4);
  return;
}



/* Entry: 101a1a2f4; end: 101a1a573;  */

void FUN_101a1a2f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [24];
  
  puVar7 = auStack_88;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_4 == 0) {
      func_0x000107c61574(param_3);
    }
    else {
      lVar1 = param_4;
      func_0x000107c5ee30();
      func_0x000107c61170(param_4);
      puVar2 = PTR_PTR_1126bcf68;
      func_0x000107c610f8(PTR_PTR_1126bcf68);
      func_0x00010006c00c(lVar1,puVar7);
      lVar3 = lVar1;
      func_0x000107c5ee20(lVar1,puVar7);
      func_0x000107c45ae0(puVar2);
      func_0x000107c61170(lVar3);
      func_0x00010006c090(lVar1,puVar7);
      puVar4 = PTR_PTR_1126a8518;
      func_0x000107c610f8(PTR_PTR_1126a8518);
      func_0x000107c453e4();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c53ffc(puVar4);
      func_0x000107c61170(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c57ed8(puVar4);
      func_0x000107c61170(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5a2c4(puVar4);
      func_0x000107c61170(puVar5);
      dVar9 = (double)*(long *)(param_3 + 0x98) * 1000.0 * 0.65;
      dVar10 = 1500.0;
      if (dVar9 <= 1500.0) {
        dVar10 = dVar9;
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(dVar10);
      func_0x000107c52938(puVar4);
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126df060;
      func_0x000107c61168();
      func_0x000107c43be4();
      func_0x000107c61180();
      func_0x000107c61174(puVar4);
      puVar6 = puVar5;
      func_0x000107c40b90();
      func_0x000107c61180();
      func_0x00010006c090(lVar1,puVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      uVar8 = *(undefined8 *)(param_3 + 0x30);
      *(undefined **)(param_3 + 0x30) = puVar6;
      func_0x000107c61574(param_3);
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 101a1a574; end: 101a1a95b;  */

void FUN_101a1a574(long param_1,long param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c509b4();
    func_0x000107c61180();
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x50) != '\x01') {
        *(undefined1 *)(param_1 + 0x50) = 1;
        func_0x000107c60f3c(*(undefined8 *)(param_1 + 0x48));
      }
      func_0x000107c61574(param_1);
    }
    else {
      puVar1 = &UNK_11042cd70;
      func_0x000107c613fc(&UNK_11042cd70,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,param_1);
      puVar2 = &UNK_11042ce38;
      func_0x000107c613fc(&UNK_11042ce38,0x30,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      puVar2[0x18] = param_3 & 1;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      *(undefined8 *)(puVar2 + 0x28) = param_5;
      uStack_68 = 0x101a1c3f0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100f1c768;
      puStack_70 = &UNK_11042ce50;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar1);
      func_0x000107c440d8(param_2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(param_1);
      func_0x000107c615e8(param_2);
    }
  }
  return;
}



/* Entry: 101a1a95c; end: 101a1aa17;  */

void FUN_101a1a95c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_101a1aa18();
  if ((*(byte *)(unaff_x20 + 0x50) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x50) = 1;
    func_0x000107c60f3c(*(undefined8 *)(unaff_x20 + 0x48));
  }
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    func_0x000107c4218c();
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c60bd0(lVar1);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 101a1aa18; end: 101a1ab6b;  */

void FUN_101a1aa18(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = 0;
  func_0x000107c5f7f0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar3 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12;
  lVar7 = *(long *)(unaff_x20 + 0x70);
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    func_0x000107c5f830(lVar6);
    *puVar3 = *(undefined8 *)(unaff_x20 + 0x98);
    (**(code **)(lVar8 + 0x68))
              (puVar3,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788
               ,lVar1);
    func_0x000107c5f858(lVar5,lVar6,puVar3);
    (**(code **)(lVar8 + 8))(puVar3,lVar1);
    pcVar4 = *(code **)(lVar9 + 8);
    (*pcVar4)(lVar6,lVar2);
    func_0x000107c60058(lVar5);
    func_0x000107c61574(lVar7);
    (*pcVar4)(lVar5,lVar2);
  }
  return;
}



/* Entry: 101a1ab6c; end: 101a1ab87;  */

void FUN_101a1ab6c(undefined8 param_1)

{
  FUN_101a1a95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0xa9,7);
  return;
}



/* Entry: 101a1ab88; end: 101a1af93;  */

undefined ** FUN_101a1ab88(undefined *param_1,undefined **param_2,undefined **param_3)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined **ppuVar9;
  code *pcVar10;
  undefined **unaff_x23;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [32];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *unaff_x20;
  ppuVar9 = (undefined **)unaff_x20[9];
  func_0x000107c5ffb0();
  func_0x000107c5f7f4();
  if (((ulong)param_3 & 1) == 0) {
    ppuVar2 = (undefined **)unaff_x20[6];
    param_3 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      func_0x000107c61174();
      func_0x000107c60ad0(param_2,0);
      ppuVar3 = param_2;
      func_0x000107c60aa8();
      if (ppuVar3 == (undefined **)0x0) {
        func_0x000107c60ae0(param_2,0);
        FUN_101a1c124();
        func_0x000107c613f8(&UNK_11042cc90,param_2,0,0);
        puVar5 = (undefined *)0x4;
        param_3 = param_2;
      }
      else {
        ppuVar9 = param_2;
        func_0x000107c60ac8();
        ppuVar7 = param_2;
        func_0x000107c60ab8();
        ppuVar4 = param_2;
        func_0x000107c60ab0();
        if (((0 < (long)ppuVar9) && (0 < (long)ppuVar7)) && (0 < (long)ppuVar4)) {
          if ((ulong)ppuVar9 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1af8c);
            (*pcVar10)();
          }
          if ((ulong)ppuVar7 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1af90);
            (*pcVar10)();
          }
          func_0x000107c30e40(auStack_98,ppuVar9,ppuVar7,1,1,ppuVar4);
          pcStack_a8 = FUN_101a1b2c0;
          puStack_a0 = (undefined *)0x0;
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0x42000000;
          pcStack_b8 = (code *)&UNK_1000f6b44;
          puStack_b0 = &UNK_11042ccc0;
          ppuVar9 = &puStack_c8;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c30e44(ppuVar3,auStack_98,ppuVar9);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar9);
          unaff_x23 = (undefined **)0x0;
          func_0x000101a1bacc();
          func_0x000107c613fc();
          puVar5 = (undefined *)0x0;
          func_0x000107c60f6c();
          unaff_x23[4] = (undefined *)0x0;
          unaff_x23[5] = (undefined *)0x0;
          unaff_x23[3] = puVar5;
          unaff_x23[2] = param_1;
          func_0x000107c61174();
          ppuVar4 = ppuVar2;
          func_0x000107c50104();
          func_0x000107c61180();
          uVar1 = *(undefined4 *)(unaff_x20 + 3);
          uVar13 = unaff_x20[8];
          uVar6 = uVar13;
          func_0x000107c6157c(uVar13);
          func_0x000107c5fdd0(param_1);
          pcStack_a8 = (code *)0x101a1c180;
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0x42000000;
          pcStack_b8 = (code *)0x101a200a4;
          puStack_b0 = &UNK_11042cce8;
          ppuVar9 = &puStack_c8;
          puStack_a0 = (undefined *)uVar13;
          func_0x000107c60bc4(ppuVar9);
          pcVar10 = (code *)ppuVar4[2];
          func_0x000107c6157c(uVar13);
          ppuVar7 = ppuVar4;
          (*pcVar10)(ppuVar4,ppuVar3,uVar1,ppuVar9,uVar6);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61574(uVar13);
          func_0x000107c61170(uVar6);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61574(puStack_a0);
          puVar5 = &UNK_11042cd20;
          param_3 = (undefined **)0x38;
          func_0x000107c613fc(&UNK_11042cd20,0x38,7);
          *(undefined ***)(puVar5 + 0x10) = unaff_x23;
          *(undefined ***)(puVar5 + 0x18) = param_2;
          *(undefined8 *)(puVar5 + 0x20) = 0;
          *(undefined ***)(puVar5 + 0x28) = param_2;
          *(undefined8 *)(puVar5 + 0x30) = uVar12;
          pcStack_a8 = (code *)0x101a1c188;
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0x42000000;
          pcStack_b8 = FUN_101a200f0;
          puStack_b0 = &UNK_11042cd38;
          ppuVar9 = &puStack_c8;
          puStack_a0 = puVar5;
          func_0x000107c60bc4();
          puVar5 = puStack_a0;
          func_0x000107c61174(param_2);
          func_0x000107c6157c(unaff_x23);
          func_0x000107c61574(puVar5);
          func_0x000107c4db80(ppuVar7);
          func_0x000107c61170(ppuVar2);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(ppuVar3);
          func_0x000107c61170();
          goto LAB_101a1af44;
        }
        func_0x000107c60ae0(param_2,0);
        FUN_101a1c124();
        func_0x000107c613f8(&UNK_11042cc90,param_2,0,0);
        puVar5 = (undefined *)0x8;
        param_3 = param_2;
        unaff_x23 = ppuVar3;
      }
      param_3[1] = puVar5;
      *param_3 = (undefined *)0x0;
      func_0x000107c61654();
      ppuVar7 = ppuVar2;
      func_0x000107c61170();
      ppuVar9 = ppuVar2;
      goto LAB_101a1af44;
    }
  }
  FUN_101a1c124();
  ppuVar7 = (undefined **)&UNK_11042cc90;
  func_0x000107c613f8(&UNK_11042cc90,param_3,0,0);
  param_3[1] = (undefined *)0x2;
  *param_3 = (undefined *)0x0;
  func_0x000107c61654();
LAB_101a1af44:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return unaff_x23;
  }
  func_0x000107c60e78();
  func_0x000107c60ad0();
  ppuVar2 = ppuVar7;
  func_0x000107c60aa8();
  if (ppuVar2 == (undefined **)0x0) {
    FUN_101a1c124();
    func_0x000107c613f8(&UNK_11042cc90,ppuVar2,0,0);
    ppuVar2[1] = (undefined *)0x4;
    *ppuVar2 = (undefined *)0x0;
    func_0x000107c61654();
    func_0x000107c60ae0(ppuVar7,1);
  }
  else {
    ppuVar2 = ppuVar7;
    func_0x000107c60ac8();
    ppuVar3 = ppuVar7;
    func_0x000107c60ab8();
    ppuVar4 = ppuVar7;
    func_0x000107c60ab0();
    if ((*(char *)(ppuVar9 + 0xd) == '\x01') && (param_3 != (undefined **)0x0)) {
      puVar5 = param_3[2];
      if (puVar5 != (undefined *)0x0) {
        if ((long)ppuVar4 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2b0);
          (*pcVar10)();
        }
        if (0x7fffffff < (long)ppuVar4) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2b4);
          (*pcVar10)();
        }
        puVar11 = ppuVar9[0xc];
        ppuVar9 = param_3 + 7;
        while( true ) {
          dVar14 = (double)(long)(double)ppuVar9[-3];
          if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b270);
            (*pcVar10)();
          }
          if (dVar14 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b274);
            (*pcVar10)();
          }
          if (2147483648.0 <= dVar14) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b278);
            (*pcVar10)();
          }
          dVar14 = (double)(long)(double)ppuVar9[-2];
          if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b27c);
            (*pcVar10)();
          }
          if (dVar14 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b280);
            (*pcVar10)();
          }
          if (2147483648.0 <= dVar14) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b284);
            (*pcVar10)();
          }
          dVar14 = (double)(long)(double)ppuVar9[-1];
          if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b288);
            (*pcVar10)();
          }
          if (dVar14 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b28c);
            (*pcVar10)();
          }
          if (2147483648.0 <= dVar14) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b290);
            (*pcVar10)();
          }
          dVar14 = (double)(long)(double)*ppuVar9;
          if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b294);
            (*pcVar10)();
          }
          if (dVar14 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b298);
            (*pcVar10)();
          }
          if (2147483648.0 <= dVar14) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b29c);
            (*pcVar10)();
          }
          puVar8 = puVar11;
          func_0x000107c5d76c();
          if (((ulong)puVar8 & 1) == 0) break;
          puVar5 = puVar5 + -1;
          ppuVar9 = ppuVar9 + 4;
          if (puVar5 == (undefined *)0x0) {
LAB_101a1b23c:
            func_0x000107c60ae0(ppuVar7,1);
            return ppuVar7;
          }
        }
        if (0x7fffffff < (long)ppuVar2) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2b8);
          (*pcVar10)();
        }
        if (((long)ppuVar2 < -0x80000000) || ((long)ppuVar3 < -0x80000000)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2bc);
          (*pcVar10)();
        }
        if (0x7fffffff < (long)ppuVar3) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2c0);
          (*pcVar10)();
        }
        func_0x000107c5d770(puVar11);
        goto LAB_101a1b23c;
      }
    }
    else {
      if (0x7fffffff < (long)ppuVar2) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2a0);
        (*pcVar10)();
      }
      if (0x7fffffff < (long)ppuVar3) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2a4);
        (*pcVar10)();
      }
      if ((((long)ppuVar2 < -0x80000000) || ((long)ppuVar3 < -0x80000000)) ||
         ((long)ppuVar4 < -0x80000000)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2a8);
        (*pcVar10)();
      }
      if (0x7fffffff < (long)ppuVar4) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101a1b2ac);
        (*pcVar10)();
      }
      func_0x000107c5d770(ppuVar9[0xc]);
      *(undefined1 *)(ppuVar9 + 0xd) = 1;
    }
    func_0x000107c60ae0(ppuVar7,1);
  }
  return ppuVar7;
}



/* Entry: 101a1af94; end: 101a1b2bf;  */

void FUN_101a1af94(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  
  func_0x000107c60ad0(param_1,1);
  puVar2 = param_1;
  func_0x000107c60aa8();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_101a1c124();
    func_0x000107c613f8(&UNK_11042cc90,puVar2,0,0);
    puVar2[1] = 4;
    *puVar2 = 0;
    func_0x000107c61654();
    func_0x000107c60ae0(param_1,1);
  }
  else {
    puVar2 = param_1;
    func_0x000107c60ac8();
    puVar3 = param_1;
    func_0x000107c60ab8();
    puVar4 = param_1;
    func_0x000107c60ab0();
    if ((*(char *)(unaff_x20 + 0x68) == '\x01') && (param_2 != 0)) {
      lVar7 = *(long *)(param_2 + 0x10);
      if (lVar7 != 0) {
        if ((long)puVar4 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2b0);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)puVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2b4);
          (*pcVar1)();
        }
        uVar8 = *(ulong *)(unaff_x20 + 0x60);
        pdVar6 = (double *)(param_2 + 0x38);
        while( true ) {
          dVar9 = (double)(long)pdVar6[-3];
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b270);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b274);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b278);
            (*pcVar1)();
          }
          dVar9 = (double)(long)pdVar6[-2];
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b27c);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b280);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b284);
            (*pcVar1)();
          }
          dVar9 = (double)(long)pdVar6[-1];
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b288);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b28c);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b290);
            (*pcVar1)();
          }
          dVar9 = (double)(long)*pdVar6;
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b294);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b298);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b29c);
            (*pcVar1)();
          }
          uVar5 = uVar8;
          func_0x000107c5d76c();
          if ((uVar5 & 1) == 0) break;
          lVar7 = lVar7 + -1;
          pdVar6 = pdVar6 + 4;
          if (lVar7 == 0) {
LAB_101a1b23c:
            func_0x000107c60ae0(param_1,1);
            return;
          }
        }
        if (0x7fffffff < (long)puVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2b8);
          (*pcVar1)();
        }
        if (((long)puVar2 < -0x80000000) || ((long)puVar3 < -0x80000000)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2bc);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)puVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2c0);
          (*pcVar1)();
        }
        func_0x000107c5d770(uVar8);
        goto LAB_101a1b23c;
      }
    }
    else {
      if (0x7fffffff < (long)puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2a0);
        (*pcVar1)();
      }
      if (0x7fffffff < (long)puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2a4);
        (*pcVar1)();
      }
      if ((((long)puVar2 < -0x80000000) || ((long)puVar3 < -0x80000000)) ||
         ((long)puVar4 < -0x80000000)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2a8);
        (*pcVar1)();
      }
      if (0x7fffffff < (long)puVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1b2ac);
        (*pcVar1)();
      }
      func_0x000107c5d770(*(undefined8 *)(unaff_x20 + 0x60));
      *(undefined1 *)(unaff_x20 + 0x68) = 1;
    }
    func_0x000107c60ae0(param_1,1);
  }
  return;
}



/* Entry: 101a1b2c0; end: 101a1b2c3;  */

void FUN_101a1b2c0(void)

{
  return;
}



/* Entry: 101a1b2c4; end: 101a1b7bb;  */

/* WARNING: Possible PIC construction at 0x000101a1b30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a1b310) */

void FUN_101a1b2c4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000101a1b338();
  func_0x000107c4b940(*(undefined8 *)(param_2 + 0x10));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  *(long *)(param_2 + 0x20) = lVar1;
  func_0x000107c61434(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101a1b7bc; end: 101a1b83b;  */

void FUN_101a1b7bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a1b83c; end: 101a1b853;  */

void FUN_101a1b83c(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101a1b854; end: 101a1b9b7;  */

undefined8 * FUN_101a1b854(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 101a1b9b8; end: 101a1baab;  */

int FUN_101a1b9b8(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff2 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffff3;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0xd < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0xc;
  }
  return iVar1;
}



/* Entry: 101a1baac; end: 101a1baeb;  */

void FUN_101a1baac(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0df0);
  return;
}



/* Entry: 101a1baec; end: 101a1baff;  */

void FUN_101a1baec(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11042ccb0;
  if (lRam0000000112debe40 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112debe40 = param_1;
  }
  return;
}



/* Entry: 101a1bb00; end: 101a1bb4b;  */

void FUN_101a1bb00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10d9b7db8;
  func_0x000107c61520(&UNK_10d9b7db8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ_11034f618)
            (uVar2,uVar3,param_3,puVar1);
  return;
}



/* Entry: 101a1bb4c; end: 101a1bb6f;  */

void FUN_101a1bb4c(void)

{
  FUN_101a1bc70(0x112debe48,&UNK_10d9b7d88);
  return;
}



/* Entry: 101a1bb70; end: 101a1bbab;  */

void FUN_101a1bb70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10d9b7db8;
  func_0x000107c61520(&UNK_10d9b7db8,param_1);
  func_0x000107c5f0a8(param_1,puVar1);
  return;
}



/* Entry: 101a1bbac; end: 101a1bbf3;  */

void FUN_101a1bbac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10d9b7db8;
  func_0x000107c61520(&UNK_10d9b7db8);
  func_0x000107c5f0a4(param_1,param_2,puVar1);
  return;
}



/* Entry: 101a1bbf4; end: 101a1bc4b;  */

void FUN_101a1bbf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  puVar1 = &UNK_10d9b7db8;
  func_0x000107c61520(&UNK_10d9b7db8,param_2);
  func_0x000107c5f0a4(auStack_68,param_2,puVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a1bc4c; end: 101a1bc6f;  */

void FUN_101a1bc4c(void)

{
  FUN_101a1bc70(0x112debe50,&UNK_10dc4ffe0);
  return;
}



/* Entry: 101a1bc70; end: 101a1bcaf;  */

void FUN_101a1bc70(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000101343ae0(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101a1bcb0; end: 101a1bccb;  */

void FUN_101a1bcb0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a1bccc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a1bccc; end: 101a1bdcb;  */

undefined * FUN_101a1bccc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a1bdcc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112debf18;
    func_0x0001000285a8(0x112debf18,&UNK_10d9b7df0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a1bdcc; end: 101a1bf3f;  */

uint FUN_101a1bdcc(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  ulong uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c60ac0();
  uVar6 = 1;
  if ((int)lVar1 != 0x34323066) {
    if ((int)lVar1 != 0x34323076) {
      return 0;
    }
    uVar6 = 0;
  }
  plVar5 = *(long **)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
  func_0x000107c60a80(param_1,plVar5,0);
  if (param_1 == 0) {
LAB_101a1becc:
    func_0x000107c5faec(*(undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368);
  }
  else {
    lStack_48 = param_1;
    func_0x000107c615f0(param_1);
    puVar2 = &uStack_58;
    plVar5 = &lStack_48;
    func_0x000107c6147c(puVar2,plVar5,PTR___syXlN_11034f1a0 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar2 & 1) == 0) goto LAB_101a1becc;
    uVar3 = *(ulong *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368;
    func_0x000107c5faec();
    if (plStack_50 != (long *)0x0) {
      if (uStack_58 == uVar3 && plStack_50 == plVar5) {
        func_0x000107c6142c(plStack_50);
        func_0x000107c6142c(plVar5);
        func_0x000107c615e8(param_1);
LAB_101a1bf30:
        if (uVar6 != 0) {
          return 2;
        }
        return 3;
      }
      uVar4 = uStack_58;
      func_0x000107c605b8(uStack_58,plStack_50,uVar3,plVar5,0);
      func_0x000107c6142c(plStack_50);
      func_0x000107c6142c(plVar5);
      func_0x000107c615e8(param_1);
      if ((uVar4 & 1) != 0) goto LAB_101a1bf30;
      goto LAB_101a1beec;
    }
  }
  func_0x000107c6142c(plVar5);
  func_0x000107c615e8(param_1);
LAB_101a1beec:
  return uVar6 ^ 1;
}



/* Entry: 101a1bf40; end: 101a1c03f;  */

undefined * FUN_101a1bf40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = (undefined *)0x0;
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  func_0x000107c60aa0(uVar4,param_1,param_2,0x42475241,0,&puStack_40);
  puVar8 = puStack_40;
  uVar3 = (uint)param_1;
  if ((int)uVar4 == 0 && puStack_40 != (undefined *)0x0) {
    puVar5 = puStack_40;
    func_0x000107c61174();
    func_0x000107c60ad0();
    puVar6 = puVar5;
    func_0x000107c60aa8();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar5;
      func_0x000107c60ab0();
      if (SUB168(SEXT816((long)puVar7) * SEXT816(param_2),8) != (long)puVar7 * param_2 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a1c03c);
        (*pcVar2)();
      }
      func_0x000107c60ee4(puVar6);
    }
    uVar3 = 0;
    func_0x000107c60ae0(puVar5);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  puVar5 = puStack_40;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    func_0x000107c60058();
    if ((uVar3 & 0xff) == 1) {
      lVar9 = *(long *)(param_2 + 0x40);
      func_0x000107c4b940(*(undefined8 *)(lVar9 + 0x10));
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      uVar1 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      func_0x000107c61434(uVar1);
      func_0x000107c5d278();
      FUN_101a1c124();
      puVar8 = &UNK_11042cc90;
      func_0x000107c613f8(&UNK_11042cc90,puVar10,0,0);
      *puVar10 = uVar4;
      puVar10[1] = uVar1;
    }
    else {
      puVar8 = *(undefined **)(puVar5 + 0x28);
      if (puVar8 == (undefined *)0x0) {
        return *(undefined **)(puVar5 + 0x20);
      }
      if ((*(byte *)(param_2 + 0xa8) & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0xa0);
        func_0x000107c614b0(puVar8);
        FUN_101a22460(puVar8,uVar4);
        *(byte *)(param_2 + 0xa8) = (byte)puVar8 & 1;
      }
      else {
        func_0x000107c614b0(puVar8);
      }
    }
    func_0x000107c61654();
    return puVar8;
  }
  return puVar8;
}



/* Entry: 101a1c040; end: 101a1c123;  */

void FUN_101a1c040(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  
  func_0x000107c60058();
  if ((param_2 & 0xff) == 1) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x10));
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    puVar4 = *(undefined8 **)(lVar2 + 0x10);
    func_0x000107c61434(uVar1);
    func_0x000107c5d278();
    FUN_101a1c124();
    func_0x000107c613f8(&UNK_11042cc90,puVar4,0,0);
    *puVar4 = uVar3;
    puVar4[1] = uVar1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) {
      return;
    }
    if ((*(byte *)(unaff_x20 + 0xa8) & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
      func_0x000107c614b0(lVar2);
      FUN_101a22460(lVar2,uVar3);
      *(byte *)(unaff_x20 + 0xa8) = (byte)lVar2 & 1;
    }
    else {
      func_0x000107c614b0(lVar2);
    }
  }
  func_0x000107c61654();
  return;
}



/* Entry: 101a1c124; end: 101a1c163;  */

void FUN_101a1c124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112debf08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b7b78;
  func_0x000107c61520(&UNK_10d9b7b78,&UNK_11042cc90);
  puRam0000000112debf08 = puVar1;
  return;
}



/* Entry: 101a1c164; end: 101a1c197;  */

void FUN_101a1c164(long param_1,long param_2)

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



/* Entry: 101a1c198; end: 101a1c34b;  */

undefined * FUN_101a1c198(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c41208();
    func_0x000107c61180();
    puVar5 = (undefined *)0x0;
    if (param_2 != 0) {
      uVar2 = 0;
      FUN_101a1c34c(0);
      uVar3 = param_2;
      func_0x000107c5fc54(param_2,uVar2);
      func_0x000107c61170(param_2);
      if (uVar3 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar6 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar6 = uVar3;
        }
        func_0x000107c60480();
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
      if (uVar6 == 0) {
        func_0x000107c6142c(uVar3);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        FUN_101a1bcb0(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1c34c);
          (*pcVar1)();
        }
        uVar7 = 0;
        do {
          if ((uVar3 & 0xc000000000000001) == 0) {
            uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
            func_0x000107c61174(uVar4);
            uVar2 = param_1;
          }
          else {
            uVar4 = uVar7;
            FUN_101a22288(uVar7,uVar3);
            uVar2 = param_1;
          }
          func_0x000107c5e9e0();
          uVar8 = uVar2;
          func_0x000107c5e9f0(uVar4);
          uVar9 = uVar8;
          func_0x000107c5e304(uVar4);
          uVar10 = uVar9;
          func_0x000107c44d98(uVar4);
          param_1 = uVar10;
          func_0x000107c61170(uVar4);
          uVar4 = *(ulong *)(puVar5 + 0x10);
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
            FUN_101a1bcb0(1 < *(ulong *)(puVar5 + 0x18),uVar4 + 1,1);
          }
          uVar7 = uVar7 + 1;
          *(ulong *)(puVar5 + 0x10) = uVar4 + 1;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x20) = uVar2;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x28) = uVar8;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x30) = uVar9;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x38) = uVar10;
        } while (uVar6 != uVar7);
        func_0x000107c6142c(uVar3);
      }
    }
  }
  return puVar5;
}



/* Entry: 101a1c34c; end: 101a1c38f;  */

void FUN_101a1c34c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112debf10 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8528;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112debf10 = puVar1;
  return;
}



/* Entry: 101a1c390; end: 101a1c3c7;  */

void FUN_101a1c390(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a1c3c8; end: 101a1c413;  */

void FUN_101a1c3c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar8 = auStack_88;
  func_0x000107c61428(lVar1 + 0x10,puVar8,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      puVar4 = PTR_PTR_1126bcf68;
      func_0x000107c610f8(PTR_PTR_1126bcf68);
      func_0x00010006c00c(lVar3,puVar8);
      lVar2 = lVar3;
      func_0x000107c5ee20(lVar3,puVar8);
      func_0x000107c45ae0(puVar4);
      func_0x000107c61170(lVar2);
      func_0x00010006c090(lVar3,puVar8);
      puVar5 = PTR_PTR_1126a8518;
      func_0x000107c610f8(PTR_PTR_1126a8518);
      func_0x000107c453e4();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c53ffc(puVar5);
      func_0x000107c61170(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c57ed8(puVar5);
      func_0x000107c61170(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5a2c4(puVar5);
      func_0x000107c61170(puVar6);
      dVar10 = (double)*(long *)(lVar1 + 0x98) * 1000.0 * 0.65;
      dVar11 = 1500.0;
      if (dVar10 <= 1500.0) {
        dVar11 = dVar10;
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(dVar11);
      func_0x000107c52938(puVar5);
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126df060;
      func_0x000107c61168();
      func_0x000107c43be4();
      func_0x000107c61180();
      func_0x000107c61174(puVar5);
      puVar7 = puVar6;
      func_0x000107c40b90();
      func_0x000107c61180();
      func_0x00010006c090(lVar3,puVar8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      uVar9 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined **)(lVar1 + 0x30) = puVar7;
      func_0x000107c61574(lVar1);
      func_0x000107c61170(uVar9);
    }
  }
  return;
}



/* Entry: 101a1c414; end: 101a1c457;  */

void FUN_101a1c414(long param_1,long *param_2,long param_3)

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



/* Entry: 101a1c458; end: 101a1c48f;  */

void FUN_101a1c458(long param_1,long param_2)

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



/* Entry: 101a1c490; end: 101a1d2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101a1c490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined4 param_7,long param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  long lVar7;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112debf28) = 0;
  lVar7 = _DAT_112debf30;
  lVar5 = 0;
  func_0x000101a1b81c();
  func_0x000107c613fc();
  puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x10) = puVar6;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0xe000000000000000;
  *(long *)(unaff_x20 + lVar7) = lVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112debf38) = 0;
  lVar7 = _DAT_112debf40;
  func_0x000107c60f34();
  *(undefined **)(unaff_x20 + lVar7) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_112debf48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112debf50) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112debf58) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112debf60);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112debf68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(long *)(unaff_x20 + _DAT_112debf70) = param_6;
  *(undefined4 *)(unaff_x20 + _DAT_112debf78) = param_7;
  *(long *)(unaff_x20 + _DAT_112debf80) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112debf88) = param_9;
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  lVar7 = param_8;
  func_0x000107c615f0();
  bVar3 = (byte)lVar7;
  func_0x000109128154();
  lVar7 = param_8;
  func_0x000109128168();
  *(byte *)(unaff_x20 + _DAT_112debf90) = bVar3 & (byte)lVar7;
  if (param_8 == 0) {
    lVar5 = 2;
  }
  else {
    func_0x000107c615f0(param_8);
    uVar8 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efc94e0);
    lVar5 = param_8;
    func_0x000107c4980c();
    func_0x000107c615e8(param_8);
    func_0x000107c61170(uVar8);
    lVar5 = (long)(int)lVar5;
  }
  *(long *)(unaff_x20 + _DAT_112debf98) = lVar5;
  puVar9 = auStack_70;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  if (param_8 == 0) {
    iVar4 = 0;
  }
  else {
    func_0x000107c615f0(param_8);
    uVar8 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efc9480);
    lVar5 = param_8;
    func_0x000107c3ebd4();
    iVar4 = (int)lVar5;
    func_0x000107c615e8(param_8);
    func_0x000107c61170(uVar8);
  }
  lVar5 = _DAT_112debf40;
  func_0x000107c60f38(*(undefined8 *)(puVar9 + _DAT_112debf40));
  lVar10 = param_6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar11 = lVar10;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar11 != 0) {
      puVar6 = &UNK_11042cef8;
      func_0x000107c613fc(&UNK_11042cef8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,puVar9);
      bVar2 = (byte)lVar7 & 1;
      if (iVar4 != 0) {
        puVar12 = &UNK_11042cf70;
        func_0x000107c613fc(&UNK_11042cf70,0x22,7);
        *(undefined **)(puVar12 + 0x10) = puVar6;
        *(undefined8 *)(puVar12 + 0x18) = param_1;
        puVar12[0x20] = bVar3;
        puVar12[0x21] = bVar2;
        pcStack_80 = (code *)0x101a1d308;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100f1c768;
        puStack_88 = &UNK_11042cf88;
        ppuVar13 = &puStack_a0;
        puStack_78 = puVar12;
        func_0x000107c60bc4(ppuVar13);
        puVar6 = puStack_78;
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar6);
        func_0x000107c440d8(lVar11);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_6);
        func_0x000107c615e8(param_8);
        func_0x000107c615e8(param_9);
        func_0x000107c60bd0(ppuVar13);
        return puVar9;
      }
      puVar12 = &UNK_11042cf20;
      func_0x000107c613fc(&UNK_11042cf20,0x22,7);
      *(undefined **)(puVar12 + 0x10) = puVar6;
      *(undefined8 *)(puVar12 + 0x18) = param_1;
      puVar12[0x20] = bVar3;
      puVar12[0x21] = bVar2;
      pcStack_80 = FUN_101a1d2dc;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100f1c768;
      puStack_88 = &UNK_11042cf38;
      ppuVar13 = &puStack_a0;
      puStack_78 = puVar12;
      func_0x000107c60bc4(ppuVar13);
      puVar6 = puStack_78;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar6);
      func_0x000107c440d8(lVar11);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_6);
      func_0x000107c615e8(param_8);
      func_0x000107c615e8(param_9);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c615e8(lVar11);
      return puVar9;
    }
  }
  if (puVar9[_DAT_112debf48] != '\x01') {
    puVar9[_DAT_112debf48] = 1;
    func_0x000107c60f3c(*(undefined8 *)(puVar9 + lVar5));
  }
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_1);
  return puVar9;
}



/* Entry: 101a1d2dc; end: 101a1d317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1d2dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar10 = auStack_78;
  func_0x000107c61428(lVar1 + 0x10,puVar10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c615e8(param_1);
      }
      else {
        lVar3 = lVar2;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar2);
        uVar4 = 0xd000000000000020;
        func_0x000107c5fadc(0xd000000000000020,0x800000010d9b7e70);
        lVar5 = param_1;
        func_0x000107c40b60();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        lVar2 = _DAT_112debf38;
        if (*(long *)(lVar1 + _DAT_112debf38) == 0) {
          uVar4 = 0;
        }
        else {
          func_0x000107c4218c();
          uVar4 = *(undefined8 *)(lVar1 + lVar2);
        }
        *(long *)(lVar1 + lVar2) = lVar5;
        func_0x000107c615f0(lVar5);
        func_0x000107c615e8(uVar4);
        puVar6 = PTR_PTR_1126bcf68;
        func_0x000107c610f8(PTR_PTR_1126bcf68);
        func_0x00010006c00c(lVar3,puVar10);
        lVar2 = lVar3;
        func_0x000107c5ee20(lVar3,puVar10);
        func_0x000107c45ae0(puVar6);
        func_0x000107c61170(lVar2);
        func_0x00010006c090(lVar3,puVar10);
        puVar7 = PTR_PTR_1126a8518;
        func_0x000107c610f8(PTR_PTR_1126a8518);
        func_0x000107c453e4();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c53ffc(puVar7);
        func_0x000107c61170(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c57ed8(puVar7);
        func_0x000107c61170(puVar8);
        puVar8 = PTR_PTR_1126df060;
        func_0x000107c61168();
        func_0x000107c43be4();
        func_0x000107c61180();
        func_0x000107c61174(puVar7);
        puVar9 = puVar8;
        func_0x000107c40b90();
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
        func_0x00010006c090(lVar3,puVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(param_1);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar7);
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112debf28);
        *(undefined **)(lVar1 + _DAT_112debf28) = puVar9;
        func_0x000107c61170(uVar4);
      }
    }
    if ((*(byte *)(lVar1 + _DAT_112debf48) & 1) == 0) {
      *(undefined1 *)(lVar1 + _DAT_112debf48) = 1;
      func_0x000107c60f3c(*(undefined8 *)(lVar1 + _DAT_112debf40));
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101a1d318; end: 101a1d343;  */

void FUN_101a1d318(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a1d344; end: 101a1d3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1d344(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  if ((*(byte *)(unaff_x20 + _DAT_112debf48) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112debf48) = 1;
    func_0x000107c60f3c(*(undefined8 *)(unaff_x20 + _DAT_112debf40));
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112debf28);
  if (lVar1 != 0) {
    func_0x000107c4218c();
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c60bd0(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_112debf38) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101a1d3f8; end: 101a1d41b; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass dealloc] */

void FUN_101a1d3f8(void)

{
  func_0x000107c61174();
  FUN_101a1d344();
  return;
}



/* Entry: 101a1d41c; end: 101a1d4db; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a1d490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a1d494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1d41c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112debf60 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112debf68 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112debf70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112debf28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112debf30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112debf80));
  return;
}



/* Entry: 101a1d4dc; end: 101a1d507; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass init] */

void FUN_101a1d4dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImageProcessSnapEditorRenderPass.ImageProcessSnapEditorRenderPass",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1d508);
  (*pcVar1)();
}



/* Entry: 101a1d508; end: 101a1d517; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass unloadWithError:] */

undefined8 FUN_101a1d508(void)

{
  return 1;
}



/* Entry: 101a1d518; end: 101a1d58b;  */

/* WARNING: Possible PIC construction at 0x000101a1d560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a1d564) */

void FUN_101a1d518(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000101a1b338();
  func_0x000107c4b940(*(undefined8 *)(param_2 + 0x10));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  *(long *)(param_2 + 0x20) = lVar1;
  func_0x000107c61434(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101a1d58c; end: 101a1d61f;  */

void FUN_101a1d58c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  func_0x000107c614b0(param_2);
  func_0x000107c614ac(uVar1);
  func_0x000107c60ae0(param_4,param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60060();
  return;
}



/* Entry: 101a1d620; end: 101a1d78f; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:] */

/* WARNING: Removing unreachable block (ram,0x000101a1d738) */
/* WARNING: Removing unreachable block (ram,0x000101a1d764) */
/* WARNING: Removing unreachable block (ram,0x000101a1d744) */

undefined8
FUN_101a1d620(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *param_7,undefined8 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar4 = param_7[2];
  if (param_3 != 0) {
    uVar3 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(param_3,uVar3);
  }
  if (param_4 != 0) {
    uVar3 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(param_4,uVar3);
  }
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  FUN_101a1de78(param_3,param_4,uVar1,uVar2,uVar4,param_9);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
  return 1;
}



/* Entry: 101a1d790; end: 101a1d797; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass textureType] */

undefined8 FUN_101a1d790(void)

{
  return 2;
}



/* Entry: 101a1d798; end: 101a1d7a3; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass inputBufferIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1d798(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + _DAT_112debf60))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112debf60);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a1d7a4; end: 101a1d7af; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass outputBufferIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1d7a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + _DAT_112debf68))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112debf68);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a1d7b0; end: 101a1d83b;  */

void FUN_101a1d7b0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + *param_3);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a1d83c; end: 101a1d867; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass lensIds] */

void FUN_101a1d83c(void)

{
  func_0x000107c5fe08(PTR___swiftEmptySetSingleton_11034f1d8,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a1d868; end: 101a1d913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a1d868(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a1d910);
    (*pcVar3)();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a1d914);
      (*pcVar3)();
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112debf60);
      uVar4 = puVar1[1];
      *puVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar1[1] = uVar2;
      func_0x000107c61434();
      func_0x000107c6142c(uVar4);
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar2 = *(undefined8 *)(param_2 + 0x28);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112debf68);
        uVar4 = puVar1[1];
        *puVar1 = *(undefined8 *)(param_2 + 0x20);
        puVar1[1] = uVar2;
        func_0x000107c61434();
        func_0x000107c6142c(uVar4);
        func_0x000107c615f0();
        return unaff_x20;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a1d90c);
      (*pcVar3)();
    }
  }
  return 0;
}



/* Entry: 101a1d914; end: 101a1d9af; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:] */

void FUN_101a1d914(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  }
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  FUN_101a1d868(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101a1d9b0; end: 101a1d9b7; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass isPixelBufferInputCompatible] */

undefined8 FUN_101a1d9b0(void)

{
  return 0;
}



/* Entry: 101a1d9b8; end: 101a1d9bf; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass requiresGPU] */

undefined8 FUN_101a1d9b8(void)

{
  return 0;
}



/* Entry: 101a1d9c0; end: 101a1d9c7; -[_TtC34SCImageProcessSnapEditorRenderPass32ImageProcessSnapEditorRenderPass isOutputDeterministicAndStatic] */

undefined8 FUN_101a1d9c0(void)

{
  return 0;
}



/* Entry: 101a1d9c8; end: 101a1dad7;  */

void FUN_101a1d9c8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  func_0x000107c60ad0(param_1,0);
  puVar2 = param_1;
  func_0x000107c60ab8();
  puVar3 = param_1;
  func_0x000107c60ab0();
  puVar4 = param_1;
  func_0x000107c60aa8();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000107c60ad0(param_2,0);
    puVar4 = param_2;
    func_0x000107c60aa8();
    if (puVar4 != (undefined8 *)0x0) {
      if (SUB168(SEXT816((long)puVar2) * SEXT816((long)puVar3),8) ==
          (long)puVar2 * (long)puVar3 >> 0x3f) {
        func_0x000107c610b4();
        func_0x000107c60ae0(param_1,0);
        func_0x000107c60ae0(param_2,0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a1dad8);
      (*pcVar1)();
    }
    func_0x000107c60ae0(param_1,0);
    param_1 = param_2;
  }
  func_0x000107c60ae0(param_1,0);
  func_0x000101a1f2d4();
  func_0x000107c613f8(&UNK_11042d0d0,param_1,0,0);
  param_1[1] = 4;
  *param_1 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 101a1dad8; end: 101a1dd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_101a1dad8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong **ppuVar15;
  ulong **ppuVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 uVar21;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar22;
  long extraout_x12;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  double dVar32;
  ulong *apuStack_2d0 [3];
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong uStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  undefined1 auStack_240 [32];
  ulong *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  long lStack_138;
  ulong *puStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  uVar21 = SUB84(&puStack_e0,0);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_1;
  func_0x000107c60ac8();
  uVar22 = param_1;
  func_0x000107c60ab8();
  uVar6 = param_1;
  func_0x000107c60ac0(param_1);
  func_0x000107c60ab0();
  puVar24 = (ulong *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar18 = auStack_d8;
  func_0x000107c61534();
  dVar32 = 9.88131291682493e-324;
  puVar24[3] = 4;
  puVar24[2] = 2;
  uVar7 = *(ulong *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  func_0x000107c5faec();
  puVar24[4] = uVar7;
  puVar24[5] = (ulong)puVar18;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  uVar7 = 0x112da99a0;
  puVar17 = &UNK_10d97c130;
  func_0x0001000285a8();
  puVar24[9] = uVar7;
  puVar24[6] = (ulong)puVar8;
  uVar7 = *(ulong *)PTR__kCVPixelBufferBytesPerRowAlignmentKey_11034a370;
  func_0x000107c5faec();
  puVar24[10] = uVar7;
  puVar24[0xb] = (ulong)puVar17;
  puVar24[0xf] = (ulong)PTR___sSiN_11034deb0;
  puVar24[0xc] = param_1;
  puVar25 = puVar24;
  func_0x000100214a84();
  func_0x000107c61588(puVar24);
  uVar27 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar24 + 4,2,uVar27);
  puStack_e0 = (ulong *)0x0;
  uVar27 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  puVar24 = puVar25;
  func_0x000107c5f9dc(puVar25,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c6142c(puVar25);
  puVar12 = puVar24;
  func_0x000107c60aa0(uVar27,uVar19,uVar22,uVar6);
  func_0x000107c61170(puVar24);
  puVar25 = puStack_e0;
  puVar24 = (ulong *)0x0;
  if (((int)uVar27 == 0) && (puStack_e0 != (ulong *)0x0)) {
    puVar24 = puStack_e0;
    func_0x000107c61174();
    func_0x000107c60ad0();
    puVar13 = puVar24;
    func_0x000107c60aa8();
    if (puVar13 != (ulong *)0x0) {
      puVar20 = puVar24;
      func_0x000107c60ab0();
      if (SUB168(SEXT816((long)puVar20) * SEXT816((long)uVar22),8) !=
          (long)((long)puVar20 * uVar22) >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1dd18);
        (*pcVar5)();
      }
      func_0x000107c60ee4(puVar13);
    }
    uVar19 = 0;
    func_0x000107c60ae0(puVar24);
    puVar24 = puVar25;
  }
  puVar25 = puStack_e0;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar24;
  }
  func_0x000107c60e78();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ab0(uVar19);
  uVar7 = uVar19;
  func_0x000107c60ab8();
  uVar22 = uVar19;
  func_0x000107c60ac8();
  func_0x000107c60ad0(puVar25,1);
  func_0x000107c60ad0(uVar19,0);
  puVar13 = puVar25;
  func_0x000107c60aa8();
  if ((puVar13 == (ulong *)0x0) || (uVar6 = uVar19, func_0x000107c60aa8(), uVar6 == 0)) {
    puVar11 = (undefined8 *)0x0;
    func_0x000101a1f2d4();
    puVar24 = (ulong *)&UNK_11042d0d0;
    puVar13 = (ulong *)0x0;
    puVar20 = (ulong *)0x0;
    func_0x000107c613f8();
    dVar32 = 0.0;
    puVar11[1] = 4;
    *puVar11 = 0;
    func_0x000107c61654();
  }
  else {
    if ((long)(uVar22 | uVar7) < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1de74);
      (*pcVar5)();
    }
    puVar20 = puVar25;
    func_0x000107c60ab0();
    uVar9 = uVar19;
    puStack_158 = puVar13;
    uStack_150 = uVar7;
    uStack_148 = uVar22;
    puStack_140 = puVar20;
    func_0x000107c60ab0();
    puVar13 = &uStack_178;
    puVar20 = (ulong *)0x0;
    uStack_178 = uVar6;
    uStack_170 = uVar7;
    uStack_168 = uVar22;
    uStack_160 = uVar9;
    func_0x000107c616c0(&puStack_158,&uStack_178);
  }
  func_0x000107c60ae0(uVar19,0);
  uVar7 = 1;
  puVar23 = puVar25;
  func_0x000107c60ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return puVar23;
  }
  func_0x000107c60e78();
  puStack_250 = (ulong *)CONCAT44(puStack_250._4_4_,uVar21);
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = 0;
  puStack_260 = puVar13;
  puStack_258 = puVar25;
  puStack_248 = puVar24;
  func_0x000107c5f7f0();
  lVar28 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  puVar31 = (undefined8 *)((long)apuStack_2d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar11 = (undefined8 *)0x0;
  func_0x000107c5f83c();
  lVar30 = puVar11[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar30 + 0x40));
  lVar29 = (long)puVar31 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((puVar23 == (ulong *)0x0) || (uVar7 == 0)) {
    func_0x000101a1f2d4();
    puVar24 = (ulong *)&UNK_11042d0d0;
    func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
    uVar27 = 5;
LAB_101a1ed80:
    puVar11[1] = uVar27;
    *puVar11 = 0;
    func_0x000107c61654();
  }
  else {
    puVar24 = (ulong *)((ulong)puVar23 & 0xffffffffffffff8);
    puStack_270 = puVar12;
    puStack_268 = puVar20;
    if ((ulong)puVar23 >> 0x3e != 0) {
      puVar25 = puVar23;
      if (-1 < (long)puVar23) {
        puVar25 = puVar24;
      }
      puStack_278 = puVar11;
      func_0x000107c60480();
      puVar11 = puStack_278;
      puVar2 = puStack_280;
      puVar3 = puStack_278;
      if (puVar25 == (ulong *)0x1) goto LAB_101a1df74;
LAB_101a1ed58:
      puStack_278 = puVar3;
      puStack_280 = puVar2;
      func_0x000101a1f2d4();
      puVar24 = (ulong *)&UNK_11042d0d0;
      func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
      uVar27 = 7;
      goto LAB_101a1ed80;
    }
    puVar2 = puStack_280;
    puVar3 = puStack_278;
    if (puVar24[2] != 1) goto LAB_101a1ed58;
LAB_101a1df74:
    uVar19 = uVar7 & 0xffffffffffffff8;
    if (uVar7 >> 0x3e == 0) {
      uVar22 = *(ulong *)(uVar19 + 0x10);
      puVar4 = (undefined8 *)(lVar29 - extraout_x12);
      puVar2 = puStack_280;
      puVar3 = puStack_278;
    }
    else {
      uVar22 = uVar7;
      if (-1 < (long)uVar7) {
        uVar22 = uVar19;
      }
      puStack_280 = (undefined8 *)(lVar29 - extraout_x12);
      puStack_278 = puVar11;
      func_0x000107c60480();
      puVar4 = puStack_280;
      puVar2 = puStack_280;
      puVar11 = puStack_278;
      puVar3 = puStack_278;
    }
    puStack_278 = puVar11;
    puStack_280 = puVar4;
    puVar11 = puStack_278;
    if (uVar22 != 1) goto LAB_101a1ed58;
    if (((ulong)puVar23 & 0xc000000000000001) == 0) {
      if (puVar24[2] == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1eee0);
        (*pcVar5)();
      }
      puVar25 = (ulong *)puVar23[4];
      func_0x000107c615f0(puVar25);
      if ((uVar7 & 0xc000000000000001) == 0) goto LAB_101a1dfb4;
LAB_101a1eec8:
      puVar24 = (ulong *)0x0;
      FUN_101a220cc(0,uVar7);
    }
    else {
      puVar25 = (ulong *)0x0;
      FUN_101a220cc(0,puVar23);
      if ((uVar7 & 0xc000000000000001) != 0) goto LAB_101a1eec8;
LAB_101a1dfb4:
      if (*(long *)(uVar19 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1eee4);
        (*pcVar5)();
      }
      puVar24 = *(ulong **)(uVar7 + 0x20);
      func_0x000107c615f0(puVar24);
    }
    puVar12 = puVar25;
    func_0x000107c615f0();
    func_0x000107c4f9b4();
    puVar13 = puVar25;
    func_0x000107c61104();
    if (puVar12 == (ulong *)0x0) {
LAB_101a1e09c:
      func_0x000101a1f2d4();
      func_0x000107c613f8(&UNK_11042d0d0,puVar13,0,0);
      puVar13[1] = 6;
      *puVar13 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(puVar25);
      func_0x000107c615e8(puVar24);
    }
    else {
      puVar20 = puVar24;
      func_0x000107c615f0();
      func_0x000107c5e8e0();
      puVar13 = puVar24;
      func_0x000107c61104();
      if (puVar20 == (ulong *)0x0) goto LAB_101a1e09c;
      func_0x000107c61174();
      func_0x000107c61174();
      if (((ulong)puStack_250 & 1) != 0) {
        func_0x000107c61028();
      }
      puVar13 = puStack_248;
      FUN_101a1d9c8(puVar12,puVar20);
      if (puVar13 != (ulong *)0x0) {
        func_0x000107c615e8(puVar25);
        func_0x000107c615e8(puVar24);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar20);
        puVar24 = puVar20;
        goto LAB_101a1ed8c;
      }
      puStack_298 = puVar13;
      puStack_290 = puVar25;
      puStack_288 = puVar24;
      puStack_250 = puVar12;
      puStack_248 = puVar20;
      func_0x000107c5f830(lVar29);
      puVar12 = puStack_258;
      *puVar31 = *(undefined8 *)((long)puStack_258 + _DAT_112debf98);
      (**(code **)(lVar28 + 0x68))
                (puVar31,*(undefined4 *)
                          PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,lVar10);
      puVar2 = puStack_280;
      func_0x000107c5f858(puStack_280,lVar29,puVar31);
      (**(code **)(lVar28 + 8))(puVar31,lVar10);
      pcVar5 = *(code **)(lVar30 + 8);
      (*pcVar5)(lVar29,puStack_278);
      puVar11 = puVar2;
      func_0x000107c5ffb0(*(undefined8 *)((long)puVar12 + _DAT_112debf40));
      func_0x000107c5f7f4();
      puVar25 = puStack_268;
      lVar10 = _DAT_112debf50;
      if (((ulong)puVar11 & 1) == 0) {
        puVar13 = *(ulong **)((long)puVar12 + _DAT_112debf28);
        puVar11 = (undefined8 *)0x0;
        if (puVar13 == (ulong *)0x0) goto LAB_101a1e5d0;
        puVar20 = (ulong *)((ulong)puStack_268 >> 0x20);
        if (*(char *)((long)puVar12 + _DAT_112debf90) == '\x01') {
          puVar23 = *(ulong **)((long)puVar12 + _DAT_112debf50);
          func_0x000107c61174();
          puVar20 = puStack_250;
          if (puVar23 == (ulong *)0x0) {
            puVar24 = puStack_248;
            FUN_101a1dad8();
            puVar11 = *(undefined8 **)((long)puVar12 + lVar10);
            *(ulong **)((long)puVar12 + lVar10) = puVar24;
            func_0x000107c61170();
            puVar23 = *(ulong **)((long)puVar12 + lVar10);
            if (puVar23 != (ulong *)0x0) goto LAB_101a1e200;
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
            puVar11[1] = 9;
            *puVar11 = 0;
            func_0x000107c61654();
            func_0x000107c615e8(puStack_290);
            func_0x000107c615e8(puStack_288);
            func_0x000107c61170(puVar20);
            goto LAB_101a1e618;
          }
LAB_101a1e200:
          puStack_2a0 = puVar13;
          func_0x000107c61174();
          puVar13 = puVar23;
          func_0x000107c60ac8();
          puVar24 = puStack_248;
          puVar14 = puStack_248;
          func_0x000107c60ac8();
          if (puVar13 != puVar14) {
LAB_101a1ea00:
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar14,0,0);
            puVar14[1] = 9;
            *puVar14 = 0;
            func_0x000107c61654();
            func_0x000107c615e8(puStack_290);
            func_0x000107c615e8(puStack_288);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puStack_2a0);
            (*pcVar5)(puVar2,puStack_278);
            func_0x000107c61170(puVar23);
            func_0x000107c61170(puVar24);
            goto LAB_101a1ed8c;
          }
          puVar13 = puVar23;
          func_0x000107c60ab8();
          puVar14 = puVar24;
          func_0x000107c60ab8();
          if (puVar13 != puVar14) goto LAB_101a1ea00;
          puVar13 = puVar23;
          func_0x000107c60ab0();
          puVar14 = puVar24;
          func_0x000107c60ab0();
          if (puVar13 != puVar14) goto LAB_101a1ea00;
          puVar13 = (ulong *)0x0;
          func_0x000107c60f6c();
          uStack_2a8 = CONCAT44(uStack_2a8._4_4_,*(undefined4 *)((long)puVar12 + _DAT_112debf78));
          func_0x000107c60ad0(puVar23,0);
          puVar24 = puVar23;
          func_0x000107c60aa8();
          if (puVar24 == (ulong *)0x0) {
            puVar24 = puVar23;
            func_0x000107c60ae0(puVar23,0);
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar24,0,0);
            puVar24[1] = 4;
            *puVar24 = 0;
            func_0x000107c61654();
            func_0x000107c61170(puVar13);
            func_0x000107c615e8(puStack_290);
            func_0x000107c615e8(puStack_288);
LAB_101a1ee8c:
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puStack_2a0);
            (*pcVar5)(puVar2,puStack_278);
          }
          else {
            puVar20 = puVar23;
            puStack_2b0 = puVar13;
            func_0x000107c60ac8();
            puVar13 = puVar23;
            func_0x000107c60ab8();
            puVar14 = puVar23;
            func_0x000107c60ab0();
            if ((((long)puVar20 < 1) || ((long)puVar13 < 1)) || ((long)puVar14 < 1)) {
              puVar24 = puVar23;
              func_0x000107c60ae0(puVar23,0);
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar24,0,0);
              puVar24[1] = 8;
              *puVar24 = 0;
              func_0x000107c61654();
              func_0x000107c61170(puStack_2b0);
              func_0x000107c615e8(puStack_290);
              func_0x000107c615e8(puStack_288);
              puVar20 = puStack_250;
              goto LAB_101a1ee8c;
            }
            if ((ulong)puVar20 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1f040);
              (*pcVar5)();
            }
            if ((ulong)puVar13 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1f044);
              (*pcVar5)();
            }
            func_0x000107c30e40(auStack_240,puVar20,puVar13,1,1,puVar14);
            pcStack_200 = (code *)0x101a1d510;
            puStack_1f8 = (undefined *)0x0;
            puStack_220 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0x42000000;
            pcStack_210 = (code *)&UNK_1000f6b44;
            puStack_208 = &UNK_11042d1a8;
            ppuVar15 = &puStack_220;
            func_0x000107c60bc4(ppuVar15);
            func_0x000107c30e44(puVar24,auStack_240,ppuVar15);
            func_0x000107c61180();
            puStack_2b8 = puVar24;
            func_0x000107c60bd0(ppuVar15);
            puVar13 = (ulong *)&UNK_11042d118;
            func_0x000107c613fc(&UNK_11042d118,0x18,7);
            apuStack_2d0[1] = puVar13 + 2;
            *apuStack_2d0[1] = 0;
            func_0x000107c61174();
            puVar24 = puStack_2a0;
            apuStack_2d0[2] = puVar23;
            func_0x000107c50104();
            func_0x000107c61180();
            lVar10 = *(long *)((long)puVar12 + _DAT_112debf30);
            func_0x000107c6157c(lVar10);
            puStack_220 = puStack_260;
            uStack_218 = CONCAT44((int)((ulong)puVar25 >> 0x20),(int)puStack_268);
            pcStack_210 = (code *)puStack_270;
            ppuVar15 = &puStack_220;
            func_0x000107c60a3c(ppuVar15);
            func_0x000107c5fdd0(dVar32 * 1000.0);
            pcStack_200 = (code *)0x101a1f314;
            puStack_220 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0x42000000;
            pcStack_210 = (code *)0x101a200a4;
            puStack_208 = &UNK_11042d1d0;
            ppuVar16 = &puStack_220;
            puStack_1f8 = (undefined *)lVar10;
            func_0x000107c60bc4(ppuVar16);
            pcVar26 = (code *)puVar24[2];
            func_0x000107c6157c(lVar10);
            puVar25 = puVar24;
            (*pcVar26)(puVar24,puStack_2b8,uStack_2a8 & 0xffffffff,ppuVar16,ppuVar15);
            func_0x000107c61180();
            puStack_270 = puVar25;
            func_0x000107c60bd0(puVar24);
            func_0x000107c61574(lVar10);
            func_0x000107c61170(ppuVar15);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c61574(puStack_1f8);
            puVar17 = &UNK_11042d208;
            func_0x000107c613fc(&UNK_11042d208,0x38,7);
            puVar24 = puStack_2b0;
            puVar25 = apuStack_2d0[2];
            *(ulong **)(puVar17 + 0x10) = puVar13;
            *(ulong **)(puVar17 + 0x18) = apuStack_2d0[2];
            *(undefined8 *)(puVar17 + 0x20) = 0;
            *(ulong **)(puVar17 + 0x28) = apuStack_2d0[2];
            *(ulong **)(puVar17 + 0x30) = puStack_2b0;
            pcStack_200 = FUN_101a1f360;
            puStack_220 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0x42000000;
            pcStack_210 = FUN_101a200f0;
            puStack_208 = &UNK_11042d220;
            ppuVar15 = &puStack_220;
            puStack_1f8 = puVar17;
            func_0x000107c60bc4(ppuVar15);
            puVar17 = puStack_1f8;
            func_0x000107c61174();
            puStack_268 = puVar13;
            puStack_260 = puVar25;
            func_0x000107c6157c(puVar13);
            func_0x000107c61174(puVar24);
            func_0x000107c61574(puVar17);
            puVar25 = puStack_270;
            func_0x000107c4db80(puStack_270);
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c61170(puVar25);
            puVar11 = puVar2;
            func_0x000107c60058();
            puVar25 = apuStack_2d0[1];
            if (((uint)puVar11 & 0xff) == 1) {
              func_0x000107c4b940(*(undefined8 *)(lVar10 + 0x10));
              uVar27 = *(undefined8 *)(lVar10 + 0x18);
              uVar1 = *(undefined8 *)(lVar10 + 0x20);
              puVar11 = *(undefined8 **)(lVar10 + 0x10);
              func_0x000107c61434(uVar1);
              func_0x000107c5d278();
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
              *puVar11 = uVar27;
              puVar11[1] = uVar1;
            }
            else {
              func_0x000107c61428(apuStack_2d0[1],&puStack_220,0,0);
              lVar10 = _DAT_112debf58;
              uVar7 = *puVar25;
              if (uVar7 == 0) {
                FUN_101a1dd1c(puStack_260,puStack_248);
                (*pcVar5)(puVar2,puStack_278);
                func_0x000107c61574(puStack_268);
                func_0x000107c615e8(puStack_290);
                func_0x000107c615e8(puStack_288);
                func_0x000107c61170(puStack_260);
                func_0x000107c615e8(puStack_2b8);
                func_0x000107c61170(puStack_248);
                func_0x000107c61170(puStack_250);
                func_0x000107c61170(puStack_2a0);
                func_0x000107c61170(puVar24);
                goto LAB_101a1ed8c;
              }
              if (*(char *)((long)puVar12 + _DAT_112debf58) == '\x01') {
                func_0x000107c614b0(uVar7);
              }
              else {
                uVar27 = *(undefined8 *)((long)puVar12 + _DAT_112debf88);
                func_0x000107c614b0(uVar7);
                FUN_101a22460(uVar7,uVar27);
                *(byte *)((long)puVar12 + lVar10) = (byte)uVar7 & 1;
              }
            }
            func_0x000107c61654();
            func_0x000107c61170(puVar24);
            func_0x000107c615e8(puStack_290);
            func_0x000107c615e8(puStack_288);
            func_0x000107c615e8(puStack_2b8);
            func_0x000107c61170(puStack_250);
            func_0x000107c61170(puStack_2a0);
            (*pcVar5)(puVar2,puStack_278);
            func_0x000107c61574(puStack_268);
            puVar23 = puStack_260;
          }
          func_0x000107c61170(puVar23);
          goto LAB_101a1e628;
        }
        func_0x000107c61174();
        uVar7 = 0;
        func_0x000107c60f6c();
        puVar24 = puStack_248;
        uVar21 = *(undefined4 *)((long)puVar12 + _DAT_112debf78);
        func_0x000107c60ad0(puStack_248,0);
        puVar25 = puVar24;
        func_0x000107c60aa8();
        if (puVar25 == (ulong *)0x0) {
          puVar25 = puVar24;
          func_0x000107c60ae0(puVar24,0);
          func_0x000101a1f2d4();
          func_0x000107c613f8(&UNK_11042d0d0,puVar25,0,0);
          puVar25[1] = 4;
          *puVar25 = 0;
          func_0x000107c61654();
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(puStack_290);
          func_0x000107c615e8(puStack_288);
          func_0x000107c61170(puStack_250);
          func_0x000107c61170(puVar13);
          (*pcVar5)(puVar2,puStack_278);
          func_0x000107c61170(puVar24);
        }
        else {
          puStack_2b8 = (ulong *)CONCAT44(puStack_2b8._4_4_,uVar21);
          puVar23 = puVar24;
          puStack_2b0 = puVar20;
          uStack_2a8 = uVar7;
          puStack_2a0 = puVar13;
          func_0x000107c60ac8();
          puVar20 = puVar24;
          func_0x000107c60ab8();
          func_0x000107c60ab0();
          puVar13 = puStack_248;
          if ((((long)puVar23 < 1) || ((long)puVar20 < 1)) || ((long)puVar24 < 1)) {
            puVar24 = puStack_248;
            func_0x000107c60ae0(puStack_248,0);
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar24,0,0);
            puVar24[1] = 8;
            *puVar24 = 0;
            func_0x000107c61654();
            func_0x000107c61170(uStack_2a8);
            func_0x000107c615e8(puStack_290);
            func_0x000107c615e8(puStack_288);
            func_0x000107c61170(puStack_250);
            func_0x000107c61170(puStack_2a0);
            (*pcVar5)(puVar2,puStack_278);
            func_0x000107c61170(puVar13);
            puVar24 = puVar13;
          }
          else {
            if ((ulong)puVar23 >> 0x1f != 0) goto LAB_101a1f034;
            if ((ulong)puVar20 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1f03c);
              (*pcVar5)();
            }
            func_0x000107c30e40(auStack_240,puVar23,puVar20,1,1,puVar24);
            pcStack_200 = (code *)0x101a1d514;
            puStack_1f8 = (undefined *)0x0;
            puStack_220 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0x42000000;
            pcStack_210 = (code *)&UNK_1000f6b44;
            puStack_208 = &UNK_11042d0e0;
            ppuVar15 = &puStack_220;
            func_0x000107c60bc4(ppuVar15);
            func_0x000107c30e44(puVar25,auStack_240,ppuVar15);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar15);
            puVar24 = (ulong *)&UNK_11042d118;
            func_0x000107c613fc(&UNK_11042d118,0x18,7);
            apuStack_2d0[2] = puVar24 + 2;
            *apuStack_2d0[2] = 0;
            func_0x000107c61174();
            puVar13 = puStack_2a0;
            func_0x000107c50104();
            func_0x000107c61180();
            lVar10 = *(long *)((long)puVar12 + _DAT_112debf30);
            func_0x000107c6157c(lVar10);
            puStack_220 = puStack_260;
            uStack_218 = CONCAT44((int)puStack_2b0,(int)puStack_268);
            pcStack_210 = (code *)puStack_270;
            ppuVar15 = &puStack_220;
            func_0x000107c60a3c(ppuVar15);
            func_0x000107c5fdd0(dVar32 * 1000.0);
            pcStack_200 = (code *)0x101a1f3d4;
            puStack_220 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0x42000000;
            pcStack_210 = (code *)0x101a200a4;
            puStack_208 = &UNK_11042d130;
            ppuVar16 = &puStack_220;
            puStack_1f8 = (undefined *)lVar10;
            func_0x000107c60bc4(ppuVar16);
            pcVar26 = (code *)puVar13[2];
            func_0x000107c6157c(lVar10);
            puVar20 = puVar13;
            puStack_260 = puVar25;
            (*pcVar26)(puVar13,puVar25,(ulong)puStack_2b8 & 0xffffffff,ppuVar16,ppuVar15);
            func_0x000107c61180();
            puStack_268 = puVar20;
            func_0x000107c60bd0(puVar13);
            func_0x000107c61574(lVar10);
            func_0x000107c61170(ppuVar15);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c61574(puStack_1f8);
            puVar17 = &UNK_11042d168;
            func_0x000107c613fc(&UNK_11042d168,0x38,7);
            puVar25 = puStack_248;
            uVar7 = uStack_2a8;
            *(ulong **)(puVar17 + 0x10) = puVar24;
            *(ulong **)(puVar17 + 0x18) = puStack_248;
            *(undefined8 *)(puVar17 + 0x20) = 0;
            *(ulong **)(puVar17 + 0x28) = puStack_248;
            *(ulong *)(puVar17 + 0x30) = uStack_2a8;
            pcStack_200 = (code *)0x101a1f3e0;
            puStack_220 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0x42000000;
            pcStack_210 = FUN_101a200f0;
            puStack_208 = &UNK_11042d180;
            ppuVar15 = &puStack_220;
            puStack_1f8 = puVar17;
            func_0x000107c60bc4(ppuVar15);
            puVar17 = puStack_1f8;
            func_0x000107c61174();
            puStack_270 = puVar25;
            puStack_248 = puVar24;
            func_0x000107c6157c(puVar24);
            func_0x000107c61174(uVar7);
            func_0x000107c61574(puVar17);
            puVar24 = puStack_268;
            func_0x000107c4db80(puStack_268);
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c61170(puVar24);
            puVar11 = puVar2;
            func_0x000107c60058();
            puVar13 = puStack_248;
            puVar25 = puStack_260;
            puVar24 = apuStack_2d0[2];
            if (((uint)puVar11 & 0xff) == 1) {
              func_0x000107c4b940(*(undefined8 *)(lVar10 + 0x10));
              uVar27 = *(undefined8 *)(lVar10 + 0x18);
              uVar1 = *(undefined8 *)(lVar10 + 0x20);
              puVar11 = *(undefined8 **)(lVar10 + 0x10);
              func_0x000107c61434(uVar1);
              func_0x000107c5d278();
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
              *puVar11 = uVar27;
              puVar11[1] = uVar1;
              func_0x000107c61654();
              func_0x000107c61170(uVar7);
              func_0x000107c615e8(puStack_290);
              func_0x000107c615e8(puStack_288);
              func_0x000107c615e8(puStack_260);
              func_0x000107c61170(puStack_250);
              func_0x000107c61170(puStack_2a0);
              (*pcVar5)(puVar2,puStack_278);
              puVar13 = puStack_248;
            }
            else {
              func_0x000107c61428(apuStack_2d0[2],&puStack_220,0,0);
              lVar10 = _DAT_112debf58;
              uVar19 = *puVar24;
              if (uVar19 == 0) {
                (*pcVar5)(puVar2,puStack_278);
                func_0x000107c61574(puVar13);
                func_0x000107c615e8(puStack_290);
                func_0x000107c615e8(puStack_288);
                func_0x000107c61170(puStack_270);
                func_0x000107c615e8(puVar25);
                func_0x000107c61170(uVar7);
                func_0x000107c61170(puStack_250);
                puVar24 = puStack_2a0;
                func_0x000107c61170(puStack_2a0);
                goto LAB_101a1ed8c;
              }
              if (*(char *)((long)puVar12 + _DAT_112debf58) == '\x01') {
                func_0x000107c614b0(uVar19);
              }
              else {
                uVar27 = *(undefined8 *)((long)puVar12 + _DAT_112debf88);
                func_0x000107c614b0(uVar19);
                FUN_101a22460(uVar19,uVar27);
                *(byte *)((long)puVar12 + lVar10) = (byte)uVar19 & 1;
              }
              func_0x000107c61654();
              func_0x000107c61170(uVar7);
              func_0x000107c615e8(puStack_290);
              func_0x000107c615e8(puStack_288);
              func_0x000107c615e8(puVar25);
              func_0x000107c61170(puStack_250);
              func_0x000107c61170(puStack_2a0);
              (*pcVar5)(puVar2,puStack_278);
            }
            func_0x000107c61574(puVar13);
            puVar24 = puStack_270;
            func_0x000107c61170(puStack_270);
          }
        }
      }
      else {
LAB_101a1e5d0:
        func_0x000101a1f2d4();
        func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
        puVar11[1] = 2;
        *puVar11 = 0;
        func_0x000107c61654();
        func_0x000107c615e8(puStack_290);
        func_0x000107c615e8(puStack_288);
        puVar13 = puStack_250;
LAB_101a1e618:
        func_0x000107c61170(puVar13);
        (*pcVar5)(puVar2,puStack_278);
LAB_101a1e628:
        puVar24 = puStack_248;
        func_0x000107c61170(puStack_248);
      }
    }
  }
LAB_101a1ed8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return puVar24;
  }
  func_0x000107c60e78();
LAB_101a1f034:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101a1f038);
  (*pcVar5)();
}



/* Entry: 101a1dd1c; end: 101a1de77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1dd1c(double param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  ulong *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong **ppuVar14;
  ulong **ppuVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar19;
  long extraout_x12;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 uVar24;
  ulong *unaff_x21;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong *apuStack_1f0 [3];
  ulong *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong uStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  undefined1 auStack_160 [32];
  ulong *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ab0(param_3);
  uVar7 = param_3;
  func_0x000107c60ab8();
  uVar17 = param_3;
  func_0x000107c60ac8();
  func_0x000107c60ad0(param_2,1);
  func_0x000107c60ad0(param_3,0);
  uVar22 = param_2;
  func_0x000107c60aa8();
  if ((uVar22 == 0) || (uVar20 = param_3, func_0x000107c60aa8(), uVar20 == 0)) {
    puVar10 = (undefined8 *)0x0;
    func_0x000101a1f2d4();
    unaff_x21 = (ulong *)&UNK_11042d0d0;
    puVar23 = (ulong *)0x0;
    puVar18 = (ulong *)0x0;
    func_0x000107c613f8();
    param_1 = 0.0;
    puVar10[1] = 4;
    *puVar10 = 0;
    func_0x000107c61654();
  }
  else {
    if ((long)(uVar17 | uVar7) < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1de74);
      (*pcVar6)();
    }
    uVar19 = param_2;
    func_0x000107c60ab0();
    uVar8 = param_3;
    uStack_78 = uVar22;
    uStack_70 = uVar7;
    uStack_68 = uVar17;
    uStack_60 = uVar19;
    func_0x000107c60ab0();
    puVar23 = &uStack_98;
    puVar18 = (ulong *)0x0;
    uStack_98 = uVar20;
    uStack_90 = uVar7;
    uStack_88 = uVar17;
    uStack_80 = uVar8;
    func_0x000107c616c0(&uStack_78,&uStack_98);
  }
  func_0x000107c60ae0(param_3,0);
  uVar17 = 1;
  uVar7 = param_2;
  func_0x000107c60ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  puStack_170 = (ulong *)CONCAT44(puStack_170._4_4_,param_7);
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = 0;
  puStack_180 = puVar23;
  uStack_178 = param_2;
  puStack_168 = unaff_x21;
  func_0x000107c5f7f0();
  lVar26 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar29 = (undefined8 *)((long)apuStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar10 = (undefined8 *)0x0;
  func_0x000107c5f83c();
  lVar28 = puVar10[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  lVar27 = (long)puVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((uVar7 == 0) || (uVar17 == 0)) {
    func_0x000101a1f2d4();
    func_0x000107c613f8(&UNK_11042d0d0,puVar10,0,0);
    uVar24 = 5;
LAB_101a1ed80:
    puVar10[1] = uVar24;
    *puVar10 = 0;
    func_0x000107c61654();
  }
  else {
    uVar22 = uVar7 & 0xffffffffffffff8;
    puStack_190 = param_6;
    puStack_188 = puVar18;
    if (uVar7 >> 0x3e != 0) {
      uVar20 = uVar7;
      if (-1 < (long)uVar7) {
        uVar20 = uVar22;
      }
      puStack_198 = puVar10;
      func_0x000107c60480();
      puVar10 = puStack_198;
      puVar3 = puStack_1a0;
      puVar4 = puStack_198;
      if (uVar20 == 1) goto LAB_101a1df74;
LAB_101a1ed58:
      puStack_198 = puVar4;
      puStack_1a0 = puVar3;
      func_0x000101a1f2d4();
      func_0x000107c613f8(&UNK_11042d0d0,puVar10,0,0);
      uVar24 = 7;
      goto LAB_101a1ed80;
    }
    puVar3 = puStack_1a0;
    puVar4 = puStack_198;
    if (*(long *)(uVar22 + 0x10) != 1) goto LAB_101a1ed58;
LAB_101a1df74:
    uVar20 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uVar19 = *(ulong *)(uVar20 + 0x10);
      puVar5 = (undefined8 *)(lVar27 - extraout_x12);
      puVar3 = puStack_1a0;
      puVar4 = puStack_198;
    }
    else {
      uVar19 = uVar17;
      if (-1 < (long)uVar17) {
        uVar19 = uVar20;
      }
      puStack_1a0 = (undefined8 *)(lVar27 - extraout_x12);
      puStack_198 = puVar10;
      func_0x000107c60480();
      puVar5 = puStack_1a0;
      puVar3 = puStack_1a0;
      puVar10 = puStack_198;
      puVar4 = puStack_198;
    }
    puStack_198 = puVar10;
    puStack_1a0 = puVar5;
    puVar10 = puStack_198;
    if (uVar19 != 1) goto LAB_101a1ed58;
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1eee0);
        (*pcVar6)();
      }
      puVar23 = *(ulong **)(uVar7 + 0x20);
      func_0x000107c615f0(puVar23);
      if ((uVar17 & 0xc000000000000001) == 0) goto LAB_101a1dfb4;
LAB_101a1eec8:
      puVar18 = (ulong *)0x0;
      FUN_101a220cc(0,uVar17);
    }
    else {
      puVar23 = (ulong *)0x0;
      FUN_101a220cc(0,uVar7);
      if ((uVar17 & 0xc000000000000001) != 0) goto LAB_101a1eec8;
LAB_101a1dfb4:
      if (*(long *)(uVar20 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1eee4);
        (*pcVar6)();
      }
      puVar18 = *(ulong **)(uVar17 + 0x20);
      func_0x000107c615f0(puVar18);
    }
    puVar11 = puVar23;
    func_0x000107c615f0();
    func_0x000107c4f9b4();
    puVar21 = puVar23;
    func_0x000107c61104();
    if (puVar11 == (ulong *)0x0) {
LAB_101a1e09c:
      func_0x000101a1f2d4();
      func_0x000107c613f8(&UNK_11042d0d0,puVar21,0,0);
      puVar21[1] = 6;
      *puVar21 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(puVar23);
      func_0x000107c615e8(puVar18);
    }
    else {
      puVar12 = puVar18;
      func_0x000107c615f0();
      func_0x000107c5e8e0();
      puVar21 = puVar18;
      func_0x000107c61104();
      if (puVar12 == (ulong *)0x0) goto LAB_101a1e09c;
      func_0x000107c61174();
      func_0x000107c61174();
      if (((ulong)puStack_170 & 1) != 0) {
        func_0x000107c61028();
      }
      puVar21 = puStack_168;
      FUN_101a1d9c8(puVar11,puVar12);
      if (puVar21 != (ulong *)0x0) {
        func_0x000107c615e8(puVar23);
        func_0x000107c615e8(puVar18);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar12);
        goto LAB_101a1ed8c;
      }
      puStack_1b8 = puVar21;
      puStack_1b0 = puVar23;
      puStack_1a8 = puVar18;
      puStack_170 = puVar11;
      puStack_168 = puVar12;
      func_0x000107c5f830(lVar27);
      uVar7 = uStack_178;
      *puVar29 = *(undefined8 *)(uStack_178 + _DAT_112debf98);
      (**(code **)(lVar26 + 0x68))
                (puVar29,*(undefined4 *)
                          PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,lVar9);
      puVar3 = puStack_1a0;
      func_0x000107c5f858(puStack_1a0,lVar27,puVar29);
      (**(code **)(lVar26 + 8))(puVar29,lVar9);
      pcVar6 = *(code **)(lVar28 + 8);
      (*pcVar6)(lVar27,puStack_198);
      puVar10 = puVar3;
      func_0x000107c5ffb0(*(undefined8 *)(uVar7 + _DAT_112debf40));
      func_0x000107c5f7f4();
      puVar23 = puStack_188;
      lVar9 = _DAT_112debf50;
      if (((ulong)puVar10 & 1) == 0) {
        puVar18 = *(ulong **)(uVar7 + _DAT_112debf28);
        puVar10 = (undefined8 *)0x0;
        if (puVar18 == (ulong *)0x0) goto LAB_101a1e5d0;
        uVar17 = (ulong)puStack_188 >> 0x20;
        if (*(char *)(uVar7 + _DAT_112debf90) == '\x01') {
          puVar21 = *(ulong **)(uVar7 + _DAT_112debf50);
          func_0x000107c61174();
          puVar11 = puStack_170;
          if (puVar21 == (ulong *)0x0) {
            puVar21 = puStack_168;
            FUN_101a1dad8();
            puVar10 = *(undefined8 **)(uVar7 + lVar9);
            *(ulong **)(uVar7 + lVar9) = puVar21;
            func_0x000107c61170();
            puVar21 = *(ulong **)(uVar7 + lVar9);
            if (puVar21 != (ulong *)0x0) goto LAB_101a1e200;
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar10,0,0);
            puVar10[1] = 9;
            *puVar10 = 0;
            func_0x000107c61654();
            func_0x000107c615e8(puStack_1b0);
            func_0x000107c615e8(puStack_1a8);
            func_0x000107c61170(puVar11);
            goto LAB_101a1e618;
          }
LAB_101a1e200:
          puStack_1c0 = puVar18;
          func_0x000107c61174();
          puVar12 = puVar21;
          func_0x000107c60ac8();
          puVar18 = puStack_168;
          puVar13 = puStack_168;
          func_0x000107c60ac8();
          if (puVar12 != puVar13) {
LAB_101a1ea00:
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar13,0,0);
            puVar13[1] = 9;
            *puVar13 = 0;
            func_0x000107c61654();
            func_0x000107c615e8(puStack_1b0);
            func_0x000107c615e8(puStack_1a8);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puStack_1c0);
            (*pcVar6)(puVar3,puStack_198);
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar18);
            goto LAB_101a1ed8c;
          }
          puVar12 = puVar21;
          func_0x000107c60ab8();
          puVar13 = puVar18;
          func_0x000107c60ab8();
          if (puVar12 != puVar13) goto LAB_101a1ea00;
          puVar12 = puVar21;
          func_0x000107c60ab0();
          puVar13 = puVar18;
          func_0x000107c60ab0();
          if (puVar12 != puVar13) goto LAB_101a1ea00;
          uVar17 = 0;
          func_0x000107c60f6c();
          uStack_1c8 = CONCAT44(uStack_1c8._4_4_,*(undefined4 *)(uVar7 + _DAT_112debf78));
          func_0x000107c60ad0(puVar21,0);
          puVar18 = puVar21;
          func_0x000107c60aa8();
          if (puVar18 == (ulong *)0x0) {
            puVar23 = puVar21;
            func_0x000107c60ae0(puVar21,0);
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar23,0,0);
            puVar23[1] = 4;
            *puVar23 = 0;
            func_0x000107c61654();
            func_0x000107c61170(uVar17);
            func_0x000107c615e8(puStack_1b0);
            func_0x000107c615e8(puStack_1a8);
LAB_101a1ee8c:
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puStack_1c0);
            (*pcVar6)(puVar3,puStack_198);
          }
          else {
            puVar11 = puVar21;
            uStack_1d0 = uVar17;
            func_0x000107c60ac8();
            puVar12 = puVar21;
            func_0x000107c60ab8();
            puVar13 = puVar21;
            func_0x000107c60ab0();
            if ((((long)puVar11 < 1) || ((long)puVar12 < 1)) || ((long)puVar13 < 1)) {
              puVar23 = puVar21;
              func_0x000107c60ae0(puVar21,0);
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar23,0,0);
              puVar23[1] = 8;
              *puVar23 = 0;
              func_0x000107c61654();
              func_0x000107c61170(uStack_1d0);
              func_0x000107c615e8(puStack_1b0);
              func_0x000107c615e8(puStack_1a8);
              puVar11 = puStack_170;
              goto LAB_101a1ee8c;
            }
            if ((ulong)puVar11 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f040);
              (*pcVar6)();
            }
            if ((ulong)puVar12 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f044);
              (*pcVar6)();
            }
            func_0x000107c30e40(auStack_160,puVar11,puVar12,1,1,puVar13);
            pcStack_120 = (code *)0x101a1d510;
            puStack_118 = (undefined *)0x0;
            puStack_140 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0x42000000;
            pcStack_130 = (code *)&UNK_1000f6b44;
            puStack_128 = &UNK_11042d1a8;
            ppuVar14 = &puStack_140;
            func_0x000107c60bc4(ppuVar14);
            func_0x000107c30e44(puVar18,auStack_160,ppuVar14);
            func_0x000107c61180();
            puStack_1d8 = puVar18;
            func_0x000107c60bd0(ppuVar14);
            puVar18 = (ulong *)&UNK_11042d118;
            func_0x000107c613fc(&UNK_11042d118,0x18,7);
            apuStack_1f0[1] = puVar18 + 2;
            *apuStack_1f0[1] = 0;
            func_0x000107c61174();
            puVar11 = puStack_1c0;
            apuStack_1f0[2] = puVar21;
            func_0x000107c50104();
            func_0x000107c61180();
            lVar9 = *(long *)(uVar7 + _DAT_112debf30);
            func_0x000107c6157c(lVar9);
            puStack_140 = puStack_180;
            uStack_138 = CONCAT44((int)((ulong)puVar23 >> 0x20),(int)puStack_188);
            pcStack_130 = (code *)puStack_190;
            ppuVar14 = &puStack_140;
            func_0x000107c60a3c(ppuVar14);
            func_0x000107c5fdd0(param_1 * 1000.0);
            pcStack_120 = (code *)0x101a1f314;
            puStack_140 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0x42000000;
            pcStack_130 = (code *)0x101a200a4;
            puStack_128 = &UNK_11042d1d0;
            ppuVar15 = &puStack_140;
            puStack_118 = (undefined *)lVar9;
            func_0x000107c60bc4(ppuVar15);
            pcVar25 = (code *)puVar11[2];
            func_0x000107c6157c(lVar9);
            puVar23 = puVar11;
            (*pcVar25)(puVar11,puStack_1d8,uStack_1c8 & 0xffffffff,ppuVar15,ppuVar14);
            func_0x000107c61180();
            puStack_190 = puVar23;
            func_0x000107c60bd0(puVar11);
            func_0x000107c61574(lVar9);
            func_0x000107c61170(ppuVar14);
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c61574(puStack_118);
            puVar16 = &UNK_11042d208;
            func_0x000107c613fc(&UNK_11042d208,0x38,7);
            uVar17 = uStack_1d0;
            puVar23 = apuStack_1f0[2];
            *(ulong **)(puVar16 + 0x10) = puVar18;
            *(ulong **)(puVar16 + 0x18) = apuStack_1f0[2];
            *(undefined8 *)(puVar16 + 0x20) = 0;
            *(ulong **)(puVar16 + 0x28) = apuStack_1f0[2];
            *(ulong *)(puVar16 + 0x30) = uStack_1d0;
            pcStack_120 = FUN_101a1f360;
            puStack_140 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0x42000000;
            pcStack_130 = FUN_101a200f0;
            puStack_128 = &UNK_11042d220;
            ppuVar14 = &puStack_140;
            puStack_118 = puVar16;
            func_0x000107c60bc4(ppuVar14);
            puVar16 = puStack_118;
            func_0x000107c61174();
            puStack_188 = puVar18;
            puStack_180 = puVar23;
            func_0x000107c6157c(puVar18);
            func_0x000107c61174(uVar17);
            func_0x000107c61574(puVar16);
            puVar23 = puStack_190;
            func_0x000107c4db80(puStack_190);
            func_0x000107c60bd0(ppuVar14);
            func_0x000107c61170(puVar23);
            puVar10 = puVar3;
            func_0x000107c60058();
            puVar23 = apuStack_1f0[1];
            if (((uint)puVar10 & 0xff) == 1) {
              func_0x000107c4b940(*(undefined8 *)(lVar9 + 0x10));
              uVar24 = *(undefined8 *)(lVar9 + 0x18);
              uVar1 = *(undefined8 *)(lVar9 + 0x20);
              puVar10 = *(undefined8 **)(lVar9 + 0x10);
              func_0x000107c61434(uVar1);
              func_0x000107c5d278();
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar10,0,0);
              *puVar10 = uVar24;
              puVar10[1] = uVar1;
            }
            else {
              func_0x000107c61428(apuStack_1f0[1],&puStack_140,0,0);
              lVar9 = _DAT_112debf58;
              uVar22 = *puVar23;
              if (uVar22 == 0) {
                FUN_101a1dd1c(puStack_180,puStack_168);
                (*pcVar6)(puVar3,puStack_198);
                func_0x000107c61574(puStack_188);
                func_0x000107c615e8(puStack_1b0);
                func_0x000107c615e8(puStack_1a8);
                func_0x000107c61170(puStack_180);
                func_0x000107c615e8(puStack_1d8);
                func_0x000107c61170(puStack_168);
                func_0x000107c61170(puStack_170);
                func_0x000107c61170(puStack_1c0);
                func_0x000107c61170(uVar17);
                goto LAB_101a1ed8c;
              }
              if (*(char *)(uVar7 + _DAT_112debf58) == '\x01') {
                func_0x000107c614b0(uVar22);
              }
              else {
                uVar24 = *(undefined8 *)(uVar7 + _DAT_112debf88);
                func_0x000107c614b0(uVar22);
                FUN_101a22460(uVar22,uVar24);
                *(byte *)(uVar7 + lVar9) = (byte)uVar22 & 1;
              }
            }
            func_0x000107c61654();
            func_0x000107c61170(uVar17);
            func_0x000107c615e8(puStack_1b0);
            func_0x000107c615e8(puStack_1a8);
            func_0x000107c615e8(puStack_1d8);
            func_0x000107c61170(puStack_170);
            func_0x000107c61170(puStack_1c0);
            (*pcVar6)(puVar3,puStack_198);
            func_0x000107c61574(puStack_188);
            puVar21 = puStack_180;
          }
          func_0x000107c61170(puVar21);
          goto LAB_101a1e628;
        }
        func_0x000107c61174();
        uVar22 = 0;
        func_0x000107c60f6c();
        puVar23 = puStack_168;
        uVar2 = *(undefined4 *)(uVar7 + _DAT_112debf78);
        func_0x000107c60ad0(puStack_168,0);
        puVar11 = puVar23;
        func_0x000107c60aa8();
        if (puVar11 == (ulong *)0x0) {
          puVar11 = puVar23;
          func_0x000107c60ae0(puVar23,0);
          func_0x000101a1f2d4();
          func_0x000107c613f8(&UNK_11042d0d0,puVar11,0,0);
          puVar11[1] = 4;
          *puVar11 = 0;
          func_0x000107c61654();
          func_0x000107c61170(uVar22);
          func_0x000107c615e8(puStack_1b0);
          func_0x000107c615e8(puStack_1a8);
          func_0x000107c61170(puStack_170);
          func_0x000107c61170(puVar18);
          (*pcVar6)(puVar3,puStack_198);
          func_0x000107c61170(puVar23);
        }
        else {
          puStack_1d8 = (ulong *)CONCAT44(puStack_1d8._4_4_,uVar2);
          puVar21 = puVar23;
          uStack_1d0 = uVar17;
          uStack_1c8 = uVar22;
          puStack_1c0 = puVar18;
          func_0x000107c60ac8();
          puVar12 = puVar23;
          func_0x000107c60ab8();
          func_0x000107c60ab0();
          puVar18 = puStack_168;
          if ((((long)puVar21 < 1) || ((long)puVar12 < 1)) || ((long)puVar23 < 1)) {
            puVar23 = puStack_168;
            func_0x000107c60ae0(puStack_168,0);
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar23,0,0);
            puVar23[1] = 8;
            *puVar23 = 0;
            func_0x000107c61654();
            func_0x000107c61170(uStack_1c8);
            func_0x000107c615e8(puStack_1b0);
            func_0x000107c615e8(puStack_1a8);
            func_0x000107c61170(puStack_170);
            func_0x000107c61170(puStack_1c0);
            (*pcVar6)(puVar3,puStack_198);
            func_0x000107c61170(puVar18);
          }
          else {
            if ((ulong)puVar21 >> 0x1f != 0) goto LAB_101a1f034;
            if ((ulong)puVar12 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f03c);
              (*pcVar6)();
            }
            func_0x000107c30e40(auStack_160,puVar21,puVar12,1,1,puVar23);
            pcStack_120 = (code *)0x101a1d514;
            puStack_118 = (undefined *)0x0;
            puStack_140 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0x42000000;
            pcStack_130 = (code *)&UNK_1000f6b44;
            puStack_128 = &UNK_11042d0e0;
            ppuVar14 = &puStack_140;
            func_0x000107c60bc4(ppuVar14);
            func_0x000107c30e44(puVar11,auStack_160,ppuVar14);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar14);
            puVar23 = (ulong *)&UNK_11042d118;
            func_0x000107c613fc(&UNK_11042d118,0x18,7);
            apuStack_1f0[2] = puVar23 + 2;
            *apuStack_1f0[2] = 0;
            func_0x000107c61174();
            puVar18 = puStack_1c0;
            func_0x000107c50104();
            func_0x000107c61180();
            lVar9 = *(long *)(uVar7 + _DAT_112debf30);
            func_0x000107c6157c(lVar9);
            puStack_140 = puStack_180;
            uStack_138 = CONCAT44((int)uStack_1d0,(int)puStack_188);
            pcStack_130 = (code *)puStack_190;
            ppuVar14 = &puStack_140;
            func_0x000107c60a3c(ppuVar14);
            func_0x000107c5fdd0(param_1 * 1000.0);
            pcStack_120 = (code *)0x101a1f3d4;
            puStack_140 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0x42000000;
            pcStack_130 = (code *)0x101a200a4;
            puStack_128 = &UNK_11042d130;
            ppuVar15 = &puStack_140;
            puStack_118 = (undefined *)lVar9;
            func_0x000107c60bc4(ppuVar15);
            pcVar25 = (code *)puVar18[2];
            func_0x000107c6157c(lVar9);
            puVar21 = puVar18;
            puStack_180 = puVar11;
            (*pcVar25)(puVar18,puVar11,(ulong)puStack_1d8 & 0xffffffff,ppuVar15,ppuVar14);
            func_0x000107c61180();
            puStack_188 = puVar21;
            func_0x000107c60bd0(puVar18);
            func_0x000107c61574(lVar9);
            func_0x000107c61170(ppuVar14);
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c61574(puStack_118);
            puVar16 = &UNK_11042d168;
            func_0x000107c613fc(&UNK_11042d168,0x38,7);
            puVar18 = puStack_168;
            uVar17 = uStack_1c8;
            *(ulong **)(puVar16 + 0x10) = puVar23;
            *(ulong **)(puVar16 + 0x18) = puStack_168;
            *(undefined8 *)(puVar16 + 0x20) = 0;
            *(ulong **)(puVar16 + 0x28) = puStack_168;
            *(ulong *)(puVar16 + 0x30) = uStack_1c8;
            pcStack_120 = (code *)0x101a1f3e0;
            puStack_140 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0x42000000;
            pcStack_130 = FUN_101a200f0;
            puStack_128 = &UNK_11042d180;
            ppuVar14 = &puStack_140;
            puStack_118 = puVar16;
            func_0x000107c60bc4(ppuVar14);
            puVar16 = puStack_118;
            func_0x000107c61174();
            puStack_190 = puVar18;
            puStack_168 = puVar23;
            func_0x000107c6157c(puVar23);
            func_0x000107c61174(uVar17);
            func_0x000107c61574(puVar16);
            puVar23 = puStack_188;
            func_0x000107c4db80(puStack_188);
            func_0x000107c60bd0(ppuVar14);
            func_0x000107c61170(puVar23);
            puVar10 = puVar3;
            func_0x000107c60058();
            puVar11 = puStack_168;
            puVar18 = puStack_180;
            puVar23 = apuStack_1f0[2];
            if (((uint)puVar10 & 0xff) == 1) {
              func_0x000107c4b940(*(undefined8 *)(lVar9 + 0x10));
              uVar24 = *(undefined8 *)(lVar9 + 0x18);
              uVar1 = *(undefined8 *)(lVar9 + 0x20);
              puVar10 = *(undefined8 **)(lVar9 + 0x10);
              func_0x000107c61434(uVar1);
              func_0x000107c5d278();
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar10,0,0);
              *puVar10 = uVar24;
              puVar10[1] = uVar1;
              func_0x000107c61654();
              func_0x000107c61170(uVar17);
              func_0x000107c615e8(puStack_1b0);
              func_0x000107c615e8(puStack_1a8);
              func_0x000107c615e8(puStack_180);
              func_0x000107c61170(puStack_170);
              func_0x000107c61170(puStack_1c0);
              (*pcVar6)(puVar3,puStack_198);
              puVar11 = puStack_168;
            }
            else {
              func_0x000107c61428(apuStack_1f0[2],&puStack_140,0,0);
              lVar9 = _DAT_112debf58;
              uVar22 = *puVar23;
              if (uVar22 == 0) {
                (*pcVar6)(puVar3,puStack_198);
                func_0x000107c61574(puVar11);
                func_0x000107c615e8(puStack_1b0);
                func_0x000107c615e8(puStack_1a8);
                func_0x000107c61170(puStack_190);
                func_0x000107c615e8(puVar18);
                func_0x000107c61170(uVar17);
                func_0x000107c61170(puStack_170);
                func_0x000107c61170(puStack_1c0);
                goto LAB_101a1ed8c;
              }
              if (*(char *)(uVar7 + _DAT_112debf58) == '\x01') {
                func_0x000107c614b0(uVar22);
              }
              else {
                uVar24 = *(undefined8 *)(uVar7 + _DAT_112debf88);
                func_0x000107c614b0(uVar22);
                FUN_101a22460(uVar22,uVar24);
                *(byte *)(uVar7 + lVar9) = (byte)uVar22 & 1;
              }
              func_0x000107c61654();
              func_0x000107c61170(uVar17);
              func_0x000107c615e8(puStack_1b0);
              func_0x000107c615e8(puStack_1a8);
              func_0x000107c615e8(puVar18);
              func_0x000107c61170(puStack_170);
              func_0x000107c61170(puStack_1c0);
              (*pcVar6)(puVar3,puStack_198);
            }
            func_0x000107c61574(puVar11);
            func_0x000107c61170(puStack_190);
          }
        }
      }
      else {
LAB_101a1e5d0:
        func_0x000101a1f2d4();
        func_0x000107c613f8(&UNK_11042d0d0,puVar10,0,0);
        puVar10[1] = 2;
        *puVar10 = 0;
        func_0x000107c61654();
        func_0x000107c615e8(puStack_1b0);
        func_0x000107c615e8(puStack_1a8);
        puVar18 = puStack_170;
LAB_101a1e618:
        func_0x000107c61170(puVar18);
        (*pcVar6)(puVar3,puStack_198);
LAB_101a1e628:
        func_0x000107c61170(puStack_168);
      }
    }
  }
LAB_101a1ed8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  func_0x000107c60e78();
LAB_101a1f034:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f038);
  (*pcVar6)();
}



/* Entry: 101a1de78; end: 101a1f043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a1de78(double param_1,ulong param_2,ulong param_3,long *param_4,long *param_5,
                  long *param_6,uint param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  undefined *puVar15;
  long **pplVar16;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  long extraout_x12;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long unaff_x20;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  long unaff_x21;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long *aplStack_150 [3];
  long *plStack_138;
  ulong uStack_130;
  ulong uStack_128;
  long *plStack_120;
  long *plStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_c0 [32];
  long *plStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = 0;
  plStack_e0 = param_4;
  func_0x000107c5f7f0();
  lVar26 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar29 = (undefined8 *)((long)aplStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar8 = (undefined8 *)0x0;
  func_0x000107c5f83c();
  lVar28 = puVar8[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  lVar27 = (long)puVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((param_2 == 0) || (param_3 == 0)) {
    func_0x000101a1f2d4();
    func_0x000107c613f8(&UNK_11042d0d0,puVar8,0,0);
    uVar24 = 5;
LAB_101a1ed80:
    puVar8[1] = uVar24;
    *puVar8 = 0;
    func_0x000107c61654();
  }
  else {
    uVar22 = param_2 & 0xffffffffffffff8;
    plStack_f0 = param_6;
    plStack_e8 = param_5;
    if (param_2 >> 0x3e != 0) {
      uVar19 = param_2;
      if (-1 < (long)param_2) {
        uVar19 = uVar22;
      }
      puStack_f8 = puVar8;
      func_0x000107c60480();
      puVar8 = puStack_f8;
      puVar3 = puStack_100;
      puVar4 = puStack_f8;
      if (uVar19 == 1) goto LAB_101a1df74;
LAB_101a1ed58:
      puStack_f8 = puVar4;
      puStack_100 = puVar3;
      func_0x000101a1f2d4();
      func_0x000107c613f8(&UNK_11042d0d0,puVar8,0,0);
      uVar24 = 7;
      goto LAB_101a1ed80;
    }
    puVar3 = puStack_100;
    puVar4 = puStack_f8;
    if (*(long *)(uVar22 + 0x10) != 1) goto LAB_101a1ed58;
LAB_101a1df74:
    uVar19 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar18 = *(ulong *)(uVar19 + 0x10);
      puVar5 = (undefined8 *)(lVar27 - extraout_x12);
      puVar3 = puStack_100;
      puVar4 = puStack_f8;
    }
    else {
      uVar18 = param_3;
      if (-1 < (long)param_3) {
        uVar18 = uVar19;
      }
      puStack_100 = (undefined8 *)(lVar27 - extraout_x12);
      puStack_f8 = puVar8;
      func_0x000107c60480();
      puVar5 = puStack_100;
      puVar3 = puStack_100;
      puVar8 = puStack_f8;
      puVar4 = puStack_f8;
    }
    puStack_f8 = puVar8;
    puStack_100 = puVar5;
    puVar8 = puStack_f8;
    if (uVar18 != 1) goto LAB_101a1ed58;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1eee0);
        (*pcVar6)();
      }
      plVar23 = *(long **)(param_2 + 0x20);
      func_0x000107c615f0(plVar23);
      if ((param_3 & 0xc000000000000001) == 0) goto LAB_101a1dfb4;
LAB_101a1eec8:
      plVar20 = (long *)0x0;
      FUN_101a220cc(0,param_3);
    }
    else {
      plVar23 = (long *)0x0;
      FUN_101a220cc(0,param_2);
      if ((param_3 & 0xc000000000000001) != 0) goto LAB_101a1eec8;
LAB_101a1dfb4:
      if (*(long *)(uVar19 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1eee4);
        (*pcVar6)();
      }
      plVar20 = *(long **)(param_3 + 0x20);
      func_0x000107c615f0(plVar20);
    }
    plVar9 = plVar23;
    func_0x000107c615f0();
    func_0x000107c4f9b4();
    plVar21 = plVar23;
    func_0x000107c61104();
    if (plVar9 == (long *)0x0) {
LAB_101a1e09c:
      func_0x000101a1f2d4();
      func_0x000107c613f8(&UNK_11042d0d0,plVar21,0,0);
      plVar21[1] = 6;
      *plVar21 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(plVar23);
      func_0x000107c615e8(plVar20);
    }
    else {
      plVar10 = plVar20;
      func_0x000107c615f0();
      func_0x000107c5e8e0();
      plVar21 = plVar20;
      func_0x000107c61104();
      if (plVar10 == (long *)0x0) goto LAB_101a1e09c;
      func_0x000107c61174();
      func_0x000107c61174();
      if ((param_7 & 1) != 0) {
        func_0x000107c61028();
      }
      FUN_101a1d9c8(plVar9,plVar10);
      if (unaff_x21 != 0) {
        func_0x000107c615e8(plVar23);
        func_0x000107c615e8(plVar20);
        func_0x000107c61170(plVar9);
        func_0x000107c61170(plVar10);
        goto LAB_101a1ed8c;
      }
      plStack_110 = plVar23;
      plStack_108 = plVar20;
      func_0x000107c5f830(lVar27);
      *puVar29 = *(undefined8 *)(unaff_x20 + _DAT_112debf98);
      (**(code **)(lVar26 + 0x68))
                (puVar29,*(undefined4 *)
                          PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,lVar7);
      puVar3 = puStack_100;
      func_0x000107c5f858(puStack_100,lVar27,puVar29);
      (**(code **)(lVar26 + 8))(puVar29,lVar7);
      pcVar6 = *(code **)(lVar28 + 8);
      (*pcVar6)(lVar27,puStack_f8);
      puVar8 = puVar3;
      func_0x000107c5ffb0(*(undefined8 *)(unaff_x20 + _DAT_112debf40));
      func_0x000107c5f7f4();
      plVar23 = plStack_e8;
      lVar7 = _DAT_112debf50;
      if (((ulong)puVar8 & 1) == 0) {
        plVar20 = *(long **)(unaff_x20 + _DAT_112debf28);
        puVar8 = (undefined8 *)0x0;
        if (plVar20 == (long *)0x0) goto LAB_101a1e5d0;
        uVar22 = (ulong)plStack_e8 >> 0x20;
        if (*(char *)(unaff_x20 + _DAT_112debf90) == '\x01') {
          plVar21 = *(long **)(unaff_x20 + _DAT_112debf50);
          func_0x000107c61174();
          if (plVar21 == (long *)0x0) {
            plVar21 = plVar10;
            FUN_101a1dad8();
            puVar8 = *(undefined8 **)(unaff_x20 + lVar7);
            *(long **)(unaff_x20 + lVar7) = plVar21;
            func_0x000107c61170();
            plVar21 = *(long **)(unaff_x20 + lVar7);
            if (plVar21 != (long *)0x0) goto LAB_101a1e200;
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,puVar8,0,0);
            puVar8[1] = 9;
            *puVar8 = 0;
            func_0x000107c61654();
            func_0x000107c615e8(plStack_110);
            func_0x000107c615e8(plStack_108);
            func_0x000107c61170(plVar9);
            plVar9 = plVar20;
            goto LAB_101a1e618;
          }
LAB_101a1e200:
          plStack_120 = plVar20;
          func_0x000107c61174();
          plVar20 = plVar21;
          func_0x000107c60ac8();
          plVar13 = plVar10;
          func_0x000107c60ac8();
          if (plVar20 != plVar13) {
LAB_101a1ea00:
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,plVar13,0,0);
            plVar13[1] = 9;
            *plVar13 = 0;
            func_0x000107c61654();
            func_0x000107c615e8(plStack_110);
            func_0x000107c615e8(plStack_108);
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plStack_120);
            (*pcVar6)(puVar3,puStack_f8);
            func_0x000107c61170(plVar21);
            func_0x000107c61170(plVar10);
            goto LAB_101a1ed8c;
          }
          plVar20 = plVar21;
          func_0x000107c60ab8();
          plVar13 = plVar10;
          func_0x000107c60ab8();
          if (plVar20 != plVar13) goto LAB_101a1ea00;
          plVar20 = plVar21;
          func_0x000107c60ab0();
          plVar13 = plVar10;
          func_0x000107c60ab0();
          if (plVar20 != plVar13) goto LAB_101a1ea00;
          uVar22 = 0;
          func_0x000107c60f6c();
          uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(unaff_x20 + _DAT_112debf78));
          func_0x000107c60ad0(plVar21,0);
          plVar20 = plVar21;
          func_0x000107c60aa8();
          if (plVar20 == (long *)0x0) {
            plVar23 = plVar21;
            func_0x000107c60ae0(plVar21,0);
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,plVar23,0,0);
            plVar23[1] = 4;
            *plVar23 = 0;
            func_0x000107c61654();
            func_0x000107c61170(uVar22);
            func_0x000107c615e8(plStack_110);
            func_0x000107c615e8(plStack_108);
LAB_101a1ee8c:
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plStack_120);
            (*pcVar6)(puVar3,puStack_f8);
          }
          else {
            plVar13 = plVar21;
            uStack_130 = uVar22;
            func_0x000107c60ac8();
            plVar11 = plVar21;
            func_0x000107c60ab8();
            plVar12 = plVar21;
            func_0x000107c60ab0();
            if ((((long)plVar13 < 1) || ((long)plVar11 < 1)) || ((long)plVar12 < 1)) {
              plVar23 = plVar21;
              func_0x000107c60ae0(plVar21,0);
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,plVar23,0,0);
              plVar23[1] = 8;
              *plVar23 = 0;
              func_0x000107c61654();
              func_0x000107c61170(uStack_130);
              func_0x000107c615e8(plStack_110);
              func_0x000107c615e8(plStack_108);
              goto LAB_101a1ee8c;
            }
            if ((ulong)plVar13 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f040);
              (*pcVar6)();
            }
            if ((ulong)plVar11 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f044);
              (*pcVar6)();
            }
            func_0x000107c30e40(auStack_c0,plVar13,plVar11,1,1,plVar12);
            pcStack_80 = (code *)0x101a1d510;
            puStack_78 = (undefined *)0x0;
            plStack_a0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = (code *)&UNK_1000f6b44;
            puStack_88 = &UNK_11042d1a8;
            pplVar14 = &plStack_a0;
            func_0x000107c60bc4(pplVar14);
            func_0x000107c30e44(plVar20,auStack_c0,pplVar14);
            func_0x000107c61180();
            plStack_138 = plVar20;
            func_0x000107c60bd0(pplVar14);
            plVar20 = (long *)&UNK_11042d118;
            func_0x000107c613fc(&UNK_11042d118,0x18,7);
            aplStack_150[1] = plVar20 + 2;
            *aplStack_150[1] = 0;
            func_0x000107c61174();
            plVar13 = plStack_120;
            aplStack_150[2] = plVar21;
            func_0x000107c50104();
            func_0x000107c61180();
            lVar7 = *(long *)(unaff_x20 + _DAT_112debf30);
            func_0x000107c6157c(lVar7);
            plStack_a0 = plStack_e0;
            uStack_98 = CONCAT44((int)((ulong)plVar23 >> 0x20),(int)plStack_e8);
            pcStack_90 = (code *)plStack_f0;
            pplVar14 = &plStack_a0;
            func_0x000107c60a3c(pplVar14);
            func_0x000107c5fdd0(param_1 * 1000.0);
            pcStack_80 = (code *)0x101a1f314;
            plStack_a0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = (code *)0x101a200a4;
            puStack_88 = &UNK_11042d1d0;
            pplVar16 = &plStack_a0;
            puStack_78 = (undefined *)lVar7;
            func_0x000107c60bc4(pplVar16);
            pcVar25 = (code *)plVar13[2];
            func_0x000107c6157c(lVar7);
            plVar23 = plVar13;
            (*pcVar25)(plVar13,plStack_138,uStack_128 & 0xffffffff,pplVar16,pplVar14);
            func_0x000107c61180();
            plStack_f0 = plVar23;
            func_0x000107c60bd0(plVar13);
            func_0x000107c61574(lVar7);
            func_0x000107c61170(pplVar14);
            func_0x000107c60bd0(pplVar16);
            func_0x000107c61574(puStack_78);
            puVar15 = &UNK_11042d208;
            func_0x000107c613fc(&UNK_11042d208,0x38,7);
            uVar22 = uStack_130;
            plVar23 = aplStack_150[2];
            *(long **)(puVar15 + 0x10) = plVar20;
            *(long **)(puVar15 + 0x18) = aplStack_150[2];
            *(undefined8 *)(puVar15 + 0x20) = 0;
            *(long **)(puVar15 + 0x28) = aplStack_150[2];
            *(ulong *)(puVar15 + 0x30) = uStack_130;
            pcStack_80 = FUN_101a1f360;
            plStack_a0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = FUN_101a200f0;
            puStack_88 = &UNK_11042d220;
            pplVar14 = &plStack_a0;
            puStack_78 = puVar15;
            func_0x000107c60bc4(pplVar14);
            puVar15 = puStack_78;
            func_0x000107c61174();
            plStack_e8 = plVar20;
            plStack_e0 = plVar23;
            func_0x000107c6157c(plVar20);
            func_0x000107c61174(uVar22);
            func_0x000107c61574(puVar15);
            plVar23 = plStack_f0;
            func_0x000107c4db80(plStack_f0);
            func_0x000107c60bd0(pplVar14);
            func_0x000107c61170(plVar23);
            puVar8 = puVar3;
            func_0x000107c60058();
            plVar23 = aplStack_150[1];
            if (((uint)puVar8 & 0xff) == 1) {
              func_0x000107c4b940(*(undefined8 *)(lVar7 + 0x10));
              uVar24 = *(undefined8 *)(lVar7 + 0x18);
              uVar1 = *(undefined8 *)(lVar7 + 0x20);
              puVar8 = *(undefined8 **)(lVar7 + 0x10);
              func_0x000107c61434(uVar1);
              func_0x000107c5d278();
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar8,0,0);
              *puVar8 = uVar24;
              puVar8[1] = uVar1;
            }
            else {
              func_0x000107c61428(aplStack_150[1],&plStack_a0,0,0);
              lVar7 = _DAT_112debf58;
              lVar26 = *plVar23;
              if (lVar26 == 0) {
                FUN_101a1dd1c(plStack_e0,plVar10);
                (*pcVar6)(puVar3,puStack_f8);
                func_0x000107c61574(plStack_e8);
                func_0x000107c615e8(plStack_110);
                func_0x000107c615e8(plStack_108);
                func_0x000107c61170(plStack_e0);
                func_0x000107c615e8(plStack_138);
                func_0x000107c61170(plVar10);
                func_0x000107c61170(plVar9);
                func_0x000107c61170(plStack_120);
                func_0x000107c61170(uVar22);
                goto LAB_101a1ed8c;
              }
              if (*(char *)(unaff_x20 + _DAT_112debf58) == '\x01') {
                func_0x000107c614b0(lVar26);
              }
              else {
                uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112debf88);
                func_0x000107c614b0(lVar26);
                FUN_101a22460(lVar26,uVar24);
                *(byte *)(unaff_x20 + lVar7) = (byte)lVar26 & 1;
              }
            }
            func_0x000107c61654();
            func_0x000107c61170(uVar22);
            func_0x000107c615e8(plStack_110);
            func_0x000107c615e8(plStack_108);
            func_0x000107c615e8(plStack_138);
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plStack_120);
            (*pcVar6)(puVar3,puStack_f8);
            func_0x000107c61574(plStack_e8);
            plVar21 = plStack_e0;
          }
          func_0x000107c61170(plVar21);
          goto LAB_101a1e628;
        }
        func_0x000107c61174();
        uVar19 = 0;
        func_0x000107c60f6c();
        uVar2 = *(undefined4 *)(unaff_x20 + _DAT_112debf78);
        func_0x000107c60ad0(plVar10,0);
        plVar23 = plVar10;
        func_0x000107c60aa8();
        if (plVar23 == (long *)0x0) {
          plVar23 = plVar10;
          func_0x000107c60ae0(plVar10,0);
          func_0x000101a1f2d4();
          func_0x000107c613f8(&UNK_11042d0d0,plVar23,0,0);
          plVar23[1] = 4;
          *plVar23 = 0;
          func_0x000107c61654();
          func_0x000107c61170(uVar19);
          func_0x000107c615e8(plStack_110);
          func_0x000107c615e8(plStack_108);
          func_0x000107c61170(plVar9);
          func_0x000107c61170(plVar20);
          (*pcVar6)(puVar3,puStack_f8);
          func_0x000107c61170(plVar10);
        }
        else {
          plStack_138 = (long *)CONCAT44(plStack_138._4_4_,uVar2);
          plVar21 = plVar10;
          uStack_130 = uVar22;
          uStack_128 = uVar19;
          plStack_120 = plVar20;
          func_0x000107c60ac8();
          plVar20 = plVar10;
          func_0x000107c60ab8();
          plVar13 = plVar10;
          func_0x000107c60ab0();
          if ((((long)plVar21 < 1) || ((long)plVar20 < 1)) || ((long)plVar13 < 1)) {
            plVar23 = plVar10;
            func_0x000107c60ae0(plVar10,0);
            func_0x000101a1f2d4();
            func_0x000107c613f8(&UNK_11042d0d0,plVar23,0,0);
            plVar23[1] = 8;
            *plVar23 = 0;
            func_0x000107c61654();
            func_0x000107c61170(uStack_128);
            func_0x000107c615e8(plStack_110);
            func_0x000107c615e8(plStack_108);
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plStack_120);
            (*pcVar6)(puVar3,puStack_f8);
            func_0x000107c61170(plVar10);
          }
          else {
            if ((ulong)plVar21 >> 0x1f != 0) goto LAB_101a1f034;
            if ((ulong)plVar20 >> 0x1f != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f03c);
              (*pcVar6)();
            }
            func_0x000107c30e40(auStack_c0,plVar21,plVar20,1,1,plVar13);
            pcStack_80 = (code *)0x101a1d514;
            puStack_78 = (undefined *)0x0;
            plStack_a0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = (code *)&UNK_1000f6b44;
            puStack_88 = &UNK_11042d0e0;
            pplVar14 = &plStack_a0;
            func_0x000107c60bc4(pplVar14);
            func_0x000107c30e44(plVar23,auStack_c0,pplVar14);
            func_0x000107c61180();
            func_0x000107c60bd0(pplVar14);
            puVar15 = &UNK_11042d118;
            func_0x000107c613fc(&UNK_11042d118,0x18,7);
            aplStack_150[2] = (long *)(puVar15 + 0x10);
            *aplStack_150[2] = 0;
            func_0x000107c61174();
            plVar20 = plStack_120;
            func_0x000107c50104();
            func_0x000107c61180();
            lVar7 = *(long *)(unaff_x20 + _DAT_112debf30);
            func_0x000107c6157c(lVar7);
            plStack_a0 = plStack_e0;
            uStack_98 = CONCAT44((int)uStack_130,(int)plStack_e8);
            pcStack_90 = (code *)plStack_f0;
            pplVar14 = &plStack_a0;
            func_0x000107c60a3c(pplVar14);
            func_0x000107c5fdd0(param_1 * 1000.0);
            pcStack_80 = (code *)0x101a1f3d4;
            plStack_a0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = (code *)0x101a200a4;
            puStack_88 = &UNK_11042d130;
            pplVar16 = &plStack_a0;
            puStack_78 = (undefined *)lVar7;
            func_0x000107c60bc4(pplVar16);
            pcVar25 = (code *)plVar20[2];
            func_0x000107c6157c(lVar7);
            plVar21 = plVar20;
            plStack_e0 = plVar23;
            (*pcVar25)(plVar20,plVar23,(ulong)plStack_138 & 0xffffffff,pplVar16,pplVar14);
            func_0x000107c61180();
            plStack_e8 = plVar21;
            func_0x000107c60bd0(plVar20);
            func_0x000107c61574(lVar7);
            func_0x000107c61170(pplVar14);
            func_0x000107c60bd0(pplVar16);
            func_0x000107c61574(puStack_78);
            puVar17 = &UNK_11042d168;
            func_0x000107c613fc(&UNK_11042d168,0x38,7);
            uVar22 = uStack_128;
            *(undefined **)(puVar17 + 0x10) = puVar15;
            *(long **)(puVar17 + 0x18) = plVar10;
            *(undefined8 *)(puVar17 + 0x20) = 0;
            *(long **)(puVar17 + 0x28) = plVar10;
            *(ulong *)(puVar17 + 0x30) = uStack_128;
            pcStack_80 = (code *)0x101a1f3e0;
            plStack_a0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = FUN_101a200f0;
            puStack_88 = &UNK_11042d180;
            pplVar14 = &plStack_a0;
            puStack_78 = puVar17;
            func_0x000107c60bc4(pplVar14);
            puVar17 = puStack_78;
            func_0x000107c61174();
            plStack_f0 = plVar10;
            func_0x000107c6157c(puVar15);
            func_0x000107c61174(uVar22);
            func_0x000107c61574(puVar17);
            plVar23 = plStack_e8;
            func_0x000107c4db80(plStack_e8);
            func_0x000107c60bd0(pplVar14);
            func_0x000107c61170(plVar23);
            puVar8 = puVar3;
            func_0x000107c60058();
            plVar20 = plStack_e0;
            plVar23 = aplStack_150[2];
            if (((uint)puVar8 & 0xff) == 1) {
              func_0x000107c4b940(*(undefined8 *)(lVar7 + 0x10));
              uVar24 = *(undefined8 *)(lVar7 + 0x18);
              uVar1 = *(undefined8 *)(lVar7 + 0x20);
              puVar8 = *(undefined8 **)(lVar7 + 0x10);
              func_0x000107c61434(uVar1);
              func_0x000107c5d278();
              func_0x000101a1f2d4();
              func_0x000107c613f8(&UNK_11042d0d0,puVar8,0,0);
              *puVar8 = uVar24;
              puVar8[1] = uVar1;
              func_0x000107c61654();
              func_0x000107c61170(uVar22);
              func_0x000107c615e8(plStack_110);
              func_0x000107c615e8(plStack_108);
              func_0x000107c615e8(plStack_e0);
              func_0x000107c61170(plVar9);
              func_0x000107c61170(plStack_120);
              (*pcVar6)(puVar3,puStack_f8);
            }
            else {
              func_0x000107c61428(aplStack_150[2],&plStack_a0,0,0);
              lVar7 = _DAT_112debf58;
              lVar26 = *plVar23;
              if (lVar26 == 0) {
                (*pcVar6)(puVar3,puStack_f8);
                func_0x000107c61574(puVar15);
                func_0x000107c615e8(plStack_110);
                func_0x000107c615e8(plStack_108);
                func_0x000107c61170(plStack_f0);
                func_0x000107c615e8(plVar20);
                func_0x000107c61170(uVar22);
                func_0x000107c61170(plVar9);
                func_0x000107c61170(plStack_120);
                goto LAB_101a1ed8c;
              }
              if (*(char *)(unaff_x20 + _DAT_112debf58) == '\x01') {
                func_0x000107c614b0(lVar26);
              }
              else {
                uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112debf88);
                func_0x000107c614b0(lVar26);
                FUN_101a22460(lVar26,uVar24);
                *(byte *)(unaff_x20 + lVar7) = (byte)lVar26 & 1;
              }
              func_0x000107c61654();
              func_0x000107c61170(uVar22);
              func_0x000107c615e8(plStack_110);
              func_0x000107c615e8(plStack_108);
              func_0x000107c615e8(plVar20);
              func_0x000107c61170(plVar9);
              func_0x000107c61170(plStack_120);
              (*pcVar6)(puVar3,puStack_f8);
            }
            func_0x000107c61574(puVar15);
            func_0x000107c61170(plStack_f0);
          }
        }
      }
      else {
LAB_101a1e5d0:
        func_0x000101a1f2d4();
        func_0x000107c613f8(&UNK_11042d0d0,puVar8,0,0);
        puVar8[1] = 2;
        *puVar8 = 0;
        func_0x000107c61654();
        func_0x000107c615e8(plStack_110);
        func_0x000107c615e8(plStack_108);
LAB_101a1e618:
        func_0x000107c61170(plVar9);
        (*pcVar6)(puVar3,puStack_f8);
LAB_101a1e628:
        func_0x000107c61170(plVar10);
      }
    }
  }
LAB_101a1ed8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_101a1f034:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101a1f038);
  (*pcVar6)();
}



/* Entry: 101a1f044; end: 101a1f05b;  */

void FUN_101a1f044(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101a1f05c; end: 101a1f1bf;  */

undefined8 * FUN_101a1f05c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 101a1f1c0; end: 101a1f2b3;  */

int FUN_101a1f1c0(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff5 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffff6;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (10 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -9;
  }
  return iVar1;
}



/* Entry: 101a1f2b4; end: 101a1f35f;  */

void FUN_101a1f2b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0ed0);
  return;
}



/* Entry: 101a1f360; end: 101a1f363;  */

void FUN_101a1f360(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101a1d58c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101a1f364; end: 101a1f383;  */

void FUN_101a1f364(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101a1d58c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}


