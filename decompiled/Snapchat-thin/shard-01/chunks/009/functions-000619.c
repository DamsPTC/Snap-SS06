/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101668848; end: 1016688df;  */

void FUN_101668848(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10166889c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001016688b8;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_101668884;
code_r0x0001016688b8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_101668884:
    (*pcVar3)();
  }
  goto LAB_10166889c;
}



/* Entry: 1016688e0; end: 101668983;  */

void FUN_1016688e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101668984; end: 1016689c3;  */

void FUN_101668984(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1016689c4; end: 1016689f3;  */

undefined1  [16] FUN_1016689c4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1016689f4; end: 101668a27;  */

void FUN_1016689f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 101668a28; end: 101668a3b;  */

undefined1  [16] FUN_101668a28(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101668a38;
  return auVar1;
}



/* Entry: 101668a3c; end: 101668a63;  */

void FUN_101668a3c(void)

{
  FUN_101668848();
  return;
}



/* Entry: 101668a64; end: 101668a67;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101668a64(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101668a68; end: 101668a9f;  */

uint FUN_101668a68(long param_1,long param_2)

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
  func_0x0001016703dc();
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



/* Entry: 101668aa0; end: 101668ae7;  */

uint FUN_101668aa0(undefined8 *param_1)

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
  FUN_10166d0fc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101668ae8; end: 101668b87;  */

/* WARNING: Possible PIC construction at 0x000101668b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101668b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101668b38) */
/* WARNING: Removing unreachable block (ram,0x000101668b48) */

void FUN_101668ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd498 != -1) {
    func_0x000107c61568(0x112dbd498,FUN_101668800);
  }
  uVar5 = uRam0000000113802910;
  uVar4 = uRam0000000113802908;
  uVar3 = uRam0000000113802900;
  uVar2 = uRam00000001138028f8;
  uVar1 = uRam00000001138028f0;
  *param_1 = uRam00000001138028e8;
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



/* Entry: 101668b88; end: 101668bc3;  */

void FUN_101668b88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd620;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd620,&UNK_10d9776f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101668bc4; end: 101668cd7;  */

void FUN_101668bc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101668cd8; end: 101668d63;  */

uint FUN_101668cd8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10166d0fc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101668d64; end: 101668e4b;  */

/* WARNING: Removing unreachable block (ram,0x000101668e48) */

void FUN_101668d64(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x150);
LAB_101668e38:
        (*pcVar3)();
      }
      else if (lVar1 == 2) {
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x00010166cffc();
        (*pcVar3)(unaff_x20 + 0x10,&UNK_1103f08c8,lVar1,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar3 = *(code **)(param_3 + 0x150);
        goto LAB_101668e38;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101668e4c; end: 101668f3f;  */

void FUN_101668e4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x00010166cffc();
      (*pcVar4)(uVar3,2,&UNK_1103f08c8,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar2 = unaff_x20[4];
    uVar3 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar3 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar3 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101668f40; end: 101668f8b;  */

void FUN_101668f40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 101668f8c; end: 101668fbb;  */

undefined1  [16] FUN_101668f8c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 101668fbc; end: 101668fef;  */

void FUN_101668fbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 101668ff0; end: 101669003;  */

undefined1  [16] FUN_101668ff0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x101669000;
  return auVar1;
}



/* Entry: 101669004; end: 10166902b;  */

void FUN_101669004(void)

{
  FUN_101668d64();
  return;
}



/* Entry: 10166902c; end: 10166902f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10166902c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101669030; end: 101669067;  */

uint FUN_101669030(long param_1,long param_2)

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
  func_0x00010167039c();
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



/* Entry: 101669068; end: 1016690bf;  */

uint FUN_101669068(undefined8 *param_1)

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
  func_0x00010166d178(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1016690c0; end: 10166915f;  */

/* WARNING: Possible PIC construction at 0x00010166910c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166911c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101669110) */
/* WARNING: Removing unreachable block (ram,0x000101669120) */

void FUN_1016690c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd4a8 != -1) {
    func_0x000107c61568(0x112dbd4a8,0x101668d1c);
  }
  uVar5 = uRam0000000113802940;
  uVar4 = uRam0000000113802938;
  uVar3 = uRam0000000113802930;
  uVar2 = uRam0000000113802928;
  uVar1 = uRam0000000113802920;
  *param_1 = uRam0000000113802918;
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



/* Entry: 101669160; end: 10166919b;  */

void FUN_101669160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd610;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd610,&UNK_10d9776e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10166919c; end: 1016692bf;  */

void FUN_10166919c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_50 = unaff_x20[3];
  uStack_48 = unaff_x20[4];
  uStack_58 = unaff_x20[2];
  uStack_60 = unaff_x20[1];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016692c0; end: 10166935f;  */

uint FUN_1016692c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  func_0x00010166d178(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101669360; end: 101669477;  */

/* WARNING: Removing unreachable block (ram,0x000101669400) */
/* WARNING: Removing unreachable block (ram,0x000101669444) */

void FUN_101669360(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 3) {
      if ((lVar1 == 1) || (lVar1 == 2)) {
        FUN_101669478(param_1);
      }
    }
    else if (lVar1 == 3) {
      FUN_101669688();
    }
    else if (lVar1 == 4) {
      FUN_101669984();
    }
    else if (lVar1 == 5) {
      FUN_101669c84();
    }
  }
  return;
}



/* Entry: 101669478; end: 101669687;  */

/* WARNING: Removing unreachable block (ram,0x000101669618) */

void FUN_101669478(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  undefined1 auStack_1b0 [80];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
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
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_70 = 0;
  lStack_68 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar2 = lStack_68;
  uVar1 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uStack_128 = param_2[7];
      uStack_90 = param_2[6];
      uStack_118 = param_2[9];
      uStack_120 = param_2[8];
      uStack_148 = param_2[3];
      uStack_b0 = param_2[2];
      uStack_98 = param_2[5];
      uStack_a0 = param_2[4];
      uStack_b8 = param_2[1];
      uStack_c0 = *param_2;
      uStack_a8 = uStack_148;
      uStack_88 = uStack_128;
      uStack_80 = uStack_120;
      uStack_78 = uStack_118;
      if (((uStack_148 >> 1 == 0xffffffff) && (uStack_128 >> 0x21 == 0)) &&
         ((uStack_118 & 0x3000000000000000) == 0)) {
        uStack_158 = param_2[1];
        uStack_160 = *param_2;
        uStack_150 = param_2[2];
        uStack_138 = param_2[5];
        uStack_140 = param_2[4];
        uStack_130 = param_2[6];
        func_0x00010166cb60(&uStack_c0,auStack_1b0,0x112dbd428,&UNK_10d976b90);
        FUN_1016704dc(&uStack_160,0x112dbd428,&UNK_10d976b90);
      }
      else {
        uStack_158 = param_2[1];
        uStack_160 = *param_2;
        uStack_150 = param_2[2];
        uStack_138 = param_2[5];
        uStack_140 = param_2[4];
        uStack_130 = param_2[6];
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0x1fffffffe;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        func_0x000107c61434(lStack_68);
        func_0x00010166cb60(&uStack_c0,auStack_1b0,0x112dbd428,&UNK_10d976b90);
        FUN_1016704dc(&uStack_160,0x112dbd660,&UNK_10d977760);
        (**(code **)(param_4 + 8))(param_3,param_4);
        func_0x000107c6142c(lVar2);
      }
      uStack_138 = param_2[5];
      uStack_140 = param_2[4];
      uStack_128 = param_2[7];
      uStack_130 = param_2[6];
      uStack_118 = param_2[9];
      uStack_120 = param_2[8];
      uStack_158 = param_2[1];
      uStack_160 = *param_2;
      uStack_148 = param_2[3];
      uStack_150 = param_2[2];
      *param_2 = uVar1;
      param_2[1] = lVar2;
      param_2[3] = 0;
      param_2[7] = param_5;
      param_2[9] = 0;
      FUN_1016704dc(&uStack_160,0x112dbd428,&UNK_10d976b90);
    }
  }
  else {
    func_0x000107c6142c(lStack_68);
  }
  return;
}



/* Entry: 101669688; end: 101669983;  */

/* WARNING: Removing unreachable block (ram,0x0001016698a4) */

void FUN_101669688(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x21;
  ulong uVar15;
  code *pcVar16;
  undefined1 auStack_1b0 [80];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar15 = param_1[3];
  uVar11 = param_1[7];
  uVar10 = param_1[9];
  bVar4 = (uVar10 & 0x3000000000000000) == 0;
  bVar5 = uVar15 >> 1 == 0xffffffff;
  bVar6 = (uVar11 & 0xfffffffe00000000) == 0;
  puVar7 = param_1;
  if ((!bVar6 || (!bVar4 || !bVar5)) && ((uint)(uVar10 >> 0x3b) & 6 | (uint)(uVar11 >> 0x3f)) == 2)
  {
    uVar8 = *param_1;
    uVar2 = param_1[1];
    uVar12 = param_1[2];
    uVar1 = param_1[4];
    lVar3 = param_1[5];
    uVar13 = param_1[6];
    uVar14 = param_1[8];
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_110 = uVar8;
    uStack_108 = uVar2;
    uStack_100 = uVar12;
    uStack_f8 = uVar15;
    uStack_f0 = uVar1;
    lStack_e8 = lVar3;
    uStack_e0 = uVar13;
    uStack_d8 = uVar11;
    uStack_d0 = uVar14;
    uStack_c8 = uVar10;
    FUN_10166cc4c(&uStack_110,auStack_1b0);
    puVar7 = &uStack_160;
    FUN_1016704dc(puVar7,0x112dbd668,&UNK_10d977768);
    uStack_c0 = uVar8;
    uStack_b8 = uVar2;
    uStack_b0 = uVar12;
    uStack_a8 = uVar15;
    uStack_a0 = uVar1;
    lStack_98 = lVar3;
    uStack_90 = uVar13;
    uStack_88 = uVar11 & 0x7fffffffffffffff;
    uStack_80 = uVar14;
    uStack_78 = uVar10 & 0xcfffffffffffffff;
  }
  pcVar16 = *(code **)(param_4 + 0x198);
  FUN_10166e2e4();
  (*pcVar16)(&uStack_c0,&UNK_1103f09d8,puVar7,param_3,param_4);
  uVar15 = uStack_78;
  uVar14 = uStack_80;
  uVar11 = uStack_88;
  uVar13 = uStack_90;
  lVar3 = lStack_98;
  uVar12 = uStack_a0;
  uVar10 = uStack_a8;
  uVar2 = uStack_b0;
  uVar1 = uStack_b8;
  uVar8 = uStack_c0;
  if (unaff_x21 == 0) {
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    lStack_e8 = lStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    if (lStack_98 != 0) {
      if (bVar6 && (bVar4 && bVar5)) {
        lStack_138 = lStack_98;
        uStack_140 = uStack_a0;
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        func_0x00010166cc80(&uStack_160,auStack_1b0);
      }
      else {
        pcVar16 = *(code **)(param_4 + 8);
        lStack_138 = lStack_98;
        uStack_140 = uStack_a0;
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        func_0x00010166cc80(&uStack_160,auStack_1b0);
        (*pcVar16)(param_3,param_4);
      }
      FUN_1016704dc(&uStack_c0,0x112dbd668,&UNK_10d977768);
      lStack_138 = param_1[5];
      uStack_140 = param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      uStack_118 = param_1[9];
      uStack_120 = param_1[8];
      uStack_158 = param_1[1];
      uStack_160 = *param_1;
      uStack_148 = param_1[3];
      uStack_150 = param_1[2];
      *param_1 = uVar8;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar10 & 1;
      param_1[4] = uVar12;
      param_1[5] = lVar3;
      param_1[6] = uVar13;
      param_1[7] = uVar11 & 0x1ffffffff;
      param_1[8] = uVar14;
      param_1[9] = uVar15 & 0xcfffffffffffffff | 0x1000000000000000;
      uVar8 = 0x112dbd428;
      puVar9 = &UNK_10d976b90;
      puVar7 = &uStack_160;
      goto LAB_1016697f0;
    }
  }
  uVar8 = 0x112dbd668;
  puVar9 = &UNK_10d977768;
  puVar7 = &uStack_c0;
LAB_1016697f0:
  FUN_1016704dc(puVar7,uVar8,puVar9);
  return;
}



