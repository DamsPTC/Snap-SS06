/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ffcbac; end: 103ffcbdf;  */

void FUN_103ffcbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 103ffcbe0; end: 103ffccd3;  */

void FUN_103ffcbe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_88,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffccd4; end: 103ffcd1b;  */

void FUN_103ffccd4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0bd0,0x28,2);
  uRam0000000113812be8 = uStack_38;
  uRam0000000113812be0 = uStack_40;
  uRam0000000113812bf8 = uStack_28;
  uRam0000000113812bf0 = uStack_30;
  uRam0000000113812c08 = uStack_18;
  uRam0000000113812c00 = uStack_20;
  return;
}



/* Entry: 103ffcd1c; end: 103ffce27;  */

void FUN_103ffcd1c(undefined8 param_1,long param_2,long param_3)

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
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103fffcf8();
LAB_103ffcda4:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_104000c88();
          goto LAB_103ffcda4;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103fffcb8();
          goto LAB_103ffcda4;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103ffce28; end: 103ffcf23;  */

void FUN_103ffce28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103fffcb8();
    (*pcVar3)(&lStack_50,1,&UNK_1107337a0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  plVar2 = unaff_x20;
  FUN_103ffcf24();
  if (unaff_x21 == 0) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[2];
      func_0x000103fffcf8();
      (*pcVar3)(&lStack_50,3,&UNK_110733830,plVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103ffcf24; end: 103ffcfb7;  */

void FUN_103ffcf24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x38);
  if (uStack_58 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = (undefined5)*(undefined8 *)(param_1 + 0x40);
    uStack_4b = (undefined3)*(undefined8 *)(param_1 + 0x45);
    uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x45) >> 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000c88();
    (*pcVar1)(&uStack_60,2,&UNK_1107338a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103ffcfb8; end: 103ffd013;  */

void FUN_103ffcfb8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 103ffd014; end: 103ffd043;  */

undefined1  [16] FUN_103ffd014(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103ffd044; end: 103ffd077;  */

void FUN_103ffd044(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103ffd078; end: 103ffd08b;  */

undefined1  [16] FUN_103ffd078(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103ffd088;
  return auVar1;
}



/* Entry: 103ffd08c; end: 103ffd09f;  */

void FUN_103ffd08c(void)

{
  FUN_103ffcd1c();
  return;
}



/* Entry: 103ffd0a0; end: 103ffd0df;  */

void FUN_103ffd0a0(void)

{
  FUN_103ffce28();
  return;
}



/* Entry: 103ffd0e0; end: 103ffd0e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ffd0e0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103ffd0e4; end: 103ffd11b;  */

uint FUN_103ffd0e4(long param_1,long param_2)

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
  func_0x000104003e24();
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



/* Entry: 103ffd11c; end: 103ffd173;  */

uint FUN_103ffd11c(undefined8 *param_1)

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
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 uStack_6b;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  undefined8 uStack_1b;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = param_1[6];
  uStack_28 = (undefined5)param_1[7];
  uStack_1b = *(undefined8 *)((long)param_1 + 0x45);
  uStack_23 = (undefined3)*(undefined8 *)((long)param_1 + 0x3d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x3d) >> 0x18);
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_80 = unaff_x20[6];
  uStack_78 = (undefined5)unaff_x20[7];
  uStack_6b = *(undefined8 *)((long)unaff_x20 + 0x45);
  uStack_73 = (undefined3)*(undefined8 *)((long)unaff_x20 + 0x3d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)unaff_x20 + 0x3d) >> 0x18);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103ffe18c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ffd174; end: 103ffd213;  */

void FUN_103ffd174(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046330 != -1) {
    _swift_once(0x113046330,FUN_103ffccd4);
  }
  uVar5 = uRam0000000113812c08;
  uVar4 = uRam0000000113812c00;
  uVar3 = uRam0000000113812bf8;
  uVar2 = uRam0000000113812bf0;
  uVar1 = uRam0000000113812be8;
  *param_1 = uRam0000000113812be0;
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



/* Entry: 103ffd214; end: 103ffd24f;  */

void FUN_103ffd214(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046528;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046528,&UNK_10dcc0a00);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffd250; end: 103ffd363;  */

void FUN_103ffd250(undefined8 param_1,undefined8 param_2)

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
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 uStack_3b;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined5)unaff_x20[7];
  uStack_3b = *(undefined8 *)((long)unaff_x20 + 0x45);
  uStack_43 = (undefined3)*(undefined8 *)((long)unaff_x20 + 0x3d);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)unaff_x20 + 0x3d) >> 0x18);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_c8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffd364; end: 103ffd403;  */

uint FUN_103ffd364(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 uStack_6b;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  undefined8 uStack_1b;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined5)param_1[7];
  uStack_6b = *(undefined8 *)((long)param_1 + 0x45);
  uStack_73 = (undefined3)*(undefined8 *)((long)param_1 + 0x3d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x3d) >> 0x18);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined5)param_2[7];
  uStack_1b = *(undefined8 *)((long)param_2 + 0x45);
  uStack_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x3d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x3d) >> 0x18);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103ffe18c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ffd404; end: 103ffd4a3;  */

void FUN_103ffd404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046350 != -1) {
    _swift_once(0x113046350,0x103ffd3bc);
  }
  uVar5 = uRam0000000113812c38;
  uVar4 = uRam0000000113812c30;
  uVar3 = uRam0000000113812c28;
  uVar2 = uRam0000000113812c20;
  uVar1 = uRam0000000113812c18;
  *param_1 = uRam0000000113812c10;
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



/* Entry: 103ffd4a4; end: 103ffd4eb;  */

void FUN_103ffd4a4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0a80,0x92,2);
  uRam0000000113812c48 = uStack_38;
  uRam0000000113812c40 = uStack_40;
  uRam0000000113812c58 = uStack_28;
  uRam0000000113812c50 = uStack_30;
  uRam0000000113812c68 = uStack_18;
  uRam0000000113812c60 = uStack_20;
  return;
}



/* Entry: 103ffd4ec; end: 103ffd58b;  */

void FUN_103ffd4ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046358 != -1) {
    _swift_once(0x113046358,FUN_103ffd4a4);
  }
  uVar5 = uRam0000000113812c68;
  uVar4 = uRam0000000113812c60;
  uVar3 = uRam0000000113812c58;
  uVar2 = uRam0000000113812c50;
  uVar1 = uRam0000000113812c48;
  *param_1 = uRam0000000113812c40;
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



/* Entry: 103ffd58c; end: 103ffd5fb;  */

void FUN_103ffd58c(void)

{
  __sSS6appendyySSF(0xd000000000000013,0x800000010f1dd730);
  uRam0000000113812c70 = 0xd00000000000003a;
  uRam0000000113812c78 = 0x800000010f1dd6f0;
  return;
}



/* Entry: 103ffd5fc; end: 103ffd643;  */

void FUN_103ffd5fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0a60,0x1b,2);
  uRam0000000113812c88 = uStack_38;
  uRam0000000113812c80 = uStack_40;
  uRam0000000113812c98 = uStack_28;
  uRam0000000113812c90 = uStack_30;
  uRam0000000113812ca8 = uStack_18;
  uRam0000000113812ca0 = uStack_20;
  return;
}



/* Entry: 103ffd644; end: 103ffd6db;  */

void FUN_103ffd644(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103ffd698:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103ffd6b4;
  pcVar3 = *(code **)(param_3 + 0x80);
  lVar1 = unaff_x20 + 0x10;
  goto LAB_103ffd680;
code_r0x000103ffd6b4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x80);
    lVar1 = unaff_x20 + 0x18;
LAB_103ffd680:
    (*pcVar3)(lVar1,param_2,param_3);
  }
  goto LAB_103ffd698;
}



/* Entry: 103ffd6dc; end: 103ffd78b;  */

