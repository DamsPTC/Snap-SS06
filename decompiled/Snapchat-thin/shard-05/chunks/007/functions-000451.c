/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104009f34; end: 104009f37;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104009f34(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 104009f38; end: 104009f6f;  */

uint FUN_104009f38(long param_1,long param_2)

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
  func_0x00010400d600();
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



/* Entry: 104009f70; end: 104009fc7;  */

uint FUN_104009f70(undefined8 *param_1)

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
  FUN_10400b744(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104009fc8; end: 10400a067;  */

void FUN_104009fc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046998 != -1) {
    _swift_once(0x113046998,FUN_1040096a4);
  }
  uVar5 = uRam0000000113812f10;
  uVar4 = uRam0000000113812f08;
  uVar3 = uRam0000000113812f00;
  uVar2 = uRam0000000113812ef8;
  uVar1 = uRam0000000113812ef0;
  *param_1 = uRam0000000113812ee8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10400a068; end: 10400a0a3;  */

void FUN_10400a068(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046a88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046a88,&UNK_10dcc2060);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10400a0a4; end: 10400a1bf;  */

void FUN_10400a0a4(undefined8 param_1,undefined8 param_2)

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
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_d8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10400a1c0; end: 10400a217;  */

uint FUN_10400a1c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10400b744(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10400a218; end: 10400a287;  */

void FUN_10400a218(void)

{
  __sSS6appendyySSF(0xd00000000000001a,0x800000010f1dd860);
  uRam0000000113812f18 = 0xd000000000000031;
  uRam0000000113812f20 = 0x800000010f1dd800;
  return;
}



/* Entry: 10400a288; end: 10400a2cf;  */

void FUN_10400a288(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc20c0,0x20,2);
  uRam0000000113812f30 = uStack_38;
  uRam0000000113812f28 = uStack_40;
  uRam0000000113812f40 = uStack_28;
  uRam0000000113812f38 = uStack_30;
  uRam0000000113812f50 = uStack_18;
  uRam0000000113812f48 = uStack_20;
  return;
}



/* Entry: 10400a2d0; end: 10400a367;  */

void FUN_10400a2d0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10400a324:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010400a340;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_10400a30c;
code_r0x00010400a340:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_10400a30c:
    (*pcVar3)();
  }
  goto LAB_10400a324;
}



/* Entry: 10400a368; end: 10400a40b;  */

void FUN_10400a368(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10400a40c; end: 10400a447;  */

undefined1  [16] FUN_10400a40c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam00000001130469a8 != -1) {
    _swift_once(0x1130469a8,FUN_10400a218);
  }
  uVar2 = uRam0000000113812f20;
  uVar1 = uRam0000000113812f18;
  _swift_bridgeObjectRetain(uRam0000000113812f20);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10400a448; end: 10400a47f;  */

uint FUN_10400a448(long param_1,long param_2)

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
  func_0x00010400d5c0();
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



/* Entry: 10400a480; end: 10400a51f;  */

void FUN_10400a480(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130469b0 != -1) {
    _swift_once(0x1130469b0,FUN_10400a288);
  }
  uVar5 = uRam0000000113812f50;
  uVar4 = uRam0000000113812f48;
  uVar3 = uRam0000000113812f40;
  uVar2 = uRam0000000113812f38;
  uVar1 = uRam0000000113812f30;
  *param_1 = uRam0000000113812f28;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10400a520; end: 10400a533;  */

void FUN_10400a520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046a78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046a78,&UNK_10dcc2058);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10400a534; end: 10400a647;  */

void FUN_10400a534(undefined8 param_1,undefined8 param_2)

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
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10400a648; end: 10400a6b7;  */

void FUN_10400a648(void)

{
  __sSS6appendyySSF(0xd00000000000001a,0x800000010f1dd840);
  uRam0000000113812f58 = 0xd000000000000031;
  uRam0000000113812f60 = 0x800000010f1dd800;
  return;
}



/* Entry: 10400a6b8; end: 10400a6ff;  */

void FUN_10400a6b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc2090,0x27,2);
  uRam0000000113812f70 = uStack_38;
  uRam0000000113812f68 = uStack_40;
  uRam0000000113812f80 = uStack_28;
  uRam0000000113812f78 = uStack_30;
  uRam0000000113812f90 = uStack_18;
  uRam0000000113812f88 = uStack_20;
  return;
}