/* Entry: 101669984; end: 101669c83;  */

/* WARNING: Removing unreachable block (ram,0x000101669ba0) */

void FUN_101669984(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x21;
  ulong uVar15;
  code *pcVar16;
  undefined1 auStack_1b0 [80];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar15 = param_1[3];
  uVar11 = param_1[7];
  uVar10 = param_1[9];
  bVar4 = (uVar10 & 0x3000000000000000) == 0;
  bVar5 = uVar15 >> 1 == 0xffffffff;
  bVar6 = (uVar11 & 0xfffffffe00000000) == 0;
  puVar7 = param_1;
  if ((!bVar6 || (!bVar4 || !bVar5)) && ((uint)(uVar10 >> 0x3b) & 6 | (uint)(uVar11 >> 0x3f)) == 3)
  {
    uVar8 = *param_1;
    uVar2 = param_1[1];
    uVar12 = param_1[2];
    uVar1 = param_1[4];
    lVar3 = param_1[5];
    uVar13 = param_1[6];
    uVar14 = param_1[8];
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_110 = uVar8;
    uStack_108 = uVar2;
    uStack_100 = uVar12;
    uStack_f8 = uVar15;
    uStack_f0 = uVar1;
    lStack_e8 = lVar3;
    uStack_e0 = uVar13;
    uStack_d8 = uVar11;
    uStack_d0 = uVar14;
    uStack_c8 = uVar10;
    FUN_10166cc4c(&uStack_110,auStack_1b0);
    puVar7 = &uStack_160;
    FUN_1016704dc(puVar7,0x112dbd668,&UNK_10d977768);
    uStack_c0 = uVar8;
    uStack_b8 = uVar2;
    uStack_b0 = uVar12;
    uStack_a8 = uVar15;
    uStack_a0 = uVar1;
    lStack_98 = lVar3;
    uStack_90 = uVar13;
    uStack_88 = uVar11 & 0x7fffffffffffffff;
    uStack_80 = uVar14;
    uStack_78 = uVar10 & 0xcfffffffffffffff;
  }
  pcVar16 = *(code **)(param_4 + 0x198);
  FUN_10166e2e4();
  (*pcVar16)(&uStack_c0,&UNK_1103f09d8,puVar7,param_3,param_4);
  uVar15 = uStack_78;
  uVar14 = uStack_80;
  uVar11 = uStack_88;
  uVar13 = uStack_90;
  lVar3 = lStack_98;
  uVar12 = uStack_a0;
  uVar10 = uStack_a8;
  uVar2 = uStack_b0;
  uVar1 = uStack_b8;
  uVar8 = uStack_c0;
  if (unaff_x21 == 0) {
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    lStack_e8 = lStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    if (lStack_98 != 0) {
      if (bVar6 && (bVar4 && bVar5)) {
        lStack_138 = lStack_98;
        uStack_140 = uStack_a0;
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        func_0x00010166cc80(&uStack_160,auStack_1b0);
      }
      else {
        pcVar16 = *(code **)(param_4 + 8);
        lStack_138 = lStack_98;
        uStack_140 = uStack_a0;
        uStack_128 = uStack_88;
        uStack_130 = uStack_90;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        func_0x00010166cc80(&uStack_160,auStack_1b0);
        (*pcVar16)(param_3,param_4);
      }
      FUN_1016704dc(&uStack_c0,0x112dbd668,&UNK_10d977768);
      lStack_138 = param_1[5];
      uStack_140 = param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      uStack_118 = param_1[9];
      uStack_120 = param_1[8];
      uStack_158 = param_1[1];
      uStack_160 = *param_1;
      uStack_148 = param_1[3];
      uStack_150 = param_1[2];
      *param_1 = uVar8;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar10 & 1;
      param_1[4] = uVar12;
      param_1[5] = lVar3;
      param_1[6] = uVar13;
      param_1[7] = uVar11 & 0x1ffffffff | 0x8000000000000000;
      param_1[8] = uVar14;
      param_1[9] = uVar15 & 0xcfffffffffffffff | 0x1000000000000000;
      uVar8 = 0x112dbd428;
      puVar9 = &UNK_10d976b90;
      puVar7 = &uStack_160;
      goto LAB_101669aec;
    }
  }
  uVar8 = 0x112dbd668;
  puVar9 = &UNK_10d977768;
  puVar7 = &uStack_c0;
LAB_101669aec:
  FUN_1016704dc(puVar7,uVar8,puVar9);
  return;
}



/* Entry: 101669c84; end: 101669e47;  */

/* WARNING: Removing unreachable block (ram,0x000101669db8) */

void FUN_101669c84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x21;
  code *pcVar8;
  undefined1 auStack_100 [80];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uStack_58 = 0xf000000000000000;
  uStack_60 = 0;
  uVar7 = param_1[9];
  bVar3 = (uVar7 & 0x3000000000000000) == 0;
  bVar4 = (ulong)param_1[3] >> 1 == 0xffffffff;
  bVar5 = (param_1[7] & 0xfffffffe00000000) == 0;
  puVar6 = param_1;
  if ((!bVar5 || (!bVar3 || !bVar4)) &&
      ((uint)(uVar7 >> 0x3b) & 6 | (uint)((ulong)param_1[7] >> 0x3f)) == 4) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_a0 = param_1[2];
    uStack_a8 = param_1[1];
    uStack_90 = param_1[4];
    uStack_98 = param_1[3];
    uStack_80 = param_1[6];
    uStack_88 = param_1[5];
    uStack_70 = param_1[8];
    uStack_78 = param_1[7];
    uStack_b0 = uVar1;
    uStack_68 = uVar7;
    FUN_10166cc4c(&uStack_b0,auStack_100);
    puVar6 = (undefined8 *)0x0;
    FUN_10167051c(0,0xf000000000000000);
    uStack_60 = uVar1;
    uStack_58 = uVar2;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10166e410();
  (*pcVar8)(&uStack_60,&UNK_1103f0a70,puVar6,param_3,param_4);
  uVar7 = uStack_58;
  uVar1 = uStack_60;
  if ((unaff_x21 == 0) && (uStack_58 >> 0x3c < 0xf)) {
    if (bVar5 && (bVar3 && bVar4)) {
      func_0x00010006c00c();
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar8)(param_3,param_4);
    }
    FUN_10167051c(uStack_60,uStack_58);
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
    *param_1 = uVar1;
    param_1[1] = uVar7;
    param_1[3] = 0;
    param_1[7] = 0;
    param_1[9] = 0x2000000000000000;
    FUN_1016704dc(&uStack_b0,0x112dbd428,&UNK_10d976b90);
  }
  else {
    FUN_10167051c(uStack_60,uStack_58);
  }
  return;
}



/* Entry: 101669e48; end: 101669f23;  */

void FUN_101669e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(ulong *)(unaff_x20 + 0x18) >> 1 != 0xffffffff || *(ulong *)(unaff_x20 + 0x38) >> 0x21 != 0)
      || (*(ulong *)(unaff_x20 + 0x48) & 0x3000000000000000) != 0) {
    uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x48) >> 0x3b) & 6 |
            (uint)(*(ulong *)(unaff_x20 + 0x38) >> 0x3f);
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        FUN_101669f24();
      }
      else {
        FUN_101669f9c();
      }
    }
    else if (uVar1 == 2) {
      FUN_10166a014();
    }
    else if (uVar1 == 3) {
      FUN_10166a0e8();
    }
    else {
      FUN_10166a1bc();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      param_2,param_3);
  return;
}



/* Entry: 101669f24; end: 101669f9b;  */

void FUN_101669f24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if ((((ulong)param_1[3] >> 1 != 0xffffffff || (ulong)param_1[7] >> 0x21 != 0) ||
      (param_1[9] & 0x3000000000000000) != 0) &&
      (((uint)((ulong)param_1[9] >> 0x3b) & 6) == 0 && -1 < (long)param_1[7])) {
    (**(code **)(param_4 + 0x70))(*param_1,param_1[1],1,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101669f9c);
  (*pcVar1)();
}



/* Entry: 101669f9c; end: 10166a013;  */

void FUN_101669f9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if ((((ulong)param_1[3] >> 1 != 0xffffffff || (ulong)param_1[7] >> 0x21 != 0) ||
      (param_1[9] & 0x3000000000000000) != 0) &&
      ((uint)((ulong)param_1[9] >> 0x3b) & 6 | (uint)((ulong)param_1[7] >> 0x3f)) == 1) {
    (**(code **)(param_4 + 0x70))(*param_1,param_1[1],2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10166a014);
  (*pcVar1)();
}



/* Entry: 10166a014; end: 10166a0e7;  */

