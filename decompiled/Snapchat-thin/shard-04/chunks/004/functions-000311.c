/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10350ff6c; end: 10350ffb3;  */

void FUN_10350ff6c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd3550,0x2e,2);
  uRam00000001138078b8 = uStack_38;
  uRam00000001138078b0 = uStack_40;
  uRam00000001138078c8 = uStack_28;
  uRam00000001138078c0 = uStack_30;
  uRam00000001138078d8 = uStack_18;
  uRam00000001138078d0 = uStack_20;
  return;
}



/* Entry: 10350ffb4; end: 103510097;  */

void FUN_10350ffb4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103510fbc();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066abb0;
LAB_10351003c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790c80;
        goto LAB_10351003c;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103510098; end: 10351010b;  */

void FUN_103510098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10351010c();
  if (unaff_x21 == 0) {
    FUN_10351018c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10351010c; end: 10351018b;  */

void FUN_10351010c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10351018c; end: 10351020f;  */

void FUN_10351018c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x30);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103510210; end: 103510253;  */

uint FUN_103510210(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar8 = param_1[3];
  uVar5 = param_1[2];
  lVar3 = param_1[4];
  uVar9 = param_2[3];
  uVar6 = param_2[2];
  lVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar9;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar8;
  lStack_70 = lVar3;
  if (lVar3 == 0) {
    if (lVar4 != 0) goto LAB_1035106dc;
    FUN_10350ff24(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10350ff24(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar5,uVar8,0);
  }
  else {
    if (lVar4 == 0) {
LAB_1035106dc:
      FUN_10350ff24(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
      FUN_10350ff24(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
      func_0x00010349f458(uVar5,uVar8,lVar3);
      func_0x00010349f458(uVar6,uVar9,lVar4);
      uVar1 = 0;
      goto LAB_10351092c;
    }
    FUN_10350ff24(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10350ff24(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar5;
    FUN_1035d8f6c(uVar5,uVar8,lVar3,uVar6,uVar9,lVar4);
    func_0x00010349f458(uVar6,uVar9,lVar4);
    func_0x00010349f458(uVar5,uVar8,lVar3);
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
      goto LAB_10351092c;
    }
  }
  lVar3 = param_1[6];
  uVar5 = param_1[5];
  uVar6 = param_1[8];
  uVar10 = param_1[7];
  lVar4 = param_2[6];
  uVar7 = param_2[5];
  uVar8 = param_2[8];
  uVar11 = param_2[7];
  uStack_e0 = uVar7;
  lStack_d8 = lVar4;
  uStack_d0 = uVar11;
  uStack_c8 = uVar8;
  uStack_c0 = uVar5;
  lStack_b8 = lVar3;
  uStack_b0 = uVar10;
  uStack_a8 = uVar6;
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_10351090c:
      func_0x000101597ae4(uVar5,lVar3,uVar10,uVar6);
      uVar6 = *param_1;
      func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar6;
      goto LAB_10351092c;
    }
LAB_103510868:
    FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
    FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar5,lVar3,uVar10,uVar6);
    uVar5 = uVar7;
    lVar3 = lVar4;
    uVar10 = uVar11;
    uVar6 = uVar8;
  }
  else {
    if (lVar4 == 0) goto LAB_103510868;
    if (((uVar5 == uVar7) && (lVar3 == lVar4)) ||
       (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar7,lVar4,0), (uVar2 & 1) != 0)) {
      FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
      func_0x000101597ae4(uVar7,lVar4,uVar11,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10351090c;
    }
    else {
      FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar7,lVar4,uVar11,uVar8);
    }
  }
  func_0x000101597ae4(uVar5,lVar3,uVar10,uVar6);
  uVar1 = 0;
LAB_10351092c:
  return uVar1 & 1;
}



/* Entry: 103510254; end: 103510283;  */

undefined1  [16] FUN_103510254(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103510284; end: 1035102b7;  */

void FUN_103510284(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035102b8; end: 1035102cb;  */

undefined8 FUN_1035102b8(void)

{
  return 0x1035102c8;
}



/* Entry: 1035102cc; end: 1035102df;  */

void FUN_1035102cc(void)

{
  FUN_10350ffb4();
  return;
}



/* Entry: 1035102e0; end: 10351031f;  */

void FUN_1035102e0(void)

{
  FUN_103510098();
  return;
}



/* Entry: 103510320; end: 103510323;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103510320(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103510324; end: 10351035b;  */

uint FUN_103510324(long param_1,long param_2)

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
  FUN_103510f7c();
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



/* Entry: 10351035c; end: 1035103b3;  */

uint FUN_10351035c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_1035105fc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035103b4; end: 103510453;  */

/* WARNING: Possible PIC construction at 0x000103510400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103510410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103510404) */
/* WARNING: Removing unreachable block (ram,0x000103510414) */

void FUN_1035103b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f759a8 != -1) {
    func_0x000107c61568(0x112f759a8,FUN_10350ff6c);
  }
  uVar5 = uRam00000001138078d8;
  uVar4 = uRam00000001138078d0;
  uVar3 = uRam00000001138078c8;
  uVar2 = uRam00000001138078c0;
  uVar1 = uRam00000001138078b8;
  *param_1 = uRam00000001138078b0;
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



/* Entry: 103510454; end: 10351048f;  */

void FUN_103510454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f759c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f759c8,&UNK_10dbd3548);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103510490; end: 1035105a3;  */

