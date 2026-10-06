/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107456e48; end: 107456e6f;  */

long FUN_107456e48(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107456e70; end: 107456ebb;  */

undefined8 * FUN_107456e70(undefined8 *param_1,long param_2,long param_3)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_107456ebc(param_1,param_2,param_2 + param_3 * 0xc);
  return param_1;
}



/* Entry: 107456ebc; end: 107456eff;  */

void FUN_107456ebc(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    FUN_107456f00(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 107456f00; end: 107456f07;  */

undefined1  [16] FUN_107456f00(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar1 = param_1 + 1;
  if ((param_2 == plVar1) ||
     (puVar2 = param_3, FUN_107457158(param_3,(long)param_2 + 0x1c), ((uint)puVar2 >> 7 & 1) != 0))
  {
    plVar4 = param_2;
    if (param_2 != (long *)*param_1) {
      func_0x00010002c810();
      lVar5 = (long)plVar4 + 0x1c;
      FUN_107457158(lVar5,param_3);
      if (((uint)lVar5 >> 7 & 1) == 0) goto LAB_107456fc8;
    }
    plVar6 = param_2;
    plStack_58 = param_2;
    if (*param_2 != 0) {
      plVar3 = plVar4 + 1;
      goto LAB_107456ff0;
    }
LAB_107457010:
    plVar4 = plStack_58;
    param_2 = (long *)0x28;
    __Znwm();
    uVar7 = 1;
    uStack_60 = 1;
    *(undefined8 *)((long)param_2 + 0x1c) = *param_3;
    *(undefined4 *)((long)param_2 + 0x24) = *(undefined4 *)(param_3 + 1);
    plStack_68 = plVar1;
    FUN_107457084(param_1,plVar4,plVar6,param_2);
    uStack_70 = 0;
    FUN_1074571a8(&uStack_70);
  }
  else {
    lVar5 = (long)param_2 + 0x1c;
    FUN_107457158(lVar5,param_3);
    if (((uint)lVar5 >> 7 & 1) != 0) {
      plVar3 = param_2;
      func_0x00010002c7d4();
      if ((plVar1 == plVar3) ||
         (puVar2 = param_3, FUN_107457158(param_3,(long)plVar3 + 0x1c), ((uint)puVar2 >> 7 & 1) != 0
         )) {
        plVar6 = param_2 + 1;
        plStack_58 = param_2;
        plVar4 = plVar3;
        if (param_2[1] == 0) goto LAB_107457010;
      }
      else {
LAB_107456fc8:
        plVar3 = param_1;
        FUN_1074570d4(param_1,&plStack_58,param_3);
        plVar4 = plStack_58;
      }
LAB_107456ff0:
      plStack_58 = plVar4;
      param_2 = (long *)*plVar3;
      plVar6 = plVar3;
      if (param_2 == (long *)0x0) goto LAB_107457010;
    }
    uVar7 = 0;
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = param_2;
  return auVar8;
}



/* Entry: 107456f08; end: 107457083;  */

undefined1  [16] FUN_107456f08(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar1 = param_1 + 1;
  if ((param_2 == plVar1) ||
     (uVar6 = param_3, FUN_107457158(param_3,(long)param_2 + 0x1c), ((uint)uVar6 >> 7 & 1) != 0)) {
    plVar3 = param_2;
    if (param_2 != (long *)*param_1) {
      func_0x00010002c810();
      lVar4 = (long)plVar3 + 0x1c;
      FUN_107457158(lVar4,param_3);
      if (((uint)lVar4 >> 7 & 1) == 0) goto LAB_107456fc8;
    }
    plVar5 = param_2;
    plStack_58 = param_2;
    if (*param_2 != 0) {
      plVar2 = plVar3 + 1;
      goto LAB_107456ff0;
    }
LAB_107457010:
    plVar3 = plStack_58;
    param_2 = (long *)0x28;
    __Znwm();
    uVar6 = 1;
    uStack_60 = 1;
    *(undefined8 *)((long)param_2 + 0x1c) = *param_4;
    *(undefined4 *)((long)param_2 + 0x24) = *(undefined4 *)(param_4 + 1);
    plStack_68 = plVar1;
    FUN_107457084(param_1,plVar3,plVar5,param_2);
    uStack_70 = 0;
    FUN_1074571a8(&uStack_70);
  }
  else {
    lVar4 = (long)param_2 + 0x1c;
    FUN_107457158(lVar4,param_3);
    if (((uint)lVar4 >> 7 & 1) != 0) {
      plVar2 = param_2;
      func_0x00010002c7d4();
      if ((plVar1 == plVar2) ||
         (uVar6 = param_3, FUN_107457158(param_3,(long)plVar2 + 0x1c), ((uint)uVar6 >> 7 & 1) != 0))
      {
        plVar5 = param_2 + 1;
        plStack_58 = param_2;
        plVar3 = plVar2;
        if (param_2[1] == 0) goto LAB_107457010;
      }
      else {
LAB_107456fc8:
        plVar2 = param_1;
        FUN_1074570d4(param_1,&plStack_58,param_3);
        plVar3 = plStack_58;
      }
LAB_107456ff0:
      plStack_58 = plVar3;
      param_2 = (long *)*plVar2;
      plVar5 = plVar2;
      if (param_2 == (long *)0x0) goto LAB_107457010;
    }
    uVar6 = 0;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Entry: 107457084; end: 1074570d3;  */

void FUN_107457084(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1074570d4; end: 107457157;  */

long * FUN_1074570d4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar4;
  plVar5 = plVar4;
  while (plVar3 != (long *)0x0) {
    while (plVar5 = plVar3, uVar1 = param_3, FUN_107457158(param_3,(long)plVar5 + 0x1c),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar3 = (long *)*plVar5;
      plVar4 = plVar5;
      if ((long *)*plVar5 == (long *)0x0) goto LAB_107457140;
    }
    lVar2 = (long)plVar5 + 0x1c;
    FUN_107457158(lVar2,param_3);
    if (((uint)lVar2 >> 7 & 1) == 0) break;
    plVar4 = plVar5 + 1;
    plVar3 = (long *)*plVar4;
  }
LAB_107457140:
  *param_2 = plVar5;
  return plVar4;
}



/* Entry: 107457158; end: 1074571a7;  */

uint FUN_107457158(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  uVar6 = (uint)(bVar4 < bVar3);
  if (bVar3 < bVar4) {
    uVar6 = 0xffffffff;
  }
  if (bVar3 == bVar4) {
    uVar5 = *(uint *)(param_1 + 4);
    uVar1 = *(uint *)(param_2 + 4);
    uVar6 = (uint)(uVar1 < uVar5);
    if (uVar5 < uVar1) {
      uVar6 = 0xffffffff;
    }
    if (uVar5 == uVar1) {
      uVar1 = *(uint *)(param_1 + 8);
      uVar2 = *(uint *)(param_2 + 8);
      uVar5 = (uint)(uVar2 < uVar1);
      if (uVar1 < uVar2) {
        uVar5 = 0xffffffff;
      }
      uVar6 = 0;
      if (uVar1 != uVar2) {
        uVar6 = uVar5;
      }
    }
  }
  return uVar6;
}



/* Entry: 1074571a8; end: 1074571cb;  */

undefined8 FUN_1074571a8(undefined8 param_1)

{
  FUN_1074571cc(param_1,0);
  return param_1;
}



/* Entry: 1074571cc; end: 1074571e3;  */

void FUN_1074571cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074571e4; end: 10745728b;  */

long FUN_1074571e4(long param_1)

{
  func_0x000107457208(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10745728c; end: 107457337;  */

long FUN_10745728c(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x0001074575f8();
  FUN_107457338();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_107457404();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  FUN_107457378();
  lVar2 = unaff_x19[1];
  FUN_107457444(&plStack_58);
  return lVar2;
}



/* Entry: 107457338; end: 107457377;  */

undefined8 * FUN_107457338(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_1074573f0();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 107457378; end: 1074573ef;  */

void FUN_107457378(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1074573f0; end: 107457403;  */

void FUN_1074573f0(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_107457428();
  return;
}



/* Entry: 107457404; end: 107457427;  */

void FUN_107457404(void)

{
  FUN_107457428();
  return;
}



/* Entry: 107457428; end: 107457443;  */

long * FUN_107457428(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107457470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107457444; end: 10745746f;  */

long * FUN_107457444(long *param_1)

{
  FUN_107457470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107457470; end: 107457603;  */

void FUN_107457470(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107457604; end: 1074576d7;  */

undefined8 *
FUN_107457604(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109ace68;
  param_1[1] = 0;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar2 != '\0');
  *(int *)(param_1 + 3) = iVar1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1109b1ff8;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x13] = &UNK_10e52b660;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  func_0x000104c2fe00(param_1 + 0x17);
  func_0x000104c2fe00(param_1 + 0x1e,param_3);
  func_0x000104c2fe00(param_1 + 0x25,param_4);
  uVar4 = *param_5;
  param_1[0x2d] = param_5[1];
  param_1[0x2c] = uVar4;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return param_1;
}



/* Entry: 1074576d8; end: 107457797;  */

void FUN_1074576d8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  long *plStack_48;
  
  func_0x000107459c70();
  lVar1 = *(long *)(param_1 + 0x48);
  for (lVar5 = *(long *)(param_1 + 0x40); lVar5 != lVar1; lVar5 = lVar5 + 0x100) {
    lVar2 = *(long *)(lVar5 + 0x50);
    for (lVar4 = *(long *)(lVar5 + 0x48) + 0xc0; lVar4 + -0xc0 != lVar2; lVar4 = lVar4 + 0x1a8) {
      if ((*(char *)(lVar4 + 0x48) == '\x01') && (*(int *)(lVar4 + 0x20) == 0)) {
        FUN_1073da574(auStack_58);
        FUN_107458c58(lVar4,lVar4,auStack_58);
        plVar3 = plStack_48;
        plStack_48 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  return;
}



/* Entry: 107457798; end: 1074577d7;  */

bool FUN_107457798(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  do {
    lVar2 = lVar1;
    if (lVar2 == *(long *)(param_1 + 0x48)) break;
    lVar1 = lVar2 + 0x100;
  } while (*(long *)(lVar2 + 0x48) == *(long *)(lVar2 + 0x50));
  return lVar2 != *(long *)(param_1 + 0x48);
}



/* Entry: 1074577d8; end: 107457823;  */

ulong FUN_1074577d8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  func_0x0001077f9184(param_2,*(long *)(param_3 + 0x218) + 0xc,param_3 + 0x10,param_1,0);
  uVar1 = 0x100000000;
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  return uVar1 | *(uint *)(param_1 + 0x18);
}



/* Entry: 107457824; end: 107458bb3;  */

void FUN_107457824(long param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 **ppuVar8;
  undefined8 ****ppppuVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  long *plVar13;
  undefined8 *****pppppuVar14;
  ulong uVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *****pppppuVar16;
  long lVar17;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined1 *puVar18;
  undefined8 ***pppuVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *****pppppuVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined1 *puVar33;
  undefined8 ****ppppuVar34;
  undefined8 *****pppppuVar35;
  long lVar36;
  undefined8 ***pppuVar37;
  undefined1 auVar38 [16];
  undefined8 **ppuStack_448;
  undefined1 uStack_440;
  undefined8 ****appppuStack_430 [2];
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  long lStack_410;
  long alStack_408 [3];
  undefined1 auStack_3f0 [24];
  long lStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long alStack_3b0 [4];
  long lStack_390;
  undefined8 ****ppppuStack_388;
  undefined8 ****appppuStack_380 [2];
  undefined8 ****ppppuStack_370;
  undefined8 ***pppuStack_368;
  undefined8 ***pppuStack_360;
  undefined8 ****ppppuStack_358;
  undefined8 ***pppuStack_350;
  undefined8 ***pppuStack_348;
  undefined8 ****ppppuStack_340;
  undefined8 ***pppuStack_338;
  undefined8 ***pppuStack_330;
  byte bStack_328;
  undefined1 uStack_327;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 ****ppppuStack_2f0;
  undefined8 ****ppppuStack_2e8;
  undefined ***pppuStack_2e0;
  undefined1 uStack_2d8;
  undefined8 **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 ****ppppuStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 ***pppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 ****ppppuStack_248;
  char cStack_230;
  undefined1 uStack_228;
  undefined1 uStack_224;
  undefined1 uStack_214;
  undefined1 uStack_210;
  undefined1 uStack_200;
  undefined1 uStack_1fc;
  undefined1 uStack_1ec;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [40];
  undefined1 auStack_180 [24];
  undefined1 uStack_168;
  char cStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_12c;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined2 uStack_f7;
  byte bStack_f5;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 uStack_88;
  
  func_0x000107459c98();
  lVar29 = *(long *)(param_1 + 0x28);
  lVar36 = *(long *)(param_1 + 0x30);
  lVar27 = param_2[9] - param_2[8];
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_300 = 0x3f800000;
  pppppuVar14 = (undefined8 *****)(lVar27 / 0x88);
  uStack_88 = extraout_x8;
  _bzero(&puStack_420,0xa8);
  pppuStack_330 = (undefined8 ****)0x0;
  pppuStack_348 = (undefined8 ****)0x0;
  pppuStack_350 = (undefined8 ****)0x0;
  pppuStack_338 = (undefined8 ****)0x0;
  ppppuStack_340 = (undefined8 *****)0x0;
  pppuStack_368 = (undefined8 ****)0x0;
  ppppuStack_370 = (undefined8 *****)0x0;
  ppppuStack_358 = (undefined8 *****)0x0;
  pppuStack_360 = (undefined8 ****)0x0;
  func_0x0001000fc044(auStack_3f0,pppppuVar14);
  if ((undefined8 *****)((long)(uStack_3c8 - lStack_3d8) / 0x1a8) < pppppuVar14) {
    if ((undefined8 *****)0x9a90e7d95bc609 < pppppuVar14) {
      FUN_107458cbc();
      goto LAB_107458a00;
    }
    FUN_107458d5c(&uStack_268,pppppuVar14,(long)(uStack_3d0 - lStack_3d8) / 0x1a8,&uStack_3c8);
    FUN_107458cc8(&lStack_3d8,&uStack_268);
    FUN_107458f74(&uStack_268);
  }
  if ((undefined8 *****)(alStack_3b0[0] - lStack_3c0 >> 4) < pppppuVar14) {
    if ((ulong)pppppuVar14 >> 0x3c != 0) {
      FUN_107458fbc();
      goto LAB_107458a00;
    }
    func_0x000107458ffc(&uStack_268,pppppuVar14,lStack_3b8 - lStack_3c0 >> 4,alStack_3b0);
    lVar32 = lStack_260 - (lStack_3b8 - lStack_3c0);
    _memcpy(lVar32);
    lVar17 = lStack_3c0;
    alStack_3b0[0] = lStack_250;
    lStack_3b8 = lStack_258;
    lStack_3c0 = lVar32;
    func_0x000107459ba4(lVar17);
    FUN_107459054();
  }
  pppppuVar28 = pppppuVar14;
  FUN_107458bb4(&lStack_390);
  pppuVar37 = pppuStack_368;
  ppppuVar34 = ppppuStack_370;
  if ((undefined8 *****)((long)pppuStack_360 - (long)ppppuStack_370) < pppppuVar14) {
    if (lVar27 < 0) {
      FUN_10745915c();
      goto LAB_107458a00;
    }
    pppppuVar35 = pppppuVar14;
    ppppuStack_248 = &pppuStack_360;
    FUN_107459168();
    ppppuVar34 = (undefined8 ****)((long)pppppuVar35 + ((long)pppuVar37 - (long)ppppuVar34));
    ppppuVar2 = (undefined8 ****)((long)pppppuVar35 + (long)pppppuVar28);
    lVar17 = (long)ppppuStack_370 - (long)pppuStack_368;
    pppppuVar28 = (undefined8 *****)ppppuStack_370;
    func_0x000107459c5c();
    ppppuVar9 = ppppuStack_370;
    ppppuStack_370 = (undefined8 *****)((long)ppppuVar34 + lVar17);
    pppuStack_368 = ppppuVar34;
    pppuStack_360 = ppppuVar2;
    func_0x000107459ba4(ppppuVar9);
    func_0x000107459184();
  }
  pppuVar37 = pppuStack_350;
  ppppuVar34 = ppppuStack_358;
  if ((undefined8 *****)((long)pppuStack_348 - (long)ppppuStack_358) < pppppuVar14) {
    if (lVar27 < 0) {
      FUN_1074591c0();
      goto LAB_107458a00;
    }
    pppppuVar35 = pppppuVar14;
    ppppuStack_248 = &pppuStack_348;
    FUN_1074591cc();
    ppppuVar34 = (undefined8 ****)((long)pppppuVar35 + ((long)pppuVar37 - (long)ppppuVar34));
    ppppuVar2 = (undefined8 ****)((long)pppppuVar35 + (long)pppppuVar28);
    lVar17 = (long)ppppuStack_358 - (long)pppuStack_350;
    pppppuVar28 = (undefined8 *****)ppppuStack_358;
    func_0x000107459c5c();
    ppppuVar9 = ppppuStack_358;
    ppppuStack_358 = (undefined8 *****)((long)ppppuVar34 + lVar17);
    pppuStack_350 = ppppuVar34;
    pppuStack_348 = ppppuVar2;
    func_0x000107459ba4(ppppuVar9);
    func_0x0001074591e8();
  }
  pppuVar37 = pppuStack_338;
  ppppuVar34 = ppppuStack_340;
  if ((undefined8 *****)((long)pppuStack_330 - (long)ppppuStack_340) < pppppuVar14) {
    if (lVar27 < 0) {
      FUN_107459224();
      goto LAB_107458a00;
    }
    pppppuVar35 = pppppuVar14;
    ppppuStack_248 = &pppuStack_330;
    FUN_107459230();
    ppppuVar34 = (undefined8 ****)((long)pppppuVar35 + ((long)pppuVar37 - (long)ppppuVar34));
    lVar27 = (long)ppppuStack_340 - (long)pppuStack_338;
    func_0x000107459c5c();
    ppppuVar2 = ppppuStack_340;
    ppppuStack_340 = (undefined8 *****)((long)ppppuVar34 + lVar27);
    pppuStack_338 = ppppuVar34;
    pppuStack_330 = (undefined8 ****)((long)pppppuVar35 + (long)pppppuVar28);
    func_0x000107459ba4(ppppuVar2);
    func_0x00010745924c();
  }
  lVar27 = 0;
  pppppuVar28 = (undefined8 *****)0x0;
  bStack_328 = 0;
  auVar38 = NEON_fmov(0x3f800000,4);
  uVar15 = (lVar36 - lVar29) / 0xa0;
  for (; puVar1 = puStack_420, pppppuVar14 != pppppuVar28;
      pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1)) {
    lVar29 = param_2[8];
    func_0x000104c2f64c(&lStack_260);
    uStack_224 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1ec = 0;
    cStack_160 = '\0';
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    auStack_1a8[0] = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_110 = 0;
    uStack_100 = 0;
    pppuStack_f0 = (undefined8 ****)0x0;
    pppuStack_e8 = (undefined8 ****)0x0;
    FUN_1073c1670(&ppppuStack_e0);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_268 = (undefined4)uVar15;
    uStack_264 = SUB84(pppppuVar28,0);
    func_0x000107262f3c(&lStack_260,lVar29 + lVar27 + 0x20);
    uStack_228 = *(undefined1 *)(lVar29 + lVar27 + 100);
    pppuStack_2a8 = (undefined8 ***)0x0;
    ppuStack_2b0 = (undefined8 ***)0x0;
    ppuStack_298 = (undefined8 ***)0x6;
    ppuStack_2a0 = (undefined8 ***)0x4;
    pppuStack_290 = (undefined8 ***)((ulong)pppuStack_290 & 0xffffffff00000000);
    FUN_107459288(&uStack_1c0,&ppuStack_2b0);
    if (*(char *)(param_3 + 0x38) == '\x01') {
      ppppuStack_c0 = (undefined8 ****)&PTR_FUN_1109ad9e0;
      ppppuStack_b0 = (undefined8 ****)0x0;
      ppppuStack_a8 = (undefined8 ****)0x0;
      ppppuStack_b8 = (undefined8 ****)0x0;
      func_0x00010730b9d0(&ppppuStack_b8,8);
      ppuStack_2b0._0_4_ = 0x10000;
      func_0x000107459bd4();
      ppuStack_2b0._0_4_ = 0x30001;
      func_0x000107459bd4();
      ppuStack_2b0._0_4_ = 0x20003;
      func_0x000107459bd4();
      ppuStack_2b0 = (undefined8 **)CONCAT44(ppuStack_2b0._4_4_,2);
      func_0x000107459bd4();
      ppuStack_2a0 = ppppuStack_b0;
      pppuStack_2a8 = ppppuStack_b8;
      ppuStack_2b0 = (undefined8 **)&PTR_FUN_1109ad9e0;
      ppuStack_298 = ppppuStack_a8;
      ppppuStack_b0 = (undefined8 *****)0x0;
      ppppuStack_a8 = (undefined8 *****)0x0;
      ppppuStack_b8 = (undefined8 *****)0x0;
      pppuStack_290 = (undefined8 ***)((ulong)pppuStack_290 & 0xffffffff00000000);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      if (cStack_160 == '\x01') {
        ppppuStack_2f0 = (undefined8 ****)auStack_1a8;
        FUN_10745934c(&ppppuStack_2f0,auStack_1a8,&ppuStack_2b0);
        func_0x00010745939c(auStack_180,&uStack_288);
        uStack_168 = uStack_270;
      }
      else {
        FUN_107458e7c(auStack_1a8,&ppuStack_2b0);
      }
      FUN_1073f9d5c(&ppuStack_2b0);
      pppuStack_2a8 = (undefined8 ***)0x0;
      ppuStack_2b0 = (undefined8 ***)0x0;
      ppuStack_298 = (undefined8 ***)0x8;
      ppuStack_2a0 = (undefined8 ***)0x4;
      pppuStack_290 = (undefined8 ***)((ulong)pppuStack_290 & 0xffffffff00000000);
      FUN_107459288(auStack_180,&ppuStack_2b0);
      func_0x00010730b05c(&ppppuStack_b8);
    }
    (**(code **)(*param_2 + 0x30))();
    func_0x00010726236c(&ppuStack_2b0);
    pppppuVar35 = *(undefined8 ******)(param_3 + 8);
    func_0x0001072e7640(&ppppuStack_c0,&ppuStack_2b0,0x1138369c0);
    func_0x000107869b38(&ppppuStack_2f0,pppppuVar35,&ppppuStack_c0);
    func_0x00010786967c();
    ppppuStack_2b8 = pppppuVar35;
    FUN_1073e0238(&ppuStack_448,&ppppuStack_2f0,&ppppuStack_2b8);
    func_0x000107277f30(appppuStack_430,&ppuStack_448);
    func_0x00010726b264(&ppuStack_448);
    FUN_1073de9d8(&ppppuStack_2f0);
    func_0x000107459c7c();
    FUN_107459868(&ppppuStack_2f0);
    ppppuVar2 = ppppuStack_2e8;
    ppppuVar34 = ppppuStack_2f0;
    ppppuStack_2f0 = (undefined8 *****)0x0;
    ppppuStack_2e8 = (undefined8 *****)0x0;
    ppppuStack_b8 = (undefined8 ****)pppuStack_e8;
    ppppuStack_c0 = (undefined8 ****)pppuStack_f0;
    pppuStack_e8 = ppppuVar2;
    pppuStack_f0 = ppppuVar34;
    FUN_1073c672c(&ppppuStack_c0);
    FUN_1073c672c(&ppppuStack_2f0);
    FUN_1073c1670(&ppppuStack_2f0);
    ppppuVar2 = ppppuStack_2e8;
    ppppuVar34 = ppppuStack_2f0;
    ppppuStack_2f0 = (undefined8 ****)0x0;
    ppppuStack_2e8 = (undefined8 ****)0x0;
    ppppuStack_b8 = ppppuStack_d8;
    ppppuStack_c0 = ppppuStack_e0;
    ppppuStack_d8 = ppppuVar2;
    ppppuStack_e0 = ppppuVar34;
    FUN_1073c5ea4(&ppppuStack_c0);
    FUN_1073c5ea4(&ppppuStack_2f0);
    lVar36 = param_2[6];
    plVar13 = param_2;
    (**(code **)(*param_2 + 0x48))();
    func_0x000107833d7c(&ppppuStack_c0,lVar36,param_3 + 0x1c,plVar13);
    func_0x000104c31bac(pppuStack_f0,&ppppuStack_c0);
    func_0x000104c3365c(&ppppuStack_c0);
    func_0x000107262f3c(pppuStack_f0 + 0x15,param_1 + 0xf0);
    func_0x000107262f3c(pppuStack_f0 + 0xe,param_1 + 0xb8);
    plVar13 = (long *)param_2[6];
    (**(code **)(*plVar13 + 0x30))();
    func_0x00010729c0b0(pppuStack_f0 + 6,plVar13);
    plVar13 = (long *)param_2[6];
    (**(code **)(*plVar13 + 0x20))();
    func_0x00010729c0e4(pppuStack_f0 + 4,plVar13);
    pppuVar37 = pppuStack_f0;
    func_0x0001072684ec(pppuStack_f0 + 4);
    pppuVar37 = (undefined8 ***)pppuVar37[4];
    func_0x000100060964(&ppppuStack_c0,"component");
    FUN_107459a14(&ppppuStack_2f0,pppuVar37,&ppppuStack_c0,lVar29 + lVar27);
    func_0x000107459c7c();
    uStack_148 = 0;
    uStack_110 = 0;
    lVar36 = lVar29 + lVar27;
    uStack_f7 = *(undefined2 *)(lVar36 + 0x78);
    bStack_f5 = *(byte *)(lVar36 + 0x7a);
    bStack_328 = bStack_328 | bStack_f5;
    uStack_f8 = *(undefined1 *)(lVar36 + 0x7b);
    uStack_158 = auVar38._0_8_;
    uStack_150 = auVar38._8_8_;
    func_0x000100206870(auStack_3f0,lVar29 + lVar27);
    if (uStack_3d0 < uStack_3c8) {
      FUN_107458dcc(uStack_3d0,&uStack_268);
      uVar30 = uStack_3d0 + 0x1a8;
    }
    else {
      lVar36 = (long)(uStack_3d0 - lStack_3d8) / 0x1a8;
      uVar30 = lVar36 + 1;
      if (0x9a90e7d95bc609 < uVar30) {
        FUN_107458cbc();
        goto LAB_107458a00;
      }
      uVar24 = (long)(uStack_3c8 - lStack_3d8) / 0x1a8;
      uVar20 = uVar24 * 2;
      if (uVar20 < uVar30 || uVar20 - uVar30 == 0) {
        uVar20 = uVar30;
      }
      if (0x4d4873ecade303 < uVar24) {
        uVar20 = 0x9a90e7d95bc609;
      }
      FUN_107458d5c(&ppppuStack_c0,uVar20,lVar36,&uStack_3c8);
      FUN_107458dcc(ppppuStack_b0,&uStack_268);
      ppppuStack_b0 = ppppuStack_b0 + 0x35;
      FUN_107458cc8(&lStack_3d8,&ppppuStack_c0);
      uVar30 = uStack_3d0;
      FUN_107458f74(&ppppuStack_c0);
    }
    ppppuStack_b8 =
         (undefined8 ****)CONCAT35(ppppuStack_b8._5_3_,*(undefined5 *)(lVar29 + lVar27 + 0x68));
    uStack_3d0 = uVar30;
    ppppuStack_c0 = pppppuVar28;
    func_0x000107459404(&lStack_3c0,&ppppuStack_c0);
    FUN_1073bcd74(alStack_408,lVar29 + lVar27 + 0x18);
    if (ppppuStack_388 < appppuStack_380[0]) {
      pppppuVar35 = (undefined8 *****)(ppppuStack_388 + 1);
      *ppppuStack_388 = *(undefined8 *****)(lVar29 + lVar27 + 0x7c);
    }
    else {
      plVar13 = &lStack_390;
      FUN_1074594b4(plVar13,((long)ppppuStack_388 - lStack_390 >> 3) + 1);
      ppppuVar34 = ppppuStack_388;
      lVar36 = lStack_390;
      ppppuStack_a0 = appppuStack_380;
      if (plVar13 == (long *)0x0) {
        pppppuVar35 = (undefined8 *****)0x0;
      }
      else {
        pppppuVar35 = appppuStack_380;
        FUN_1074590d0();
      }
      pppppuVar16 = (undefined8 *****)((long)pppppuVar35 + ((long)ppppuVar34 - lVar36));
      *pppppuVar16 = *(undefined8 *****)(lVar29 + lVar27 + 0x7c);
      lVar17 = (long)pppppuVar16 - ((long)ppppuStack_388 - lStack_390);
      ppppuStack_c0 = pppppuVar35;
      ppppuStack_b8 = pppppuVar16;
      ppppuStack_b0 = pppppuVar16 + 1;
      ppppuStack_a8 = pppppuVar35 + (long)plVar13;
      _memcpy(lVar17);
      pppppuVar35 = (undefined8 *****)ppppuStack_b0;
      lVar36 = lStack_390;
      appppuStack_380[0] = ppppuStack_a8;
      ppppuStack_388 = ppppuStack_b0;
      lStack_390 = lVar17;
      func_0x000107459c38(lVar36);
      FUN_10745910c();
    }
    pppppuVar16 = (undefined8 *****)(lVar29 + lVar27);
    ppppuStack_388 = pppppuVar35;
    if (pppuStack_368 < pppuStack_360) {
      ppppuVar34 = (undefined8 ****)((long)pppuStack_368 + 1);
      *(undefined1 *)pppuStack_368 = *(undefined1 *)((long)pppppuVar16 + 0x84);
    }
    else {
      uVar30 = (long)pppuStack_368 - (long)ppppuStack_370;
      bVar11 = 0xfffffffffffffffe < uVar30;
      if ((long)(uVar30 + 1) < 0) {
        FUN_10745915c();
        goto LAB_107458a00;
      }
      pppppuVar35 = (undefined8 *****)ppppuStack_370;
      func_0x000107459be4();
      lVar36 = extraout_x9;
      if (bVar11) {
        lVar36 = extraout_x8_00;
      }
      ppppuStack_a0 = &pppuStack_360;
      if (lVar36 == 0) {
        pppppuVar35 = (undefined8 *****)0x0;
      }
      else {
        FUN_107459168();
      }
      ppppuVar34 = (undefined8 ****)(lVar36 + uVar30);
      func_0x000107459bbc(*(undefined1 *)((long)pppppuVar16 + 0x84));
      ppppuVar2 = ppppuStack_370;
      ppppuStack_370 = pppppuVar16;
      pppuStack_368 = ppppuVar34;
      pppuStack_360 = (undefined8 ****)(lVar36 + (long)pppppuVar35);
      func_0x000107459c38(ppppuVar2);
      func_0x000107459184();
    }
    pppppuVar35 = (undefined8 *****)(lVar29 + lVar27);
    pppuStack_368 = ppppuVar34;
    if (pppuStack_350 < pppuStack_348) {
      ppppuVar34 = (undefined8 ****)((long)pppuStack_350 + 1);
      *(undefined1 *)pppuStack_350 = *(undefined1 *)((long)pppppuVar35 + 0x85);
    }
    else {
      uVar30 = (long)pppuStack_350 - (long)ppppuStack_358;
      bVar11 = 0xfffffffffffffffe < uVar30;
      if ((long)(uVar30 + 1) < 0) {
        FUN_1074591c0();
        goto LAB_107458a00;
      }
      pppppuVar16 = (undefined8 *****)ppppuStack_358;
      func_0x000107459be4();
      lVar36 = extraout_x9_00;
      if (bVar11) {
        lVar36 = extraout_x8_01;
      }
      ppppuStack_a0 = &pppuStack_348;
      if (lVar36 == 0) {
        pppppuVar16 = (undefined8 *****)0x0;
      }
      else {
        FUN_1074591cc();
      }
      ppppuVar34 = (undefined8 ****)(lVar36 + uVar30);
      func_0x000107459bbc(*(undefined1 *)((long)pppppuVar35 + 0x85));
      ppppuVar2 = ppppuStack_358;
      ppppuStack_358 = pppppuVar35;
      pppuStack_350 = ppppuVar34;
      pppuStack_348 = (undefined8 ****)(lVar36 + (long)pppppuVar16);
      func_0x000107459c38(ppppuVar2);
      func_0x0001074591e8();
    }
    pppuStack_350 = ppppuVar34;
    if (pppuStack_338 < pppuStack_330) {
      ppppuVar34 = (undefined8 ****)((long)pppuStack_338 + 1);
      *(undefined1 *)pppuStack_338 = *(undefined1 *)(lVar29 + lVar27 + 0x86);
    }
    else {
      uVar30 = (long)pppuStack_338 - (long)ppppuStack_340;
      bVar11 = 0xfffffffffffffffe < uVar30;
      if ((long)(uVar30 + 1) < 0) {
        FUN_107459224();
        goto LAB_107458a00;
      }
      pppppuVar16 = (undefined8 *****)ppppuStack_340;
      func_0x000107459be4();
      lVar36 = extraout_x9_01;
      if (bVar11) {
        lVar36 = extraout_x8_02;
      }
      ppppuStack_a0 = &pppuStack_330;
      if (lVar36 == 0) {
        pppppuVar16 = (undefined8 *****)0x0;
      }
      else {
        FUN_107459230();
      }
      ppppuVar34 = (undefined8 ****)(lVar36 + uVar30);
      func_0x000107459bbc(*(undefined1 *)(lVar29 + lVar27 + 0x86));
      ppppuVar2 = ppppuStack_340;
      ppppuStack_340 = pppppuVar35;
      pppuStack_338 = ppppuVar34;
      pppuStack_330 = (undefined8 ****)(lVar36 + (long)pppppuVar16);
      func_0x000107459c38(ppppuVar2);
      func_0x00010745924c();
    }
    pppuStack_338 = ppppuVar34;
    func_0x00010726b264(appppuStack_430);
    func_0x00010724b3d8(&ppuStack_2b0);
    func_0x0001073f9cd0(&uStack_268);
    lVar27 = lVar27 + 0x88;
  }
  lVar29 = (long)puStack_418 - (long)puStack_420;
  pppppuVar28 = (undefined8 *****)(lVar29 / 0x18);
  uVar30 = (long)pppppuVar14 - (long)pppppuVar28;
  if (pppppuVar14 < pppppuVar28 || uVar30 == 0) {
    if (pppppuVar14 < pppppuVar28) {
      puStack_418 = puStack_420 + (long)pppppuVar14 * 0x18;
    }
  }
  else if ((ulong)((lStack_410 - (long)puStack_418) / 0x18) < uVar30) {
    if ((undefined8 *****)0xaaaaaaaaaaaaaaa < pppppuVar14) {
      func_0x0001074594f4();
      goto LAB_107458a00;
    }
    uVar20 = (lStack_410 - (long)puStack_420) / 0x18;
    pppppuVar35 = (undefined8 *****)(uVar20 * 2);
    if (pppppuVar35 < pppppuVar14 || (long)pppppuVar35 - (long)pppppuVar14 == 0) {
      pppppuVar35 = pppppuVar14;
    }
    if (0x555555555555554 < uVar20) {
      pppppuVar35 = (undefined8 *****)0xaaaaaaaaaaaaaaa;
    }
    if ((undefined8 *****)0xaaaaaaaaaaaaaaa < pppppuVar35) {
      func_0x000104bd35f4();
      goto LAB_107458a00;
    }
    lVar27 = (long)pppppuVar35 * 0x18;
    __Znwm();
    puVar33 = (undefined1 *)(lVar27 + lVar29);
    puStack_418 = puVar33 + uVar30 * 0x18;
    puVar18 = puVar33;
    for (lVar36 = (long)pppppuVar14 * 0x18 + (long)pppppuVar28 * -0x18; lVar36 != 0;
        lVar36 = lVar36 + -0x18) {
      *puVar18 = 0;
      puVar18[0x10] = 0;
      puVar18 = puVar18 + 0x18;
    }
    lVar27 = lVar27 + (long)pppppuVar35 * 0x18;
    puVar33 = puVar33 + (lVar29 / -0x18) * 0x18;
    _memcpy(puVar33,puStack_420,lVar29);
    bVar11 = puStack_420 != (undefined1 *)0x0;
    puStack_420 = puVar33;
    lStack_410 = lVar27;
    if (bVar11) {
      __ZdlPv(puVar1);
    }
  }
  else {
    puVar18 = puStack_418 + uVar30 * 0x18;
    puVar1 = puStack_418;
    for (lVar29 = (long)pppppuVar14 * 0x18 + (long)pppppuVar28 * -0x18; puStack_418 = puVar18,
        lVar29 != 0; lVar29 = lVar29 + -0x18) {
      *puVar1 = 0;
      puVar1[0x10] = 0;
      puVar1 = puVar1 + 0x18;
    }
  }
  uStack_327 = 0;
  for (pppppuVar28 = (undefined8 *****)0x0; pppppuVar28 != pppppuVar14;
      pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1)) {
    plVar13 = *(long **)(param_3 + 0x28);
    uVar30 = plVar13[1];
    if ((uVar30 != 0) && (plVar13[3] != 0)) {
      uVar4 = *(ushort *)(alStack_408[0] + (long)pppppuVar28 * 2);
      uVar20 = (ulong)uVar4;
      uVar24 = uVar30 - 1;
      uVar22 = (uint)uVar30;
      uVar23 = (uint)uVar4;
      if ((uVar30 & uVar24) == 0) {
        uVar25 = uVar22 - 1 & uVar20;
      }
      else {
        uVar25 = uVar20;
        if (uVar30 <= uVar20) {
          uVar6 = 0;
          if (uVar22 != 0) {
            uVar6 = uVar23 / uVar22;
          }
          uVar25 = (ulong)(uVar23 - uVar6 * uVar22);
        }
      }
      plVar13 = *(long **)(*plVar13 + uVar25 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_1074584ec;
            uVar26 = plVar13[1];
            if (uVar26 != uVar20) break;
            if (*(ushort *)(plVar13 + 2) == uVar23) {
              pppppuVar35 = (undefined8 *****)0x0;
              goto LAB_1074584ac;
            }
          }
          if ((uVar30 & uVar24) == 0) {
            uVar26 = uVar26 & uVar24;
          }
          else if (uVar30 <= uVar26) {
            uVar7 = 0;
            if (uVar30 != 0) {
              uVar7 = uVar26 / uVar30;
            }
            uVar26 = uVar26 - uVar7 * uVar30;
          }
        } while (uVar26 == uVar25);
      }
    }
LAB_1074584ec:
  }
  (**(code **)(*param_2 + 0x30))();
  func_0x00010726236c(&uStack_268);
  if (cStack_230 == '\x01') {
    FUN_10732f3ac(&ppuStack_2b0,param_1 + 0x98,&uStack_268);
  }
  ppuStack_2b0 = (undefined8 **)(uVar15 & 0xffffffff);
  pppuStack_2a8 = (undefined8 ***)CONCAT35(pppuStack_2a8._5_3_,(int5)param_2[0xd]);
  func_0x000107459404(param_1 + 0x58,&ppuStack_2b0);
  ppppuVar34 = (undefined8 ****)(param_1 + 0x38);
  pppuVar37 = *(undefined8 ****)(param_1 + 0x30);
  if (pppuVar37 < *ppppuVar34) {
    FUN_107459500(pppuVar37,param_2);
    pppuVar37 = pppuVar37 + 0x14;
    *(undefined8 ****)(param_1 + 0x30) = pppuVar37;
LAB_107458834:
    *(undefined8 ****)(param_1 + 0x30) = pppuVar37;
    uVar15 = *(ulong *)(param_1 + 0x48);
    uVar30 = *(ulong *)(param_1 + 0x50);
    uVar12 = uVar15 == uVar30;
    if (uVar15 < uVar30) {
      FUN_107459670(uVar15,&puStack_420);
      lVar27 = uVar15 + 0x100;
    }
    else {
      uVar24 = *(ulong *)(param_1 + 0x40);
      lVar29 = (long)(uVar15 - uVar24) >> 8;
      uVar20 = lVar29 + 1;
      if (uVar20 >> 0x38 != 0) {
        FUN_1074597c0();
        goto LAB_107458a00;
      }
      uVar25 = (long)(uVar30 - uVar24) >> 7;
      if (uVar25 <= uVar20) {
        uVar25 = uVar20;
      }
      if (0x7ffffffffffffeff < uVar30 - uVar24) {
        uVar25 = 0xffffffffffffff;
      }
      if (uVar25 == 0) {
        lVar36 = 0;
      }
      else {
        if (uVar25 >> 0x38 != 0) goto LAB_1074589b4;
        lVar36 = uVar25 << 8;
        __Znwm();
      }
      lVar27 = lVar36 + (uVar15 - uVar24);
      FUN_107459670(lVar27,&puStack_420);
      lVar17 = lVar27 + lVar29 * -0x100;
      lVar29 = lVar17;
      for (uVar30 = uVar24; uVar30 != uVar15; uVar30 = uVar30 + 0x100) {
        FUN_107459670(lVar29,uVar30);
        lVar29 = lVar29 + 0x100;
      }
      for (; uVar12 = uVar24 == uVar15, !(bool)uVar12; uVar24 = uVar24 + 0x100) {
        func_0x0001073f9afc(uVar24);
      }
      lVar27 = lVar27 + 0x100;
      lVar29 = *(long *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar17;
      *(long *)(param_1 + 0x48) = lVar27;
      *(ulong *)(param_1 + 0x50) = lVar36 + uVar25 * 0x100;
      if (lVar29 != 0) {
        __ZdlPv();
      }
    }
    *(long *)(param_1 + 0x48) = lVar27;
    func_0x000107270b94(param_1 + 0x70,*(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10),0);
    func_0x00010724b3d8(&uStack_268);
    func_0x0001073f9afc(&puStack_420);
    FUN_1074597cc(&uStack_320);
    func_0x000107459c48(uStack_88);
    if ((bool)uVar12) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar29 = (long)pppuVar37 - *(long *)(param_1 + 0x28);
    uVar15 = lVar29 / 0xa0 + 1;
    if (0x199999999999999 < uVar15) {
      FUN_107459590();
      goto LAB_107458a00;
    }
    uVar20 = ((long)*ppppuVar34 - *(long *)(param_1 + 0x28)) / 0xa0;
    uVar30 = uVar20 * 2;
    if (uVar30 < uVar15 || uVar30 - uVar15 == 0) {
      uVar30 = uVar15;
    }
    if (0xcccccccccccccb < uVar20) {
      uVar30 = 0x199999999999999;
    }
    pppuStack_290 = ppppuVar34;
    if (uVar30 == 0) {
      pppuVar37 = (undefined8 ***)0x0;
LAB_1074585f4:
      pppuVar19 = (undefined8 ***)((long)pppuVar37 + lVar29);
      ppuStack_298 = pppuVar37 + uVar30 * 0x14;
      ppuStack_2b0 = pppuVar37;
      pppuStack_2a8 = pppuVar19;
      ppuStack_2a0 = pppuVar19;
      FUN_107459500(pppuVar19,param_2);
      ppuStack_2a0 = pppuVar19 + 0x14;
      puVar31 = *(undefined8 **)(param_1 + 0x28);
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      pppuVar19 = pppuVar19 + (((long)puVar3 - (long)puVar31) / -0xa0) * 0x14;
      ppppuStack_2e8 = (undefined8 ****)&ppuStack_2c8;
      pppuStack_2e0 = (undefined ***)&ppuStack_2c0;
      uStack_2d8 = 0;
      pppuVar37 = pppuVar19;
      ppppuStack_2f0 = ppppuVar34;
      ppuStack_2c8 = pppuVar19;
      for (puVar21 = puVar31; ppuStack_2c0 = pppuVar37, puVar21 != puVar3; puVar21 = puVar21 + 0x14)
      {
        FUN_107406144(pppuVar37,puVar21);
        *pppuVar37 = (undefined8 **)&PTR_DAT_1109ad5b8;
        lVar29 = puVar21[7];
        ppuVar8 = (undefined8 **)puVar21[6];
        pppuVar37[7] = (undefined8 **)puVar21[7];
        pppuVar37[6] = ppuVar8;
        if (lVar29 != 0) {
          plVar13 = (long *)(lVar29 + 8);
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar11) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_448 = pppuVar37 + 8;
        *ppuStack_448 = (undefined8 **)0x0;
        pppuVar37[9] = (undefined8 **)0x0;
        pppuVar37[10] = (undefined8 **)0x0;
        lVar29 = puVar21[8];
        lVar36 = puVar21[9];
        uStack_440 = 0;
        lVar27 = lVar36 - lVar29;
        if (lVar27 != 0) {
          uVar15 = lVar27 / 0x88;
          if (0x1e1e1e1e1e1e1e1 < uVar15) {
            FUN_1073f66f8();
            goto LAB_107458a00;
          }
          pppppuVar14 = (undefined8 *****)(pppuVar37 + 10);
          FUN_1073f6704();
          pppuVar37[8] = pppppuVar14;
          pppuVar37[9] = pppppuVar14;
          pppuVar37[10] = pppppuVar14 + uVar15 * 0x11;
          ppppuStack_b8 = &ppppuStack_2b8;
          ppppuStack_b0 = appppuStack_430;
          ppppuStack_a8 = (undefined8 ****)((ulong)ppppuStack_a8 & 0xffffffffffffff00);
          ppppuStack_2b8 = pppppuVar14;
          ppppuStack_c0 = (undefined8 ****)(pppuVar37 + 10);
          for (; appppuStack_430[0] = pppppuVar14, lVar29 != lVar36; lVar29 = lVar29 + 0x88) {
            func_0x0001073f66c4(pppppuVar14,lVar29);
            pppppuVar14 = (undefined8 *****)(appppuStack_430[0] + 0x11);
          }
          ppppuStack_a8 = (undefined8 ****)CONCAT71(ppppuStack_a8._1_7_,1);
          FUN_1073f6750(&ppppuStack_c0);
          pppuVar37[9] = pppppuVar14;
        }
        uStack_440 = 1;
        FUN_10745959c(&ppuStack_448);
        func_0x000107278b70(pppuVar37 + 0xb,puVar21 + 0xb);
        pppuVar37[0xd] = (undefined8 **)puVar21[0xd];
        func_0x000107299490(pppuVar37 + 0xe,puVar21 + 0xe);
        func_0x000107299490(pppuVar37 + 0x10,puVar21 + 0x10);
        func_0x000107299490(pppuVar37 + 0x12,puVar21 + 0x12);
        pppuVar37 = (undefined8 ***)(ppuStack_2c0 + 0x14);
      }
      uStack_2d8 = 1;
      for (; puVar31 != puVar3; puVar31 = puVar31 + 0x14) {
        (**(code **)*puVar31)(puVar31);
      }
      FUN_1074595c8(&ppppuStack_2f0);
      pppuVar37 = (undefined8 ***)ppuStack_2a0;
      ppuStack_2b0 = *(undefined8 ***)(param_1 + 0x28);
      *(undefined8 ****)(param_1 + 0x28) = pppuVar19;
      pppuVar19 = *(undefined8 ****)(param_1 + 0x38);
      *(undefined8 ***)(param_1 + 0x38) = ppuStack_298;
      *(undefined8 ***)(param_1 + 0x30) = ppuStack_2a0;
      pppuStack_2a8 = (undefined8 ***)ppuStack_2b0;
      ppuStack_2a0 = ppuStack_2b0;
      ppuStack_298 = pppuVar19;
      FUN_107459624(&ppuStack_2b0);
      goto LAB_107458834;
    }
    if (uVar30 < 0x19999999999999a) {
      pppuVar37 = (undefined8 ***)(uVar30 * 0xa0);
      __Znwm();
      goto LAB_1074585f4;
    }
  }
LAB_1074589b4:
  func_0x000104bd35f4();
LAB_107458a00:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x107458a04);
  (*pcVar10)();
LAB_1074584ac:
  if (pppppuVar14 == pppppuVar35) goto LAB_1074584ec;
  if (*(short *)(alStack_408[0] + (long)pppppuVar35 * 2) == *(short *)((long)plVar13 + 0x12)) {
    uVar12 = *(undefined1 *)((long)plVar13 + 0x14);
    puVar21 = (undefined8 *)(puStack_420 + (long)pppppuVar28 * 0x18);
    *puVar21 = pppppuVar35;
    *(undefined1 *)(puVar21 + 1) = uVar12;
    if ((*(byte *)(puVar21 + 2) & 1) == 0) {
      *(undefined1 *)(puVar21 + 2) = 1;
    }
    uStack_327 = 1;
    goto LAB_1074584ec;
  }
  pppppuVar35 = (undefined8 *****)((long)pppppuVar35 + 1);
  goto LAB_1074584ac;
}



/* Entry: 107458bb4; end: 107458c33;  */

long *** FUN_107458bb4(long *param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_107459090();
      ppplVar1 = &pplStack_48;
      FUN_10745910c();
      func_0x000107459ca8();
      func_0x000104c2f714(ppplVar1 + 0x25);
      func_0x000104c2f714(ppplVar1 + 0x1e);
      func_0x000104c2f714(ppplVar1 + 0x17);
      func_0x000107261dac(ppplVar1 + 0x13);
      func_0x00010726ea70(ppplVar1 + 0xe);
      func_0x0001073f9a38(ppplVar1 + 0xb);
      FUN_1073f9a70(ppplVar1 + 8);
      FUN_1073f9e1c(ppplVar1 + 5);
      *ppplVar1 = (long **)&PTR_DAT_1109ace68;
      func_0x0001073b4ef8(ppplVar1 + 1);
      return ppplVar1;
    }
    lVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_1074590d0();
    lStack_40 = (long)ppplVar1 + (lVar3 - lVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    FUN_10745909c(param_1,&pplStack_48);
    ppplVar1 = &pplStack_48;
    FUN_10745910c(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 107458c34; end: 107458c37;  */

undefined8 * FUN_107458c34(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x25);
  func_0x000104c2f714(param_1 + 0x1e);
  func_0x000104c2f714(param_1 + 0x17);
  func_0x000107261dac(param_1 + 0x13);
  func_0x00010726ea70(param_1 + 0xe);
  func_0x0001073f9a38(param_1 + 0xb);
  FUN_1073f9a70(param_1 + 8);
  FUN_1073f9e1c(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 107458c38; end: 107458c4b;  */

void FUN_107458c38(void)

{
  FUN_1073f99d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107458c4c; end: 107458c57;  */

undefined1  [16] FUN_107458c4c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x160);
}



/* Entry: 107458c58; end: 107458cbb;  */

undefined8 * FUN_107458c58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar2 = *param_3;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
    *param_2 = uVar2;
    func_0x00010730b014(param_2 + 2,param_3 + 2);
    return param_2;
  }
  puVar1 = param_1;
  FUN_1073f9d88();
  uVar2 = *param_3;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 1);
  *param_1 = uVar2;
  uVar2 = param_3[2];
  param_3[2] = 0;
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 4) = 1;
  return puVar1;
}



/* Entry: 107458cbc; end: 107458cc7;  */

void FUN_107458cbc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_107459b68();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x1a8) * 0x1a8;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x1a8) {
    FUN_107458dcc(lVar2,lVar3);
    lVar2 = lVar2 + 0x1a8;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x1a8) {
    func_0x0001073f9cd0(lVar4);
  }
  *(long *)(param_2 + 8) = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  func_0x000107459b74();
  return;
}



/* Entry: 107458cc8; end: 107458d5b;  */

void FUN_107458cc8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x1a8) * 0x1a8;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x1a8) {
    FUN_107458dcc(lVar2,lVar3);
    lVar2 = lVar2 + 0x1a8;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x1a8) {
    func_0x0001073f9cd0(lVar4);
  }
  *(long *)(param_2 + 8) = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  func_0x000107459b74();
  return;
}