void FUN_10166a014(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_58 = param_1[7];
  uStack_48 = param_1[9];
  if ((((ulong)param_1[3] >> 1 != 0xffffffff || uStack_58 >> 0x21 != 0) ||
      (uStack_48 & 0x3000000000000000) != 0) &&
      ((uint)(uStack_48 >> 0x3b) & 6 | (uint)(uStack_58 >> 0x3f)) == 2) {
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_60 = param_1[6];
    uStack_50 = param_1[8];
    uStack_58 = uStack_58 & 0x7fffffffffffffff;
    uStack_48 = uStack_48 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10166e2e4();
    (*pcVar1)(&uStack_90,3,&UNK_1103f09d8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10166a0e8);
  (*pcVar1)();
}



/* Entry: 10166a0e8; end: 10166a1bb;  */

void FUN_10166a0e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_58 = param_1[7];
  uStack_48 = param_1[9];
  if ((((ulong)param_1[3] >> 1 != 0xffffffff || uStack_58 >> 0x21 != 0) ||
      (uStack_48 & 0x3000000000000000) != 0) &&
      ((uint)(uStack_48 >> 0x3b) & 6 | (uint)(uStack_58 >> 0x3f)) == 3) {
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_60 = param_1[6];
    uStack_50 = param_1[8];
    uStack_58 = uStack_58 & 0x7fffffffffffffff;
    uStack_48 = uStack_48 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10166e2e4();
    (*pcVar1)(&uStack_90,4,&UNK_1103f09d8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10166a1bc);
  (*pcVar1)();
}



/* Entry: 10166a1bc; end: 10166a26f;  */

void FUN_10166a1bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((((ulong)param_1[3] >> 1 != 0xffffffff || (ulong)param_1[7] >> 0x21 != 0) ||
      (param_1[9] & 0x3000000000000000) != 0) &&
      ((uint)((ulong)param_1[9] >> 0x3b) & 6 | (uint)((ulong)param_1[7] >> 0x3f)) == 4) {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10166e410();
    (*pcVar1)(&uStack_50,5,&UNK_1103f0a70,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10166a270);
  (*pcVar1)();
}



/* Entry: 10166a270; end: 10166a2b7;  */

void FUN_10166a270(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x1fffffffe;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xc000000000000000;
  return;
}



/* Entry: 10166a2b8; end: 10166a2e7;  */

undefined1  [16] FUN_10166a2b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 10166a2e8; end: 10166a31b;  */

void FUN_10166a2e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 10166a31c; end: 10166a32f;  */

undefined1  [16] FUN_10166a31c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x10166a32c;
  return auVar1;
}



/* Entry: 10166a330; end: 10166a343;  */

void FUN_10166a330(void)

{
  FUN_101669360();
  return;
}



/* Entry: 10166a344; end: 10166a383;  */

void FUN_10166a344(void)

{
  FUN_101669e48();
  return;
}



/* Entry: 10166a384; end: 10166a387;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10166a384(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10166a388; end: 10166a3bf;  */

uint FUN_10166a388(long param_1,long param_2)

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
  func_0x00010167035c();
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



/* Entry: 10166a3c0; end: 10166a417;  */

uint FUN_10166a3c0(undefined8 *param_1)

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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
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
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_10166d204(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10166a418; end: 10166a4b7;  */

/* WARNING: Possible PIC construction at 0x00010166a464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166a474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010166a468) */
/* WARNING: Removing unreachable block (ram,0x00010166a478) */

void FUN_10166a418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd4b8 != -1) {
    func_0x000107c61568(0x112dbd4b8,0x101669318);
  }
  uVar5 = uRam0000000113802970;
  uVar4 = uRam0000000113802968;
  uVar3 = uRam0000000113802960;
  uVar2 = uRam0000000113802958;
  uVar1 = uRam0000000113802950;
  *param_1 = uRam0000000113802948;
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



/* Entry: 10166a4b8; end: 10166a4f3;  */

void FUN_10166a4b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd600;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd600,&UNK_10d9776e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10166a4f4; end: 10166a60f;  */

void FUN_10166a4f4(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
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



/* Entry: 10166a610; end: 10166a6af;  */

uint FUN_10166a610(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
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
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10166d204(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10166a6b0; end: 10166a7f7;  */

/* WARNING: Removing unreachable block (ram,0x00010166a7f4) */

void FUN_10166a6b0(undefined8 param_1,long param_2,long param_3)

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
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x168);
          goto LAB_10166a718;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x00010166da78();
          (*pcVar3)(unaff_x20 + 0x10,&UNK_1103f0ca8,lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_10166a718;
        }
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x78);
          }
          else {
            if (lVar1 != 5) goto LAB_10166a728;
            pcVar3 = *(code **)(param_3 + 0x78);
          }
        }
        else if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x78);
        }
        else {
          if (lVar1 != 7) goto LAB_10166a728;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_10166a718:
        (*pcVar3)();
      }
LAB_10166a728:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10166a7f8; end: 10166a9a3;  */