/* Entry: 10400a700; end: 10400a7d3;  */

/* WARNING: Removing unreachable block (ram,0x00010400a7d0) */

void FUN_10400a700(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010400b644();
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



/* Entry: 10400a7d4; end: 10400a89f;  */

void FUN_10400a7d4(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x00010400b644();
    (*pcVar4)(&lStack_50,1,&UNK_110735198,uVar3,param_2,param_3);
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



/* Entry: 10400a8a0; end: 10400a8e3;  */

void FUN_10400a8a0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10400a8e4; end: 10400a93f;  */

undefined1  [16]
FUN_10400a8e4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    _swift_once(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  _swift_bridgeObjectRetain(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10400a940; end: 10400a95b;  */

undefined8 FUN_10400a940(void)

{
  return 1;
}



/* Entry: 10400a95c; end: 10400a983;  */

void FUN_10400a95c(void)

{
  FUN_10400a700();
  return;
}



/* Entry: 10400a984; end: 10400a9bb;  */

uint FUN_10400a984(long param_1,long param_2)

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
  FUN_10400d580();
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



/* Entry: 10400a9bc; end: 10400aa03;  */

uint FUN_10400a9bc(undefined8 *param_1)

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
  func_0x00010400afcc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10400aa04; end: 10400aaa3;  */

void FUN_10400aa04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130469c8 != -1) {
    _swift_once(0x1130469c8,FUN_10400a6b8);
  }
  uVar5 = uRam0000000113812f90;
  uVar4 = uRam0000000113812f88;
  uVar3 = uRam0000000113812f80;
  uVar2 = uRam0000000113812f78;
  uVar1 = uRam0000000113812f70;
  *param_1 = uRam0000000113812f68;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10400aaa4; end: 10400aab7;  */

void FUN_10400aaa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046a68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046a68,&UNK_10dcc2050);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10400aab8; end: 10400aaeb;  */

void FUN_10400aab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 10400aaec; end: 10400ac0f;  */

void FUN_10400aaec(undefined8 param_1,undefined8 param_2)

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
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10400ac10; end: 10400ac53;  */

uint FUN_10400ac10(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010400afcc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10400ac54; end: 10400ad6b;  */

undefined8 FUN_10400ac54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[5];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  if ((uVar6 >> 0x3d & 1) == 0) {
    uVar7 = param_2[5];
    if ((uVar7 >> 0x3d & 1) != 0) {
      return 0;
    }
    uVar9 = param_1[4];
    uVar8 = param_2[4];
    if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) == 0)) {
      return 0;
    }
    if (((uVar4 != uVar1) || (uVar5 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar5,uVar1,uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar9,uVar6,uVar8,uVar7);
  }
  else {
    if ((*(byte *)((long)param_2 + 0x2f) >> 5 & 1) == 0) {
      return 0;
    }
    if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar4,uVar5,uVar1,uVar2);
    uVar9 = uVar4;
  }
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 10400ad6c; end: 10400adb3;  */

undefined8 FUN_10400ad6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10400adb4; end: 10400af4f;  */

undefined8 FUN_10400adb4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar1 = param_1[3];
  uVar5 = param_1[4];
  uVar2 = param_1[5];
  if ((uVar2 >> 0x3d & 1) == 0) {
    uVar7 = param_2[5];
    if ((uVar7 >> 0x3d & 1) != 0) {
      return 0;
    }
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = param_2[4];
    if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,param_1[1],*param_2,param_2[1],0), (uVar3 & 1) == 0)) {
      return 0;
    }
    if (((uVar4 != uVar6) || (uVar1 != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar1,uVar6,uVar8,0), (uVar4 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar5,uVar2,uVar9,uVar7);
  }
  else {
    uVar7 = param_2[5];
    if ((uVar7 >> 0x3d & 1) == 0) {
      return 0;
    }
    uVar6 = *param_2;
    uVar8 = param_2[4];
    if ((char)param_2[1] == '\x01') {
      if ((long)uVar6 < 3) {
        if (uVar6 == 0) {
          if (uVar3 != 0) {
            return 0;
          }
        }
        else if (uVar6 == 1) {
          if (uVar3 != 1) {
            return 0;
          }
        }
        else if (uVar3 != 2) {
          return 0;
        }
      }
      else if (uVar6 == 3) {
        if (uVar3 != 3) {
          return 0;
        }
      }
      else if (uVar6 == 4) {
        if (uVar3 != 4) {
          return 0;
        }
      }
      else if (uVar3 != 5) {
        return 0;
      }
    }
    else if (uVar3 != uVar6) {
      return 0;
    }
    if (((uVar4 != param_2[2]) || (uVar1 != param_2[3])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar1,param_2[2],param_2[3],0), (uVar4 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar5,uVar2 & 0xdfffffffffffffff,uVar8,uVar7 & 0xdfffffffffffffff);
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 10400af50; end: 10400b0b7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10400af50(ulong *param_1,ulong *param_2)

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
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
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
  
  uVar13 = *param_1;
  if (((uVar13 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)) ||
     ((uVar13 = param_1[2], uVar13 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar26 = (byte *)param_1[5];
  uVar13 = param_2[4];
  uVar17 = param_2[5];
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
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
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
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)(uVar13 >> 0x20);
      if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
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
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
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
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
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
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar10 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
      )(pbVar12,pbVar15,pbVar16,pbVar18,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
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
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar13 = *(ulong *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
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



/* Entry: 10400b0b8; end: 10400b0f7;  */

void FUN_10400b0b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc1a10;
  _swift_getWitnessTable(&DAT_10dcc1a10,&UNK_1107345f0);
  puRam0000000113046938 = puVar1;
  return;
}



/* Entry: 10400b0f8; end: 10400b603;  */

uint FUN_10400b0f8(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_160 [48];
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uVar2;
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 2);
  lVar8 = *(long *)(param_2 + 2);
  if ((char)param_2[4] == '\x01') {
    if (lVar8 < 3) {
      if (lVar8 == 0) {
        if (lVar7 != 0) {
          return 0;
        }
      }
      else if (lVar8 == 1) {
        if (lVar7 != 1) {
          return 0;
        }
      }
      else if (lVar7 != 2) {
        return 0;
      }
    }
    else if (lVar8 == 3) {
      if (lVar7 != 3) {
        return 0;
      }
    }
    else if (lVar8 == 4) {
      if (lVar7 != 4) {
        return 0;
      }
    }
    else if (lVar7 != 5) {
      return 0;
    }
  }
  else if (lVar7 != lVar8) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 8);
  uVar9 = *(ulong *)(param_1 + 6);
  uVar17 = *(ulong *)(param_1 + 0xc);
  uVar15 = *(ulong *)(param_1 + 10);
  uVar13 = *(ulong *)(param_1 + 0x10);
  uVar10 = *(ulong *)(param_1 + 0xe);
  lVar8 = *(long *)(param_2 + 8);
  uVar11 = *(ulong *)(param_2 + 6);
  uVar18 = *(ulong *)(param_2 + 0xc);
  uVar16 = *(ulong *)(param_2 + 10);
  uVar14 = *(ulong *)(param_2 + 0x10);
  uVar12 = *(ulong *)(param_2 + 0xe);
  uStack_d0 = uVar11;
  lStack_c8 = lVar8;
  uStack_c0 = uVar16;
  uStack_b8 = uVar18;
  uStack_b0 = uVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar9;
  lStack_98 = lVar7;
  uStack_90 = uVar15;
  uStack_88 = uVar17;
  uStack_80 = uVar10;
  uStack_78 = uVar13;
  if (((uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar14 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_10400ad6c(&uStack_a0,&uStack_130,0x113046920,&UNK_10dcc18d0);
      FUN_10400ad6c(&uStack_d0,&uStack_130,0x113046920,&UNK_10dcc18d0);
LAB_10400b20c:
      FUN_103ff5490(uVar9,lVar7,uVar15,uVar17,uVar10,uVar13);
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      func_0x000100e25fcc(uVar2,*(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_2 + 0x12),
                          *(undefined8 *)(param_2 + 0x14));
      uVar1 = (uint)uVar2;
      goto LAB_10400b414;
    }
LAB_10400b25c:
    uStack_130 = uVar9;
    lStack_128 = lVar7;
    uStack_120 = uVar15;
    uStack_118 = uVar17;
    uStack_110 = uVar10;
    uStack_108 = uVar13;
    uStack_100 = uVar11;
    lStack_f8 = lVar8;
    uStack_f0 = uVar16;
    uStack_e8 = uVar18;
    uStack_e0 = uVar12;
    uStack_d8 = uVar14;
    FUN_10400ad6c(&uStack_a0,auStack_160,0x113046920,&UNK_10dcc18d0);
    FUN_10400ad6c(&uStack_d0,auStack_160,0x113046920,&UNK_10dcc18d0);
    func_0x00010400d778(&uStack_130);
  }
  else {
    if ((uVar14 & 0x3000000000000000) == 0x3000000000000000) goto LAB_10400b25c;
    if ((uVar13 >> 0x3d & 1) == 0) {
      if ((((uVar14 >> 0x3d & 1) != 0) ||
          (((uVar9 != uVar11 || (lVar7 != lVar8)) &&
           (uVar3 = uVar9,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar9,lVar7,uVar11,lVar8,0), (uVar3 & 1) == 0)))) ||
         (((uVar15 != uVar16 || (uVar17 != uVar18)) &&
          (uVar3 = uVar15,
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar15,uVar17,uVar16,uVar18,0), (uVar3 & 1) == 0)))) goto LAB_10400b3a4;
      FUN_10400ad6c(&uStack_a0,&uStack_130,0x113046920,&UNK_10dcc18d0);
      FUN_10400ad6c(&uStack_d0,&uStack_130,0x113046920,&UNK_10dcc18d0);
      uVar3 = uVar10;
      uVar4 = uVar13;
      uVar5 = uVar12;
      uVar6 = uVar14;
LAB_10400b4b0:
      func_0x000100e25fcc(uVar3,uVar4,uVar5,uVar6);
      FUN_103ff5490(uVar11,lVar8,uVar16,uVar18,uVar12,uVar14);
      if ((uVar3 & 1) != 0) goto LAB_10400b20c;
    }
    else {
      if (((uVar14 >> 0x3d & 1) != 0) &&
         (((uVar9 == uVar11 && (lVar7 == lVar8)) ||
          (uVar3 = uVar9,
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,lVar7,uVar11,lVar8,0), (uVar3 & 1) != 0)))) {
        FUN_10400ad6c(&uStack_a0,&uStack_130,0x113046920,&UNK_10dcc18d0);
        FUN_10400ad6c(&uStack_d0,&uStack_130,0x113046920,&UNK_10dcc18d0);
        uVar3 = uVar15;
        uVar4 = uVar17;
        uVar5 = uVar16;
        uVar6 = uVar18;
        goto LAB_10400b4b0;
      }
LAB_10400b3a4:
      FUN_10400ad6c(&uStack_a0,&uStack_130,0x113046920,&UNK_10dcc18d0);
      FUN_10400ad6c(&uStack_d0,&uStack_130,0x113046920,&UNK_10dcc18d0);
      FUN_103ff5490(uVar11,lVar8,uVar16,uVar18,uVar12,uVar14);
    }
    FUN_103ff5490(uVar9,lVar7,uVar15,uVar17,uVar10,uVar13);
  }
  uVar1 = 0;
LAB_10400b414:
  return uVar1 & 1;
}



/* Entry: 10400b604; end: 10400b743;  */

void FUN_10400b604(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc19a8;
  _swift_getWitnessTable(&UNK_10dcc19a8,&UNK_110734570);
  puRam0000000113046940 = puVar1;
  return;
}



/* Entry: 10400b744; end: 10400bb5f;  */

uint FUN_10400b744(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar8 = param_1[9];
  uVar4 = param_1[8];
  uVar16 = param_1[0xb];
  uVar12 = param_1[10];
  uVar9 = param_2[9];
  uVar5 = param_2[8];
  uVar17 = param_2[0xb];
  uVar13 = param_2[10];
  uStack_110 = uVar5;
  uStack_108 = uVar9;
  uStack_100 = uVar13;
  uStack_f8 = uVar17;
  uStack_f0 = uVar4;
  uStack_e8 = uVar8;
  uStack_e0 = uVar12;
  uStack_d8 = uVar16;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_10400b8ac;
    if ((((int)uVar4 == (int)uVar5) && ((uVar5 ^ uVar4) >> 0x20 == 0)) && ((int)uVar8 == (int)uVar9)
       ) {
      FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
      FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
      uVar2 = uVar12;
      func_0x000100e25fcc(uVar12,uVar16,uVar13,uVar17);
      func_0x000101553d58(uVar5,uVar9,uVar13,uVar17);
      if ((uVar2 & 1) != 0) goto LAB_10400b7dc;
    }
    else {
      FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
      FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
      func_0x000101553d58(uVar5,uVar9,uVar13,uVar17);
    }
LAB_10400b9f4:
    func_0x000101553d58(uVar4,uVar8,uVar12,uVar16);
  }
  else {
    if (uVar17 >> 0x3c < 0xf) {
LAB_10400b8ac:
      FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
      FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
      func_0x000101553d58(uVar4,uVar8,uVar12,uVar16);
      uVar4 = uVar5;
      uVar8 = uVar9;
      uVar12 = uVar13;
      uVar16 = uVar17;
      goto LAB_10400b9f4;
    }
    FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
    FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
LAB_10400b7dc:
    func_0x000101553d58(uVar4,uVar8,uVar12,uVar16);
    uVar10 = param_1[1];
    uVar8 = *param_1;
    uVar18 = param_1[3];
    uVar14 = param_1[2];
    uVar4 = param_1[5];
    uVar9 = param_1[4];
    uVar11 = param_2[1];
    uVar6 = *param_2;
    uVar19 = param_2[3];
    uVar15 = param_2[2];
    uVar12 = param_2[5];
    uVar7 = param_2[4];
    uStack_170 = uVar6;
    uStack_168 = uVar11;
    uStack_160 = uVar15;
    uStack_158 = uVar19;
    uStack_150 = uVar7;
    uStack_148 = uVar12;
    uStack_140 = uVar8;
    uStack_138 = uVar10;
    uStack_130 = uVar14;
    uStack_128 = uVar18;
    uStack_120 = uVar9;
    uStack_118 = uVar4;
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      if ((uVar12 & 0x3000000000000000) == 0x3000000000000000) {
        FUN_10400ad6c(&uStack_140,&uStack_98,0x113046928,&UNK_10dcc18e0);
        FUN_10400ad6c(&uStack_170,&uStack_98,0x113046928,&UNK_10dcc18e0);
        func_0x00010174b838(uVar8,uVar10,uVar14,uVar18,uVar9,uVar4);
LAB_10400bb50:
        uVar8 = param_1[6];
        func_0x000100e25fcc(uVar8,param_1[7],param_2[6],param_2[7]);
        uVar1 = (uint)uVar8;
        goto LAB_10400b9fc;
      }
LAB_10400ba28:
      FUN_10400ad6c(&uStack_140,&uStack_98,0x113046928,&UNK_10dcc18e0);
      FUN_10400ad6c(&uStack_170,&uStack_98,0x113046928,&UNK_10dcc18e0);
      func_0x00010174b838(uVar8,uVar10,uVar14,uVar18,uVar9,uVar4);
      func_0x00010174b838(uVar6,uVar11,uVar15,uVar19,uVar7,uVar12);
    }
    else {
      if ((uVar12 & 0x3000000000000000) == 0x3000000000000000) goto LAB_10400ba28;
      uStack_c8 = uVar8;
      uStack_c0 = uVar10;
      uStack_b8 = uVar14;
      uStack_b0 = uVar18;
      uStack_a8 = uVar9;
      uStack_a0 = uVar4;
      uStack_98 = uVar6;
      uStack_90 = uVar11;
      uStack_88 = uVar15;
      uStack_80 = uVar19;
      uStack_78 = uVar7;
      uStack_70 = uVar12;
      FUN_10400ad6c(&uStack_140,auStack_1a0,0x113046928,&UNK_10dcc18e0);
      FUN_10400ad6c(&uStack_170,auStack_1a0,0x113046928,&UNK_10dcc18e0);
      puVar3 = &uStack_c8;
      FUN_10400adb4(puVar3,&uStack_98);
      func_0x00010174b838(uVar6,uVar11,uVar15,uVar19,uVar7,uVar12);
      func_0x00010174b838(uVar8,uVar10,uVar14,uVar18,uVar9,uVar4);
      if (((ulong)puVar3 & 1) != 0) goto LAB_10400bb50;
    }
  }
  uVar1 = 0;