void FUN_103510490(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035105a4; end: 1035105fb;  */

uint FUN_1035105a4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1035105fc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035105fc; end: 1035109af;  */

uint FUN_1035105fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar8 = param_1[3];
  uVar5 = param_1[2];
  lVar3 = param_1[4];
  uVar9 = param_2[3];
  uVar6 = param_2[2];
  lVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar9;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar8;
  lStack_70 = lVar3;
  if (lVar3 == 0) {
    if (lVar4 != 0) goto LAB_1035106dc;
    FUN_10350ff24(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10350ff24(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar5,uVar8,0);
  }
  else {
    if (lVar4 == 0) {
LAB_1035106dc:
      FUN_10350ff24(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
      FUN_10350ff24(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
      func_0x00010349f458(uVar5,uVar8,lVar3);
      func_0x00010349f458(uVar6,uVar9,lVar4);
      uVar1 = 0;
      goto LAB_10351092c;
    }
    FUN_10350ff24(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10350ff24(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar5;
    FUN_1035d8f6c(uVar5,uVar8,lVar3,uVar6,uVar9,lVar4);
    func_0x00010349f458(uVar6,uVar9,lVar4);
    func_0x00010349f458(uVar5,uVar8,lVar3);
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
      goto LAB_10351092c;
    }
  }
  lVar3 = param_1[6];
  uVar5 = param_1[5];
  uVar6 = param_1[8];
  uVar10 = param_1[7];
  lVar4 = param_2[6];
  uVar7 = param_2[5];
  uVar8 = param_2[8];
  uVar11 = param_2[7];
  uStack_e0 = uVar7;
  lStack_d8 = lVar4;
  uStack_d0 = uVar11;
  uStack_c8 = uVar8;
  uStack_c0 = uVar5;
  lStack_b8 = lVar3;
  uStack_b0 = uVar10;
  uStack_a8 = uVar6;
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_10351090c:
      func_0x000101597ae4(uVar5,lVar3,uVar10,uVar6);
      uVar6 = *param_1;
      func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar6;
      goto LAB_10351092c;
    }
LAB_103510868:
    FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
    FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar5,lVar3,uVar10,uVar6);
    uVar5 = uVar7;
    lVar3 = lVar4;
    uVar10 = uVar11;
    uVar6 = uVar8;
  }
  else {
    if (lVar4 == 0) goto LAB_103510868;
    if (((uVar5 == uVar7) && (lVar3 == lVar4)) ||
       (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar7,lVar4,0), (uVar2 & 1) != 0)) {
      FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
      func_0x000101597ae4(uVar7,lVar4,uVar11,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10351090c;
    }
    else {
      FUN_10350ff24(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      FUN_10350ff24(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar7,lVar4,uVar11,uVar8);
    }
  }
  func_0x000101597ae4(uVar5,lVar3,uVar10,uVar6);
  uVar1 = 0;
LAB_10351092c:
  return uVar1 & 1;
}



/* Entry: 1035109b0; end: 1035109ef;  */

void FUN_1035109b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f759b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3470;
  func_0x000107c61520(&UNK_10dbd3470,&UNK_11065f8d8);
  puRam0000000112f759b0 = puVar1;
  return;
}



/* Entry: 1035109f0; end: 103510a13;  */

void FUN_1035109f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103510a14();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103510a14; end: 103510a53;  */

void FUN_103510a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f759b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3448;
  func_0x000107c61520(&UNK_10dbd3448,&UNK_11065f8d8);
  puRam0000000112f759b8 = puVar1;
  return;
}



/* Entry: 103510a54; end: 103510a7f;  */

void FUN_103510a54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035109b0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502c54();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103510a80; end: 103510a83;  */

void FUN_103510a80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f759c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd34b0;
  func_0x000107c61520(&UNK_10dbd34b0,&UNK_11065f8d8);
  puRam0000000112f759c0 = puVar1;
  return;
}



/* Entry: 103510a84; end: 103510ac3;  */

void FUN_103510a84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f759c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd34b0;
  func_0x000107c61520(&UNK_10dbd34b0,&UNK_11065f8d8);
  puRam0000000112f759c0 = puVar1;
  return;
}



/* Entry: 103510ac4; end: 103510b4b;  */

long FUN_103510ac4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103510b4c; end: 103510c0f;  */

undefined8 * FUN_103510b4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
    lVar2 = param_2[6];
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = lVar2;
    func_0x000107c6157c(lVar2);
    lVar2 = param_2[6];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    uVar3 = param_2[7];
    uVar1 = param_2[8];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar1);
    param_1[7] = uVar3;
    param_1[8] = uVar1;
  }
  return param_1;
}



/* Entry: 103510c10; end: 103510d9b;  */

undefined8 * FUN_103510c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar4 = param_2[3];
      uVar2 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[2] = uVar2;
    }
    else {
      uVar2 = param_2[2];
      uVar4 = param_2[3];
      func_0x00010006c00c(uVar2,uVar4);
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar2 = param_2[4];
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = uVar2;
  }
  else {
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[2];
    uVar1 = param_1[3];
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
    uVar2 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar2);
  }
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    if (param_2[6] == 0) {
      uVar4 = param_2[6];
      uVar2 = param_2[5];
      uVar5 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar5;
      param_1[6] = uVar4;
      param_1[5] = uVar2;
    }
    else {
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      uVar2 = param_2[7];
      uVar4 = param_2[8];
      func_0x000107c61434();
      func_0x00010006c00c(uVar2,uVar4);
      param_1[7] = uVar2;
      param_1[8] = uVar4;
    }
  }
  else if (param_2[6] == 0) {
    func_0x00010159d63c(param_1 + 5);
    uVar4 = param_2[8];
    uVar2 = param_2[7];
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[8] = uVar4;
    param_1[7] = uVar2;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    uVar2 = param_2[7];
    uVar5 = param_2[8];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[7];
    uVar1 = param_1[8];
    param_1[7] = uVar2;
    param_1[8] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
  }
  return param_1;
}