void FUN_10166a7f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar8;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)lVar4;
      lVar7 = lVar4 >> 0x20;
      goto LAB_10166a858;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_10166a878;
  }
  else {
    if (uVar5 != 2) goto LAB_10166a878;
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)(lVar4 + 0x18);
LAB_10166a858:
    if (lVar6 == lVar7) goto LAB_10166a878;
  }
  (**(code **)(param_3 + 0x78))(lVar4,uVar1,1,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10166a878:
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar8 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x00010166da78();
    (*pcVar8)(&lStack_50,2,&UNK_1103f0ca8,lVar4,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[4] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
        (((int)unaff_x20[6] == 0 ||
         ((**(code **)(param_3 + 0x28))((int)unaff_x20[6],4,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(int *)((long)unaff_x20 + 0x34) == 0 ||
        ((**(code **)(param_3 + 0x28))(*(int *)((long)unaff_x20 + 0x34),5,param_2,param_3),
        unaff_x21 == 0)))) &&
      (((int)unaff_x20[7] == 0 ||
       ((**(code **)(param_3 + 0x28))((int)unaff_x20[7],6,param_2,param_3), unaff_x21 == 0)))) &&
     ((*(char *)((long)unaff_x20 + 0x3c) != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,7,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}



/* Entry: 10166a9a4; end: 10166a9f7;  */

void FUN_10166a9a4(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 10166a9f8; end: 10166aa27;  */

undefined1  [16] FUN_10166a9f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 10166aa28; end: 10166aa5b;  */

void FUN_10166aa28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 10166aa5c; end: 10166aa6f;  */

undefined1  [16] FUN_10166aa5c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x10166aa6c;
  return auVar1;
}



/* Entry: 10166aa70; end: 10166aa97;  */

void FUN_10166aa70(void)

{
  FUN_10166a6b0();
  return;
}



/* Entry: 10166aa98; end: 10166aa9b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10166aa98(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10166aa9c; end: 10166aad3;  */

uint FUN_10166aa9c(long param_1,long param_2)

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
  func_0x00010167031c();
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



/* Entry: 10166aad4; end: 10166ab2b;  */

uint FUN_10166aad4(undefined8 *param_1)

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
  func_0x00010166ccb4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10166ab2c; end: 10166abcb;  */

/* WARNING: Possible PIC construction at 0x00010166ab78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166ab88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010166ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010166ab8c) */

void FUN_10166ab2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd4c8 != -1) {
    func_0x000107c61568(0x112dbd4c8,0x10166a668);
  }
  uVar5 = uRam00000001138029a0;
  uVar4 = uRam0000000113802998;
  uVar3 = uRam0000000113802990;
  uVar2 = uRam0000000113802988;
  uVar1 = uRam0000000113802980;
  *param_1 = uRam0000000113802978;
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



/* Entry: 10166abcc; end: 10166ac07;  */

void FUN_10166abcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd5f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd5f0,&UNK_10d9776d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10166ac08; end: 10166ad1b;  */

void FUN_10166ac08(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10166ad1c; end: 10166adab;  */

uint FUN_10166ad1c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010166ccb4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10166adac; end: 10166adf7;  */

void FUN_10166adac(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10166adf8; end: 10166ae0b;  */

void FUN_10166adf8(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 10166ae0c; end: 10166ae3f;  */

void FUN_10166ae0c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 10166ae40; end: 10166ae6f;  */

undefined1  [16] FUN_10166ae40(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10166ae70; end: 10166aea3;  */

void FUN_10166ae70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10166aea4; end: 10166aeb7;  */

undefined8 FUN_10166aea4(void)

{
  return 0x10166aeb4;
}



/* Entry: 10166aeb8; end: 10166aeeb;  */

void FUN_10166aeb8(void)

{
  FUN_10166adac();
  return;
}



/* Entry: 10166aeec; end: 10166aeef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10166aeec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10166aef0; end: 10166af27;  */

uint FUN_10166aef0(long param_1,long param_2)

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
  FUN_1016702dc();
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



/* Entry: 10166af28; end: 10166af33;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10166af28(long *param_1)

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
  undefined8 *unaff_x20;
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
  
  lVar24 = *param_1;
  uVar16 = param_1[1];
  pbVar10 = (byte *)*unaff_x20;
  pbVar25 = (byte *)unaff_x20[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
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
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10166af34; end: 10166afd3;  */

/* WARNING: Possible PIC construction at 0x00010166af80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166af90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010166af84) */
/* WARNING: Removing unreachable block (ram,0x00010166af94) */

void FUN_10166af34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd4e0 != -1) {
    func_0x000107c61568(0x112dbd4e0,0x10166ad74);
  }
  uVar5 = uRam00000001138029d0;
  uVar4 = uRam00000001138029c8;
  uVar3 = uRam00000001138029c0;
  uVar2 = uRam00000001138029b8;
  uVar1 = uRam00000001138029b0;
  *param_1 = uRam00000001138029a8;
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



/* Entry: 10166afd4; end: 10166b00f;  */

void FUN_10166afd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd5e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd5e0,&UNK_10d9776d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10166b010; end: 10166b103;  */

void FUN_10166b010(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10166b104; end: 10166b117;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10166b104(undefined8 *param_1,long *param_2)

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
  
  pbVar10 = (byte *)*param_1;
  pbVar25 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
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
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10166b118; end: 10166c8cf;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10166b118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 uVar2;
  undefined8 ******ppppppuVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *******pppppppuVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong *puVar28;
  ulong *puVar29;
  undefined8 *******pppppppuVar30;
  ulong uVar31;
  undefined8 *******pppppppuVar32;
  ulong uVar33;
  byte abStack_428 [24];
  undefined8 *******pppppppuStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined1 uStack_317;
  undefined1 uStack_316;
  undefined1 uStack_315;
  undefined1 uStack_314;
  undefined1 uStack_313;
  undefined2 uStack_312;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
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
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 *******pppppppuStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 *******pppppppuStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 *******pppppppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *******pppppppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_1[2];
  if (lVar18 == param_2[2]) {
    if ((lVar18 != 0) && (param_1 != param_2)) {
      puVar29 = param_1 + 4;
      puVar28 = param_2 + 4;
      do {
        lVar18 = lVar18 + -1;
        uStack_308 = puVar29[3];
        uStack_310 = puVar29[2];
        uStack_258 = puVar29[5];
        uStack_260 = puVar29[4];
        uStack_2f8 = puVar29[5];
        uStack_300 = puVar29[4];
        uStack_248 = puVar29[7];
        uStack_250 = puVar29[6];
        uStack_2e8 = puVar29[7];
        uStack_2f0 = puVar29[6];
        uStack_238 = puVar29[9];
        uStack_240 = puVar29[8];
        uStack_2d8 = puVar29[9];
        uStack_2e0 = puVar29[8];
        uStack_228 = puVar29[0xb];
        uStack_230 = puVar29[10];
        uStack_278 = puVar29[1];
        uStack_280 = *puVar29;
        uStack_268 = puVar29[3];
        uStack_270 = puVar29[2];
        uVar33 = puVar29[1];
        pppppppuVar32 = (undefined8 *******)*puVar29;
        uStack_2b8 = puVar28[3];
        uStack_2c0 = puVar28[2];
        uStack_1f8 = puVar28[5];
        uStack_200 = puVar28[4];
        uStack_2a8 = puVar28[5];
        uStack_2b0 = puVar28[4];
        uStack_1e8 = puVar28[7];
        uStack_1f0 = puVar28[6];
        uStack_298 = puVar28[7];
        uStack_2a0 = puVar28[6];
        uStack_1d8 = puVar28[9];
        uStack_1e0 = puVar28[8];
        uStack_288 = puVar28[9];
        uStack_290 = puVar28[8];
        uStack_1c8 = puVar28[0xb];
        uStack_1d0 = puVar28[10];
        uStack_218 = puVar28[1];
        uStack_220 = *puVar28;
        uStack_208 = puVar28[3];
        uStack_210 = puVar28[2];
        uStack_2c8 = puVar28[1];
        uStack_2d0 = *puVar28;
        uStack_318 = (undefined1)uVar33;
        uStack_317 = (undefined1)(uVar33 >> 8);
        uStack_316 = (undefined1)(uVar33 >> 0x10);
        uStack_315 = (undefined1)(uVar33 >> 0x18);
        uStack_314 = (undefined1)(uVar33 >> 0x20);
        uStack_313 = (undefined1)(uVar33 >> 0x28);
        uStack_312 = (undefined2)(uVar33 >> 0x30);
        uStack_320._0_1_ = (byte)pppppppuVar32;
        uStack_320._1_1_ = (undefined1)((ulong)pppppppuVar32 >> 8);
        uStack_320._2_1_ = (undefined1)((ulong)pppppppuVar32 >> 0x10);
        uStack_320._3_1_ = (undefined1)((ulong)pppppppuVar32 >> 0x18);
        uStack_320._4_1_ = (undefined1)((ulong)pppppppuVar32 >> 0x20);
        uStack_320._5_1_ = (undefined1)((ulong)pppppppuVar32 >> 0x28);
        uStack_320._6_1_ = (undefined1)((ulong)pppppppuVar32 >> 0x30);
        uStack_320._7_1_ = (undefined1)((ulong)pppppppuVar32 >> 0x38);
        if (((uStack_308 >> 1 != 0xffffffff) || (uStack_2e8 >> 0x21 != 0)) ||
           ((uStack_2d8 & 0x3000000000000000) != 0)) {
          if (((uStack_2b8 >> 1 == 0xffffffff) && (uStack_298 >> 0x21 == 0)) &&
             ((uStack_288 & 0x3000000000000000) == 0)) goto LAB_10166bf20;
          uVar31 = puVar28[1];
          pppppppuVar30 = (undefined8 *******)*puVar28;
          uStack_3f8 = puVar28[3];
          uStack_400 = puVar28[2];
          uStack_3e8 = puVar28[5];
          uStack_3f0 = puVar28[4];
          uStack_3d8 = puVar28[7];
          uStack_3e0 = puVar28[6];
          uStack_3c8 = puVar28[9];
          uStack_3d0 = puVar28[8];
          uVar8 = (uint)(uStack_2d8 >> 0x3b) & 6 | (uint)(uStack_2e8 >> 0x3f);
          uVar16 = (uint)(uStack_3c8 >> 0x20);
          uVar21 = (uint)(uStack_3d8 >> 0x20);
          pppppppuStack_410 = pppppppuVar30;
          uStack_408 = uVar31;
          if (uVar8 < 2) {
            uVar16 = uVar16 >> 0x1b & 6 | uVar21 >> 0x1f;
            if (uVar8 != 0) {
              if (uVar16 == 1) {
                if ((pppppppuVar32 != pppppppuVar30) || (uVar33 != uVar31)) {
                  func_0x000107c605b8(pppppppuVar32,uVar33,pppppppuVar30,uVar31,0);
                  FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                  FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                  func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                  func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                  goto LAB_10166b6d0;
                }
LAB_10166b61c:
                FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
                goto LAB_10166b6e4;
              }
LAB_10166bfa0:
              FUN_101670530(&uStack_280,&pppppppuStack_3c0);
              FUN_101670530(&uStack_220,&pppppppuStack_3c0);
              func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
              goto LAB_10166c01c;
            }
            if (uVar16 != 0) goto LAB_10166bfa0;
            if ((pppppppuVar32 == pppppppuVar30) && (uVar33 == uVar31)) goto LAB_10166b61c;
            func_0x000107c605b8(pppppppuVar32,uVar33,pppppppuVar30,uVar31,0);
            FUN_101670530(&uStack_280,&pppppppuStack_3c0);
            FUN_101670530(&uStack_220,&pppppppuStack_3c0);
            param_2 = (undefined8 *)0x112dbd428;
            func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
            func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
            FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
            pppppppuVar30 = (undefined8 *******)&uStack_320;
            FUN_1016704dc(pppppppuVar30,0x112dbd428,&UNK_10d976b90);
            if (((ulong)pppppppuVar32 & 1) != 0) goto LAB_10166b6f8;
          }
          else {
            if (uVar8 == 2) {
              uStack_180 = uStack_2e8 & 0x7fffffffffffffff;
              uStack_170 = uStack_2d8 & 0xcfffffffffffffff;
              pppppppuStack_1b8 = pppppppuVar32;
              uStack_1b0 = uVar33;
              uStack_1a8 = uStack_310;
              uStack_1a0 = uStack_308;
              uStack_198 = uStack_300;
              uStack_190 = uStack_2f8;
              uStack_188 = uStack_2f0;
              uStack_178 = uStack_2e0;
              if ((uVar16 >> 0x1b & 6 | uVar21 >> 0x1f) != 2) goto LAB_10166bfa0;
              uStack_130 = uStack_3d8 & 0x7fffffffffffffff;
              uStack_120 = uStack_3c8 & 0xcfffffffffffffff;
              pppppppuStack_168 = pppppppuVar30;
              uStack_160 = uVar31;
              uStack_158 = uStack_400;
              uStack_150 = uStack_3f8;
              uStack_148 = uStack_3f0;
              uStack_140 = uStack_3e8;
              uStack_138 = uStack_3e0;
              uStack_128 = uStack_3d0;
              FUN_101670530(&uStack_280,&pppppppuStack_3c0);
              FUN_101670530(&uStack_220,&pppppppuStack_3c0);
              func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              pppppppuVar32 = &pppppppuStack_1b8;
              func_0x00010166ccb4(pppppppuVar32,&pppppppuStack_168);
LAB_10166b6d0:
              FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
              if (((ulong)pppppppuVar32 & 1) == 0) goto LAB_10166c01c;
LAB_10166b6e4:
              param_2 = (undefined8 *)0x112dbd428;
              pppppppuVar30 = (undefined8 *******)&uStack_320;
              FUN_1016704dc(pppppppuVar30,0x112dbd428,&UNK_10d976b90);
              goto LAB_10166b6f8;
            }
            if (uVar8 == 3) {
              uStack_e0 = uStack_2e8 & 0x7fffffffffffffff;
              uStack_d0 = uStack_2d8 & 0xcfffffffffffffff;
              pppppppuStack_118 = pppppppuVar32;
              uStack_110 = uVar33;
              uStack_108 = uStack_310;
              uStack_100 = uStack_308;
              uStack_f8 = uStack_300;
              uStack_f0 = uStack_2f8;
              uStack_e8 = uStack_2f0;
              uStack_d8 = uStack_2e0;
              if ((uVar16 >> 0x1b & 6 | uVar21 >> 0x1f) != 3) goto LAB_10166bfa0;
              uStack_90 = uStack_3d8 & 0x7fffffffffffffff;
              uStack_80 = uStack_3c8 & 0xcfffffffffffffff;
              pppppppuStack_c8 = pppppppuVar30;
              uStack_c0 = uVar31;
              uStack_b8 = uStack_400;
              uStack_b0 = uStack_3f8;
              uStack_a8 = uStack_3f0;
              uStack_a0 = uStack_3e8;
              uStack_98 = uStack_3e0;
              uStack_88 = uStack_3d0;
              FUN_101670530(&uStack_280,&pppppppuStack_3c0);
              FUN_101670530(&uStack_220,&pppppppuStack_3c0);
              func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              pppppppuVar32 = &pppppppuStack_118;
              func_0x00010166ccb4(pppppppuVar32,&pppppppuStack_c8);
              FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
              if (((ulong)pppppppuVar32 & 1) != 0) goto LAB_10166b6e4;
            }
            else {
              if ((uVar16 >> 0x1b & 6 | uVar21 >> 0x1f) == 4) {
                uVar8 = (uint)(uVar33 >> 0x20);
                uVar16 = uVar8 >> 0x1e;
                iVar17 = (int)pppppppuVar32;
                iVar22 = (int)((ulong)pppppppuVar32 >> 0x20);
                if (uVar33 >> 0x3e == 3) {
                  uVar23 = 0;
                  if ((((pppppppuVar32 != (undefined8 *******)0x0) || (uVar33 != 0xc000000000000000)
                       ) || (uVar31 >> 0x3e < 3)) ||
                     ((uVar23 = 0, pppppppuVar30 != (undefined8 *******)0x0 ||
                      (uVar31 != 0xc000000000000000)))) goto LAB_10166baa4;
LAB_10166bc00:
                  FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                  FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                  func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                  func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                  FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
                }
                else {
                  if (uVar8 >> 0x1e < 2) {
                    if (uVar16 == 0) {
                      uVar23 = uVar33 >> 0x30 & 0xff;
                    }
                    else {
                      if (SBORROW4(iVar22,iVar17)) {
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0d4);
                        (*pcVar9)();
                      }
                      uVar23 = (ulong)(iVar22 - iVar17);
                    }
                  }
                  else if (uVar16 == 2) {
                    uVar23 = (long)pppppppuVar32[3] - (long)pppppppuVar32[2];
                    if (SBORROW8((long)pppppppuVar32[3],(long)pppppppuVar32[2])) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0d8);
                      (*pcVar9)();
                    }
                  }
                  else {
                    uVar23 = 0;
                  }
LAB_10166baa4:
                  uVar8 = (uint)(uVar31 >> 0x20);
                  uVar21 = uVar8 >> 0x1e;
                  if (uVar8 >> 0x1e < 2) {
                    if (uVar21 == 0) {
                      uVar25 = uVar31 >> 0x30 & 0xff;
                    }
                    else {
                      iVar22 = (int)((ulong)pppppppuVar30 >> 0x20);
                      if (SBORROW4(iVar22,(int)pppppppuVar30)) {
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0d0);
                        (*pcVar9)();
                      }
                      uVar25 = (ulong)(iVar22 - (int)pppppppuVar30);
                    }
                  }
                  else {
                    if (uVar21 != 2) {
                      if (uVar23 != 0) goto LAB_10166bfa0;
                      goto LAB_10166bc00;
                    }
                    uVar25 = (long)pppppppuVar30[3] - (long)pppppppuVar30[2];
                    if (SBORROW8((long)pppppppuVar30[3],(long)pppppppuVar30[2])) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0cc);
                      (*pcVar9)();
                    }
                  }
                  if (uVar23 != uVar25) goto LAB_10166bfa0;
                  if ((long)uVar23 < 1) goto LAB_10166bc00;
                  if (uVar16 < 2) {
                    if (uVar16 == 0) {
                      abStack_428[0] = (byte)uStack_320;
                      abStack_428[1] = uStack_320._1_1_;
                      abStack_428[2] = uStack_320._2_1_;
                      abStack_428[3] = uStack_320._3_1_;
                      abStack_428[4] = uStack_320._4_1_;
                      abStack_428[5] = uStack_320._5_1_;
                      abStack_428[6] = uStack_320._6_1_;
                      abStack_428[7] = uStack_320._7_1_;
                      abStack_428[8] = uStack_318;
                      abStack_428[9] = uStack_317;
                      abStack_428[10] = uStack_316;
                      abStack_428[0xb] = uStack_315;
                      abStack_428[0xc] = uStack_314;
                      abStack_428[0xd] = uStack_313;
                      FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                      FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                      func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90)
                      ;
                      func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90)
                      ;
                      FUN_100e25bdc(&pppppppuStack_3c0,abStack_428,
                                    abStack_428 + (uVar33 >> 0x30 & 0xff),pppppppuVar30,uVar31);
                    }
                    else {
                      lVar26 = (long)iVar17;
                      puVar11 = (ulong *)(((long)pppppppuVar32 >> 0x20) - lVar26);
                      if ((long)pppppppuVar32 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0dc);
                        (*pcVar9)();
                      }
                      FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                      FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                      func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90)
                      ;
                      puVar12 = &uStack_220;
                      func_0x00010166cb60(puVar12,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                      func_0x000107c5ec30();
                      if (puVar12 == (ulong *)0x0) {
                        func_0x000107c5ec38();
                        lVar26 = 0;
                        lVar15 = 0;
                      }
                      else {
                        puVar13 = puVar12;
                        func_0x000107c5ec3c();
                        if (SBORROW8(lVar26,(long)puVar13)) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0e8);
                          (*pcVar9)();
                        }
                        lVar26 = (lVar26 - (long)puVar13) + (long)puVar12;
                        func_0x000107c5ec38();
                        if (lVar26 == 0) {
                          lVar15 = 0;
                        }
                        else {
                          if ((long)puVar11 <= (long)puVar13) {
                            puVar13 = puVar11;
                          }
                          lVar15 = (long)puVar13 + lVar26;
                        }
                      }
                      FUN_100e25bdc(&pppppppuStack_3c0,lVar26,lVar15,pppppppuVar30,uVar31);
                    }
                    FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
                  }
                  else {
                    if (uVar16 == 2) {
                      ppppppuVar1 = pppppppuVar32[2];
                      ppppppuVar3 = pppppppuVar32[3];
                      FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                      FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                      func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90)
                      ;
                      puVar11 = &uStack_220;
                      func_0x00010166cb60(puVar11,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
                      func_0x000107c5ec30();
                      if (puVar11 == (ulong *)0x0) {
                        lVar26 = 0;
                      }
                      else {
                        puVar12 = puVar11;
                        func_0x000107c5ec3c();
                        if (SBORROW8((long)ppppppuVar1,(long)puVar12)) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0e4);
                          (*pcVar9)();
                        }
                        lVar26 = ((long)ppppppuVar1 - (long)puVar12) + (long)puVar11;
                        puVar11 = puVar12;
                      }
                      puVar12 = (ulong *)((long)ppppppuVar3 - (long)ppppppuVar1);
                      if (SBORROW8((long)ppppppuVar3,(long)ppppppuVar1)) {
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0e0);
                        (*pcVar9)();
                      }
                      func_0x000107c5ec38();
                      if (lVar26 == 0) {
                        lVar15 = 0;
                      }
                      else {
                        if ((long)puVar12 <= (long)puVar11) {
                          puVar11 = puVar12;
                        }
                        lVar15 = (long)puVar11 + lVar26;
                      }
                      FUN_100e25bdc(&pppppppuStack_3c0,lVar26,lVar15,pppppppuVar30,uVar31);
                    }
                    else {
                      abStack_428[8] = 0;
                      abStack_428[9] = 0;
                      abStack_428[10] = 0;
                      abStack_428[0xb] = 0;
                      abStack_428[0xc] = 0;
                      abStack_428[0xd] = 0;
                      abStack_428[0] = 0;
                      abStack_428[1] = 0;
                      abStack_428[2] = 0;
                      abStack_428[3] = 0;
                      abStack_428[4] = 0;
                      abStack_428[5] = 0;
                      abStack_428[6] = 0;
                      abStack_428[7] = 0;
                      FUN_101670530(&uStack_280,&pppppppuStack_3c0);
                      FUN_101670530(&uStack_220,&pppppppuStack_3c0);
                      func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90)
                      ;
                      func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90)
                      ;
                      FUN_100e25bdc(&pppppppuStack_3c0,abStack_428,abStack_428,pppppppuVar30,uVar31)
                      ;
                    }
                    FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
                  }
                  if (((ulong)pppppppuStack_3c0 & 1) == 0) goto LAB_10166c01c;
                }
                pppppppuVar30 = (undefined8 *******)&uStack_320;
                goto LAB_10166b294;
              }
              FUN_101670530(&uStack_280,&pppppppuStack_3c0);
              FUN_101670530(&uStack_220,&pppppppuStack_3c0);
              func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
              FUN_1016704dc(&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
            }