void FUN_103ffd6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((param_4 & 0xff00000000) != 0x100000000) {
    (**(code **)(param_7 + 0x28))(param_4,1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    if ((param_5 & 0xff00000000) != 0x100000000) {
      (**(code **)(param_7 + 0x28))(param_5,2,param_6,param_7);
    }
    func_0x000100076224(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



/* Entry: 103ffd78c; end: 103ffd7af;  */

void FUN_103ffd78c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  return;
}



/* Entry: 103ffd7b0; end: 103ffd80b;  */

undefined1  [16] FUN_103ffd7b0(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113046360 != -1) {
    _swift_once(0x113046360,FUN_103ffd58c);
  }
  auVar1._8_8_ = uRam0000000113812c78;
  auVar1._0_8_ = uRam0000000113812c70;
  _swift_bridgeObjectRetain(uRam0000000113812c78);
  return auVar1;
}



/* Entry: 103ffd80c; end: 103ffd813;  */

undefined8 FUN_103ffd80c(void)

{
  return 1;
}



/* Entry: 103ffd814; end: 103ffd843;  */

undefined1  [16] FUN_103ffd814(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103ffd844; end: 103ffd877;  */

void FUN_103ffd844(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103ffd878; end: 103ffd88b;  */

undefined8 FUN_103ffd878(void)

{
  return 0x103ffd888;
}



/* Entry: 103ffd88c; end: 103ffd8d7;  */

void FUN_103ffd88c(void)

{
  FUN_103ffd644();
  return;
}



/* Entry: 103ffd8d8; end: 103ffd8db;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ffd8d8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103ffd8dc; end: 103ffd913;  */

uint FUN_103ffd8dc(long param_1,long param_2)

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
  FUN_104003de4();
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



/* Entry: 103ffd914; end: 103ffd94f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ffd914(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  char cVar6;
  code *pcVar7;
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
  cVar6 = (char)((uint5)(int5)param_1[2] >> 0x20);
  if (((ulong)*(uint5 *)(unaff_x20 + 2) & 0xff00000000) == 0x100000000) {
    if (cVar6 != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (cVar6 == '\x01') {
      return (byte *)0x0;
    }
    if ((int)*(uint5 *)(unaff_x20 + 2) != (int)(int5)param_1[2]) {
      return (byte *)0x0;
    }
  }
  cVar6 = (char)((uint5)(int5)param_1[3] >> 0x20);
  if (((ulong)*(uint5 *)(unaff_x20 + 3) & 0xff00000000) == 0x100000000) {
    if (cVar6 == '\x01') {
SUB_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
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
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar7)();
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
                pbVar13 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar7)();
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
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar7)();
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
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar13 = (byte *)((long)register0x00000008 + -0x70);
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
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar7)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar7)();
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
            unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,
                                lVar24,uVar16);
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar9;
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
              if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
  }
  else if ((cVar6 != '\x01') && ((int)*(uint5 *)(unaff_x20 + 3) == (int)(int5)param_1[3]))
  goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103ffd950; end: 103ffd9ef;  */

void FUN_103ffd950(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046368 != -1) {
    _swift_once(0x113046368,FUN_103ffd5fc);
  }
  uVar5 = uRam0000000113812ca8;
  uVar4 = uRam0000000113812ca0;
  uVar3 = uRam0000000113812c98;
  uVar2 = uRam0000000113812c90;
  uVar1 = uRam0000000113812c88;
  *param_1 = uRam0000000113812c80;
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



/* Entry: 103ffd9f0; end: 103ffda2b;  */

void FUN_103ffd9f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046518;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046518,&UNK_10dcc09f8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ffda2c; end: 103ffdb5f;  */

void FUN_103ffda2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  uStack_40 = *(undefined4 *)(unaff_x20 + 2);
  uStack_3c = *(undefined1 *)((long)unaff_x20 + 0x14);
  uStack_38 = *(undefined4 *)(unaff_x20 + 3);
  uStack_34 = *(undefined1 *)((long)unaff_x20 + 0x1c);
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ffdb60; end: 103ffdcf3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ffdb60(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  char cVar6;
  code *pcVar7;
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
  cVar6 = (char)((uint5)(int5)param_2[2] >> 0x20);
  if (((ulong)*(uint5 *)(param_1 + 2) & 0xff00000000) == 0x100000000) {
    if (cVar6 != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (cVar6 == '\x01') {
      return (byte *)0x0;
    }
    if ((int)*(uint5 *)(param_1 + 2) != (int)(int5)param_2[2]) {
      return (byte *)0x0;
    }
  }
  cVar6 = (char)((uint5)(int5)param_2[3] >> 0x20);
  if (((ulong)*(uint5 *)(param_1 + 3) & 0xff00000000) == 0x100000000) {
    if (cVar6 == '\x01') {
SUB_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
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
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar7)();
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
                pbVar13 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar7)();
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
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar7)();
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
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar13 = (byte *)((long)register0x00000008 + -0x70);
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
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar7)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar7)();
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
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,
                                lVar24,uVar16);
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar9;
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
              if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
  }
  else if ((cVar6 != '\x01') && ((int)*(uint5 *)(param_1 + 3) == (int)(int5)param_2[3]))
  goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103ffdcf4; end: 103ffe07f;  */

uint FUN_103ffdcf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_120 [64];
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
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uStack_b8 = puVar4[5];
        uStack_c0 = puVar4[4];
        uStack_a8 = puVar4[7];
        uStack_b0 = puVar4[6];
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        uStack_78 = puVar5[5];
        uStack_80 = puVar5[4];
        uStack_68 = puVar5[7];
        uStack_70 = puVar5[6];
        func_0x0001017405b4(&uStack_e0,auStack_120);
        func_0x0001017405b4(&uStack_a0,auStack_120);
        puVar2 = &uStack_e0;
        FUN_104004d98(puVar2,&uStack_a0);
        func_0x0001017405f0(&uStack_a0);
        func_0x0001017405f0(&uStack_e0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103ffddcc;
        puVar5 = puVar5 + 8;
        puVar4 = puVar4 + 8;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_103ffddcc:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 103ffe080; end: 103ffe11b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ffe080(ulong *param_1,ulong *param_2)

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
  if ((uVar13 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) != 0)) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] == '\x01') goto LAB_103ffe108;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[2];
      if ((char)param_2[3] == '\x01') {
        if (uVar13 != 0) {
          return (byte *)0x0;
        }
        goto LAB_103ffe108;
      }
    }
    if (uVar13 == param_2[2]) {
LAB_103ffe108:
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
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
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
                                                                               bVar28 | auVar44[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                         CONCAT11(bVar29 | auVar44[1
                                                  ],bVar28 | auVar44[0])))))));
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
  }
  return (byte *)0x0;
}