LAB_10400b9fc:
  return uVar1 & 1;
}



/* Entry: 10400bb60; end: 10400bc1f;  */

void FUN_10400bb60(void)

{
  undefined *puVar1;
  
  if (puRam00000001130469a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1d08;
  _swift_getWitnessTable(&UNK_10dcc1d08,&UNK_110734818);
  puRam00000001130469a0 = puVar1;
  return;
}



/* Entry: 10400bc20; end: 10400bc43;  */

void FUN_10400bc20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400bc44();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400bc44; end: 10400bc83;  */

void FUN_10400bc44(void)

{
  undefined *puVar1;
  
  if (puRam00000001130469d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1980;
  _swift_getWitnessTable(&UNK_10dcc1980,&UNK_110734570);
  puRam00000001130469d8 = puVar1;
  return;
}



/* Entry: 10400bc84; end: 10400bc9b;  */

void FUN_10400bc84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400b604();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1040040e4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400bc9c; end: 10400bcdb;  */

void FUN_10400bc9c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130469e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc19e8;
  _swift_getWitnessTable(&UNK_10dcc19e8,&UNK_110734570);
  puRam00000001130469e0 = puVar1;
  return;
}



/* Entry: 10400bcdc; end: 10400bcff;  */

void FUN_10400bcdc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400bd00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400bd00; end: 10400bd3f;  */

void FUN_10400bd00(void)

{
  undefined *puVar1;
  
  if (puRam00000001130469e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1a58;
  _swift_getWitnessTable(&UNK_10dcc1a58,&UNK_1107345f0);
  puRam00000001130469e8 = puVar1;
  return;
}



/* Entry: 10400bd40; end: 10400bd57;  */

void FUN_10400bd40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10400b684)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10400b0b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400bd58; end: 10400bd97;  */

void FUN_10400bd58(void)

{
  undefined *puVar1;
  
  if (puRam00000001130469f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1ac0;
  _swift_getWitnessTable(&UNK_10dcc1ac0,&UNK_1107345f0);
  puRam00000001130469f0 = puVar1;
  return;
}



/* Entry: 10400bd98; end: 10400bdbb;  */

void FUN_10400bd98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400bdbc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400bdbc; end: 10400bdfb;  */

void FUN_10400bdbc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130469f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1b30;
  _swift_getWitnessTable(&UNK_10dcc1b30,&UNK_110734710);
  puRam00000001130469f8 = puVar1;
  return;
}



/* Entry: 10400bdfc; end: 10400be0f;  */

void FUN_10400bdfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10400b6c4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10400be10();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400be10; end: 10400be4f;  */

void FUN_10400be10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc1ae8;
  _swift_getWitnessTable(&DAT_10dcc1ae8,&UNK_110734710);
  puRam0000000113046a00 = puVar1;
  return;
}