/* Entry: 103510d9c; end: 103510dcf;  */

undefined8 FUN_103510d9c(undefined8 param_1)

{
  FUN_1035e04a8();
  return param_1;
}



/* Entry: 103510dd0; end: 103510eab;  */

undefined8 * FUN_103510dd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[4] != 0) {
    lVar3 = param_2[4];
    if (lVar3 != 0) {
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      uVar4 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[4];
      param_1[4] = lVar3;
      func_0x000107c61574(uVar1);
      lVar3 = param_1[6];
      goto joined_r0x000103510e54;
    }
    FUN_103510d9c(param_1 + 2);
  }
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  lVar3 = param_1[6];
joined_r0x000103510e54:
  if (lVar3 != 0) {
    lVar3 = param_2[6];
    if (lVar3 != 0) {
      param_1[5] = param_2[5];
      param_1[6] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[7];
      uVar2 = param_1[8];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x00010159d63c(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 103510eac; end: 103510f7b;  */

int FUN_103510eac(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103510f7c; end: 103510ffb;  */

void FUN_103510f7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f759d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd341c;
  func_0x000107c61520(&DAT_10dbd341c,&UNK_11065f8d8);
  puRam0000000112f759d0 = puVar1;
  return;
}



/* Entry: 103510ffc; end: 10351100b;  */

void FUN_103510ffc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10351100c; end: 10351103b;  */

void FUN_10351100c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103511a20();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10351103c; end: 103511043;  */

undefined8 FUN_10351103c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103511044; end: 1035110b7;  */

void FUN_103511044(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f75a58;
  func_0x0001000285a8(0x112f75a58,&UNK_10dbd3580);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035110b8; end: 1035110c3;  */

void FUN_1035110b8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035110c4; end: 10351116f;  */

void FUN_1035110c4(void)

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



/* Entry: 103511170; end: 103511183;  */

bool FUN_103511170(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103511184; end: 1035111cb;  */

void FUN_103511184(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd3850,0x4d,2);
  uRam00000001138078e8 = uStack_38;
  uRam00000001138078e0 = uStack_40;
  uRam00000001138078f8 = uStack_28;
  uRam00000001138078f0 = uStack_30;
  uRam0000000113807908 = uStack_18;
  uRam0000000113807900 = uStack_20;
  return;
}



/* Entry: 1035111cc; end: 1035112d7;  */

void FUN_1035111cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
LAB_103511254:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_103511a2c();
          goto LAB_103511254;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          goto LAB_103511254;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035112d8; end: 1035113a7;  */

void FUN_1035112d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = unaff_x20;
  FUN_1035113a8();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      FUN_103511a2c();
      (*pcVar2)(&lStack_50,2,&UNK_11065fb68,plVar1,param_2,param_3);
    }
    FUN_103511430();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1035113a8; end: 10351142f;  */

void FUN_1035113a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x20);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103511430; end: 1035114b3;  */

void FUN_103511430(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x40);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035114b4; end: 10351150f;  */

uint FUN_1035114b4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar7 = param_1[5];
  uVar5 = param_1[4];
  lVar3 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  lVar4 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  lStack_70 = lVar3;
  if ((uVar5 & 0xff) == 2) {
    if ((uVar6 & 0xff) != 2) {
LAB_103511b5c:
      FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar5,uVar7,lVar3);
      uVar5 = uVar6;
      uVar7 = uVar8;
      lVar3 = lVar4;
      goto LAB_103511d60;
    }
    FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
    FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
LAB_103511b0c:
    func_0x000101556278(uVar5,uVar7,lVar3);
    lVar3 = *param_1;
    lVar4 = *param_2;
    if ((char)param_2[1] == '\x01') {
      if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 == 0) {
LAB_103511c10:
            lVar3 = param_1[8];
            uVar5 = param_1[7];
            lVar4 = param_1[10];
            uVar7 = param_1[9];
            lVar9 = param_2[8];
            uVar6 = param_2[7];
            lVar10 = param_2[10];
            uVar8 = param_2[9];
            uStack_e0 = uVar6;
            lStack_d8 = lVar9;
            uStack_d0 = uVar8;
            lStack_c8 = lVar10;
            uStack_c0 = uVar5;
            lStack_b8 = lVar3;
            uStack_b0 = uVar7;
            lStack_a8 = lVar4;
            if (lVar3 == 0) {
              if (lVar9 == 0) {
                FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_103511e60:
                func_0x000101597ae4(uVar5,lVar3,uVar7,lVar4);
                lVar3 = param_1[2];
                func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
                uVar1 = (uint)lVar3;
                goto LAB_103511d68;
              }
LAB_103511d9c:
              FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
              FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
              func_0x000101597ae4(uVar5,lVar3,uVar7,lVar4);
              uVar5 = uVar6;
              lVar3 = lVar9;
              uVar7 = uVar8;
              lVar4 = lVar10;
            }
            else {
              if (lVar9 == 0) goto LAB_103511d9c;
              if (((uVar5 == uVar6) && (lVar3 == lVar9)) ||
                 (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar6,lVar9,0), (uVar2 & 1) != 0))
              {
                FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                uVar2 = uVar7;
                func_0x000100e25fcc(uVar7,lVar4,uVar8,lVar10);
                func_0x000101597ae4(uVar6,lVar9,uVar8,lVar10);
                if ((uVar2 & 1) != 0) goto LAB_103511e60;
              }
              else {
                FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                func_0x000101597ae4(uVar6,lVar9,uVar8,lVar10);
              }
            }
            func_0x000101597ae4(uVar5,lVar3,uVar7,lVar4);
          }
        }
        else if (lVar3 == 1) goto LAB_103511c10;
      }
      else if (lVar4 == 2) {
        if (lVar3 == 2) goto LAB_103511c10;
      }
      else if (lVar4 == 3) {
        if (lVar3 == 3) goto LAB_103511c10;
      }
      else if (lVar3 == 4) goto LAB_103511c10;
    }
    else if (lVar3 == lVar4) goto LAB_103511c10;
  }
  else {
    if ((uVar6 & 0xff) == 2) goto LAB_103511b5c;
    if ((((uint)uVar6 ^ (uint)uVar5) & 1) == 0) {
      FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,lVar3,uVar8,lVar4);
      func_0x000101556278(uVar6,uVar8,lVar4);
      if ((uVar2 & 1) != 0) goto LAB_103511b0c;
    }
    else {
      FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar8,lVar4);
    }
