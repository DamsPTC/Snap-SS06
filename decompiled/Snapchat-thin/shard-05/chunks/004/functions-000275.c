/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103da4de0; end: 103da4e27;  */

void FUN_103da4de0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90f78,9,2);
  uRam0000000113812068 = uStack_38;
  uRam0000000113812060 = uStack_40;
  uRam0000000113812078 = uStack_28;
  uRam0000000113812070 = uStack_30;
  uRam0000000113812088 = uStack_18;
  uRam0000000113812080 = uStack_20;
  return;
}



/* Entry: 103da4e28; end: 103da4e5f;  */

undefined1  [16] FUN_103da4e28(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b7270;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 103da4e60; end: 103da4e97;  */

uint FUN_103da4e60(long param_1,long param_2)

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
  func_0x000103da67d8();
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



/* Entry: 103da4e98; end: 103da4f37;  */

/* WARNING: Possible PIC construction at 0x000103da4ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103da4ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da4ee8) */
/* WARNING: Removing unreachable block (ram,0x000103da4ef8) */

void FUN_103da4e98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113009450 != -1) {
    func_0x000107c61568(0x113009450,FUN_103da4de0);
  }
  uVar5 = uRam0000000113812088;
  uVar4 = uRam0000000113812080;
  uVar3 = uRam0000000113812078;
  uVar2 = uRam0000000113812070;
  uVar1 = uRam0000000113812068;
  *param_1 = uRam0000000113812060;
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



/* Entry: 103da4f38; end: 103da4f4b;  */

void FUN_103da4f38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009520;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009520,&UNK_10dc90f60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103da4f4c; end: 103da4f83;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103da4f4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000103cd8764();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103da4f84; end: 103da4fbb;  */

void FUN_103da4f84(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113812098 = uStack_38;
  uRam0000000113812090 = uStack_40;
  uRam00000001138120a8 = uStack_28;
  uRam00000001138120a0 = uStack_30;
  uRam00000001138120b8 = uStack_18;
  uRam00000001138120b0 = uStack_20;
  return;
}



/* Entry: 103da4fbc; end: 103da5007;  */

void FUN_103da4fbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 103da5008; end: 103da501b;  */

void FUN_103da5008(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 103da501c; end: 103da5053;  */

undefined1  [16] FUN_103da501c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b72a0;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 103da5054; end: 103da508b;  */

uint FUN_103da5054(long param_1,long param_2)

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
  func_0x000103da6798();
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



/* Entry: 103da508c; end: 103da512b;  */

/* WARNING: Possible PIC construction at 0x000103da50d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103da50e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da50dc) */
/* WARNING: Removing unreachable block (ram,0x000103da50ec) */

void FUN_103da508c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113009460 != -1) {
    func_0x000107c61568(0x113009460,FUN_103da4f84);
  }
  uVar5 = uRam00000001138120b8;
  uVar4 = uRam00000001138120b0;
  uVar3 = uRam00000001138120a8;
  uVar2 = uRam00000001138120a0;
  uVar1 = uRam0000000113812098;
  *param_1 = uRam0000000113812090;
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



/* Entry: 103da512c; end: 103da513f;  */

void FUN_103da512c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009510;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009510,&UNK_10dc90f58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103da5140; end: 103da5173;  */

void FUN_103da5140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103da5174; end: 103da5267;  */

void FUN_103da5174(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103da5268; end: 103da52af;  */

void FUN_103da5268(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90f78,9,2);
  uRam00000001138120c8 = uStack_38;
  uRam00000001138120c0 = uStack_40;
  uRam00000001138120d8 = uStack_28;
  uRam00000001138120d0 = uStack_30;
  uRam00000001138120e8 = uStack_18;
  uRam00000001138120e0 = uStack_20;
  return;
}



/* Entry: 103da52b0; end: 103da5363;  */

/* WARNING: Removing unreachable block (ram,0x000103da5360) */