LAB_10166c01c:
            param_2 = (undefined8 *)0x112dbd428;
            FUN_1016704dc(&uStack_320,0x112dbd428,&UNK_10d976b90);
          }
LAB_10166c020:
          func_0x000101670564(&uStack_220);
          func_0x000101670564(&uStack_280);
          puVar14 = (undefined8 *)0x0;
          goto LAB_10166bee8;
        }
        if (((uStack_2b8 >> 1 != 0xffffffff) || (uStack_298 >> 0x21 != 0)) ||
           ((uStack_288 & 0x3000000000000000) != 0)) {
LAB_10166bf20:
          pppppppuStack_3c0 = pppppppuVar32;
          uStack_3b8 = uVar33;
          uStack_3b0 = uStack_310;
          uStack_3a8 = uStack_308;
          uStack_3a0 = uStack_300;
          uStack_398 = uStack_2f8;
          uStack_390 = uStack_2f0;
          uStack_388 = uStack_2e8;
          uStack_380 = uStack_2e0;
          uStack_378 = uStack_2d8;
          uStack_370 = uStack_2d0;
          uStack_368 = uStack_2c8;
          uStack_360 = uStack_2c0;
          uStack_358 = uStack_2b8;
          uStack_350 = uStack_2b0;
          uStack_348 = uStack_2a8;
          uStack_340 = uStack_2a0;
          uStack_338 = uStack_298;
          uStack_330 = uStack_290;
          uStack_328 = uStack_288;
          func_0x00010166cb60(&uStack_280,&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
          func_0x00010166cb60(&uStack_220,&pppppppuStack_410,0x112dbd428,&UNK_10d976b90);
          param_2 = (undefined8 *)0x112dbd660;
          FUN_1016704dc(&pppppppuStack_3c0,0x112dbd660,&UNK_10d977760);
          puVar14 = (undefined8 *)0x0;
          goto LAB_10166bee8;
        }
        uStack_3e8 = puVar29[5];
        uStack_3f0 = puVar29[4];
        uStack_3d8 = puVar29[7];
        uStack_3e0 = puVar29[6];
        uStack_3c8 = puVar29[9];
        uStack_3d0 = puVar29[8];
        uStack_408 = puVar29[1];
        pppppppuStack_410 = (undefined8 *******)*puVar29;
        uStack_3f8 = puVar29[3];
        uStack_400 = puVar29[2];
        FUN_101670530(&uStack_280,&pppppppuStack_3c0);
        FUN_101670530(&uStack_220,&pppppppuStack_3c0);
        func_0x00010166cb60(&uStack_280,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
        func_0x00010166cb60(&uStack_220,&pppppppuStack_3c0,0x112dbd428,&UNK_10d976b90);
        pppppppuVar30 = &pppppppuStack_410;
LAB_10166b294:
        param_2 = (undefined8 *)0x112dbd428;
        FUN_1016704dc(pppppppuVar30,0x112dbd428,&UNK_10d976b90);
LAB_10166b6f8:
        uVar31 = uStack_1c8;
        uVar33 = uStack_1d0;
        uVar8 = (uint)(uStack_228 >> 0x20);
        uVar21 = uVar8 >> 0x1e;
        uVar16 = (uint)(uStack_1c8 >> 0x20);
        uVar24 = uVar16 >> 0x1e;
        iVar17 = (int)uStack_230;
        if (uStack_228 >> 0x3e == 3) {
          uVar23 = 0;
          if ((((uStack_230 != 0) || (uStack_228 != 0xc000000000000000)) || (uStack_1c8 >> 0x3e < 3)
              ) || ((uVar23 = 0, uStack_1d0 != 0 || (uStack_1c8 != 0xc000000000000000))))
          goto joined_r0x00010166b75c;
LAB_10166b850:
          func_0x000101670564(&uStack_220);
          func_0x000101670564(&uStack_280);
        }
        else {
          if (uVar8 >> 0x1e < 2) {
            if (uVar21 == 0) {
              uVar23 = uStack_228 >> 0x30 & 0xff;
            }
            else {
              iVar22 = (int)(uStack_230 >> 0x20);
              if (SBORROW4(iVar22,iVar17)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0b8);
                (*pcVar9)();
              }
              uVar23 = (ulong)(iVar22 - iVar17);
            }
joined_r0x00010166b75c:
            if (uVar16 >> 0x1e < 2) goto LAB_10166b794;
LAB_10166b760:
            if (uVar24 != 2) {
              if (uVar23 != 0) goto LAB_10166c020;
              goto LAB_10166b850;
            }
            uVar25 = *(long *)(uStack_1d0 + 0x18) - *(long *)(uStack_1d0 + 0x10);
            if (SBORROW8(*(long *)(uStack_1d0 + 0x18),*(long *)(uStack_1d0 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0ac);
              (*pcVar9)();
            }
          }
          else {
            if (uVar21 == 2) {
              uVar23 = *(long *)(uStack_230 + 0x18) - *(long *)(uStack_230 + 0x10);
              if (SBORROW8(*(long *)(uStack_230 + 0x18),*(long *)(uStack_230 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0b4);
                (*pcVar9)();
              }
              goto joined_r0x00010166b75c;
            }
            uVar23 = 0;
            if (1 < uVar24) goto LAB_10166b760;
LAB_10166b794:
            if (uVar24 == 0) {
              uVar25 = uStack_1c8 >> 0x30 & 0xff;
            }
            else {
              iVar22 = (int)(uStack_1d0 >> 0x20);
              if (SBORROW4(iVar22,(int)uStack_1d0)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0b0);
                (*pcVar9)();
              }
              uVar25 = (ulong)(iVar22 - (int)uStack_1d0);
            }
          }
          if (uVar23 != uVar25) goto LAB_10166c020;
          if ((long)uVar23 < 1) goto LAB_10166b850;
          if (uVar21 < 2) {
            if (uVar21 == 0) {
              uStack_320._0_1_ = (byte)uStack_230;
              uStack_320._1_1_ = (undefined1)(uStack_230 >> 8);
              uStack_320._2_1_ = (undefined1)(uStack_230 >> 0x10);
              uStack_320._3_1_ = (undefined1)(uStack_230 >> 0x18);
              uStack_320._4_1_ = (undefined1)(uStack_230 >> 0x20);
              uStack_320._5_1_ = (undefined1)(uStack_230 >> 0x28);
              uStack_320._6_1_ = (undefined1)(uStack_230 >> 0x30);
              uStack_320._7_1_ = (undefined1)(uStack_230 >> 0x38);
              uStack_318 = (undefined1)uStack_228;
              uStack_317 = (undefined1)(uStack_228 >> 8);
              uStack_316 = (undefined1)(uStack_228 >> 0x10);
              uStack_315 = (undefined1)(uStack_228 >> 0x18);
              uStack_314 = (undefined1)(uStack_228 >> 0x20);
              uStack_313 = (undefined1)(uStack_228 >> 0x28);
              param_2 = (undefined8 *)((long)&uStack_320 + (uStack_228 >> 0x30 & 0xff));
LAB_10166b95c:
              FUN_100e25bdc(&pppppppuStack_3c0,&uStack_320,param_2,uStack_1d0,uStack_1c8);
              func_0x000101670564(&uStack_220);
              func_0x000101670564(&uStack_280);
              if (((ulong)pppppppuStack_3c0 & 1) != 0) goto LAB_10166ba44;
              goto LAB_10166bedc;
            }
            lVar26 = (long)iVar17;
            pppppppuVar32 = (undefined8 *******)(((long)uStack_230 >> 0x20) - lVar26);
            if ((long)uStack_230 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0bc);
              (*pcVar9)();
            }
            func_0x000107c5ec30();
            if (pppppppuVar30 == (undefined8 *******)0x0) {
              func_0x000107c5ec38();
              lVar26 = 0;
LAB_10166b9b8:
              param_2 = (undefined8 *)0x0;
            }
            else {
              pppppppuVar10 = pppppppuVar30;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar26,(long)pppppppuVar10)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0c8);
                (*pcVar9)();
              }
              lVar26 = (lVar26 - (long)pppppppuVar10) + (long)pppppppuVar30;
              func_0x000107c5ec38();
              if (lVar26 == 0) goto LAB_10166b9b8;
              if ((long)pppppppuVar32 <= (long)pppppppuVar10) {
                pppppppuVar10 = pppppppuVar32;
              }
              param_2 = (undefined8 *)((long)pppppppuVar10 + lVar26);
            }
            FUN_100e25bdc(&uStack_320,lVar26,param_2,uVar33,uVar31);
            func_0x000101670564(&uStack_220);
            func_0x000101670564(&uStack_280);
          }
          else {
            if (uVar21 != 2) {
              uStack_318 = 0;
              uStack_317 = 0;
              uStack_316 = 0;
              uStack_315 = 0;
              uStack_314 = 0;
              uStack_313 = 0;
              uStack_320._0_1_ = 0;
              uStack_320._1_1_ = 0;
              uStack_320._2_1_ = 0;
              uStack_320._3_1_ = 0;
              uStack_320._4_1_ = 0;
              uStack_320._5_1_ = 0;
              uStack_320._6_1_ = 0;
              uStack_320._7_1_ = 0;
              param_2 = &uStack_320;
              goto LAB_10166b95c;
            }
            lVar26 = *(long *)(uStack_230 + 0x10);
            lVar15 = *(long *)(uStack_230 + 0x18);
            func_0x000107c5ec30();
            pppppppuVar32 = pppppppuVar30;
            if (pppppppuVar30 != (undefined8 *******)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar26,(long)pppppppuVar32)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0c4);
                (*pcVar9)();
              }
              pppppppuVar30 =
                   (undefined8 *******)((lVar26 - (long)pppppppuVar32) + (long)pppppppuVar30);
            }
            pppppppuVar10 = (undefined8 *******)(lVar15 - lVar26);
            if (SBORROW8(lVar15,lVar26)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10166c0c0);
              (*pcVar9)();
            }
            func_0x000107c5ec38();
            if (pppppppuVar30 == (undefined8 *******)0x0) {
              param_2 = (undefined8 *)0x0;
            }
            else {
              if ((long)pppppppuVar10 <= (long)pppppppuVar32) {
                pppppppuVar32 = pppppppuVar10;
              }
              param_2 = (undefined8 *)((long)pppppppuVar32 + (long)pppppppuVar30);
            }
            FUN_100e25bdc(&uStack_320,pppppppuVar30,param_2,uVar33,uVar31);
            func_0x000101670564(&uStack_220);
            func_0x000101670564(&uStack_280);
          }
          if (((byte)uStack_320 & 1) == 0) goto LAB_10166bedc;
        }