LAB_103511d60:
    func_0x000101556278(uVar5,uVar7,lVar3);
  }
  uVar1 = 0;
LAB_103511d68:
  return uVar1 & 1;
}



/* Entry: 103511510; end: 10351153f;  */

undefined1  [16] FUN_103511510(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103511540; end: 103511573;  */

void FUN_103511540(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103511574; end: 103511587;  */

undefined1  [16] FUN_103511574(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103511584;
  return auVar1;
}



/* Entry: 103511588; end: 10351159b;  */

void FUN_103511588(void)

{
  FUN_1035111cc();
  return;
}



/* Entry: 10351159c; end: 1035115e3;  */

void FUN_10351159c(void)

{
  FUN_1035112d8();
  return;
}



/* Entry: 1035115e4; end: 1035115e7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035115e4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035115e8; end: 10351161f;  */

uint FUN_1035115e8(long param_1,long param_2)

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
  FUN_103512688();
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



/* Entry: 103511620; end: 103511687;  */

uint FUN_103511620(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_103511a6c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103511688; end: 103511727;  */

/* WARNING: Possible PIC construction at 0x0001035116d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035116e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035116d8) */
/* WARNING: Removing unreachable block (ram,0x0001035116e8) */

void FUN_103511688(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75a60 != -1) {
    func_0x000107c61568(0x112f75a60,FUN_103511184);
  }
  uVar5 = uRam0000000113807908;
  uVar4 = uRam0000000113807900;
  uVar3 = uRam00000001138078f8;
  uVar2 = uRam00000001138078f0;
  uVar1 = uRam00000001138078e8;
  *param_1 = uRam00000001138078e0;
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



/* Entry: 103511728; end: 103511763;  */

void FUN_103511728(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75ab8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75ab8,&UNK_10dbd3800);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103511764; end: 103511887;  */

void FUN_103511764(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103511888; end: 103511937;  */

uint FUN_103511888(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_103511a6c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103511938; end: 1035119d7;  */

/* WARNING: Possible PIC construction at 0x000103511984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103511994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103511988) */
/* WARNING: Removing unreachable block (ram,0x000103511998) */

void FUN_103511938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75a78 != -1) {
    func_0x000107c61568(0x112f75a78,0x1035118f0);
  }
  uVar5 = uRam0000000113807938;
  uVar4 = uRam0000000113807930;
  uVar3 = uRam0000000113807928;
  uVar2 = uRam0000000113807920;
  uVar1 = uRam0000000113807918;
  *param_1 = uRam0000000113807910;
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



/* Entry: 1035119d8; end: 103511a1f;  */

undefined8 FUN_1035119d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103511a20; end: 103511a2b;  */

void FUN_103511a20(void)

{
  return;
}



/* Entry: 103511a2c; end: 103511a6b;  */

void FUN_103511a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd3588;
  func_0x000107c61520(&DAT_10dbd3588,&UNK_11065fb68);
  puRam0000000112f75a68 = puVar1;
  return;
}



/* Entry: 103511a6c; end: 103511ee3;  */

uint FUN_103511a6c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar7 = param_1[5];
  uVar5 = param_1[4];
  lVar3 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  lVar4 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  lStack_70 = lVar3;
  if ((uVar5 & 0xff) == 2) {
    if ((uVar6 & 0xff) != 2) {
LAB_103511b5c:
      FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar5,uVar7,lVar3);
      uVar5 = uVar6;
      uVar7 = uVar8;
      lVar3 = lVar4;
      goto LAB_103511d60;
    }
    FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
    FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
LAB_103511b0c:
    func_0x000101556278(uVar5,uVar7,lVar3);
    lVar3 = *param_1;
    lVar4 = *param_2;
    if ((char)param_2[1] == '\x01') {
      if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 == 0) {
LAB_103511c10:
            lVar3 = param_1[8];
            uVar5 = param_1[7];
            lVar4 = param_1[10];
            uVar7 = param_1[9];
            lVar9 = param_2[8];
            uVar6 = param_2[7];
            lVar10 = param_2[10];
            uVar8 = param_2[9];
            uStack_e0 = uVar6;
            lStack_d8 = lVar9;
            uStack_d0 = uVar8;
            lStack_c8 = lVar10;
            uStack_c0 = uVar5;
            lStack_b8 = lVar3;
            uStack_b0 = uVar7;
            lStack_a8 = lVar4;
            if (lVar3 == 0) {
              if (lVar9 == 0) {
                FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_103511e60:
                func_0x000101597ae4(uVar5,lVar3,uVar7,lVar4);
                lVar3 = param_1[2];
                func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
                uVar1 = (uint)lVar3;
                goto LAB_103511d68;
              }
LAB_103511d9c:
              FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
              FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
              func_0x000101597ae4(uVar5,lVar3,uVar7,lVar4);
              uVar5 = uVar6;
              lVar3 = lVar9;
              uVar7 = uVar8;
              lVar4 = lVar10;
            }
            else {
              if (lVar9 == 0) goto LAB_103511d9c;
              if (((uVar5 == uVar6) && (lVar3 == lVar9)) ||
                 (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar6,lVar9,0), (uVar2 & 1) != 0))
              {
                FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                uVar2 = uVar7;
                func_0x000100e25fcc(uVar7,lVar4,uVar8,lVar10);
                func_0x000101597ae4(uVar6,lVar9,uVar8,lVar10);
                if ((uVar2 & 1) != 0) goto LAB_103511e60;
              }
              else {
                FUN_1035119d8(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                FUN_1035119d8(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
                func_0x000101597ae4(uVar6,lVar9,uVar8,lVar10);
              }
            }
            func_0x000101597ae4(uVar5,lVar3,uVar7,lVar4);
          }
        }
        else if (lVar3 == 1) goto LAB_103511c10;
      }
      else if (lVar4 == 2) {
        if (lVar3 == 2) goto LAB_103511c10;
      }
      else if (lVar4 == 3) {
        if (lVar3 == 3) goto LAB_103511c10;
      }
      else if (lVar3 == 4) goto LAB_103511c10;
    }
    else if (lVar3 == lVar4) goto LAB_103511c10;
  }
  else {
    if ((uVar6 & 0xff) == 2) goto LAB_103511b5c;
    if ((((uint)uVar6 ^ (uint)uVar5) & 1) == 0) {
      FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,lVar3,uVar8,lVar4);
      func_0x000101556278(uVar6,uVar8,lVar4);
      if ((uVar2 & 1) != 0) goto LAB_103511b0c;
    }
    else {
      FUN_1035119d8(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_1035119d8(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar8,lVar4);
    }
LAB_103511d60:
    func_0x000101556278(uVar5,uVar7,lVar3);
  }
  uVar1 = 0;