/* Entry: 10400be50; end: 10400be53;  */

void FUN_10400be50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1b98;
  _swift_getWitnessTable(&UNK_10dcc1b98,&UNK_110734710);
  puRam0000000113046a08 = puVar1;
  return;
}



/* Entry: 10400be54; end: 10400be93;  */

void FUN_10400be54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1b98;
  _swift_getWitnessTable(&UNK_10dcc1b98,&UNK_110734710);
  puRam0000000113046a08 = puVar1;
  return;
}



/* Entry: 10400be94; end: 10400beb7;  */

void FUN_10400be94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400beb8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400beb8; end: 10400bef7;  */

void FUN_10400beb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1c08;
  _swift_getWitnessTable(&UNK_10dcc1c08,&UNK_110734798);
  puRam0000000113046a10 = puVar1;
  return;
}



/* Entry: 10400bef8; end: 10400bf0b;  */

void FUN_10400bef8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10400b704)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10400bf0c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400bf0c; end: 10400bf4b;  */

void FUN_10400bf0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc1bc0;
  _swift_getWitnessTable(&DAT_10dcc1bc0,&UNK_110734798);
  puRam0000000113046a18 = puVar1;
  return;
}



/* Entry: 10400bf4c; end: 10400bf4f;  */

void FUN_10400bf4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1c70;
  _swift_getWitnessTable(&UNK_10dcc1c70,&UNK_110734798);
  puRam0000000113046a20 = puVar1;
  return;
}