/* Entry: 107458d5c; end: 107458dcb;  */

void FUN_107458d5c(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107459c70();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar1 = 0;
  }
  else {
    if (0x9a90e7d95bc609 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x000107459c70();
      *param_1 = *param_2;
      func_0x000104c318bc(param_1 + 1,param_2 + 1);
      _memcpy(unaff_x19 + 8,unaff_x20 + 0x40,0x61);
      unaff_x19[0x16] = 0;
      unaff_x19[0x17] = 0;
      unaff_x19[0x15] = 0;
      lVar1 = *(long *)(unaff_x20 + 0xa8);
      unaff_x19[0x16] = *(long *)(unaff_x20 + 0xb0);
      unaff_x19[0x15] = lVar1;
      unaff_x19[0x17] = *(long *)(unaff_x20 + 0xb8);
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      *(undefined8 *)(unaff_x20 + 0xb0) = 0;
      *(undefined8 *)(unaff_x20 + 0xb8) = 0;
      *(undefined1 *)(unaff_x19 + 0x18) = 0;
      *(undefined1 *)(unaff_x19 + 0x21) = 0;
      if (*(char *)(unaff_x20 + 0x108) == '\x01') {
        FUN_107458e7c(unaff_x19 + 0x18,unaff_x20 + 0xc0);
      }
      _memcpy(unaff_x19 + 0x22,unaff_x20 + 0x110,100);
      lVar1 = *(long *)(unaff_x20 + 0x180);
      unaff_x19[0x2f] = *(long *)(unaff_x20 + 0x178);
      unaff_x19[0x30] = lVar1;
      *(undefined8 *)(unaff_x20 + 0x178) = 0;
      *(undefined8 *)(unaff_x20 + 0x180) = 0;
      lVar1 = *(long *)(unaff_x20 + 400);
      unaff_x19[0x31] = *(long *)(unaff_x20 + 0x188);
      unaff_x19[0x32] = lVar1;
      *(undefined8 *)(unaff_x20 + 0x188) = 0;
      *(undefined8 *)(unaff_x20 + 400) = 0;
      lVar1 = *(long *)(unaff_x20 + 0x1a0);
      unaff_x19[0x33] = *(long *)(unaff_x20 + 0x198);
      unaff_x19[0x34] = lVar1;
      *(undefined8 *)(unaff_x20 + 0x198) = 0;
      *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
      return;
    }
    lVar1 = unaff_x20 * 0x1a8;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x1a8;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x1a8;
  return;
}