/* Entry: 103ffe11c; end: 103ffe18b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ffe11c(byte *param_1,byte *param_2,ulong param_3,ulong param_4,long param_5,
                    ulong param_6,undefined8 param_7,undefined8 param_8)

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
  char cVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  
  cVar16 = (char)((ulong)param_8 >> 0x20);
  cVar15 = (char)((ulong)param_7 >> 0x20);
  if ((param_3 & 0xff00000000) == 0x100000000) {
    if (cVar15 != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (cVar15 == '\x01') {
      return (byte *)0x0;
    }
    if ((int)param_3 != (int)param_7) {
      return (byte *)0x0;
    }
  }
  if ((param_4 & 0xff00000000) == 0x100000000) {
    if (cVar16 == '\x01') {
SUB_100e25fcc:
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
        uVar17 = uVar4 >> 0x1e;
        uVar5 = (uint)(param_6 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        iVar7 = (int)param_1;
        pbVar11 = param_2;
        if ((ulong)param_2 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
              (param_6 >> 0x3e < 3)) ||
             ((uVar19 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
          goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar19 = (ulong)param_2 >> 0x30 & 0xff;
          }
          else {
            iVar18 = (int)((ulong)param_1 >> 0x20);
            if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar19 = (ulong)(iVar18 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar20 == 0) {
            uVar21 = param_6 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar18 = (int)((ulong)param_5 >> 0x20);
          if (SBORROW4(iVar18,(int)param_5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar19 == (long)(iVar18 - (int)param_5)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar17 == 2) {
            uVar19 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
            if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar19 = 0;
          if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar20 == 2) {
            uVar21 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
            if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar19 < 1) goto code_r0x000100e26128;
            if (uVar17 < 2) {
              if (uVar17 == 0) {
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
                pbVar11 = (byte *)((long)register0x00000008 +
                                  (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
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
              if (uVar17 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar23 = *(long *)(param_1 + 0x10);
              unaff_x24 = *(byte **)(param_1 + 0x18);
              func_0x000107c5ec30();
              pbVar11 = param_1;
              if (param_1 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)pbVar11)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                param_1 = param_1 + (lVar23 - (long)pbVar11);
              }
              unaff_x23 = unaff_x24 + -lVar23;
              if (SBORROW8((long)unaff_x24,lVar23)) {
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
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,
                                param_5,param_6);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = param_6;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar19 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        pbVar22 = *(byte **)(pbVar8 + 0x18);
        bVar25 = pbVar8[0x28];
        param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar12 = param_1;
        if (bVar25 < 3) {
          if (bVar25 == 0) {
            if (pbVar11[0x28] == 0) {
              lVar23 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar23,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar25 == 1) {
            if (pbVar11[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar11 + 8);
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar23 = *(long *)pbVar11;
            uVar9 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar23,uVar9);
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
            lVar23 = *(long *)(pbVar11 + 0x18);
            if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
              if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar23 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar23);
              func_0x000107c61174();
              pbVar11 = pbVar22;
              func_0x000107c60118();
              func_0x000107c61170(pbVar22);
              func_0x000107c61170(lVar23);
              pbVar22 = pbVar11;
joined_r0x000100e266a4:
              if (((ulong)pbVar22 & 1) == 0) {
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
        lVar24 = *(long *)(pbVar8 + 0x20);
        if (bVar25 < 5) {
          if (bVar25 != 3) {
            if (pbVar11[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)pbVar11;
            pbVar14 = *(byte **)(pbVar11 + 8);
            if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
               (pbVar10 = param_2, pbVar12 = pbVar22, pbVar13 = *(byte **)(pbVar11 + 0x10),
               pbVar14 = *(byte **)(pbVar11 + 0x18),
               param_2 == *(byte **)(pbVar11 + 0x10) && pbVar22 == *(byte **)(pbVar11 + 0x18))) {
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
          lVar23 = *(long *)(pbVar11 + 0x20);
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
          if (lVar24 != 0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar11 + 0x18)) && (lVar24 == lVar23)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar24,*(byte **)(pbVar11 + 0x18),lVar23,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar25 != 5) {
          if ((((pbVar22 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar24 == 0) && param_2 == (byte *)0x0) {
            if (pbVar11[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar11 + 0x20);
            lVar23 = *(long *)(pbVar11 + 0x18);
            bVar25 = pbVar11[8] | (byte)lVar23;
            bVar26 = pbVar11[9] | (byte)((ulong)lVar23 >> 8);
            bVar27 = pbVar11[10] | (byte)((ulong)lVar23 >> 0x10);
            bVar28 = pbVar11[0xb] | (byte)((ulong)lVar23 >> 0x18);
            bVar29 = pbVar11[0xc] | (byte)((ulong)lVar23 >> 0x20);
            bVar30 = pbVar11[0xd] | (byte)((ulong)lVar23 >> 0x28);
            bVar31 = pbVar11[0xe] | (byte)((ulong)lVar23 >> 0x30);
            bVar32 = pbVar11[0xf] | (byte)((ulong)lVar23 >> 0x38);
            bVar33 = pbVar11[0x10] | (byte)lVar24;
            bVar34 = pbVar11[0x11] | (byte)((ulong)lVar24 >> 8);
            bVar35 = pbVar11[0x12] | (byte)((ulong)lVar24 >> 0x10);
            bVar36 = pbVar11[0x13] | (byte)((ulong)lVar24 >> 0x18);
            bVar37 = pbVar11[0x14] | (byte)((ulong)lVar24 >> 0x20);
            bVar38 = pbVar11[0x15] | (byte)((ulong)lVar24 >> 0x28);
            bVar39 = pbVar11[0x16] | (byte)((ulong)lVar24 >> 0x30);
            bVar40 = pbVar11[0x17] | (byte)((ulong)lVar24 >> 0x38);
            auVar41[1] = bVar26;
            auVar41[0] = bVar25;
            auVar41[2] = bVar27;
            auVar41[3] = bVar28;
            auVar41[4] = bVar29;
            auVar41[5] = bVar30;
            auVar41[6] = bVar31;
            auVar41[7] = bVar32;
            auVar41[8] = bVar33;
            auVar41[9] = bVar34;
            auVar41[10] = bVar35;
            auVar41[0xb] = bVar36;
            auVar41[0xc] = bVar37;
            auVar41[0xd] = bVar38;
            auVar41[0xe] = bVar39;
            auVar41[0xf] = bVar40;
            auVar3[1] = bVar26;
            auVar3[0] = bVar25;
            auVar3[2] = bVar27;
            auVar3[3] = bVar28;
            auVar3[4] = bVar29;
            auVar3[5] = bVar30;
            auVar3[6] = bVar31;
            auVar3[7] = bVar32;
            auVar3[8] = bVar33;
            auVar3[9] = bVar34;
            auVar3[10] = bVar35;
            auVar3[0xb] = bVar36;
            auVar3[0xc] = bVar37;
            auVar3[0xd] = bVar38;
            auVar3[0xe] = bVar39;
            auVar3[0xf] = bVar40;
            auVar41 = NEON_ext(auVar41,auVar3,8,1);
            if (CONCAT17(bVar32 | auVar41[7],
                         CONCAT16(bVar31 | auVar41[6],
                                  CONCAT15(bVar30 | auVar41[5],
                                           CONCAT14(bVar29 | auVar41[4],
                                                    CONCAT13(bVar28 | auVar41[3],
                                                             CONCAT12(bVar27 | auVar41[2],
                                                                      CONCAT11(bVar26 | auVar41[1],
                                                                               bVar25 | auVar41[0]))
                                                            ))))) == 0 && *(long *)pbVar11 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
              lVar24 == 0)) {
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
          lVar24 = *(long *)(pbVar11 + 0x20);
          lVar23 = *(long *)(pbVar11 + 0x18);
          bVar25 = pbVar11[8] | (byte)lVar23;
          bVar26 = pbVar11[9] | (byte)((ulong)lVar23 >> 8);
          bVar27 = pbVar11[10] | (byte)((ulong)lVar23 >> 0x10);
          bVar28 = pbVar11[0xb] | (byte)((ulong)lVar23 >> 0x18);
          bVar29 = pbVar11[0xc] | (byte)((ulong)lVar23 >> 0x20);
          bVar30 = pbVar11[0xd] | (byte)((ulong)lVar23 >> 0x28);
          bVar31 = pbVar11[0xe] | (byte)((ulong)lVar23 >> 0x30);
          bVar32 = pbVar11[0xf] | (byte)((ulong)lVar23 >> 0x38);
          bVar33 = pbVar11[0x10] | (byte)lVar24;
          bVar34 = pbVar11[0x11] | (byte)((ulong)lVar24 >> 8);
          bVar35 = pbVar11[0x12] | (byte)((ulong)lVar24 >> 0x10);
          bVar36 = pbVar11[0x13] | (byte)((ulong)lVar24 >> 0x18);
          bVar37 = pbVar11[0x14] | (byte)((ulong)lVar24 >> 0x20);
          bVar38 = pbVar11[0x15] | (byte)((ulong)lVar24 >> 0x28);
          bVar39 = pbVar11[0x16] | (byte)((ulong)lVar24 >> 0x30);
          bVar40 = pbVar11[0x17] | (byte)((ulong)lVar24 >> 0x38);
          auVar1[1] = bVar26;
          auVar1[0] = bVar25;
          auVar1[2] = bVar27;
          auVar1[3] = bVar28;
          auVar1[4] = bVar29;
          auVar1[5] = bVar30;
          auVar1[6] = bVar31;
          auVar1[7] = bVar32;
          auVar1[8] = bVar33;
          auVar1[9] = bVar34;
          auVar1[10] = bVar35;
          auVar1[0xb] = bVar36;
          auVar1[0xc] = bVar37;
          auVar1[0xd] = bVar38;
          auVar1[0xe] = bVar39;
          auVar1[0xf] = bVar40;
          auVar2[1] = bVar26;
          auVar2[0] = bVar25;
          auVar2[2] = bVar27;
          auVar2[3] = bVar28;
          auVar2[4] = bVar29;
          auVar2[5] = bVar30;
          auVar2[6] = bVar31;
          auVar2[7] = bVar32;
          auVar2[8] = bVar33;
          auVar2[9] = bVar34;
          auVar2[10] = bVar35;
          auVar2[0xb] = bVar36;
          auVar2[0xc] = bVar37;
          auVar2[0xd] = bVar38;
          auVar2[0xe] = bVar39;
          auVar2[0xf] = bVar40;
          auVar41 = NEON_ext(auVar1,auVar2,8,1);
          lVar23 = CONCAT17(bVar32 | auVar41[7],
                            CONCAT16(bVar31 | auVar41[6],
                                     CONCAT15(bVar30 | auVar41[5],
                                              CONCAT14(bVar29 | auVar41[4],
                                                       CONCAT13(bVar28 | auVar41[3],
                                                                CONCAT12(bVar27 | auVar41[2],
                                                                         CONCAT11(bVar26 | auVar41[1
                                                  ],bVar25 | auVar41[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar11[0x28] != 5) {
          return (byte *)0x0;
        }
        param_5 = *(long *)(pbVar11 + 8);
        param_6 = *(ulong *)(pbVar11 + 0x10);
        lVar23 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar23,uVar9);
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
  }
  else if ((cVar16 != '\x01') && ((int)param_4 == (int)param_8)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103ffe18c; end: 103ffe8db;  */