LAB_10166ba44:
        if (lVar18 == 0) break;
        puVar29 = puVar29 + 0xc;
        puVar28 = puVar28 + 0xc;
      } while( true );
    }
    puVar14 = (undefined8 *)0x1;
  }
  else {
LAB_10166bedc:
    puVar14 = (undefined8 *)0x0;
  }
LAB_10166bee8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar14;
  }
  func_0x000107c60e78();
  lVar18 = puVar14[2];
  if (lVar18 == param_2[2]) {
    if ((lVar18 != 0) && (puVar14 != param_2)) {
      param_2 = param_2 + 10;
      plVar27 = puVar14 + 5;
      do {
        uVar33 = plVar27[-1];
        lVar4 = *plVar27;
        uVar31 = plVar27[1];
        uVar23 = plVar27[2];
        lVar26 = plVar27[3];
        uVar25 = plVar27[4];
        lVar19 = plVar27[5];
        lVar5 = param_2[-5];
        uVar2 = param_2[-4];
        uVar6 = param_2[-3];
        lVar15 = param_2[-2];
        uVar7 = param_2[-1];
        uVar20 = *param_2;
        if (((uVar33 != param_2[-6]) || (lVar4 != lVar5)) &&
           (func_0x000107c605b8(uVar33,lVar4,param_2[-6],lVar5,0), (uVar33 & 1) == 0))
        goto LAB_10166c2d8;
        func_0x000107c61434(lVar4);
        func_0x000107c61434(uVar31);
        func_0x000107c61434(lVar26);
        func_0x00010006c00c(uVar25,lVar19);
        func_0x000107c61434(lVar5);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(lVar15);
        func_0x00010006c00c(uVar7,uVar20);
        uVar33 = uVar31;
        FUN_10166b118(uVar31,uVar2);
        if (((uVar33 & 1) == 0) ||
           (((uVar23 != uVar6 || (lVar26 != lVar15)) &&
            (func_0x000107c605b8(uVar23,lVar26,uVar6,lVar15,0), (uVar23 & 1) == 0)))) {
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(lVar5);
          func_0x00010006c090(uVar7,uVar20);
          func_0x000107c6142c(lVar26);
          func_0x000107c6142c(uVar31);
          func_0x000107c6142c(lVar4);
          func_0x00010006c090(uVar25,lVar19);
          goto LAB_10166c2d8;
        }
        uVar33 = uVar25;
        FUN_100e25fcc(uVar25,lVar19,uVar7,uVar20);
        func_0x000107c6142c(lVar15);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(lVar5);
        func_0x00010006c090(uVar7,uVar20);
        func_0x000107c6142c(lVar26);
        func_0x000107c6142c(uVar31);
        func_0x000107c6142c(lVar4);
        func_0x00010006c090(uVar25,lVar19);
        if ((uVar33 & 1) == 0) goto LAB_10166c2d8;
        param_2 = param_2 + 7;
        plVar27 = plVar27 + 7;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    puVar14 = (undefined8 *)0x1;
  }
  else {
LAB_10166c2d8:
    puVar14 = (undefined8 *)0x0;
  }
  return puVar14;
}



/* Entry: 10166c8d0; end: 10166c8db;  */

void FUN_10166c8d0(void)

{
  return;
}



/* Entry: 10166c8dc; end: 10166c907;  */

undefined8 FUN_10166c8dc(undefined8 param_1)

{
  FUN_10166ec94(param_1,&UNK_1103f06b0);
  return param_1;
}



/* Entry: 10166c908; end: 10166cb2b;  */

uint FUN_10166c908(ulong *param_1,ulong *param_2)

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
  
  uVar2 = *param_1;
  if (((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
     || ((uVar2 = param_1[2], uVar2 != param_2[2] || param_1[3] != param_2[3] &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)))) {
LAB_10166ca28:
    uVar1 = 0;
    goto LAB_10166cb08;
  }
  uVar7 = param_1[7];
  uVar6 = param_1[6];
  uVar4 = param_1[8];
  uVar8 = param_2[7];
  uVar2 = param_2[6];
  uVar5 = param_2[8];
  uStack_a0 = uVar2;
  uStack_98 = uVar8;
  uStack_90 = uVar5;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  if (uVar6 == 0) {
    if (uVar2 == 0) {
      func_0x00010166cb60(&uStack_80,auStack_b8,0x112dbd420,&UNK_10d976b88);
      func_0x00010166cb60(&uStack_a0,auStack_b8,0x112dbd420,&UNK_10d976b88);
      func_0x00010166cb2c(0,uVar7,uVar4);
LAB_10166cafc:
      uVar2 = param_1[4];
      FUN_100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)uVar2;
      goto LAB_10166cb08;
    }
LAB_10166ca34:
    func_0x00010166cb60(&uStack_80,auStack_b8,0x112dbd420,&UNK_10d976b88);
    func_0x00010166cb60(&uStack_a0,auStack_b8,0x112dbd420,&UNK_10d976b88);
    func_0x00010166cb2c(uVar6,uVar7,uVar4);
  }
  else {
    if (uVar2 == 0) goto LAB_10166ca34;
    func_0x00010166cb60(&uStack_80,auStack_b8,0x112dbd420,&UNK_10d976b88);
    func_0x00010166cb60(&uStack_a0,auStack_b8,0x112dbd420,&UNK_10d976b88);
    uVar3 = uVar6;
    func_0x00010166c2fc(uVar6,uVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar7;
      FUN_100e25fcc(uVar7,uVar4,uVar8,uVar5);
      func_0x00010166cb2c(uVar2,uVar8,uVar5);
      func_0x00010166cb2c(uVar6,uVar7,uVar4);
      if ((uVar3 & 1) != 0) goto LAB_10166cafc;
      goto LAB_10166ca28;
    }
    func_0x00010166cb2c(uVar2,uVar8,uVar5);
    uVar2 = uVar6;
    uVar8 = uVar7;
    uVar5 = uVar4;
  }
  func_0x00010166cb2c(uVar2,uVar8,uVar5);
  uVar1 = 0;
LAB_10166cb08:
  return uVar1 & 1;
}



/* Entry: 10166cb2c; end: 10166cba7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10166cb2c(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 10166cba8; end: 10166cc4b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166cc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010166cc24) */

void FUN_10166cba8(ulong param_1,ulong param_2)