/* Entry: 107458dcc; end: 107458e7b;  */

void FUN_107458dcc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107459c70();
  *param_1 = *param_2;
  func_0x000104c318bc(param_1 + 1,param_2 + 1);
  _memcpy(unaff_x19 + 0x40,unaff_x20 + 0x40,0x61);
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  *(undefined1 *)(unaff_x19 + 0x108) = 0;
  if (*(char *)(unaff_x20 + 0x108) == '\x01') {
    FUN_107458e7c((undefined1 *)(unaff_x19 + 0xc0),unaff_x20 + 0xc0);
  }
  _memcpy(unaff_x19 + 0x110,unaff_x20 + 0x110,100);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x20 + 0x178);
  *(undefined8 *)(unaff_x19 + 0x180) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined8 *)(unaff_x19 + 400) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  return;
}



/* Entry: 107458e7c; end: 107458f17;  */

void FUN_107458e7c(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107459c70();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_1073f9d88();
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b2088)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x20) = uVar1;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
  return;
}



/* Entry: 107458f18; end: 107458f73;  */

void FUN_107458f18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = &PTR_FUN_1109ad9e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 107458f74; end: 107458fbb;  */

long * FUN_107458f74(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x1a8;
    func_0x0001073f9cd0();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107458fbc; end: 107458fc7;  */

void FUN_107458fbc(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  FUN_107459b68();
  func_0x000107459c18();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107459b74();
  return;
}



/* Entry: 107458fc8; end: 107459053;  */

void FUN_107458fc8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107459c18();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107459b74();
  return;
}