uint FUN_103ffe18c(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint5 uVar5;
  uint5 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  undefined5 uStack_98;
  uint3 uStack_93;
  uint5 uStack_90;
  undefined3 uStack_8b;
  uint5 uStack_88;
  ulong uStack_80;
  undefined5 uStack_78;
  uint3 uStack_73;
  uint5 uStack_70;
  undefined3 uStack_6b;
  uint5 uStack_68;
  
  lVar9 = *param_1;
  lVar10 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar10 < 2) {
      if (lVar10 == 0) {
        if (lVar9 != 0) {
          return 0;
        }
      }
      else if (lVar9 != 1) {
        return 0;
      }
    }
    else if (lVar10 == 2) {
      if (lVar9 != 2) {
        return 0;
      }
    }
    else if (lVar10 == 3) {
      if (lVar9 != 3) {
        return 0;
      }
    }
    else if (lVar9 != 4) {
      return 0;
    }
  }
  else if (lVar9 != lVar10) {
    return 0;
  }
  uVar13 = param_1[6];
  uStack_78 = (undefined5)param_1[7];
  uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x45);
  uStack_68 = (uint5)((ulong)*(undefined8 *)((long)param_1 + 0x45) >> 0x18);
  uStack_73 = (uint3)*(undefined8 *)((long)param_1 + 0x3d);
  uStack_70 = (uint5)((ulong)*(undefined8 *)((long)param_1 + 0x3d) >> 0x18);
  uVar6 = uStack_70;
  lVar9 = param_2[6];
  uStack_98 = (undefined5)param_2[7];
  uStack_8b = (undefined3)*(undefined8 *)((long)param_2 + 0x45);
  uStack_88 = (uint5)((ulong)*(undefined8 *)((long)param_2 + 0x45) >> 0x18);
  uStack_93 = (uint3)*(undefined8 *)((long)param_2 + 0x3d);
  uStack_90 = (uint5)((ulong)*(undefined8 *)((long)param_2 + 0x3d) >> 0x18);
  uVar5 = uStack_90;
  uVar3 = CONCAT35(uStack_73,uStack_78);
  uVar4 = CONCAT35(uStack_6b,uStack_70);
  uVar11 = (ulong)uStack_68;
  uVar1 = CONCAT35(uStack_93,uStack_98);
  uVar2 = CONCAT35(uStack_8b,uStack_90);
  uVar12 = (ulong)uStack_88;
  lStack_a0 = lVar9;
  uStack_80 = uVar13;
  if (uStack_73 >> 0x14 < 0xf) {
    if (uStack_93 >> 0x14 < 0xf) {
      func_0x00010400424c(&uStack_80,auStack_c0,0x113046168,&UNK_10dcbf778);
      func_0x00010400424c(&lStack_a0,auStack_c0,0x113046168,&UNK_10dcbf778);
      uVar8 = uVar13;
      FUN_103ffe11c(uVar13,uVar3,(ulong)uVar6,uVar11,lVar9,uVar1,(ulong)uVar5,uVar12);
      func_0x00010174b89c(lVar9,uVar1,uVar2,uVar12);
      func_0x00010174b89c(uVar13,uVar3,uVar4,uVar11);
      if ((uVar8 & 1) != 0) goto LAB_103ffe3d4;
      goto LAB_103ffe30c;
    }
LAB_103ffe2ac:
    func_0x00010400424c(&uStack_80,auStack_c0,0x113046168,&UNK_10dcbf778);
    func_0x00010400424c(&lStack_a0,auStack_c0,0x113046168,&UNK_10dcbf778);
    func_0x00010174b89c(uVar13,uVar3,uVar4,uVar11);
    func_0x00010174b89c(lVar9,uVar1,uVar2,uVar12);
  }
  else {
    if (uStack_93 >> 0x14 < 0xf) goto LAB_103ffe2ac;
    func_0x00010400424c(&uStack_80,auStack_c0,0x113046168,&UNK_10dcbf778);
    func_0x00010400424c(&lStack_a0,auStack_c0,0x113046168,&UNK_10dcbf778);
    func_0x00010174b89c(uVar13,uVar3,uVar4,uVar11);
LAB_103ffe3d4:
    lVar9 = param_1[2];
    lVar10 = param_2[2];
    if ((char)param_2[3] != '\x01') {
      if (lVar9 == lVar10) goto LAB_103ffe42c;
      goto LAB_103ffe30c;
    }
    if (lVar10 < 2) {
      if (lVar10 == 0) {
        if (lVar9 == 0) {
LAB_103ffe42c:
          lVar9 = param_1[4];
          func_0x000100e25fcc(lVar9,param_1[5],param_2[4],param_2[5]);
          uVar7 = (uint)lVar9;
          goto LAB_103ffe310;
        }
      }
      else if (lVar9 == 1) goto LAB_103ffe42c;
    }
    else if (lVar10 == 2) {
      if (lVar9 == 2) goto LAB_103ffe42c;
    }
    else if (lVar9 == 3) goto LAB_103ffe42c;
  }
LAB_103ffe30c:
  uVar7 = 0;
LAB_103ffe310:
  return uVar7 & 1;
}



/* Entry: 103ffe8dc; end: 103ffe9db;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ffe8dc(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  uVar1 = (uint)(param_6 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain();
      param_4 = param_2;
    }
    else {
      func_0x00010174c278();
      param_3 = param_5;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    _swift_bridgeObjectRetain(param_2);
    param_3 = param_6 & 0xcfffffffffffffff;
    param_4 = param_5;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 103ffe9dc; end: 103ffeb3f;  */

