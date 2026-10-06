/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10367c874; end: 10367c913;  */

uint FUN_10367c874(undefined8 *param_1,undefined8 *param_2)

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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103681b68(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10367c914; end: 10367ca5b;  */

/* WARNING: Removing unreachable block (ram,0x00010367ca40) */

void FUN_10367c914(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar3 = *(code **)(param_3 + 0x48);
          }
          else {
            if (lVar1 != 3) goto LAB_10367c98c;
            pcVar3 = *(code **)(param_3 + 0x48);
          }
          goto LAB_10367c97c;
        }
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        (*pcVar3)(unaff_x20 + 0x38,&UNK_110790b00,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x48);
          }
          else {
            if (lVar1 != 5) goto LAB_10367c98c;
            pcVar3 = *(code **)(param_3 + 0x18);
          }
        }
        else if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 7) goto LAB_10367c98c;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_10367c97c:
        (*pcVar3)();
      }
LAB_10367c98c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10367ca5c; end: 10367cb97;  */

void FUN_10367ca5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x20;
  long unaff_x21;
  
  FUN_10367cb98();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x18))(*unaff_x20,2,param_2,param_3);
    }
    if (unaff_x20[1] != 0) {
      (**(code **)(param_3 + 0x18))(unaff_x20[1],3,param_2,param_3);
    }
    if (unaff_x20[2] != 0) {
      (**(code **)(param_3 + 0x18))(unaff_x20[2],4,param_2,param_3);
    }
    if (unaff_x20[3] != 0) {
      (**(code **)(param_3 + 8))(5,param_2,param_3);
    }
    uVar2 = *(ulong *)(unaff_x20 + 6);
    uVar1 = *(ulong *)(unaff_x20 + 4) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 4),uVar2,6,param_2,param_3);
    }
    if ((char)unaff_x20[8] == '\x01') {
      (**(code **)(param_3 + 0x68))(1,7,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10367cb98; end: 10367cc1f;  */

void FUN_10367cb98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,1,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10367cc20; end: 10367cc6f;  */

void FUN_10367cc20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  return;
}



/* Entry: 10367cc70; end: 10367cc9f;  */

undefined1  [16] FUN_10367cc70(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 10367cca0; end: 10367ccd3;  */

void FUN_10367cca0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 10367ccd4; end: 10367cce7;  */

undefined1  [16] FUN_10367ccd4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x10367cce4;
  return auVar1;
}



/* Entry: 10367cce8; end: 10367ccfb;  */

void FUN_10367cce8(void)

{
  FUN_10367c914();
  return;
}



/* Entry: 10367ccfc; end: 10367cd3b;  */

void FUN_10367ccfc(void)

{
  FUN_10367ca5c();
  return;
}



/* Entry: 10367cd3c; end: 10367cd73;  */

uint FUN_10367cd3c(long param_1,long param_2)

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
  func_0x000103685944();
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



/* Entry: 10367cd74; end: 10367cdcb;  */

uint FUN_10367cd74(undefined8 *param_1)

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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x000103682170(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10367cdcc; end: 10367ce6b;  */

/* WARNING: Possible PIC construction at 0x00010367ce18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010367ce28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010367ce1c) */
/* WARNING: Removing unreachable block (ram,0x00010367ce2c) */

void FUN_10367cdcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f83280 != -1) {
    func_0x000107c61568(0x112f83280,0x10367c8cc);
  }
  uVar5 = uRam000000011380b838;
  uVar4 = uRam000000011380b830;
  uVar3 = uRam000000011380b828;
  uVar2 = uRam000000011380b820;
  uVar1 = uRam000000011380b818;
  *param_1 = uRam000000011380b810;
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



/* Entry: 10367ce6c; end: 10367ce7f;  */

void FUN_10367ce6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83728;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83728,&UNK_10dbf6998);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10367ce80; end: 10367ceb3;  */

void FUN_10367ce80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10367ceb4; end: 10367cfc7;  */

void FUN_10367ceb4(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
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



/* Entry: 10367cfc8; end: 10367d067;  */

uint FUN_10367cfc8(undefined8 *param_1,undefined8 *param_2)

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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000103682170(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10367d068; end: 10367d0a3;  */

void FUN_10367d068(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103681814();
  func_0x000107c613fc();
  FUN_10367d0a4();
  uRam0000000112f831d8 = uVar1;
  return;
}



/* Entry: 10367d0a4; end: 10367d16b;  */

void FUN_10367d0a4(void)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x10) = 0;
  *(undefined4 *)(unaff_x20 + 0x14) = 0;
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa9) = 0;
  *(undefined8 *)(unaff_x20 + 0xa1) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined1 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 2;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 1;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 1;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined1 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b4) = 0;
  *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
  *(undefined4 *)(unaff_x20 + 0x1bc) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  return;
}



/* Entry: 10367d16c; end: 10367da97;  */

void FUN_10367d16c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 *puVar29;
  undefined1 auStack_7c8 [24];
  undefined1 auStack_7b0 [80];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined8 uStack_188;
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
  undefined8 uStack_f8;
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
  
  puVar15 = (undefined2 *)(unaff_x20 + 0x10);
  *puVar15 = 0;
  puVar18 = (undefined4 *)(unaff_x20 + 0x14);
  *puVar18 = 0;
  puVar23 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar29 = (undefined1 *)(unaff_x20 + 0x20);
  *puVar29 = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  puVar26 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar26 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x68);
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  puVar10 = (undefined1 *)(unaff_x20 + 200);
  *puVar10 = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0xc0);
  *puVar11 = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0xb8);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xa9) = 0;
  *(undefined8 *)(unaff_x20 + 0xa1) = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0xd0);
  *puVar13 = 2;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  puVar21 = (undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *puVar21 = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 1;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined1 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b4) = 0;
  *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
  *(undefined4 *)(unaff_x20 + 0x1bc) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_388,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x10);
  func_0x000107c61428(puVar15,auStack_3a0,1,0);
  *(undefined1 *)puVar15 = uVar4;
  func_0x000107c61428(param_1 + 0x11,auStack_3b8,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x11);
  func_0x000107c61428(unaff_x20 + 0x11,auStack_3d0,1,0);
  *(undefined1 *)(unaff_x20 + 0x11) = uVar4;
  func_0x000107c61428(param_1 + 0x14,auStack_3e8,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  func_0x000107c61428(puVar18,auStack_400,1,0);
  *puVar18 = uVar3;
  func_0x000107c61428(param_1 + 0x18,auStack_418,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar23,auStack_430,1,0);
  *puVar23 = uVar16;
  func_0x000107c61428(param_1 + 0x20,auStack_448,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x20);
  func_0x000107c61428(puVar29,auStack_460,1,0);
  *puVar29 = uVar4;
  func_0x000107c61428(param_1 + 0x28,auStack_478,0,0);
  uStack_368 = *(undefined8 *)(param_1 + 0x30);
  uStack_370 = *(undefined8 *)(param_1 + 0x28);
  uStack_358 = *(undefined8 *)(param_1 + 0x40);
  uStack_360 = *(undefined8 *)(param_1 + 0x38);
  uStack_348 = *(undefined8 *)(param_1 + 0x50);
  uStack_350 = *(undefined8 *)(param_1 + 0x48);
  uStack_338 = *(undefined8 *)(param_1 + 0x60);
  uStack_340 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(puVar26,auStack_490,1,0);
  uStack_328 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_330 = *puVar26;
  uStack_318 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_320 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_308 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_310 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_300 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_368;
  *puVar26 = uStack_370;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_348;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_350;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_340;
  func_0x000107c61434(uVar16);
  FUN_103685c84(&uStack_370,&uStack_c0,0x112f83180,&UNK_10dbf5af8);
  func_0x000103685d18(&uStack_330,0x112f83180,&UNK_10dbf5af8);
  func_0x000107c61428(param_1 + 0x68,auStack_4a8,0,0);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_2b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_2b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar9,auStack_4c0,1,0);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_2a0 = *puVar9;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_2c0;
  uStack_260 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_2e8;
  *puVar9 = uStack_2f0;
  FUN_103685c84(&uStack_2f0,&uStack_c0,0x112f83190,&UNK_10dbf5b08);
  func_0x000103685d18(&uStack_2a0,0x112f83190,&UNK_10dbf5b08);
  func_0x000107c61428(param_1 + 0xb0,auStack_4d8,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0xb0);
  func_0x000107c61428(unaff_x20 + 0xb0,auStack_4f0,1,0);
  *(undefined1 *)(unaff_x20 + 0xb0) = uVar4;
  func_0x000107c61428(param_1 + 0xb8,auStack_508,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xb8);
  func_0x000107c61428(puVar12,auStack_520,1,0);
  *puVar12 = uVar16;
  func_0x000107c61428(param_1 + 0xc0,auStack_538,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar11,auStack_550,1,0);
  *(undefined4 *)puVar11 = uVar3;
  func_0x000107c61428(param_1 + 0xc4,auStack_568,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0xc4);
  func_0x000107c61428(unaff_x20 + 0xc4,auStack_580,1,0);
  *(undefined4 *)(unaff_x20 + 0xc4) = uVar3;
  func_0x000107c61428(param_1 + 200,auStack_598,0,0);
  uVar4 = *(undefined1 *)(param_1 + 200);
  func_0x000107c61428(puVar10,auStack_5b0,1,0);
  *puVar10 = uVar4;
  func_0x000107c61428(param_1 + 0xd0,auStack_5c8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xd0);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  uVar24 = *(undefined8 *)(param_1 + 0xe0);
  func_0x000107c61428(puVar13,auStack_5e0,1,0);
  uVar27 = *puVar13;
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar13 = uVar16;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar24;
  FUN_103681b30(uVar16,uVar6,uVar24);
  func_0x000103681b4c(uVar27,uVar5,uVar7);
  func_0x000107c61428(param_1 + 0xe8,auStack_5f8,0,0);
  uStack_238 = *(undefined8 *)(param_1 + 0x100);
  uStack_240 = *(undefined8 *)(param_1 + 0xf8);
  uStack_228 = *(undefined8 *)(param_1 + 0x110);
  uStack_230 = *(undefined8 *)(param_1 + 0x108);
  uStack_218 = *(undefined8 *)(param_1 + 0x120);
  uStack_220 = *(undefined8 *)(param_1 + 0x118);
  uStack_208 = *(undefined8 *)(param_1 + 0x130);
  uStack_210 = *(undefined8 *)(param_1 + 0x128);
  uStack_248 = *(undefined8 *)(param_1 + 0xf0);
  uStack_250 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c61428(puVar21,auStack_610,1,0);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_200 = *puVar21;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_248;
  *puVar21 = uStack_250;
  FUN_103685c84(&uStack_250,&uStack_c0,0x112f831a0,&UNK_10dbf5b18);
  func_0x000103685d18(&uStack_200,0x112f831a0,&UNK_10dbf5b18);
  func_0x000107c61428((undefined8 *)(param_1 + 0x138),auStack_628,0,0);
  uStack_188 = *(undefined8 *)(param_1 + 0x160);
  uStack_190 = *(undefined8 *)(param_1 + 0x158);
  uStack_178 = *(undefined8 *)(param_1 + 0x170);
  uStack_180 = *(undefined8 *)(param_1 + 0x168);
  uStack_168 = *(undefined8 *)(param_1 + 0x180);
  uStack_170 = *(undefined8 *)(param_1 + 0x178);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x140);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x138);
  uStack_198 = *(undefined8 *)(param_1 + 0x150);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x148);
  func_0x000107c61428(puVar1,auStack_640,1,0);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_160 = *puVar1;
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_1a8;
  *puVar1 = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_1a0;
  FUN_103685c84(&uStack_1b0,&uStack_c0,0x112f831b0,&UNK_10dbf5b28);
  func_0x000103685d18(&uStack_160,0x112f831b0,&UNK_10dbf5b28);
  func_0x000107c61428(param_1 + 0x188,auStack_658,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x188);
  func_0x000107c61428(unaff_x20 + 0x188,auStack_670,1,0);
  *(undefined1 *)(unaff_x20 + 0x188) = uVar4;
  func_0x000107c61428(param_1 + 400,auStack_688,0,0);
  uVar16 = *(undefined8 *)(param_1 + 400);
  uVar6 = *(undefined8 *)(param_1 + 0x198);
  uVar24 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x000107c61428(unaff_x20 + 400,auStack_6a0,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 400);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x20 + 400) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar24;
  func_0x000100d578a0(uVar16,uVar6,uVar24);
  func_0x000100d578bc(uVar5,uVar7,uVar27);
  func_0x000107c61428(param_1 + 0x1a8,auStack_6b8,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x1a8);
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_6d0,1,0);
  *(undefined1 *)(unaff_x20 + 0x1a8) = uVar4;
  func_0x000107c61428(param_1 + 0x1ac,auStack_6e8,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x1ac);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1ac),auStack_700,1,0);
  *(undefined4 *)(unaff_x20 + 0x1ac) = uVar3;
  func_0x000107c61428(param_1 + 0x1b0,auStack_718,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x1b0);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar24 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 0x1b0,auStack_730,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar24;
  func_0x000100d578a0(uVar16,uVar6,uVar24);
  func_0x000100d578bc(uVar5,uVar7,uVar27);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1c8),auStack_748,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_d8 = *(undefined8 *)(param_1 + 0x200);
  uStack_e0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x210);
  uStack_d0 = *(undefined8 *)(param_1 + 0x208);
  uStack_108 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_110 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_100 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c61428(puVar2,auStack_760,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_c0 = *puVar2;
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_108;
  *puVar2 = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_100;
  FUN_103685c84(&uStack_110,auStack_7b0,0x112f831c0,&UNK_10dbf5b38);
  func_0x000103685d18(&uStack_c0,0x112f831c0,&UNK_10dbf5b38);
  func_0x000107c61428(param_1 + 0x218,auStack_7b0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x218);
  uVar17 = *(undefined8 *)(param_1 + 0x220);
  uVar19 = *(undefined8 *)(param_1 + 0x228);
  uVar20 = *(undefined8 *)(param_1 + 0x230);
  uVar22 = *(undefined8 *)(param_1 + 0x238);
  uVar25 = *(undefined8 *)(param_1 + 0x240);
  uVar28 = *(undefined8 *)(param_1 + 0x248);
  FUN_103682400(uVar14,uVar17,uVar19,uVar20,uVar22,uVar25,uVar28);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x218,auStack_7c8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x240);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x248);
  *(undefined8 *)(unaff_x20 + 0x218) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x220) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x228) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x230) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x238) = uVar22;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar25;
  *(undefined8 *)(unaff_x20 + 0x248) = uVar28;
  func_0x000103682458(uVar16,uVar5,uVar6,uVar7,uVar24,uVar27,uVar8);
  return;
}