/* Entry: 107459054; end: 10745908f;  */

void FUN_107459054(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x000107459cec();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x10;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107459090; end: 10745909b;  */

void FUN_107459090(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  FUN_107459b68();
  func_0x000107459c18();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107459b74();
  return;
}



/* Entry: 10745909c; end: 1074590cf;  */

void FUN_10745909c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107459c18();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107459b74();
  return;
}



/* Entry: 1074590d0; end: 1074590ef;  */

void FUN_1074590d0(void)

{
  FUN_1074590f0();
  return;
}



/* Entry: 1074590f0; end: 10745910b;  */

long * FUN_1074590f0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107459138();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10745910c; end: 107459137;  */

long * FUN_10745910c(long *param_1)

{
  FUN_107459138();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107459138; end: 10745915b;  */

void FUN_107459138(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10745915c; end: 107459167;  */

void FUN_10745915c(void)

{
  FUN_107459b68();
  func_0x000107459cb0();
  return;
}



/* Entry: 107459168; end: 1074591bf;  */

void FUN_107459168(void)

{
  func_0x000107459cb0();
  return;
}



/* Entry: 1074591c0; end: 1074591cb;  */

void FUN_1074591c0(void)

{
  FUN_107459b68();
  func_0x000107459cb0();
  return;
}



/* Entry: 1074591cc; end: 107459223;  */

void FUN_1074591cc(void)

{
  func_0x000107459cb0();
  return;
}



/* Entry: 107459224; end: 10745922f;  */

void FUN_107459224(void)

{
  FUN_107459b68();
  func_0x000107459cb0();
  return;
}



/* Entry: 107459230; end: 107459287;  */

void FUN_107459230(void)

{
  func_0x000107459cb0();
  return;
}



/* Entry: 107459288; end: 10745934b;  */

void FUN_107459288(long param_1)

{
  long *plVar1;
  long extraout_x8;
  long *unaff_x19;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107459c70();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x000107459cd8();
    lVar2 = extraout_x8 + 0x28;
  }
  else {
    plVar1 = unaff_x19;
    FUN_1074084f8();
    FUN_10740857c(auStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x28,(ulong *)(param_1 + 0x10));
    func_0x000107459cd8(lStack_48);
    lStack_48 = lStack_48 + 0x28;
    FUN_107408540();
    lVar2 = unaff_x19[1];
    FUN_1074085fc(auStack_58);
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 10745934c; end: 1074594b3;  */

void FUN_10745934c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x20) != 0) {
    FUN_1073f9d88(lVar1);
    func_0x000107458f44(lVar1,param_3);
    *(undefined4 *)(lVar1 + 0x20) = 0;
    return;
  }
  func_0x000100171ec4(param_2 + 8,param_3 + 8);
  func_0x000100171efc();
  func_0x000100171f2c();
  return;
}



/* Entry: 1074594b4; end: 1074594ff;  */

long * FUN_1074594b4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_107459090();
  FUN_107459b68();
  FUN_107406120();
  *param_1 = (long)&PTR_DAT_1109ad5b8;
  lVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar2;
  param_1[10] = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  lVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = lVar2;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_1[0xd] = param_2[0xd];
  lVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar2;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  lVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = lVar2;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  lVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = lVar2;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return param_1;
}



/* Entry: 107459500; end: 10745958f;  */

void FUN_107459500(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_107406120();
  *param_1 = &PTR_DAT_1109ad5b8;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = uVar1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = uVar1;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = uVar1;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = uVar1;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = uVar1;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = uVar1;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  return;
}



/* Entry: 107459590; end: 10745959b;  */

long FUN_107459590(long param_1)

{
  FUN_107459b68();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001073f665c(param_1);
  }
  return param_1;
}



/* Entry: 10745959c; end: 1074595c7;  */

long FUN_10745959c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001073f665c(param_1);
  }
  return param_1;
}



/* Entry: 1074595c8; end: 107459623;  */

long FUN_1074595c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    puVar1 = (undefined8 *)**(long **)(param_1 + 0x10);
    while (puVar1 != puVar2) {
      (**(code **)puVar1[-0x14])();
      puVar1 = puVar1 + -0x14;
    }
  }
  return param_1;
}



/* Entry: 107459624; end: 10745966f;  */

long * FUN_107459624(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  while (lVar3 != param_1[2]) {
    puVar1 = (undefined8 *)(param_1[2] + -0xa0);
    puVar2 = (undefined8 *)*puVar1;
    param_1[2] = (long)puVar1;
    (*(code *)*puVar2)();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107459670; end: 1074597bf;  */

void FUN_107459670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_2[0x11];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  param_1[0x14] = param_2[0x14];
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x12] = 0;
  uVar1 = param_2[0x15];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = uVar1;
  param_1[0x16] = 0;
  uVar1 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar1;
  param_1[0x18] = param_2[0x18];
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar1;
  param_1[0x1b] = param_2[0x1b];
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar1 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar1;
  param_1[0x1e] = param_2[0x1e];
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(param_2 + 0x1f);
  return;
}



/* Entry: 1074597c0; end: 1074597cb;  */

undefined8 FUN_1074597c0(undefined8 param_1)

{
  FUN_107459b68();
  func_0x0001074597f4();
  FUN_107459850(param_1,0);
  return param_1;
}



/* Entry: 1074597cc; end: 10745984f;  */

long FUN_1074597cc(long param_1)

{
  func_0x0001074597f4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_107459850(param_1,0);
  return param_1;
}



/* Entry: 107459850; end: 107459867;  */