LAB_103511d68:
  return uVar1 & 1;
}



/* Entry: 103511ee4; end: 103511f23;  */

void FUN_103511ee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd36f8;
  func_0x000107c61520(&UNK_10dbd36f8,&UNK_11065fac8);
  puRam0000000112f75a70 = puVar1;
  return;
}



/* Entry: 103511f24; end: 103511f37;  */

void FUN_103511f24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103511f38();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103511f78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103511f38; end: 103511fb7;  */

void FUN_103511f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3620;
  func_0x000107c61520(&UNK_10dbd3620,&UNK_11065fb68);
  puRam0000000112f75a80 = puVar1;
  return;
}



/* Entry: 103511fb8; end: 103511fbb;  */

void FUN_103511fb8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f75a90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f75a98;
  func_0x00010002969c(0x112f75a98,&UNK_10dbd35a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f75a90 = puVar2;
  return;
}



/* Entry: 103511fbc; end: 10351200b;  */

void FUN_103511fbc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f75a90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f75a98;
  func_0x00010002969c(0x112f75a98,&UNK_10dbd35a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f75a90 = puVar2;
  return;
}



/* Entry: 10351200c; end: 10351200f;  */

void FUN_10351200c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3660;
  func_0x000107c61520(&UNK_10dbd3660,&UNK_11065fb68);
  puRam0000000112f75aa0 = puVar1;
  return;
}



/* Entry: 103512010; end: 10351204f;  */

void FUN_103512010(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3660;
  func_0x000107c61520(&UNK_10dbd3660,&UNK_11065fb68);
  puRam0000000112f75aa0 = puVar1;
  return;
}



/* Entry: 103512050; end: 103512073;  */

void FUN_103512050(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103512074();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103512074; end: 1035120b3;  */

void FUN_103512074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd36d0;
  func_0x000107c61520(&UNK_10dbd36d0,&UNK_11065fac8);
  puRam0000000112f75aa8 = puVar1;
  return;
}



/* Entry: 1035120b4; end: 1035120c7;  */

void FUN_1035120b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103511ee4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502d94)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035120c8; end: 1035120f7;  */

void FUN_1035120c8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035120f8; end: 1035120fb;  */

void FUN_1035120f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3738;
  func_0x000107c61520(&UNK_10dbd3738,&UNK_11065fac8);
  puRam0000000112f75ab0 = puVar1;
  return;
}



/* Entry: 1035120fc; end: 10351213b;  */

void FUN_1035120fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3738;
  func_0x000107c61520(&UNK_10dbd3738,&UNK_11065fac8);
  puRam0000000112f75ab0 = puVar1;
  return;
}



/* Entry: 10351213c; end: 1035121bf;  */

long FUN_10351213c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035121c0; end: 103512513;  */

undefined8 * FUN_1035121c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar4,uVar1);
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  cVar2 = *(char *)(param_2 + 4);
  if (cVar2 == '\x02') {
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[6] = param_2[6];
    lVar3 = param_2[8];
  }
  else {
    *(char *)(param_1 + 4) = cVar2;
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    lVar3 = param_2[8];
  }
  if (lVar3 == 0) {
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
  }
  else {
    param_1[7] = param_2[7];
    param_1[8] = lVar3;
    uVar4 = param_2[9];
    uVar1 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[9] = uVar4;
    param_1[10] = uVar1;
  }
  return param_1;
}



/* Entry: 103512514; end: 103512687;  */

int FUN_103512514(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103512688; end: 1035126c7;  */

void FUN_103512688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd36a4;
  func_0x000107c61520(&DAT_10dbd36a4,&UNK_11065fac8);
  puRam0000000112f75ac0 = puVar1;
  return;
}



/* Entry: 1035126c8; end: 10351276b;  */