/* Entry: 10367da98; end: 10367dba3;  */

void FUN_10367da98(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_103685704(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  FUN_103685780(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000103681b4c(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  func_0x0001036857b8(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000103685824(*(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000100d578bc(*(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000100d578bc(*(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0));
  FUN_1036858a4(*(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000103682458(*(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240),
                      *(undefined8 *)(unaff_x20 + 0x248));
  return;
}



/* Entry: 10367dba4; end: 10367dc33;  */

void FUN_10367dba4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_103681814(0);
    func_0x000107c613fc();
    FUN_10367d16c(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_10367dc34();
  return;
}



/* Entry: 10367dc34; end: 10367dfbb;  */

/* WARNING: Removing unreachable block (ram,0x00010367de0c) */
/* WARNING: Removing unreachable block (ram,0x00010367ddb0) */
/* WARNING: Removing unreachable block (ram,0x00010367deb0) */
/* WARNING: Removing unreachable block (ram,0x00010367ddcc) */
/* WARNING: Removing unreachable block (ram,0x00010367dfb8) */
/* WARNING: Removing unreachable block (ram,0x00010367df9c) */
/* WARNING: Removing unreachable block (ram,0x00010367dd70) */
/* WARNING: Removing unreachable block (ram,0x00010367de70) */
/* WARNING: Removing unreachable block (ram,0x00010367def0) */
/* WARNING: Removing unreachable block (ram,0x00010367dd54) */

void FUN_10367dc34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x10;
        break;
      case 2:
        func_0x000107c61428(param_1 + 0x11,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x11;
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x14,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x14;
        break;
      case 4:
        FUN_10367dfbc(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 5:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x20;
        break;
      case 6:
        FUN_10367e050(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 7:
        FUN_10367e0e4(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 8:
        func_0x000107c61428(param_1 + 0xb0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xb0;
        break;
      case 9:
        func_0x000107c61428(param_1 + 0xb8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0xb8;
        break;
      case 10:
        func_0x000107c61428(param_1 + 0xc0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0xc0;
        break;
      case 0xb:
        func_0x000107c61428(param_1 + 0xc4,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0xc4;
        break;
      case 0xc:
        func_0x000107c61428(param_1 + 200,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 200;
        break;
      case 0xd:
        FUN_10367e178(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 0xe:
        FUN_10367e20c(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 0xf:
        FUN_10367e2a0(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 0x10:
        func_0x000107c61428(param_1 + 0x188,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x188;
        break;
      case 0x11:
        FUN_10367e334(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 0x12:
        func_0x000107c61428(param_1 + 0x1a8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1a8;
        break;
      default:
        goto LAB_10367dce0;
      case 0x14:
        func_0x000107c61428(param_1 + 0x1ac,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x1ac;
        break;
      case 0x15:
        FUN_10367e3c8(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 0x16:
        FUN_10367e45c(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      case 0x17:
        FUN_10367e4f0(param_2,param_1,param_3,param_4);
        goto LAB_10367dce0;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      func_0x000107c614a8(auStack_68);
LAB_10367dce0:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10367dfbc; end: 10367e04f;  */

void FUN_10367dfbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x18;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1036831b0();
  (*pcVar2)(param_2 + 0x18,&UNK_110678670,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e050; end: 10367e0e3;  */

void FUN_10367e050(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103685c44();
  (*pcVar2)(param_2 + 0x28,&UNK_110678ed0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e0e4; end: 10367e177;  */

void FUN_10367e0e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x68;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103682cc4();
  (*pcVar2)(param_2 + 0x68,&UNK_1106782c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e178; end: 10367e20b;  */

void FUN_10367e178(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103682acc();
  (*pcVar2)(param_2 + 0xd0,&UNK_1106781a8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e20c; end: 10367e29f;  */

void FUN_10367e20c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036833a8();
  (*pcVar2)(param_2 + 0xe8,&UNK_110678818,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e2a0; end: 10367e333;  */

void FUN_10367e2a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x138;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103682ebc();
  (*pcVar2)(param_2 + 0x138,&UNK_110678460,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e334; end: 10367e3c7;  */

void FUN_10367e334(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 400;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 400,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e3c8; end: 10367e45b;  */

void FUN_10367e3c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x1b0,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e45c; end: 10367e4ef;  */

void FUN_10367e45c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036834a4();
  (*pcVar2)(param_2 + 0x1c8,&UNK_110678928,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e4f0; end: 10367e583;  */

void FUN_10367e4f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x218;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103685c04();
  (*pcVar2)(param_2 + 0x218,&UNK_110679108,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10367e584; end: 10367e5ef;  */

void FUN_10367e584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_10367e5f0(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 10367e5f0; end: 10367ead7;  */

void FUN_10367e5f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  if (((*(char *)(param_1 + 0x10) != '\x01') ||
      ((**(code **)(param_4 + 0x68))(1,1,param_3,param_4), unaff_x21 == 0)) &&
     ((func_0x000107c61428(param_1 + 0x11,auStack_80,0,0), *(char *)(param_1 + 0x11) != '\x01' ||
      ((**(code **)(param_4 + 0x68))(1,2,param_3,param_4), unaff_x21 == 0)))) {
    func_0x000107c61428(param_1 + 0x14,auStack_98,0,0);
    if ((*(int *)(param_1 + 0x14) == 0) ||
       ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x14),3,param_3,param_4), unaff_x21 == 0))
    {
      func_0x000107c61428(param_1 + 0x18,auStack_b0,0,0);
      lVar1 = *(long *)(param_1 + 0x18);
      if (*(long *)(lVar1 + 0x10) != 0) {
        pcVar2 = *(code **)(param_4 + 0x118);
        FUN_1036831b0();
        func_0x000107c61434(lVar1);
        (*pcVar2)();
        if (unaff_x21 != 0) {
          func_0x000107c6142c(lVar1);
          return;
        }
        func_0x000107c6142c(lVar1);
      }
      func_0x000107c61428(param_1 + 0x20,auStack_c8,0,0);
      if (((*(char *)(param_1 + 0x20) != '\x01') ||
          ((**(code **)(param_4 + 0x68))(1,5,param_3,param_4), unaff_x21 == 0)) &&
         (FUN_10367ead8(param_1,param_2,param_3,param_4), unaff_x21 == 0)) {
        FUN_10367eb90(param_1,param_2,param_3,param_4);
        func_0x000107c61428(param_1 + 0xb0,auStack_e0,0,0);
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          (**(code **)(param_4 + 0x68))(1,8,param_3,param_4);
        }
        func_0x000107c61428(param_1 + 0xb8,auStack_f8,0,0);
        if (*(long *)(param_1 + 0xb8) != 0) {
          (**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0xb8),9,param_3,param_4);
        }
        func_0x000107c61428(param_1 + 0xc0,auStack_110,0,0);
        if (*(int *)(param_1 + 0xc0) != 0) {
          (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0xc0),10,param_3,param_4);
        }
        func_0x000107c61428(param_1 + 0xc4,auStack_128,0,0);
        if (*(int *)(param_1 + 0xc4) != 0) {
          (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0xc4),0xb,param_3,param_4);
        }
        func_0x000107c61428(param_1 + 200,auStack_140,0,0);
        if (*(char *)(param_1 + 200) == '\x01') {
          (**(code **)(param_4 + 0x68))(1,0xc,param_3,param_4);
        }
        FUN_10367ec4c(param_1,param_2,param_3,param_4);
        FUN_10367ecf4(param_1,param_2,param_3,param_4);
        FUN_10367edb4(param_1,param_2,param_3,param_4);
        func_0x000107c61428((char *)(param_1 + 0x188),auStack_158,0,0);
        if (*(char *)(param_1 + 0x188) == '\x01') {
          (**(code **)(param_4 + 0x68))(1,0x10,param_3,param_4);
        }
        FUN_10367ee74(param_1,param_2,param_3,param_4);
        func_0x000107c61428(param_1 + 0x1a8,auStack_170,0,0);
        if (*(char *)(param_1 + 0x1a8) == '\x01') {
          (**(code **)(param_4 + 0x68))(1,0x12,param_3,param_4);
        }
        func_0x000107c61428(param_1 + 0x1ac,auStack_188,0,0);
        if (*(int *)(param_1 + 0x1ac) != 0) {
          (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x1ac),0x14,param_3,param_4);
        }
        FUN_10367ef1c(param_1,param_2,param_3,param_4);
        FUN_10367efc4(param_1,param_2,param_3,param_4);
        FUN_10367f080(param_1,param_2,param_3,param_4);
      }
    }
  }
  return;
}



/* Entry: 10367ead8; end: 10367eb8f;  */

void FUN_10367ead8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x60);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103685c44();
    (*pcVar2)(&uStack_a0,6,&UNK_110678ed0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367eb90; end: 10367ec4b;  */

void FUN_10367eb90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x68;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x80);
  if (lStack_88 != 1) {
    uStack_98 = *(undefined8 *)(param_1 + 0x70);
    uStack_a0 = *(undefined8 *)(param_1 + 0x68);
    uStack_90 = *(undefined8 *)(param_1 + 0x78);
    uStack_78 = *(undefined8 *)(param_1 + 0x90);
    uStack_80 = *(undefined8 *)(param_1 + 0x88);
    uStack_68 = *(undefined8 *)(param_1 + 0xa0);
    uStack_70 = *(undefined8 *)(param_1 + 0x98);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103682cc4();
    (*pcVar2)(&uStack_a0,7,&UNK_1106782c0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367ec4c; end: 10367ecf3;  */

void FUN_10367ec4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xd0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xd0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    uStack_68 = *(undefined8 *)(param_1 + 0xd8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103682acc();
    (*pcVar2)(abStack_70,0xd,&UNK_1106781a8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367ecf4; end: 10367edb3;  */

void FUN_10367ecf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0xf8);
  if (lStack_a0 != 1) {
    uStack_a8 = *(undefined8 *)(param_1 + 0xf0);
    uStack_b0 = *(undefined8 *)(param_1 + 0xe8);
    uStack_90 = *(undefined8 *)(param_1 + 0x108);
    uStack_98 = *(undefined8 *)(param_1 + 0x100);
    uStack_80 = *(undefined8 *)(param_1 + 0x118);
    uStack_88 = *(undefined8 *)(param_1 + 0x110);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    uStack_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_68 = *(undefined8 *)(param_1 + 0x130);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1036833a8();
    (*pcVar2)(&uStack_b0,0xe,&UNK_110678818,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367edb4; end: 10367ee73;  */

void FUN_10367edb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x138);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_98 = *(long *)(param_1 + 0x150);
  if (lStack_98 != 1) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x140);
    uStack_b0 = *puVar1;
    uStack_a0 = *(undefined8 *)(param_1 + 0x148);
    uStack_88 = *(undefined8 *)(param_1 + 0x160);
    uStack_90 = *(undefined8 *)(param_1 + 0x158);
    uStack_78 = *(undefined8 *)(param_1 + 0x170);
    uStack_80 = *(undefined8 *)(param_1 + 0x168);
    uStack_68 = *(undefined8 *)(param_1 + 0x180);
    uStack_70 = *(undefined8 *)(param_1 + 0x178);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103682ebc();
    (*pcVar3)(&uStack_b0,0xf,&UNK_110678460,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10367ee74; end: 10367ef1b;  */

void FUN_10367ee74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 400;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1a0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x198);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 400);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,0x11,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367ef1c; end: 10367efc3;  */

void FUN_10367ef1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1c0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x1b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x15,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367efc4; end: 10367f07f;  */

void FUN_10367efc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x1c8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_98 = *(long *)(param_1 + 0x1e0);
  if (lStack_98 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_b0 = *puVar1;
    uStack_a0 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_88 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_90 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_78 = *(undefined8 *)(param_1 + 0x200);
    uStack_80 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_68 = *(undefined8 *)(param_1 + 0x210);
    uStack_70 = *(undefined8 *)(param_1 + 0x208);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_1036834a4();
    (*pcVar3)(&uStack_b0,0x16,&UNK_110678928,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10367f080; end: 10367f13b;  */

void FUN_10367f080(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x218;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x220);
  if (lStack_88 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x238);
    uStack_78 = *(undefined8 *)(param_1 + 0x230);
    uStack_80 = *(undefined8 *)(param_1 + 0x228);
    uStack_90 = *(undefined8 *)(param_1 + 0x218);
    uStack_60 = *(undefined8 *)(param_1 + 0x248);
    uStack_68 = *(undefined8 *)(param_1 + 0x240);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103685c04();
    (*pcVar2)(&uStack_90,0x17,&UNK_110679108,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10367f13c; end: 10367f1eb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10367f13c(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_10367f1ec(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
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
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
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
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
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
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
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



/* Entry: 10367f1ec; end: 10368076b;  */

undefined8 FUN_10367f1ec(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_c20 [80];
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined1 auStack_b78 [24];
  undefined1 auStack_b60 [24];
  undefined1 auStack_b48 [24];
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  long lStack_b20;
  long lStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  ulong uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined1 auStack_a90 [24];
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined1 auStack_9e8 [24];
  undefined1 auStack_9d0 [24];
  undefined1 auStack_9b8 [24];
  undefined1 auStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_960;
  long lStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  ulong uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  ulong uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_870;
  long lStack_868;
  undefined8 uStack_860;
  ulong uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  ulong uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  undefined8 uStack_7c0;
  ulong uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_750;
  long lStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  ulong uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_348,0,0);
  cVar3 = *(char *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_360,0,0);
  if (cVar3 != *(char *)(param_2 + 0x10)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x11,auStack_378,0,0);
  cVar3 = *(char *)(param_1 + 0x11);
  func_0x000107c61428(param_2 + 0x11,auStack_390,0,0);
  if (cVar3 != *(char *)(param_2 + 0x11)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x14,auStack_3a8,0,0);
  iVar2 = *(int *)(param_1 + 0x14);
  func_0x000107c61428(param_2 + 0x14,auStack_3c0,0,0);
  if (iVar2 != *(int *)(param_2 + 0x14)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x18,auStack_3d8,0,0);
  uVar12 = *(ulong *)(param_1 + 0x18);
  func_0x000107c61428(param_2 + 0x18,auStack_3f0,0,0);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar15);
  uVar4 = uVar12;
  FUN_103680c14(uVar12,uVar15);
  func_0x000107c6142c(uVar12);
  func_0x000107c6142c(uVar15);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x20,auStack_408,0,0);
  cVar3 = *(char *)(param_1 + 0x20);
  func_0x000107c61428(param_2 + 0x20,auStack_420,0,0);
  if (cVar3 != *(char *)(param_2 + 0x20)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x28,auStack_4b8,0,0);
  func_0x000107c61428(param_2 + 0x28,auStack_4d0,0,0);
  lStack_828 = *(undefined8 *)(param_1 + 0x30);
  uStack_830 = *(undefined8 *)(param_1 + 0x28);
  lStack_818 = *(long *)(param_1 + 0x40);
  lStack_820 = *(long *)(param_1 + 0x38);
  uStack_808 = *(undefined8 *)(param_1 + 0x50);
  uStack_810 = *(undefined8 *)(param_1 + 0x48);
  uStack_7f8 = *(ulong *)(param_1 + 0x60);
  uStack_800 = *(undefined8 *)(param_1 + 0x58);
  uStack_458 = *(undefined8 *)(param_2 + 0x30);
  uStack_460 = *(undefined8 *)(param_2 + 0x28);
  uStack_448 = *(undefined8 *)(param_2 + 0x40);
  uStack_450 = *(undefined8 *)(param_2 + 0x38);
  uStack_438 = *(undefined8 *)(param_2 + 0x50);
  uStack_440 = *(undefined8 *)(param_2 + 0x48);
  uStack_428 = *(undefined8 *)(param_2 + 0x60);
  uStack_430 = *(undefined8 *)(param_2 + 0x58);
  uStack_858 = *(ulong *)(param_2 + 0x60);
  uStack_860 = *(undefined8 *)(param_2 + 0x58);
  lStack_868 = *(long *)(param_2 + 0x50);
  lStack_870 = *(long *)(param_2 + 0x48);
  uStack_878 = *(undefined8 *)(param_2 + 0x40);
  uStack_880 = *(undefined8 *)(param_2 + 0x38);
  uStack_888 = *(undefined8 *)(param_2 + 0x30);
  uStack_890 = *(undefined8 *)(param_2 + 0x28);
  uStack_7f0 = uStack_890;
  uStack_7e8 = uStack_888;
  uStack_7e0 = uStack_880;
  uStack_7d8 = uStack_878;
  lStack_7d0 = lStack_870;
  lStack_7c8 = lStack_868;
  uStack_7c0 = uStack_860;
  uStack_7b8 = uStack_858;
  uStack_4a0 = uStack_830;
  uStack_498 = lStack_828;
  lStack_490 = lStack_820;
  lStack_488 = lStack_818;
  uStack_480 = uStack_810;
  uStack_478 = uStack_808;
  uStack_470 = uStack_800;
  uStack_468 = uStack_7f8;
  if (uStack_7f8 >> 0x3c < 0xf) {
    if (0xe < uStack_858 >> 0x3c) {
LAB_10367f480:
      uStack_8d0 = uStack_830;
      uStack_8c8 = lStack_828;
      lStack_8c0 = lStack_820;
      lStack_8b8 = lStack_818;
      uStack_8b0 = uStack_810;
      uStack_8a8 = uStack_808;
      uStack_8a0 = uStack_800;
      uStack_898 = uStack_7f8;
      FUN_103685c84(&uStack_4a0,&uStack_1f0,0x112f83180,&UNK_10dbf5af8);
      FUN_103685c84(&uStack_460,&uStack_1f0,0x112f83180,&UNK_10dbf5af8);
      uVar15 = 0x112f83188;
      puVar7 = &UNK_10dbf5b00;
      goto LAB_10367f76c;
    }
    uStack_8c8 = *(undefined8 *)(param_2 + 0x30);
    uStack_8d0 = *(undefined8 *)(param_2 + 0x28);
    lStack_8b8 = *(undefined8 *)(param_2 + 0x40);
    lStack_8c0 = *(undefined8 *)(param_2 + 0x38);
    uStack_8a8 = *(undefined8 *)(param_2 + 0x50);
    uStack_8b0 = *(undefined8 *)(param_2 + 0x48);
    uStack_898 = *(undefined8 *)(param_2 + 0x60);
    uStack_8a0 = *(undefined8 *)(param_2 + 0x58);
    uStack_f8 = *(undefined8 *)(param_1 + 0x30);
    uStack_100 = *(undefined8 *)(param_1 + 0x28);
    uStack_e8 = *(undefined8 *)(param_1 + 0x40);
    uStack_f0 = *(undefined8 *)(param_1 + 0x38);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    uStack_e0 = *(undefined8 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x60);
    uStack_d0 = *(undefined8 *)(param_1 + 0x58);
    uStack_c0 = uStack_8d0;
    uStack_b8 = uStack_8c8;
    uStack_b0 = lStack_8c0;
    uStack_a8 = lStack_8b8;
    uStack_a0 = uStack_8b0;
    uStack_98 = uStack_8a8;
    uStack_90 = uStack_8a0;
    uStack_88 = uStack_898;
    FUN_103685c84(&uStack_4a0,&uStack_1f0,0x112f83180,&UNK_10dbf5af8);
    FUN_103685c84(&uStack_460,&uStack_1f0,0x112f83180,&UNK_10dbf5af8);
    puVar5 = &uStack_100;
    FUN_1036877dc(puVar5,&uStack_c0);
    func_0x000103685d18(&uStack_8d0,0x112f83180,&UNK_10dbf5af8);
    func_0x000103685d18(&uStack_830,0x112f83180,&UNK_10dbf5af8);
    if (((ulong)puVar5 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uStack_858 >> 0x3c < 0xf) goto LAB_10367f480;
    uStack_8c8 = *(undefined8 *)(param_1 + 0x30);
    uStack_8d0 = *(undefined8 *)(param_1 + 0x28);
    lStack_8b8 = *(undefined8 *)(param_1 + 0x40);
    lStack_8c0 = *(undefined8 *)(param_1 + 0x38);
    uStack_8a8 = *(undefined8 *)(param_1 + 0x50);
    uStack_8b0 = *(undefined8 *)(param_1 + 0x48);
    uStack_898 = *(undefined8 *)(param_1 + 0x60);
    uStack_8a0 = *(undefined8 *)(param_1 + 0x58);
    FUN_103685c84(&uStack_4a0,&uStack_1f0,0x112f83180,&UNK_10dbf5af8);
    FUN_103685c84(&uStack_460,&uStack_1f0,0x112f83180,&UNK_10dbf5af8);
    func_0x000103685d18(&uStack_8d0,0x112f83180,&UNK_10dbf5af8);
  }
  func_0x000107c61428(param_1 + 0x68,auStack_588,0,0);
  func_0x000107c61428(param_2 + 0x68,auStack_5a0,0,0);
  lStack_818 = *(long *)(param_1 + 0x80);
  lStack_820 = *(long *)(param_1 + 0x78);
  uStack_808 = *(undefined8 *)(param_1 + 0x90);
  uStack_810 = *(undefined8 *)(param_1 + 0x88);
  uStack_7f8 = *(ulong *)(param_1 + 0xa0);
  uStack_800 = *(undefined8 *)(param_1 + 0x98);
  uStack_7f0 = *(undefined8 *)(param_1 + 0xa8);
  lStack_828 = *(undefined8 *)(param_1 + 0x70);
  uStack_830 = *(undefined8 *)(param_1 + 0x68);
  uStack_518 = *(undefined8 *)(param_2 + 0x70);
  uStack_520 = *(undefined8 *)(param_2 + 0x68);
  uStack_508 = *(undefined8 *)(param_2 + 0x80);
  uStack_510 = *(undefined8 *)(param_2 + 0x78);
  uStack_4f8 = *(undefined8 *)(param_2 + 0x90);
  uStack_500 = *(undefined8 *)(param_2 + 0x88);
  uStack_4e8 = *(undefined8 *)(param_2 + 0xa0);
  uStack_4f0 = *(undefined8 *)(param_2 + 0x98);
  uStack_4e0 = *(undefined8 *)(param_2 + 0xa8);
  uStack_880 = *(undefined8 *)(param_2 + 0x70);
  uStack_888 = *(undefined8 *)(param_2 + 0x68);
  lStack_870 = *(long *)(param_2 + 0x80);
  uStack_878 = *(undefined8 *)(param_2 + 0x78);
  uStack_860 = *(undefined8 *)(param_2 + 0x90);
  lStack_868 = *(long *)(param_2 + 0x88);
  uStack_850 = *(undefined8 *)(param_2 + 0xa0);
  uStack_858 = *(ulong *)(param_2 + 0x98);
  uStack_848 = *(undefined8 *)(param_2 + 0xa8);
  uStack_7e8 = uStack_888;
  uStack_7e0 = uStack_880;
  uStack_7d8 = uStack_878;
  lStack_7d0 = lStack_870;
  lStack_7c8 = lStack_868;
  uStack_7c0 = uStack_860;
  uStack_7b8 = uStack_858;
  uStack_7b0 = uStack_850;
  uStack_7a8 = uStack_848;
  uStack_570 = uStack_830;
  uStack_568 = lStack_828;
  lStack_560 = lStack_820;
  lStack_558 = lStack_818;
  uStack_550 = uStack_810;
  uStack_548 = uStack_808;
  uStack_540 = uStack_800;
  uStack_538 = uStack_7f8;
  uStack_530 = uStack_7f0;
  if (lStack_818 == 1) {
    if (lStack_870 != 1) {
LAB_10367f6e8:
      uStack_8d0 = uStack_830;
      uStack_8c8 = lStack_828;
      lStack_8c0 = lStack_820;
      lStack_8b8 = lStack_818;
      uStack_8b0 = uStack_810;
      uStack_8a8 = uStack_808;
      uStack_8a0 = uStack_800;
      uStack_898 = uStack_7f8;
      uStack_890 = uStack_7f0;
      FUN_103685c84(&uStack_570,&uStack_1f0,0x112f83190,&UNK_10dbf5b08);
      FUN_103685c84(&uStack_520,&uStack_1f0,0x112f83190,&UNK_10dbf5b08);
      uVar15 = 0x112f83198;
      puVar7 = &UNK_10dbf5b10;
      goto LAB_10367f76c;
    }
    lStack_8b8 = *(undefined8 *)(param_1 + 0x80);
    lStack_8c0 = *(undefined8 *)(param_1 + 0x78);
    uStack_8a8 = *(undefined8 *)(param_1 + 0x90);
    uStack_8b0 = *(undefined8 *)(param_1 + 0x88);
    uStack_898 = *(undefined8 *)(param_1 + 0xa0);
    uStack_8a0 = *(undefined8 *)(param_1 + 0x98);
    uStack_890 = *(undefined8 *)(param_1 + 0xa8);
    uStack_8c8 = *(undefined8 *)(param_1 + 0x70);
    uStack_8d0 = *(undefined8 *)(param_1 + 0x68);
    FUN_103685c84(&uStack_570,&uStack_1f0,0x112f83190,&UNK_10dbf5b08);
    FUN_103685c84(&uStack_520,&uStack_1f0,0x112f83190,&UNK_10dbf5b08);
    func_0x000103685d18(&uStack_8d0,0x112f83190,&UNK_10dbf5b08);
  }
  else {
    if (lStack_870 == 1) goto LAB_10367f6e8;
    lStack_8b8 = *(undefined8 *)(param_2 + 0x80);
    lStack_8c0 = *(undefined8 *)(param_2 + 0x78);
    uStack_8a8 = *(undefined8 *)(param_2 + 0x90);
    uStack_8b0 = *(undefined8 *)(param_2 + 0x88);
    uStack_898 = *(undefined8 *)(param_2 + 0xa0);
    uStack_8a0 = *(undefined8 *)(param_2 + 0x98);
    uStack_890 = *(undefined8 *)(param_2 + 0xa8);
    uStack_8c8 = *(undefined8 *)(param_2 + 0x70);
    uStack_8d0 = *(undefined8 *)(param_2 + 0x68);
    uStack_198 = *(undefined8 *)(param_1 + 0x70);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x68);
    uStack_188 = *(undefined8 *)(param_1 + 0x80);
    uStack_190 = *(undefined8 *)(param_1 + 0x78);
    uStack_178 = *(undefined8 *)(param_1 + 0x90);
    uStack_180 = *(undefined8 *)(param_1 + 0x88);
    uStack_168 = *(undefined8 *)(param_1 + 0xa0);
    uStack_170 = *(undefined8 *)(param_1 + 0x98);
    uStack_160 = *(undefined8 *)(param_1 + 0xa8);
    uStack_150 = uStack_8d0;
    uStack_148 = uStack_8c8;
    uStack_140 = lStack_8c0;
    uStack_138 = lStack_8b8;
    uStack_130 = uStack_8b0;
    uStack_128 = uStack_8a8;
    uStack_120 = uStack_8a0;
    uStack_118 = uStack_898;
    uStack_110 = uStack_890;
    FUN_103685c84(&uStack_570,&uStack_1f0,0x112f83190,&UNK_10dbf5b08);
    FUN_103685c84(&uStack_520,&uStack_1f0,0x112f83190,&UNK_10dbf5b08);
    puVar5 = &uStack_1a0;
    FUN_103681834(puVar5,&uStack_150);
    func_0x000103685d18(&uStack_8d0,0x112f83190,&UNK_10dbf5b08);
    func_0x000103685d18(&uStack_830,0x112f83190,&UNK_10dbf5b08);
    if (((ulong)puVar5 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0xb0,auStack_5b8,0,0);
  cVar3 = *(char *)(param_1 + 0xb0);
  func_0x000107c61428(param_2 + 0xb0,auStack_5d0,0,0);
  if (cVar3 != *(char *)(param_2 + 0xb0)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0xb8,auStack_5e8,0,0);
  lVar13 = *(long *)(param_1 + 0xb8);
  func_0x000107c61428(param_2 + 0xb8,auStack_600,0,0);
  if (lVar13 != *(long *)(param_2 + 0xb8)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0xc0,auStack_618,0,0);
  iVar2 = *(int *)(param_1 + 0xc0);
  func_0x000107c61428(param_2 + 0xc0,auStack_630,0,0);
  if (iVar2 != *(int *)(param_2 + 0xc0)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0xc4,auStack_648,0,0);
  iVar2 = *(int *)(param_1 + 0xc4);
  func_0x000107c61428(param_2 + 0xc4,auStack_660,0,0);
  if (iVar2 != *(int *)(param_2 + 0xc4)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 200,auStack_678,0,0);
  cVar3 = *(char *)(param_1 + 200);
  func_0x000107c61428(param_2 + 200,auStack_690,0,0);
  if (cVar3 != *(char *)(param_2 + 200)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0xd0,auStack_6a8,0,0);
  func_0x000107c61428(param_2 + 0xd0,auStack_6c0,0,0);
  uVar4 = *(ulong *)(param_1 + 0xd0);
  uVar16 = *(ulong *)(param_1 + 0xd8);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  uVar12 = *(ulong *)(param_2 + 0xd0);
  uVar21 = *(ulong *)(param_2 + 0xd8);
  uVar18 = *(undefined8 *)(param_2 + 0xe0);
  if ((uVar4 & 0xff) == 2) {
    if ((uVar12 & 0xff) == 2) {
      FUN_103681b30(uVar4,uVar16,uVar15);
      FUN_103681b30(uVar12,uVar21,uVar18);
LAB_10367f9ec:
      func_0x000103681b4c(uVar4,uVar16,uVar15);
      puVar5 = (undefined8 *)(param_1 + 0xe8);
      func_0x000107c61428(puVar5,auStack_778,0,0);
      func_0x000107c61428((undefined8 *)(param_2 + 0xe8),auStack_790,0,0);
      lStack_818 = *(long *)(param_1 + 0x100);
      lStack_820 = *(long *)(param_1 + 0xf8);
      uStack_808 = *(undefined8 *)(param_1 + 0x110);
      uStack_810 = *(undefined8 *)(param_1 + 0x108);
      uStack_7f8 = *(ulong *)(param_1 + 0x120);
      uStack_800 = *(undefined8 *)(param_1 + 0x118);
      uStack_7e8 = *(undefined8 *)(param_1 + 0x130);
      uStack_7f0 = *(undefined8 *)(param_1 + 0x128);
      lStack_828 = *(undefined8 *)(param_1 + 0xf0);
      uStack_830 = *(undefined8 *)(param_1 + 0xe8);
      uStack_708 = *(undefined8 *)(param_2 + 0xf0);
      uStack_710 = *(undefined8 *)(param_2 + 0xe8);
      uStack_6e8 = *(undefined8 *)(param_2 + 0x110);
      uStack_6f0 = *(undefined8 *)(param_2 + 0x108);
      uStack_848 = *(undefined8 *)(param_2 + 0x120);
      uStack_850 = *(undefined8 *)(param_2 + 0x118);
      uStack_6d8 = *(undefined8 *)(param_2 + 0x120);
      uStack_6e0 = *(undefined8 *)(param_2 + 0x118);
      uStack_6c8 = *(undefined8 *)(param_2 + 0x130);
      uStack_6d0 = *(undefined8 *)(param_2 + 0x128);
      uStack_858 = *(ulong *)(param_2 + 0x110);
      uStack_860 = *(undefined8 *)(param_2 + 0x108);
      uStack_6f8 = *(undefined8 *)(param_2 + 0x100);
      uStack_700 = *(undefined8 *)(param_2 + 0xf8);
      uStack_878 = *(undefined8 *)(param_2 + 0xf0);
      uStack_880 = *(undefined8 *)(param_2 + 0xe8);
      lStack_868 = *(long *)(param_2 + 0x100);
      lStack_870 = *(long *)(param_2 + 0xf8);
      uStack_838 = *(undefined8 *)(param_2 + 0x130);
      uStack_840 = *(undefined8 *)(param_2 + 0x128);
      uStack_7e0 = uStack_880;
      uStack_7d8 = uStack_878;
      lStack_7d0 = lStack_870;
      lStack_7c8 = lStack_868;
      uStack_7c0 = uStack_860;
      uStack_7b8 = uStack_858;
      uStack_7b0 = uStack_850;
      uStack_7a8 = uStack_848;
      uStack_7a0 = uStack_840;
      uStack_798 = uStack_838;
      uStack_760 = uStack_830;
      uStack_758 = lStack_828;
      lStack_750 = lStack_820;
      lStack_748 = lStack_818;
      uStack_740 = uStack_810;
      uStack_738 = uStack_808;
      uStack_730 = uStack_800;
      uStack_728 = uStack_7f8;
      uStack_720 = uStack_7f0;
      uStack_718 = uStack_7e8;
      if (lStack_820 == 1) {
        if (lStack_870 != 1) {
LAB_10367fbb4:
          uStack_8d0 = uStack_830;
          uStack_8c8 = lStack_828;
          lStack_8c0 = lStack_820;
          lStack_8b8 = lStack_818;
          uStack_8b0 = uStack_810;
          uStack_8a8 = uStack_808;
          uStack_8a0 = uStack_800;
          uStack_898 = uStack_7f8;
          uStack_890 = uStack_7f0;
          uStack_888 = uStack_7e8;
          FUN_103685c84(&uStack_760,&uStack_1f0,0x112f831a0,&UNK_10dbf5b18);
          FUN_103685c84(&uStack_710,&uStack_1f0,0x112f831a0,&UNK_10dbf5b18);
          uVar15 = 0x112f831a8;
          puVar7 = &UNK_10dbf5b20;
          goto LAB_10367f76c;
        }
        uStack_8a8 = *(undefined8 *)(param_1 + 0x110);
        uStack_8b0 = *(undefined8 *)(param_1 + 0x108);
        uStack_898 = *(undefined8 *)(param_1 + 0x120);
        uStack_8a0 = *(undefined8 *)(param_1 + 0x118);
        uStack_888 = *(undefined8 *)(param_1 + 0x130);
        uStack_890 = *(undefined8 *)(param_1 + 0x128);
        uStack_8c8 = *(undefined8 *)(param_1 + 0xf0);
        uStack_8d0 = *puVar5;
        lStack_8b8 = *(undefined8 *)(param_1 + 0x100);
        lStack_8c0 = *(undefined8 *)(param_1 + 0xf8);
        FUN_103685c84(&uStack_760,&uStack_1f0,0x112f831a0,&UNK_10dbf5b18);
        FUN_103685c84(&uStack_710,&uStack_1f0,0x112f831a0,&UNK_10dbf5b18);
        func_0x000103685d18(&uStack_8d0,0x112f831a0,&UNK_10dbf5b18);
      }
      else {
        if (lStack_870 == 1) goto LAB_10367fbb4;
        uStack_8a8 = *(undefined8 *)(param_2 + 0x110);
        uStack_8b0 = *(undefined8 *)(param_2 + 0x108);
        uStack_898 = *(undefined8 *)(param_2 + 0x120);
        uStack_8a0 = *(undefined8 *)(param_2 + 0x118);
        uStack_888 = *(undefined8 *)(param_2 + 0x130);
        uStack_890 = *(undefined8 *)(param_2 + 0x128);
        uStack_8c8 = *(undefined8 *)(param_2 + 0xf0);
        uStack_8d0 = *(undefined8 *)(param_2 + 0xe8);
        lStack_8b8 = *(undefined8 *)(param_2 + 0x100);
        lStack_8c0 = *(undefined8 *)(param_2 + 0xf8);
        uStack_238 = *(undefined8 *)(param_1 + 0xf0);
        uStack_240 = *puVar5;
        uStack_228 = *(undefined8 *)(param_1 + 0x100);
        uStack_230 = *(undefined8 *)(param_1 + 0xf8);
        uStack_218 = *(undefined8 *)(param_1 + 0x110);
        uStack_220 = *(undefined8 *)(param_1 + 0x108);
        uStack_208 = *(undefined8 *)(param_1 + 0x120);
        uStack_210 = *(undefined8 *)(param_1 + 0x118);
        uStack_1f8 = *(undefined8 *)(param_1 + 0x130);
        uStack_200 = *(undefined8 *)(param_1 + 0x128);
        uStack_1f0 = uStack_8d0;
        uStack_1e8 = uStack_8c8;
        uStack_1e0 = lStack_8c0;
        uStack_1d8 = lStack_8b8;
        uStack_1d0 = uStack_8b0;
        uStack_1c8 = uStack_8a8;
        uStack_1c0 = uStack_8a0;
        uStack_1b8 = uStack_898;
        uStack_1b0 = uStack_890;
        uStack_1a8 = uStack_888;
        FUN_103685c84(&uStack_760,&uStack_290,0x112f831a0,&UNK_10dbf5b18);
        FUN_103685c84(&uStack_710,&uStack_290,0x112f831a0,&UNK_10dbf5b18);
        puVar5 = &uStack_240;
        func_0x000103681b68(puVar5,&uStack_1f0);
        func_0x000103685d18(&uStack_8d0,0x112f831a0,&UNK_10dbf5b18);
        func_0x000103685d18(&uStack_830,0x112f831a0,&UNK_10dbf5b18);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
      }
      puVar5 = (undefined8 *)(param_1 + 0x138);
      func_0x000107c61428(puVar5,auStack_988,0,0);
      puVar1 = (undefined8 *)(param_2 + 0x138);
      func_0x000107c61428(puVar1,auStack_9a0,0,0);
      uStack_948 = *(undefined8 *)(param_1 + 0x160);
      uStack_950 = *(undefined8 *)(param_1 + 0x158);
      uStack_938 = *(ulong *)(param_1 + 0x170);
      uStack_940 = *(undefined8 *)(param_1 + 0x168);
      uStack_968 = *(undefined8 *)(param_1 + 0x140);
      uStack_970 = *puVar5;
      lStack_958 = *(long *)(param_1 + 0x150);
      lStack_960 = *(long *)(param_1 + 0x148);
      uStack_918 = *(undefined8 *)(param_2 + 0x140);
      uStack_920 = *puVar1;
      lStack_868 = *(long *)(param_2 + 0x150);
      lStack_870 = *(long *)(param_2 + 0x148);
      uStack_848 = *(undefined8 *)(param_2 + 0x170);
      uStack_850 = *(undefined8 *)(param_2 + 0x168);
      uStack_8d8 = *(undefined8 *)(param_2 + 0x180);
      uStack_8e0 = *(undefined8 *)(param_2 + 0x178);
      uStack_8f8 = *(undefined8 *)(param_2 + 0x160);
      uStack_900 = *(undefined8 *)(param_2 + 0x158);
      uStack_8e8 = *(undefined8 *)(param_2 + 0x170);
      uStack_8f0 = *(undefined8 *)(param_2 + 0x168);
      uStack_908 = *(undefined8 *)(param_2 + 0x150);
      uStack_910 = *(undefined8 *)(param_2 + 0x148);
      uStack_858 = *(ulong *)(param_2 + 0x160);
      uStack_860 = *(undefined8 *)(param_2 + 0x158);
      uStack_878 = *(undefined8 *)(param_2 + 0x140);
      uStack_880 = *puVar1;
      uStack_928 = *(undefined8 *)(param_1 + 0x180);
      uStack_930 = *(undefined8 *)(param_1 + 0x178);
      uStack_838 = *(undefined8 *)(param_2 + 0x180);
      uStack_840 = *(undefined8 *)(param_2 + 0x178);
      uStack_830 = uStack_970;
      lStack_828 = uStack_968;
      lStack_820 = lStack_960;
      lStack_818 = lStack_958;
      uStack_810 = uStack_950;
      uStack_808 = uStack_948;
      uStack_800 = uStack_940;
      uStack_7f8 = uStack_938;
      uStack_7f0 = uStack_930;
      uStack_7e8 = uStack_928;
      uStack_7e0 = uStack_880;
      uStack_7d8 = uStack_878;
      lStack_7d0 = lStack_870;
      lStack_7c8 = lStack_868;
      uStack_7c0 = uStack_860;
      uStack_7b8 = uStack_858;
      uStack_7b0 = uStack_850;
      uStack_7a8 = uStack_848;
      uStack_7a0 = uStack_840;
      uStack_798 = uStack_838;
      if (lStack_958 == 1) {
        if (lStack_868 != 1) {
LAB_10367fe54:
          uStack_8d0 = uStack_970;
          uStack_8c8 = uStack_968;
          lStack_8c0 = lStack_960;
          lStack_8b8 = lStack_958;
          uStack_8b0 = uStack_950;
          uStack_8a8 = uStack_948;
          uStack_8a0 = uStack_940;
          uStack_898 = uStack_938;
          uStack_890 = uStack_930;
          uStack_888 = uStack_928;
          FUN_103685c84(&uStack_970,&uStack_290,0x112f831b0,&UNK_10dbf5b28);
          FUN_103685c84(&uStack_920,&uStack_290,0x112f831b0,&UNK_10dbf5b28);
          uVar15 = 0x112f831b8;
          puVar7 = &UNK_10dbf5b30;
          goto LAB_10367f76c;
        }
        uStack_8a8 = *(undefined8 *)(param_1 + 0x160);
        uStack_8b0 = *(undefined8 *)(param_1 + 0x158);
        uStack_898 = *(undefined8 *)(param_1 + 0x170);
        uStack_8a0 = *(undefined8 *)(param_1 + 0x168);
        uStack_888 = *(undefined8 *)(param_1 + 0x180);
        uStack_890 = *(undefined8 *)(param_1 + 0x178);
        uStack_8c8 = *(undefined8 *)(param_1 + 0x140);
        uStack_8d0 = *puVar5;
        lStack_8b8 = *(undefined8 *)(param_1 + 0x150);
        lStack_8c0 = *(undefined8 *)(param_1 + 0x148);
        FUN_103685c84(&uStack_970,&uStack_290,0x112f831b0,&UNK_10dbf5b28);
        FUN_103685c84(&uStack_920,&uStack_290,0x112f831b0,&UNK_10dbf5b28);
        func_0x000103685d18(&uStack_8d0,0x112f831b0,&UNK_10dbf5b28);
      }
      else {
        if (lStack_868 == 1) goto LAB_10367fe54;
        uStack_8a8 = *(undefined8 *)(param_2 + 0x160);
        uStack_8b0 = *(undefined8 *)(param_2 + 0x158);
        uStack_898 = *(undefined8 *)(param_2 + 0x170);
        uStack_8a0 = *(undefined8 *)(param_2 + 0x168);
        uStack_888 = *(undefined8 *)(param_2 + 0x180);
        uStack_890 = *(undefined8 *)(param_2 + 0x178);
        uStack_8c8 = *(undefined8 *)(param_2 + 0x140);
        uStack_8d0 = *puVar1;
        lStack_8b8 = *(undefined8 *)(param_2 + 0x150);
        lStack_8c0 = *(undefined8 *)(param_2 + 0x148);
        uStack_2d8 = *(undefined8 *)(param_1 + 0x140);
        uStack_2e0 = *puVar5;
        uStack_2c8 = *(undefined8 *)(param_1 + 0x150);
        uStack_2d0 = *(undefined8 *)(param_1 + 0x148);
        uStack_2b8 = *(undefined8 *)(param_1 + 0x160);
        uStack_2c0 = *(undefined8 *)(param_1 + 0x158);
        uStack_2a8 = *(undefined8 *)(param_1 + 0x170);
        uStack_2b0 = *(undefined8 *)(param_1 + 0x168);
        uStack_298 = *(undefined8 *)(param_1 + 0x180);
        uStack_2a0 = *(undefined8 *)(param_1 + 0x178);
        uStack_290 = uStack_8d0;
        uStack_288 = uStack_8c8;
        uStack_280 = lStack_8c0;
        uStack_278 = lStack_8b8;
        uStack_270 = uStack_8b0;
        uStack_268 = uStack_8a8;
        uStack_260 = uStack_8a0;
        uStack_258 = uStack_898;
        uStack_250 = uStack_890;
        uStack_248 = uStack_888;
        FUN_103685c84(&uStack_970,&uStack_330,0x112f831b0,&UNK_10dbf5b28);
        FUN_103685c84(&uStack_920,&uStack_330,0x112f831b0,&UNK_10dbf5b28);
        puVar5 = &uStack_2e0;
        func_0x000103681e7c(puVar5,&uStack_290);
        func_0x000103685d18(&uStack_8d0,0x112f831b0,&UNK_10dbf5b28);
        func_0x000103685d18(&uStack_830,0x112f831b0,&UNK_10dbf5b28);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c61428((char *)(param_1 + 0x188),auStack_9b8,0,0);
      cVar3 = *(char *)(param_1 + 0x188);
      func_0x000107c61428((char *)(param_2 + 0x188),auStack_9d0,0,0);
      if (cVar3 != *(char *)(param_2 + 0x188)) {
        return 0;
      }
      func_0x000107c61428(param_1 + 400,auStack_9e8,0,0);
      func_0x000107c61428(param_2 + 400,auStack_a00,0,0);
      uVar15 = *(undefined8 *)(param_1 + 400);
      uVar4 = *(ulong *)(param_1 + 0x198);
      uVar16 = *(ulong *)(param_1 + 0x1a0);
      uVar18 = *(undefined8 *)(param_2 + 400);
      uVar12 = *(ulong *)(param_2 + 0x198);
      uVar21 = *(ulong *)(param_2 + 0x1a0);
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar21 >> 0x3c) goto LAB_103680058;
        func_0x000100d578a0(uVar15,uVar4,uVar16);
        func_0x000100d578a0(uVar18,uVar12,uVar21);
        if ((float)uVar15 != (float)uVar18) {
          func_0x000100d578bc(uVar18,uVar12,uVar21);
          goto LAB_10368036c;
        }
        uVar6 = uVar4;
        func_0x000100e25fcc(uVar4,uVar16,uVar12,uVar21);
        func_0x000100d578bc(uVar18,uVar12,uVar21);
        if ((uVar6 & 1) == 0) goto LAB_10368036c;
      }
      else {
        if (uVar21 >> 0x3c < 0xf) {
LAB_103680058:
          func_0x000100d578a0(uVar15,uVar4,uVar16);
          func_0x000100d578a0(uVar18,uVar12,uVar21);
          func_0x000100d578bc(uVar15,uVar4,uVar16);
          uVar15 = uVar18;
          uVar4 = uVar12;
          uVar16 = uVar21;
          goto LAB_10368036c;
        }
        func_0x000100d578a0(uVar15,uVar4,uVar16);
        func_0x000100d578a0(uVar18,uVar12,uVar21);
      }
      func_0x000100d578bc(uVar15,uVar4,uVar16);
      func_0x000107c61428(param_1 + 0x1a8,auStack_a18,0,0);
      cVar3 = *(char *)(param_1 + 0x1a8);
      func_0x000107c61428(param_2 + 0x1a8,auStack_a30,0,0);
      if (cVar3 != *(char *)(param_2 + 0x1a8)) {
        return 0;
      }
      func_0x000107c61428(param_1 + 0x1ac,auStack_a48,0,0);
      iVar2 = *(int *)(param_1 + 0x1ac);
      func_0x000107c61428(param_2 + 0x1ac,auStack_a60,0,0);
      if (iVar2 != *(int *)(param_2 + 0x1ac)) {
        return 0;
      }
      func_0x000107c61428(param_1 + 0x1b0,auStack_a78,0,0);
      func_0x000107c61428(param_2 + 0x1b0,auStack_a90,0,0);
      uVar15 = *(undefined8 *)(param_1 + 0x1b0);
      uVar4 = *(ulong *)(param_1 + 0x1b8);
      uVar16 = *(ulong *)(param_1 + 0x1c0);
      uVar18 = *(undefined8 *)(param_2 + 0x1b0);
      uVar12 = *(ulong *)(param_2 + 0x1b8);
      uVar21 = *(ulong *)(param_2 + 0x1c0);
      if (uVar16 >> 0x3c < 0xf) {
        if (uVar21 >> 0x3c < 0xf) {
          func_0x000100d578a0(uVar15,uVar4,uVar16);
          func_0x000100d578a0(uVar18,uVar12,uVar21);
          if ((int)uVar15 != (int)uVar18) {
            func_0x000100d578bc(uVar18,uVar12,uVar21);
            goto LAB_10368036c;
          }
          uVar6 = uVar4;
          func_0x000100e25fcc(uVar4,uVar16,uVar12,uVar21);
          func_0x000100d578bc(uVar18,uVar12,uVar21);
          if ((uVar6 & 1) == 0) goto LAB_10368036c;
          goto LAB_1036801e8;
        }
      }
      else if (0xe < uVar21 >> 0x3c) {
        func_0x000100d578a0(uVar15,uVar4,uVar16);
        func_0x000100d578a0(uVar18,uVar12,uVar21);
LAB_1036801e8:
        func_0x000100d578bc(uVar15,uVar4,uVar16);
        puVar5 = (undefined8 *)(param_1 + 0x1c8);
        func_0x000107c61428(puVar5,auStack_b48,0,0);
        puVar1 = (undefined8 *)(param_2 + 0x1c8);
        func_0x000107c61428(puVar1,auStack_b60,0,0);
        uStack_b08 = *(undefined8 *)(param_1 + 0x1f0);
        uStack_b10 = *(undefined8 *)(param_1 + 0x1e8);
        uStack_af8 = *(ulong *)(param_1 + 0x200);
        uStack_b00 = *(undefined8 *)(param_1 + 0x1f8);
        uStack_b28 = *(undefined8 *)(param_1 + 0x1d0);
        uStack_b30 = *puVar5;
        lStack_b18 = *(long *)(param_1 + 0x1e0);
        lStack_b20 = *(long *)(param_1 + 0x1d8);
        uStack_ad8 = *(undefined8 *)(param_2 + 0x1d0);
        uStack_ae0 = *puVar1;
        lStack_868 = *(long *)(param_2 + 0x1e0);
        lStack_870 = *(long *)(param_2 + 0x1d8);
        uStack_848 = *(undefined8 *)(param_2 + 0x200);
        uStack_850 = *(undefined8 *)(param_2 + 0x1f8);
        uStack_a98 = *(undefined8 *)(param_2 + 0x210);
        uStack_aa0 = *(undefined8 *)(param_2 + 0x208);
        uStack_ab8 = *(undefined8 *)(param_2 + 0x1f0);
        uStack_ac0 = *(undefined8 *)(param_2 + 0x1e8);
        uStack_aa8 = *(undefined8 *)(param_2 + 0x200);
        uStack_ab0 = *(undefined8 *)(param_2 + 0x1f8);
        uStack_ac8 = *(undefined8 *)(param_2 + 0x1e0);
        uStack_ad0 = *(undefined8 *)(param_2 + 0x1d8);
        uStack_858 = *(ulong *)(param_2 + 0x1f0);
        uStack_860 = *(undefined8 *)(param_2 + 0x1e8);
        uStack_878 = *(undefined8 *)(param_2 + 0x1d0);
        uStack_880 = *puVar1;
        uStack_ae8 = *(undefined8 *)(param_1 + 0x210);
        uStack_af0 = *(undefined8 *)(param_1 + 0x208);
        uStack_838 = *(undefined8 *)(param_2 + 0x210);
        uStack_840 = *(undefined8 *)(param_2 + 0x208);
        uStack_830 = uStack_b30;
        lStack_828 = uStack_b28;
        lStack_820 = lStack_b20;
        lStack_818 = lStack_b18;
        uStack_810 = uStack_b10;
        uStack_808 = uStack_b08;
        uStack_800 = uStack_b00;
        uStack_7f8 = uStack_af8;
        uStack_7f0 = uStack_af0;
        uStack_7e8 = uStack_ae8;
        uStack_7e0 = uStack_880;
        uStack_7d8 = uStack_878;
        lStack_7d0 = lStack_870;
        lStack_7c8 = lStack_868;
        uStack_7c0 = uStack_860;
        uStack_7b8 = uStack_858;
        uStack_7b0 = uStack_850;
        uStack_7a8 = uStack_848;
        uStack_7a0 = uStack_840;
        uStack_798 = uStack_838;
        if (lStack_b18 == 0) {
          if (lStack_868 == 0) {
            uStack_8a8 = *(undefined8 *)(param_1 + 0x1f0);
            uStack_8b0 = *(undefined8 *)(param_1 + 0x1e8);
            uStack_898 = *(undefined8 *)(param_1 + 0x200);
            uStack_8a0 = *(undefined8 *)(param_1 + 0x1f8);
            uStack_888 = *(undefined8 *)(param_1 + 0x210);
            uStack_890 = *(undefined8 *)(param_1 + 0x208);
            uStack_8c8 = *(undefined8 *)(param_1 + 0x1d0);
            uStack_8d0 = *puVar5;
            lStack_8b8 = *(undefined8 *)(param_1 + 0x1e0);
            lStack_8c0 = *(undefined8 *)(param_1 + 0x1d8);
            FUN_103685c84(&uStack_b30,&uStack_330,0x112f831c0,&UNK_10dbf5b38);
            FUN_103685c84(&uStack_ae0,&uStack_330,0x112f831c0,&UNK_10dbf5b38);
            func_0x000103685d18(&uStack_8d0,0x112f831c0,&UNK_10dbf5b38);
            goto LAB_10368052c;
          }
        }
        else if (lStack_868 != 0) {
          uStack_ba8 = *(undefined8 *)(param_2 + 0x1f0);
          uStack_bb0 = *(undefined8 *)(param_2 + 0x1e8);
          uStack_b98 = *(undefined8 *)(param_2 + 0x200);
          uStack_ba0 = *(undefined8 *)(param_2 + 0x1f8);
          uStack_b88 = *(undefined8 *)(param_2 + 0x210);
          uStack_b90 = *(undefined8 *)(param_2 + 0x208);
          lStack_bc8 = *(undefined8 *)(param_2 + 0x1d0);
          uStack_bd0 = *puVar1;
          uStack_bb8 = *(undefined8 *)(param_2 + 0x1e0);
          uStack_bc0 = *(undefined8 *)(param_2 + 0x1d8);
          uStack_328 = *(undefined8 *)(param_1 + 0x1d0);
          uStack_330 = *puVar5;
          uStack_318 = *(undefined8 *)(param_1 + 0x1e0);
          uStack_320 = *(undefined8 *)(param_1 + 0x1d8);
          uStack_308 = *(undefined8 *)(param_1 + 0x1f0);
          uStack_310 = *(undefined8 *)(param_1 + 0x1e8);
          uStack_2f8 = *(undefined8 *)(param_1 + 0x200);
          uStack_300 = *(undefined8 *)(param_1 + 0x1f8);
          uStack_2e8 = *(undefined8 *)(param_1 + 0x210);
          uStack_2f0 = *(undefined8 *)(param_1 + 0x208);
          uStack_8d0 = uStack_bd0;
          uStack_8c8 = lStack_bc8;
          lStack_8c0 = uStack_bc0;
          lStack_8b8 = uStack_bb8;
          uStack_8b0 = uStack_bb0;
          uStack_8a8 = uStack_ba8;
          uStack_8a0 = uStack_ba0;
          uStack_898 = uStack_b98;
          uStack_890 = uStack_b90;
          uStack_888 = uStack_b88;
          FUN_103685c84(&uStack_b30,auStack_c20,0x112f831c0,&UNK_10dbf5b38);
          FUN_103685c84(&uStack_ae0,auStack_c20,0x112f831c0,&UNK_10dbf5b38);
          puVar5 = &uStack_330;
          func_0x000103682170(puVar5,&uStack_8d0);
          func_0x000103685d18(&uStack_bd0,0x112f831c0,&UNK_10dbf5b38);
          func_0x000103685d18(&uStack_830,0x112f831c0,&UNK_10dbf5b38);
          if (((ulong)puVar5 & 1) == 0) {
            return 0;
          }
LAB_10368052c:
          func_0x000107c61428(param_1 + 0x218,auStack_c20,0,0);
          func_0x000107c61428(param_2 + 0x218,auStack_b78,0,0);
          uVar24 = *(undefined8 *)(param_1 + 0x218);
          lVar13 = *(long *)(param_1 + 0x220);
          uVar23 = *(undefined8 *)(param_1 + 0x228);
          uVar22 = *(undefined8 *)(param_1 + 0x230);
          uVar20 = *(undefined8 *)(param_1 + 0x238);
          uVar15 = *(undefined8 *)(param_1 + 0x240);
          uVar19 = *(undefined8 *)(param_1 + 0x248);
          uVar14 = *(undefined8 *)(param_2 + 0x218);
          lVar17 = *(long *)(param_2 + 0x220);
          uVar11 = *(undefined8 *)(param_2 + 0x228);
          uVar9 = *(undefined8 *)(param_2 + 0x230);
          uVar18 = *(undefined8 *)(param_2 + 0x238);
          uVar10 = *(undefined8 *)(param_2 + 0x240);
          uVar8 = *(undefined8 *)(param_2 + 0x248);
          if (lVar13 == 0) {
            if (lVar17 == 0) {
              FUN_103682400(uVar24,0,uVar23,uVar22,uVar20,uVar15,uVar19);
              FUN_103682400(uVar14,0,uVar11,uVar9,uVar18,uVar10,uVar8);
              func_0x000103682458(uVar24,0,uVar23,uVar22,uVar20,uVar15,uVar19);
              return 1;
            }
          }
          else if (lVar17 != 0) {
            uStack_bd0 = uVar24;
            lStack_bc8 = lVar13;
            uStack_bc0 = uVar23;
            uStack_bb8 = uVar22;
            uStack_bb0 = uVar20;
            uStack_ba8 = uVar15;
            uStack_ba0 = uVar19;
            uStack_830 = uVar14;
            lStack_828 = lVar17;
            lStack_820 = uVar11;
            lStack_818 = uVar9;
            uStack_810 = uVar18;
            uStack_808 = uVar10;
            uStack_800 = uVar8;
            FUN_103682400(uVar24,lVar13,uVar23,uVar22,uVar20,uVar15,uVar19);
            FUN_103682400(uVar14,lVar17,uVar11,uVar9,uVar18,uVar10,uVar8);
            puVar5 = &uStack_bd0;
            FUN_10368926c(puVar5,&uStack_830);
            func_0x000103682458(uVar14,lVar17,uVar11,uVar9,uVar18,uVar10,uVar8);
            func_0x000103682458(uVar24,lVar13,uVar23,uVar22,uVar20,uVar15,uVar19);
            if (((ulong)puVar5 & 1) != 0) {
              return 1;
            }
            return 0;
          }
          FUN_103682400(uVar24,lVar13,uVar23,uVar22,uVar20,uVar15,uVar19);
          FUN_103682400(uVar14,lVar17,uVar11,uVar9,uVar18,uVar10,uVar8);
          func_0x000103682458(uVar24,lVar13,uVar23,uVar22,uVar20,uVar15,uVar19);
          func_0x000103682458(uVar14,lVar17,uVar11,uVar9,uVar18,uVar10,uVar8);
          return 0;
        }
        uStack_8d0 = uStack_b30;
        uStack_8c8 = uStack_b28;
        lStack_8c0 = lStack_b20;
        lStack_8b8 = lStack_b18;
        uStack_8b0 = uStack_b10;
        uStack_8a8 = uStack_b08;
        uStack_8a0 = uStack_b00;
        uStack_898 = uStack_af8;
        uStack_890 = uStack_af0;
        uStack_888 = uStack_ae8;
        FUN_103685c84(&uStack_b30,&uStack_330,0x112f831c0,&UNK_10dbf5b38);
        FUN_103685c84(&uStack_ae0,&uStack_330,0x112f831c0,&UNK_10dbf5b38);
        uVar15 = 0x112f831c8;
        puVar7 = &UNK_10dbf5b40;
LAB_10367f76c:
        func_0x000103685d18(&uStack_8d0,uVar15,puVar7);
        return 0;
      }
      func_0x000100d578a0(uVar15,uVar4,uVar16);
      func_0x000100d578a0(uVar18,uVar12,uVar21);
      func_0x000100d578bc(uVar15,uVar4,uVar16);
      uVar15 = uVar18;
      uVar4 = uVar12;
      uVar16 = uVar21;
LAB_10368036c:
      func_0x000100d578bc(uVar15,uVar4,uVar16);
      return 0;
    }
  }
  else if ((uVar12 & 0xff) != 2) {
    FUN_103681b30(uVar4,uVar16,uVar15);
    FUN_103681b30(uVar12,uVar21,uVar18);
    if ((((uint)uVar12 ^ (uint)uVar4) & 1) != 0) {
      func_0x000103681b4c(uVar12,uVar21,uVar18);
      goto LAB_10367fc7c;
    }
    uVar6 = uVar16;
    func_0x000100e25fcc(uVar16,uVar15,uVar21,uVar18);
    func_0x000103681b4c(uVar12,uVar21,uVar18);
    if ((uVar6 & 1) == 0) goto LAB_10367fc7c;
    goto LAB_10367f9ec;
  }
  FUN_103681b30(uVar4,uVar16,uVar15);
  FUN_103681b30(uVar12,uVar21,uVar18);
  func_0x000103681b4c(uVar4,uVar16,uVar15);
  uVar4 = uVar12;
  uVar16 = uVar21;
  uVar15 = uVar18;
LAB_10367fc7c:
  func_0x000103681b4c(uVar4,uVar16,uVar15);
  return 0;
}



/* Entry: 10368076c; end: 1036807cb;  */

void FUN_10368076c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f831d0 != -1) {
    func_0x000107c61568(0x112f831d0,FUN_10367d068);
  }
  uVar1 = uRam0000000112f831d8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1036807cc; end: 1036807ef;  */

undefined1  [16] FUN_1036807cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f157320;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 1036807f0; end: 10368081f;  */

undefined1  [16] FUN_1036807f0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103680820; end: 103680853;  */

void FUN_103680820(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103680854; end: 103680867;  */

undefined8 FUN_103680854(void)

{
  return 0x103680864;
}



/* Entry: 103680868; end: 10368089f;  */

void FUN_103680868(void)

{
  FUN_10367dba4();
  return;
}



/* Entry: 1036808a0; end: 1036808d7;  */

uint FUN_1036808a0(long param_1,long param_2)

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
  FUN_103685904();
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



/* Entry: 1036808d8; end: 10368097f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1036808d8(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_10367f1ec(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103680980; end: 103680a1f;  */

/* WARNING: Possible PIC construction at 0x0001036809cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036809dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036809d0) */
/* WARNING: Removing unreachable block (ram,0x0001036809e0) */

void FUN_103680980(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f83290 != -1) {
    func_0x000107c61568(0x112f83290,0x10367d020);
  }
  uVar5 = uRam000000011380b868;
  uVar4 = uRam000000011380b860;
  uVar3 = uRam000000011380b858;
  uVar2 = uRam000000011380b850;
  uVar1 = uRam000000011380b848;
  *param_1 = uRam000000011380b840;
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



/* Entry: 103680a20; end: 103680a33;  */

void FUN_103680a20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83718;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83718,&UNK_10dbf6990);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103680a34; end: 103680a67;  */

void FUN_103680a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103680a68; end: 103680b6b;  */

void FUN_103680a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103680b6c; end: 103680c13;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103680b6c(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_10367f1ec(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
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
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
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
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 103680c14; end: 103681087;  */

uint FUN_103680c14(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 == 0) || (param_1 == param_2)) {
      uVar13 = 1;
    }
    else {
      puVar11 = (undefined8 *)(param_1 + 0x40);
      puVar12 = (undefined8 *)(param_2 + 0x40);
      do {
        lVar10 = lVar10 + -1;
        uVar1 = puVar11[-4];
        uVar5 = puVar11[-3];
        uVar2 = puVar11[-2];
        uVar6 = puVar11[-1];
        uVar14 = *puVar11;
        uVar3 = puVar12[-4];
        uVar7 = puVar12[-3];
        uVar4 = puVar12[-2];
        uVar8 = puVar12[-1];
        uVar15 = *puVar12;
        if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
          if ((uVar4 & 0x3000000000000000) == 0x3000000000000000) goto LAB_103680eec;
          if ((uVar2 >> 0x3d & 1) == 0) {
            FUN_103681520(uVar1,uVar5,uVar2);
            func_0x00010006c00c(uVar6,uVar14);
            FUN_103681520(uVar3,uVar7,uVar4);
            func_0x00010006c00c(uVar8,uVar15);
            FUN_103681520(uVar1,uVar5,uVar2);
            FUN_103681520(uVar3,uVar7,uVar4);
            if ((uVar4 >> 0x3d & 1) != 0) goto LAB_103680f80;
            uVar9 = uVar1;
            func_0x000100e25fcc(uVar1,uVar5,uVar3,uVar7);
            func_0x000103681548(uVar3,uVar7,uVar4);
            func_0x000103681548(uVar1,uVar5,uVar2);
            if ((uVar9 & 1) != 0) goto LAB_103680e38;
LAB_103681048:
            func_0x000103681548(uVar3,uVar7,uVar4);
            func_0x00010006c090(uVar8,uVar15);
            func_0x000103681548(uVar1,uVar5,uVar2);
          }
          else {
            if ((uVar4 >> 0x3d & 1) != 0) {
              if ((int)uVar1 == (int)uVar3) {
                FUN_103681520(uVar1,uVar5,uVar2);
                func_0x00010006c00c(uVar6,uVar14);
                FUN_103681520(uVar3,uVar7,uVar4);
                func_0x00010006c00c(uVar8,uVar15);
                FUN_103681520(uVar1,uVar5,uVar2);
                FUN_103681520(uVar3,uVar7,uVar4);
                uVar9 = uVar5;
                func_0x000100e25fcc(uVar5,uVar2 & 0xdfffffffffffffff,uVar7,
                                    uVar4 & 0xdfffffffffffffff);
                func_0x000103681548(uVar3,uVar7,uVar4);
                if ((uVar9 & 1) != 0) goto LAB_103680e28;
              }
              else {
                FUN_103681520(uVar1,uVar5,uVar2);
                func_0x00010006c00c(uVar6,uVar14);
                FUN_103681520(uVar3,uVar7,uVar4);
                func_0x00010006c00c(uVar8,uVar15);
                FUN_103681520(uVar1,uVar5,uVar2);
                FUN_103681520(uVar3,uVar7,uVar4);
                func_0x000103681548(uVar3,uVar7,uVar4);
              }
              func_0x000103681548(uVar1,uVar5,uVar2);
              goto LAB_103681048;
            }
            FUN_103681520(uVar1,uVar5,uVar2);
            func_0x00010006c00c(uVar6,uVar14);
            FUN_103681520(uVar3,uVar7,uVar4);
            func_0x00010006c00c(uVar8,uVar15);
            FUN_103681520(uVar1,uVar5,uVar2);
            FUN_103681520(uVar3,uVar7,uVar4);
LAB_103680f80:
            func_0x000103681548(uVar3,uVar7,uVar4);
            func_0x000103681548(uVar1,uVar5,uVar2);
            func_0x000103681548(uVar3,uVar7,uVar4);
            func_0x00010006c090(uVar8,uVar15);
            func_0x000103681548(uVar1,uVar5,uVar2);
          }
          func_0x00010006c090(uVar6,uVar14);
          uVar13 = 0;
          break;
        }
        if ((uVar4 & 0x3000000000000000) != 0x3000000000000000) {
LAB_103680eec:
          FUN_103681520(uVar1,uVar5,uVar2);
          FUN_103681520(uVar3,uVar7,uVar4);
          func_0x000103681548(uVar1,uVar5,uVar2);
          func_0x000103681548(uVar3,uVar7,uVar4);
          uVar13 = 0;
          break;
        }
        FUN_103681520(uVar1,uVar5,uVar2);
        func_0x00010006c00c(uVar6,uVar14);
        FUN_103681520(uVar3,uVar7,uVar4);
        func_0x00010006c00c(uVar8,uVar15);
        FUN_103681520(uVar1,uVar5,uVar2);
        FUN_103681520(uVar3,uVar7,uVar4);
LAB_103680e28:
        func_0x000103681548(uVar1,uVar5,uVar2);
LAB_103680e38:
        uVar9 = uVar6;
        func_0x000100e25fcc(uVar6,uVar14,uVar8,uVar15);
        uVar13 = (uint)uVar9;
        func_0x000103681548(uVar3,uVar7,uVar4);
        func_0x00010006c090(uVar8,uVar15);
        func_0x000103681548(uVar1,uVar5,uVar2);
        func_0x00010006c090(uVar6,uVar14);
        if ((uVar9 & 1) == 0) break;
        puVar11 = puVar11 + 5;
        puVar12 = puVar12 + 5;
      } while (lVar10 != 0);
    }
  }
  else {
    uVar13 = 0;
  }
  return uVar13 & 1;
}



/* Entry: 103681088; end: 1036811c3;  */

undefined8 FUN_103681088(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1c0 [56];
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [56];
  undefined1 auStack_118 [56];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  float fStack_d4;
  ulong uStack_d0;
  long lStack_c8;
  int iStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  float fStack_9c;
  ulong uStack_98;
  long lStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_103678c08(param_2,auStack_188);
  FUN_103678c08(auStack_188,auStack_150);
  FUN_103678c08(param_1,auStack_1c0);
  FUN_103678c08(auStack_1c0,auStack_118);
  FUN_103678c08(auStack_118,&iStack_e0);
  FUN_103678c08(auStack_150,&iStack_a8);
  if (((((iStack_e0 == iStack_a8) && (iStack_dc == iStack_a4)) && (iStack_d8 == iStack_a0)) &&
      (fStack_d4 == fStack_9c)) &&
     ((((uStack_d0 == uStack_98 && (lStack_c8 == lStack_90)) ||
       (func_0x000107c605b8(uStack_d0,lStack_c8,uStack_98,lStack_90,0), (uStack_d0 & 1) != 0)) &&
      ((iStack_c0 == iStack_88 &&
       (func_0x000100e25fcc(uStack_b8,uStack_b0,uStack_80,uStack_78), (uStack_b8 & 1) != 0)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1036811c4; end: 1036812eb;  */

/* WARNING: Possible PIC construction at 0x00010368123c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103681240) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1036811c4(int *param_1,int *param_2)

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
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
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
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((float)param_1[3] == (float)param_2[3])) {
    pbVar12 = *(byte **)(param_1 + 4);
    pbVar15 = *(byte **)(param_1 + 6);
    pbVar16 = *(byte **)(param_2 + 4);
    pbVar13 = *(byte **)(param_2 + 6);
    if ((pbVar12 != pbVar16) || (pbVar15 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar13,0);
      return pbVar12;
    }
    if (param_1[8] == param_2[8]) {
      pbVar10 = *(byte **)(param_1 + 10);
      pbVar25 = *(byte **)(param_1 + 0xc);
      lVar24 = *(long *)(param_2 + 10);
      uVar17 = *(ulong *)(param_2 + 0xc);
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar17 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar17 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar17 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
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
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar17);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar17;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar13 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar13)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar13 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar13 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar13;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar13 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar13 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar13 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar13 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar14 + 0x20);
          lVar24 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar24;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar26;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar17 = *(ulong *)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
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
  return (byte *)0x0;
}



/* Entry: 1036812ec; end: 10368143b;  */

undefined8 FUN_1036812ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1f8 [64];
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [64];
  int iStack_f8;
  float fStack_f4;
  float fStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  int iStack_b8;
  float fStack_b4;
  float fStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000100d57888(param_2,auStack_1b8);
  func_0x000100d57888(auStack_1b8,auStack_178);
  func_0x000100d57888(param_1,auStack_1f8);
  func_0x000100d57888(auStack_1f8,auStack_138);
  func_0x000100d57888(auStack_138,&iStack_f8);
  func_0x000100d57888(auStack_178,&iStack_b8);
  if (((((iStack_f8 == iStack_b8) && (fStack_f4 == fStack_b4)) && (fStack_f0 == fStack_b0)) &&
      (((uStack_e8 == uStack_a8 && (lStack_e0 == lStack_a0)) ||
       (func_0x000107c605b8(uStack_e8,lStack_e0,uStack_a8,lStack_a0,0), (uStack_e8 & 1) != 0)))) &&
     ((((uStack_d8 == uStack_98 && (lStack_d0 == lStack_90)) ||
       (func_0x000107c605b8(uStack_d8,lStack_d0,uStack_98,lStack_90,0), (uStack_d8 & 1) != 0)) &&
      (func_0x000100e25fcc(uStack_c8,uStack_c0,uStack_88,uStack_80), (uStack_c8 & 1) != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10368143c; end: 10368151f;  */

/* WARNING: Possible PIC construction at 0x0001036814a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001036814a4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10368143c(int *param_1,int *param_2)

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
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
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
  
  if (((*param_1 == *param_2) && ((float)param_1[1] == (float)param_2[1])) &&
     ((float)param_1[2] == (float)param_2[2])) {
    pbVar12 = *(byte **)(param_1 + 4);
    pbVar15 = *(byte **)(param_1 + 6);
    pbVar16 = *(byte **)(param_2 + 4);
    pbVar17 = *(byte **)(param_2 + 6);
    if (*(byte **)(param_1 + 4) != *(byte **)(param_2 + 4) ||
        *(byte **)(param_1 + 6) != *(byte **)(param_2 + 6)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    uVar13 = *(ulong *)(param_1 + 8);
    if (((uVar13 == *(ulong *)(param_2 + 8)) && (*(long *)(param_1 + 10) == *(long *)(param_2 + 10))
        ) || (func_0x000107c605b8(uVar13,*(long *)(param_1 + 10),*(ulong *)(param_2 + 8),
                                  *(long *)(param_2 + 10),0), (uVar13 & 1) != 0)) {
      pbVar10 = *(byte **)(param_1 + 0xc);
      pbVar25 = *(byte **)(param_1 + 0xe);
      lVar24 = *(long *)(param_2 + 0xc);
      uVar13 = *(ulong *)(param_2 + 0xe);
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
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
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar14 + 0x20);
          lVar24 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar24;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar26;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
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
  return (byte *)0x0;
}



/* Entry: 103681520; end: 10368156f;  */

void FUN_103681520(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_103681570();
  }
  return;
}



/* Entry: 103681570; end: 103681583;  */

void FUN_103681570(undefined8 param_1,undefined8 param_2,ulong param_3,
                  code *UNRECOVERED_JUMPTABLE_00)

{
  if ((param_3 >> 0x3d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103681574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103681580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3 & 0xdfffffffffffffff);
  return;
}



/* Entry: 103681584; end: 1036815eb;  */

undefined8 FUN_103681584(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d5798c(param_2,param_1,&UNK_1106788b0);
  return param_2;
}



/* Entry: 1036815ec; end: 103681757;  */

undefined8 FUN_1036815ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1f8 [64];
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [64];
  float afStack_f8 [2];
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  int iStack_d8;
  int iStack_d4;
  byte bStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  float afStack_b8 [2];
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  int iStack_98;
  int iStack_94;
  byte bStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000100d57888(param_2,auStack_1b8);
  func_0x000100d57888(auStack_1b8,auStack_178);
  func_0x000100d57888(param_1,auStack_1f8);
  func_0x000100d57888(auStack_1f8,auStack_138);
  func_0x000100d57888(auStack_138,afStack_f8);
  func_0x000100d57888(auStack_178,afStack_b8);
  if ((((afStack_f8[0] == afStack_b8[0]) &&
       ((((uStack_f0 == uStack_b0 && (lStack_e8 == lStack_a8)) ||
         (func_0x000107c605b8(uStack_f0,lStack_e8,uStack_b0,lStack_a8,0), (uStack_f0 & 1) != 0)) &&
        ((lStack_e0 == lStack_a0 && (iStack_d8 == iStack_98)))))) && (iStack_d4 == iStack_94)) &&
     ((((bStack_d0 ^ bStack_90) & 1) == 0 &&
      (func_0x000100e25fcc(uStack_c8,uStack_c0,uStack_88,uStack_80), (uStack_c8 & 1) != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 103681758; end: 103681813;  */

/* WARNING: Possible PIC construction at 0x00010368179c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001036817a0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103681758(float *param_1,float *param_2)

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
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
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
  
  if (*param_1 == *param_2) {
    pbVar12 = *(byte **)(param_1 + 2);
    pbVar14 = *(byte **)(param_1 + 4);
    pbVar15 = *(byte **)(param_2 + 2);
    pbVar17 = *(byte **)(param_2 + 4);
    if (*(byte **)(param_1 + 2) != *(byte **)(param_2 + 2) ||
        *(byte **)(param_1 + 4) != *(byte **)(param_2 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    if ((((*(long *)(param_1 + 6) == *(long *)(param_2 + 6)) && (param_1[8] == param_2[8])) &&
        (param_1[9] == param_2[9])) &&
       (((*(byte *)(param_1 + 10) ^ *(byte *)(param_2 + 10)) & 1) == 0)) {
      pbVar10 = *(byte **)(param_1 + 0xc);
      pbVar25 = *(byte **)(param_1 + 0xe);
      lVar24 = *(long *)(param_2 + 0xc);
      uVar16 = *(ulong *)(param_2 + 0xe);
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar16 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
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
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar25;
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
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
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
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar24 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
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
            lVar24 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar24 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
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
          lVar24 = *(long *)(pbVar13 + 0x20);
          if (pbVar25 == (byte *)0x0) {
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
            pbVar14 = pbVar25;
            if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar13 + 0x20);
            lVar24 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar24;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar26;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar13 + 0x20);
          lVar24 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar24;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar26;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
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
  return (byte *)0x0;
}



/* Entry: 103681814; end: 103681833;  */

void FUN_103681814(void)

{
  func_0x000107c61168(&PTR_PTR_112f833f8);
  return;
}



/* Entry: 103681834; end: 103681b2f;  */

uint FUN_103681834(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar9 = param_1[1];
  uVar5 = *param_1;
  uVar15 = param_1[3];
  uVar13 = param_1[2];
  uVar10 = param_1[5];
  uVar6 = param_1[4];
  uVar3 = param_1[6];
  uVar11 = param_2[1];
  uVar7 = *param_2;
  uVar16 = param_2[3];
  uVar14 = param_2[2];
  uVar12 = param_2[5];
  uVar8 = param_2[4];
  uVar4 = param_2[6];
  uStack_f0 = uVar7;
  uStack_e8 = uVar11;
  uStack_e0 = uVar14;
  uStack_d8 = uVar16;
  uStack_d0 = uVar8;
  uStack_c8 = uVar12;
  uStack_c0 = uVar4;
  uStack_b0 = uVar5;
  uStack_a8 = uVar9;
  uStack_a0 = uVar13;
  uStack_98 = uVar15;
  uStack_90 = uVar6;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  if (uVar15 == 0) {
    if (uVar16 == 0) {
      FUN_103685c84(&uStack_b0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
      FUN_103685c84(&uStack_f0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
LAB_103681b04:
      FUN_103685ce0(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar3);
      uVar5 = param_1[7];
      func_0x000100e25fcc(uVar5,param_1[8],param_2[7],param_2[8]);
      uVar1 = (uint)uVar5;
      goto LAB_103681a9c;
    }
LAB_103681a14:
    FUN_103685c84(&uStack_b0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
    FUN_103685c84(&uStack_f0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
    FUN_103685ce0(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar3);
    uVar5 = uVar7;
    uVar9 = uVar11;
    uVar13 = uVar14;
    uVar15 = uVar16;
    uVar6 = uVar8;
    uVar10 = uVar12;
    uVar3 = uVar4;
  }
  else {
    if (uVar16 == 0) goto LAB_103681a14;
    if ((((((int)uVar5 == (int)uVar7) && ((uVar7 ^ uVar5) >> 0x20 == 0)) &&
         ((int)uVar9 == (int)uVar11)) &&
        (((float)(uVar9 >> 0x20) == (float)(uVar11 >> 0x20) &&
         (((uVar13 == uVar14 && (uVar15 == uVar16)) ||
          (uVar2 = uVar13, func_0x000107c605b8(uVar13,uVar15,uVar14,uVar16,0), (uVar2 & 1) != 0)))))
        ) && ((int)uVar6 == (int)uVar8)) {
      FUN_103685c84(&uStack_b0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
      FUN_103685c84(&uStack_f0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar3,uVar12,uVar4);
      FUN_103685ce0(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103681b04;
    }
    else {
      FUN_103685c84(&uStack_b0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
      FUN_103685c84(&uStack_f0,auStack_128,0x112f83168,&UNK_10dbf5ad8);
      FUN_103685ce0(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
    }
  }
  FUN_103685ce0(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar3);
  uVar1 = 0;
LAB_103681a9c:
  return uVar1 & 1;
}



/* Entry: 103681b30; end: 103681b67;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103681b30(char param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103681b68; end: 1036823ff;  */

uint FUN_103681b68(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_230 [64];
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uVar14 = param_1[1];
  uStack_170 = *param_1;
  lVar12 = param_1[3];
  lStack_160 = param_1[2];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  lStack_120 = param_2[2];
  uStack_148 = param_1[5];
  uStack_150 = param_1[4];
  uVar11 = param_1[7];
  uVar10 = param_1[6];
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_f8 = param_2[7];
  uStack_100 = param_2[6];
  uStack_168 = uVar14;
  lStack_158 = lVar12;
  uStack_140 = uVar10;
  uStack_138 = uVar11;
  if (lStack_160 == 0) {
    if (lStack_120 == 0) {
      FUN_103685c84(&uStack_b0,&uStack_1f0,0x112f83178,&UNK_10dbf5ae8);
      FUN_103685c84(&uStack_f0,&uStack_1f0,0x112f83178,&UNK_10dbf5ae8);
LAB_103681de4:
      func_0x000103685d18(&uStack_170,0x112f83178,&UNK_10dbf5ae8);
      uVar11 = param_1[8];
      func_0x000100e25fcc(uVar11,param_1[9],param_2[8],param_2[9]);
      uVar7 = (uint)uVar11;
      goto LAB_103681d80;
    }
LAB_103681d0c:
    uStack_1f0 = uStack_170;
    uStack_1e8 = uVar14;
    lStack_1e0 = lStack_160;
    lStack_1d8 = lVar12;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    uStack_1c0 = uVar10;
    uStack_1b8 = uVar11;
    uStack_1b0 = uStack_130;
    uStack_1a8 = uStack_128;
    lStack_1a0 = lStack_120;
    uStack_198 = uStack_118;
    uStack_190 = uStack_110;
    uStack_188 = uStack_108;
    uStack_180 = uStack_100;
    uStack_178 = uStack_f8;
    FUN_103685c84(&uStack_b0,auStack_230,0x112f83178,&UNK_10dbf5ae8);
    FUN_103685c84(&uStack_f0,auStack_230,0x112f83178,&UNK_10dbf5ae8);
    uVar11 = 0x112f83808;
    puVar9 = &UNK_10dbf6f08;
    puVar8 = &uStack_1f0;
  }
  else {
    if (lStack_120 == 0) goto LAB_103681d0c;
    iVar4 = (int)uStack_150;
    uStack_150._4_4_ = (int)((ulong)uStack_150 >> 0x20);
    iVar5 = uStack_150._4_4_;
    bVar6 = (byte)uStack_148;
    uStack_1e8 = param_2[1];
    uStack_1f0 = *param_2;
    lVar15 = param_2[3];
    lStack_1e0 = param_2[2];
    uStack_1c8 = param_2[5];
    uStack_1d0 = param_2[4];
    uVar16 = param_2[7];
    uVar13 = param_2[6];
    lStack_1d8 = lVar15;
    uStack_1c0 = uVar13;
    uStack_1b8 = uVar16;
    if ((float)uStack_170 == (float)uStack_1f0) {
      iVar1 = (int)uStack_1d0;
      uStack_1d0._4_4_ = (int)((ulong)uStack_1d0 >> 0x20);
      iVar2 = uStack_1d0._4_4_;
      bVar3 = (byte)uStack_1c8;
      if ((((uVar14 != uStack_1e8) || (lStack_1e0 != lStack_160)) &&
          (func_0x000107c605b8(uVar14,lStack_160,uStack_1e8,lStack_1e0,0), (uVar14 & 1) == 0)) ||
         (((lVar12 != lVar15 || (iVar4 != iVar1)) ||
          ((iVar5 != iVar2 || (((bVar3 ^ bVar6) & 1) != 0)))))) goto LAB_103681c9c;
      FUN_103685c84(&uStack_b0,auStack_230,0x112f83178,&UNK_10dbf5ae8);
      FUN_103685c84(&uStack_f0,auStack_230,0x112f83178,&UNK_10dbf5ae8);
      func_0x000100e25fcc(uVar10,uVar11,uVar13,uVar16);
      func_0x000103685d18(&uStack_1f0,0x112f83178,&UNK_10dbf5ae8);
      if ((uVar10 & 1) != 0) goto LAB_103681de4;
    }
    else {
LAB_103681c9c:
      FUN_103685c84(&uStack_b0,auStack_230,0x112f83178,&UNK_10dbf5ae8);
      FUN_103685c84(&uStack_f0,auStack_230,0x112f83178,&UNK_10dbf5ae8);
      func_0x000103685d18(&uStack_1f0,0x112f83178,&UNK_10dbf5ae8);
    }
    uVar11 = 0x112f83178;
    puVar9 = &UNK_10dbf5ae8;
    puVar8 = &uStack_170;
  }
  func_0x000103685d18(puVar8,uVar11,puVar9);
  uVar7 = 0;
LAB_103681d80:
  return uVar7 & 1;
}



/* Entry: 103682400; end: 1036824af;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103682400(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6);
  return;
}



/* Entry: 1036824b0; end: 10368266f;  */

void FUN_1036824b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f831e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5c58;
  func_0x000107c61520(&UNK_10dbf5c58,&UNK_1106781a8);
  puRam0000000112f831e8 = puVar1;
  return;
}



/* Entry: 103682670; end: 103682913;  */

uint FUN_103682670(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[1];
  uVar5 = *param_1;
  uVar3 = param_1[2];
  uVar8 = param_2[1];
  uVar6 = *param_2;
  uVar4 = param_2[2];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar4 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_103685c84(&uStack_80,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
      FUN_103685c84(&uStack_a0,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
LAB_103682710:
      func_0x000103681548(uVar5,uVar7,uVar3);
LAB_103682720:
      uVar5 = param_1[3];
      func_0x000100e25fcc(uVar5,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar5;
      goto LAB_1036828f0;
    }
LAB_103682738:
    FUN_103685c84(&uStack_80,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
    FUN_103685c84(&uStack_a0,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
    func_0x000103681548(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
LAB_1036828e8:
    func_0x000103681548(uVar5,uVar7,uVar3);
  }
  else {
    if ((uVar4 & 0x3000000000000000) == 0x3000000000000000) goto LAB_103682738;
    if ((uVar3 >> 0x3d & 1) != 0) {
      if (((uVar4 >> 0x3d & 1) == 0) || ((int)uVar5 != (int)uVar6)) goto LAB_103682894;
      FUN_103685c84(&uStack_80,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
      FUN_103685c84(&uStack_a0,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3 & 0xdfffffffffffffff,uVar8,uVar4 & 0xdfffffffffffffff);
      func_0x000103681548(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103682710;
      goto LAB_1036828e8;
    }
    if ((uVar4 >> 0x3d & 1) != 0) {
LAB_103682894:
      FUN_103685c84(&uStack_80,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
      FUN_103685c84(&uStack_a0,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
      func_0x000103681548(uVar6,uVar8,uVar4);
      goto LAB_1036828e8;
    }
    FUN_103685c84(&uStack_80,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
    FUN_103685c84(&uStack_a0,auStack_b8,0x112f837f0,&UNK_10dbf6d60);
    uVar2 = uVar5;
    func_0x000100e25fcc(uVar5,uVar7,uVar6,uVar8);
    func_0x000103681548(uVar6,uVar8,uVar4);
    func_0x000103681548(uVar5,uVar7,uVar3);
    if ((uVar2 & 1) != 0) goto LAB_103682720;
  }
  uVar1 = 0;
LAB_1036828f0:
  return uVar1 & 1;
}



/* Entry: 103682914; end: 103682a53;  */

void FUN_103682914(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf6240;
  func_0x000107c61520(&UNK_10dbf6240,&UNK_110678670);
  puRam0000000112f83258 = puVar1;
  return;
}



/* Entry: 103682a54; end: 103682a77;  */

void FUN_103682a54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103682a78();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103682a78; end: 103682ab7;  */

void FUN_103682a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5c30;
  func_0x000107c61520(&UNK_10dbf5c30,&UNK_1106781a8);
  puRam0000000112f832a0 = puVar1;
  return;
}



/* Entry: 103682ab8; end: 103682acb;  */

void FUN_103682ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036824b0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103682acc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103682acc; end: 103682b0b;  */

void FUN_103682acc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf5be8;
  func_0x000107c61520(&DAT_10dbf5be8,&UNK_1106781a8);
  puRam0000000112f832a8 = puVar1;
  return;
}



/* Entry: 103682b0c; end: 103682b0f;  */

void FUN_103682b0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5c98;
  func_0x000107c61520(&UNK_10dbf5c98,&UNK_1106781a8);
  puRam0000000112f832b0 = puVar1;
  return;
}



/* Entry: 103682b10; end: 103682b4f;  */

void FUN_103682b10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5c98;
  func_0x000107c61520(&UNK_10dbf5c98,&UNK_1106781a8);
  puRam0000000112f832b0 = puVar1;
  return;
}



/* Entry: 103682b50; end: 103682b73;  */

void FUN_103682b50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103682b74();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103682b74; end: 103682bb3;  */

void FUN_103682b74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5d08;
  func_0x000107c61520(&UNK_10dbf5d08,&UNK_110678228);
  puRam0000000112f832b8 = puVar1;
  return;
}



/* Entry: 103682bb4; end: 103682bc7;  */

void FUN_103682bb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1036824f0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103682bc8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103682bc8; end: 103682c07;  */

void FUN_103682bc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf5cc0;
  func_0x000107c61520(&DAT_10dbf5cc0,&UNK_110678228);
  puRam0000000112f832c0 = puVar1;
  return;
}



/* Entry: 103682c08; end: 103682c0b;  */

void FUN_103682c08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5d70;
  func_0x000107c61520(&UNK_10dbf5d70,&UNK_110678228);
  puRam0000000112f832c8 = puVar1;
  return;
}



/* Entry: 103682c0c; end: 103682c4b;  */

void FUN_103682c0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5d70;
  func_0x000107c61520(&UNK_10dbf5d70,&UNK_110678228);
  puRam0000000112f832c8 = puVar1;
  return;
}



/* Entry: 103682c4c; end: 103682c6f;  */

void FUN_103682c4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103682c70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103682c70; end: 103682caf;  */

void FUN_103682c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5de0;
  func_0x000107c61520(&UNK_10dbf5de0,&UNK_1106782c0);
  puRam0000000112f832d0 = puVar1;
  return;
}



/* Entry: 103682cb0; end: 103682cc3;  */

void FUN_103682cb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103682530)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103682cc4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103682cc4; end: 103682d03;  */

void FUN_103682cc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf5d98;
  func_0x000107c61520(&DAT_10dbf5d98,&UNK_1106782c0);
  puRam0000000112f832d8 = puVar1;
  return;
}



/* Entry: 103682d04; end: 103682d07;  */

void FUN_103682d04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5e48;
  func_0x000107c61520(&UNK_10dbf5e48,&UNK_1106782c0);
  puRam0000000112f832e0 = puVar1;
  return;
}



/* Entry: 103682d08; end: 103682d47;  */

void FUN_103682d08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5e48;
  func_0x000107c61520(&UNK_10dbf5e48,&UNK_1106782c0);
  puRam0000000112f832e0 = puVar1;
  return;
}



/* Entry: 103682d48; end: 103682d6b;  */

void FUN_103682d48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103682d6c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103682d6c; end: 103682dab;  */

void FUN_103682d6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5eb8;
  func_0x000107c61520(&UNK_10dbf5eb8,&UNK_1106783d0);
  puRam0000000112f832e8 = puVar1;
  return;
}



/* Entry: 103682dac; end: 103682dbf;  */

void FUN_103682dac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103682570)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103682dc0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103682dc0; end: 103682dff;  */

void FUN_103682dc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf5e70;
  func_0x000107c61520(&DAT_10dbf5e70,&UNK_1106783d0);
  puRam0000000112f832f0 = puVar1;
  return;
}



/* Entry: 103682e00; end: 103682e03;  */

void FUN_103682e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f832f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf5f20;
  func_0x000107c61520(&UNK_10dbf5f20,&UNK_1106783d0);
  puRam0000000112f832f8 = puVar1;
  return;
}