void FUN_107459850(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107459868; end: 107459887;  */

void FUN_107459868(void)

{
  undefined1 uStack_11;
  
  FUN_107459888(&uStack_11);
  return;
}



/* Entry: 107459888; end: 107459907;  */

undefined1 * FUN_107459888(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x000107459c98();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_107459908(auStack_40);
  FUN_107459960(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000107459a04();
  func_0x000107459c48(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107459a04();
  func_0x000107459ca8();
  *(undefined8 *)(puVar3 + 8) = uVar4;
  puVar2 = puVar3;
  FUN_107459930();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 107459908; end: 10745992f;  */

long FUN_107459908(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107459930();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107459930; end: 10745995f;  */

undefined8 * FUN_107459930(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xf83e0f83e0f83f) {
    puVar1 = (undefined8 *)(param_2 * 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b20a8;
  param_1[1] = 0;
  FUN_1074599c8(param_1 + 3);
  return param_1;
}



/* Entry: 107459960; end: 1074599a3;  */

undefined8 * FUN_107459960(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b20a8;
  param_1[1] = 0;
  FUN_1074599c8(param_1 + 3);
  return param_1;
}



/* Entry: 1074599a4; end: 1074599a7;  */

void FUN_1074599a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b20a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074599a8; end: 1074599bb;  */

void FUN_1074599a8(void)

{
  FUN_1074599f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074599bc; end: 1074599c7;  */

undefined8 FUN_1074599bc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c335c0(param_1 + 0xf8);
  func_0x000104c2f714(param_1 + 0xc0);
  func_0x000104c2f714(param_1 + 0x88);
  func_0x000104c319e0(param_1 + 0x48);
  func_0x000104c335c0(param_1 + 0x38);
  func_0x000104c3463c(param_1 + 0x18);
  func_0x000104c31c04();
  return unaff_x19;
}



/* Entry: 1074599c8; end: 1074599ef;  */

long FUN_1074599c8(long param_1)

{
  long lVar1;
  
  _bzero(param_1,0xf0);
  lVar1 = param_1;
  func_0x000107298030();
  func_0x000104c2f64c(lVar1 + 0x70);
  func_0x000104c2f64c(param_1 + 0xa8);
  func_0x000107269c1c(param_1 + 0xe0);
  return param_1;
}



/* Entry: 1074599f0; end: 107459a13;  */

void FUN_1074599f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b20a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107459a14; end: 107459aef;  */

long * FUN_107459a14(long *param_1,long *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined1 auStack_d8 [24];
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_a0 [3];
  long alStack_88 [8];
  undefined8 uStack_48;
  
  plVar2 = alStack_a0;
  plVar3 = param_2;
  uVar4 = param_3;
  uVar6 = param_4;
  func_0x000107459c98();
  uStack_48 = extraout_x8;
  func_0x000104c32bd8();
  if ((uVar4 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_a0,param_4);
    func_0x000107268798(alStack_88,alStack_a0);
    plVar5 = alStack_88;
    func_0x000104c3302c(param_2[1] + (long)plVar3 * 0x78 + 0x38,plVar5);
    func_0x000104c3323c(alStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    plVar2 = param_2;
    plVar5 = plVar3;
    FUN_107459af0(param_2,plVar3,param_3,param_4);
    uVar6 = param_3;
    param_5 = param_4;
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x78;
  *(char *)(param_1 + 2) = (char)uVar4;
  func_0x000107459c48(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar3 = (long *)(plVar2[1] + (long)plVar5 * 0x78);
  pcStack_a8 = FUN_107459af0;
  plStack_c0 = param_2;
  plStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000104c318bc(plVar3,uVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,param_5);
  func_0x000107268798(plVar3 + 7,auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  return plVar3;
}



/* Entry: 107459af0; end: 107459b07;  */

long FUN_107459af0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0x78;
  func_0x000104c318bc(lVar1,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_4);
  func_0x000107268798(lVar1 + 0x38,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return lVar1;
}



/* Entry: 107459b08; end: 107459b67;  */

long FUN_107459b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000104c318bc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_3);
  func_0x000107268798(param_1 + 0x38,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return param_1;
}



/* Entry: 107459b68; end: 107459d13;  */

/* WARNING: Possible PIC construction at 0x000104bd4808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bd480c) */

void FUN_107459b68(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 107459d14; end: 10745a977;  */

undefined8 *
FUN_107459d14(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,ulong param_7,ulong param_8,int param_9,
             undefined8 param_10,long *param_11,long *param_12,undefined1 param_13,
             undefined4 param_14,undefined8 *param_15,undefined4 param_16,undefined4 param_17,
             undefined8 param_18,undefined8 *param_19)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined8 extraout_x8;
  long *plVar14;
  long lVar15;
  undefined8 ***pppuVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  undefined8 ***pppuVar20;
  long *plVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  undefined8 ***pppuStack_580;
  undefined8 ***pppuStack_578;
  undefined8 **ppuStack_570;
  undefined8 uStack_568;
  undefined8 ***apppuStack_560 [9];
  undefined1 auStack_518 [56];
  undefined1 auStack_4e0 [72];
  undefined1 auStack_498 [56];
  undefined1 auStack_460 [56];
  undefined1 auStack_428 [72];
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_398 [56];
  undefined1 auStack_360 [72];
  undefined1 auStack_318 [56];
  undefined1 auStack_2e0 [56];
  undefined1 auStack_2a8 [72];
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  undefined8 ***pppuStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 **ppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  ulong uStack_160;
  ulong uStack_158;
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
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [48];
  undefined1 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  
  puVar7 = param_3;
  func_0x00010745e4cc();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1109ace68;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar6) {
      cVar3 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar3 != '\0');
  *(int *)(param_3 + 3) = iVar1;
  *(undefined1 *)((long)param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *param_3 = &PTR_FUN_1109b20f8;
  uVar25 = *param_4;
  param_3[6] = param_4[1];
  param_3[5] = uVar25;
  *param_4 = 0;
  param_4[1] = 0;
  uStack_80 = extraout_x8;
  func_0x000104c318bc(param_3 + 7,param_10);
  *(undefined4 *)(param_3 + 0xe) = 0x7f7fffff;
  if (((param_8 & 1) == 0) && (uVar8 = param_7, FUN_107438f58(), (uVar8 & 1) == 0)) {
    uVar8 = param_7;
    FUN_10745a978();
    uVar13 = (ushort)uVar8 ^ 1;
  }
  else {
    uVar13 = 1;
  }
  puStack_3e0 = param_3 + 0xf;
  *puStack_3e0 = 0;
  uVar17 = 2;
  if (param_9 == 0) {
    uVar17 = 0;
  }
  uVar18 = 0x40;
  if ((char)param_16 == '\0') {
    uVar18 = 0;
  }
  uVar19 = 0x400;
  if (param_16._1_1_ == '\0') {
    uVar19 = 0;
  }
  *(ushort *)((long)param_3 + 0x74) =
       uVar18 | uVar17 | uVar19 | uVar13 | *(ushort *)((long)param_3 + 0x74) & 0xf000;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  lVar15 = *param_11;
  lVar2 = param_11[1];
  puStack_3d8 = (undefined8 *)((ulong)puStack_3d8 & 0xffffffffffffff00);
  lVar4 = lVar2 - lVar15;
  if (lVar4 == 0) {
LAB_107459f1c:
    puStack_3d8 = (undefined8 *)CONCAT71(puStack_3d8._1_7_,1);
    FUN_10745be80(&puStack_3e0);
    param_3[0x12] = &UNK_10e52b660;
    pppuStack_260 = (undefined8 ***)(param_3 + 0x16);
    param_3[0x14] = 0;
    param_3[0x13] = 0;
    param_3[0x16] = 0;
    param_3[0x15] = 0;
    param_3[0x18] = 0;
    param_3[0x17] = 0;
    pppuStack_258 = (undefined8 ***)((ulong)pppuStack_258 & 0xffffffffffffff00);
    lVar15 = param_12[1] - *param_12;
    if (lVar15 != 0) {
      uVar8 = lVar15 / 0x18;
      if (0xaaaaaaaaaaaaaaa < uVar8) {
        func_0x000107407bb4();
        goto LAB_10745a67c;
      }
      puVar7 = param_3 + 0x18;
      FUN_107407bc0();
      param_3[0x16] = puVar7;
      param_3[0x17] = puVar7;
      param_3[0x18] = puVar7 + uVar8 * 3;
      _memmove();
      param_3[0x17] = (long)puVar7 + lVar15;
    }
    pppuStack_258 = (undefined8 ***)CONCAT71(pppuStack_258._1_7_,1);
    func_0x00010745beac(&pppuStack_260);
    pppuVar23 = (undefined8 ***)(param_3 + 0x1a);
    *pppuVar23 = (undefined8 **)0x0;
    plVar14 = param_3 + 0x19;
    *plVar14 = (long)pppuVar23;
    param_3[0x1b] = 0;
    FUN_10745a99c(param_1,0x41800000,param_3 + 0x1c,param_6);
    puVar7 = param_3 + 0x1e;
    *puVar7 = 0;
    plVar21 = param_3 + 0x1d;
    *plVar21 = (long)puVar7;
    param_3[0x1f] = 0;
    func_0x00010745bed8(param_3 + 0x20);
    FUN_10745a99c(param_1,0x3f800000,param_3 + 0x82,param_7);
    func_0x00010745bed8(param_3 + 0x83);
    func_0x00010745bed8(param_3 + 0xe5);
    param_3[0x148] = 0;
    param_3[0x147] = 0;
    param_3[0x14a] = 0;
    param_3[0x149] = 0;
    *(undefined4 *)(param_3 + 0x14b) = param_2;
    do {
      iVar1 = iRam00000001131ad780 + 1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
      if (bVar6) {
        cVar3 = ExclusiveMonitorsStatus();
        iRam00000001131ad780 = iVar1;
      }
    } while (cVar3 != '\0');
    *(int *)((long)param_3 + 0xa5c) = iVar1;
    *(undefined1 *)(param_3 + 0x14c) = param_13;
    param_3[0x14d] = 0;
    param_3[0x14f] = 0;
    param_3[0x14e] = 0;
    uVar25 = *param_15;
    param_3[0x14e] = param_15[1];
    param_3[0x14d] = uVar25;
    param_3[0x14f] = param_15[2];
    param_15[2] = 0;
    param_15[1] = 0;
    *param_15 = 0;
    *(undefined2 *)(param_3 + 0x150) = 0;
    param_3[0x152] = 0;
    param_3[0x151] = 0;
    func_0x0001072d6da0(param_3 + 0x153,param_18);
    lVar15 = 0;
    uVar25 = *param_19;
    param_3[0x157] = param_19[1];
    param_3[0x156] = uVar25;
    *(int *)(param_3 + 0x158) = (int)param_1;
    *(undefined1 *)(param_3 + 0x159) = 0;
    *(undefined1 *)(param_3 + 0x15a) = 0;
    *(undefined1 *)(param_3 + 0x15b) = 0;
    *(undefined1 *)(param_3 + 0x15c) = 0;
    *(undefined1 *)(param_3 + 0x15d) = 0;
    *(undefined1 *)(param_3 + 0x15e) = 0;
    *(undefined1 *)(param_3 + 0x15f) = 0;
    *(undefined1 *)(param_3 + 0x160) = 0;
    *(undefined1 *)(param_3 + 0x161) = 0;
    *(undefined1 *)(param_3 + 0x162) = 0;
    *(undefined1 *)(param_3 + 0x163) = 0;
    *(undefined1 *)(param_3 + 0x164) = 0;
    *(undefined1 *)(param_3 + 0x165) = 0;
    *(undefined1 *)(param_3 + 0x166) = 0;
    *(undefined1 *)(param_3 + 0x167) = 0;
    *(undefined1 *)(param_3 + 0x168) = 0;
    do {
      *(undefined1 *)((long)param_3 + lVar15 + 0xb48) = 0;
      *(undefined1 *)((long)param_3 + lVar15 + 0xb50) = 0;
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x80);
    puVar24 = (undefined8 *)*param_5;
    while (puVar24 != param_5 + 1) {
      lVar15 = puVar24[0xb];
      FUN_1074cf488(&puStack_3e0,lVar15 + 0x20);
      func_0x00010745e91c(apppuStack_560,&puStack_3e0);
      func_0x00010745ea28();
      func_0x00010745e760(&pppuStack_578,auStack_398);
      func_0x00010745e91c(&pppuStack_580,auStack_360);
      func_0x00010745ea28();
      func_0x00010745e760(&uStack_588,auStack_318);
      func_0x00010745e6e8(&uStack_590,auStack_2e0);
      func_0x00010745e6e8(&uStack_598,auStack_2a8);
      pppuStack_260 = apppuStack_560[0];
      pppuStack_258 = pppuStack_578;
      pppuStack_250 = pppuStack_580;
      uStack_248 = uStack_588;
      uStack_240 = uStack_590;
      uStack_238 = uStack_598;
      uStack_1b8 = uStack_1b8 & 0xffffffffffffff00;
      uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
      uStack_180 = uStack_180 & 0xffffffffffffff00;
      ppuStack_178 = (undefined8 ***)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
      func_0x0001074cf4c8(apppuStack_560,lVar15 + 0x20);
      func_0x00010745e91c(&pppuStack_578,apppuStack_560);
      func_0x00010745ea28();
      func_0x00010745e760(&pppuStack_580,auStack_518);
      func_0x00010745e91c(&uStack_588,auStack_4e0);
      func_0x00010745ea28();
      func_0x00010745e760(&uStack_590,auStack_498);
      func_0x00010745e6e8(&uStack_598,auStack_460);
      func_0x00010745e6e8(&uStack_5a0,auStack_428);
      pppuStack_170 = pppuStack_578;
      pppuStack_168 = pppuStack_580;
      uStack_160 = uStack_588;
      uStack_158 = uStack_590;
      uStack_150 = uStack_598;
      uStack_148 = uStack_5a0;
      uStack_c8 = 0;
      auStack_c0[0] = 0;
      uStack_90 = 0;
      ppuStack_88 = (undefined8 ***)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      auStack_e0[0] = 0;
      ppppuVar9 = (undefined8 ****)0x238;
      __Znwm();
      uStack_568 = 1;
      pppuStack_578 = ppppuVar9;
      ppuStack_570 = pppuVar23;
      func_0x000104c2fe00(ppppuVar9 + 4,puVar24 + 4);
      FUN_10745d580(ppppuVar9 + 0xb,&pppuStack_260);
      _memcpy(ppppuVar9 + 0x11,&uStack_230,0x60);
      FUN_10745d5b8(ppppuVar9 + 0x1d,&uStack_1d0);
      FUN_10742a004(ppppuVar9 + 0x21,&uStack_1b0);
      ppppuVar9[0x28] = (undefined8 ***)ppuStack_178;
      FUN_10745d580(ppppuVar9 + 0x29,&pppuStack_170);
      _memcpy(ppppuVar9 + 0x2f,&uStack_140,0x60);
      FUN_10745d5b8(ppppuVar9 + 0x3b,auStack_e0);
      FUN_10742a004(ppppuVar9 + 0x3f,auStack_c0);
      ppppuVar9[0x46] = (undefined8 ***)ppuStack_88;
      pppuVar16 = (undefined8 ***)*pppuVar23;
      pppuVar22 = pppuVar23;
      pppuVar20 = pppuVar23;
      while (pppuVar16 != (undefined8 ***)0x0) {
        while( true ) {
          pppuVar20 = pppuVar16;
          ppppuVar10 = ppppuVar9 + 4;
          func_0x000104c2fc44(ppppuVar10,pppuVar20 + 4);
          if ((int)ppppuVar10 == 0) break;
          pppuVar16 = (undefined8 ***)*pppuVar20;
          pppuVar22 = pppuVar20;
          if ((undefined8 ***)*pppuVar20 == (undefined8 ***)0x0) goto LAB_10745a39c;
        }
        pppuVar16 = pppuVar20 + 4;
        func_0x000104c2fc44(pppuVar16,ppppuVar9 + 4);
        if ((int)pppuVar16 == 0) {
          if (*pppuVar22 != (undefined8 **)0x0) goto LAB_10745a3d8;
          break;
        }
        pppuVar22 = pppuVar20 + 1;
        pppuVar16 = (undefined8 ***)*pppuVar22;
      }
LAB_10745a39c:
      *pppuStack_578 = (undefined8 ***)0x0;
      pppuStack_578[1] = (undefined8 ***)0x0;
      pppuStack_578[2] = pppuVar20;
      *pppuVar22 = pppuStack_578;
      if (*(long *)*plVar14 != 0) {
        *plVar14 = *(long *)*plVar14;
      }
      func_0x00010002c5b0(param_3[0x1a]);
      param_3[0x1b] = param_3[0x1b] + 1;
      pppuStack_578 = (undefined8 ****)0x0;
LAB_10745a3d8:
      FUN_10745d5f4(&pppuStack_578);
      FUN_10745bfb0(&pppuStack_260);
      func_0x00010745c048(apppuStack_560);
      func_0x00010745c048(&puStack_3e0);
      func_0x00010002c7d4();
    }
    puVar24 = (undefined8 *)*param_5;
    while (puVar24 != param_5 + 1) {
      FUN_10745ac14(plVar14,puVar24 + 4);
      uStack_240 = uStack_240 & 0xffffffff00000000;
      pppuStack_258 = (undefined8 ****)0x0;
      pppuStack_260 = (undefined8 ****)0x0;
      uStack_248 = 0;
      pppuStack_250 = (undefined8 ****)0x0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_220 = 0;
      uStack_228 = 0;
      uStack_218 = uStack_218 & 0xffffffff00000000;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c8 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1a0 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      ppuStack_178 = (undefined8 **)((ulong)ppuStack_178 & 0xffffffff00000000);
      func_0x00010745ec3c(&puStack_3e0,0x25);
      func_0x00010745e85c(&pppuStack_260);
      func_0x00010745e8a8();
      func_0x00010745ec3c(&puStack_3e0,0x36);
      func_0x00010745e85c(&uStack_238);
      func_0x00010745e8a8();
      func_0x00010745eb88();
      FUN_10745d84c();
      func_0x00010745e85c(&uStack_210);
      func_0x00010745e8a8();
      func_0x00010745eb88();
      FUN_10745d84c();
      func_0x00010745e85c(&uStack_1e8);
      func_0x00010745e8a8();
      func_0x00010745ec3c(&puStack_3e0,0x27);
      func_0x00010745e85c(&uStack_1c0);
      func_0x00010745e8a8();
      func_0x00010745eb88();
      FUN_10745d84c();
      func_0x00010745e85c(&uStack_198);
      func_0x00010745e8a8();
      plVar11 = plVar21;
      FUN_10745da08(plVar21,apppuStack_560,puVar24 + 4);
      if (*plVar11 == 0) {
        puVar12 = (undefined8 *)0x148;
        __Znwm();
        uStack_3d0 = 0;
        puStack_3e0 = puVar12;
        puStack_3d8 = puVar7;
        func_0x000104c2fe00(puVar12 + 4,puVar24 + 4);
        FUN_10745da6c(puVar12 + 0xb,&pppuStack_260);
        FUN_10745da6c(puVar12 + 0x15,&uStack_210);
        FUN_10744955c(puVar12 + 0x1f,&uStack_1c0);
        FUN_10744955c(puVar12 + 0x24,&uStack_198);
        uStack_3d0 = CONCAT71(uStack_3d0._1_7_,1);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = apppuStack_560[0];
        *plVar11 = (long)puVar12;
        if (*(long *)*plVar21 != 0) {
          *plVar21 = *(long *)*plVar21;
        }
        func_0x00010002c5b0(param_3[0x1e],puVar12);
        param_3[0x1f] = param_3[0x1f] + 1;
        puStack_3e0 = (undefined8 *)0x0;
        FUN_10745daa4(&puStack_3e0);
      }
      func_0x00010745c0f0(&pppuStack_260);
      func_0x00010002c7d4();
    }
    lVar2 = param_3[0x10];
    for (lVar15 = param_3[0xf]; bVar6 = lVar15 == lVar2, !bVar6; lVar15 = lVar15 + 0x670) {
      (**(code **)(**(long **)(lVar15 + 0x660) + 0x30))();
      func_0x00010726236c(&pppuStack_260);
      if ((char)uStack_228 == '\x01') {
        FUN_10732f3ac(&puStack_3e0,param_3 + 0x12,&pppuStack_260);
      }
      func_0x00010724b3d8(&pppuStack_260);
    }
    func_0x00010745e428(uStack_80);
    if (bVar6) {
      return param_3;
    }
    ___stack_chk_fail();
  }
  else {
    uVar8 = lVar4 / 0x670;
    if (uVar8 < 0x27c45979c95205) {
      ppppuVar9 = (undefined8 ****)(param_3 + 0x11);
      FUN_10740762c();
      param_3[0xf] = ppppuVar9;
      param_3[0x10] = ppppuVar9;
      param_3[0x11] = ppppuVar9 + uVar8 * 0xce;
      pppuStack_258 = &pppuStack_578;
      pppuStack_250 = apppuStack_560;
      uStack_248 = uStack_248 & 0xffffffffffffff00;
      pppuStack_578 = ppppuVar9;
      pppuStack_260 = (undefined8 ***)(param_3 + 0x11);
      for (; apppuStack_560[0] = ppppuVar9, lVar15 != lVar2; lVar15 = lVar15 + 0x670) {
        FUN_10740767c(ppppuVar9,lVar15);
        ppppuVar9 = (undefined8 ****)(apppuStack_560[0] + 0xce);
      }
      uStack_248 = CONCAT71(uStack_248._1_7_,1);
      FUN_1074079d8(&pppuStack_260);
      param_3[0x10] = ppppuVar9;
      goto LAB_107459f1c;
    }
  }
  FUN_107407620();
LAB_10745a67c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10745a680);
  (*pcVar5)();
}



/* Entry: 10745a978; end: 10745a99b;  */

byte FUN_10745a978(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x30) == 1 | *(byte *)(param_1 + 0x10);
  }
  return bVar1 & 1;
}



/* Entry: 10745a99c; end: 10745ac13;  */

char * FUN_10745a99c(float param_1,undefined4 param_2,long *param_3,undefined4 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  char *pcVar2;
  undefined8 extraout_x8;
  long *unaff_x20;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_3c0 [56];
  undefined1 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_230 [56];
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  char acStack_1e8 [400];
  undefined8 uStack_58;
  
  plVar1 = param_3;
  uVar6 = param_2;
  func_0x00010745e4cc();
  uStack_58 = extraout_x8;
  if (param_4[0xc] == 0) {
    func_0x00010745ec90();
    func_0x00010745ebb8();
    *(undefined4 *)(plVar1 + 1) = param_2;
LAB_10745a9fc:
    *(undefined1 *)((long)plVar1 + 0xc) = 0;
    *(undefined1 *)((long)plVar1 + 0x1c) = 0;
    *(undefined1 *)(plVar1 + 4) = 0;
    *(undefined1 *)(plVar1 + 10) = 0;
    *param_3 = (long)plVar1;
    plVar1 = unaff_x20;
  }
  else {
    in_ZR = param_4[0xc] == 1;
    if ((bool)in_ZR) {
      uVar6 = *param_4;
      func_0x00010745ec90();
      func_0x00010745ebb8();
      *(undefined4 *)(plVar1 + 1) = uVar6;
      goto LAB_10745a9fc;
    }
    if ((*(byte *)(param_4 + 4) >> 1 & 1) == 0) {
      if ((*(byte *)(param_4 + 4) & 1) == 0) {
        __Znwm(0x48);
        func_0x00010745ea48();
        func_0x00010745ea70(&PTR_FUN_1109b2238);
        fVar5 = param_1 + 1.0;
        *(undefined4 *)(unaff_x20 + 7) = param_2;
        *(float *)((long)unaff_x20 + 0x3c) = fVar5;
        func_0x0001077b1298(unaff_x20 + 1);
        *(float *)(unaff_x20 + 8) = param_1;
        *(float *)((long)unaff_x20 + 0x44) = fVar5;
      }
      else {
        __Znwm(0x40);
        func_0x00010745ea48();
        func_0x00010745ea70(&PTR_DAT_1109b21f0);
        *(undefined4 *)(unaff_x20 + 7) = param_2;
      }
      pcVar2 = acStack_1e8;
      func_0x000107266a84();
      *param_3 = (long)unaff_x20;
      goto LAB_10745aa1c;
    }
    func_0x00010745ec90();
    func_0x00010745ebb8();
    param_1 = param_1 + 1.0;
    func_0x0001077512dc(acStack_1e8);
    auStack_3c0[0] = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    func_0x00010745e884();
    fVar3 = param_1;
    func_0x00010724b3d8(auStack_3c0);
    func_0x00010745ea88();
    *(float *)(plVar1 + 1) = param_1;
    *(undefined1 *)((long)plVar1 + 0xc) = 0;
    *(undefined1 *)((long)plVar1 + 0x1c) = 0;
    func_0x00010727d69c(plVar1 + 4,param_4);
    *(undefined1 *)(plVar1 + 10) = 1;
    func_0x00010745e6dc(param_4);
    func_0x0001077b1298();
    fVar5 = fVar3;
    func_0x0001077512dc(acStack_1e8);
    auStack_230[0] = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010745e884();
    uVar4 = uVar6;
    func_0x0001077512dc(auStack_3c0);
    func_0x00010745eb58();
    func_0x00010745e884();
    func_0x00010745e864();
    func_0x000107267da8(auStack_3c0);
    func_0x00010724b3d8(auStack_230);
    func_0x00010745ea88();
    if ((*(byte *)((long)plVar1 + 0x1c) & 1) == 0) {
      *(undefined1 *)((long)plVar1 + 0x1c) = 1;
    }
    *(float *)((long)plVar1 + 0xc) = fVar3;
    *(undefined4 *)(plVar1 + 2) = uVar6;
    *(float *)((long)plVar1 + 0x14) = fVar5;
    *(undefined4 *)(plVar1 + 3) = uVar4;
    *param_3 = (long)plVar1;
  }
  acStack_1e8[0] = '\0';
  acStack_1e8[1] = '\0';
  acStack_1e8[2] = '\0';
  acStack_1e8[3] = '\0';
  acStack_1e8[4] = '\0';
  acStack_1e8[5] = '\0';
  acStack_1e8[6] = '\0';
  acStack_1e8[7] = '\0';
  pcVar2 = acStack_1e8;
  FUN_10745d190();
  unaff_x20 = plVar1;
LAB_10745aa1c:
  func_0x00010745e428(uStack_58);
  if ((bool)in_ZR) {
    return pcVar2;
  }
  ___stack_chk_fail();
  func_0x00010745e864();
  func_0x000107267da8(auStack_3c0);
  func_0x00010724b3d8(auStack_230);
  func_0x00010745ea88();
  plVar1 = unaff_x20 + 4;
  FUN_10745d170();
  func_0x00010745eab0();
  func_0x00010745e608();
  FUN_10745d62c();
  if (*plVar1 != 0) {
    return (char *)(*plVar1 + 0x58);
  }
  pcVar2 = "map::at:  key not found";
  func_0x000104c03f28();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pcVar2 + 0xa98);
  FUN_1073c4394(pcVar2 + 0xa88);
  func_0x0001073e7720(pcVar2 + 0xa68);
  FUN_107408828(pcVar2 + 0xa50);
  FUN_107408828(pcVar2 + 0xa48);
  func_0x0001074088e8(pcVar2 + 0xa40);
  func_0x0001074088e8(pcVar2 + 0xa38);
  func_0x00010745c128(pcVar2 + 0x728);
  func_0x00010745c128(pcVar2 + 0x418);
  FUN_10745d434(pcVar2 + 0x410);
  func_0x00010745c128(pcVar2 + 0x100);
  func_0x00010745d4f0(pcVar2 + 0xe8);
  FUN_10745d434(pcVar2 + 0xe0);
  func_0x00010745d460(pcVar2 + 200);
  FUN_1073e7820(pcVar2 + 0xb0);
  func_0x000107261dac(pcVar2 + 0x90);
  FUN_1073e7858(pcVar2 + 0x78);
  func_0x000104c2f714(pcVar2 + 0x38);
  func_0x0001073e76f8(pcVar2 + 0x28);
  *(undefined ***)pcVar2 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(pcVar2 + 8);
  return pcVar2;
}



/* Entry: 10745ac14; end: 10745ac4f;  */

char * FUN_10745ac14(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auStack_18 [8];
  
  FUN_10745d62c(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return (char *)(*param_1 + 0x58);
  }
  pcVar1 = "map::at:  key not found";
  func_0x000104c03f28();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pcVar1 + 0xa98);
  FUN_1073c4394(pcVar1 + 0xa88);
  func_0x0001073e7720(pcVar1 + 0xa68);
  FUN_107408828(pcVar1 + 0xa50);
  FUN_107408828(pcVar1 + 0xa48);
  func_0x0001074088e8(pcVar1 + 0xa40);
  func_0x0001074088e8(pcVar1 + 0xa38);
  func_0x00010745c128(pcVar1 + 0x728);
  func_0x00010745c128(pcVar1 + 0x418);
  FUN_10745d434(pcVar1 + 0x410);
  func_0x00010745c128(pcVar1 + 0x100);
  func_0x00010745d4f0(pcVar1 + 0xe8);
  FUN_10745d434(pcVar1 + 0xe0);
  func_0x00010745d460(pcVar1 + 200);
  FUN_1073e7820(pcVar1 + 0xb0);
  func_0x000107261dac(pcVar1 + 0x90);
  FUN_1073e7858(pcVar1 + 0x78);
  func_0x000104c2f714(pcVar1 + 0x38);
  func_0x0001073e76f8(pcVar1 + 0x28);
  *(undefined ***)pcVar1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(pcVar1 + 8);
  return pcVar1;
}



/* Entry: 10745ac50; end: 10745ad07;  */

undefined8 * FUN_10745ac50(undefined8 *param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x153);
  FUN_1073c4394(param_1 + 0x151);
  func_0x0001073e7720(param_1 + 0x14d);
  FUN_107408828(param_1 + 0x14a);
  FUN_107408828(param_1 + 0x149);
  func_0x0001074088e8(param_1 + 0x148);
  func_0x0001074088e8(param_1 + 0x147);
  func_0x00010745c128(param_1 + 0xe5);
  func_0x00010745c128(param_1 + 0x83);
  FUN_10745d434(param_1 + 0x82);
  func_0x00010745c128(param_1 + 0x20);
  func_0x00010745d4f0(param_1 + 0x1d);
  FUN_10745d434(param_1 + 0x1c);
  func_0x00010745d460(param_1 + 0x19);
  FUN_1073e7820(param_1 + 0x16);
  func_0x000107261dac(param_1 + 0x12);
  FUN_1073e7858(param_1 + 0xf);
  func_0x000104c2f714(param_1 + 7);
  func_0x0001073e76f8(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 10745ad08; end: 10745ad0b;  */

undefined8 * FUN_10745ad08(undefined8 *param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x153);
  FUN_1073c4394(param_1 + 0x151);
  func_0x0001073e7720(param_1 + 0x14d);
  FUN_107408828(param_1 + 0x14a);
  FUN_107408828(param_1 + 0x149);
  func_0x0001074088e8(param_1 + 0x148);
  func_0x0001074088e8(param_1 + 0x147);
  func_0x00010745c128(param_1 + 0xe5);
  func_0x00010745c128(param_1 + 0x83);
  FUN_10745d434(param_1 + 0x82);
  func_0x00010745c128(param_1 + 0x20);
  func_0x00010745d4f0(param_1 + 0x1d);
  FUN_10745d434(param_1 + 0x1c);
  func_0x00010745d460(param_1 + 0x19);
  FUN_1073e7820(param_1 + 0x16);
  func_0x000107261dac(param_1 + 0x12);
  FUN_1073e7858(param_1 + 0xf);
  func_0x000104c2f714(param_1 + 7);
  func_0x0001073e76f8(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 10745ad0c; end: 10745ad1f;  */

void FUN_10745ad0c(void)

{
  FUN_10745ac50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745ad20; end: 10745b0a7;  */

void FUN_10745ad20(long param_1)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long extraout_x10;
  long unaff_x19;
  long lVar19;
  long lStack_68;
  long *plVar18;
  
  func_0x00010745e9e0();
  bVar2 = false;
  if (*(long *)(param_1 + 0x168) == *(long *)(param_1 + 0x170)) goto LAB_10745af44;
  uVar1 = *(ushort *)(unaff_x19 + 0x74);
  if ((uVar1 >> 2 & 1) == 0) {
    func_0x00010745eb18();
    FUN_10745b170(unaff_x19 + 0x198);
    lVar19 = *(long *)(unaff_x19 + 200);
    while (lVar3 = lStack_68, lVar19 != unaff_x19 + 0xd0) {
      if ((*(byte *)(lVar19 + 0x1f0) & 1) == 0) {
        lVar11 = *(long *)(lVar19 + 0x148);
        func_0x00010745e468();
        *(long *)(lVar19 + 0x178) = lVar11;
        lVar12 = *(long *)(lVar19 + 0x150);
        func_0x00010745e468();
        *(long *)(lVar19 + 0x180) = lVar12;
        lVar13 = *(long *)(lVar19 + 0x158);
        func_0x00010745e468();
        *(long *)(lVar19 + 0x188) = lVar13;
        lVar14 = *(long *)(lVar19 + 0x160);
        func_0x00010745e468();
        *(long *)(lVar19 + 400) = lVar14;
        lVar15 = *(long *)(lVar19 + 0x168);
        func_0x00010745e468();
        *(long *)(lVar19 + 0x198) = lVar15;
        lVar16 = *(long *)(lVar19 + 0x170);
        func_0x00010745e468();
        *(long *)(lVar19 + 0x1a0) = lVar16;
        *(undefined8 *)(lVar19 + 0x1a8) = 0;
        do {
          func_0x00010745ed2c();
        } while (extraout_x10 != 0);
        func_0x000100651cb4(&stack0xffffffffffffff70,
                            lVar12 + lVar11 + lVar13 + lVar14 + lVar15 + lVar16);
        FUN_10744bd40(lVar19 + 0x1d8,&stack0xffffffffffffff70);
        func_0x000100100fec(&stack0xffffffffffffff70);
      }
      plVar17 = (long *)(lVar19 + 0x1d8);
      FUN_10744bd74();
      plVar18 = plVar17;
      func_0x00010745ead0();
      iVar5 = (int)plVar18;
      FUN_10745db0c();
      iVar6 = iVar5;
      func_0x00010745ead0();
      func_0x00010745db34();
      iVar7 = iVar6;
      func_0x00010745ead0();
      FUN_10745db0c();
      iVar8 = iVar7;
      func_0x00010745ead0();
      func_0x00010745db34();
      iVar9 = iVar8;
      func_0x00010745ead0();
      func_0x00010745db34();
      iVar10 = iVar9;
      func_0x00010745ead0();
      func_0x00010745db34();
      if ((*plVar17 != plVar17[1]) &&
         (((iVar5 != 0 || iVar6 != 0) || (iVar7 != 0 || iVar8 != 0)) || (iVar9 != 0 || iVar10 != 0))
         ) {
        FUN_1073da4dc(&stack0xffffffffffffff70);
        func_0x000107309708(lVar19 + 0x1f8,&stack0xffffffffffffff70);
        lStack_68 = 0;
        if (lVar3 != 0) {
          func_0x00010745e43c();
        }
        iVar10 = *(int *)(lVar19 + 0x234);
        *(int *)(lVar19 + 0x234) = iVar10 + 1;
        *(int *)(lVar19 + 0x218) = iVar10;
      }
      func_0x00010002c7d4();
    }
LAB_10745b054:
    bVar2 = true;
    uVar1 = *(ushort *)(unaff_x19 + 0x74);
  }
  else if ((uVar1 >> 5 & 1) == 0) {
    func_0x00010745eb18();
    goto LAB_10745b054;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    FUN_10745b23c(unaff_x19 + 0x248);
    uVar1 = *(ushort *)(unaff_x19 + 0x74);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    FUN_10745b2e4(unaff_x19 + 0x2f8);
  }
LAB_10745af44:
  if (*(long *)(unaff_x19 + 0x480) != *(long *)(unaff_x19 + 0x488)) {
    FUN_10745b38c(&stack0xffffffffffffff70,unaff_x19 + 0x418);
  }
  uVar4 = *(long *)(unaff_x19 + 0x790) == *(long *)(unaff_x19 + 0x798);
  if (!(bool)uVar4) {
    FUN_10745b38c(&stack0xffffffffffffff70,unaff_x19 + 0x728);
  }
  if ((*(long *)(unaff_x19 + 0xa38) != 0) && (func_0x00010745ed14(), !(bool)uVar4)) {
    FUN_10745b648(&stack0xffffffffffffff50);
  }
  if ((*(long *)(unaff_x19 + 0xa40) != 0) && (func_0x00010745ed14(), !(bool)uVar4)) {
    FUN_10745b648(&stack0xffffffffffffff50);
  }
  if ((*(long *)(unaff_x19 + 0xa48) != 0) && (func_0x00010745ed14(), !(bool)uVar4)) {
    FUN_10745b6f8(&stack0xffffffffffffff38);
  }
  if ((*(long *)(unaff_x19 + 0xa50) != 0) && (func_0x00010745ed14(), !(bool)uVar4)) {
    FUN_10745b6f8(&stack0xffffffffffffff38);
  }
  if (bVar2) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
  }
  *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  *(ushort *)(unaff_x19 + 0x74) = *(ushort *)(unaff_x19 + 0x74) | 0x3c;
  return;
}



/* Entry: 10745b0a8; end: 10745b16f;  */

void FUN_10745b0a8(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  ulong extraout_x8_00;
  undefined8 extraout_x9;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010745e8b0();
  uVar5 = (ulong)*(uint *)(param_1 + 0x60);
  if (*(char *)(param_1 + uVar5 * 0x20 + 0x18) == '\x01') {
    func_0x00010745e5a4();
    uVar5 = extraout_x8_00;
  }
  *(int *)(unaff_x21 + 0x60) = (int)uVar5;
  uVar1 = *(char *)(unaff_x21 + uVar5 * 0x20 + 0x18) == '\x01';
  if ((bool)uVar1) {
    FUN_10745dadc();
    (**(code **)(*unaff_x19 + 0x10))();
    func_0x0001073dac80();
    (**(code **)(*unaff_x20 + 0x58))();
    (**(code **)(*unaff_x19 + 0x18))();
    func_0x0001073dac98();
    uVar4 = extraout_x9;
    if (!(bool)uVar1) {
      uVar4 = extraout_x8;
    }
    puVar3 = &UNK_10f410127;
    FUN_1073da44c();
    func_0x0001073dac80();
    lVar6 = unaff_x20[1];
    func_0x0001073dac18();
    puVar2 = auStack_a0;
    func_0x00010729d56c(puVar2,puVar3,uVar4);
    uStack_a8 = 3;
    uStack_c0 = *(undefined8 *)unaff_x20[1];
    uStack_b8 = 3;
    FUN_10743fa9c(lVar6,puVar2,auStack_b0,&uStack_c0,1);
    func_0x0001073dac90();
    return;
  }
  FUN_1073da574(auStack_48);
  func_0x000107309778(unaff_x21 + (ulong)*(uint *)(unaff_x21 + 0x60) * 0x20,auStack_48);
  lVar6 = lStack_38;
  lStack_38 = 0;
  if (lVar6 != 0) {
    func_0x00010745e43c();
  }
  return;
}



/* Entry: 10745b170; end: 10745b23b;  */

void FUN_10745b170(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010745e568();
  if ((bool)in_ZR) {
    func_0x00010745e5a4();
  }
  func_0x00010745e76c();
  if (!(bool)in_ZR) {
    func_0x00010745e5d4();
    func_0x00010745e5e0();
    func_0x00010745eb98();
    func_0x00010745e6f4();
    func_0x00010745e834();
    func_0x00010745e810();
    func_0x00010745e7d8();
    if (unaff_x19 != 0) {
      func_0x00010745e43c();
    }
    return;
  }
  func_0x00010745daf4();
  func_0x00010745e52c();
  func_0x00010745e704();
  func_0x00010745e620();
  FUN_1073dac18(*(undefined8 *)(unaff_x19 + 8),0xaf);
  FUN_10743fa9c();
  func_0x0001073dac90();
  return;
}



/* Entry: 10745b23c; end: 10745b2e3;  */

void FUN_10745b23c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010745e568();
  if ((bool)in_ZR) {
    func_0x00010745e5a4();
  }
  func_0x00010745e76c();
  if ((bool)in_ZR) {
    func_0x00010745daf4();
    func_0x00010745e52c();
    func_0x00010745e704();
    func_0x00010745e620();
    FUN_1073dac18(*(undefined8 *)(unaff_x19 + 8),0xaf);
    FUN_10743fa9c();
    func_0x0001073dac90();
    return;
  }
  func_0x00010745e5d4();
  func_0x00010745e5e0();
  func_0x00010745eb98();
  func_0x00010745e6f4();
  func_0x00010745e834();
  func_0x00010745e810();
  func_0x00010745e7d8();
  if (unaff_x19 != 0) {
    func_0x00010745e43c();
  }
  return;
}



/* Entry: 10745b2e4; end: 10745b38b;  */

void FUN_10745b2e4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010745e568();
  if ((bool)in_ZR) {
    func_0x00010745e5a4();
  }
  func_0x00010745e76c();
  if ((bool)in_ZR) {
    func_0x00010745daf4();
    func_0x00010745e52c();
    func_0x00010745e704();
    func_0x00010745e620();
    FUN_1073dac18(*(undefined8 *)(unaff_x19 + 8),0xaf);
    FUN_10743fa9c();
    func_0x0001073dac90();
    return;
  }
  func_0x00010745e5d4();
  func_0x00010745e5e0();
  func_0x00010745eb98();
  func_0x00010745e6f4();
  func_0x00010745e834();
  func_0x00010745e810();
  func_0x00010745e7d8();
  if (unaff_x19 != 0) {
    func_0x00010745e43c();
  }
  return;
}



/* Entry: 10745b38c; end: 10745b647;  */

void FUN_10745b38c(long *param_1)

{
  ushort uVar1;
  undefined1 in_ZR;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  long *plVar15;
  
  func_0x00010745e804();
  lVar16 = *param_1;
  uVar1 = *(ushort *)(lVar16 + 0x74);
  if ((uVar1 >> 2 & 1) == 0) {
    func_0x00010745eb28();
    FUN_10745b170(unaff_x19 + 0x98,*(undefined8 *)(unaff_x20 + 8));
    lVar17 = *(long *)(lVar16 + 200);
    while (in_ZR = lVar17 == lVar16 + 0xd0, !(bool)in_ZR) {
      uVar18 = *(undefined8 *)(unaff_x20 + 8);
      if ((*(byte *)(lVar17 + 0x100) & 1) == 0) {
        lVar8 = *(long *)(lVar17 + 0x58);
        func_0x00010745e468();
        *(long *)(lVar17 + 0x88) = lVar8;
        lVar9 = *(long *)(lVar17 + 0x60);
        func_0x00010745e468();
        *(long *)(lVar17 + 0x90) = lVar9;
        lVar10 = *(long *)(lVar17 + 0x68);
        func_0x00010745e468();
        *(long *)(lVar17 + 0x98) = lVar10;
        lVar11 = *(long *)(lVar17 + 0x70);
        func_0x00010745e468();
        *(long *)(lVar17 + 0xa0) = lVar11;
        lVar12 = *(long *)(lVar17 + 0x78);
        func_0x00010745e468();
        *(long *)(lVar17 + 0xa8) = lVar12;
        lVar13 = *(long *)(lVar17 + 0x80);
        func_0x00010745e468();
        *(long *)(lVar17 + 0xb0) = lVar13;
        *(undefined8 *)(lVar17 + 0xb8) = 0;
        do {
          func_0x00010745ed2c();
        } while (extraout_x10 != 0);
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x000100651cb4(&uStack_90,lVar9 + lVar8 + lVar10 + lVar11 + lVar12 + lVar13);
        FUN_10744bd40(lVar17 + 0xe8,&uStack_90);
        func_0x000100100fec(&uStack_90);
      }
      plVar14 = (long *)(lVar17 + 0xe8);
      FUN_10744bd74();
      plVar15 = plVar14;
      func_0x00010745eae4();
      iVar2 = (int)plVar15;
      func_0x00010745c2c8();
      iVar3 = iVar2;
      func_0x00010745eae4();
      func_0x00010745c2f0();
      iVar4 = iVar3;
      func_0x00010745eae4();
      func_0x00010745c2c8();
      iVar5 = iVar4;
      func_0x00010745eae4();
      func_0x00010745c2f0();
      iVar6 = iVar5;
      func_0x00010745eae4();
      func_0x00010745c2f0();
      iVar7 = iVar6;
      func_0x00010745eae4();
      func_0x00010745c2f0();
      lVar8 = *plVar14;
      if ((lVar8 != plVar14[1]) &&
         (((iVar2 != 0 || iVar3 != 0) || (iVar4 != 0 || iVar5 != 0)) || (iVar6 != 0 || iVar7 != 0)))
      {
        FUN_1073da4dc(&uStack_90,uVar18,lVar8,plVar14[1] - lVar8,1);
        func_0x000107309708(lVar17 + 0x108,&uStack_90);
        lVar8 = lStack_68;
        lStack_68 = 0;
        if (lVar8 != 0) {
          func_0x00010745e43c();
        }
        iVar7 = *(int *)(lVar17 + 0x144);
        *(int *)(lVar17 + 0x144) = iVar7 + 1;
        *(int *)(lVar17 + 0x128) = iVar7;
      }
      func_0x00010002c7d4();
    }
  }
  else {
    if ((uVar1 >> 5 & 1) != 0) goto joined_r0x00010745b59c;
    func_0x00010745eb28();
  }
  func_0x00010745ebd8();
  uVar1 = *(ushort *)(lVar16 + 0x74);
joined_r0x00010745b59c:
  if ((uVar1 >> 4 & 1) == 0) {
    FUN_10745b23c(unaff_x19 + 0x148,*(undefined8 *)(unaff_x20 + 8),unaff_x19 + 0x18);
    uVar1 = *(ushort *)(lVar16 + 0x74);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    func_0x00010745e568(unaff_x19 + 0x1f8,*(undefined8 *)(unaff_x20 + 8));
    if ((bool)in_ZR) {
      func_0x00010745e5a4();
    }
    func_0x00010745e76c();
    if (!(bool)in_ZR) {
      func_0x00010745e5d4();
      func_0x00010745e5e0();
      func_0x00010745eb98();
      func_0x00010745e6f4();
      func_0x00010745e834();
      func_0x00010745e810();
      func_0x00010745e7d8();
      if (unaff_x19 != 0) {
        func_0x00010745e43c();
      }
      return;
    }
    func_0x00010745daf4();
    func_0x00010745e52c();
    func_0x00010745e704();
    func_0x00010745e620();
    FUN_1073dac18(*(undefined8 *)(unaff_x19 + 8),0xaf);
    FUN_10743fa9c();
    func_0x0001073dac90();
    return;
  }
  return;
}



/* Entry: 10745b648; end: 10745b6f7;  */

void FUN_10745b648(long *param_1)

{
  ushort uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010745e804();
  lVar3 = *param_1;
  uVar1 = *(ushort *)(lVar3 + 0x74);
  if ((uVar1 >> 2 & 1) == 0) {
    func_0x00010745e9a4();
    func_0x00010745ecb8();
    func_0x00010745ed20();
    if (param_1 != (long *)0x0) {
      func_0x00010745e43c();
    }
    func_0x00010745eb38();
    lVar2 = unaff_x19 + 0x48;
    func_0x00010745e810();
    func_0x00010745e7d8();
    if (lVar2 != 0) {
      func_0x00010745e43c();
    }
    func_0x00010745ebd8();
    uVar1 = *(ushort *)(lVar3 + 0x74);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 0xb0) & 1) == 0) {
      func_0x00010745eb48();
      lVar3 = unaff_x19 + 0x80;
      func_0x00010745e810();
      func_0x00010745e7d8();
      if (lVar3 != 0) {
        func_0x00010745e43c();
      }
    }
    else {
      func_0x00010745eaa0();
    }
  }
  return;
}



