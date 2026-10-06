/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101670880; end: 10167088b;  */

void FUN_101670880(void)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  func_0x000107c6068c(auStack_78,0);
  (*(code *)&UNK_1016707c0)(uVar2,uVar1);
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 10167088c; end: 1016708e7;  */

void FUN_10167088c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  func_0x000107c6068c(auStack_78,0);
  (*param_3)(uVar2,uVar1);
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 1016708e8; end: 1016708f3;  */

void FUN_1016708e8(void)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  func_0x000107c6068c(auStack_78);
  (*(code *)&UNK_1016707c0)(uVar2,uVar1);
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 1016708f4; end: 10167094b;  */

void FUN_1016708f4(void)

{
  undefined1 uVar1;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  func_0x000107c6068c(auStack_78);
  (*in_x3)(uVar2,uVar1);
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 10167094c; end: 101670957;  */

bool FUN_10167094c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  (*(code *)&UNK_1016707c0)(lVar2,(char)param_1[1]);
  (*(code *)&UNK_1016707c0)(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 101670958; end: 1016709af;  */

bool FUN_101670958(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  (*param_5)(lVar2,(char)param_1[1]);
  (*param_5)(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 1016709b0; end: 1016709f7;  */

void FUN_1016709b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9783a0,0x81,2);
  uRam00000001138029e0 = uStack_38;
  uRam00000001138029d8 = uStack_40;
  uRam00000001138029f0 = uStack_28;
  uRam00000001138029e8 = uStack_30;
  uRam0000000113802a00 = uStack_18;
  uRam00000001138029f8 = uStack_20;
  return;
}



/* Entry: 1016709f8; end: 101670a97;  */

/* WARNING: Possible PIC construction at 0x000101670a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101670a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101670a48) */
/* WARNING: Removing unreachable block (ram,0x000101670a58) */

void FUN_1016709f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbdca0 != -1) {
    func_0x000107c61568(0x112dbdca0,FUN_1016709b0);
  }
  uVar5 = uRam0000000113802a00;
  uVar4 = uRam00000001138029f8;
  uVar3 = uRam00000001138029f0;
  uVar2 = uRam00000001138029e8;
  uVar1 = uRam00000001138029e0;
  *param_1 = uRam00000001138029d8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101670a98; end: 101670adf;  */

void FUN_101670a98(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9780f0,0x2a5,2);
  uRam0000000113802a10 = uStack_38;
  uRam0000000113802a08 = uStack_40;
  uRam0000000113802a20 = uStack_28;
  uRam0000000113802a18 = uStack_30;
  uRam0000000113802a30 = uStack_18;
  uRam0000000113802a28 = uStack_20;
  return;
}



/* Entry: 101670ae0; end: 101670b7f;  */

/* WARNING: Possible PIC construction at 0x000101670b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101670b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101670b30) */
/* WARNING: Removing unreachable block (ram,0x000101670b40) */

void FUN_101670ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbdca8 != -1) {
    func_0x000107c61568(0x112dbdca8,FUN_101670a98);
  }
  uVar5 = uRam0000000113802a30;
  uVar4 = uRam0000000113802a28;
  uVar3 = uRam0000000113802a20;
  uVar2 = uRam0000000113802a18;
  uVar1 = uRam0000000113802a10;
  *param_1 = uRam0000000113802a08;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101670b80; end: 101670bc7;  */

void FUN_101670b80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d977da0,0x348,2);
  uRam0000000113802a40 = uStack_38;
  uRam0000000113802a38 = uStack_40;
  uRam0000000113802a50 = uStack_28;
  uRam0000000113802a48 = uStack_30;
  uRam0000000113802a60 = uStack_18;
  uRam0000000113802a58 = uStack_20;
  return;
}



/* Entry: 101670bc8; end: 101670c67;  */

/* WARNING: Possible PIC construction at 0x000101670c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101670c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101670c18) */
/* WARNING: Removing unreachable block (ram,0x000101670c28) */

void FUN_101670bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbdcb0 != -1) {
    func_0x000107c61568(0x112dbdcb0,FUN_101670b80);
  }
  uVar5 = uRam0000000113802a60;
  uVar4 = uRam0000000113802a58;
  uVar3 = uRam0000000113802a50;
  uVar2 = uRam0000000113802a48;
  uVar1 = uRam0000000113802a40;
  *param_1 = uRam0000000113802a38;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101670c68; end: 101670c9f;  */

void FUN_101670c68(void)

{
  return;
}



/* Entry: 101670ca0; end: 101670d4b;  */

void FUN_101670ca0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977a70;
  func_0x000107c61520(&UNK_10d977a70,&UNK_1103f0ca8);
  puRam0000000112dbdcb8 = puVar1;
  return;
}



/* Entry: 101670d4c; end: 101670d4f;  */

void FUN_101670d4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdcd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977ab0;
  func_0x000107c61520(&UNK_10d977ab0,&UNK_1103f0ca8);
  puRam0000000112dbdcd8 = puVar1;
  return;
}



/* Entry: 101670d50; end: 101670d8f;  */

void FUN_101670d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdcd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977ab0;
  func_0x000107c61520(&UNK_10d977ab0,&UNK_1103f0ca8);
  puRam0000000112dbdcd8 = puVar1;
  return;
}



/* Entry: 101670d90; end: 101670da3;  */

void FUN_101670d90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101670da4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101670de4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101670da4; end: 101670e4f;  */

void FUN_101670da4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977b70;
  func_0x000107c61520(&UNK_10d977b70,&UNK_1103f0d38);
  puRam0000000112dbdce0 = puVar1;
  return;
}



/* Entry: 101670e50; end: 101670e53;  */

void FUN_101670e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977bb0;
  func_0x000107c61520(&UNK_10d977bb0,&UNK_1103f0d38);
  puRam0000000112dbdd00 = puVar1;
  return;
}



/* Entry: 101670e54; end: 101670e93;  */

void FUN_101670e54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977bb0;
  func_0x000107c61520(&UNK_10d977bb0,&UNK_1103f0d38);
  puRam0000000112dbdd00 = puVar1;
  return;
}



/* Entry: 101670e94; end: 101670ea7;  */

void FUN_101670e94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101670ed8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101670f18)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101670ea8; end: 101670ed7;  */

void FUN_101670ea8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101670ed8; end: 101670f83;  */

void FUN_101670ed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977c70;
  func_0x000107c61520(&UNK_10d977c70,&UNK_1103f0dc8);
  puRam0000000112dbdd08 = puVar1;
  return;
}



/* Entry: 101670f84; end: 101670fc7;  */

void FUN_101670f84(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101670fc8; end: 101670fcb;  */

void FUN_101670fc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977cb0;
  func_0x000107c61520(&UNK_10d977cb0,&UNK_1103f0dc8);
  puRam0000000112dbdd28 = puVar1;
  return;
}



/* Entry: 101670fcc; end: 10167100b;  */

void FUN_101670fcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d977cb0;
  func_0x000107c61520(&UNK_10d977cb0,&UNK_1103f0dc8);
  puRam0000000112dbdd28 = puVar1;
  return;
}



/* Entry: 10167100c; end: 10167109b;  */

void FUN_10167100c(void)

{
  return;
}



/* Entry: 10167109c; end: 1016710e3;  */

void FUN_10167109c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d978580,0xac,2);
  uRam0000000113802a70 = uStack_38;
  uRam0000000113802a68 = uStack_40;
  uRam0000000113802a80 = uStack_28;
  uRam0000000113802a78 = uStack_30;
  uRam0000000113802a90 = uStack_18;
  uRam0000000113802a88 = uStack_20;
  return;
}



/* Entry: 1016710e4; end: 1016711c3;  */

void FUN_1016710e4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_101671190;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_101671190;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 5) goto LAB_1016711a0;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_101671190:
        (*pcVar3)();
      }
LAB_1016711a0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1016711c4; end: 1016712bb;  */