void FUN_103da52b0(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_103da5cd0();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_11070e3a8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103da5364; end: 103da53bf;  */

void FUN_103da5364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103da53c0();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103da53c0; end: 103da5447;  */

void FUN_103da53c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x30);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103da5cd0();
    (*pcVar1)(&uStack_70,1,&UNK_11070e3a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103da5448; end: 103da547f;  */

undefined1  [16] FUN_103da5448(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b72d0;
  auVar1._0_8_ = 0xd00000000000002f;
  return auVar1;
}



/* Entry: 103da5480; end: 103da54b7;  */

uint FUN_103da5480(long param_1,long param_2)

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
  FUN_103da6758();
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



/* Entry: 103da54b8; end: 103da5557;  */

/* WARNING: Possible PIC construction at 0x000103da5504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103da5514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da5508) */
/* WARNING: Removing unreachable block (ram,0x000103da5518) */

void FUN_103da54b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113009470 != -1) {
    func_0x000107c61568(0x113009470,FUN_103da5268);
  }
  uVar5 = uRam00000001138120e8;
  uVar4 = uRam00000001138120e0;
  uVar3 = uRam00000001138120d8;
  uVar2 = uRam00000001138120d0;
  uVar1 = uRam00000001138120c8;
  *param_1 = uRam00000001138120c0;
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



/* Entry: 103da5558; end: 103da556b;  */

void FUN_103da5558(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009500;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009500,&UNK_10dc90f50);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103da556c; end: 103da559f;  */

void FUN_103da556c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103da55a0; end: 103da56b3;  */

void FUN_103da55a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[6];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103da56b4; end: 103da56db;  */

void FUN_103da56b4(void)

{
  return;
}



/* Entry: 103da56dc; end: 103da572b;  */

undefined8 FUN_103da56dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113009418;
  func_0x0001000285a8(0x113009418,&UNK_10dc908b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103da572c; end: 103da57eb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103da572c(long *param_1,long *param_2)

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
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 1) {
        if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 < 5) {
      if (lVar22 == 3) {
        if (lVar19 != 3) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 4) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 5) {
      if (lVar19 != 5) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 6) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if (param_1[2] != param_2[2]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[3];
  pbVar26 = (byte *)param_1[4];
  lVar19 = param_2[3];
  uVar16 = param_2[4];
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
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
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
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar19 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar19);
          func_0x000107c61174();
          pbVar10 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar19);
          pbVar25 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
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



/* Entry: 103da57ec; end: 103da592b;  */

void FUN_103da57ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc908c0;
  func_0x000107c61520(&DAT_10dc908c0,&UNK_11070e330);
  puRam0000000113009430 = puVar1;
  return;
}



/* Entry: 103da592c; end: 103da5aeb;  */

uint FUN_103da592c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uVar4 = param_2[6];
  uStack_110 = uVar6;
  uStack_108 = uVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar4;
  uStack_e0 = uVar5;
  uStack_d8 = uVar7;
  uStack_d0 = uVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103da59e4;
    uStack_88 = (undefined1)uVar8;
    uStack_b0 = (undefined1)uVar7;
    uStack_b8 = uVar5;
    uStack_a8 = uVar9;
    uStack_a0 = uVar11;
    uStack_98 = uVar3;
    uStack_90 = uVar6;
    uStack_80 = uVar10;
    uStack_78 = uVar12;
    uStack_70 = uVar4;
    FUN_103da56dc(&uStack_e0,auStack_138);
    FUN_103da56dc(&uStack_110,auStack_138);
    puVar2 = &uStack_b8;
    FUN_103da572c(puVar2,&uStack_90);
    func_0x000103da56c0(uVar6,uVar8,uVar10,uVar12,uVar4);
    func_0x000103da56c0(uVar5,uVar7,uVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) != 0) goto LAB_103da5abc;
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      FUN_103da56dc(&uStack_e0,&uStack_90);
      FUN_103da56dc(&uStack_110,&uStack_90);
      func_0x000103da56c0(uVar5,uVar7,uVar9,uVar11,uVar3);