/* Entry: 10745b6f8; end: 10745b7a7;  */

void FUN_10745b6f8(long *param_1)

{
  ushort uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010745e804();
  lVar3 = *param_1;
  uVar1 = *(ushort *)(lVar3 + 0x74);
  if ((uVar1 >> 2 & 1) == 0) {
    func_0x00010745e9a4();
    func_0x00010745ecb8();
    func_0x00010745ed20();
    if (param_1 != (long *)0x0) {
      func_0x00010745e43c();
    }
    func_0x00010745eb38();
    lVar2 = unaff_x19 + 0x48;
    func_0x00010745e810();
    func_0x00010745e7d8();
    if (lVar2 != 0) {
      func_0x00010745e43c();
    }
    func_0x00010745ebd8();
    uVar1 = *(ushort *)(lVar3 + 0x74);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 0xb0) & 1) == 0) {
      func_0x00010745eb48();
      lVar3 = unaff_x19 + 0x80;
      func_0x00010745e810();
      func_0x00010745e7d8();
      if (lVar3 != 0) {
        func_0x00010745e43c();
      }
    }
    else {
      func_0x00010745eaa0();
    }
  }
  return;
}



/* Entry: 10745b7a8; end: 10745b823;  */

bool FUN_10745b7a8(long param_1)