{
  ulong in_x5;
  undefined8 in_x7;
  uint uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = (uint)((ulong)in_stack_00000008 >> 0x3b) & 6 | (uint)((ulong)in_x7 >> 0x3f);
  if (uVar1 < 2) {
    if ((uVar1 == 0) || (uVar1 == 1)) goto code_r0x000107c61434;
  }
  else {
    if ((uVar1 == 2) || (uVar1 == 3)) {
      func_0x00010006c00c();
      param_2 = in_x5;
code_r0x000107c61434:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    if (uVar1 == 4) {
      uVar1 = (uint)(param_2 >> 0x3e);
      if (uVar1 == 1) {
        param_1 = param_2 & 0x3fffffffffffffff;
      }
      else if (uVar1 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10166cc4c; end: 10166ce1f;  */

undefined8 FUN_10166cc4c(undefined8 param_1,undefined8 param_2)

{
  FUN_10166fc14(param_2,param_1,&UNK_1103f0960);
  return param_2;
}



/* Entry: 10166ce20; end: 10166d0fb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10166ce20(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  byte **ppbVar13;
  
  pbVar12 = (byte *)*param_1;
  pbVar20 = (byte *)param_1[1];
  uVar8 = (uint)((ulong)param_1[9] >> 0x3b) & 6 | (uint)((ulong)param_1[7] >> 0x3f);
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      if (((uint)((ulong)param_2[9] >> 0x3b) & 6) == 0 && -1 < param_2[7]) {
        pbVar16 = (byte *)*param_2;
        pbVar18 = (byte *)param_2[1];
joined_r0x00010166cfc0:
        pbVar11 = pbVar12;
        pbVar15 = pbVar20;
        if ((pbVar12 != pbVar16) || (pbVar20 != pbVar18)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar11,pbVar15,pbVar16,pbVar18,0);
          return pbVar11;
        }
        uVar8 = 1;
        goto LAB_10166cfd8;
      }
    }
    else if (((uint)((ulong)param_2[9] >> 0x3b) & 6 | (uint)((ulong)param_2[7] >> 0x3f)) == 1) {
      pbVar16 = (byte *)*param_2;
      pbVar18 = (byte *)param_2[1];
      goto joined_r0x00010166cfc0;
    }
  }
  else {
    uStack_50 = param_1[2];
    uStack_48 = param_1[3];
    uStack_40 = param_1[4];
    uStack_38 = param_1[5];
    uStack_30 = param_1[6];
    uStack_20 = param_1[8];
    if (uVar8 == 2) {
      uStack_78 = param_2[7];
      uStack_68 = param_2[9];
      if (((uint)(uStack_68 >> 0x3b) & 6 | (uint)(uStack_78 >> 0x3f)) == 2) {
LAB_10166cf2c:
        uStack_18 = param_1[9] & 0xcfffffffffffffff;
        uStack_28 = param_1[7] & 0x7fffffffffffffff;
        lStack_70 = param_2[8];
        lStack_80 = param_2[6];
        uStack_78 = uStack_78 & 0x7fffffffffffffff;
        uStack_68 = uStack_68 & 0xcfffffffffffffff;
        lStack_a8 = param_2[1];
        lStack_b0 = *param_2;
        lStack_a0 = param_2[2];
        lStack_98 = param_2[3];
        lStack_88 = param_2[5];
        lStack_90 = param_2[4];
        ppbVar13 = &pbStack_60;
        pbStack_60 = pbVar12;
        pbStack_58 = pbVar20;
        func_0x00010166ccb4(ppbVar13,&lStack_b0);
        uVar8 = (uint)ppbVar13;
        goto LAB_10166cfd8;
      }
    }
    else if (uVar8 == 3) {
      uStack_78 = param_2[7];
      uStack_68 = param_2[9];
      if (((uint)(uStack_68 >> 0x3b) & 6 | (uint)(uStack_78 >> 0x3f)) == 3) goto LAB_10166cf2c;
    }
    else if (((uint)((ulong)param_2[9] >> 0x3b) & 6 | (uint)((ulong)param_2[7] >> 0x3f)) == 4) {
      lVar26 = *param_2;
      uVar17 = param_2[1];
      puVar6 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
        *(byte **)(puVar6 + -0x48) = unaff_x25;
        *(byte **)(puVar6 + -0x40) = unaff_x24;
        *(byte **)(puVar6 + -0x38) = unaff_x23;
        *(ulong *)(puVar6 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
        *(ulong *)(puVar6 + -0x20) = unaff_x20;
        *(byte **)(puVar6 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar6 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar6 + -8) = unaff_x30;
        *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar8 = (uint)((ulong)pbVar20 >> 0x20);
        uVar19 = uVar8 >> 0x1e;
        uVar4 = (uint)(uVar17 >> 0x20);
        uVar23 = uVar4 >> 0x1e;
        iVar7 = (int)pbVar12;
        pbVar14 = pbVar20;
        if ((ulong)pbVar20 >> 0x3e == 3) {
          uVar22 = 0;
          if ((((pbVar12 != (byte *)0x0) || (pbVar20 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar22 = 0, lVar26 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar8 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar20 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar12 >> 0x20);
            if (SBORROW4(iVar21,iVar7)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar5)();
            }
            uVar22 = (ulong)(iVar21 - iVar7);
          }
joined_r0x000100e26170:
          if (uVar4 >> 0x1e < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar5)();
            }
            goto LAB_100e2608c;
          }
          pbVar9 = (byte *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar12 + 0x18) - *(long *)(pbVar12 + 0x10);
            if (SBORROW8(*(long *)(pbVar12 + 0x18),*(long *)(pbVar12 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar5)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto LAB_100e26050;
LAB_100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar17 >> 0x30 & 0xff;
LAB_100e2608c:
            if (uVar22 == uVar24) goto LAB_100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar26 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar26)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar5)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar26)) {
LAB_100e26094:
              if ((long)uVar22 < 1) goto LAB_100e26128;
              if (uVar19 < 2) {
                if (uVar19 == 0) {
                  puVar6[-0x70] = (char)pbVar12;
                  puVar6[-0x6f] = (char)((ulong)pbVar12 >> 8);
                  puVar6[-0x6e] = (char)((ulong)pbVar12 >> 0x10);
                  puVar6[-0x6d] = (char)((ulong)pbVar12 >> 0x18);
                  puVar6[-0x6c] = (char)((ulong)pbVar12 >> 0x20);
                  puVar6[-0x6b] = (char)((ulong)pbVar12 >> 0x28);
                  puVar6[-0x6a] = (char)((ulong)pbVar12 >> 0x30);
                  puVar6[-0x69] = (char)((ulong)pbVar12 >> 0x38);
                  puVar6[-0x68] = (char)pbVar20;
                  puVar6[-0x67] = (char)((ulong)pbVar20 >> 8);
                  puVar6[-0x66] = (char)((ulong)pbVar20 >> 0x10);
                  puVar6[-0x65] = (char)((ulong)pbVar20 >> 0x18);
                  puVar6[-100] = (char)((ulong)pbVar20 >> 0x20);
                  puVar6[-99] = (char)((ulong)pbVar20 >> 0x28);
                  pbVar14 = puVar6 + (((ulong)pbVar20 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc(puVar6 + -0x71,puVar6 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar6[-0x71];
                  goto LAB_100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)pbVar12 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar12 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar5)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar20;
                if (pbVar12 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar12 = (byte *)0x0;
                }
                else {
                  pbVar14 = pbVar12;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar5)();
                  }
                  pbVar12 = pbVar12 + ((long)unaff_x25 - (long)pbVar14);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar12;
                  if (pbVar12 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar14) {
                      pbVar14 = unaff_x23;
                    }
                    pbVar14 = pbVar14 + (long)pbVar12;
                    goto LAB_100e262a4;
                  }
                }
                pbVar14 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)(puVar6 + -0x6a) = 0;
                  *(undefined8 *)(puVar6 + -0x70) = 0;
                  pbVar14 = puVar6 + -0x70;
                  goto LAB_100e26260;
                }
                lVar27 = *(long *)(pbVar12 + 0x10);
                unaff_x24 = *(byte **)(pbVar12 + 0x18);
                func_0x000107c5ec30();
                pbVar14 = pbVar12;
                if (pbVar12 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar5)();
                  }
                  pbVar12 = pbVar12 + (lVar27 - (long)pbVar14);
                }
                unaff_x23 = unaff_x24 + -lVar27;
                if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar5)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar12;
                unaff_x25 = pbVar20;
                if (pbVar12 == (byte *)0x0) {
                  pbVar14 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar12;
                }
              }
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar20 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar6 + -0x70,pbVar12,pbVar14,lVar26,uVar17);
              pbVar9 = (byte *)(ulong)(byte)puVar6[-0x70];
              unaff_x22 = uVar17;
              goto LAB_100e262b0;
            }
          }
          pbVar9 = (byte *)0x0;
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar6 + -0xc0) = unaff_x24;
        *(byte **)(puVar6 + -0xb8) = unaff_x23;
        *(ulong *)(puVar6 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar6 + -0xa8) = unaff_x21;
        *(ulong *)(puVar6 + -0xa0) = unaff_x20;
        *(byte **)(puVar6 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar6 + -0x90) = puVar6 + -0x10;
        *(code **)(puVar6 + -0x88) = FUN_100e26304;
        pbVar11 = *(byte **)pbVar9;
        pbVar12 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar28 = pbVar9[0x28];
        pbVar20 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar12;
        if (bVar28 < 3) {
          if (bVar28 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar26 = *(long *)pbVar14;
              uVar10 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar26,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar28 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar18 = *(byte **)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar10 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar26,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar12;
            pbVar15 = pbVar20;
            if ((pbVar12 == pbVar16) && (pbVar20 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar18 = *(byte **)(pbVar14 + 8);
            lVar26 = *(long *)(pbVar14 + 0x18);
            if ((pbVar11 == pbVar16) && (pbVar12 == pbVar18)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar26);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar26);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar27 = *(long *)(pbVar9 + 0x20);
        if (bVar28 < 5) {
          if (bVar28 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar18 = *(byte **)(pbVar14 + 8);
            if (((pbVar11 == pbVar16) && (pbVar12 == pbVar18)) &&
               (pbVar11 = pbVar20, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar18 = *(byte **)(pbVar14 + 0x18),
               pbVar20 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar11 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar14 + 0x10);
          lVar26 = *(long *)(pbVar14 + 0x20);
          if (pbVar20 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar11 = pbVar12;
            pbVar15 = pbVar20;
            if ((pbVar12 != pbVar16) || (pbVar20 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar27 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar27,*(byte **)(pbVar14 + 0x18),lVar26,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar28 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar27 == 0) && pbVar20 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar27 = *(long *)(pbVar14 + 0x20);
            lVar26 = *(long *)(pbVar14 + 0x18);
            bVar28 = pbVar14[8] | (byte)lVar26;
            bVar29 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
            bVar30 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar31 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar32 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar33 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar34 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar35 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar36 = pbVar14[0x10] | (byte)lVar27;
            bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
            auVar44[1] = bVar29;
            auVar44[0] = bVar28;
            auVar44[2] = bVar30;
            auVar44[3] = bVar31;
            auVar44[4] = bVar32;
            auVar44[5] = bVar33;
            auVar44[6] = bVar34;
            auVar44[7] = bVar35;
            auVar44[8] = bVar36;
            auVar44[9] = bVar37;
            auVar44[10] = bVar38;
            auVar44[0xb] = bVar39;
            auVar44[0xc] = bVar40;
            auVar44[0xd] = bVar41;
            auVar44[0xe] = bVar42;
            auVar44[0xf] = bVar43;
            auVar3[1] = bVar29;
            auVar3[0] = bVar28;
            auVar3[2] = bVar30;
            auVar3[3] = bVar31;
            auVar3[4] = bVar32;
            auVar3[5] = bVar33;
            auVar3[6] = bVar34;
            auVar3[7] = bVar35;
            auVar3[8] = bVar36;
            auVar3[9] = bVar37;
            auVar3[10] = bVar38;
            auVar3[0xb] = bVar39;
            auVar3[0xc] = bVar40;
            auVar3[0xd] = bVar41;
            auVar3[0xe] = bVar42;
            auVar3[0xf] = bVar43;
            auVar44 = NEON_ext(auVar44,auVar3,8,1);
            if (CONCAT17(bVar35 | auVar44[7],
                         CONCAT16(bVar34 | auVar44[6],
                                  CONCAT15(bVar33 | auVar44[5],
                                           CONCAT14(bVar32 | auVar44[4],
                                                    CONCAT13(bVar31 | auVar44[3],
                                                             CONCAT12(bVar30 | auVar44[2],
                                                                      CONCAT11(bVar29 | auVar44[1],
                                                                               bVar28 | auVar44[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar20 == (byte *)0x0) &&
              lVar27 == 0)) {
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
          lVar27 = *(long *)(pbVar14 + 0x20);
          lVar26 = *(long *)(pbVar14 + 0x18);
          bVar28 = pbVar14[8] | (byte)lVar26;
          bVar29 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
          bVar30 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar31 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar32 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar33 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar34 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar35 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar36 = pbVar14[0x10] | (byte)lVar27;
          bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
          bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
          bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
          bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
          bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
          bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
          bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
          auVar1[1] = bVar29;
          auVar1[0] = bVar28;
          auVar1[2] = bVar30;
          auVar1[3] = bVar31;
          auVar1[4] = bVar32;
          auVar1[5] = bVar33;
          auVar1[6] = bVar34;
          auVar1[7] = bVar35;
          auVar1[8] = bVar36;
          auVar1[9] = bVar37;
          auVar1[10] = bVar38;
          auVar1[0xb] = bVar39;
          auVar1[0xc] = bVar40;
          auVar1[0xd] = bVar41;
          auVar1[0xe] = bVar42;
          auVar1[0xf] = bVar43;
          auVar2[1] = bVar29;
          auVar2[0] = bVar28;
          auVar2[2] = bVar30;
          auVar2[3] = bVar31;
          auVar2[4] = bVar32;
          auVar2[5] = bVar33;
          auVar2[6] = bVar34;
          auVar2[7] = bVar35;
          auVar2[8] = bVar36;
          auVar2[9] = bVar37;
          auVar2[10] = bVar38;
          auVar2[0xb] = bVar39;
          auVar2[0xc] = bVar40;
          auVar2[0xd] = bVar41;
          auVar2[0xe] = bVar42;
          auVar2[0xf] = bVar43;
          auVar44 = NEON_ext(auVar1,auVar2,8,1);
          lVar26 = CONCAT17(bVar35 | auVar44[7],
                            CONCAT16(bVar34 | auVar44[6],
                                     CONCAT15(bVar33 | auVar44[5],
                                              CONCAT14(bVar32 | auVar44[4],
                                                       CONCAT13(bVar31 | auVar44[3],
                                                                CONCAT12(bVar30 | auVar44[2],
                                                                         CONCAT11(bVar29 | auVar44[1
                                                  ],bVar28 | auVar44[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 8);
        uVar17 = *(ulong *)(pbVar14 + 0x10);
        lVar27 = *(long *)pbVar14;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar27,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar6 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar6 + -0x88);
        unaff_x20 = *(ulong *)(puVar6 + -0xa0);
        unaff_x19 = *(byte **)(puVar6 + -0x98);
        unaff_x22 = *(ulong *)(puVar6 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar6 + -0xa8);
        unaff_x24 = *(byte **)(puVar6 + -0xc0);
        unaff_x23 = *(byte **)(puVar6 + -0xb8);
        puVar6 = puVar6 + -0x80;
      } while( true );
    }
  }
  uVar8 = 0;
LAB_10166cfd8:
  return (byte *)(ulong)(uVar8 & 1);
}



/* Entry: 10166d0fc; end: 10166d203;  */

/* WARNING: Possible PIC construction at 0x00010166d12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010166d130) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10166d0fc(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
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
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10166d204; end: 10166d8b7;  */

uint FUN_10166d204(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_310 [80];
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
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uVar6;
  
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_1c8 = param_1[1];
  uStack_1d0 = *param_1;
  uStack_208 = param_2[3];
  uStack_210 = param_2[2];
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_1f8 = param_2[5];
  uStack_200 = param_2[4];
  uStack_f8 = param_2[7];
  uStack_100 = param_2[6];
  uStack_1e8 = param_2[7];
  uStack_1f0 = param_2[6];
  uStack_e8 = param_2[9];
  uStack_f0 = param_2[8];
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  uStack_218 = param_2[1];
  uStack_220 = *param_2;
  uStack_1d8 = param_2[9];
  uStack_1e0 = param_2[8];
  bVar1 = (uStack_1d8 & 0x3000000000000000) == 0;
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  bVar2 = uStack_208 >> 1 == 0xffffffff;
  bVar3 = uStack_1e8 >> 0x21 == 0;
  uStack_180 = uStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_148 = uStack_1e8;
  uStack_140 = uStack_1e0;
  uStack_138 = uStack_1d8;
  if (((uStack_1b8 >> 1 == 0xffffffff) && (uStack_198 >> 0x21 == 0)) &&
     ((uStack_188 & 0x3000000000000000) == 0)) {
    if ((bVar1 && bVar2) && bVar3) {
      uStack_248 = param_1[5];
      uStack_250 = param_1[4];
      uStack_238 = param_1[7];
      uStack_240 = param_1[6];
      uStack_228 = param_1[9];
      uStack_230 = param_1[8];
      uStack_268 = param_1[1];
      uStack_270 = *param_1;
      uStack_258 = param_1[3];
      uStack_260 = param_1[2];
      func_0x00010166cb60(&uStack_e0,&uStack_90,0x112dbd428,&UNK_10d976b90);
      func_0x00010166cb60(&uStack_130,&uStack_90,0x112dbd428,&UNK_10d976b90);
      FUN_1016704dc(&uStack_270,0x112dbd428,&UNK_10d976b90);
LAB_10166d460:
      uVar6 = param_1[10];
      FUN_100e25fcc(uVar6,param_1[0xb],param_2[10],param_2[0xb]);
      uVar4 = (uint)uVar6;
      goto LAB_10166d46c;
    }
LAB_10166d338:
    uStack_270 = uStack_1d0;
    uStack_268 = uStack_1c8;
    uStack_260 = uStack_1c0;
    uStack_258 = uStack_1b8;
    uStack_250 = uStack_1b0;
    uStack_248 = uStack_1a8;
    uStack_240 = uStack_1a0;
    uStack_238 = uStack_198;
    uStack_230 = uStack_190;
    uStack_228 = uStack_188;
    func_0x00010166cb60(&uStack_e0,&uStack_90,0x112dbd428,&UNK_10d976b90);
    func_0x00010166cb60(&uStack_130,&uStack_90,0x112dbd428,&UNK_10d976b90);
    FUN_1016704dc(&uStack_270,0x112dbd660,&UNK_10d977760);
  }
  else {
    if ((bVar1 && bVar2) && bVar3) goto LAB_10166d338;
    uStack_298 = param_2[5];
    uStack_2a0 = param_2[4];
    uStack_288 = param_2[7];
    uStack_290 = param_2[6];
    uStack_278 = param_2[9];
    uStack_280 = param_2[8];
    uStack_2b8 = param_2[1];
    uStack_2c0 = *param_2;
    uStack_2a8 = param_2[3];
    uStack_2b0 = param_2[2];
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_48 = param_1[9];
    uStack_50 = param_1[8];
    uStack_270 = uStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_230 = uStack_280;
    uStack_228 = uStack_278;
    func_0x00010166cb60(&uStack_e0,auStack_310,0x112dbd428,&UNK_10d976b90);
    func_0x00010166cb60(&uStack_130,auStack_310,0x112dbd428,&UNK_10d976b90);
    puVar5 = &uStack_90;
    FUN_10166ce20(puVar5,&uStack_270);
    FUN_1016704dc(&uStack_2c0,0x112dbd428,&UNK_10d976b90);
    FUN_1016704dc(&uStack_1d0,0x112dbd428,&UNK_10d976b90);
    if (((ulong)puVar5 & 1) != 0) goto LAB_10166d460;
  }
  uVar4 = 0;
LAB_10166d46c:
  return uVar4 & 1;
}



/* Entry: 10166d8b8; end: 10166db37;  */

void FUN_10166d8b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976e50;
  func_0x000107c61520(&UNK_10d976e50,&UNK_1103f0608);
  puRam0000000112dbd468 = puVar1;
  return;
}



/* Entry: 10166db38; end: 10166db4b;  */

void FUN_10166db38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10166db4c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10166db8c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10166db4c; end: 10166dbf7;  */

void FUN_10166db4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976c30;
  func_0x000107c61520(&UNK_10d976c30,&UNK_1103f0500);
  puRam0000000112dbd4f0 = puVar1;
  return;
}



/* Entry: 10166dbf8; end: 10166dbfb;  */

void FUN_10166dbf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976c70;
  func_0x000107c61520(&UNK_10d976c70,&UNK_1103f0500);
  puRam0000000112dbd510 = puVar1;
  return;
}



/* Entry: 10166dbfc; end: 10166dc3b;  */

void FUN_10166dbfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976c70;
  func_0x000107c61520(&UNK_10d976c70,&UNK_1103f0500);
  puRam0000000112dbd510 = puVar1;
  return;
}



/* Entry: 10166dc3c; end: 10166dc4f;  */

void FUN_10166dc3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10166dc50();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10166dc90)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10166dc50; end: 10166dcfb;  */

void FUN_10166dc50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976d30;
  func_0x000107c61520(&UNK_10d976d30,&UNK_1103f0590);
  puRam0000000112dbd518 = puVar1;
  return;
}



/* Entry: 10166dcfc; end: 10166dd3f;  */

void FUN_10166dcfc(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10166dd40; end: 10166dd43;  */

void FUN_10166dd40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976d70;
  func_0x000107c61520(&UNK_10d976d70,&UNK_1103f0590);
  puRam0000000112dbd538 = puVar1;
  return;
}



/* Entry: 10166dd44; end: 10166dd83;  */

void FUN_10166dd44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976d70;
  func_0x000107c61520(&UNK_10d976d70,&UNK_1103f0590);
  puRam0000000112dbd538 = puVar1;
  return;
}