LAB_103da5abc:
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_103da5ac8;
    }
LAB_103da59e4:
    FUN_103da56dc(&uStack_e0,&uStack_90);
    FUN_103da56dc(&uStack_110,&uStack_90);
    func_0x000103da56c0(uVar5,uVar7,uVar9,uVar11,uVar3);
    func_0x000103da56c0(uVar6,uVar8,uVar10,uVar12,uVar4);
  }
  uVar1 = 0;
LAB_103da5ac8:
  return uVar1 & 1;
}



/* Entry: 103da5aec; end: 103da5b2b;  */

void FUN_103da5aec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90da0;
  func_0x000107c61520(&UNK_10dc90da0,&UNK_11070e5b0);
  puRam0000000113009478 = puVar1;
  return;
}



/* Entry: 103da5b2c; end: 103da5b3f;  */

void FUN_103da5b2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5b40();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103da5b80)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da5b40; end: 103da5bbf;  */

void FUN_103da5b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90958;
  func_0x000107c61520(&UNK_10dc90958,&UNK_11070e330);
  puRam0000000113009480 = puVar1;
  return;
}



/* Entry: 103da5bc0; end: 103da5bc3;  */

void FUN_103da5bc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113009490 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113009498;
  func_0x00010002969c(0x113009498,&UNK_10dc908e0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113009490 = puVar2;
  return;
}



/* Entry: 103da5bc4; end: 103da5c13;  */

void FUN_103da5bc4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113009490 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113009498;
  func_0x00010002969c(0x113009498,&UNK_10dc908e0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113009490 = puVar2;
  return;
}



/* Entry: 103da5c14; end: 103da5c17;  */

void FUN_103da5c14(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90998;
  func_0x000107c61520(&UNK_10dc90998,&UNK_11070e330);
  puRam00000001130094a0 = puVar1;
  return;
}



/* Entry: 103da5c18; end: 103da5c57;  */

void FUN_103da5c18(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90998;
  func_0x000107c61520(&UNK_10dc90998,&UNK_11070e330);
  puRam00000001130094a0 = puVar1;
  return;
}



/* Entry: 103da5c58; end: 103da5c7b;  */

void FUN_103da5c58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5c7c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103da5c7c; end: 103da5cbb;  */

void FUN_103da5c7c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90a18;
  func_0x000107c61520(&UNK_10dc90a18,&UNK_11070e3a8);
  puRam00000001130094a8 = puVar1;
  return;
}



/* Entry: 103da5cbc; end: 103da5ccf;  */

void FUN_103da5cbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103da582c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103da5cd0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da5cd0; end: 103da5d0f;  */

void FUN_103da5cd0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc909d0;
  func_0x000107c61520(&DAT_10dc909d0,&UNK_11070e3a8);
  puRam00000001130094b0 = puVar1;
  return;
}



/* Entry: 103da5d10; end: 103da5d13;  */

void FUN_103da5d10(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90a80;
  func_0x000107c61520(&UNK_10dc90a80,&UNK_11070e3a8);
  puRam00000001130094b8 = puVar1;
  return;
}



/* Entry: 103da5d14; end: 103da5d53;  */

void FUN_103da5d14(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90a80;
  func_0x000107c61520(&UNK_10dc90a80,&UNK_11070e3a8);
  puRam00000001130094b8 = puVar1;
  return;
}



/* Entry: 103da5d54; end: 103da5d77;  */

void FUN_103da5d54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5d78();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103da5d78; end: 103da5db7;  */

void FUN_103da5d78(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90af0;
  func_0x000107c61520(&UNK_10dc90af0,&UNK_11070e430);
  puRam00000001130094c0 = puVar1;
  return;
}



/* Entry: 103da5db8; end: 103da5dcf;  */

void FUN_103da5db8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103da586c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd8724)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da5dd0; end: 103da5e0f;  */