{
  long lVar1;
  
  if ((((((*(long *)(param_1 + 0x168) == *(long *)(param_1 + 0x170)) &&
         (*(long *)(param_1 + 0x480) == *(long *)(param_1 + 0x488))) &&
        (*(long *)(param_1 + 0x790) == *(long *)(param_1 + 0x798))) &&
       ((lVar1 = *(long *)(param_1 + 0xa38), lVar1 == 0 ||
        (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x38))))) &&
      ((lVar1 = *(long *)(param_1 + 0xa40), lVar1 == 0 ||
       (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x38))))) &&
     ((lVar1 = *(long *)(param_1 + 0xa48), lVar1 == 0 ||
      (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x38))))) {
    lVar1 = *(long *)(param_1 + 0xa50);
    if (lVar1 != 0) {
      return *(long *)(lVar1 + 0x30) != *(long *)(lVar1 + 0x38);
    }
    return false;
  }
  return true;
}



/* Entry: 10745b824; end: 10745b89b;  */

void FUN_10745b824(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_2 + 0x80);
  lVar2 = *(long *)(param_2 + 0x60);
  lVar1 = uVar3 + *(long *)(param_2 + 0x68);
  for (; uVar3 < (ulong)(lVar1 - lVar2); uVar3 = uVar3 + 4) {
    func_0x00010745ecc4();
    func_0x00010745ecc4();
  }
  return;
}