/* Entry: 10400bf50; end: 10400bf8f;  */

void FUN_10400bf50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1c70;
  _swift_getWitnessTable(&UNK_10dcc1c70,&UNK_110734798);
  puRam0000000113046a20 = puVar1;
  return;
}



/* Entry: 10400bf90; end: 10400bfb3;  */

void FUN_10400bf90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400bfb4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400bfb4; end: 10400bff3;  */

void FUN_10400bfb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1ce0;
  _swift_getWitnessTable(&UNK_10dcc1ce0,&UNK_110734818);
  puRam0000000113046a28 = puVar1;
  return;
}



/* Entry: 10400bff4; end: 10400c00b;  */

void FUN_10400bff4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400bb60();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104004124)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400c00c; end: 10400c04b;  */

void FUN_10400c00c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1d48;
  _swift_getWitnessTable(&UNK_10dcc1d48,&UNK_110734818);
  puRam0000000113046a30 = puVar1;
  return;
}



/* Entry: 10400c04c; end: 10400c06f;  */

void FUN_10400c04c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400c070();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400c070; end: 10400c0af;  */

void FUN_10400c070(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1db8;
  _swift_getWitnessTable(&UNK_10dcc1db8,&UNK_110734930);
  puRam0000000113046a38 = puVar1;
  return;
}



