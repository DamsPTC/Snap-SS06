/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b92f000; end: 10b92f173;  */

void FUN_10b92f000(long param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long lVar3;
  
  func_0x00010b92f958();
  func_0x00010b92fc4c();
  func_0x00010b92f970(param_1 + unaff_x25);
  lVar3 = 0;
  func_0x00010b92f940();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b92f9a4(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b92f174(unaff_x21);
      func_0x00010b92f928();
      FUN_10b92efd8();
      func_0x00010b92f774();
      FUN_10b92f18c(extraout_x8_00 + lVar2 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92f174; end: 10b92f18b;  */

void FUN_10b92f174(void)

{
  func_0x00010b92fa08();
  return;
}



/* Entry: 10b92f18c; end: 10b92f1c7;  */

undefined8 FUN_10b92f18c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b92fc38(param_2);
  func_0x00010b8bb39c();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b92f1c8; end: 10b92f1f3;  */

undefined1  [16] FUN_10b92f1c8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010b92f2a0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b92f1f4; end: 10b92f217;  */

long FUN_10b92f1f4(long *param_1)

{
  long lVar1;
  
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x10), lVar1 != 0)) {
    return *(long *)(lVar1 + 8) + 1;
  }
  return 0;
}



/* Entry: 10b92f218; end: 10b92f26b;  */

undefined1  [16] FUN_10b92f218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b92f26c(&uStack_40);
  FUN_10b92f2f0(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b92f26c; end: 10b92f2ef;  */

long * FUN_10b92f26c(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  func_0x00010b92f2a0();
  return param_1;
}



/* Entry: 10b92f2f0; end: 10b92f32f;  */

void FUN_10b92f2f0(long *param_1,ulong *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010b92def8(param_3);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b92f330; end: 10b92f3d3;  */

void FUN_10b92f330(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b92f3d4; end: 10b92f43b;  */

void FUN_10b92f3d4(long param_1,uint param_2)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 extraout_x9;
  undefined8 uVar2;
  int extraout_w12;
  long *unaff_x20;
  byte unaff_w21;
  long *unaff_x22;
  
  func_0x00010b92fb04();
  FUN_10b92f43c();
  func_0x00010b92fa48();
  func_0x00010b92f458();
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x20[1] + param_1 * 0x10);
    uVar2 = 0;
    if (*unaff_x22 != 0) {
      do {
        func_0x00010b92fa74();
        puVar1 = extraout_x8;
        uVar2 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    *puVar1 = uVar2;
    puVar1[1] = 0;
    *(byte *)(*unaff_x20 + param_1) = unaff_w21 & 0x7f;
    func_0x00010b92f7d0();
    func_0x00010b92f994();
  }
  func_0x00010b92fbfc();
  return;
}



/* Entry: 10b92f43c; end: 10b92f503;  */

void FUN_10b92f43c(void)

{
  func_0x00010b92faec();
  func_0x00010b92f4ec();
  return;
}



/* Entry: 10b92f504; end: 10b92f573;  */

void FUN_10b92f504(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b92f858();
  FUN_10b92f574();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b92f530;
  func_0x00010b92fc20();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b92f530;
  }
  if (unaff_x22 == 0) {
    func_0x00010b92fc2c();
LAB_10b92f554:
    FUN_10b92f59c();
  }
  else {
    func_0x00010b92facc();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b92fabc();
      goto LAB_10b92f554;
    }
    func_0x00010b92f62c();
  }
  func_0x00010b92f9d0();
  FUN_10b92f574();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b92f530:
  func_0x00010b92f7fc(lVar1);
  return;
}



/* Entry: 10b92f574; end: 10b92f59b;  */