void FUN_103da5dd0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90b58;
  func_0x000107c61520(&UNK_10dc90b58,&UNK_11070e430);
  puRam00000001130094c8 = puVar1;
  return;
}



/* Entry: 103da5e10; end: 103da5e33;  */

void FUN_103da5e10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5e34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103da5e34; end: 103da5e73;  */

void FUN_103da5e34(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90bc8;
  func_0x000107c61520(&UNK_10dc90bc8,&UNK_11070e4b0);
  puRam00000001130094d0 = puVar1;
  return;
}



/* Entry: 103da5e74; end: 103da5e8b;  */

void FUN_103da5e74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103da58ac)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd8764)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da5e8c; end: 103da5ecb;  */

void FUN_103da5e8c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90c30;
  func_0x000107c61520(&UNK_10dc90c30,&UNK_11070e4b0);
  puRam00000001130094d8 = puVar1;
  return;
}



/* Entry: 103da5ecc; end: 103da5eef;  */

void FUN_103da5ecc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5ef0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103da5ef0; end: 103da5f2f;  */

void FUN_103da5ef0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90ca0;
  func_0x000107c61520(&UNK_10dc90ca0,&UNK_11070e530);
  puRam00000001130094e0 = puVar1;
  return;
}



/* Entry: 103da5f30; end: 103da5f47;  */

void FUN_103da5f30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103da58ec)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103cd8994();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da5f48; end: 103da5f87;  */

void FUN_103da5f48(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90d08;
  func_0x000107c61520(&UNK_10dc90d08,&UNK_11070e530);
  puRam00000001130094e8 = puVar1;
  return;
}



/* Entry: 103da5f88; end: 103da5fab;  */

void FUN_103da5f88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5fac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103da5fac; end: 103da5feb;  */

void FUN_103da5fac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90d78;
  func_0x000107c61520(&UNK_10dc90d78,&UNK_11070e5b0);
  puRam00000001130094f0 = puVar1;
  return;
}



/* Entry: 103da5fec; end: 103da5fff;  */

void FUN_103da5fec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103da5aec();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd89d4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da6000; end: 103da602f;  */