/* Entry: 10400c0b0; end: 10400c0c3;  */

void FUN_10400c0b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10400bba0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10400c0c4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400c0c4; end: 10400c103;  */

void FUN_10400c0c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc1d70;
  _swift_getWitnessTable(&DAT_10dcc1d70,&UNK_110734930);
  puRam0000000113046a40 = puVar1;
  return;
}



/* Entry: 10400c104; end: 10400c107;  */

void FUN_10400c104(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1e20;
  _swift_getWitnessTable(&UNK_10dcc1e20,&UNK_110734930);
  puRam0000000113046a48 = puVar1;
  return;
}



/* Entry: 10400c108; end: 10400c147;  */

void FUN_10400c108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1e20;
  _swift_getWitnessTable(&UNK_10dcc1e20,&UNK_110734930);
  puRam0000000113046a48 = puVar1;
  return;
}



/* Entry: 10400c148; end: 10400c16b;  */

void FUN_10400c148(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400c16c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400c16c; end: 10400c1ab;  */

void FUN_10400c16c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1e90;
  _swift_getWitnessTable(&UNK_10dcc1e90,&UNK_1107349b8);
  puRam0000000113046a50 = puVar1;
  return;
}



/* Entry: 10400c1ac; end: 10400c1bf;  */

void FUN_10400c1ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10400bbe0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10400c1f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400c1c0; end: 10400c1ef;  */