void FUN_1035126c8(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103513874();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10351276c; end: 103512783;  */

void FUN_10351276c(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103512784; end: 1035127c3;  */

void FUN_103512784(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f75bd0;
  func_0x0001000285a8(0x112f75bd0,&UNK_10dbd38b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035127c4; end: 1035127df;  */

void FUN_1035127c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1035127e0; end: 103512863;  */

void FUN_1035127e0(void)

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



/* Entry: 103512864; end: 1035128cf;  */

void FUN_103512864(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 2;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 2;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  return;
}



/* Entry: 1035128d0; end: 103512917;  */

void FUN_1035128d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd3cf0,0x129,2);
  uRam0000000113807948 = uStack_38;
  uRam0000000113807940 = uStack_40;
  uRam0000000113807958 = uStack_28;
  uRam0000000113807950 = uStack_30;
  uRam0000000113807968 = uStack_18;
  uRam0000000113807960 = uStack_20;
  return;
}



/* Entry: 103512918; end: 103512ad3;  */

/* WARNING: Removing unreachable block (ram,0x000103512ad0) */

void FUN_103512918(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103513880();
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x0001035138c0();
        break;
      default:
        goto LAB_103512ac0;
      }
      (*pcVar3)();
LAB_103512ac0:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103512ad4; end: 103512c7b;  */

void FUN_103512ad4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = unaff_x20;
  FUN_103512c7c();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      FUN_103513880();
      (*pcVar2)(&lStack_50,2,&UNK_11065fe90,plVar1,param_2,param_3);
    }
    FUN_103512d04();
    FUN_103512d8c();
    FUN_103512e14();
    FUN_103512e9c();
    FUN_103512f24();
    FUN_103512fac();
    plVar1 = unaff_x20;
    FUN_103513034();
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[2];
      func_0x0001035138c0();
      (*pcVar2)(&lStack_50,10,&UNK_11065ff20,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103512c7c; end: 103512d03;  */

void FUN_103512c7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x30);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103512d04; end: 103512d8b;  */

void FUN_103512d04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103512d8c; end: 103512e13;  */

void FUN_103512d8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x70);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,4,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103512e14; end: 103512e9b;  */

void FUN_103512e14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x88);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103512e9c; end: 103512f23;  */

void FUN_103512e9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x90);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103512f24; end: 103512fab;  */

void FUN_103512f24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xa8);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xb8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,7,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103512fac; end: 103513033;  */

void FUN_103512fac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xc0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xd0);
    uStack_50 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,8,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103513034; end: 1035130b7;  */