void FUN_103da6000(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103da6030; end: 103da6033;  */

void FUN_103da6030(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90de0;
  func_0x000107c61520(&UNK_10dc90de0,&UNK_11070e5b0);
  puRam00000001130094f8 = puVar1;
  return;
}



/* Entry: 103da6034; end: 103da6073;  */

void FUN_103da6034(void)

{
  undefined *puVar1;
  
  if (puRam00000001130094f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc90de0;
  func_0x000107c61520(&UNK_10dc90de0,&UNK_11070e5b0);
  puRam00000001130094f8 = puVar1;
  return;
}



/* Entry: 103da6074; end: 103da611f;  */

int FUN_103da6074(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103da6120; end: 103da61cf;  */

undefined8 * FUN_103da6120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 103da61d0; end: 103da621f;  */

undefined8 * FUN_103da61d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar3 = param_2[4];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103da6220; end: 103da62eb;  */

int FUN_103da6220(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103da62ec; end: 103da6317;  */

long FUN_103da62ec(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 103da6318; end: 103da6327;  */

undefined1  [16] FUN_103da6318(void)

{
  return ZEXT816(0x11070e4b0);
}



/* Entry: 103da6328; end: 103da636b;  */

undefined8 * FUN_103da6328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 103da636c; end: 103da641b;  */

int FUN_103da636c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103da641c; end: 103da6463;  */

/* WARNING: Possible PIC construction at 0x000103da6434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da6438) */
/* WARNING: Removing unreachable block (ram,0x000103da6454) */
/* WARNING: Removing unreachable block (ram,0x000103da6448) */

void FUN_103da641c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103da6464; end: 103da6697;  */

undefined8 * FUN_103da6464(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[6];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[5] = uVar2;
    param_1[6] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  return param_1;
}



/* Entry: 103da6698; end: 103da6757;  */

int FUN_103da6698(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103da6758; end: 103da6897;  */

void FUN_103da6758(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc90d4c;
  func_0x000107c61520(&DAT_10dc90d4c,&UNK_11070e5b0);
  puRam0000000113009508 = puVar1;
  return;
}



/* Entry: 103da6898; end: 103da691b;  */

uint FUN_103da6898(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_103da592c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103da691c; end: 103da6943;  */

void FUN_103da691c(void)

{
  func_0x000100d6f56c();
  return;
}



/* Entry: 103da6944; end: 103da698b;  */

void FUN_103da6944(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103da698c; end: 103da69db;  */

void FUN_103da698c(void)

{
  func_0x000100d6f474();
  return;
}



/* Entry: 103da69dc; end: 103da6a03;  */

undefined8 * FUN_103da69dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 103da6a04; end: 103da6a2b;  */

void FUN_103da6a04(void)

{
  func_0x000100d6f488();
  return;
}



/* Entry: 103da6a2c; end: 103da6af7;  */

/* WARNING: Possible PIC construction at 0x000103da6acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103da6adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da6ad0) */
/* WARNING: Removing unreachable block (ram,0x000103da6ae0) */

void FUN_103da6a2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11070e770;
  func_0x000107c613fc(&UNK_11070e770,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x113009558;
  func_0x0001000285a8(0x113009558,&UNK_10dc910f8);
  func_0x000107c613fc();
  pcVar3 = FUN_103da6c0c;
  func_0x0001000841fc(FUN_103da6c0c,puVar1,uVar2);
  func_0x000100084214(&UNK_10dc910c0,0x35,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103da6af8; end: 103da6b13;  */

/* WARNING: Possible PIC construction at 0x000103da6acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103da6adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da6ad0) */
/* WARNING: Removing unreachable block (ram,0x000103da6ae0) */

void FUN_103da6af8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11070e770;
  func_0x000107c613fc(&UNK_11070e770,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x113009558;
  func_0x0001000285a8(0x113009558,&UNK_10dc910f8);
  func_0x000107c613fc();
  pcVar6 = FUN_103da6c0c;
  func_0x0001000841fc(FUN_103da6c0c,puVar4,uVar5);
  func_0x000100084214(&UNK_10dc910c0,0x35,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103da6b14; end: 103da6c0b;  */

void FUN_103da6b14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  func_0x0001000285a8(0x113009560,&UNK_10dc91100);
  puVar1 = &UNK_11070e798;
  func_0x000107c613fc(&UNK_11070e798,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103da6c54;
  func_0x0001000823a8(FUN_103da6c54,puVar1);
  func_0x000100082720("LensApiServiceSaberPluginRegistryServiceProvider",0x30,2);
  pcVar3 = pcVar2;
  FUN_103dacf10();
  func_0x000107c61574(pcVar2);
  func_0x000100082720("LensApiServiceSaberPluginCollectionEntryPointProvider",0x35,2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 103da6c0c; end: 103da6c17;  */

void FUN_103da6c0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x113009560,&UNK_10dc91100);
  puVar5 = &UNK_11070e798;
  func_0x000107c613fc(&UNK_11070e798,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  pcVar6 = FUN_103da6c54;
  func_0x0001000823a8(FUN_103da6c54,puVar5);
  func_0x000100082720("LensApiServiceSaberPluginRegistryServiceProvider",0x30,2);
  pcVar7 = pcVar6;
  FUN_103dacf10();
  func_0x000107c61574(pcVar6);
  func_0x000100082720("LensApiServiceSaberPluginCollectionEntryPointProvider",0x35,2);
  *param_1 = pcVar7;
  return;
}



/* Entry: 103da6c18; end: 103da6c53;  */

void FUN_103da6c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103da6c54; end: 103da6c5f;  */

void FUN_103da6c54(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103da6c9c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("LensApiServiceSaberPluginRegistryServiceProvider",0x30,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103da6c60; end: 103da6c9b;  */

void FUN_103da6c60(undefined8 *param_1,undefined8 param_2)

{
  FUN_103da6c9c();
  func_0x0001000a7f38("LensApiServiceSaberPluginRegistryServiceProvider",0x30,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103da6c9c; end: 103da6e63;  */

void FUN_103da6c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11070f488;
  ppuVar4 = &PTR_DAT_1130099b0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11070e7c0;
  func_0x000107c613fc(&UNK_11070e7c0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x113009568;
  func_0x0001000285a8(0x113009568,&UNK_10dc91108);
  func_0x0001000a6ee8(&UNK_11070e9e8,"AILensRemoteAPIPluginKey",0x18,2,FUN_103da6e64,puVar2,uVar3,
                      &UNK_11070e9e8,&PTR_DAT_1130095a0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11070f2f0,"LensCTStickerSearchPluginKey",0x1c,2,0x103da6ea4,param_3,uVar3
                      ,&UNK_11070f2f0,&PTR_DAT_113009980);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11070e898,"SCCameraLensRemoteApiCameraCapabilityPluginKey",0x2e,2,
                      0x103da6ee4,param_4,uVar3,&UNK_11070e898,&PTR_DAT_113009578);
  func_0x000107c61574(param_4);
  uVar3 = 0x113009570;
  func_0x0001000285a8(0x113009570,&UNK_10dc91110);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103da6e64; end: 103da6f6f;  */

void FUN_103da6e64(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103da7eb8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AILensRemoteAPISaberPluginProvider",0x22,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103da6f70; end: 103da7183;  */

void FUN_103da6f70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_60 = FUN_103da71c4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010e92f4;
  puStack_68 = &UNK_11070e8c8;
  ppuVar2 = &puStack_80;
  func_0x000107c60bc4();
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x000100f0c488();
  func_0x000107c61534();
  ppuVar2[3] = (undefined *)0x3;
  ppuVar2[2] = (undefined *)0x1;
  uVar3 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  puVar4 = (undefined *)0xa;
  func_0x0001044e4b78();
  ppuVar2[4] = puVar4;
  ppuVar5 = ppuVar2;
  FUN_103da7d8c(ppuVar2);
  func_0x000107c61588(ppuVar2);
  func_0x000107c61408(ppuVar2 + 4,ppuVar2[2],uVar3);
  lVar6 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  ppuVar2 = &puStack_80;
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  ppuVar7 = &PTR____CFConstantStringClassReference_110ee8f98;
  func_0x000107c5faec();
  *(undefined8 *)(lVar6 + 0x20) = ppuVar7;
  *(undefined ***)(lVar6 + 0x28) = ppuVar2;
  lVar8 = lVar6;
  func_0x000100403a6c(lVar6);
  func_0x000107c61588(lVar6);
  func_0x000100bcb1dc((undefined8 *)(lVar6 + 0x20));
  puVar4 = PTR_PTR_1126b0260;
  func_0x000107c610f8();
  puVar9 = puVar4;
  func_0x000100f06a9c();
  ppuVar2 = ppuVar5;
  func_0x000107c5fe08(ppuVar5,uVar3,puVar9);
  func_0x000107c6142c(ppuVar5);
  lVar6 = lVar8;
  func_0x000107c5fe08(lVar8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar8);
  func_0x000107c48360();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(puVar1);
  *param_1 = puVar4;
  return;
}



/* Entry: 103da7184; end: 103da71c3;  */

undefined ** FUN_103da7184(void)

{
  return &PTR_DAT_1130099b0;
}



/* Entry: 103da71c4; end: 103da7213;  */

undefined * FUN_103da71c4(void)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  puVar1 = PTR_PTR_1126ada38;
  func_0x000107c610f8(PTR_PTR_1126ada38);
  func_0x000107c45bac();
  func_0x000107c61170(uStack_28);
  return puVar1;
}



/* Entry: 103da7214; end: 103da722f;  */

void FUN_103da7214(long param_1,long param_2)

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



/* Entry: 103da7230; end: 103da798f;  */

undefined8 FUN_103da7230(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    func_0x0001044e4d64(0);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000103da7644();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      func_0x0001044e4d64(0);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103da7458);
      (*pcVar1)();
    }
    func_0x000103da7458(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_103da7ae0(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_103da7d0c(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 103da7990; end: 103da7adf;  */

void FUN_103da7990(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_103da7a6c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_103da7a6c:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103da7ae0);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_103da7ab8;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_103da7ab8:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103da7ae0; end: 103da7d0b;  */

void FUN_103da7ae0(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112d4ad10;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_103da7cdc:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103da7d08);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_103da7cdc;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103da7d0c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 103da7d0c; end: 103da7d8b;  */

void FUN_103da7d0c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 103da7d8c; end: 103da7eb7;  */

void FUN_103da7d8c(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  func_0x0001044e4d64(0);
  uVar4 = uVar3;
  func_0x000100f06a9c();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103da7ea4);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        func_0x000100f060ac(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103da7ea0);
        (*pcVar2)();
      }
      FUN_103da7230(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 103da7eb8; end: 103da7f37;  */

void FUN_103da7eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee4758,&UNK_10db0fa40);
  puVar1 = &UNK_11070e9b8;
  func_0x000107c613fc(&UNK_11070e9b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103da7f38,puVar1);
  return;
}



/* Entry: 103da7f38; end: 103da81d7;  */

void FUN_103da7f38(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  puVar12 = puStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar12 != (undefined *)0x0) {
    uVar2 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f1b7490);
    puVar3 = puVar12;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(puVar12);
    puVar12 = (undefined *)0x0;
    if ((int)puVar3 != 0) {
      func_0x000100083b20(&puStack_80);
      puVar6 = puStack_80;
      puVar4 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar3 = &UNK_11070ea28;
      func_0x000107c613fc(&UNK_11070ea28,0x18,7);
      *(undefined **)(puVar3 + 0x10) = puStack_80;
      pcStack_60 = FUN_103da8218;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1010e92f4;
      puStack_68 = &UNK_11070ea40;
      puStack_58 = puVar3;
      func_0x000107c60bc4();
      puVar3 = puStack_58;
      func_0x000107c61174(puVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c3e4fc(puVar4);
      func_0x000107c61180();
      func_0x000107c60bd0();
      func_0x000100f0c488();
      func_0x000107c61534();
      *(undefined8 *)((long)ppuVar5 + 0x18) = 3;
      *(undefined8 *)((long)ppuVar5 + 0x10) = 1;
      uVar2 = 0;
      func_0x0001044e4d64(0);
      func_0x000107c610f8();
      uVar7 = 0xb;
      func_0x0001044e4b78();
      *(undefined8 *)((long)ppuVar5 + 0x20) = uVar7;
      puVar8 = (undefined1 *)ppuVar5;
      FUN_103da7d8c(ppuVar5);
      func_0x000107c61588(ppuVar5);
      func_0x000107c61408((undefined8 *)((long)ppuVar5 + 0x20),*(undefined8 *)((long)ppuVar5 + 0x10)
                          ,uVar2);
      lVar9 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      lVar10 = lVar9;
      func_0x000100403a6c();
      func_0x000100bcb1dc(lVar9 + 0x20);
      puVar12 = PTR_PTR_1126b0260;
      func_0x000107c610f8();
      puVar3 = puVar12;
      func_0x000100f06a9c();
      puVar11 = puVar8;
      func_0x000107c5fe08(puVar8,uVar2,puVar3);
      func_0x000107c6142c(puVar8);
      lVar9 = lVar10;
      func_0x000107c5fe08(lVar10,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar10);
      func_0x000107c48360();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
    }
    *param_1 = puVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103da81d8);
  (*pcVar1)();
}



/* Entry: 103da81d8; end: 103da8217;  */

undefined ** FUN_103da81d8(void)

{
  return &PTR_DAT_1130099b0;
}