void FUN_10400c1c0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10400c1f0; end: 10400c22f;  */

void FUN_10400c1f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc1e48;
  _swift_getWitnessTable(&DAT_10dcc1e48,&UNK_1107349b8);
  puRam0000000113046a58 = puVar1;
  return;
}



/* Entry: 10400c230; end: 10400c233;  */

void FUN_10400c230(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1ef8;
  _swift_getWitnessTable(&UNK_10dcc1ef8,&UNK_1107349b8);
  puRam0000000113046a60 = puVar1;
  return;
}



/* Entry: 10400c234; end: 10400c273;  */

void FUN_10400c234(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1ef8;
  _swift_getWitnessTable(&UNK_10dcc1ef8,&UNK_1107349b8);
  puRam0000000113046a60 = puVar1;
  return;
}



/* Entry: 10400c274; end: 10400c29b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10400c274(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10400c29c; end: 10400c343;  */

undefined8 * FUN_10400c29c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10400c344; end: 10400c387;  */

undefined8 * FUN_10400c344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 10400c388; end: 10400c41f;  */

int FUN_10400c388(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10400c420; end: 10400c45f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10400c420(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_103ff54a4(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38));
  }
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x50) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x50) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10400c460; end: 10400c68b;  */

undefined8 * FUN_10400c460(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar4 = param_2[8];
  if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar6 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar6;
    uVar6 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
  }
  else {
    uVar6 = param_2[3];
    uVar1 = param_2[4];
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    uVar5 = param_2[7];
    FUN_103ff5074(uVar6,uVar1,uVar3,uVar2,uVar5,uVar4);
    param_1[3] = uVar6;
    param_1[4] = uVar1;
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = uVar5;
    param_1[8] = uVar4;
  }
  uVar6 = param_2[9];
  uVar3 = param_2[10];
  func_0x00010006c00c(uVar6,uVar3);
  param_1[9] = uVar6;
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 10400c68c; end: 10400c747;  */