ulong FUN_10b92f574(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b92fc9c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b92f59c; end: 10b92f70f;  */

void FUN_10b92f59c(long param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long lVar3;
  
  func_0x00010b92f958();
  func_0x00010b92fc4c();
  func_0x00010b92f970(param_1 + unaff_x25);
  lVar3 = 0;
  func_0x00010b92f940();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b92f9a4(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b92f710(unaff_x21);
      func_0x00010b92f928();
      FUN_10b92f574();
      func_0x00010b92f774();
      func_0x00010b92f728(extraout_x8_00 + lVar2 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92f710; end: 10b92f727;  */

void FUN_10b92f710(void)

{
  func_0x00010b92fa08();
  return;
}



/* Entry: 10b92f728; end: 10b92fd73;  */

undefined8 FUN_10b92f728(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b92fc38(param_2);
  FUN_10b8fc3d0();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b92fd74; end: 10b92fe73;  */

undefined8 * FUN_10b92fd74(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d77048;
  func_0x000104c6257c(param_1 + 3);
  return param_1;
}



/* Entry: 10b92fe74; end: 10b92ff9f;  */

undefined8 *
FUN_10b92fe74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  func_0x00010b930b30();
  uStack_58 = extraout_x8;
  func_0x000107c31088(auStack_78,&UNK_10f7cdf4f);
  func_0x000107c31088(auStack_70,&UNK_10f7cdf54);
  func_0x000107c31088(auStack_68,&UNK_10f7cdf5a);
  func_0x000107c31088(auStack_60,&UNK_10f7cdf5f);
  func_0x000104bfe058(&uStack_90,auStack_78,4);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76a50;
  param_1[1] = 0;
  param_1[4] = uStack_88;
  param_1[3] = uStack_90;
  param_1[5] = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x000104bfe1e0(&uStack_90);
  lVar2 = 0x18;
  do {
    func_0x000107c278f4(auStack_78 + lVar2);
    lVar2 = lVar2 + -8;
    uVar1 = lVar2 == -8;
  } while (!(bool)uVar1);
  *param_1 = &PTR_FUN_110d770b0;
  FUN_10b9305e0(param_1 + 6,param_2,param_3,param_4,param_5);
  func_0x00010b930b1c(uStack_58);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_2 = &PTR_FUN_110d770b0;
  FUN_10b930864(param_2 + 6);
  *param_2 = &PTR_FUN_110d76a50;
  func_0x000104bfe1e0(param_2 + 3);
  func_0x000107c278e8(param_2 + 1);
  return param_2;
}



/* Entry: 10b92ffa0; end: 10b92ffcf;  */

undefined8 * FUN_10b92ffa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d770b0;
  FUN_10b930864(param_1 + 6);
  *param_1 = &PTR_FUN_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b92ffd0; end: 10b92ffd3;  */

undefined8 * FUN_10b92ffd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d770b0;
  FUN_10b930864(param_1 + 6);
  *param_1 = &PTR_FUN_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b92ffd4; end: 10b92ffe7;  */

void FUN_10b92ffd4(void)

{
  FUN_10b92ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92ffe8; end: 10b92ffef;  */

undefined8 FUN_10b92ffe8(void)

{
  return 0;
}



/* Entry: 10b92fff0; end: 10b93002f;  */

void FUN_10b92fff0(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b9a8e18(auStack_30);
  func_0x000104bf351c(param_1,auStack_30);
  FUN_10b9a8d98(auStack_30);
  return;
}



/* Entry: 10b930030; end: 10b93046b;  */

long * FUN_10b930030(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long **pplVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *in_x5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  uVar9 = 0;
  func_0x00010b930b30();
  uStack_68 = extraout_x8;
  FUN_10b9a9358(&plStack_e0,param_3);
  plStack_110 = (long *)&DAT_10f300a96;
  puStack_108 = (undefined8 *)0x3;
  pplVar4 = &plStack_e0;
  func_0x00010b9a5f80(pplVar4);
  if ((uVar9 & 1) == 0) {
    pplVar4 = &plStack_e0;
    FUN_10b9a60f4(pplVar4,&UNK_10f47f4d5);
    if ((int)pplVar4 == 0) {
      if (plStack_e0 != (long *)0x0) {
        plVar5 = plStack_e0 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *(int *)plVar5 = (int)*plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_e8 = plStack_e0;
    }
    else {
      pplVar4 = &plStack_e0;
      uVar9 = 0x3b;
      func_0x00010b9a5ee8(pplVar4);
      lStack_a8 = 0;
      if ((uVar9 & 1) != 0) {
        FUN_10b9a6488(&plStack_110,&plStack_e0,0xb,pplVar4);
        func_0x000107c31060(&lStack_a8,&plStack_110);
        func_0x000107c278f8(plStack_110);
      }
      plVar5 = (long *)&UNK_10f7d0ef0;
      if (plStack_e0 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)((long)plStack_e0 + 0xc);
        plVar5 = plStack_e0 + 3;
      }
      func_0x00010b949608(&plStack_c0,plVar5,uVar8);
      func_0x000107c31084();
      FUN_10b9305a8(&plStack_110,&plStack_c0,&lStack_a8);
      func_0x000107c2793c(&UNK_10f7cdf64);
      func_0x000107c3173c(&lStack_d8);
      func_0x000107c31080(&plStack_e8,plVar5,&lStack_d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_c0);
      func_0x000107c278f8(lStack_a8);
    }
  }
  else {
    FUN_10b9a6470(&plStack_e8,&plStack_e0,(long)pplVar4 + 3);
  }
  puVar6 = (undefined8 *)0x40;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110d771c8;
  plVar5 = puVar6 + 3;
  *plVar5 = (long)&PTR_FUN_110d7eb18;
  plVar11 = puVar6 + 4;
  *plVar11 = 0;
  puVar6[5] = 0;
  puVar6[6] = &PTR_FUN_110d7eb50;
  *(undefined1 *)(puVar6 + 7) = 0;
  plStack_110 = plVar5;
  puStack_108 = puVar6;
  do {
    func_0x00010b930b0c();
  } while (extraout_w10 != 0);
  func_0x000107c278e4(plVar11,&plStack_110);
  func_0x000107c284e8(&plStack_110);
  plVar10 = plStack_e0;
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (plStack_e0 != (long *)0x0) {
    plVar7 = plStack_e0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_110 = plStack_e0;
  lVar12 = *in_x5;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
    do {
      func_0x00010b930b0c();
    } while (extraout_w10_00 != 0);
  }
  puStack_108 = (undefined8 *)lVar12;
  if (*(long *)(param_2 + 8) == 0) {
    lVar14 = *(long *)(param_2 + 0x10);
    lStack_a8 = param_2;
    lStack_a0 = lVar14;
    lStack_100 = param_2;
    if (lVar14 == 0) {
      lStack_f8 = 0;
      goto LAB_10b9302e0;
    }
    do {
      func_0x00010b930b0c();
      lStack_f8 = lVar14;
    } while (extraout_w10_02 != 0);
  }
  else {
    func_0x000107c278f0(&lStack_d8);
    if (lStack_d8 == 0) {
      param_2 = 0;
      lStack_a8 = 0;
      lStack_a0 = 0;
      lStack_f8 = 0;
    }
    else {
      lStack_a0 = lStack_d0;
      lStack_f8 = lStack_d0;
      lStack_a8 = param_2;
      if (lStack_d0 != 0) {
        do {
          func_0x00010b930b0c();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000107c284e8(&lStack_d8);
    lStack_100 = param_2;
    if (lStack_f8 == 0) goto LAB_10b9302e0;
  }
  do {
    func_0x00010b930b0c();
  } while (extraout_w10_03 != 0);
LAB_10b9302e0:
  FUN_10b9308c8(&lStack_a8);
  if (puVar6[5] != 0) {
    do {
      func_0x00010b930b0c();
    } while (extraout_w10_04 != 0);
  }
  uStack_98 = 0x10b9308f0;
  ppuStack_90 = &PTR_FUN_110d77208;
  plVar7 = (long *)0x28;
  __Znwm();
  *plVar7 = (long)plVar10;
  plStack_110 = (long *)0x0;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
    do {
      func_0x00010b930b0c();
    } while (extraout_w10_05 != 0);
  }
  plVar7[1] = lVar12;
  plVar7[3] = lStack_f8;
  plVar7[2] = lStack_100;
  lStack_100 = 0;
  lStack_f8 = 0;
  plVar7[4] = (long)plVar5;
  uStack_f0 = 0;
  plStack_88 = plVar7;
  FUN_10b9357e8(uVar13,&plStack_e8,&plStack_e0,&PTR_PTR_1133fad80,&plStack_c0,&uStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  FUN_10b93046c(&plStack_110);
  if (plStack_c0 != (long *)0x0) {
    (**(code **)(*plStack_c0 + 0x18))();
  }
  plVar10 = plVar5;
  if (*plVar11 == 0) {
    puVar6 = (undefined8 *)puVar6[5];
    if (puVar6 != (undefined8 *)0x0) {
      do {
        func_0x00010b930b0c();
      } while (extraout_w10_07 != 0);
    }
  }
  else {
    func_0x000107c278f0(&plStack_110,plVar11);
    puVar6 = puStack_108;
    if (plStack_110 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
      plVar10 = (long *)0x0;
    }
    else if (puStack_108 != (undefined8 *)0x0) {
      do {
        func_0x00010b930b0c();
      } while (extraout_w10_06 != 0);
    }
    func_0x000107c284e8(&plStack_110);
  }
  uVar3 = plVar10 == (long *)0x0;
  plVar11 = (long *)0x0;
  if (!(bool)uVar3) {
    plVar11 = plVar10 + 3;
  }
  *param_1 = (long)plVar11;
  param_1[1] = (long)puVar6;
  func_0x00010b9308bc(plVar5);
  func_0x000107c278f8(plStack_e8);
  func_0x000107c278f8();
  func_0x00010b930b1c(uStack_68);
  if ((bool)uVar3) {
    return plStack_e0;
  }
  plVar5 = plStack_e0;
  ___stack_chk_fail();
  func_0x00010b9308bc(plVar5[4]);
  if (plVar5[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x0001080cb94c(plVar5 + 1);
  func_0x00010007e5d0(plVar5);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10b93046c; end: 10b9304a7;  */

undefined8 FUN_10b93046c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b9308bc(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x0001080cb94c(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b9304a8; end: 10b9304bb;  */

void FUN_10b9304a8(void)

{
  return;
}



/* Entry: 10b9304bc; end: 10b930597;  */

undefined1  [16]
FUN_10b9304bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long alStack_50 [2];
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b930b30();
  uStack_28 = extraout_x8;
  func_0x0001080cbb40(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110a1e598;
  puStack_30[1] = 0;
  FUN_10b92fd74(puStack_30 + 3,param_4);
  puVar1 = puStack_30;
  puStack_30 = (undefined8 *)0x0;
  func_0x0001080cbb30(alStack_50,puVar1 + 3);
  func_0x0001080cbc44(auStack_40);
  if ((alStack_50[0] != 0) && (*(long *)(alStack_50[0] + 0x10) != 0)) {
    do {
      func_0x00010b930b0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b9a8f78(auStack_40,alStack_50);
  puVar2 = auStack_40;
  func_0x000104bf351c(param_1,puVar2);
  FUN_10b9a8d98(auStack_40);
  func_0x000104bddf04(alStack_50[0]);
  func_0x0001080cbc54(alStack_50[0]);
  func_0x00010b930b1c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    auVar4._8_8_ = 0xb;
    auVar4._0_8_ = &UNK_10f7cdf6a;
    return auVar4;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = alStack_50[0];
  return auVar3;
}



/* Entry: 10b930598; end: 10b9305a7;  */

undefined1  [16] FUN_10b930598(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f7cdf6a;
  return auVar1;
}



/* Entry: 10b9305a8; end: 10b9305df;  */

undefined8 * FUN_10b9305a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = &UNK_1003ab990;
  return param_1;
}



/* Entry: 10b9305e0; end: 10b93060f;  */

void FUN_10b9305e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10b930610(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10b930610; end: 10b9306ab;  */

void FUN_10b930610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x00010b930b30();
  uStack_48 = extraout_x8;
  FUN_10b9306c8(auStack_60,1);
  FUN_10b93070c(lStack_50,param_3,param_4,param_5,param_6);
  lVar2 = lStack_50;
  lStack_50 = 0;
  FUN_10b9306ac(param_1,lVar2 + 0x18);
  FUN_10b930854();
  func_0x00010b930b1c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_10b9306ac;
    lStack_78 = extraout_x8_00[1];
    puStack_80 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x00010b930b48();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    FUN_10b9307d8(puVar3,&puStack_80);
    FUN_10b930864(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10b9306ac; end: 10b9306c7;  */

void FUN_10b9306ac(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b930b48();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b9307d8(lVar1,&lStack_20);
    FUN_10b930864(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b9306c8; end: 10b9306ef;  */

long FUN_10b9306c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b9306f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b9306f0; end: 10b93070b;  */

undefined8 * FUN_10b9306f0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x38 == 0) {
    puVar1 = (undefined8 *)(param_2 << 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77178;
  param_1[1] = 0;
  FUN_10b934cf4(param_1 + 3);
  return param_1;
}



/* Entry: 10b93070c; end: 10b93073f;  */

undefined8 * FUN_10b93070c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77178;
  param_1[1] = 0;
  FUN_10b934cf4(param_1 + 3);
  return param_1;
}



/* Entry: 10b930740; end: 10b930743;  */

void FUN_10b930740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77178;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b930744; end: 10b930757;  */

void FUN_10b930744(void)

{
  func_0x00010b930760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b930758; end: 10b930773;  */

void FUN_10b930758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b930b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b930774; end: 10b9307d7;  */

void FUN_10b930774(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b930b48();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b9307d8(param_2,&uStack_20);
    FUN_10b930864(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b9307d8; end: 10b930853;  */

undefined8 * FUN_10b9307d8(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b930b0c();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b93082c(&uStack_30);
  return param_1;
}



/* Entry: 10b930854; end: 10b930863;  */

void FUN_10b930854(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b930864; end: 10b93088b;  */

long FUN_10b930864(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b93088c; end: 10b93088f;  */

void FUN_10b93088c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d771c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b930890; end: 10b9308a3;  */

void FUN_10b930890(void)

{
  func_0x00010b9308ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9308a4; end: 10b9308c7;  */

void FUN_10b9308a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b930b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9308c8; end: 10b930a1f;  */

long FUN_10b9308c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b930a20; end: 10b930a3f;  */

void FUN_10b930a20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b93046c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b930a40; end: 10b930a57;  */

void FUN_10b930a40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b930a58; end: 10b930b0b;  */

void FUN_10b930a58(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77208;
  plVar4 = (long *)0x28;
  __Znwm();
  lVar5 = *plVar6;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *plVar4 = lVar5;
  lVar5 = plVar6[1];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x00010b930b48();
      lVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  plVar4[1] = lVar5;
  lVar5 = plVar6[3];
  lVar7 = plVar6[2];
  plVar4[3] = plVar6[3];
  plVar4[2] = lVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010b930b0c();
    } while (extraout_w10 != 0);
  }
  lVar5 = plVar6[4];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x00010b930b48();
      lVar5 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  plVar4[4] = lVar5;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10b930b0c; end: 10b930b6f;  */

void FUN_10b930b0c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b930b70; end: 10b930e27;  */

void FUN_10b930b70(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110d77238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d772d0;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = lVar4;
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = lVar4;
  return;
}



/* Entry: 10b930e28; end: 10b930ee7;  */

undefined8 * FUN_10b930e28(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_30;
  ulong uStack_28;
  
  *param_1 = &PTR_FUN_110d77338;
  param_1[1] = 1;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puStack_30 = &UNK_10f7d0ef0;
    uStack_28 = 0;
  }
  else {
    puStack_30 = (undefined *)(lVar1 + 0x18);
    uStack_28 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  FUN_10b9a2108(param_1 + 2,&puStack_30);
  func_0x000108a1e998(param_1 + 5,param_1 + 2);
  FUN_10b9a229c(param_1 + 2);
  FUN_10b9a229c(param_1 + 5);
  return param_1;
}



/* Entry: 10b930ee8; end: 10b930eeb;  */

undefined8 * FUN_10b930ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77338;
  func_0x0001080c9d44(param_1 + 5);
  func_0x0001080c9d44(param_1 + 2);
  return param_1;
}



/* Entry: 10b930eec; end: 10b930eff;  */

void FUN_10b930eec(void)

{
  func_0x00010b930ea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b930f00; end: 10b930f63;  */

undefined8 * FUN_10b930f00(undefined8 *param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined8 *puVar4;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a0 [4];
  long lStack_48;
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  func_0x00010b931670();
  func_0x00010b931620();
  uStack_28 = extraout_x8;
  func_0x00010b931664();
  uVar2 = lStack_48 == 1;
  if ((bool)uVar2) {
    param_1 = auStack_40;
    FUN_10b99e458();
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  func_0x00010b93165c();
  func_0x00010b93160c(uStack_28);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  uVar3 = param_3;
  FUN_10b9a2274();
  if ((uVar3 & 1) == 0) {
    FUN_10b9a2408(&uStack_c0,param_2 + 0x10,param_3);
  }
  else {
    func_0x000108a1e998(&uStack_c0,param_3);
  }
  FUN_10b9a229c(&uStack_c0);
  lVar1 = 0x28;
  if (param_4 == 0) {
    lVar1 = 0x10;
  }
  puVar4 = &uStack_c0;
  FUN_10b9a2734(puVar4,param_2 + lVar1);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000107c31084();
    FUN_10b9a2460(auStack_f8,&uStack_c0);
    FUN_10b9a2460(auStack_110,param_2 + lVar1);
    func_0x00010598789c(auStack_a0,auStack_f8,auStack_110);
    func_0x000107c2793c(&UNK_10f7cdfb3);
    func_0x000107c3173c(auStack_e0);
    func_0x000107c31080(&uStack_c8,puVar4,auStack_e0);
    FUN_10b99f560(auStack_a0,&uStack_c8);
    *param_1 = 2;
    param_1[1] = auStack_a0[0];
    auStack_a0[0] = 0;
    func_0x00010b931648();
    func_0x000107c278f8(uStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  }
  else {
    *param_1 = 1;
    param_1[2] = uStack_b8;
    param_1[1] = uStack_c0;
    param_1[3] = uStack_b0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  puVar4 = &uStack_c0;
  func_0x0001080c9d44(puVar4);
  return puVar4;
}



/* Entry: 10b930f64; end: 10b9310b7;  */

void FUN_10b930f64(undefined8 *param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_50 [4];
  
  uVar2 = param_3;
  FUN_10b9a2274();
  if ((uVar2 & 1) == 0) {
    FUN_10b9a2408(&uStack_70,param_2 + 0x10,param_3);
  }
  else {
    func_0x000108a1e998(&uStack_70,param_3);
  }
  FUN_10b9a229c(&uStack_70);
  lVar1 = 0x28;
  if (param_4 == 0) {
    lVar1 = 0x10;
  }
  puVar3 = &uStack_70;
  FUN_10b9a2734(puVar3,param_2 + lVar1);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000107c31084();
    FUN_10b9a2460(auStack_a8,&uStack_70);
    FUN_10b9a2460(auStack_c0,param_2 + lVar1);
    func_0x00010598789c(auStack_50,auStack_a8,auStack_c0);
    func_0x000107c2793c(&UNK_10f7cdfb3);
    func_0x000107c3173c(auStack_90);
    func_0x000107c31080(&uStack_78,puVar3,auStack_90);
    FUN_10b99f560(auStack_50,&uStack_78);
    *param_1 = 2;
    param_1[1] = auStack_50[0];
    auStack_50[0] = 0;
    func_0x00010b931648();
    func_0x000107c278f8(uStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  }
  else {
    *param_1 = 1;
    param_1[2] = uStack_68;
    param_1[1] = uStack_70;
    param_1[3] = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  func_0x0001080c9d44(&uStack_70);
  return;
}



/* Entry: 10b9310b8; end: 10b93135f;  */

void FUN_10b9310b8(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  long lStack_78;
  long *plStack_70;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  func_0x00010b931670();
  func_0x00010b931620();
  uStack_28 = extraout_x8_00;
  func_0x00010b931664();
  uVar1 = lStack_48 == 1;
  if ((bool)uVar1) {
    param_1 = alStack_40;
    FUN_10b99e488(extraout_x8);
  }
  else {
    func_0x00010b93167c();
  }
  func_0x00010b93165c();
  func_0x00010b93160c(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x10b931124;
  plStack_70 = &lStack_48;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10b9a8bb4(auStack_88);
  puStack_a0 = &DAT_10f2df167;
  uStack_98 = 4;
  puVar2 = auStack_88;
  FUN_10b9a5ed0(puVar2,&puStack_a0);
  if ((int)puVar2 == 0) {
    if (lStack_78 == 0) {
      puStack_b0 = &UNK_10f7d0ef0;
      uStack_a8 = 0;
    }
    else {
      puStack_b0 = (undefined *)(lStack_78 + 0x18);
      uStack_a8 = (ulong)*(uint *)(lStack_78 + 0xc);
    }
    FUN_10b9a2108(&puStack_a0,&puStack_b0);
    (**(code **)(*param_1 + 0x28))(extraout_x8_01,param_1,&puStack_a0);
    func_0x0001080c9d44(&puStack_a0);
  }
  else {
    FUN_10b99f5f8(&puStack_a0,&UNK_10f7cdf76);
    func_0x00010b93167c();
    func_0x00010b931648();
  }
  FUN_10b9a8cb4(auStack_88);
  return;
}



/* Entry: 10b931360; end: 10b9314b3;  */

undefined8 ****
FUN_10b931360(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar19;
  long *plVar20;
  undefined1 auStack_260 [24];
  ulong uStack_248;
  ulong uStack_240;
  undefined8 ***apppuStack_238 [2];
  char cStack_221;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 *puStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 **ppuStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 **ppuStack_118;
  undefined8 **appuStack_110 [3];
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x00010b931620(param_2,param_3,param_3);
  puVar18 = param_2;
  uStack_48 = extraout_x8;
  func_0x00010b931630(&ppuStack_68);
  uVar9 = (undefined8 ***)ppuStack_68 == (undefined8 ***)0x2;
  if ((bool)uVar9) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    func_0x000108a1e998(&uStack_b0,auStack_60);
    uVar9 = param_4 == 0;
    puVar18 = param_2 + 5;
    if ((bool)uVar9) {
      puVar18 = &uStack_b0;
    }
    func_0x000108a1e998(&uStack_d0);
    puVar19 = (undefined8 *)0x40;
    __Znwm();
    uVar8 = uStack_a0;
    uVar7 = uStack_a8;
    uVar6 = uStack_b0;
    uVar5 = uStack_c0;
    uVar4 = uStack_c8;
    uVar3 = uStack_d0;
    plVar20 = puVar19 + 1;
    *plVar20 = 1;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    *puVar19 = &PTR_FUN_110d77338;
    puVar19[3] = uVar7;
    puVar19[2] = uVar6;
    uStack_d0 = 0;
    puVar19[4] = uVar8;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar19[6] = uVar4;
    puVar19[5] = uVar3;
    puVar19[7] = uVar5;
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_10b9a229c();
    FUN_10b9a229c(puVar19 + 5);
    func_0x0001080c9d44(&uStack_98);
    func_0x0001080c9d44(&uStack_80);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar2) {
        *plVar20 = *plVar20 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001080d8574(puVar19);
    func_0x0001080c9d44(&uStack_d0);
    func_0x0001080c9d44(&uStack_b0);
  }
  *param_1 = puVar19;
  ppppuVar10 = (undefined8 ****)&ppuStack_68;
  func_0x0001080e6ca4(ppppuVar10);
  func_0x00010b93160c(uStack_48);
  if ((bool)uVar9) {
    return ppppuVar10;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10b9314b4;
  puStack_f0 = puVar19;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010b931670();
  func_0x00010b931620();
  ppppuVar10 = (undefined8 ****)&ppuStack_118;
  uStack_f8 = extraout_x8_00;
  func_0x00010b931630();
  uVar9 = (undefined8 ***)ppuStack_118 == (undefined8 ***)0x1;
  ppppuVar13 = (undefined8 ****)0x0;
  if ((bool)uVar9) {
    ppppuVar10 = (undefined8 ****)appuStack_110;
    FUN_10b99e800();
    ppppuVar13 = ppppuVar10;
  }
  func_0x00010b93165c();
  func_0x00010b93160c(uStack_f8);
  if ((bool)uVar9) {
    return ppppuVar13;
  }
  ___stack_chk_fail();
  puVar11 = auStack_1d0;
  puVar12 = auStack_1d0;
  func_0x00010b931620();
  uStack_168 = extraout_x8_01;
  func_0x00010b931630();
  func_0x000107c31084();
  uVar9 = (undefined8 ***)ppuStack_188 == (undefined8 ***)0x1;
  if ((bool)uVar9) {
    FUN_10b9a2460(auStack_1d0,auStack_180);
    func_0x000107c27e5c();
    puStack_1a0 = puVar11;
    pppuStack_198 = ppppuVar10;
    func_0x000107c2793c(&UNK_10f40ab80);
    func_0x000107c3173c(auStack_1b8);
    func_0x00010b931638();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
  }
  else {
    FUN_10b9a2460(auStack_1b8,puVar18);
    func_0x00010b931638();
    puVar12 = auStack_1b8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
  ppppuVar13 = (undefined8 ****)&ppuStack_188;
  func_0x0001080e6ca4(ppppuVar13);
  func_0x00010b93160c(uStack_168);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    FUN_10b9a2460(apppuStack_238);
    *extraout_x8_02 = 0;
    extraout_x8_02[1] = 0;
    extraout_x8_02[2] = 0;
    ppppuVar13 = (undefined8 ****)apppuStack_238[0];
    if (-1 < cStack_221) {
      ppppuVar13 = apppuStack_238;
    }
    _opendir();
    if (ppppuVar13 != (undefined8 ****)0x0) {
      while (ppppuVar14 = ppppuVar13, _readdir(), ppppuVar14 != (undefined8 ****)0x0) {
        uVar17 = (long)ppppuVar14 + 0x15;
        uVar15 = uVar17;
        uStack_248 = uVar17;
        _strlen();
        uVar16 = uVar17;
        uStack_240 = uVar15;
        func_0x000107c27944(uVar17,uVar15,&UNK_10f7d0b49,2);
        if (((uVar16 & 1) == 0) &&
           (func_0x000107c27944(uVar17,uVar15,&UNK_10f7d0b4c,1), (uVar17 & 1) == 0)) {
          FUN_10b9a2434(auStack_260,ppppuVar10,&uStack_248);
          FUN_10b99e9e4(extraout_x8_02,auStack_260);
          func_0x00010b99ef3c();
        }
      }
      _closedir(ppppuVar13);
    }
    ppppuVar10 = apppuStack_238;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar10);
    return ppppuVar10;
  }
  return ppppuVar13;
}



/* Entry: 10b9314b4; end: 10b931517;  */

undefined8 **** FUN_10b9314b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 ****ppppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined1 auStack_190 [24];
  ulong uStack_178;
  ulong uStack_170;
  undefined8 ***apppuStack_168 [2];
  char cStack_151;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 *puStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 **ppuStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 **ppuStack_48;
  undefined8 **appuStack_40 [3];
  undefined8 uStack_28;
  
  func_0x00010b931670();
  func_0x00010b931620();
  ppppuVar2 = (undefined8 ****)&ppuStack_48;
  uStack_28 = extraout_x8;
  func_0x00010b931630();
  uVar1 = (undefined8 ***)ppuStack_48 == (undefined8 ***)0x1;
  ppppuVar5 = (undefined8 ****)0x0;
  if ((bool)uVar1) {
    ppppuVar2 = (undefined8 ****)appuStack_40;
    FUN_10b99e800();
    ppppuVar5 = ppppuVar2;
  }
  func_0x00010b93165c();
  func_0x00010b93160c(uStack_28);
  if ((bool)uVar1) {
    return ppppuVar5;
  }
  ___stack_chk_fail();
  puVar3 = auStack_100;
  puVar4 = auStack_100;
  func_0x00010b931620();
  uStack_98 = extraout_x8_00;
  func_0x00010b931630();
  func_0x000107c31084();
  uVar1 = (undefined8 ***)ppuStack_b8 == (undefined8 ***)0x1;
  if ((bool)uVar1) {
    FUN_10b9a2460(auStack_100,auStack_b0);
    func_0x000107c27e5c();
    puStack_d0 = puVar3;
    pppuStack_c8 = ppppuVar2;
    func_0x000107c2793c(&UNK_10f40ab80);
    func_0x000107c3173c(auStack_e8);
    func_0x00010b931638();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  }
  else {
    FUN_10b9a2460(auStack_e8,param_2);
    func_0x00010b931638();
    puVar4 = auStack_e8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
  ppppuVar5 = (undefined8 ****)&ppuStack_b8;
  func_0x0001080e6ca4(ppppuVar5);
  func_0x00010b93160c(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b9a2460(apppuStack_168);
    *extraout_x8_01 = 0;
    extraout_x8_01[1] = 0;
    extraout_x8_01[2] = 0;
    ppppuVar5 = (undefined8 ****)apppuStack_168[0];
    if (-1 < cStack_151) {
      ppppuVar5 = apppuStack_168;
    }
    _opendir();
    if (ppppuVar5 != (undefined8 ****)0x0) {
      while (ppppuVar6 = ppppuVar5, _readdir(), ppppuVar6 != (undefined8 ****)0x0) {
        uVar9 = (long)ppppuVar6 + 0x15;
        uVar7 = uVar9;
        uStack_178 = uVar9;
        _strlen();
        uVar8 = uVar9;
        uStack_170 = uVar7;
        func_0x000107c27944(uVar9,uVar7,&UNK_10f7d0b49,2);
        if (((uVar8 & 1) == 0) &&
           (func_0x000107c27944(uVar9,uVar7,&UNK_10f7d0b4c,1), (uVar9 & 1) == 0)) {
          FUN_10b9a2434(auStack_190,ppppuVar2,&uStack_178);
          FUN_10b99e9e4(extraout_x8_01,auStack_190);
          func_0x00010b99ef3c();
        }
      }
      _closedir(ppppuVar5);
    }
    ppppuVar2 = apppuStack_168;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar2);
    return ppppuVar2;
  }
  return ppppuVar5;
}



/* Entry: 10b931518; end: 10b9315f7;  */

void FUN_10b931518(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 auStack_140 [24];
  ulong uStack_128;
  ulong uStack_120;
  undefined8 ***apppuStack_118 [2];
  char cStack_101;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  puVar2 = auStack_b0;
  puVar3 = auStack_b0;
  func_0x00010b931620();
  uStack_48 = extraout_x8;
  func_0x00010b931630();
  func_0x000107c31084();
  uVar1 = lStack_68 == 1;
  if ((bool)uVar1) {
    FUN_10b9a2460(auStack_b0,auStack_60);
    func_0x000107c27e5c();
    puStack_80 = puVar2;
    uStack_78 = param_1;
    func_0x000107c2793c(&UNK_10f40ab80);
    func_0x000107c3173c(auStack_98);
    func_0x00010b931638();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  }
  else {
    FUN_10b9a2460(auStack_98,param_2);
    func_0x00010b931638();
    puVar3 = auStack_98;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
  func_0x0001080e6ca4(&lStack_68);
  func_0x00010b93160c(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b9a2460(apppuStack_118);
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    ppppuVar4 = (undefined8 ****)apppuStack_118[0];
    if (-1 < cStack_101) {
      ppppuVar4 = apppuStack_118;
    }
    _opendir();
    if (ppppuVar4 != (undefined8 ****)0x0) {
      while (ppppuVar5 = ppppuVar4, _readdir(), ppppuVar5 != (undefined8 ****)0x0) {
        uVar8 = (long)ppppuVar5 + 0x15;
        uVar6 = uVar8;
        uStack_128 = uVar8;
        _strlen();
        uVar7 = uVar8;
        uStack_120 = uVar6;
        func_0x000107c27944(uVar8,uVar6,&UNK_10f7d0b49,2);
        if (((uVar7 & 1) == 0) &&
           (func_0x000107c27944(uVar8,uVar6,&UNK_10f7d0b4c,1), (uVar8 & 1) == 0)) {
          FUN_10b9a2434(auStack_140,param_1,&uStack_128);
          FUN_10b99e9e4(extraout_x8_00,auStack_140);
          func_0x00010b99ef3c();
        }
      }
      _closedir(ppppuVar4);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_118);
    return;
  }
  return;
}



/* Entry: 10b9315f8; end: 10b93168f;  */

void FUN_10b9315f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  ulong uStack_70;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  
  FUN_10b9a2460(appuStack_68);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pppuVar1 = (undefined8 ***)appuStack_68[0];
  if (-1 < cStack_51) {
    pppuVar1 = appuStack_68;
  }
  _opendir();
  if (pppuVar1 != (undefined8 ***)0x0) {
    while (pppuVar2 = pppuVar1, _readdir(), pppuVar2 != (undefined8 ***)0x0) {
      uVar5 = (long)pppuVar2 + 0x15;
      uVar3 = uVar5;
      uStack_78 = uVar5;
      _strlen();
      uVar4 = uVar5;
      uStack_70 = uVar3;
      func_0x000107c27944(uVar5,uVar3,&UNK_10f7d0b49,2);
      if (((uVar4 & 1) == 0) &&
         (func_0x000107c27944(uVar5,uVar3,&UNK_10f7d0b4c,1), (uVar5 & 1) == 0)) {
        FUN_10b9a2434(auStack_90,param_3,&uStack_78);
        FUN_10b99e9e4(param_1,auStack_90);
        func_0x00010b99ef3c();
      }
    }
    _closedir(pppuVar1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_68);
  return;
}



/* Entry: 10b931690; end: 10b931ceb;  */

void FUN_10b931690(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_110d773e0;
  param_1[2] = 0x32aaaba7;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xb] = lVar4;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[0xd] = param_3[1];
  param_1[0xc] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = param_4[1];
  uVar5 = *param_4;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_4 + 2);
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  return;
}



/* Entry: 10b931cec; end: 10b931d47;  */

undefined8 FUN_10b931cec(void)

{
  int iVar1;
  
  if ((bRam0000000113846848 & 1) == 0) {
    iVar1 = 0x13846848;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113846840,&UNK_10f7ce012);
      ___cxa_guard_release(0x113846848);
    }
  }
  return 0x113846840;
}



/* Entry: 10b931d48; end: 10b931dfb;  */

void FUN_10b931d48(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  
  if (param_4 != 0) {
    FUN_10b931dfc();
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  plVar1 = (long *)*param_3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  func_0x00010b931e28(param_1 + 0x18,param_2);
  FUN_10b931e50();
  if (plVar1 != (long *)0x0) {
    func_0x00010b933908();
  }
  return;
}



/* Entry: 10b931dfc; end: 10b931e4f;  */

long FUN_10b931dfc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    __ZNSt3__16chrono12system_clock3nowEv();
    return lVar1 / 1000000;
  }
  return lVar1;
}



/* Entry: 10b931e50; end: 10b931e83;  */

undefined8 * FUN_10b931e50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000104c625c4(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10b931e84; end: 10b931f2b;  */

void FUN_10b931e84(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined1 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b933844();
  param_1 = param_1 + 0x18;
  FUN_10b931f2c();
  if (*(long *)(unaff_x20 + 0x18) + *(long *)(unaff_x20 + 0x30) != param_1) {
    lVar1 = param_1;
    func_0x00010b9338d8();
    if ((int)lVar1 == 0) {
      if (param_3 != 0) {
        lVar1 = *(long *)(unaff_x20 + 8) + 1;
        *(long *)(unaff_x20 + 8) = lVar1;
        *(long *)(param_2 + 8) = lVar1;
      }
      func_0x000104c6257c();
      unaff_x19[0x18] = 1;
      return;
    }
    FUN_10b931f98(unaff_x20 + 0x18,param_1,param_2);
  }
  *unaff_x19 = 0;
  unaff_x19[0x18] = 0;
  return;
}



/* Entry: 10b931f2c; end: 10b931f97;  */

long FUN_10b931f2c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b932f5c();
  plVar2 = param_1;
  FUN_10b9334ec(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b931f98; end: 10b931fe3;  */

undefined1  [16] FUN_10b931f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b9338b0();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b933590(&uStack_40);
  FUN_10b9335c4();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b931fe4; end: 10b931feb;  */

void FUN_10b931fe4(long param_1,long param_2)

{
  long lVar1;
  undefined1 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b933844();
  param_1 = param_1 + 0x18;
  FUN_10b931f2c();
  if (*(long *)(unaff_x20 + 0x18) + *(long *)(unaff_x20 + 0x30) != param_1) {
    lVar1 = param_1;
    func_0x00010b9338d8();
    if ((int)lVar1 == 0) {
      lVar1 = *(long *)(unaff_x20 + 8) + 1;
      *(long *)(unaff_x20 + 8) = lVar1;
      *(long *)(param_2 + 8) = lVar1;
      func_0x000104c6257c();
      unaff_x19[0x18] = 1;
      return;
    }
    FUN_10b931f98(unaff_x20 + 0x18,param_1,param_2);
  }
  *unaff_x19 = 0;
  unaff_x19[0x18] = 0;
  return;
}



/* Entry: 10b931fec; end: 10b932583;  */

long * FUN_10b931fec(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  long *unaff_x26;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long alStack_180 [3];
  byte bStack_168;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  
  func_0x00010b933844();
  func_0x00010b93391c();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  puVar23 = extraout_x8 + 2;
  *puVar23 = 0;
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    if (unaff_x26 < plVar12) {
LAB_10b932580:
      FUN_10bdb3fe0();
      FUN_10b931e84(alStack_180);
      if ((bStack_168 == 1) && (alStack_180[0] != 0)) {
        func_0x00010b933908();
      }
      return (long *)(ulong)bStack_168;
    }
    FUN_10b932d14(&plStack_b0,plVar12,0,puVar23);
    lVar20 = *unaff_x19;
    lVar14 = unaff_x19[1];
    FUN_10b932d88(lVar20,lVar14,plStack_a8 + ((lVar14 - lVar20) / -0x38) * 7);
    plStack_b0 = (long *)*unaff_x19;
    *unaff_x19 = (long)(plStack_a8 + ((lVar14 - lVar20) / -0x38) * 7);
    plVar12 = (long *)unaff_x19[2];
    unaff_x19[2] = (long)plStack_98;
    unaff_x19[1] = (long)plStack_a0;
    plStack_a8 = plStack_b0;
    plStack_a0 = plStack_b0;
    plStack_98 = plVar12;
    func_0x00010b932dfc(&plStack_b0);
  }
  plStack_a8 = *(long **)(unaff_x20 + 0x20);
  plStack_b0 = *(long **)(unaff_x20 + 0x18);
  FUN_10b9335fc(&plStack_b0);
  plStack_e8 = plStack_a8;
  plStack_f0 = plStack_b0;
  plVar12 = plStack_f0;
  do {
    while( true ) {
      plStack_f0 = plVar12;
      if (plStack_f0 == (long *)(*(long *)(unaff_x20 + 0x18) + *(long *)(unaff_x20 + 0x30))) {
        if (*(ulong *)(unaff_x20 + 0x10) != 0) {
          uVar13 = 0;
          lVar14 = *unaff_x19;
          for (lVar20 = lVar14; lVar20 != unaff_x19[1]; lVar20 = lVar20 + 0x38) {
            uVar13 = *(long *)(lVar20 + 0x18) + uVar13;
          }
          lVar20 = 0;
          uVar18 = 0;
          for (; *(ulong *)(unaff_x20 + 0x10) < uVar13 &&
                 uVar18 < (ulong)((unaff_x19[1] - lVar14) / 0x38);
              uVar13 = uVar13 - *(long *)(lVar22 + 0x18)) {
            lVar22 = lVar14 + lVar20;
            uVar18 = uVar18 + 1;
            lVar20 = lVar20 + 0x38;
          }
          if (uVar18 != 0) {
            lVar22 = 0;
            for (; uVar18 != 0; uVar18 = uVar18 - 1) {
              lVar27 = unaff_x20 + 0x18;
              lVar14 = lVar14 + lVar22;
              FUN_10b931f2c(lVar27,lVar14);
              if (*(long *)(unaff_x20 + 0x18) + *(long *)(unaff_x20 + 0x30) != lVar27) {
                FUN_10b931f98(unaff_x20 + 0x18,lVar27,lVar14);
              }
              lVar14 = *unaff_x19;
              lVar22 = lVar22 + 0x38;
            }
            FUN_10b932e74(lVar14 + lVar20,unaff_x19[1]);
            func_0x00010b9145a0();
            plStack_f0 = unaff_x19;
          }
        }
        return plStack_f0;
      }
      plVar19 = plStack_f0;
      func_0x00010b9338d8();
      plVar12 = plStack_e8;
      if (((ulong)plVar19 & 1) == 0) break;
      plVar12 = (long *)(unaff_x20 + 0x18);
      FUN_10b931f98(plVar12,plStack_f0,plStack_e8);
      plStack_e8 = plStack_f0;
    }
    plStack_128 = (long *)*plStack_e8;
    if (plStack_128 != (long *)0x0) {
      plVar19 = plStack_128 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = (int)*plVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plStack_110 = (long *)plStack_e8[3];
    plStack_118 = (long *)plStack_e8[2];
    plStack_120 = (long *)plStack_e8[1];
    plVar19 = (long *)plStack_e8[4];
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    lStack_f8 = plVar12[6];
    lStack_100 = plVar12[5];
    puVar3 = (undefined8 *)*unaff_x19;
    puVar4 = (undefined8 *)unaff_x19[1];
    uVar13 = ((long)puVar4 - (long)puVar3) / 0x38;
    puVar7 = puVar3;
    uVar18 = uVar13;
    while (uVar18 != 0) {
      uVar17 = uVar18 >> 1;
      uVar1 = uVar18 + (uVar18 >> 1 ^ 0xffffffffffffffff);
      uVar18 = uVar17;
      if ((long *)puVar7[uVar17 * 7 + 1] <= plStack_120) {
        puVar7 = puVar7 + uVar17 * 7 + 7;
        uVar18 = uVar1;
      }
    }
    if (puVar4 < (undefined8 *)*puVar23) {
      if (puVar7 == puVar4) {
        *puVar4 = plStack_128;
        puVar4[2] = plStack_118;
        puVar4[1] = plStack_120;
        puVar4[3] = plStack_110;
        puVar4[4] = plVar19;
        plStack_128 = (long *)0x0;
        plStack_108 = (long *)0x0;
        puVar4[6] = lStack_f8;
        puVar4[5] = lStack_100;
        unaff_x19[1] = (long)(puVar4 + 7);
      }
      else {
        plStack_a0 = plStack_118;
        plStack_a8 = plStack_120;
        plStack_98 = plStack_110;
        plStack_b0 = plStack_128;
        plStack_128 = (long *)0x0;
        plStack_108 = (long *)0x0;
        puVar11 = puVar4 + -7;
        puVar15 = puVar4;
        for (puVar16 = puVar11; puVar16 < puVar4; puVar16 = puVar16 + 7) {
          *puVar15 = *puVar16;
          *puVar16 = 0;
          uVar26 = puVar16[2];
          uVar25 = puVar16[1];
          puVar15[3] = puVar16[3];
          puVar15[2] = uVar26;
          puVar15[1] = uVar25;
          puVar15[4] = puVar16[4];
          puVar16[4] = 0;
          uVar25 = puVar16[5];
          puVar15[6] = puVar16[6];
          puVar15[5] = uVar25;
          puVar15 = puVar15 + 7;
        }
        unaff_x19[1] = (long)puVar15;
        plStack_90 = plVar19;
        lStack_88 = lStack_100;
        lStack_80 = lStack_f8;
        puStack_78 = puVar23;
        for (lVar20 = (long)puVar3 + ((long)puVar4 - (long)puVar3) + -0x70;
            (undefined8 *)(lVar20 + 0x38) != puVar7; lVar20 = lVar20 + -0x38) {
          func_0x00010b932e44(puVar11,lVar20);
          puVar11 = puVar11 + -7;
        }
        func_0x00010b932e44(puVar7,&plStack_b0);
        func_0x00010b9145d8(&plStack_b0);
      }
    }
    else {
      plVar12 = (long *)(uVar13 + 1);
      plStack_108 = plVar19;
      if (unaff_x26 < plVar12) goto LAB_10b932580;
      uVar13 = ((long)*puVar23 - (long)puVar3) / 0x38;
      plVar19 = (long *)(uVar13 * 2);
      if (plVar19 < plVar12 || (long)plVar19 - (long)plVar12 == 0) {
        plVar19 = plVar12;
      }
      if (0x249249249249248 < uVar13) {
        plVar19 = unaff_x26;
      }
      FUN_10b932d14(&plStack_d8,plVar19,((long)puVar7 - (long)puVar3) / 0x38,puVar23);
      plVar10 = plStack_c0;
      plVar9 = plStack_c8;
      plVar8 = plStack_d0;
      plVar19 = plStack_d8;
      plVar21 = plStack_d0;
      plVar12 = plStack_c8;
      plVar24 = plStack_c0;
      if (plStack_c8 == plStack_c0) {
        if (plStack_d0 < plStack_d8 || (long)plStack_d0 - (long)plStack_d8 == 0) {
          uVar13 = ((long)plStack_c8 - (long)plStack_d8) / 0x38 << 1;
          if ((long)plStack_c8 - (long)plStack_d8 == 0) {
            uVar13 = 1;
          }
          FUN_10b932d14(&plStack_b0,uVar13,uVar13 >> 2,uStack_b8);
          plVar24 = plStack_98;
          plVar21 = plStack_a8;
          lVar14 = (long)plVar9 - (long)plVar8;
          plVar12 = (long *)((long)plStack_a0 + lVar14);
          for (lVar20 = 0; lVar14 != lVar20; lVar20 = lVar20 + 0x38) {
            plVar2 = (long *)((long)plVar8 + lVar20);
            *plStack_a0 = *plVar2;
            *plVar2 = 0;
            lVar27 = plVar2[2];
            lVar22 = plVar2[1];
            plStack_a0[3] = plVar2[3];
            plStack_a0[2] = lVar27;
            plStack_a0[1] = lVar22;
            plStack_a0[4] = plVar2[4];
            plVar2[4] = 0;
            lVar22 = plVar2[5];
            plStack_a0[6] = plVar2[6];
            plStack_a0[5] = lVar22;
            plStack_a0 = plStack_a0 + 7;
          }
          plStack_b0 = plVar19;
          plStack_a8 = plVar8;
          plStack_a0 = plVar9;
          plStack_98 = plVar10;
          func_0x00010b932dfc(&plStack_b0);
        }
        else {
          plVar21 = plStack_d0 + ((((long)plStack_d0 - (long)plStack_d8) / 0x38 + 1) / -2) * 7;
          plVar12 = plStack_d0;
          FUN_10b932e74(plStack_d0,plStack_c8,plVar21);
          plVar19 = plVar21;
          plVar24 = plVar10;
        }
        func_0x00010b93391c();
        unaff_x26 = plVar19;
      }
      *plVar12 = (long)plStack_128;
      plVar12[2] = (long)plStack_118;
      plVar12[1] = (long)plStack_120;
      plVar12[3] = (long)plStack_110;
      plVar12[4] = (long)plStack_108;
      plStack_128 = (long *)0x0;
      plStack_108 = (long *)0x0;
      plVar12[6] = lStack_f8;
      plVar12[5] = lStack_100;
      FUN_10b932d88(puVar7,unaff_x19[1],plVar12 + 7);
      lVar20 = *unaff_x19;
      lVar14 = unaff_x19[1];
      unaff_x19[1] = (long)puVar7;
      FUN_10b932d88(lVar20,puVar7,plVar21 + (((long)puVar7 - lVar20) / -0x38) * 7);
      plStack_d8 = (long *)*unaff_x19;
      *unaff_x19 = (long)(plVar21 + (((long)puVar7 - lVar20) / -0x38) * 7);
      unaff_x19[1] = (long)(plVar12 + 7) + (lVar14 - (long)puVar7);
      plStack_c0 = (long *)unaff_x19[2];
      unaff_x19[2] = (long)plVar24;
      plStack_d0 = plStack_d8;
      plStack_c8 = plStack_d8;
      func_0x00010b932dfc(&plStack_d8);
    }
    FUN_10b933590(&plStack_f0);
    func_0x00010b9145d8(&plStack_128);
    plVar12 = plStack_f0;
  } while( true );
}



/* Entry: 10b932584; end: 10b9325cb;  */

char FUN_10b932584(undefined8 param_1,undefined8 param_2)

{
  long alStack_40 [3];
  char cStack_28;
  
  FUN_10b931e84(alStack_40,param_1,param_2,0);
  if ((cStack_28 == '\x01') && (alStack_40[0] != 0)) {
    func_0x00010b933908();
  }
  return cStack_28;
}



/* Entry: 10b9325cc; end: 10b932763;  */

bool FUN_10b9325cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x18;
  FUN_10b931f2c();
  lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x30);
  if (lVar1 != lVar2) {
    FUN_10b931f98(param_1 + 0x18,lVar2,param_2);
  }
  return lVar1 != lVar2;
}



/* Entry: 10b932764; end: 10b9328af;  */

void FUN_10b932764(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b933844();
  ppuStack_68 = &PTR_FUN_110d7e488;
  uStack_60 = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_10b931fec(&plStack_80);
  ppuStack_a8 = &PTR_FUN_110d7e488;
  uStack_a0 = 1;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  func_0x00010b9326e4();
  FUN_10b931cec();
  if (*unaff_x20 != 0) {
    piVar1 = (int *)(*unaff_x20 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b933828();
  func_0x000107c278f8(uStack_c0);
  func_0x000107c278f8(0);
  for (plVar4 = plStack_80; plVar4 != plStack_78; plVar4 = plVar4 + 7) {
    if (*plVar4 != 0) {
      piVar1 = (int *)(*plVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010b933828();
    func_0x000107c278f8(uStack_c0);
    func_0x000107c278f8(0);
  }
  FUN_10b98f484(&uStack_c8,&ppuStack_68);
  FUN_10b99daa0(&uStack_c0,uStack_c8);
  *unaff_x19 = 1;
  unaff_x19[1] = uStack_c0;
  uStack_c0 = 0;
  unaff_x19[3] = uStack_b0;
  unaff_x19[2] = uStack_b8;
  func_0x000104bdb368(uStack_c8);
  _free(uStack_88);
  func_0x00010b914528(&plStack_80);
  ppuStack_68 = &PTR_FUN_110d7e488;
  _free(uStack_48);
  return;
}



/* Entry: 10b9328b0; end: 10b9329c7;  */

void FUN_10b9328b0(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  func_0x00010b9338a0();
  uStack_38 = extraout_x8;
  FUN_10b931cec();
  uVar1 = *param_2 == *plVar2;
  if ((bool)uVar1) {
    lStack_60 = param_2[1];
    lStack_58 = lStack_60 + param_2[2];
    lStack_50 = lStack_60;
    FUN_10b9329c8(&lStack_48,&lStack_60);
    uVar1 = lStack_48 == 1;
    if ((bool)uVar1) {
      uVar1 = *plStack_40 == 2;
      if ((bool)uVar1) {
        *param_3 = plStack_40[1];
        *param_1 = 1;
        param_1[2] = lStack_58;
        param_1[1] = lStack_60;
        param_1[3] = lStack_50;
      }
      else {
        FUN_10b99f5f8(&uStack_68,&UNK_10f7ce04b);
        *param_1 = 2;
        param_1[1] = uStack_68;
        uStack_68 = 0;
        func_0x00010b933914();
      }
    }
    else {
      *param_1 = 2;
      param_1[1] = plStack_40;
      plStack_40 = (long *)0x0;
    }
    plVar2 = &lStack_48;
    func_0x00010b933798();
  }
  else {
    plVar2 = &lStack_60;
    FUN_10b99f5f8(plVar2,&UNK_10f7ce01f);
    *param_1 = 2;
    param_1[1] = lStack_60;
    lStack_60 = 0;
    func_0x00010b933914();
  }
  func_0x00010b9337fc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar5 = plVar2[2];
    if ((ulong)(plVar2[1] - lVar5) < 0x10) {
      plVar3 = plVar2;
      func_0x000107c31084();
      lStack_c0 = 0x10;
      uStack_b8 = 0;
      func_0x00010b933850(plVar2[1] - plVar2[2]);
      func_0x00010b933860();
      func_0x000107c31080(&uStack_c8,plVar3,auStack_e0);
      func_0x00010b9338f4();
      lVar5 = lStack_c0;
      lStack_c0 = 0;
      func_0x00010b933914();
      func_0x000107c278f8(uStack_c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
      uVar4 = 2;
    }
    else {
      plVar2[2] = lVar5 + 0x10;
      uVar4 = 1;
    }
    *extraout_x8_00 = uVar4;
    extraout_x8_00[1] = lVar5;
  }
  return;
}



/* Entry: 10b9329c8; end: 10b9329cf;  */

void FUN_10b9329c8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 8) - lVar1) < 0x10) {
    lVar1 = param_2;
    func_0x000107c31084();
    lStack_50 = 0x10;
    uStack_48 = 0;
    func_0x00010b933850(*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10));
    func_0x00010b933860();
    func_0x000107c31080(&uStack_58,lVar1,auStack_70);
    func_0x00010b9338f4();
    lVar1 = lStack_50;
    lStack_50 = 0;
    func_0x00010b933914();
    func_0x000107c278f8(uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    uVar2 = 2;
  }
  else {
    *(long *)(param_2 + 0x10) = lVar1 + 0x10;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b9329d0; end: 10b932c7b;  */

void FUN_10b9329d0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b933844();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 8) - (long)puVar2) < 0x18) {
    func_0x000107c31084();
    uStack_70 = 0x18;
    uStack_68 = 0;
    func_0x00010b933850(*(long *)(unaff_x20 + 8) - *(long *)(unaff_x20 + 0x10));
    func_0x00010b933860();
    func_0x000107c31080(&uStack_78,param_1,auStack_90);
    func_0x00010b9338f4();
    uVar1 = uStack_70;
    uStack_70 = 0;
    func_0x000107c278f8(uStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    *unaff_x19 = 2;
    unaff_x19[1] = uVar1;
  }
  else {
    *(undefined8 **)(unaff_x20 + 0x10) = puVar2 + 3;
    uVar1 = *puVar2;
    uVar3 = puVar2[1];
    uVar6 = puVar2[2];
    plVar4 = (long *)*param_3;
    if (plVar4 == (long *)0x0) {
      uVar7 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
    }
    else {
      func_0x00010b933880();
      uVar7 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010b933880();
    }
    *unaff_x19 = 1;
    unaff_x19[1] = uVar1;
    unaff_x19[2] = uVar3;
    unaff_x19[3] = uVar6;
    unaff_x19[4] = plVar4;
    unaff_x19[5] = uVar7;
    unaff_x19[6] = uVar5;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b932ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10b932c7c; end: 10b932cf7;  */

void FUN_10b932c7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        func_0x00010b9145d8(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x38;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b932cf8; end: 10b932d13;  */

void FUN_10b932cf8(long param_1)

{
  func_0x000104c6257c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b932d14; end: 10b932d87;  */

long * FUN_10b932d14(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x492492492492492 < param_2) {
      func_0x000104bfe188();
      for (plVar2 = param_1; plVar2 != param_2; plVar2 = plVar2 + 7) {
        *param_3 = *plVar2;
        *plVar2 = 0;
        lVar3 = plVar2[2];
        lVar1 = plVar2[1];
        param_3[3] = plVar2[3];
        param_3[2] = lVar3;
        param_3[1] = lVar1;
        param_3[4] = plVar2[4];
        plVar2[4] = 0;
        lVar1 = plVar2[5];
        param_3[6] = plVar2[6];
        param_3[5] = lVar1;
        param_3 = param_3 + 7;
      }
      for (; param_1 != param_2; param_1 = param_1 + 7) {
        func_0x00010b9145d8();
      }
      return param_1;
    }
    lVar1 = (long)param_2 * 0x38;
    __Znwm();
  }
  lVar3 = lVar1 + (long)param_3 * 0x38;
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_1[2] = lVar3;
  param_1[3] = lVar1 + (long)param_2 * 0x38;
  return param_1;
}



/* Entry: 10b932d88; end: 10b932e73;  */

void FUN_10b932d88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 7) {
    *param_3 = *puVar1;
    *puVar1 = 0;
    uVar3 = puVar1[2];
    uVar2 = puVar1[1];
    param_3[3] = puVar1[3];
    param_3[2] = uVar3;
    param_3[1] = uVar2;
    param_3[4] = puVar1[4];
    puVar1[4] = 0;
    uVar2 = puVar1[5];
    param_3[6] = puVar1[6];
    param_3[5] = uVar2;
    param_3 = param_3 + 7;
  }
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    func_0x00010b9145d8();
  }
  return;
}



/* Entry: 10b932e74; end: 10b932f5b;  */

long FUN_10b932e74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b9338b0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x00010b932e44(param_3,unaff_x21);
    param_3 = param_3 + 0x38;
    unaff_x19 = unaff_x19 + 0x38;
  }
  return unaff_x19;
}



/* Entry: 10b932f5c; end: 10b93305f;  */

void FUN_10b932f5c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b933040(&lStack_18);
  return;
}



/* Entry: 10b933060; end: 10b933127;  */

void FUN_10b933060(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b933128(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b9330a8;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b9330a8;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b9330fc:
    FUN_10b933168(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b9330fc;
    }
    func_0x00010b933294(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b933128(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b9330a8:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b933128; end: 10b933167;  */

ulong FUN_10b933128(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b933168; end: 10b93343f;  */

void FUN_10b933168(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x38;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b933440();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b933128(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b933460(param_1[1] + lVar4 * 0x38,lVar5);
    }
    lVar5 = lVar5 + 0x38;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b933440; end: 10b93345f;  */

void FUN_10b933440(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b933460; end: 10b933497;  */

undefined8 FUN_10b933460(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *param_2 = 0;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  if (param_2[4] != 0) {
    func_0x00010b914d8c();
  }
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b933498; end: 10b9334eb;  */

long FUN_10b933498(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b9334ec();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b9334ec; end: 10b93358f;  */

bool FUN_10b9334ec(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar8 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar3;
      *param_4 = uVar1;
      if (*(long *)(param_1[1] + uVar1 * 0x38) == lVar8) goto LAB_10b933584;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10b933584:
  return uVar6 != 0;
}



/* Entry: 10b933590; end: 10b9335c3;  */

long * FUN_10b933590(long *param_1)

{
  param_1[1] = param_1[1] + 0x38;
  *param_1 = *param_1 + 1;
  FUN_10b9335fc();
  return param_1;
}



/* Entry: 10b9335c4; end: 10b9335fb;  */

void FUN_10b9335c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long *unaff_x21;
  
  func_0x00010b9338b0();
  func_0x00010b9145d8(param_3);
  uVar2 = 0;
  unaff_x21[2] = unaff_x21[2] + -1;
  puVar3 = (undefined1 *)((long)unaff_x20 + (-8 - *unaff_x21));
  uVar5 = *(ulong *)(*unaff_x21 + ((ulong)puVar3 & unaff_x21[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *unaff_x20 & ~*unaff_x20 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)unaff_x20 = uVar4;
  *(undefined1 *)(*unaff_x21 + (unaff_x21[3] & 7U) + (unaff_x21[3] & (ulong)puVar3) + 1) = uVar4;
  unaff_x21[5] = unaff_x21[5] + uVar2;
  return;
}



/* Entry: 10b9335fc; end: 10b933657;  */

void FUN_10b9335fc(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x38;
  }
  return;
}



/* Entry: 10b933658; end: 10b9336fb;  */

void FUN_10b933658(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b9336fc; end: 10b933797;  */

void FUN_10b9336fc(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (*(long *)(param_2 + 8) - uVar3 < param_3) {
    lVar1 = param_2;
    func_0x000107c31084();
    uStack_48 = 0;
    uStack_50 = param_3;
    func_0x00010b933850(*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10));
    func_0x00010b933860();
    func_0x000107c31080(&uStack_58,lVar1,auStack_70);
    func_0x00010b9338f4();
    uVar3 = uStack_50;
    uStack_50 = 0;
    func_0x00010b933914();
    func_0x000107c278f8(uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    uVar2 = 2;
  }
  else {
    *(ulong *)(param_2 + 0x10) = uVar3 + param_3;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10b933798; end: 10b93392f;  */

void FUN_10b933798(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 10b933930; end: 10b934bf3;  */

undefined8 * FUN_10b933930(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110d77470;
  func_0x00010b933da0(param_1 + 0xd);
  func_0x00010b926a68(param_1 + 0xe);
  func_0x00010b926a68(param_1 + 0xd);
  FUN_10b92a4d8(param_1 + 8);
  func_0x00010b93417c(param_1 + 5);
  plVar1 = param_1 + 2;
  if (*plVar1 != 0) {
    func_0x00010b933df4(plVar1);
    __ZdlPv(*plVar1);
  }
  return param_1;
}



/* Entry: 10b934bf4; end: 10b934c23;  */

undefined8 * FUN_10b934bf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77700;
  FUN_10b9521c8(param_1 + 2);
  return param_1;
}



/* Entry: 10b934c24; end: 10b934c27;  */

undefined8 * FUN_10b934c24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77700;
  FUN_10b9521c8(param_1 + 2);
  return param_1;
}



/* Entry: 10b934c28; end: 10b934c3b;  */

void FUN_10b934c28(void)

{
  FUN_10b934bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