/* Entry: 10745b89c; end: 10745b8a3;  */

bool FUN_10745b89c(long param_1)

{
  param_1 = param_1 + 0x90;
  func_0x0001072a0454(param_1);
  return param_1 != 0;
}



/* Entry: 10745b8a4; end: 10745ba97;  */

void FUN_10745b8a4(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  long **pplVar7;
  ushort extraout_w8;
  undefined8 extraout_x8;
  long *plVar8;
  long lVar9;
  float fVar10;
  long *plStack_210;
  long *plStack_208;
  undefined8 *puStack_1f8;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [4];
  int iStack_154;
  undefined1 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar9 = param_3;
  func_0x00010745e4cc();
  *(undefined4 *)((long)param_1 + 4) = 1;
  ppuVar5 = (undefined8 **)(lVar9 + 200);
  uStack_48 = extraout_x8;
  FUN_1073be628(ppuVar5,*(undefined8 *)(param_4 + 0x50));
  uVar4 = (undefined8 **)(param_3 + 0xd0) == ppuVar5;
  if (!(bool)uVar4) {
    func_0x00010745ec84();
    auStack_158[0] = 0;
    uStack_138 = 0;
    func_0x00010745e7cc(ppuVar5[0xb]);
    func_0x00010745e484(&uStack_78);
    func_0x00010745e7cc(ppuVar5[0xc]);
    func_0x00010745e484(&uStack_70);
    func_0x00010745e7cc(ppuVar5[0xd]);
    func_0x00010745e484(auStack_68);
    func_0x00010745e7cc(ppuVar5[0xe]);
    func_0x00010745e484(auStack_60);
    func_0x00010745e7cc(ppuVar5[0xf]);
    func_0x00010745e484(auStack_58);
    func_0x00010745e7cc(ppuVar5[0x10]);
    func_0x00010745e484(auStack_50);
    puStack_168 = &uStack_78;
    uStack_160 = 6;
    func_0x00010744be14(&uStack_170,&puStack_168);
    func_0x00010745ec64();
    func_0x00010745ec6c();
    func_0x00010745ec84();
    auStack_158[0] = 0;
    uStack_138 = 0;
    func_0x00010745e7cc(ppuVar5[0x29]);
    func_0x00010745e484(&uStack_78);
    func_0x00010745e7cc(ppuVar5[0x2a]);
    func_0x00010745e484(&uStack_70);
    func_0x00010745e7cc(ppuVar5[0x2b]);
    func_0x00010745e484(auStack_68);
    func_0x00010745e7cc(ppuVar5[0x2c]);
    func_0x00010745e484(auStack_60);
    func_0x00010745e7cc(ppuVar5[0x2d]);
    func_0x00010745e484(auStack_58);
    func_0x00010745e7cc(ppuVar5[0x2e]);
    func_0x00010745e484(auStack_50);
    uStack_160 = 6;
    puStack_168 = &uStack_78;
    func_0x00010744be14(&uStack_178,&puStack_168);
    func_0x00010745ec64();
    func_0x00010745ec6c();
    uStack_78 = uStack_170;
    uStack_70 = uStack_178;
    uStack_128 = 2;
    ppuVar5 = &puStack_130;
    puStack_130 = &uStack_78;
    func_0x00010744be14(auStack_158);
    if (iStack_154 == 0) {
      *(undefined1 *)(param_3 + 0x1c) = 0;
      *(ushort *)(param_3 + 0x74) = *(ushort *)(param_3 + 0x74) & 0xffeb;
      *param_1 = 0;
    }
  }
  func_0x00010745e428(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010745e608();
    pplVar7 = &plStack_210;
    if ((*(ushort *)((long)ppuVar5 + 0x74) >> 1 & 1) != 0) {
      fVar10 = (float)param_2;
      bVar3 = fVar10 <= *(float *)(ppuVar5 + 0xe);
      bVar2 = *(float *)(ppuVar5 + 0xe) == fVar10;
      if (!bVar2) {
        *(float *)(ppuVar5 + 0xe) = fVar10;
        func_0x00010745e848();
        if (((!bVar3 || bVar2) && (func_0x00010745e848(), !bVar3 || bVar2)) &&
           (func_0x00010745e848(), !bVar3 || bVar2)) {
          *(ushort *)((long)ppuVar5 + 0x74) = extraout_w8 & 0xffdf;
          *(undefined1 *)((long)ppuVar5 + 0x1c) = 0;
          ppuVar5[0x2b] = ppuVar5[0x2a];
          ppuVar5[0x8e] = ppuVar5[0x8d];
          ppuVar5[0xf0] = ppuVar5[0xef];
          puVar6 = (undefined8 *)0x18;
          __Znwm();
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puStack_1f8 = puVar6;
          FUN_1073bf8d4();
          FUN_10745bcec(&plStack_210,param_2,ppuVar5);
          for (plVar8 = plStack_210; plVar8 != plStack_208; plVar8 = plVar8 + 1) {
            lVar9 = *plVar8;
            func_0x00010737fce0(puVar6,lVar9 + 0x580);
            if (*(char *)(lVar9 + 0x5f0) == '\x01') {
              func_0x00010745ed4c(*(undefined8 *)(lVar9 + 0x5e8));
              func_0x00010745eab8();
            }
            if ((*(char *)(lVar9 + 0x600) == '\x01') && ((*(byte *)(lVar9 + 0x654) & 1) == 0)) {
              func_0x00010745ed4c(*(undefined8 *)(lVar9 + 0x5f8));
              func_0x00010745eab8();
            }
            if ((*(char *)(lVar9 + 0x610) == '\x01') && ((*(byte *)(lVar9 + 0x654) & 1) == 0)) {
              func_0x00010745ed4c(*(undefined8 *)(lVar9 + 0x608));
              func_0x00010745eab8();
            }
            if (*(char *)(lVar9 + 0x620) == '\x01') {
              func_0x00010745ed4c(*(undefined8 *)(lVar9 + 0x618));
              func_0x00010745eab8();
            }
            lVar1 = 0x418;
            if ((*(byte *)(lVar9 + 0x30) & 4) != 0) {
              lVar1 = 0x728;
            }
            if (*(char *)(lVar9 + 0x630) == '\x01') {
              FUN_10745b824((long)ppuVar5 + lVar1 + 0x48,
                            *(long *)((long)ppuVar5 + lVar1 + 0x80) +
                            *(long *)(lVar9 + 0x628) * 0xa8);
            }
            if (*(char *)(lVar9 + 0x640) == '\x01') {
              FUN_10745b824((long)ppuVar5 + lVar1 + 0x48,
                            *(long *)((long)ppuVar5 + lVar1 + 0x80) +
                            *(long *)(lVar9 + 0x638) * 0xa8);
            }
          }
          func_0x00010745c408();
          func_0x00010745e818();
          *pplVar7 = (long *)&PTR_FUN_1109b22e0;
          pplVar7[1] = (long *)0x0;
          pplVar7[2] = (long *)0x0;
          pplVar7[3] = puVar6;
          puStack_1f8 = (undefined8 *)0x0;
          plStack_208 = ppuVar5[0x152];
          plStack_210 = ppuVar5[0x151];
          ppuVar5[0x151] = puVar6;
          ppuVar5[0x152] = pplVar7;
          FUN_1073c4394(&plStack_210);
          FUN_10745db5c(&puStack_1f8);
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 10745ba98; end: 10745bceb;  */

void FUN_10745ba98(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  long **pplVar5;
  ushort extraout_w8;
  long *plVar6;
  long lVar7;
  float fVar8;
  long *plStack_90;
  long *plStack_88;
  undefined8 *puStack_78;
  
  pplVar5 = &plStack_90;
  if ((*(ushort *)(param_2 + 0x74) >> 1 & 1) != 0) {
    fVar8 = (float)param_1;
    bVar3 = fVar8 <= *(float *)(param_2 + 0x70);
    bVar2 = *(float *)(param_2 + 0x70) == fVar8;
    if (!bVar2) {
      *(float *)(param_2 + 0x70) = fVar8;
      func_0x00010745e848();
      if (((!bVar3 || bVar2) && (func_0x00010745e848(), !bVar3 || bVar2)) &&
         (func_0x00010745e848(), !bVar3 || bVar2)) {
        *(ushort *)(param_2 + 0x74) = extraout_w8 & 0xffdf;
        *(undefined1 *)(param_2 + 0x1c) = 0;
        *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_2 + 0x150);
        *(undefined8 *)(param_2 + 0x470) = *(undefined8 *)(param_2 + 0x468);
        *(undefined8 *)(param_2 + 0x780) = *(undefined8 *)(param_2 + 0x778);
        puVar4 = (undefined8 *)0x18;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puStack_78 = puVar4;
        FUN_1073bf8d4();
        FUN_10745bcec(&plStack_90,param_1,param_2);
        for (plVar6 = plStack_90; plVar6 != plStack_88; plVar6 = plVar6 + 1) {
          lVar7 = *plVar6;
          func_0x00010737fce0(puVar4,lVar7 + 0x580);
          if (*(char *)(lVar7 + 0x5f0) == '\x01') {
            func_0x00010745ed4c(*(undefined8 *)(lVar7 + 0x5e8));
            func_0x00010745eab8();
          }
          if ((*(char *)(lVar7 + 0x600) == '\x01') && ((*(byte *)(lVar7 + 0x654) & 1) == 0)) {
            func_0x00010745ed4c(*(undefined8 *)(lVar7 + 0x5f8));
            func_0x00010745eab8();
          }
          if ((*(char *)(lVar7 + 0x610) == '\x01') && ((*(byte *)(lVar7 + 0x654) & 1) == 0)) {
            func_0x00010745ed4c(*(undefined8 *)(lVar7 + 0x608));
            func_0x00010745eab8();
          }
          if (*(char *)(lVar7 + 0x620) == '\x01') {
            func_0x00010745ed4c(*(undefined8 *)(lVar7 + 0x618));
            func_0x00010745eab8();
          }
          lVar1 = 0x418;
          if ((*(byte *)(lVar7 + 0x30) & 4) != 0) {
            lVar1 = 0x728;
          }
          lVar1 = param_2 + lVar1;
          if (*(char *)(lVar7 + 0x630) == '\x01') {
            FUN_10745b824(lVar1 + 0x48,*(long *)(lVar1 + 0x80) + *(long *)(lVar7 + 0x628) * 0xa8);
          }
          if (*(char *)(lVar7 + 0x640) == '\x01') {
            FUN_10745b824(lVar1 + 0x48,*(long *)(lVar1 + 0x80) + *(long *)(lVar7 + 0x638) * 0xa8);
          }
        }
        func_0x00010745c408();
        func_0x00010745e818();
        *pplVar5 = (long *)&PTR_FUN_1109b22e0;
        pplVar5[1] = (long *)0x0;
        pplVar5[2] = (long *)0x0;
        pplVar5[3] = puVar4;
        puStack_78 = (undefined8 *)0x0;
        plStack_88 = *(long **)(param_2 + 0xa90);
        plStack_90 = *(long **)(param_2 + 0xa88);
        *(undefined8 **)(param_2 + 0xa88) = puVar4;
        *(long ***)(param_2 + 0xa90) = pplVar5;
        FUN_1073c4394(&plStack_90);
        FUN_10745db5c(&puStack_78);
      }
    }
  }
  return;
}



/* Entry: 10745bcec; end: 10745bd5f;  */

void FUN_10745bcec(long *param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_10745c440(param_1,*(undefined8 *)(param_4 + 0x78),*(undefined8 *)(param_4 + 0x80));
  uStack_38 = param_2;
  ___sincosf_stret();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != lVar2) {
    uStack_34 = param_3;
    FUN_10745c5cc(lVar1,lVar2,&uStack_38,LZCOUNT(lVar2 - lVar1 >> 3) << 1 ^ 0x7e,1);
  }
  return;
}



/* Entry: 10745bd60; end: 10745bd97;  */

undefined8 * FUN_10745bd60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10745c474();
  return param_1;
}



/* Entry: 10745bd98; end: 10745be13;  */

uint FUN_10745bd98(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xa81) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + 0xa80);
  }
  else {
    uVar1 = (int)*(undefined8 *)(param_1 + 0x28) + 0x4e8;
    func_0x00010745bddc();
    *(ushort *)(param_1 + 0xa80) = (ushort)uVar1 | 0x100;
  }
  return uVar1 & 1;
}