uint FUN_103ffe9dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uVar7;
  
  uVar8 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  uVar12 = param_1[5];
  if ((uVar12 >> 0x3c & 3) == 0) {
    if ((*(byte *)((long)param_2 + 0x2f) & 0x30) == 0) {
      uVar12 = param_2[1];
      uVar1 = param_2[2];
      uVar10 = *param_2;
      lVar14 = *(long *)(uVar8 + 0x10);
      if (lVar14 == *(long *)(uVar10 + 0x10)) {
        if (lVar14 != 0 && uVar8 != uVar10) {
          puVar15 = (undefined8 *)(uVar8 + 0x20);
          puVar9 = (ulong *)(uVar10 + 0x20);
          do {
            uStack_d8 = puVar15[1];
            uStack_e0 = *puVar15;
            uStack_c8 = puVar15[3];
            uStack_d0 = puVar15[2];
            uStack_b8 = puVar15[5];
            uStack_c0 = puVar15[4];
            uStack_a8 = puVar15[7];
            uStack_b0 = puVar15[6];
            uStack_98 = puVar9[1];
            uStack_a0 = *puVar9;
            uStack_88 = puVar9[3];
            uStack_90 = puVar9[2];
            uStack_78 = puVar9[5];
            uStack_80 = puVar9[4];
            uStack_68 = puVar9[7];
            uStack_70 = puVar9[6];
            func_0x0001017405b4(&uStack_e0,auStack_120);
            func_0x0001017405b4(&uStack_a0,auStack_120);
            puVar6 = &uStack_e0;
            FUN_104004d98(puVar6,&uStack_a0);
            func_0x0001017405f0(&uStack_a0);
            func_0x0001017405f0(&uStack_e0);
            if (((ulong)puVar6 & 1) == 0) goto LAB_103ffddcc;
            puVar9 = puVar9 + 8;
            puVar15 = puVar15 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        func_0x000100e25fcc(uVar7,uVar2,uVar12,uVar1);
        uVar5 = (uint)uVar7;
      }
      else {
LAB_103ffddcc:
        uVar5 = 0;
      }
      return uVar5 & 1;
    }
  }
  else {
    uVar1 = param_1[3];
    uVar10 = param_1[4];
    if (((uint)(uVar12 >> 0x3c) & 3) == 1) {
      if ((param_2[5] & 0x3000000000000000) == 0x1000000000000000) {
        uStack_80 = param_2[4];
        uStack_98 = param_2[1];
        uStack_a0 = *param_2;
        uStack_88 = param_2[3];
        uStack_90 = param_2[2];
        puVar9 = &uStack_78;
        uStack_78 = uVar8;
        uStack_70 = uVar7;
        uStack_68 = uVar2;
        func_0x000103ffddf4(puVar9,&uStack_a0);
        uVar5 = (uint)puVar9;
        goto LAB_103ffeb20;
      }
    }
    else {
      uVar13 = param_2[5];
      if ((uVar13 & 0x3000000000000000) == 0x2000000000000000) {
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar11 = param_2[4];
        if (((uVar8 == *param_2) && (uVar7 == param_2[1])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar7,*param_2,param_2[1],0), (uVar8 & 1) != 0)) {
          uVar7 = 0;
          if ((uVar1 & 0xff) != 1) {
            uVar7 = uVar2;
          }
          if ((char)uVar4 == '\x01') {
            if (uVar7 == 0) {
LAB_103ffeafc:
              func_0x000100e25fcc(uVar10,uVar12 & 0xcfffffffffffffff,uVar11,
                                  uVar13 & 0xcfffffffffffffff);
              if ((uVar10 & 1) != 0) {
                uVar5 = 1;
                goto LAB_103ffeb20;
              }
            }
          }
          else if (uVar7 == uVar3) goto LAB_103ffeafc;
        }
      }
    }
  }
  uVar5 = 0;
LAB_103ffeb20:
  return uVar5 & 1;
}



/* Entry: 103ffeb40; end: 103ffeb73;  */

undefined8 FUN_103ffeb40(undefined8 param_1,undefined8 param_2)

{
  FUN_104002a7c(param_2,param_1,&UNK_1107332e0);
  return param_2;
}



/* Entry: 103ffeb74; end: 103ffeb87;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ffeb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (((param_6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_6 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_6 = param_6 & 0xdfffffffffffffff;
  }
  _swift_bridgeObjectRetain(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 103ffeb88; end: 103ffebd7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ffeb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_6 = param_6 & 0xdfffffffffffffff;
  }
  _swift_bridgeObjectRetain(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 103ffebd8; end: 103ffec03;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ffebd8(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
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



/* Entry: 103ffec04; end: 103ffecc3;  */

void FUN_103ffec04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc0fc8;
  _swift_getWitnessTable(&DAT_10dcc0fc8,&UNK_110733e90);
  puRam0000000113046270 = puVar1;
  return;
}



/* Entry: 103ffecc4; end: 103fff1bf;  */