undefined8 * FUN_10400c68c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  if (((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar4 = param_2[8];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar5 = param_2[7];
      uVar6 = param_1[3];
      uVar8 = param_1[4];
      uVar2 = param_1[5];
      uVar1 = param_1[6];
      uVar3 = param_1[7];
      uVar7 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar7;
      uVar7 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar7;
      param_1[7] = uVar5;
      param_1[8] = uVar4;
      FUN_103ff54a4(uVar6,uVar8,uVar2,uVar1,uVar3);
      goto LAB_10400c728;
    }
    FUN_10400cd48(param_1 + 3,FUN_103ff54a4);
  }
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  uVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
LAB_10400c728:
  uVar6 = param_1[9];
  uVar2 = param_1[10];
  uVar8 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar8;
  func_0x00010006c090(uVar6,uVar2);
  return param_1;
}



/* Entry: 10400c748; end: 10400c867;  */

int FUN_10400c748(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10400c868; end: 10400c88f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10400c868(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10400c890; end: 10400c93f;  */

undefined8 * FUN_10400c890(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10400c940; end: 10400c983;  */

undefined8 * FUN_10400c940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10400c984; end: 10400ca1b;  */

int FUN_10400c984(int *param_1,int param_2)

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



/* Entry: 10400ca1c; end: 10400ca7f;  */

/* WARNING: Possible PIC construction at 0x00010400ca50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010400ca54) */
/* WARNING: Removing unreachable block (ram,0x00010400ca70) */
/* WARNING: Removing unreachable block (ram,0x00010400ca64) */

void FUN_10400ca1c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[5] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    func_0x00010174b84c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  }
  uVar1 = param_1[7];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10400ca80; end: 10400cd47;  */

undefined8 * FUN_10400ca80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[5];
  if (((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar2 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
  }
  else {
    uVar2 = *param_2;
    uVar6 = param_2[1];
    uVar5 = param_2[2];
    uVar1 = param_2[3];
    uVar4 = param_2[4];
    FUN_103ffeb88(uVar2,uVar6,uVar5,uVar1,uVar4,uVar3);
    *param_1 = uVar2;
    param_1[1] = uVar6;
    param_1[2] = uVar5;
    param_1[3] = uVar1;
    param_1[4] = uVar4;
    param_1[5] = uVar3;
  }
  uVar2 = param_2[6];
  uVar5 = param_2[7];
  func_0x00010006c00c(uVar2,uVar5);
  param_1[6] = uVar2;
  param_1[7] = uVar5;
  uVar3 = param_2[0xb];
  if (uVar3 >> 0x3c < 0xf) {
    param_1[8] = param_2[8];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar2 = param_2[10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
  }
  else {
    uVar2 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
  }
  return param_1;
}



/* Entry: 10400cd48; end: 10400ce67;  */

undefined8 * FUN_10400cd48(undefined8 *param_1,code *param_2)

{
  (*param_2)(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return param_1;
}



/* Entry: 10400ce68; end: 10400cf63;  */

int FUN_10400ce68(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10400cf64; end: 10400cfd3;  */

undefined8 * FUN_10400cf64(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  (*param_4)(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 10400cfd4; end: 10400cfe7;  */

undefined8 * FUN_10400cfd4(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  FUN_103ffeb88(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9);
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  (*(code *)&SUB_10174b84c)(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12);
  return param_1;
}



/* Entry: 10400cfe8; end: 10400d06b;  */

undefined8 *
FUN_10400cfe8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

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
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  (*param_4)(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9);
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  (*param_5)(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12);
  return param_1;
}



/* Entry: 10400d06c; end: 10400d077;  */

undefined8 * FUN_10400d06c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  (*(code *)&SUB_10174b84c)(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10400d078; end: 10400d0c3;  */

undefined8 * FUN_10400d078(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

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
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  (*param_4)(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10400d0c4; end: 10400d187;  */

int FUN_10400d0c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10400d188; end: 10400d1b7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10400d188(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}