void FUN_103513034(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0xe0);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0xd8);
    uStack_48 = *(undefined8 *)(param_1 + 0xf0);
    uStack_50 = *(undefined8 *)(param_1 + 0xe8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,9,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035130b8; end: 10351314b;  */

uint FUN_1035130b8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_280 [32];
  ulong uStack_260;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  ulong uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar9 = param_1[7];
  uVar12 = param_1[6];
  lVar5 = param_1[8];
  uVar11 = param_2[7];
  uVar13 = param_2[6];
  lVar6 = param_2[8];
  uStack_a0 = uVar13;
  uStack_98 = uVar11;
  lStack_90 = lVar6;
  uStack_80 = uVar12;
  uStack_78 = uVar9;
  lStack_70 = lVar5;
  if ((uVar12 & 0xff) == 2) {
    if ((uVar13 & 0xff) != 2) {
LAB_1035139f0:
      FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_a0;
      lVar14 = lVar5;
      uVar3 = uVar9;
      uVar10 = uVar12;
      lVar5 = lVar6;
      uVar9 = uVar11;
      uVar12 = uVar13;
LAB_103513a18:
      FUN_10351382c(puVar2,&uStack_240,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar10,uVar3,lVar14);
      goto LAB_103513ca0;
    }
    FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
    FUN_10351382c(&uStack_a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
LAB_1035139a8:
    func_0x000101556278(uVar12,uVar9,lVar5);
    lVar5 = *param_1;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\x01') {
      if (lVar5 == lVar6) goto LAB_103513aa4;
      goto LAB_103513ca4;
    }
    if (3 < lVar6) {
      if (lVar6 < 6) {
        if (lVar6 == 4) {
          if (lVar5 == 4) goto LAB_103513aa4;
        }
        else if (lVar5 == 5) goto LAB_103513aa4;
      }
      else if (lVar6 == 6) {
        if (lVar5 == 6) goto LAB_103513aa4;
      }
      else if (lVar5 == 7) goto LAB_103513aa4;
      goto LAB_103513ca4;
    }
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_103513aa4:
          uVar12 = param_1[10];
          lVar5 = param_1[9];
          uVar9 = param_1[0xb];
          uVar13 = param_2[10];
          lVar6 = param_2[9];
          uVar11 = param_2[0xb];
          lStack_e0 = lVar6;
          uStack_d8 = uVar13;
          uStack_d0 = uVar11;
          lStack_c0 = lVar5;
          uStack_b8 = uVar12;
          uStack_b0 = uVar9;
          if (uVar9 >> 0x3c < 0xf) {
            if (0xe < uVar11 >> 0x3c) goto LAB_103513cf0;
            if ((int)lVar5 == (int)lVar6) {
              FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              FUN_10351382c(&lStack_e0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              uVar3 = uVar12;
              func_0x000100e25fcc(uVar12,uVar9,uVar13,uVar11);
              func_0x000100d55018(lVar6,uVar13,uVar11);
              if ((uVar3 & 1) != 0) goto LAB_103513b1c;
            }
            else {
              uVar7 = 0x112db80f8;
              puVar8 = &UNK_10d9671e0;
              FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              plVar4 = &lStack_e0;
LAB_103513f3c:
              FUN_10351382c(plVar4,&uStack_240,uVar7,puVar8);
              func_0x000100d55018(lVar6,uVar13,uVar11);
            }
          }
          else {
            if (0xe < uVar11 >> 0x3c) {
              FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              FUN_10351382c(&lStack_e0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
LAB_103513b1c:
              func_0x000100d55018(lVar5,uVar12,uVar9);
              uVar12 = param_1[0xd];
              lVar5 = param_1[0xc];
              uVar9 = param_1[0xe];
              uVar13 = param_2[0xd];
              lVar6 = param_2[0xc];
              uVar11 = param_2[0xe];
              lStack_120 = lVar6;
              uStack_118 = uVar13;
              uStack_110 = uVar11;
              lStack_100 = lVar5;
              uStack_f8 = uVar12;
              uStack_f0 = uVar9;
              if (uVar9 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103513dbc;
                if ((int)lVar5 != (int)lVar6) {
                  uVar7 = 0x112db80f8;
                  puVar8 = &UNK_10d9671e0;
                  FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  plVar4 = &lStack_120;
                  goto LAB_103513f3c;
                }
                FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                FUN_10351382c(&lStack_120,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                uVar3 = uVar12;
                func_0x000100e25fcc(uVar12,uVar9,uVar13,uVar11);
                func_0x000100d55018(lVar6,uVar13,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103513f68;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103513dbc:
                  uVar7 = 0x112db80f8;
                  puVar8 = &UNK_10d9671e0;
                  FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  plVar4 = &lStack_120;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar14 = lVar5;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  lVar5 = lVar6;
                  goto LAB_103513ee4;
                }
                FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                FUN_10351382c(&lStack_120,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              }
              func_0x000100d55018(lVar5,uVar12,uVar9);
              uVar12 = param_1[0x10];
              lVar5 = param_1[0xf];
              uVar9 = param_1[0x11];
              uVar13 = param_2[0x10];
              lVar6 = param_2[0xf];
              uVar11 = param_2[0x11];
              lStack_160 = lVar6;
              uStack_158 = uVar13;
              uStack_150 = uVar11;
              lStack_140 = lVar5;
              uStack_138 = uVar12;
              uStack_130 = uVar9;
              if (uVar9 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103513ebc;
                if ((float)lVar5 != (float)lVar6) {
                  uVar7 = 0x112db6358;
                  puVar8 = &UNK_10d961e20;
                  FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                  plVar4 = &lStack_160;
                  goto LAB_103513f3c;
                }
                FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                FUN_10351382c(&lStack_160,&uStack_240,0x112db6358,&UNK_10d961e20);
                uVar3 = uVar12;
                func_0x000100e25fcc(uVar12,uVar9,uVar13,uVar11);
                func_0x000100d55018(lVar6,uVar13,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103513f68;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103513ebc:
                  uVar7 = 0x112db6358;
                  puVar8 = &UNK_10d961e20;
                  FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                  plVar4 = &lStack_160;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar14 = lVar5;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  lVar5 = lVar6;
                  goto LAB_103513ee4;
                }
                FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                FUN_10351382c(&lStack_160,&uStack_240,0x112db6358,&UNK_10d961e20);
              }
              func_0x000100d55018(lVar5,uVar12,uVar9);
              uVar9 = param_1[0x13];
              uVar12 = param_1[0x12];
              lVar5 = param_1[0x14];
              uVar11 = param_2[0x13];
              uVar13 = param_2[0x12];
              lVar6 = param_2[0x14];
              uStack_1a0 = uVar13;
              uStack_198 = uVar11;
              lStack_190 = lVar6;
              uStack_180 = uVar12;
              uStack_178 = uVar9;
              lStack_170 = lVar5;
              if ((uVar12 & 0xff) == 2) {
                if ((uVar13 & 0xff) != 2) {
LAB_103514260:
                  FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1a0;
                  lVar14 = lVar5;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar5 = lVar6;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  goto LAB_103513a18;
                }
                FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar13 & 0xff) == 2) goto LAB_103514260;
                if ((((uint)uVar13 ^ (uint)uVar12) & 1) != 0) {
                  FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1a0;
                  goto LAB_103513a78;
                }
                FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                uVar3 = uVar9;
                func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
                func_0x000101556278(uVar13,uVar11,lVar6);
                if ((uVar3 & 1) == 0) goto LAB_103513ca0;
              }
              func_0x000101556278(uVar12,uVar9,lVar5);
              uVar9 = param_1[0x16];
              uVar12 = param_1[0x15];
              lVar5 = param_1[0x17];
              uVar11 = param_2[0x16];
              uVar13 = param_2[0x15];
              lVar6 = param_2[0x17];
              uStack_1e0 = uVar13;
              uStack_1d8 = uVar11;
              lStack_1d0 = lVar6;
              uStack_1c0 = uVar12;
              uStack_1b8 = uVar9;
              lStack_1b0 = lVar5;
              if ((uVar12 & 0xff) == 2) {
                if ((uVar13 & 0xff) != 2) {
LAB_1035142f4:
                  FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1e0;
                  lVar14 = lVar5;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar5 = lVar6;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  goto LAB_103513a18;
                }
                FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1e0,&uStack_240,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar13 & 0xff) == 2) goto LAB_1035142f4;
                if ((((uint)uVar13 ^ (uint)uVar12) & 1) != 0) {
                  FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1e0;
                  goto LAB_103513a78;
                }
                FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1e0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                uVar3 = uVar9;
                func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
                func_0x000101556278(uVar13,uVar11,lVar6);
                if ((uVar3 & 1) == 0) goto LAB_103513ca0;
              }
              func_0x000101556278(uVar12,uVar9,lVar5);
              uVar9 = param_1[0x19];
              uVar12 = param_1[0x18];
              lVar5 = param_1[0x1a];
              uVar11 = param_2[0x19];
              uVar13 = param_2[0x18];
              lVar6 = param_2[0x1a];
              uStack_220 = uVar13;
              uStack_218 = uVar11;
              lStack_210 = lVar6;
              uStack_200 = uVar12;
              uStack_1f8 = uVar9;
              lStack_1f0 = lVar5;
              if ((uVar12 & 0xff) == 2) {
                if ((uVar13 & 0xff) != 2) {
LAB_1035143c4:
                  FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_220;
                  lVar14 = lVar5;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar5 = lVar6;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  goto LAB_103513a18;
                }
                FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_220,&uStack_240,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar13 & 0xff) == 2) goto LAB_1035143c4;
                if ((((uint)uVar13 ^ (uint)uVar12) & 1) != 0) {
                  FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_220;
                  goto LAB_103513a78;
                }
                FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_220,&uStack_240,0x112db94f0,&UNK_10d96af00);
                uVar3 = uVar9;
                func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
                func_0x000101556278(uVar13,uVar11,lVar6);
                if ((uVar3 & 1) == 0) goto LAB_103513ca0;
              }
              func_0x000101556278(uVar12,uVar9,lVar5);
              lVar5 = param_1[0x1c];
              uVar9 = param_1[0x1b];
              lVar6 = param_1[0x1e];
              uVar12 = param_1[0x1d];
              lVar14 = param_2[0x1c];
              uVar11 = param_2[0x1b];
              lVar15 = param_2[0x1e];
              uVar13 = param_2[0x1d];
              uStack_260 = uVar11;
              lStack_258 = lVar14;
              uStack_250 = uVar13;
              lStack_248 = lVar15;
              uStack_240 = uVar9;
              lStack_238 = lVar5;
              uStack_230 = uVar12;
              lStack_228 = lVar6;
              if (lVar5 == 0) {
                if (lVar14 == 0) {
                  FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
LAB_103514594:
                  func_0x000101597ae4(uVar9,lVar5,uVar12,lVar6);
                  lVar5 = param_1[2];
                  lVar6 = param_2[2];
                  if ((char)param_2[3] == '\x01') {
                    if (lVar6 == 0) {
                      if (lVar5 == 0) goto LAB_103514654;
                    }
                    else if (lVar6 == 1) {
                      if (lVar5 == 1) {
LAB_103514654:
                        lVar5 = param_1[4];
                        func_0x000100e25fcc(lVar5,param_1[5],param_2[4],param_2[5]);
                        uVar1 = (uint)lVar5;
                        goto LAB_103513ca8;
                      }
                    }
                    else if (lVar5 == 2) goto LAB_103514654;
                  }
                  else if (lVar5 == lVar6) goto LAB_103514654;
                  goto LAB_103513ca4;
                }
LAB_1035144f8:
                FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
                func_0x000101597ae4(uVar9,lVar5,uVar12,lVar6);
                uVar9 = uVar11;
                lVar5 = lVar14;
                uVar12 = uVar13;
                lVar6 = lVar15;
              }
              else {
                if (lVar14 == 0) goto LAB_1035144f8;
                if (((uVar9 == uVar11) && (lVar5 == lVar14)) ||
                   (uVar3 = uVar9, func_0x000107c605b8(uVar9,lVar5,uVar11,lVar14,0),
                   (uVar3 & 1) != 0)) {
                  FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  uVar3 = uVar12;
                  func_0x000100e25fcc(uVar12,lVar6,uVar13,lVar15);
                  func_0x000101597ae4(uVar11,lVar14,uVar13,lVar15);
                  if ((uVar3 & 1) != 0) goto LAB_103514594;
                }
                else {
                  FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  func_0x000101597ae4(uVar11,lVar14,uVar13,lVar15);
                }
              }
              func_0x000101597ae4(uVar9,lVar5,uVar12,lVar6);
              goto LAB_103513ca4;
            }