uint FUN_103ffecc4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar3 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar3 = *(long *)(&UNK_10dcc0f58 + lVar3 * 8);
  }
  lVar5 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar5 < 3) {
      if (lVar5 == 0) {
        if (lVar3 == 0) goto LAB_103ffed44;
      }
      else if (lVar5 == 1) {
        if (lVar3 == 1) goto LAB_103ffed44;
      }
      else if (lVar3 == 2) goto LAB_103ffed44;
    }
    else if (lVar5 < 5) {
      if (lVar5 == 3) {
        if (lVar3 == 9) {
LAB_103ffed44:
          uVar6 = param_1[2];
          if ((uVar6 == param_2[2] && param_1[3] == param_2[3]) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar6 & 1) != 0)) {
            lVar3 = param_1[5];
            uVar6 = param_1[4];
            lVar14 = param_1[7];
            lVar5 = param_1[6];
            uVar10 = param_1[9];
            lVar7 = param_1[8];
            lVar11 = param_2[5];
            uVar8 = param_2[4];
            lVar15 = param_2[7];
            lVar13 = param_2[6];
            uVar12 = param_2[9];
            lVar9 = param_2[8];
            uVar4 = uVar12 & 0x3000000000000000;
            uStack_130 = uVar8;
            lStack_128 = lVar11;
            lStack_120 = lVar13;
            lStack_118 = lVar15;
            lStack_110 = lVar9;
            uStack_108 = uVar12;
            uStack_100 = uVar6;
            lStack_f8 = lVar3;
            lStack_f0 = lVar5;
            lStack_e8 = lVar14;
            lStack_e0 = lVar7;
            uStack_d8 = uVar10;
            if (((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
              if (uVar4 == 0x3000000000000000) {
                func_0x00010400424c(&uStack_100,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
                func_0x00010400424c(&uStack_130,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
                func_0x000100db10b0(uVar6,lVar3,lVar5,lVar14,lVar7,uVar10);
LAB_103ffee10:
                uVar6 = param_1[10];
                if (((uVar6 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar6 & 1) != 0)) {
                  lVar3 = param_1[0xc];
                  func_0x000100e25fcc(lVar3,param_1[0xd],param_2[0xc],param_2[0xd]);
                  uVar1 = (uint)lVar3;
                  goto LAB_103fff19c;
                }
                goto LAB_103fff198;
              }
LAB_103ffee64:
              func_0x00010400424c(&uStack_100,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
              func_0x00010400424c(&uStack_130,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
              func_0x000100db10b0(uVar6,lVar3,lVar5,lVar14,lVar7,uVar10);
              uVar6 = uVar8;
              lVar3 = lVar11;
              lVar5 = lVar13;
              lVar14 = lVar15;
              lVar7 = lVar9;
              uVar10 = uVar12;
            }
            else {
              if (uVar4 == 0x3000000000000000) goto LAB_103ffee64;
              if ((uVar10 >> 0x3c & 3) == 0) {
                if (uVar4 == 0) {
                  func_0x00010400424c(&uStack_100,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
                  func_0x00010400424c(&uStack_130,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
                  uVar4 = uVar6;
                  func_0x000103ffdcf4(uVar6,lVar3,lVar5,uVar8,lVar11,lVar13);
                  func_0x000100db10b0(uVar8,lVar11,lVar13,lVar15,lVar9,uVar12);
                  func_0x000100db10b0(uVar6,lVar3,lVar5,lVar14,lVar7,uVar10);
                  if ((uVar4 & 1) != 0) goto LAB_103ffee10;
                  goto LAB_103fff198;
                }
              }
              else if (((uint)(uVar10 >> 0x3c) & 3) == 1) {
                uStack_160 = uVar6;
                lStack_158 = lVar3;
                lStack_150 = lVar5;
                lStack_148 = lVar14;
                lStack_140 = lVar7;
                if (uVar4 == 0x1000000000000000) {
                  uStack_c8 = uVar8;
                  lStack_c0 = lVar11;
                  lStack_b8 = lVar13;
                  lStack_b0 = lVar15;
                  lStack_a8 = lVar9;
                  func_0x00010400424c(&uStack_100,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
                  func_0x00010400424c(&uStack_130,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
                  puVar2 = &uStack_160;
                  func_0x000103ffddf4(puVar2,&uStack_c8);
                  uVar1 = (uint)puVar2;
LAB_103fff0e4:
                  func_0x000100db10b0(uVar8,lVar11,lVar13,lVar15,lVar9,uVar12);
                  func_0x000100db10b0(uVar6,lVar3,lVar5,lVar14,lVar7,uVar10);
                  if ((uVar1 & 1) != 0) goto LAB_103ffee10;
                  goto LAB_103fff198;
                }
              }
              else {
                uStack_a0 = uVar10 & 0xcfffffffffffffff;
                lStack_b0 = CONCAT71(lStack_b0._1_7_,(char)lVar14);
                uStack_c8 = uVar6;
                lStack_c0 = lVar3;
                lStack_b8 = lVar5;
                lStack_a8 = lVar7;
                if (uVar4 == 0x2000000000000000) {
                  uStack_70 = uVar12 & 0xcfffffffffffffff;
                  uStack_80 = (undefined1)lVar15;
                  uStack_98 = uVar8;
                  lStack_90 = lVar11;
                  lStack_88 = lVar13;
                  lStack_78 = lVar9;
                  func_0x00010400424c(&uStack_100,&uStack_160,0x112dc61d0,&UNK_10d985fb8);
                  func_0x00010400424c(&uStack_130,&uStack_160,0x112dc61d0,&UNK_10d985fb8);
                  puVar2 = &uStack_c8;
                  FUN_103ffe080(puVar2,&uStack_98);
                  uVar1 = (uint)puVar2;
                  goto LAB_103fff0e4;
                }
              }
              func_0x00010400424c(&uStack_100,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
              func_0x00010400424c(&uStack_130,&uStack_98,0x112dc61d0,&UNK_10d985fb8);
              func_0x000100db10b0(uVar8,lVar11,lVar13,lVar15,lVar9,uVar12);
            }
            func_0x000100db10b0(uVar6,lVar3,lVar5,lVar14,lVar7,uVar10);
          }
        }
      }
      else if (lVar3 == 10) goto LAB_103ffed44;
    }
    else if (lVar5 == 5) {
      if (lVar3 == 0xb) goto LAB_103ffed44;
    }
    else if (lVar3 == 0xc) goto LAB_103ffed44;
  }
  else if (lVar3 == lVar5) goto LAB_103ffed44;
LAB_103fff198:
  uVar1 = 0;
LAB_103fff19c:
  return uVar1 & 1;
}



/* Entry: 103fff1c0; end: 103fff1ff;  */

void FUN_103fff1c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfd88;
  _swift_getWitnessTable(&UNK_10dcbfd88,&UNK_110732f80);
  puRam0000000113046290 = puVar1;
  return;
}



/* Entry: 103fff200; end: 103fff57f;  */

uint FUN_103fff200(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auStack_498 [120];
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
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
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
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
  ulong uStack_1d8;
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
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
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
  
  uVar2 = *param_1;
  func_0x000103ffdba4(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    uStack_f8 = param_1[0xe];
    uStack_100 = param_1[0xd];
    uStack_e8 = param_1[0x10];
    uStack_f0 = param_1[0xf];
    uStack_d8 = param_1[0x12];
    uStack_e0 = param_1[0x11];
    uStack_d0 = param_1[0x13];
    uStack_138 = param_1[6];
    uStack_140 = param_1[5];
    uStack_128 = param_1[8];
    uStack_130 = param_1[7];
    uStack_118 = param_1[10];
    uStack_120 = param_1[9];
    uStack_108 = param_1[0xc];
    uStack_110 = param_1[0xb];
    uStack_1b8 = param_2[6];
    uStack_1c0 = param_2[5];
    uStack_1a8 = param_2[8];
    uStack_1b0 = param_2[7];
    uStack_198 = param_2[10];
    uStack_1a0 = param_2[9];
    uStack_188 = param_2[0xc];
    uStack_190 = param_2[0xb];
    uStack_178 = param_2[0xe];
    uStack_180 = param_2[0xd];
    uStack_168 = param_2[0x10];
    uStack_170 = param_2[0xf];
    uStack_158 = param_2[0x12];
    uStack_160 = param_2[0x11];
    uStack_150 = param_2[0x13];
    uStack_268 = param_1[0xe];
    uStack_270 = param_1[0xd];
    uStack_258 = param_1[0x10];
    uStack_260 = param_1[0xf];
    uStack_248 = param_1[0x12];
    uStack_250 = param_1[0x11];
    uStack_240 = param_1[0x13];
    uStack_2a8 = param_1[6];
    uStack_2b0 = param_1[5];
    uStack_298 = param_1[8];
    uStack_2a0 = param_1[7];
    uStack_288 = param_1[10];
    uStack_290 = param_1[9];
    uStack_278 = param_1[0xc];
    uStack_280 = param_1[0xb];
    uStack_320 = param_2[6];
    uStack_328 = param_2[5];
    uStack_310 = param_2[8];
    uStack_318 = param_2[7];
    uStack_300 = param_2[10];
    uStack_308 = param_2[9];
    uStack_2f0 = param_2[0xc];
    uStack_2f8 = param_2[0xb];
    uStack_2e0 = param_2[0xe];
    uStack_2e8 = param_2[0xd];
    uStack_2d0 = param_2[0x10];
    uStack_2d8 = param_2[0xf];
    uStack_2c0 = param_2[0x12];
    uStack_2c8 = param_2[0x11];
    uStack_2b8 = param_2[0x13];
    uStack_238 = uStack_328;
    uStack_230 = uStack_320;
    uStack_228 = uStack_318;
    uStack_220 = uStack_310;
    uStack_218 = uStack_308;
    uStack_210 = uStack_300;
    uStack_208 = uStack_2f8;
    uStack_200 = uStack_2f0;
    uStack_1f8 = uStack_2e8;
    uStack_1f0 = uStack_2e0;
    uStack_1e8 = uStack_2d8;
    uStack_1e0 = uStack_2d0;
    uStack_1d8 = uStack_2c8;
    uStack_1d0 = uStack_2c0;
    uStack_1c8 = uStack_2b8;
    if ((char)uStack_250 == -2) {
      if ((uStack_2c8 & 0xff) == 0xfe) {
        uStack_358 = param_1[0xe];
        uStack_360 = param_1[0xd];
        uStack_348 = param_1[0x10];
        uStack_350 = param_1[0xf];
        uStack_338 = param_1[0x12];
        uStack_340 = param_1[0x11];
        uStack_330 = param_1[0x13];
        uStack_398 = param_1[6];
        uStack_3a0 = param_1[5];
        uStack_388 = param_1[8];
        uStack_390 = param_1[7];
        uStack_378 = param_1[10];
        uStack_380 = param_1[9];
        uStack_368 = param_1[0xc];
        uStack_370 = param_1[0xb];
        func_0x00010400424c(&uStack_140,&uStack_c0,0x112dc60f8,&UNK_10d985ef0);
        func_0x00010400424c(&uStack_1c0,&uStack_c0,0x112dc60f8,&UNK_10d985ef0);
        func_0x00010400420c(&uStack_3a0,0x112dc60f8,&UNK_10d985ef0);
LAB_103fff54c:
        uVar2 = param_1[1];
        if (((uVar2 == param_2[1]) && (param_1[2] == param_2[2])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar2 = param_1[3];
          func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
          uVar1 = (uint)uVar2;
          goto LAB_103fff448;
        }
      }
      else {
LAB_103fff3b4:
        uStack_3a0 = uStack_2b0;
        uStack_398 = uStack_2a8;
        uStack_390 = uStack_2a0;
        uStack_388 = uStack_298;
        uStack_380 = uStack_290;
        uStack_378 = uStack_288;
        uStack_370 = uStack_280;
        uStack_368 = uStack_278;
        uStack_360 = uStack_270;
        uStack_358 = uStack_268;
        uStack_350 = uStack_260;
        uStack_348 = uStack_258;
        uStack_340 = uStack_250;
        uStack_338 = uStack_248;
        uStack_330 = uStack_240;
        func_0x00010400424c(&uStack_140,&uStack_c0,0x112dc60f8,&UNK_10d985ef0);
        func_0x00010400424c(&uStack_1c0,&uStack_c0,0x112dc60f8,&UNK_10d985ef0);
        func_0x00010400420c(&uStack_3a0,0x113046120,&UNK_10dcbf768);
      }
    }
    else {
      if ((uStack_2c8 & 0xff) == 0xfe) goto LAB_103fff3b4;
      uStack_3d8 = param_2[0xe];
      uStack_3e0 = param_2[0xd];
      uStack_3c8 = param_2[0x10];
      uStack_3d0 = param_2[0xf];
      uStack_3b8 = param_2[0x12];
      uStack_3c0 = param_2[0x11];
      uStack_3b0 = param_2[0x13];
      uStack_418 = param_2[6];
      uStack_420 = param_2[5];
      uStack_408 = param_2[8];
      uStack_410 = param_2[7];
      uStack_3f8 = param_2[10];
      uStack_400 = param_2[9];
      uStack_3e8 = param_2[0xc];
      uStack_3f0 = param_2[0xb];
      uStack_78 = param_1[0xe];
      uStack_80 = param_1[0xd];
      uStack_68 = param_1[0x10];
      uStack_70 = param_1[0xf];
      uStack_58 = param_1[0x12];
      uStack_60 = param_1[0x11];
      uStack_50 = param_1[0x13];
      uStack_b8 = param_1[6];
      uStack_c0 = param_1[5];
      uStack_a8 = param_1[8];
      uStack_b0 = param_1[7];
      uStack_98 = param_1[10];
      uStack_a0 = param_1[9];
      uStack_88 = param_1[0xc];
      uStack_90 = param_1[0xb];
      uStack_3a0 = uStack_420;
      uStack_398 = uStack_418;
      uStack_390 = uStack_410;
      uStack_388 = uStack_408;
      uStack_380 = uStack_400;
      uStack_378 = uStack_3f8;
      uStack_370 = uStack_3f0;
      uStack_368 = uStack_3e8;
      uStack_360 = uStack_3e0;
      uStack_358 = uStack_3d8;
      uStack_350 = uStack_3d0;
      uStack_348 = uStack_3c8;
      uStack_340 = uStack_3c0;
      uStack_338 = uStack_3b8;
      uStack_330 = uStack_3b0;
      func_0x00010400424c(&uStack_140,auStack_498,0x112dc60f8,&UNK_10d985ef0);
      func_0x00010400424c(&uStack_1c0,auStack_498,0x112dc60f8,&UNK_10d985ef0);
      puVar3 = &uStack_c0;
      func_0x000103ffe468(puVar3,&uStack_3a0);
      func_0x00010400420c(&uStack_420,0x112dc60f8,&UNK_10d985ef0);
      func_0x00010400420c(&uStack_2b0,0x112dc60f8,&UNK_10d985ef0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103fff54c;
    }
  }
  uVar1 = 0;
LAB_103fff448:
  return uVar1 & 1;
}



/* Entry: 103fff580; end: 103fff5bf;  */

void FUN_103fff580(void)

{
  undefined *puVar1;
  
  if (puRam00000001130462a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfe60;
  _swift_getWitnessTable(&UNK_10dcbfe60,&UNK_1107330a0);
  puRam00000001130462a0 = puVar1;
  return;
}



/* Entry: 103fff5c0; end: 103fffa77;  */

uint FUN_103fff5c0(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar4 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar4 = *(long *)(&UNK_10dcc0f58 + lVar4 * 8);
  }
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 3) {
      if (lVar6 == 0) {
        if (lVar4 != 0) {
          return 0;
        }
      }
      else if (lVar6 == 1) {
        if (lVar4 != 1) {
          return 0;
        }
      }
      else if (lVar4 != 2) {
        return 0;
      }
    }
    else if (lVar6 < 5) {
      if (lVar6 == 3) {
        if (lVar4 != 9) {
          return 0;
        }
      }
      else if (lVar4 != 10) {
        return 0;
      }
    }
    else if (lVar6 == 5) {
      if (lVar4 != 0xb) {
        return 0;
      }
    }
    else if (lVar4 != 0xc) {
      return 0;
    }
  }
  else if (lVar4 != lVar6) {
    return 0;
  }
  lVar6 = param_1[3];
  lVar4 = param_1[2];
  lVar15 = param_1[5];
  lVar13 = param_1[4];
  uVar10 = param_1[7];
  lVar7 = param_1[6];
  lVar11 = param_2[3];
  lVar8 = param_2[2];
  lVar16 = param_2[5];
  lVar14 = param_2[4];
  uVar12 = param_2[7];
  lVar9 = param_2[6];
  uVar5 = uVar12 & 0x3000000000000000;
  lStack_130 = lVar8;
  lStack_128 = lVar11;
  lStack_120 = lVar14;
  lStack_118 = lVar16;
  lStack_110 = lVar9;
  uStack_108 = uVar12;
  lStack_100 = lVar4;
  lStack_f8 = lVar6;
  lStack_f0 = lVar13;
  lStack_e8 = lVar15;
  lStack_e0 = lVar7;
  uStack_d8 = uVar10;
  if (((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar5 == 0x3000000000000000) {
      func_0x00010400424c(&lStack_100,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      func_0x00010400424c(&lStack_130,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      func_0x000100db10b0(lVar4,lVar6,lVar13,lVar15,lVar7,uVar10);
LAB_103fff6e8:
      uVar10 = param_1[8];
      if (((uVar10 == param_2[8]) && (param_1[9] == param_2[9])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar10 & 1) != 0)) {
        uVar10 = param_1[10];
        if (((uVar10 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar10 & 1) != 0)) {
          lVar4 = param_1[0xc];
          func_0x000100e25fcc(lVar4,param_1[0xd],param_2[0xc],param_2[0xd]);
          uVar1 = (uint)lVar4;
          goto LAB_103fffa54;
        }
      }
    }
    else {
LAB_103fff75c:
      func_0x00010400424c(&lStack_100,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      func_0x00010400424c(&lStack_130,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      func_0x000100db10b0(lVar4,lVar6,lVar13,lVar15,lVar7,uVar10);
      lVar4 = lVar8;
      lVar6 = lVar11;
      lVar13 = lVar14;
      lVar15 = lVar16;
      lVar7 = lVar9;
      uVar10 = uVar12;
LAB_103fffa4c:
      func_0x000100db10b0(lVar4,lVar6,lVar13,lVar15,lVar7,uVar10);
    }
  }
  else {
    if (uVar5 == 0x3000000000000000) goto LAB_103fff75c;
    if ((uVar10 >> 0x3c & 3) == 0) {
      if (uVar5 != 0) goto LAB_103fff9e4;
      func_0x00010400424c(&lStack_100,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      func_0x00010400424c(&lStack_130,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      lVar2 = lVar4;
      func_0x000103ffdcf4(lVar4,lVar6,lVar13,lVar8,lVar11,lVar14);
      uVar1 = (uint)lVar2;
    }
    else if (((uint)(uVar10 >> 0x3c) & 3) == 1) {
      lStack_160 = lVar4;
      lStack_158 = lVar6;
      lStack_150 = lVar13;
      lStack_148 = lVar15;
      lStack_140 = lVar7;
      if (uVar5 != 0x1000000000000000) {
LAB_103fff9e4:
        func_0x00010400424c(&lStack_100,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
        func_0x00010400424c(&lStack_130,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
        func_0x000100db10b0(lVar8,lVar11,lVar14,lVar16,lVar9,uVar12);
        goto LAB_103fffa4c;
      }
      lStack_c8 = lVar8;
      lStack_c0 = lVar11;
      lStack_b8 = lVar14;
      lStack_b0 = lVar16;
      lStack_a8 = lVar9;
      func_0x00010400424c(&lStack_100,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      func_0x00010400424c(&lStack_130,&lStack_98,0x112dc61c8,&UNK_10d985fb0);
      plVar3 = &lStack_160;
      func_0x000103ffddf4(plVar3,&lStack_c8);
      uVar1 = (uint)plVar3;
    }
    else {
      uStack_a0 = uVar10 & 0xcfffffffffffffff;
      lStack_b0 = CONCAT71(lStack_b0._1_7_,(char)lVar15);
      lStack_c8 = lVar4;
      lStack_c0 = lVar6;
      lStack_b8 = lVar13;
      lStack_a8 = lVar7;
      if (uVar5 != 0x2000000000000000) goto LAB_103fff9e4;
      uStack_70 = uVar12 & 0xcfffffffffffffff;
      uStack_80 = (undefined1)lVar16;
      lStack_98 = lVar8;
      lStack_90 = lVar11;
      lStack_88 = lVar14;
      lStack_78 = lVar9;
      func_0x00010400424c(&lStack_100,&lStack_160,0x112dc61c8,&UNK_10d985fb0);
      func_0x00010400424c(&lStack_130,&lStack_160,0x112dc61c8,&UNK_10d985fb0);
      plVar3 = &lStack_c8;
      FUN_103ffe080(plVar3,&lStack_98);
      uVar1 = (uint)plVar3;
    }
    func_0x000100db10b0(lVar8,lVar11,lVar14,lVar16,lVar9,uVar12);
    func_0x000100db10b0(lVar4,lVar6,lVar13,lVar15,lVar7,uVar10);
    if ((uVar1 & 1) != 0) goto LAB_103fff6e8;
  }
  uVar1 = 0;
LAB_103fffa54:
  return uVar1 & 1;
}



/* Entry: 103fffa78; end: 103fffdb7;  */

void FUN_103fffa78(void)

{
  undefined *puVar1;
  
  if (puRam00000001130462b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbff38;
  _swift_getWitnessTable(&UNK_10dcbff38,&UNK_110733128);
  puRam00000001130462b0 = puVar1;
  return;
}



/* Entry: 103fffdb8; end: 103fffdcb;  */

void FUN_103fffdb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fffdcc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fffe0c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fffdcc; end: 103fffe77;  */

void FUN_103fffdcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbf828;
  _swift_getWitnessTable(&UNK_10dcbf828,&UNK_110732e80);
  puRam0000000113046378 = puVar1;
  return;
}



/* Entry: 103fffe78; end: 103fffe7b;  */

void FUN_103fffe78(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbf868;
  _swift_getWitnessTable(&UNK_10dcbf868,&UNK_110732e80);
  puRam0000000113046398 = puVar1;
  return;
}



/* Entry: 103fffe7c; end: 103fffebb;  */

void FUN_103fffe7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbf868;
  _swift_getWitnessTable(&UNK_10dcbf868,&UNK_110732e80);
  puRam0000000113046398 = puVar1;
  return;
}



/* Entry: 103fffebc; end: 103fffecf;  */

void FUN_103fffebc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fffed0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ffff10)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fffed0; end: 103ffff7b;  */

void FUN_103fffed0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbf9c8;
  _swift_getWitnessTable(&UNK_10dcbf9c8,&UNK_110733608);
  puRam00000001130463a0 = puVar1;
  return;
}



/* Entry: 103ffff7c; end: 103ffff7f;  */

void FUN_103ffff7c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfa08;
  _swift_getWitnessTable(&UNK_10dcbfa08,&UNK_110733608);
  puRam00000001130463c0 = puVar1;
  return;
}



/* Entry: 103ffff80; end: 103ffffbf;  */

void FUN_103ffff80(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfa08;
  _swift_getWitnessTable(&UNK_10dcbfa08,&UNK_110733608);
  puRam00000001130463c0 = puVar1;
  return;
}



/* Entry: 103ffffc0; end: 103ffffd3;  */

void FUN_103ffffc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ffffd4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104000014)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ffffd4; end: 10400007f;  */

void FUN_103ffffd4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfac8;
  _swift_getWitnessTable(&UNK_10dcbfac8,&UNK_1107337a0);
  puRam00000001130463c8 = puVar1;
  return;
}



/* Entry: 104000080; end: 104000083;  */

void FUN_104000080(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfb08;
  _swift_getWitnessTable(&UNK_10dcbfb08,&UNK_1107337a0);
  puRam00000001130463e8 = puVar1;
  return;
}



/* Entry: 104000084; end: 1040000c3;  */

void FUN_104000084(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfb08;
  _swift_getWitnessTable(&UNK_10dcbfb08,&UNK_1107337a0);
  puRam00000001130463e8 = puVar1;
  return;
}



/* Entry: 1040000c4; end: 1040000d7;  */

void FUN_1040000c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040000d8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104000118)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040000d8; end: 104000183;  */

void FUN_1040000d8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130463f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfbc8;
  _swift_getWitnessTable(&UNK_10dcbfbc8,&UNK_110733830);
  puRam00000001130463f0 = puVar1;
  return;
}



/* Entry: 104000184; end: 1040001c7;  */

void FUN_104000184(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1040001c8; end: 1040001cb;  */

void FUN_1040001c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfc08;
  _swift_getWitnessTable(&UNK_10dcbfc08,&UNK_110733830);
  puRam0000000113046410 = puVar1;
  return;
}



/* Entry: 1040001cc; end: 10400020b;  */

void FUN_1040001cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfc08;
  _swift_getWitnessTable(&UNK_10dcbfc08,&UNK_110733830);
  puRam0000000113046410 = puVar1;
  return;
}



/* Entry: 10400020c; end: 10400022f;  */

void FUN_10400020c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104000230();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104000230; end: 10400026f;  */

void FUN_104000230(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfc88;
  _swift_getWitnessTable(&UNK_10dcbfc88,&UNK_110732ef8);
  puRam0000000113046418 = puVar1;
  return;
}



/* Entry: 104000270; end: 104000287;  */

void FUN_104000270(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103ffec44)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10174cca8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104000288; end: 1040002c7;  */

void FUN_104000288(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfcf0;
  _swift_getWitnessTable(&UNK_10dcbfcf0,&UNK_110732ef8);
  puRam0000000113046420 = puVar1;
  return;
}



/* Entry: 1040002c8; end: 1040002eb;  */

void FUN_1040002c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040002ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1040002ec; end: 10400032b;  */

void FUN_1040002ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfd60;
  _swift_getWitnessTable(&UNK_10dcbfd60,&UNK_110732f80);
  puRam0000000113046428 = puVar1;
  return;
}



/* Entry: 10400032c; end: 104000343;  */

void FUN_10400032c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fff1c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10174cce8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104000344; end: 104000383;  */

void FUN_104000344(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfdc8;
  _swift_getWitnessTable(&UNK_10dcbfdc8,&UNK_110732f80);
  puRam0000000113046430 = puVar1;
  return;
}



/* Entry: 104000384; end: 1040003a7;  */

void FUN_104000384(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040003a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1040003a8; end: 1040003e7;  */

void FUN_1040003a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfe38;
  _swift_getWitnessTable(&UNK_10dcbfe38,&UNK_1107330a0);
  puRam0000000113046438 = puVar1;
  return;
}



/* Entry: 1040003e8; end: 1040003ff;  */

void FUN_1040003e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fff580();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10174cfcc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104000400; end: 10400043f;  */

void FUN_104000400(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbfea0;
  _swift_getWitnessTable(&UNK_10dcbfea0,&UNK_1107330a0);
  puRam0000000113046440 = puVar1;
  return;
}



/* Entry: 104000440; end: 104000463;  */

void FUN_104000440(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104000464();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104000464; end: 1040004a3;  */

void FUN_104000464(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbff10;
  _swift_getWitnessTable(&UNK_10dcbff10,&UNK_110733128);
  puRam0000000113046448 = puVar1;
  return;
}



/* Entry: 1040004a4; end: 1040004bb;  */

void FUN_1040004a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fffa78();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10174d00c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040004bc; end: 1040004fb;  */

void FUN_1040004bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbff78;
  _swift_getWitnessTable(&UNK_10dcbff78,&UNK_110733128);
  puRam0000000113046450 = puVar1;
  return;
}



/* Entry: 1040004fc; end: 10400051f;  */

void FUN_1040004fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104000520();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104000520; end: 10400055f;  */

void FUN_104000520(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbffe8;
  _swift_getWitnessTable(&UNK_10dcbffe8,&UNK_110733248);
  puRam0000000113046458 = puVar1;
  return;
}



/* Entry: 104000560; end: 104000573;  */

void FUN_104000560(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103fffab8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_104000574();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104000574; end: 1040005b3;  */

void FUN_104000574(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcbffa0;
  _swift_getWitnessTable(&DAT_10dcbffa0,&UNK_110733248);
  puRam0000000113046460 = puVar1;
  return;
}



/* Entry: 1040005b4; end: 1040005b7;  */

void FUN_1040005b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc0050;
  _swift_getWitnessTable(&UNK_10dcc0050,&UNK_110733248);
  puRam0000000113046468 = puVar1;
  return;
}



/* Entry: 1040005b8; end: 1040005f7;  */

void FUN_1040005b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc0050;
  _swift_getWitnessTable(&UNK_10dcc0050,&UNK_110733248);
  puRam0000000113046468 = puVar1;
  return;
}



/* Entry: 1040005f8; end: 10400061b;  */

void FUN_1040005f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400061c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400061c; end: 10400065b;  */

void FUN_10400061c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc00c0;
  _swift_getWitnessTable(&UNK_10dcc00c0,&UNK_110733358);
  puRam0000000113046470 = puVar1;
  return;
}



/* Entry: 10400065c; end: 10400066f;  */

void FUN_10400065c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103fffaf8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_104000670();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104000670; end: 1040006af;  */

void FUN_104000670(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc0078;
  _swift_getWitnessTable(&DAT_10dcc0078,&UNK_110733358);
  puRam0000000113046478 = puVar1;
  return;
}