void FUN_1016711c4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if (((((((param_2 & 1) == 0) ||
         ((**(code **)(param_6 + 0x68))(1,1,param_5,param_6), unaff_x21 == 0)) &&
        (((uVar1 >> 8 & 1) == 0 ||
         ((**(code **)(param_6 + 0x68))(1,2,param_5,param_6), unaff_x21 == 0)))) &&
       (((uVar1 >> 0x10 & 1) == 0 ||
        ((**(code **)(param_6 + 0x68))(1,3,param_5,param_6), unaff_x21 == 0)))) &&
      (((uVar1 >> 0x18 & 1) == 0 ||
       ((**(code **)(param_6 + 0x68))(1,4,param_5,param_6), unaff_x21 == 0)))) &&
     (((param_2 >> 0x20 & 1) == 0 ||
      ((**(code **)(param_6 + 0x68))(1,5,param_5,param_6), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 1016712bc; end: 1016712f7;  */

void FUN_1016712bc(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1016712f8; end: 101671327;  */

undefined1  [16] FUN_1016712f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101671328; end: 10167135b;  */

void FUN_101671328(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10167135c; end: 10167136f;  */

undefined1  [16] FUN_10167135c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10167136c;
  return auVar1;
}



/* Entry: 101671370; end: 1016713f7;  */

void FUN_101671370(void)

{
  FUN_1016710e4();
  return;
}



/* Entry: 1016713f8; end: 1016713fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016713f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1016713fc; end: 101671433;  */

uint FUN_1016713fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101671ab0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101671434; end: 1016714d7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101671434(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *unaff_x19;
  long lVar29;
  byte *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar30;
  ulong unaff_x22;
  long lVar31;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  
  lVar29 = *(long *)(param_1 + 8);
  uVar21 = *(ulong *)(param_1 + 0x10);
  pbVar15 = *(byte **)(unaff_x20 + 8);
  pbVar30 = *(byte **)(unaff_x20 + 0x10);
  uVar25 = 0x100;
  if (unaff_x20[1] == 0) {
    uVar25 = 0;
  }
  uVar27 = 0x10000;
  if (unaff_x20[2] == 0) {
    uVar27 = 0;
  }
  uVar1 = 0x1000000;
  if (unaff_x20[3] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000;
  if (unaff_x20[4] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100;
  if (param_1[1] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x10000;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x1000000;
  if (param_1[3] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100000000;
  if (param_1[4] == 0) {
    uVar6 = 0;
  }
  if ((((uVar25 | *unaff_x20 | uVar27 | uVar1 | uVar2) ^ (uVar3 | *param_1 | uVar4 | uVar5 | uVar6))
      & 0x101010101) != 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = (uint)((ulong)pbVar30 >> 0x20);
    uVar23 = uVar10 >> 0x1e;
    uVar11 = (uint)(uVar21 >> 0x20);
    uVar26 = uVar11 >> 0x1e;
    iVar13 = (int)pbVar15;
    pbVar18 = pbVar30;
    if ((ulong)pbVar30 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar15 != (byte *)0x0) || (pbVar30 != (byte *)0xc000000000000000)) ||
          (uVar21 >> 0x3e < 3)) || ((uVar25 = 0, lVar29 != 0 || (uVar21 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar14 = (byte *)0x1;
    }
    else if (uVar10 >> 0x1e < 2) {
      if (uVar23 == 0) {
        uVar25 = (ulong)pbVar30 >> 0x30 & 0xff;
      }
      else {
        iVar24 = (int)((ulong)pbVar15 >> 0x20);
        if (SBORROW4(iVar24,iVar13)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar12)();
        }
        uVar25 = (ulong)(iVar24 - iVar13);
      }
joined_r0x000100e26170:
      if (1 < uVar11 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar26 == 0) {
        uVar27 = uVar21 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar24 = (int)((ulong)lVar29 >> 0x20);
      if (SBORROW4(iVar24,(int)lVar29)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar12)();
      }
      if (uVar25 == (long)(iVar24 - (int)lVar29)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar14 = (byte *)0x0;
    }
    else {
      if (uVar23 == 2) {
        uVar25 = *(long *)(pbVar15 + 0x18) - *(long *)(pbVar15 + 0x10);
        if (SBORROW8(*(long *)(pbVar15 + 0x18),*(long *)(pbVar15 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar12)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar26 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar26 == 2) {
        uVar27 = *(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 0x10);
        if (SBORROW8(*(long *)(lVar29 + 0x18),*(long *)(lVar29 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar12)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar27) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar23 < 2) {
          if (uVar23 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar15;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar15 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar15 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar15 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar15 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar15 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar15 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar15 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar30;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar30 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar30 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar30 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar30 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar30 >> 0x28);
            pbVar18 = (byte *)((long)register0x00000008 + (((ulong)pbVar30 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar14 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar13;
          unaff_x23 = (byte *)(((long)pbVar15 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar15 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar12)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar30;
          if (pbVar15 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar15 = (byte *)0x0;
          }
          else {
            pbVar18 = pbVar15;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar18)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar12)();
            }
            pbVar15 = pbVar15 + ((long)unaff_x25 - (long)pbVar18);
            func_0x000107c5ec38();
            unaff_x19 = pbVar15;
            if (pbVar15 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar18) {
                pbVar18 = unaff_x23;
              }
              pbVar18 = pbVar18 + (long)pbVar15;
              goto code_r0x000100e262a4;
            }
          }
          pbVar18 = (byte *)0x0;
        }
        else {
          if (uVar23 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar18 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar31 = *(long *)(pbVar15 + 0x10);
          unaff_x24 = *(byte **)(pbVar15 + 0x18);
          func_0x000107c5ec30();
          pbVar18 = pbVar15;
          if (pbVar15 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar31,(long)pbVar18)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar12)();
            }
            pbVar15 = pbVar15 + (lVar31 - (long)pbVar18);
          }
          unaff_x23 = unaff_x24 + -lVar31;
          if (SBORROW8((long)unaff_x24,lVar31)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar12)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar15;
          unaff_x25 = pbVar30;
          if (pbVar15 == (byte *)0x0) {
            pbVar18 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar18) {
              pbVar18 = unaff_x23;
            }
            pbVar18 = pbVar18 + (long)pbVar15;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (byte *)((ulong)pbVar30 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar15,pbVar18,lVar29,
                            uVar21);
        pbVar14 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar21;
      }
      else {
        pbVar14 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar14;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar17 = *(byte **)pbVar14;
    pbVar15 = *(byte **)(pbVar14 + 8);
    pbVar28 = *(byte **)(pbVar14 + 0x18);
    bVar32 = pbVar14[0x28];
    pbVar30 = (byte *)((ulong)*(uint *)(pbVar14 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar14 + 0x15) << 0x28 | (ulong)pbVar14[0x10]);
    pbVar19 = pbVar15;
    if (bVar32 < 3) {
      if (bVar32 == 0) {
        if (pbVar18[0x28] == 0) {
          lVar29 = *(long *)pbVar18;
          uVar16 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar17,lVar29,uVar16);
          return (byte *)(ulong)((uint)pbVar17 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar32 == 1) {
        if (pbVar18[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)(pbVar18 + 8);
        pbVar22 = *(byte **)(pbVar18 + 0x10);
        lVar29 = *(long *)pbVar18;
        uVar16 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar17,lVar29,uVar16);
        if (((ulong)pbVar17 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar17 = pbVar15;
        pbVar19 = pbVar30;
        if ((pbVar15 == pbVar20) && (pbVar30 == pbVar22)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar18[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)pbVar18;
        pbVar22 = *(byte **)(pbVar18 + 8);
        lVar29 = *(long *)(pbVar18 + 0x18);
        if ((pbVar17 == pbVar20) && (pbVar15 == pbVar22)) {
          if (((pbVar14[0x10] ^ pbVar18[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar28 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar29 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar29);
          func_0x000107c61174();
          pbVar15 = pbVar28;
          func_0x000107c60118();
          func_0x000107c61170(pbVar28);
          func_0x000107c61170(lVar29);
          pbVar28 = pbVar15;
joined_r0x000100e266a4:
          if (((ulong)pbVar28 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar17,pbVar19,pbVar20,pbVar22,0);
      return pbVar17;
    }
    lVar31 = *(long *)(pbVar14 + 0x20);
    if (bVar32 < 5) {
      if (bVar32 != 3) {
        if (pbVar18[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)pbVar18;
        pbVar22 = *(byte **)(pbVar18 + 8);
        if (((pbVar17 == pbVar20) && (pbVar15 == pbVar22)) &&
           (pbVar17 = pbVar30, pbVar19 = pbVar28, pbVar20 = *(byte **)(pbVar18 + 0x10),
           pbVar22 = *(byte **)(pbVar18 + 0x18),
           pbVar30 == *(byte **)(pbVar18 + 0x10) && pbVar28 == *(byte **)(pbVar18 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar18[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar18 != ((uint)pbVar17 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar22 = *(byte **)(pbVar18 + 0x10);
      lVar29 = *(long *)(pbVar18 + 0x20);
      if (pbVar30 == (byte *)0x0) {
        if (pbVar22 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar22 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)(pbVar18 + 8);
        pbVar17 = pbVar15;
        pbVar19 = pbVar30;
        if ((pbVar15 != pbVar20) || (pbVar30 != pbVar22)) goto code_r0x000107c605b8;
      }
      if (lVar31 != 0) {
        if (lVar29 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar28 == *(byte **)(pbVar18 + 0x18)) && (lVar31 == lVar29)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar28,lVar31,*(byte **)(pbVar18 + 0x18),lVar29,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar29 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar32 != 5) {
      if ((((pbVar28 == (byte *)0x0 && pbVar15 == (byte *)0x0) && pbVar17 == (byte *)0x0) &&
          lVar31 == 0) && pbVar30 == (byte *)0x0) {
        if (pbVar18[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar31 = *(long *)(pbVar18 + 0x20);
        lVar29 = *(long *)(pbVar18 + 0x18);
        bVar32 = pbVar18[8] | (byte)lVar29;
        bVar33 = pbVar18[9] | (byte)((ulong)lVar29 >> 8);
        bVar34 = pbVar18[10] | (byte)((ulong)lVar29 >> 0x10);
        bVar35 = pbVar18[0xb] | (byte)((ulong)lVar29 >> 0x18);
        bVar36 = pbVar18[0xc] | (byte)((ulong)lVar29 >> 0x20);
        bVar37 = pbVar18[0xd] | (byte)((ulong)lVar29 >> 0x28);
        bVar38 = pbVar18[0xe] | (byte)((ulong)lVar29 >> 0x30);
        bVar39 = pbVar18[0xf] | (byte)((ulong)lVar29 >> 0x38);
        bVar40 = pbVar18[0x10] | (byte)lVar31;
        bVar41 = pbVar18[0x11] | (byte)((ulong)lVar31 >> 8);
        bVar42 = pbVar18[0x12] | (byte)((ulong)lVar31 >> 0x10);
        bVar43 = pbVar18[0x13] | (byte)((ulong)lVar31 >> 0x18);
        bVar44 = pbVar18[0x14] | (byte)((ulong)lVar31 >> 0x20);
        bVar45 = pbVar18[0x15] | (byte)((ulong)lVar31 >> 0x28);
        bVar46 = pbVar18[0x16] | (byte)((ulong)lVar31 >> 0x30);
        bVar47 = pbVar18[0x17] | (byte)((ulong)lVar31 >> 0x38);
        auVar48[1] = bVar33;
        auVar48[0] = bVar32;
        auVar48[2] = bVar34;
        auVar48[3] = bVar35;
        auVar48[4] = bVar36;
        auVar48[5] = bVar37;
        auVar48[6] = bVar38;
        auVar48[7] = bVar39;
        auVar48[8] = bVar40;
        auVar48[9] = bVar41;
        auVar48[10] = bVar42;
        auVar48[0xb] = bVar43;
        auVar48[0xc] = bVar44;
        auVar48[0xd] = bVar45;
        auVar48[0xe] = bVar46;
        auVar48[0xf] = bVar47;
        auVar9[1] = bVar33;
        auVar9[0] = bVar32;
        auVar9[2] = bVar34;
        auVar9[3] = bVar35;
        auVar9[4] = bVar36;
        auVar9[5] = bVar37;
        auVar9[6] = bVar38;
        auVar9[7] = bVar39;
        auVar9[8] = bVar40;
        auVar9[9] = bVar41;
        auVar9[10] = bVar42;
        auVar9[0xb] = bVar43;
        auVar9[0xc] = bVar44;
        auVar9[0xd] = bVar45;
        auVar9[0xe] = bVar46;
        auVar9[0xf] = bVar47;
        auVar48 = NEON_ext(auVar48,auVar9,8,1);
        if (CONCAT17(bVar39 | auVar48[7],
                     CONCAT16(bVar38 | auVar48[6],
                              CONCAT15(bVar37 | auVar48[5],
                                       CONCAT14(bVar36 | auVar48[4],
                                                CONCAT13(bVar35 | auVar48[3],
                                                         CONCAT12(bVar34 | auVar48[2],
                                                                  CONCAT11(bVar33 | auVar48[1],
                                                                           bVar32 | auVar48[0]))))))
                    ) == 0 && *(long *)pbVar18 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar17 == (byte *)0x1) &&
         (((pbVar28 == (byte *)0x0 && pbVar15 == (byte *)0x0) && pbVar30 == (byte *)0x0) &&
          lVar31 == 0)) {
        if (pbVar18[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar18 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar18 != 2) {
          return (byte *)0x0;
        }
      }
      lVar31 = *(long *)(pbVar18 + 0x20);
      lVar29 = *(long *)(pbVar18 + 0x18);
      bVar32 = pbVar18[8] | (byte)lVar29;
      bVar33 = pbVar18[9] | (byte)((ulong)lVar29 >> 8);
      bVar34 = pbVar18[10] | (byte)((ulong)lVar29 >> 0x10);
      bVar35 = pbVar18[0xb] | (byte)((ulong)lVar29 >> 0x18);
      bVar36 = pbVar18[0xc] | (byte)((ulong)lVar29 >> 0x20);
      bVar37 = pbVar18[0xd] | (byte)((ulong)lVar29 >> 0x28);
      bVar38 = pbVar18[0xe] | (byte)((ulong)lVar29 >> 0x30);
      bVar39 = pbVar18[0xf] | (byte)((ulong)lVar29 >> 0x38);
      bVar40 = pbVar18[0x10] | (byte)lVar31;
      bVar41 = pbVar18[0x11] | (byte)((ulong)lVar31 >> 8);
      bVar42 = pbVar18[0x12] | (byte)((ulong)lVar31 >> 0x10);
      bVar43 = pbVar18[0x13] | (byte)((ulong)lVar31 >> 0x18);
      bVar44 = pbVar18[0x14] | (byte)((ulong)lVar31 >> 0x20);
      bVar45 = pbVar18[0x15] | (byte)((ulong)lVar31 >> 0x28);
      bVar46 = pbVar18[0x16] | (byte)((ulong)lVar31 >> 0x30);
      bVar47 = pbVar18[0x17] | (byte)((ulong)lVar31 >> 0x38);
      auVar7[1] = bVar33;
      auVar7[0] = bVar32;
      auVar7[2] = bVar34;
      auVar7[3] = bVar35;
      auVar7[4] = bVar36;
      auVar7[5] = bVar37;
      auVar7[6] = bVar38;
      auVar7[7] = bVar39;
      auVar7[8] = bVar40;
      auVar7[9] = bVar41;
      auVar7[10] = bVar42;
      auVar7[0xb] = bVar43;
      auVar7[0xc] = bVar44;
      auVar7[0xd] = bVar45;
      auVar7[0xe] = bVar46;
      auVar7[0xf] = bVar47;
      auVar8[1] = bVar33;
      auVar8[0] = bVar32;
      auVar8[2] = bVar34;
      auVar8[3] = bVar35;
      auVar8[4] = bVar36;
      auVar8[5] = bVar37;
      auVar8[6] = bVar38;
      auVar8[7] = bVar39;
      auVar8[8] = bVar40;
      auVar8[9] = bVar41;
      auVar8[10] = bVar42;
      auVar8[0xb] = bVar43;
      auVar8[0xc] = bVar44;
      auVar8[0xd] = bVar45;
      auVar8[0xe] = bVar46;
      auVar8[0xf] = bVar47;
      auVar48 = NEON_ext(auVar7,auVar8,8,1);
      lVar29 = CONCAT17(bVar39 | auVar48[7],
                        CONCAT16(bVar38 | auVar48[6],
                                 CONCAT15(bVar37 | auVar48[5],
                                          CONCAT14(bVar36 | auVar48[4],
                                                   CONCAT13(bVar35 | auVar48[3],
                                                            CONCAT12(bVar34 | auVar48[2],
                                                                     CONCAT11(bVar33 | auVar48[1],
                                                                              bVar32 | auVar48[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar18[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar29 = *(long *)(pbVar18 + 8);
    uVar21 = *(ulong *)(pbVar18 + 0x10);
    lVar31 = *(long *)pbVar18;
    uVar16 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar17,lVar31,uVar16);
    if (((ulong)pbVar17 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(byte **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1016714d8; end: 101671577;  */

/* WARNING: Possible PIC construction at 0x000101671524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101671534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101671528) */
/* WARNING: Removing unreachable block (ram,0x000101671538) */

void FUN_1016714d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbdd30 != -1) {
    func_0x000107c61568(0x112dbdd30,FUN_10167109c);
  }
  uVar5 = uRam0000000113802a90;
  uVar4 = uRam0000000113802a88;
  uVar3 = uRam0000000113802a80;
  uVar2 = uRam0000000113802a78;
  uVar1 = uRam0000000113802a70;
  *param_1 = uRam0000000113802a68;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101671578; end: 1016715b3;  */

void FUN_101671578(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbdd50;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbdd50,&UNK_10d978578);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016715b4; end: 1016716f7;  */

void FUN_1016715b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_47 = unaff_x20[1];
  uStack_46 = unaff_x20[2];
  uStack_45 = unaff_x20[3];
  uStack_44 = unaff_x20[4];
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = *(undefined8 *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016716f8; end: 1016717cf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016716f8(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *unaff_x19;
  long lVar29;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar30;
  ulong unaff_x22;
  long lVar31;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  
  pbVar15 = *(byte **)(param_1 + 8);
  pbVar30 = *(byte **)(param_1 + 0x10);
  lVar29 = *(long *)(param_2 + 8);
  uVar21 = *(ulong *)(param_2 + 0x10);
  uVar25 = 0x100;
  if (param_1[1] == 0) {
    uVar25 = 0;
  }
  uVar27 = 0x10000;
  if (param_1[2] == 0) {
    uVar27 = 0;
  }
  uVar1 = 0x1000000;
  if (param_1[3] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000;
  if (param_1[4] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100;
  if (param_2[1] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x10000;
  if (param_2[2] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x1000000;
  if (param_2[3] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100000000;
  if (param_2[4] == 0) {
    uVar6 = 0;
  }
  if ((((uVar25 | *param_1 | uVar27 | uVar1 | uVar2) ^ (uVar3 | *param_2 | uVar4 | uVar5 | uVar6)) &
      0x101010101) != 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = (uint)((ulong)pbVar30 >> 0x20);
    uVar23 = uVar10 >> 0x1e;
    uVar11 = (uint)(uVar21 >> 0x20);
    uVar26 = uVar11 >> 0x1e;
    iVar13 = (int)pbVar15;
    pbVar18 = pbVar30;
    if ((ulong)pbVar30 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar15 != (byte *)0x0) || (pbVar30 != (byte *)0xc000000000000000)) ||
          (uVar21 >> 0x3e < 3)) || ((uVar25 = 0, lVar29 != 0 || (uVar21 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar14 = (byte *)0x1;
    }
    else if (uVar10 >> 0x1e < 2) {
      if (uVar23 == 0) {
        uVar25 = (ulong)pbVar30 >> 0x30 & 0xff;
      }
      else {
        iVar24 = (int)((ulong)pbVar15 >> 0x20);
        if (SBORROW4(iVar24,iVar13)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar12)();
        }
        uVar25 = (ulong)(iVar24 - iVar13);
      }
joined_r0x000100e26170:
      if (1 < uVar11 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar26 == 0) {
        uVar27 = uVar21 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar24 = (int)((ulong)lVar29 >> 0x20);
      if (SBORROW4(iVar24,(int)lVar29)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar12)();
      }
      if (uVar25 == (long)(iVar24 - (int)lVar29)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar14 = (byte *)0x0;
    }
    else {
      if (uVar23 == 2) {
        uVar25 = *(long *)(pbVar15 + 0x18) - *(long *)(pbVar15 + 0x10);
        if (SBORROW8(*(long *)(pbVar15 + 0x18),*(long *)(pbVar15 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar12)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar26 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar26 == 2) {
        uVar27 = *(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 0x10);
        if (SBORROW8(*(long *)(lVar29 + 0x18),*(long *)(lVar29 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar12)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar27) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar23 < 2) {
          if (uVar23 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar15;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar15 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar15 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar15 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar15 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar15 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar15 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar15 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar30;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar30 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar30 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar30 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar30 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar30 >> 0x28);
            pbVar18 = (byte *)((long)register0x00000008 + (((ulong)pbVar30 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar14 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar13;
          unaff_x23 = (byte *)(((long)pbVar15 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar15 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar12)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar30;
          if (pbVar15 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar15 = (byte *)0x0;
          }
          else {
            pbVar18 = pbVar15;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar18)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar12)();
            }
            pbVar15 = pbVar15 + ((long)unaff_x25 - (long)pbVar18);
            func_0x000107c5ec38();
            unaff_x19 = pbVar15;
            if (pbVar15 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar18) {
                pbVar18 = unaff_x23;
              }
              pbVar18 = pbVar18 + (long)pbVar15;
              goto code_r0x000100e262a4;
            }
          }
          pbVar18 = (byte *)0x0;
        }
        else {
          if (uVar23 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar18 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar31 = *(long *)(pbVar15 + 0x10);
          unaff_x24 = *(byte **)(pbVar15 + 0x18);
          func_0x000107c5ec30();
          pbVar18 = pbVar15;
          if (pbVar15 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar31,(long)pbVar18)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar12)();
            }
            pbVar15 = pbVar15 + (lVar31 - (long)pbVar18);
          }
          unaff_x23 = unaff_x24 + -lVar31;
          if (SBORROW8((long)unaff_x24,lVar31)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar12)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar15;
          unaff_x25 = pbVar30;
          if (pbVar15 == (byte *)0x0) {
            pbVar18 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar18) {
              pbVar18 = unaff_x23;
            }
            pbVar18 = pbVar18 + (long)pbVar15;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar30 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar15,pbVar18,lVar29,
                            uVar21);
        pbVar14 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar21;
      }
      else {
        pbVar14 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar14;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar17 = *(byte **)pbVar14;
    pbVar15 = *(byte **)(pbVar14 + 8);
    pbVar28 = *(byte **)(pbVar14 + 0x18);
    bVar32 = pbVar14[0x28];
    pbVar30 = (byte *)((ulong)*(uint *)(pbVar14 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar14 + 0x15) << 0x28 | (ulong)pbVar14[0x10]);
    pbVar19 = pbVar15;
    if (bVar32 < 3) {
      if (bVar32 == 0) {
        if (pbVar18[0x28] == 0) {
          lVar29 = *(long *)pbVar18;
          uVar16 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar17,lVar29,uVar16);
          return (byte *)(ulong)((uint)pbVar17 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar32 == 1) {
        if (pbVar18[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)(pbVar18 + 8);
        pbVar22 = *(byte **)(pbVar18 + 0x10);
        lVar29 = *(long *)pbVar18;
        uVar16 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar17,lVar29,uVar16);
        if (((ulong)pbVar17 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar17 = pbVar15;
        pbVar19 = pbVar30;
        if ((pbVar15 == pbVar20) && (pbVar30 == pbVar22)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar18[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)pbVar18;
        pbVar22 = *(byte **)(pbVar18 + 8);
        lVar29 = *(long *)(pbVar18 + 0x18);
        if ((pbVar17 == pbVar20) && (pbVar15 == pbVar22)) {
          if (((pbVar14[0x10] ^ pbVar18[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar28 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar29 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar29);
          func_0x000107c61174();
          pbVar15 = pbVar28;
          func_0x000107c60118();
          func_0x000107c61170(pbVar28);
          func_0x000107c61170(lVar29);
          pbVar28 = pbVar15;
joined_r0x000100e266a4:
          if (((ulong)pbVar28 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar17,pbVar19,pbVar20,pbVar22,0);
      return pbVar17;
    }
    lVar31 = *(long *)(pbVar14 + 0x20);
    if (bVar32 < 5) {
      if (bVar32 != 3) {
        if (pbVar18[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)pbVar18;
        pbVar22 = *(byte **)(pbVar18 + 8);
        if (((pbVar17 == pbVar20) && (pbVar15 == pbVar22)) &&
           (pbVar17 = pbVar30, pbVar19 = pbVar28, pbVar20 = *(byte **)(pbVar18 + 0x10),
           pbVar22 = *(byte **)(pbVar18 + 0x18),
           pbVar30 == *(byte **)(pbVar18 + 0x10) && pbVar28 == *(byte **)(pbVar18 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar18[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar18 != ((uint)pbVar17 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar22 = *(byte **)(pbVar18 + 0x10);
      lVar29 = *(long *)(pbVar18 + 0x20);
      if (pbVar30 == (byte *)0x0) {
        if (pbVar22 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar22 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar20 = *(byte **)(pbVar18 + 8);
        pbVar17 = pbVar15;
        pbVar19 = pbVar30;
        if ((pbVar15 != pbVar20) || (pbVar30 != pbVar22)) goto code_r0x000107c605b8;
      }
      if (lVar31 != 0) {
        if (lVar29 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar28 == *(byte **)(pbVar18 + 0x18)) && (lVar31 == lVar29)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar28,lVar31,*(byte **)(pbVar18 + 0x18),lVar29,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar29 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar32 != 5) {
      if ((((pbVar28 == (byte *)0x0 && pbVar15 == (byte *)0x0) && pbVar17 == (byte *)0x0) &&
          lVar31 == 0) && pbVar30 == (byte *)0x0) {
        if (pbVar18[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar31 = *(long *)(pbVar18 + 0x20);
        lVar29 = *(long *)(pbVar18 + 0x18);
        bVar32 = pbVar18[8] | (byte)lVar29;
        bVar33 = pbVar18[9] | (byte)((ulong)lVar29 >> 8);
        bVar34 = pbVar18[10] | (byte)((ulong)lVar29 >> 0x10);
        bVar35 = pbVar18[0xb] | (byte)((ulong)lVar29 >> 0x18);
        bVar36 = pbVar18[0xc] | (byte)((ulong)lVar29 >> 0x20);
        bVar37 = pbVar18[0xd] | (byte)((ulong)lVar29 >> 0x28);
        bVar38 = pbVar18[0xe] | (byte)((ulong)lVar29 >> 0x30);
        bVar39 = pbVar18[0xf] | (byte)((ulong)lVar29 >> 0x38);
        bVar40 = pbVar18[0x10] | (byte)lVar31;
        bVar41 = pbVar18[0x11] | (byte)((ulong)lVar31 >> 8);
        bVar42 = pbVar18[0x12] | (byte)((ulong)lVar31 >> 0x10);
        bVar43 = pbVar18[0x13] | (byte)((ulong)lVar31 >> 0x18);
        bVar44 = pbVar18[0x14] | (byte)((ulong)lVar31 >> 0x20);
        bVar45 = pbVar18[0x15] | (byte)((ulong)lVar31 >> 0x28);
        bVar46 = pbVar18[0x16] | (byte)((ulong)lVar31 >> 0x30);
        bVar47 = pbVar18[0x17] | (byte)((ulong)lVar31 >> 0x38);
        auVar48[1] = bVar33;
        auVar48[0] = bVar32;
        auVar48[2] = bVar34;
        auVar48[3] = bVar35;
        auVar48[4] = bVar36;
        auVar48[5] = bVar37;
        auVar48[6] = bVar38;
        auVar48[7] = bVar39;
        auVar48[8] = bVar40;
        auVar48[9] = bVar41;
        auVar48[10] = bVar42;
        auVar48[0xb] = bVar43;
        auVar48[0xc] = bVar44;
        auVar48[0xd] = bVar45;
        auVar48[0xe] = bVar46;
        auVar48[0xf] = bVar47;
        auVar9[1] = bVar33;
        auVar9[0] = bVar32;
        auVar9[2] = bVar34;
        auVar9[3] = bVar35;
        auVar9[4] = bVar36;
        auVar9[5] = bVar37;
        auVar9[6] = bVar38;
        auVar9[7] = bVar39;
        auVar9[8] = bVar40;
        auVar9[9] = bVar41;
        auVar9[10] = bVar42;
        auVar9[0xb] = bVar43;
        auVar9[0xc] = bVar44;
        auVar9[0xd] = bVar45;
        auVar9[0xe] = bVar46;
        auVar9[0xf] = bVar47;
        auVar48 = NEON_ext(auVar48,auVar9,8,1);
        if (CONCAT17(bVar39 | auVar48[7],
                     CONCAT16(bVar38 | auVar48[6],
                              CONCAT15(bVar37 | auVar48[5],
                                       CONCAT14(bVar36 | auVar48[4],
                                                CONCAT13(bVar35 | auVar48[3],
                                                         CONCAT12(bVar34 | auVar48[2],
                                                                  CONCAT11(bVar33 | auVar48[1],
                                                                           bVar32 | auVar48[0]))))))
                    ) == 0 && *(long *)pbVar18 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar17 == (byte *)0x1) &&
         (((pbVar28 == (byte *)0x0 && pbVar15 == (byte *)0x0) && pbVar30 == (byte *)0x0) &&
          lVar31 == 0)) {
        if (pbVar18[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar18 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar18 != 2) {
          return (byte *)0x0;
        }
      }
      lVar31 = *(long *)(pbVar18 + 0x20);
      lVar29 = *(long *)(pbVar18 + 0x18);
      bVar32 = pbVar18[8] | (byte)lVar29;
      bVar33 = pbVar18[9] | (byte)((ulong)lVar29 >> 8);
      bVar34 = pbVar18[10] | (byte)((ulong)lVar29 >> 0x10);
      bVar35 = pbVar18[0xb] | (byte)((ulong)lVar29 >> 0x18);
      bVar36 = pbVar18[0xc] | (byte)((ulong)lVar29 >> 0x20);
      bVar37 = pbVar18[0xd] | (byte)((ulong)lVar29 >> 0x28);
      bVar38 = pbVar18[0xe] | (byte)((ulong)lVar29 >> 0x30);
      bVar39 = pbVar18[0xf] | (byte)((ulong)lVar29 >> 0x38);
      bVar40 = pbVar18[0x10] | (byte)lVar31;
      bVar41 = pbVar18[0x11] | (byte)((ulong)lVar31 >> 8);
      bVar42 = pbVar18[0x12] | (byte)((ulong)lVar31 >> 0x10);
      bVar43 = pbVar18[0x13] | (byte)((ulong)lVar31 >> 0x18);
      bVar44 = pbVar18[0x14] | (byte)((ulong)lVar31 >> 0x20);
      bVar45 = pbVar18[0x15] | (byte)((ulong)lVar31 >> 0x28);
      bVar46 = pbVar18[0x16] | (byte)((ulong)lVar31 >> 0x30);
      bVar47 = pbVar18[0x17] | (byte)((ulong)lVar31 >> 0x38);
      auVar7[1] = bVar33;
      auVar7[0] = bVar32;
      auVar7[2] = bVar34;
      auVar7[3] = bVar35;
      auVar7[4] = bVar36;
      auVar7[5] = bVar37;
      auVar7[6] = bVar38;
      auVar7[7] = bVar39;
      auVar7[8] = bVar40;
      auVar7[9] = bVar41;
      auVar7[10] = bVar42;
      auVar7[0xb] = bVar43;
      auVar7[0xc] = bVar44;
      auVar7[0xd] = bVar45;
      auVar7[0xe] = bVar46;
      auVar7[0xf] = bVar47;
      auVar8[1] = bVar33;
      auVar8[0] = bVar32;
      auVar8[2] = bVar34;
      auVar8[3] = bVar35;
      auVar8[4] = bVar36;
      auVar8[5] = bVar37;
      auVar8[6] = bVar38;
      auVar8[7] = bVar39;
      auVar8[8] = bVar40;
      auVar8[9] = bVar41;
      auVar8[10] = bVar42;
      auVar8[0xb] = bVar43;
      auVar8[0xc] = bVar44;
      auVar8[0xd] = bVar45;
      auVar8[0xe] = bVar46;
      auVar8[0xf] = bVar47;
      auVar48 = NEON_ext(auVar7,auVar8,8,1);
      lVar29 = CONCAT17(bVar39 | auVar48[7],
                        CONCAT16(bVar38 | auVar48[6],
                                 CONCAT15(bVar37 | auVar48[5],
                                          CONCAT14(bVar36 | auVar48[4],
                                                   CONCAT13(bVar35 | auVar48[3],
                                                            CONCAT12(bVar34 | auVar48[2],
                                                                     CONCAT11(bVar33 | auVar48[1],
                                                                              bVar32 | auVar48[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar18[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar29 = *(long *)(pbVar18 + 8);
    uVar21 = *(ulong *)(pbVar18 + 0x10);
    lVar31 = *(long *)pbVar18;
    uVar16 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar17,lVar31,uVar16);
    if (((ulong)pbVar17 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1016717d0; end: 10167180f;  */

void FUN_1016717d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9784a0;
  func_0x000107c61520(&UNK_10d9784a0,&UNK_1103f0f90);
  puRam0000000112dbdd38 = puVar1;
  return;
}



/* Entry: 101671810; end: 101671833;  */

void FUN_101671810(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101671834();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101671834; end: 101671873;  */

void FUN_101671834(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978478;
  func_0x000107c61520(&UNK_10d978478,&UNK_1103f0f90);
  puRam0000000112dbdd40 = puVar1;
  return;
}



/* Entry: 101671874; end: 10167189f;  */

void FUN_101671874(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016717d0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010164ad34();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016718a0; end: 1016718a3;  */

void FUN_1016718a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9784e0;
  func_0x000107c61520(&UNK_10d9784e0,&UNK_1103f0f90);
  puRam0000000112dbdd48 = puVar1;
  return;
}



/* Entry: 1016718a4; end: 1016718e3;  */

void FUN_1016718a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9784e0;
  func_0x000107c61520(&UNK_10d9784e0,&UNK_1103f0f90);
  puRam0000000112dbdd48 = puVar1;
  return;
}



/* Entry: 1016718e4; end: 1016718ef;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016718e4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x10) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x10) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1016718f0; end: 1016719a7;  */

undefined4 * FUN_1016718f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 1016719a8; end: 101671a07;  */

undefined1 * FUN_1016719a8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101671a08; end: 101671aaf;  */

int FUN_101671a08(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101671ab0; end: 101671aef;  */

void FUN_101671ab0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdd58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d97844c;
  func_0x000107c61520(&DAT_10d97844c,&UNK_1103f0f90);
  puRam0000000112dbdd58 = puVar1;
  return;
}



/* Entry: 101671af0; end: 101671b07;  */

undefined4 * FUN_101671af0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 101671b08; end: 101671b37;  */

void FUN_101671b08(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_101672304();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101671b38; end: 101671b3f;  */

undefined8 FUN_101671b38(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101671b40; end: 101671bb3;  */

void FUN_101671b40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbdde8;
  func_0x0001000285a8(0x112dbdde8,&UNK_10d978630);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101671bb4; end: 101671bbf;  */

void FUN_101671bb4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101671bc0; end: 101671c6b;  */

void FUN_101671bc0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101671c6c; end: 101671c7f;  */

bool FUN_101671c6c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101671c80; end: 101671cc7;  */

void FUN_101671c80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9788c0,0x88,2);
  uRam0000000113802aa0 = uStack_38;
  uRam0000000113802a98 = uStack_40;
  uRam0000000113802ab0 = uStack_28;
  uRam0000000113802aa8 = uStack_30;
  uRam0000000113802ac0 = uStack_18;
  uRam0000000113802ab8 = uStack_20;
  return;
}



/* Entry: 101671cc8; end: 101671d67;  */

/* WARNING: Possible PIC construction at 0x000101671d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101671d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101671d18) */
/* WARNING: Removing unreachable block (ram,0x000101671d28) */

void FUN_101671cc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbddf0 != -1) {
    func_0x000107c61568(0x112dbddf0,FUN_101671c80);
  }
  uVar5 = uRam0000000113802ac0;
  uVar4 = uRam0000000113802ab8;
  uVar3 = uRam0000000113802ab0;
  uVar2 = uRam0000000113802aa8;
  uVar1 = uRam0000000113802aa0;
  *param_1 = uRam0000000113802a98;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101671d68; end: 101671daf;  */

void FUN_101671d68(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9788a8,0xc,2);
  uRam0000000113802ad0 = uStack_38;
  uRam0000000113802ac8 = uStack_40;
  uRam0000000113802ae0 = uStack_28;
  uRam0000000113802ad8 = uStack_30;
  uRam0000000113802af0 = uStack_18;
  uRam0000000113802ae8 = uStack_20;
  return;
}



/* Entry: 101671db0; end: 101671e83;  */

/* WARNING: Removing unreachable block (ram,0x000101671e80) */

void FUN_101671db0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_101672310();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101671e84; end: 101671f4f;  */

void FUN_101671e84(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    FUN_101672310();
    (*pcVar4)(&lStack_50,1,&UNK_1103f11a0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 101671f50; end: 101671f9b;  */

/* WARNING: Possible PIC construction at 0x0001016723c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001016723c4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101671f50(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 3) {
      if (lVar22 == 0) {
        if (lVar19 == 0) goto LAB_10167238c;
      }
      else if (lVar22 == 1) {
        if (lVar19 == 1) {
LAB_10167238c:
          pbVar12 = (byte *)param_1[2];
          pbVar14 = (byte *)param_1[3];
          pbVar15 = (byte *)param_2[2];
          pbVar17 = (byte *)param_2[3];
          if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3])
          {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar15,pbVar17,0);
            return pbVar12;
          }
          pbVar10 = (byte *)param_1[4];
          pbVar26 = (byte *)param_1[5];
          lVar19 = param_2[4];
          uVar16 = param_2[5];
          puVar7 = (undefined1 *)register0x00000008;
          do {
            *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
            *(byte **)(puVar7 + -0x48) = unaff_x25;
            *(byte **)(puVar7 + -0x40) = unaff_x24;
            *(byte **)(puVar7 + -0x38) = unaff_x23;
            *(ulong *)(puVar7 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
            *(ulong *)(puVar7 + -0x20) = unaff_x20;
            *(byte **)(puVar7 + -0x18) = unaff_x19;
            *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar7 + -8) = unaff_x30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar26 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar16 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar13 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar16 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar21 = (ulong)(iVar20 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar23 == 0) {
                uVar24 = uVar16 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar20 = (int)((ulong)lVar19 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar23 == 2) {
                uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar18 < 2) {
                  if (uVar18 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar26;
                    puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                    pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar13 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar13) {
                        pbVar13 = unaff_x23;
                      }
                      pbVar13 = pbVar13 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar13 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar13 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                  }
                  unaff_x23 = unaff_x24 + -lVar22;
                  if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar16;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar12 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar14 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar13[0x28] == 0) {
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar13[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)(pbVar13 + 8);
                pbVar17 = *(byte **)(pbVar13 + 0x10);
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar14 = pbVar26;
                if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar13[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)pbVar13;
                pbVar17 = *(byte **)(pbVar13 + 8);
                lVar19 = *(long *)(pbVar13 + 0x18);
                if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                  if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar12 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar13[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)pbVar13;
                pbVar17 = *(byte **)(pbVar13 + 8);
                if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                   (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                   pbVar17 = *(byte **)(pbVar13 + 0x18),
                   pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar13[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)(pbVar13 + 0x20);
              if (pbVar26 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar17 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)(pbVar13 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar26;
                if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar13[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar43[1] = bVar28;
                auVar43[0] = bVar27;
                auVar43[2] = bVar29;
                auVar43[3] = bVar30;
                auVar43[4] = bVar31;
                auVar43[5] = bVar32;
                auVar43[6] = bVar33;
                auVar43[7] = bVar34;
                auVar43[8] = bVar35;
                auVar43[9] = bVar36;
                auVar43[10] = bVar37;
                auVar43[0xb] = bVar38;
                auVar43[0xc] = bVar39;
                auVar43[0xd] = bVar40;
                auVar43[0xe] = bVar41;
                auVar43[0xf] = bVar42;
                auVar3[1] = bVar28;
                auVar3[0] = bVar27;
                auVar3[2] = bVar29;
                auVar3[3] = bVar30;
                auVar3[4] = bVar31;
                auVar3[5] = bVar32;
                auVar3[6] = bVar33;
                auVar3[7] = bVar34;
                auVar3[8] = bVar35;
                auVar3[9] = bVar36;
                auVar3[10] = bVar37;
                auVar3[0xb] = bVar38;
                auVar3[0xc] = bVar39;
                auVar3[0xd] = bVar40;
                auVar3[0xe] = bVar41;
                auVar3[0xf] = bVar42;
                auVar43 = NEON_ext(auVar43,auVar3,8,1);
                if (CONCAT17(bVar34 | auVar43[7],
                             CONCAT16(bVar33 | auVar43[6],
                                      CONCAT15(bVar32 | auVar43[5],
                                               CONCAT14(bVar31 | auVar43[4],
                                                        CONCAT13(bVar30 | auVar43[3],
                                                                 CONCAT12(bVar29 | auVar43[2],
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar13 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
                if (pbVar13[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar13 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar13[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar13 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar1[1] = bVar28;
              auVar1[0] = bVar27;
              auVar1[2] = bVar29;
              auVar1[3] = bVar30;
              auVar1[4] = bVar31;
              auVar1[5] = bVar32;
              auVar1[6] = bVar33;
              auVar1[7] = bVar34;
              auVar1[8] = bVar35;
              auVar1[9] = bVar36;
              auVar1[10] = bVar37;
              auVar1[0xb] = bVar38;
              auVar1[0xc] = bVar39;
              auVar1[0xd] = bVar40;
              auVar1[0xe] = bVar41;
              auVar1[0xf] = bVar42;
              auVar2[1] = bVar28;
              auVar2[0] = bVar27;
              auVar2[2] = bVar29;
              auVar2[3] = bVar30;
              auVar2[4] = bVar31;
              auVar2[5] = bVar32;
              auVar2[6] = bVar33;
              auVar2[7] = bVar34;
              auVar2[8] = bVar35;
              auVar2[9] = bVar36;
              auVar2[10] = bVar37;
              auVar2[0xb] = bVar38;
              auVar2[0xc] = bVar39;
              auVar2[0xd] = bVar40;
              auVar2[0xe] = bVar41;
              auVar2[0xf] = bVar42;
              auVar43 = NEON_ext(auVar1,auVar2,8,1);
              lVar19 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar13[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 8);
            uVar16 = *(ulong *)(pbVar13 + 0x10);
            lVar22 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar22,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
            unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
            unaff_x20 = *(ulong *)(puVar7 + -0xa0);
            unaff_x19 = *(byte **)(puVar7 + -0x98);
            unaff_x22 = *(ulong *)(puVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
            unaff_x24 = *(byte **)(puVar7 + -0xc0);
            unaff_x23 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
      else if (lVar19 == 2) goto LAB_10167238c;
    }
    else if (lVar22 == 3) {
      if (lVar19 == 3) goto LAB_10167238c;
    }
    else if (lVar22 == 4) {
      if (lVar19 == 4) goto LAB_10167238c;
    }
    else if (lVar19 == 5) goto LAB_10167238c;
  }
  else if (lVar19 == lVar22) goto LAB_10167238c;
  return (byte *)0x0;
}



/* Entry: 101671f9c; end: 101671fcb;  */

undefined1  [16] FUN_101671f9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101671fcc; end: 101671fff;  */

void FUN_101671fcc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 101672000; end: 101672013;  */

undefined1  [16] FUN_101672000(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101672010;
  return auVar1;
}



/* Entry: 101672014; end: 10167203b;  */

void FUN_101672014(void)

{
  FUN_101671db0();
  return;
}



/* Entry: 10167203c; end: 10167203f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10167203c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101672040; end: 101672077;  */

uint FUN_101672040(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101672950();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101672078; end: 1016720bf;  */

uint FUN_101672078(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_101672350(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1016720c0; end: 10167215f;  */

/* WARNING: Possible PIC construction at 0x00010167210c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010167211c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101672110) */
/* WARNING: Removing unreachable block (ram,0x000101672120) */

void FUN_1016720c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbddf8 != -1) {
    func_0x000107c61568(0x112dbddf8,FUN_101671d68);
  }
  uVar5 = uRam0000000113802af0;
  uVar4 = uRam0000000113802ae8;
  uVar3 = uRam0000000113802ae0;
  uVar2 = uRam0000000113802ad8;
  uVar1 = uRam0000000113802ad0;
  *param_1 = uRam0000000113802ac8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101672160; end: 10167219b;  */

void FUN_101672160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbde48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbde48,&UNK_10d9788a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10167219c; end: 1016722bf;  */

void FUN_10167219c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016722c0; end: 101672303;  */

uint FUN_1016722c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101672350(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101672304; end: 10167230f;  */

void FUN_101672304(void)

{
  return;
}



/* Entry: 101672310; end: 10167234f;  */

void FUN_101672310(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d978638;
  func_0x000107c61520(&DAT_10d978638,&UNK_1103f11a0);
  puRam0000000112dbde00 = puVar1;
  return;
}



/* Entry: 101672350; end: 10167243b;  */

/* WARNING: Possible PIC construction at 0x0001016723c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001016723c4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101672350(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 3) {
      if (lVar22 == 0) {
        if (lVar19 == 0) goto LAB_10167238c;
      }
      else if (lVar22 == 1) {
        if (lVar19 == 1) {
LAB_10167238c:
          pbVar12 = (byte *)param_1[2];
          pbVar14 = (byte *)param_1[3];
          pbVar15 = (byte *)param_2[2];
          pbVar17 = (byte *)param_2[3];
          if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3])
          {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar15,pbVar17,0);
            return pbVar12;
          }
          pbVar10 = (byte *)param_1[4];
          pbVar26 = (byte *)param_1[5];
          lVar19 = param_2[4];
          uVar16 = param_2[5];
          puVar7 = (undefined1 *)register0x00000008;
          do {
            *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
            *(byte **)(puVar7 + -0x48) = unaff_x25;
            *(byte **)(puVar7 + -0x40) = unaff_x24;
            *(byte **)(puVar7 + -0x38) = unaff_x23;
            *(ulong *)(puVar7 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
            *(ulong *)(puVar7 + -0x20) = unaff_x20;
            *(byte **)(puVar7 + -0x18) = unaff_x19;
            *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar7 + -8) = unaff_x30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar26 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar16 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar13 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar16 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar21 = (ulong)(iVar20 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar23 == 0) {
                uVar24 = uVar16 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar20 = (int)((ulong)lVar19 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar23 == 2) {
                uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar18 < 2) {
                  if (uVar18 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar26;
                    puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                    pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar13 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar13) {
                        pbVar13 = unaff_x23;
                      }
                      pbVar13 = pbVar13 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar13 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar13 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                  }
                  unaff_x23 = unaff_x24 + -lVar22;
                  if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar16;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar12 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar14 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar13[0x28] == 0) {
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar13[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)(pbVar13 + 8);
                pbVar17 = *(byte **)(pbVar13 + 0x10);
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar14 = pbVar26;
                if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar13[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)pbVar13;
                pbVar17 = *(byte **)(pbVar13 + 8);
                lVar19 = *(long *)(pbVar13 + 0x18);
                if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                  if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar12 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar13[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)pbVar13;
                pbVar17 = *(byte **)(pbVar13 + 8);
                if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                   (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                   pbVar17 = *(byte **)(pbVar13 + 0x18),
                   pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar13[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)(pbVar13 + 0x20);
              if (pbVar26 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar17 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar15 = *(byte **)(pbVar13 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar26;
                if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar13[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar43[1] = bVar28;
                auVar43[0] = bVar27;
                auVar43[2] = bVar29;
                auVar43[3] = bVar30;
                auVar43[4] = bVar31;
                auVar43[5] = bVar32;
                auVar43[6] = bVar33;
                auVar43[7] = bVar34;
                auVar43[8] = bVar35;
                auVar43[9] = bVar36;
                auVar43[10] = bVar37;
                auVar43[0xb] = bVar38;
                auVar43[0xc] = bVar39;
                auVar43[0xd] = bVar40;
                auVar43[0xe] = bVar41;
                auVar43[0xf] = bVar42;
                auVar3[1] = bVar28;
                auVar3[0] = bVar27;
                auVar3[2] = bVar29;
                auVar3[3] = bVar30;
                auVar3[4] = bVar31;
                auVar3[5] = bVar32;
                auVar3[6] = bVar33;
                auVar3[7] = bVar34;
                auVar3[8] = bVar35;
                auVar3[9] = bVar36;
                auVar3[10] = bVar37;
                auVar3[0xb] = bVar38;
                auVar3[0xc] = bVar39;
                auVar3[0xd] = bVar40;
                auVar3[0xe] = bVar41;
                auVar3[0xf] = bVar42;
                auVar43 = NEON_ext(auVar43,auVar3,8,1);
                if (CONCAT17(bVar34 | auVar43[7],
                             CONCAT16(bVar33 | auVar43[6],
                                      CONCAT15(bVar32 | auVar43[5],
                                               CONCAT14(bVar31 | auVar43[4],
                                                        CONCAT13(bVar30 | auVar43[3],
                                                                 CONCAT12(bVar29 | auVar43[2],
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar13 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
                if (pbVar13[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar13 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar13[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar13 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar1[1] = bVar28;
              auVar1[0] = bVar27;
              auVar1[2] = bVar29;
              auVar1[3] = bVar30;
              auVar1[4] = bVar31;
              auVar1[5] = bVar32;
              auVar1[6] = bVar33;
              auVar1[7] = bVar34;
              auVar1[8] = bVar35;
              auVar1[9] = bVar36;
              auVar1[10] = bVar37;
              auVar1[0xb] = bVar38;
              auVar1[0xc] = bVar39;
              auVar1[0xd] = bVar40;
              auVar1[0xe] = bVar41;
              auVar1[0xf] = bVar42;
              auVar2[1] = bVar28;
              auVar2[0] = bVar27;
              auVar2[2] = bVar29;
              auVar2[3] = bVar30;
              auVar2[4] = bVar31;
              auVar2[5] = bVar32;
              auVar2[6] = bVar33;
              auVar2[7] = bVar34;
              auVar2[8] = bVar35;
              auVar2[9] = bVar36;
              auVar2[10] = bVar37;
              auVar2[0xb] = bVar38;
              auVar2[0xc] = bVar39;
              auVar2[0xd] = bVar40;
              auVar2[0xe] = bVar41;
              auVar2[0xf] = bVar42;
              auVar43 = NEON_ext(auVar1,auVar2,8,1);
              lVar19 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar13[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 8);
            uVar16 = *(ulong *)(pbVar13 + 0x10);
            lVar22 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar22,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
            unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
            unaff_x20 = *(ulong *)(puVar7 + -0xa0);
            unaff_x19 = *(byte **)(puVar7 + -0x98);
            unaff_x22 = *(ulong *)(puVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
            unaff_x24 = *(byte **)(puVar7 + -0xc0);
            unaff_x23 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
      else if (lVar19 == 2) goto LAB_10167238c;
    }
    else if (lVar22 == 3) {
      if (lVar19 == 3) goto LAB_10167238c;
    }
    else if (lVar22 == 4) {
      if (lVar19 == 4) goto LAB_10167238c;
    }
    else if (lVar19 == 5) goto LAB_10167238c;
  }
  else if (lVar19 == lVar22) goto LAB_10167238c;
  return (byte *)0x0;
}



/* Entry: 10167243c; end: 10167247b;  */

void FUN_10167243c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9787b8;
  func_0x000107c61520(&UNK_10d9787b8,&UNK_1103f1218);
  puRam0000000112dbde08 = puVar1;
  return;
}



/* Entry: 10167247c; end: 10167248f;  */

void FUN_10167247c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101672490();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016724d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101672490; end: 10167250f;  */

void FUN_101672490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9786d0;
  func_0x000107c61520(&UNK_10d9786d0,&UNK_1103f11a0);
  puRam0000000112dbde10 = puVar1;
  return;
}



/* Entry: 101672510; end: 101672513;  */

void FUN_101672510(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbde20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbde28;
  func_0x00010002969c(0x112dbde28,&UNK_10d978658);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbde20 = puVar2;
  return;
}



/* Entry: 101672514; end: 101672563;  */

void FUN_101672514(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbde20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbde28;
  func_0x00010002969c(0x112dbde28,&UNK_10d978658);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbde20 = puVar2;
  return;
}



/* Entry: 101672564; end: 101672567;  */

void FUN_101672564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978710;
  func_0x000107c61520(&UNK_10d978710,&UNK_1103f11a0);
  puRam0000000112dbde30 = puVar1;
  return;
}



/* Entry: 101672568; end: 1016725a7;  */

void FUN_101672568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978710;
  func_0x000107c61520(&UNK_10d978710,&UNK_1103f11a0);
  puRam0000000112dbde30 = puVar1;
  return;
}



/* Entry: 1016725a8; end: 1016725cb;  */

void FUN_1016725a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016725cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016725cc; end: 10167260b;  */

void FUN_1016725cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978790;
  func_0x000107c61520(&UNK_10d978790,&UNK_1103f1218);
  puRam0000000112dbde38 = puVar1;
  return;
}



/* Entry: 10167260c; end: 10167261f;  */

void FUN_10167260c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10167243c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10164ac34)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101672620; end: 10167264f;  */

void FUN_101672620(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101672650; end: 101672653;  */

void FUN_101672650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9787f8;
  func_0x000107c61520(&UNK_10d9787f8,&UNK_1103f1218);
  puRam0000000112dbde40 = puVar1;
  return;
}



/* Entry: 101672654; end: 101672693;  */

void FUN_101672654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9787f8;
  func_0x000107c61520(&UNK_10d9787f8,&UNK_1103f1218);
  puRam0000000112dbde40 = puVar1;
  return;
}



/* Entry: 101672694; end: 101672733;  */

int FUN_101672694(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101672734; end: 101672787;  */

long FUN_101672734(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101672788; end: 101672857;  */

undefined8 * FUN_101672788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 101672858; end: 1016728ab;  */

undefined8 * FUN_101672858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1016728ac; end: 10167294f;  */

int FUN_1016728ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101672950; end: 10167298f;  */

void FUN_101672950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbde50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d978764;
  func_0x000107c61520(&DAT_10d978764,&UNK_1103f1218);
  puRam0000000112dbde50 = puVar1;
  return;
}



/* Entry: 101672990; end: 10167299f;  */

void FUN_101672990(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