LAB_103513cf0:
            uVar7 = 0x112db80f8;
            puVar8 = &UNK_10d9671e0;
            FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
            plVar4 = &lStack_e0;
            uVar3 = uVar9;
            uVar10 = uVar12;
            lVar14 = lVar5;
            uVar9 = uVar11;
            uVar12 = uVar13;
            lVar5 = lVar6;
LAB_103513ee4:
            FUN_10351382c(plVar4,&uStack_240,uVar7,puVar8);
            func_0x000100d55018(lVar14,uVar10,uVar3);
          }
LAB_103513f68:
          func_0x000100d55018(lVar5,uVar12,uVar9);
        }
      }
      else if (lVar5 == 1) goto LAB_103513aa4;
    }
    else if (lVar6 == 2) {
      if (lVar5 == 2) goto LAB_103513aa4;
    }
    else if (lVar5 == 3) goto LAB_103513aa4;
  }
  else {
    if ((uVar13 & 0xff) == 2) goto LAB_1035139f0;
    if ((((uint)uVar13 ^ (uint)uVar12) & 1) == 0) {
      FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
      FUN_10351382c(&uStack_a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
      func_0x000101556278(uVar13,uVar11,lVar6);
      if ((uVar3 & 1) != 0) goto LAB_1035139a8;
    }
    else {
      FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_a0;
LAB_103513a78:
      FUN_10351382c(puVar2,&uStack_240,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar13,uVar11,lVar6);
    }
LAB_103513ca0:
    func_0x000101556278(uVar12,uVar9,lVar5);
  }
LAB_103513ca4:
  uVar1 = 0;
LAB_103513ca8:
  return uVar1 & 1;
}



/* Entry: 10351314c; end: 10351317b;  */

undefined1  [16] FUN_10351314c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 10351317c; end: 1035131af;  */

void FUN_10351317c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1035131b0; end: 1035131c3;  */

undefined1  [16] FUN_1035131b0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1035131c0;
  return auVar1;
}


