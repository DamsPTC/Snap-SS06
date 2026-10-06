/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078b00dc; end: 1078b012f;  */

void FUN_1078b00dc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  *param_1 = (long)puVar1;
  func_0x0001078b0cf8();
  return;
}



/* Entry: 1078b04c0; end: 1078b04db;  */

bool FUN_1078b04c0(long param_1)

{
  bool bVar1;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x7ff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x400;
  }
  return bVar1;
}



/* Entry: 1078b06a8; end: 1078b081b;  */

void FUN_1078b06a8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x400) {
    uVar5 = param_1[2] - param_1[1];
    plStack_30 = param_1 + 3;
    lVar3 = *plStack_30;
    uVar4 = lVar3 - *param_1;
    if (uVar4 <= uVar5) {
      lVar1 = (long)uVar4 >> 2;
      if (lVar3 == *param_1) {
        lVar1 = 1;
      }
      func_0x0001078b0b7c();
      lStack_48 = lVar1 + uVar5;
      lStack_38 = lVar1 + param_2 * 8;
      uVar2 = 0x1000;
      lStack_50 = lVar1;
      lStack_40 = lStack_48;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x400;
      uStack_70 = uVar2;
      uStack_68 = uVar2;
      func_0x0001078b0a00(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar3 = param_1[2];
      while (lVar1 = param_1[1], lVar3 != lVar1) {
        lVar3 = lVar3 + -8;
        func_0x0001078b0a9c(&lStack_50,lVar3);
      }
      lVar3 = *param_1;
      lVar7 = param_1[3];
      lVar6 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = lStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar3;
      lStack_48 = lVar1;
      lStack_40 = lVar6;
      lStack_38 = lVar7;
      func_0x0001078b0bb0(&uStack_68);
      func_0x0001078b0bdc(&lStack_50);
      return;
    }
    lVar1 = 0x1000;
    if (lVar3 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      func_0x0001078b08b4(param_1,&lStack_50);
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    func_0x0001078b094c(param_1,&lStack_50);
  }
  else {
    param_1[4] = param_1[4] - 0x400;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  func_0x0001078b081c(param_1,&lStack_50);
  return;
}



/* Entry: 1078b0d08; end: 1078b0dc3;  */

undefined8 * FUN_1078b0d08(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_1109e77a0;
  param_1[1] = 0;
  lVar5 = param_2;
  func_0x0001078aacb0();
  if ((int)lVar5 != 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0xd0);
    uStack_50 = *(undefined8 *)(param_2 + 200);
    if (*(long *)(param_2 + 0xd0) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0xd0) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001078b0dc4(&uStack_38,&uStack_50,param_3);
    uVar4 = uStack_38;
    uStack_38 = 0;
    func_0x0001078b10bc(param_1 + 1,uVar4);
    func_0x0001078b1098(&uStack_38);
    func_0x0001078b1410();
  }
  return param_1;
}



/* Entry: 1078b1068; end: 1078b1097;  */

void FUN_1078b1068(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *param_3;
  param_1[3] = *(undefined8 *)(param_3 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1078b116c; end: 1078b11db;  */

bool FUN_1078b116c(void)

{
  undefined1 in_ZR;
  bool bVar1;
  long unaff_x19;
  long lStack_38;
  int iStack_24;
  
  func_0x0001078b1418();
  if ((bool)in_ZR) {
    iStack_24 = 0;
    func_0x0001078b1404();
    if (lStack_38 != 0) {
      (**(code **)(lStack_38 + 0x38))(*(undefined4 *)(unaff_x19 + 0x10),0x8867,&iStack_24);
    }
    func_0x0001078b13a8();
    bVar1 = 0 < iStack_24;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1078b1328; end: 1078b136b;  */

long * FUN_1078b1328(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1078b15b4; end: 1078b1697;  */

void FUN_1078b15b4(long param_1)

{
  undefined4 *puVar1;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x0001077f3c4c();
  FUN_1077f3790();
  auStack_90[0] = 0xee;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_50 = 0xee;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  puVar1 = auStack_90;
  func_0x00010729d56c(puVar1,"client",&UNK_10f431885);
  func_0x00010729d56c();
  auStack_a0[0] = 1;
  uStack_98 = 0;
  uStack_b0 = *(undefined8 *)(param_1 + 8);
  uStack_a8 = 3;
  func_0x00010743fa9c((undefined8 *)(param_1 + 8),puVar1,auStack_a0,&uStack_b0,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 1078b1b44; end: 1078b1c3f;  */

void FUN_1078b1b44(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1078ac784(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 8) {
    *(undefined8 *)(lVar2 + 0x48 + lVar1) = 0;
  }
  *(undefined4 *)(lVar2 + 0x88) = 0;
  return;
}



/* Entry: 1078b2314; end: 1078b2627;  */

void FUN_1078b2314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (uint)param_4;
  if (((*(long *)(*(long *)(param_1 + 0x28) + 8) != 0) &&
      (func_0x0001078b2850(), (extraout_x8 >> 0x20 & 1) != 0)) &&
     ((extraout_x8 & 0xff0000) == 0x10000 && uVar1 == ((uint)(extraout_x8 >> 0x18) & 0xff))) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbebc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glUniform1fv_11034b828)((uint)extraout_x8 >> 1 & 0x7fff,CONCAT44(uVar2,uVar1));
    return;
  }
  return;
}



/* Entry: 1078b3848; end: 1078b3d47;  */

undefined4 * FUN_1078b3848(uint *param_1,uint param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar12;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 auStack_158 [6];
  undefined4 auStack_140 [6];
  ulong *puStack_128;
  undefined8 uStack_120;
  undefined8 ****appppuStack_118 [2];
  char cStack_101;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 ****appppuStack_f0 [2];
  char cStack_d9;
  undefined1 auStack_d8 [24];
  undefined4 auStack_c0 [6];
  undefined1 auStack_a8 [16];
  undefined8 ****ppppuStack_98;
  ulong auStack_90 [2];
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*param_1;
  func_0x0001073cafc0();
  puVar8 = param_1;
  func_0x0001078b6794();
  puVar9 = param_1;
  func_0x0001078b67bc();
  func_0x0001078adf40(auStack_c0,param_3,(char)param_1[6]);
  func_0x0001078b4658();
  func_0x0001073cafc0(*param_1);
  func_0x0001078b4658();
  func_0x0001078b4658();
  func_0x0001078b4658();
  func_0x000107879028(auStack_90,(double)(float)param_1[5],1);
  func_0x0001078b464c();
  func_0x0001078b462c();
  func_0x0001078b4658();
  if (*(char *)(param_4 + 0xfc) == '\x01') {
    func_0x0001078b4658();
  }
  else if (*(long *)(param_1 + 2) != 0) {
    plVar10 = (long *)(ulong)*param_1;
    func_0x0001073d3290();
    uVar17 = 0;
    lVar13 = 8;
    for (uVar15 = 0; lVar1 = **(long **)(param_1 + 2),
        uVar15 < (ulong)(((*(long **)(param_1 + 2))[1] - lVar1) / 0xc); uVar15 = uVar15 + 1) {
      iVar2 = *(int *)(lVar1 + lVar13);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          func_0x00010724ef84(appppuStack_f0,*plVar10 + uVar17 * 0x40);
          func_0x0001004c3cd0(auStack_d8,&UNK_10f43363f,appppuStack_f0);
          func_0x0001078b46ac();
          func_0x0001078b464c();
          func_0x0001078b462c();
          func_0x0001078b4678();
          func_0x0001078b4660();
          func_0x00010724ef84(appppuStack_f0,*plVar10 + uVar17 * 0x40);
          func_0x0001004c3cd0(auStack_d8,&UNK_10f433656,appppuStack_f0);
          func_0x0001078b46ac();
          func_0x0001078b464c();
          func_0x0001078b462c();
          func_0x0001078b4678();
          func_0x0001078b4660();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                    (auStack_c0,&UNK_10f43366d);
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
      lVar13 = lVar13 + 0xc;
    }
  }
  func_0x00010002b838(auStack_d8,"");
  uVar16 = 0;
  while( true ) {
    uVar17 = (ulong)*param_1;
    uVar15 = uVar17;
    func_0x0001073d4bd4();
    uVar6 = (uint)uVar15;
    cVar3 = SBORROW4(uVar16,uVar6);
    cVar4 = (int)(uVar16 - uVar6) < 0;
    if (uVar6 <= uVar16) break;
    if ((param_1[4] >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
      func_0x0001073d4bf4(uVar17,uVar16);
      func_0x00010002b838(auStack_a8,uVar17);
      func_0x0001004c3cd0(appppuStack_f0,&UNK_10f433675,auStack_a8);
      func_0x00010048a6c8(auStack_90,appppuStack_f0,&DAT_10f68f57e);
      func_0x0001004c3ca0(auStack_d8,auStack_90);
      func_0x0001078b462c();
      func_0x0001078b4660();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    }
    uVar16 = uVar16 + 1;
  }
  func_0x0001078b66d4();
  uVar17 = uVar15;
  func_0x0001078b66d4();
  ppppuStack_80 = (undefined8 ****)(uVar17 + (long)puVar8);
  auStack_90[1] = 0;
  uStack_78 = 0;
  auStack_90[0] = uVar15;
  func_0x0001078b47a0();
  func_0x0001078b4794(appppuStack_f0);
  func_0x0001078b481c();
  uVar12 = extraout_x9;
  if (cVar4 == cVar3) {
    uVar12 = extraout_x8;
  }
  func_0x0001078b4808(uVar12);
  cVar4 = cStack_d9 < '\0';
  cVar3 = '\0';
  ppppuStack_98 = appppuStack_f0[0];
  if (!(bool)cVar4) {
    ppppuStack_98 = appppuStack_f0;
  }
  puStack_100 = auStack_a8;
  uStack_f8 = 3;
  func_0x0001078b66d4();
  uVar15 = uVar17;
  func_0x0001078b66d4();
  auStack_90[0] = uVar17 + 0xbbf;
  ppppuStack_80 = (undefined8 ****)(uVar15 + (long)puVar9);
  auStack_90[1] = 0;
  uStack_78 = 0;
  func_0x0001078b47a0();
  func_0x0001078b4794(appppuStack_118);
  func_0x0001078b481c();
  uVar12 = extraout_x9_00;
  if (cVar4 == cVar3) {
    uVar12 = extraout_x8_00;
  }
  func_0x0001078b4808(uVar12);
  uVar5 = cStack_101 == '\0';
  ppppuStack_80 = appppuStack_118[0];
  if (-1 < cStack_101) {
    ppppuStack_80 = appppuStack_118;
  }
  uStack_120 = 3;
  puStack_128 = auStack_90;
  func_0x0001078aae9c(auStack_140,param_3,0x8b31,&puStack_100,uVar7);
  func_0x0001078aae9c(auStack_158,param_3,0x8b30,&puStack_128,uVar7);
  puVar14 = (undefined4 *)(ulong)param_2;
  _glAttachShader(puVar14,auStack_140[0]);
  _glAttachShader(puVar14,auStack_158[0]);
  uVar7 = (ulong)*param_1;
  func_0x0001073cafc0(uVar7);
  func_0x0001078ab3bc(param_3,puVar14,uVar7);
  FUN_1078aeb70(auStack_158);
  FUN_1078aeb70(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppuStack_118);
  func_0x0001078b4660();
  func_0x0001078b4678();
  puVar11 = auStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001078b47cc(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    __Unwind_Resume();
    func_0x0001078aeb94();
    uVar12 = *(undefined8 *)(puVar14 + 2);
    *(undefined1 *)(puVar11 + 4) = *(undefined1 *)(puVar14 + 4);
    *(undefined8 *)(puVar11 + 2) = uVar12;
    *puVar11 = *puVar14;
    *(undefined1 *)(puVar11 + 6) = *(undefined1 *)(puVar14 + 6);
    *(undefined1 *)(puVar14 + 6) = 0;
    return puVar11;
  }
  return param_3;
}



/* Entry: 1078b3f68; end: 1078b401b;  */

void FUN_1078b3f68(long param_1)

{
  func_0x0001078b4690();
  if (param_1 != 0) {
    func_0x0001078b4644();
  }
  return;
}



/* Entry: 1078b41c8; end: 1078b41eb;  */

void FUN_1078b41c8(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1078b4830; end: 1078b4933;  */

void FUN_1078b4830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar3 = &uStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0x400;
  __Znwm();
  func_0x0001078a9ca0();
  puVar2 = (undefined8 *)0x20;
  uStack_60 = uVar1;
  __Znwm();
  *puVar2 = &PTR_DAT_1109e7cb8;
  puVar2[2] = 1;
  puVar2[1] = 0x70;
  puVar2[3] = param_2;
  uVar4 = SUB84(auStack_58,0);
  puStack_40 = puVar2;
  func_0x0001078aa4d0(uVar1);
  func_0x0001078b4f04(auStack_58);
  func_0x0001078aad3c(uVar1);
  func_0x0001078aadf0(uVar1);
  uStack_60 = 0;
  *param_1 = uVar1;
  FUN_1078b4df4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078b4f04(auStack_58);
  FUN_1078b4df4();
  func_0x0001078b4f60();
  func_0x0001073caeb8();
  *(undefined1 *)((long)puVar3 + 0xf8) = 0;
  *(undefined4 *)((long)puVar3 + 0xf4) = uVar4;
  return;
}



/* Entry: 1078b4df4; end: 1078b4e23;  */

long * FUN_1078b4df4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001078aa2e4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078b4f68; end: 1078b5007;  */

undefined8 * FUN_1078b4f68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = &UNK_1109e7d70;
  lVar3 = 8;
  do {
    uVar1 = param_2;
    func_0x0001078b5008(param_2,*(undefined8 *)(puVar2 + -8));
    if ((int)uVar1 != 0) {
      func_0x0001078b50e8(param_1,puVar2);
    }
    func_0x0001078b502c(param_3,uVar1,*(undefined8 *)(puVar2 + 8));
    puVar2 = puVar2 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



/* Entry: 1078b525c; end: 1078b5287;  */

char * FUN_1078b525c(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  for (; (pcVar1 = param_2, param_1 != param_2 && (pcVar1 = param_1, *param_1 != *param_3));
      param_1 = param_1 + 1) {
  }
  return pcVar1;
}



/* Entry: 1078b53a8; end: 1078b53ab;  */

undefined8 * FUN_1078b53a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1109e7e78;
  lVar4 = param_1[4];
  plVar1 = (long *)(param_1[2] + 0x98);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae59c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b55b4; end: 1078b55f7;  */

void FUN_1078b55b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001078adef4(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x17c,param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBufferSubData_11034b3d8)(0x8892,0,param_4,param_3);
  return;
}



/* Entry: 1078b5dec; end: 1078b5e8b;  */

void FUN_1078b5dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7)

{
  func_0x0001078b6294();
  func_0x0001078b62e0(*(undefined8 *)(param_1 + 0x20));
  func_0x0001078af888(param_7);
  _glTexSubImage2D(0xde1,0,param_3,param_4,param_5,param_5 >> 0x20,param_7 >> 0x20,param_2,param_6);
  return;
}



/* Entry: 1078b64a0; end: 1078b64a7;  */

void FUN_1078b64a0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDepthRangef_11034b508)(*param_1,param_1[1]);
  return;
}



/* Entry: 1078b66b0; end: 1078b66b3;  */

void FUN_1078b66b0(void)

{
  return;
}



/* Entry: 1078b68f0; end: 1078b6913;  */

undefined8 FUN_1078b68f0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,plVar1,plVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar2);
  func_0x00010bf433e0(puVar2);
  func_0x0001078b6d34();
  func_0x0001078b6d48();
  return param_1;
}



/* Entry: 1078b6be0; end: 1078b6c27;  */

undefined8 * FUN_1078b6be0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e7fc8;
  func_0x0001078b6c4c(param_1 + 3);
  return param_1;
}



/* Entry: 1078b6fb0; end: 1078b7003;  */

void FUN_1078b6fb0(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___MTLCaptureManager_1126d5608;
  func_0x00010c22b7c0(PTR__OBJC_CLASS___MTLCaptureManager_1126d5608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255d60();
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1078b7c18; end: 1078b7c2f;  */

void FUN_1078b7c18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1078b8f34; end: 1078b904b;  */

long * FUN_1078b8f34(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3b != 0) {
      func_0x000104bd35f4();
      plVar4 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar1 = (long *)((long)plVar4 + (param_2[1] - (long)plVar2));
      plVar5 = plVar1;
      for (plVar6 = plVar4; plVar6 != plVar2; plVar6 = plVar6 + 4) {
        lVar7 = plVar6[1];
        lVar3 = *plVar6;
        plVar5[2] = plVar6[2];
        plVar5[1] = lVar7;
        *plVar5 = lVar3;
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        plVar5[3] = plVar6[3];
        plVar5 = plVar5 + 4;
      }
      for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      param_2[1] = plVar1;
      lVar3 = *param_1;
      *param_1 = (long)plVar1;
      param_1[1] = lVar3;
      param_2[1] = lVar3;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return plVar4;
    }
    lVar3 = (long)param_2 << 5;
    __Znwm();
  }
  lVar7 = lVar3 + param_3 * 0x20;
  *param_1 = lVar3;
  param_1[1] = lVar7;
  param_1[2] = lVar7;
  param_1[3] = lVar3 + (long)param_2 * 0x20;
  return param_1;
}



/* Entry: 1078b9a50; end: 1078b9a6b;  */

void FUN_1078b9a50(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078b9a6c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b9b0c; end: 1078b9b3b;  */

void FUN_1078b9b0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e8150;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1078ba030; end: 1078ba053;  */

void FUN_1078ba030(void)

{
  func_0x0001078ba988();
  _CGColorSpaceRelease();
  return;
}



/* Entry: 1078ba5b4; end: 1078ba7c7;  */

void FUN_1078ba5b4(char *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined1 auStack_70 [64];
  
  if ((((((param_2 < 0xc) || (*param_1 != 'R')) || (param_1[1] != 'I')) ||
       ((param_1[2] != 'F' || (param_1[3] != 'F')))) ||
      ((param_1[8] != 'W' || ((param_1[9] != 'E' || (param_1[10] != 'B')))))) ||
     (param_1[0xb] != 'P')) {
    func_0x0001078ba994();
    _CFDataCreateWithBytesNoCopy();
    pcStack_78 = param_1;
    if (param_1 == (char *)0x0) {
      func_0x0001078ba9c4();
    }
    else {
      _CGImageSourceCreateWithData();
      pcStack_80 = param_1;
      if (param_1 == (char *)0x0) {
        func_0x0001078ba9c4();
      }
      else {
        func_0x0001078ba9d0();
        pcStack_88 = param_1;
        if (param_1 == (char *)0x0) {
          func_0x0001078ba9c4();
        }
        else {
          func_0x0001078ba7c8(auStack_70);
          func_0x0001078ba9fc();
          func_0x00010725b5b0(auStack_70);
        }
        func_0x0001078ba548(&pcStack_88);
      }
      func_0x0001078ba56c(&pcStack_80);
    }
    func_0x0001078ba590(&pcStack_78);
  }
  else {
    _objc_autoreleasePoolPush();
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x0001078baa30();
    puVar2 = puVar1;
    func_0x00010b696b1c();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      func_0x0001078ba9c4();
    }
    else {
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1020();
      func_0x0001078ba7c8(auStack_70,puVar2);
      func_0x0001078ba9fc();
      func_0x00010725b5b0(auStack_70);
    }
    func_0x0001078ba9e8();
    _objc_release(puVar1);
    _objc_autoreleasePoolPop(param_1);
  }
  return;
}



/* Entry: 1078bab4c; end: 1078bab83;  */

void FUN_1078bab4c(void)

{
  func_0x000107873ee8();
  return;
}



/* Entry: 1078baff0; end: 1078bb4f7;  */

/* WARNING: Possible PIC construction at 0x0001078bb3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bb3d0) */
/* WARNING: Removing unreachable block (ram,0x0001078bb408) */
/* WARNING: Removing unreachable block (ram,0x0001078bb4d8) */
/* WARNING: Removing unreachable block (ram,0x0001078bb4f0) */
/* WARNING: Removing unreachable block (ram,0x0001078bb3e8) */

undefined ** FUN_1078baff0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined2 *extraout_x8;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x0001078bb6fc();
  *extraout_x8 = 0;
  *(undefined8 *)(extraout_x8 + 4) = 0;
  *(undefined8 *)(extraout_x8 + 8) = 0;
  extraout_x8[0xc] = 1;
  *(undefined8 *)(extraout_x8 + 0x10) = 0;
  *(undefined8 *)(extraout_x8 + 0x14) = 0;
  *(undefined4 *)(extraout_x8 + 0x18) = 0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(**(undefined8 **)(param_1 + 8));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = ((ulong *)*param_2)[1];
  for (uVar11 = *(ulong *)*param_2; uVar11 != uVar3; uVar11 = uVar11 + 0x38) {
    uVar5 = uVar11;
    func_0x000107278484(uVar11,&UNK_10f4102f6);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = uVar11, func_0x000107278484(uVar11,&UNK_10f410308), (uVar5 & 1) == 0)) {
      func_0x000107264c5c(uVar11);
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010bffa180();
      func_0x00010befa120(puVar4);
      func_0x0001078bb6e4();
    }
  }
  func_0x00010befa160(puVar4);
  puVar15 = puVar4;
  func_0x00010bf529e0();
  puVar16 = PTR__kCTFontSizeAttribute_11034a0c0;
  ppuVar12 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186440;
  if (puVar15 == (undefined *)0x0) {
    uStack_c0 = *(undefined8 *)PTR__kCTFontSizeAttribute_11034a0c0;
    ppuStack_140 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186440;
    puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar16;
    _CTFontDescriptorCreateWithAttributes();
    _objc_release(puVar16);
  }
  else {
    puVar6 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = puVar4;
    func_0x00010bf529e0(puVar4);
    puVar15 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
    puVar8 = puVar15;
    _CFArrayCreateMutable(puVar15,puVar7,PTR__kCFTypeArrayCallBacks_11034ac10);
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    puStack_198 = puVar8;
    func_0x00010bf529e0(puVar4);
    puVar7 = puVar4;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf52a60();
    puVar16 = *(undefined **)puVar16;
    uVar17 = *(undefined8 *)PTR__kCTFontNameAttribute_11034a0b0;
    if (puVar9 != (undefined *)0x0) {
      lVar13 = *plStack_b0;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_b0 != lVar13) {
            _objc_enumerationMutation(puVar7);
          }
          uStack_148 = *(undefined8 *)(lStack_b8 + (long)puVar14 * 8);
          ppuStack_150 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186440;
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_160 = puVar16;
          uStack_158 = uVar17;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          _CTFontDescriptorCreateWithAttributes();
          puStack_178 = puVar10;
          _CFArrayAppendValue(puVar8);
          func_0x0001078bb51c(&puStack_178);
          func_0x0001078bb6e4();
          puVar14 = puVar14 + 1;
        } while (puVar14 < puVar9);
        puVar9 = puVar7;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    uStack_168 = *(undefined8 *)PTR__kCTFontCascadeListAttribute_11034a078;
    ppuStack_190 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186440;
    puStack_188 = puVar6;
    puStack_180 = puVar8;
    puStack_178 = puVar16;
    uStack_170 = uVar17;
    func_0x0001078bb718();
    _CFDictionaryCreate();
    puStack_1a0 = puVar15;
    _CTFontDescriptorCreateWithAttributes();
    func_0x0001078bafa8(&puStack_1a0);
    func_0x0001078bb540(&puStack_198);
  }
  _objc_release(puVar4);
  _CTFontCreateWithFontDescriptor(0,puVar15,0);
  puStack_178 = puVar15;
  if (puVar15 != (undefined *)0x0) {
    *extraout_x8 = (short)param_3;
    func_0x0001078bab84(&ppuStack_140,param_3,puVar15,extraout_x8 + 0x10);
    uVar1 = *(uint *)(extraout_x8 + 0x10);
    ppuVar12 = (undefined **)(ulong)uVar1;
    iVar2 = *(int *)(extraout_x8 + 0x12);
    func_0x0001073c802c(&uStack_c0,*(undefined8 *)(extraout_x8 + 0x10));
    func_0x0001073c81ec(extraout_x8 + 4,&uStack_c0);
    func_0x0001073c7fd0(&uStack_c0);
    for (uVar11 = 0; uVar11 != iVar2 * uVar1; uVar11 = uVar11 + 1) {
      *(undefined1 *)(*(long *)(extraout_x8 + 8) + uVar11) =
           *(undefined1 *)(lStack_138 + (ulong)(uint)((int)uVar11 << 2) + 3);
    }
    func_0x00010724e5f4(&ppuStack_140);
  }
  func_0x0001078bb6d8(&puStack_178);
  _CFRelease();
  return ppuVar12;
}



/* Entry: 1078bb7a8; end: 1078bb803; +[MGLNativeNetworkManager testSessionConfiguration] */

void FUN_1078bb7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  func_0x00010bf6a380(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215ba0(0x403e000000000000);
  func_0x00010c1a4fa0(puVar1,param_2,8);
  func_0x00010c1ebb00(puVar1,param_2,1);
  func_0x00010c21b040(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1078bba20; end: 1078bba37; -[MGLNativeNetworkManager delegate] */

void FUN_1078bba20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1078bbe00; end: 1078bbe2b;  */

void FUN_1078bbe00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init();
  uVar1 = puRam0000000113726a00;
  puRam0000000113726a00 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1078bc000; end: 1078bc02f;  */

void FUN_1078bc000(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv();
  func_0x0001078bc28c(param_1 + 0x40,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 1078bc128; end: 1078bc15f;  */

void FUN_1078bc128(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long unaff_x19;
  
  func_0x0001078bd6f8();
  *(undefined4 *)(unaff_x19 + 0x70) = param_2;
  *(undefined4 *)(unaff_x19 + 0x74) = param_3;
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc248; end: 1078bc28b;  */

void FUN_1078bc248(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0xa8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  __ZNSt3__15mutex4lockEv(param_1);
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 1078bc5c4; end: 1078bc5e7;  */

void FUN_1078bc5c4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078bc5e8(&uStack_11,param_1);
  return;
}



/* Entry: 1078bc728; end: 1078bc74b;  */

void FUN_1078bc728(void)

{
  func_0x0001078bd740();
  func_0x000107874c84();
  return;
}



/* Entry: 1078bcb9c; end: 1078bcbdb;  */

long * FUN_1078bcb9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x0001078bd7b4();
  }
  return param_1;
}



/* Entry: 1078bced8; end: 1078bcefb;  */

undefined8 FUN_1078bced8(undefined8 param_1)

{
  func_0x0001078bcefc(param_1,0);
  return param_1;
}



/* Entry: 1078bd100; end: 1078bd1a3;  */

void FUN_1078bd100(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1078bd2f4; end: 1078bd337;  */

void FUN_1078bd2f4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1078bd554; end: 1078bd5d7;  */

void FUN_1078bd554(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  
  if ((bRam0000000113726a50 & 1) == 0) {
    lVar1 = 0x113726a50;
    ___cxa_guard_acquire();
    if ((int)lVar1 != 0) {
      func_0x0001078bd6e8();
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      func_0x0001078bd660(&PTR_DAT_1109e82f0);
    }
  }
  lVar1 = lRam0000000113726a48;
  *param_1 = uRam0000000113726a40;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1078bd874; end: 1078bda73;  */

void FUN_1078bd874(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  if ((uint)((long)(param_2[5] - param_2[4]) / 0x2c) <= param_3) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  func_0x0001078bdb08(&lStack_60,param_2 + 1,0);
  func_0x00010830ad7c(&lStack_70,lStack_60);
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109e8340;
  puStack_68 = puVar4 + 3;
  *puStack_68 = &PTR_DAT_110a271f0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[6] = lStack_70;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_58 = puStack_68;
  puStack_50 = puVar4;
  func_0x0001003a8180(puVar4 + 4,&puStack_58);
  func_0x0001003a90c4(&puStack_58);
  func_0x000106f47184(&lStack_70);
  if (lStack_60 != 0) {
    piVar1 = (int *)(lStack_60 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001083b8df0();
  lVar5 = lStack_60;
  func_0x00010833e128();
  if (lVar5 == 0) {
    func_0x0001078be094();
  }
  else {
    puStack_58 = (undefined8 *)CONCAT44(puStack_58._4_4_,1);
    puStack_50 = (undefined8 *)0x0;
    uStack_44 = 0xffffffff;
    uVar8 = *param_2;
    puVar4 = param_2 + 1;
    uStack_48 = param_3;
    func_0x0001078bdb50(puVar4);
    func_0x00010821bce4(uVar8,param_2 + 1,lVar5,puVar4,&puStack_58);
    func_0x0001078be094();
    if ((int)uVar8 == 0) {
      *param_1 = puStack_68;
      puStack_68 = (undefined8 *)0x0;
      uVar6 = 1;
      goto LAB_1078bda14;
    }
  }
  uVar6 = 0;
  *(undefined1 *)param_1 = 0;
LAB_1078bda14:
  *(undefined1 *)(param_1 + 1) = uVar6;
  func_0x0001078bdb94(&puStack_68);
  func_0x000106f471d4(&lStack_60);
  return;
}



/* Entry: 1078bdbb8; end: 1078bdbc3;  */

void FUN_1078bdbb8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078bdfbc; end: 1078be00f;  */

void FUN_1078bdfbc(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078be09c();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 1078be21c; end: 1078be2df;  */

void FUN_1078be21c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  code *pcVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *puVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar11;
  int extraout_w11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  ulong uStack_238;
  long lStack_230;
  undefined1 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1b0 [56];
  undefined8 uStack_178;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [56];
  long lStack_c0;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x0001078bf500();
  lVar9 = *param_3;
  lStack_100 = param_3[1];
  lStack_108 = lVar9;
  uStack_38 = extraout_x8;
  if (lStack_100 != 0) {
    do {
      func_0x0001078bf55c();
      lVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x000104c2fe00(auStack_f8,*(long *)(lVar9 + 0x330) + 0x1c8);
  FUN_1078bf398(&lStack_c0,auStack_f8);
  plVar7 = &lStack_c0;
  lVar9 = 1;
  func_0x0001077ddc48(param_1);
  func_0x0001074730f4(auStack_b8);
  func_0x000104c2f714(auStack_f8);
  func_0x0001078be164();
  func_0x0001078bf4d4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074730f4(auStack_b8);
  func_0x000104c2f714(auStack_f8);
  func_0x0001078be164(&lStack_108);
  func_0x0001078bf554();
  func_0x0001078bf500();
  lVar15 = *plVar7;
  lStack_250 = plVar7[1];
  lStack_258 = lVar15;
  uStack_178 = extraout_x8_02;
  if (lStack_250 != 0) {
    do {
      func_0x0001078bf580();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(auStack_1b0,*(long *)(lVar15 + 0x330) + 0x1c8);
  lVar9 = lVar9 + 0x38;
  puVar8 = auStack_1b0;
  func_0x0001078be7f4();
  if ((lVar9 == 0) || (*(long *)(puVar8 + 0x38) == 0)) {
    func_0x00010724ef84(&lStack_220,auStack_1b0);
    func_0x0001004c3cd0(&lStack_1e8,&UNK_10f433c6a,&lStack_220);
    extraout_x8_01[1] = lStack_1e0;
    *extraout_x8_01 = lStack_1e8;
    extraout_x8_01[2] = lStack_1d8;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    lStack_1e8 = 0;
    *(undefined4 *)(extraout_x8_01 + 4) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_220);
  }
  else {
    func_0x000104c2f64c(&lStack_1e8);
    lStack_230 = lVar15 + 0x208;
    uStack_228 = 1;
    func_0x00010724e404();
    lVar9 = *(long *)(lVar15 + 0x330);
    if (lVar9 != 0) {
      if (*(long *)(lVar9 + 8) == 0) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          do {
            func_0x0001078bf580();
          } while (extraout_w10_01 != 0);
        }
      }
      else {
        func_0x0001003ae9f0(&lStack_220);
        if (lStack_220 == 0) {
          lVar9 = 0;
          lStack_240 = 0;
          uStack_238 = 0;
        }
        else {
          uStack_238 = lStack_218;
          lStack_240 = lVar9;
          if (lStack_218 != 0) {
            do {
              func_0x0001078bf580();
            } while (extraout_w10_00 != 0);
          }
        }
        func_0x0001003a90c4(&lStack_220);
      }
    }
    lStack_240 = 0;
    uStack_238 = 0;
    func_0x0001078be830(&lStack_240);
    func_0x0001077805c4(&lStack_220,*(undefined8 *)(lVar15 + 0x2b0));
    func_0x000104c2f1f0(&lStack_1e8,&lStack_220);
    func_0x000104c2f714(&lStack_220);
    func_0x00010724e49c(&lStack_230);
    uVar19 = *(undefined4 *)(lVar15 + 800);
    puVar1 = (ulong *)(lVar9 + 0x210);
    uVar4 = *(ulong *)(lVar9 + 0x210);
    if (uVar4 == 0) {
      uVar13 = *(undefined8 *)(puVar8 + 0x38);
      uVar5 = 8;
      __Znwm(8);
      func_0x0001078bd81c(uVar5,uVar13);
      lStack_220 = 0;
      func_0x0001078be880(puVar1,uVar5);
      func_0x0001078be8a8(&lStack_220);
      uVar4 = *puVar1;
    }
    func_0x0001078bda74(uVar19);
    if ((uVar4 >> 0x20 & 1) == 0) {
      func_0x00010002b838(&lStack_220,&UNK_10f433c8d);
      func_0x0001078bf530();
    }
    else {
      lStack_230 = lVar9 + 0x218;
      uStack_228 = 1;
      func_0x0001072ab574();
      puVar14 = (undefined8 *)(lVar9 + 0x260);
      puVar10 = puVar14;
      puVar6 = puVar14;
      while( true ) {
        puVar11 = (undefined8 *)*puVar10;
        iVar12 = (int)uVar4;
        if (puVar11 == (undefined8 *)0x0) break;
        lVar15 = 8;
        if (iVar12 <= *(int *)(puVar11 + 4)) {
          lVar15 = 0;
        }
        puVar10 = (undefined8 *)((long)puVar11 + lVar15);
        if (iVar12 <= *(int *)(puVar11 + 4)) {
          puVar6 = puVar11;
        }
      }
      if ((puVar14 == puVar6) ||
         (in_ZR = *(int *)(puVar6 + 4) == iVar12, iVar12 < *(int *)(puVar6 + 4))) {
        func_0x0001078986fc(&lStack_230);
        func_0x0001078bd86c(&lStack_240,*puVar1,uVar4);
        in_ZR = (char)uStack_238 == '\x01';
        if ((bool)in_ZR) {
          func_0x000107898738(&lStack_230);
          if ((uStack_238 & 1) == 0) goto code_r0x0001078be724;
          func_0x00010811e74c(*(undefined8 *)(lVar9 + 0x1b0),&lStack_240);
          uVar5 = *(undefined8 *)(lVar9 + 0x1b8);
          fVar20 = *(float *)(lVar9 + 0x208);
          fVar21 = *(float *)(lVar9 + 0x20c);
          func_0x000107473514(&lStack_220);
          uStack_248 = 0;
          func_0x0001078d3484(extraout_x8_01,uVar5,&lStack_1e8,lVar9,
                              (ulong)(uint)(int)fVar20 | 0x100000000,
                              (ulong)(uint)(int)fVar21 | 0x100000000,&lStack_220,&uStack_248);
          func_0x0001073c5f18(&lStack_220);
          in_ZR = (int)extraout_x8_01[4] == 1;
          if ((bool)in_ZR) {
            lStack_220 = CONCAT44(lStack_220._4_4_,iVar12);
            lVar18 = extraout_x8_01[1];
            lVar17 = *extraout_x8_01;
            lVar16 = extraout_x8_01[3];
            lVar15 = extraout_x8_01[2];
            lStack_210 = extraout_x8_01[1];
            *extraout_x8_01 = 0;
            extraout_x8_01[1] = 0;
            lStack_200 = extraout_x8_01[3];
            extraout_x8_01[2] = 0;
            extraout_x8_01[3] = 0;
            puVar10 = (undefined8 *)*puVar14;
            puVar11 = puVar14;
            lStack_218 = lVar17;
            lStack_208 = lVar15;
            if ((undefined8 *)*puVar14 != (undefined8 *)0x0) {
              do {
                while( true ) {
                  puVar6 = puVar10;
                  iVar2 = *(int *)(puVar6 + 4);
                  in_ZR = iVar2 == iVar12;
                  puVar11 = puVar6;
                  if (iVar2 <= iVar12) break;
                  puVar10 = (undefined8 *)*puVar6;
                  puVar14 = puVar6;
                  if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto code_r0x0001078be628;
                }
                if (iVar12 <= iVar2) goto code_r0x0001078be6a4;
                puVar10 = (undefined8 *)puVar6[1];
              } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
              puVar14 = puVar6 + 1;
            }
code_r0x0001078be628:
            puVar6 = (undefined8 *)0x48;
            __Znwm();
            *(int *)(puVar6 + 4) = iVar12;
            lStack_218 = 0;
            lStack_210 = 0;
            puVar6[8] = lVar16;
            puVar6[7] = lVar15;
            puVar6[6] = lVar18;
            puVar6[5] = lVar17;
            lStack_208 = 0;
            lStack_200 = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = puVar11;
            *puVar14 = puVar6;
            if (**(long **)(lVar9 + 600) != 0) {
              *(long *)(lVar9 + 600) = **(long **)(lVar9 + 600);
            }
            func_0x00010002c5b0(*(undefined8 *)(lVar9 + 0x260),puVar6);
            *(long *)(lVar9 + 0x268) = *(long *)(lVar9 + 0x268) + 1;
code_r0x0001078be6a4:
            func_0x000107470508(&lStack_218);
            func_0x000107473200(extraout_x8_01);
            func_0x0001078bf5a0();
            goto code_r0x0001078be6b8;
          }
        }
        else {
          func_0x00010002b838(&lStack_220,&UNK_10f433ca7);
          func_0x0001078bf530();
        }
        func_0x0001078bf5a0();
      }
      else {
code_r0x0001078be6b8:
        func_0x000107471ec0(extraout_x8_01,puVar6 + 5);
        *(undefined4 *)(extraout_x8_01 + 4) = 1;
      }
      func_0x00010735fc14(&lStack_230);
    }
    func_0x0001078be8ec(lVar9);
    func_0x000104c2f714(&lStack_1e8);
  }
  func_0x000104c2f714(auStack_1b0);
  func_0x0001078be164(&lStack_258);
  func_0x0001078bf4d4(uStack_178);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
code_r0x0001078be724:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1078be72c);
  (*pcVar3)();
}



/* Entry: 1078be8f8; end: 1078be91f;  */

long FUN_1078be8f8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078bec4c; end: 1078bec57;  */

void FUN_1078bec4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bee20; end: 1078bee2b;  */

void FUN_1078bee20(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078bef80; end: 1078befbb;  */

/* WARNING: Possible PIC construction at 0x0001078bef98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bef9c) */
/* WARNING: Removing unreachable block (ram,0x0001078befb8) */
/* WARNING: Removing unreachable block (ram,0x0001078befb0) */
/* WARNING: Removing unreachable block (ram,0x0001078bf524) */

void FUN_1078bef80(undefined8 param_1)

{
  undefined1 uStack_51;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x0001078bf4e8();
  uStack_48 = 0x1078bef9c;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001078befdc(auStack_38,&uStack_51,param_1);
  return;
}



/* Entry: 1078bf0f8; end: 1078bf10b;  */

void FUN_1078bf0f8(void)

{
  func_0x0001078bf114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bf274; end: 1078bf29b;  */

long FUN_1078bf274(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001078bf29c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078bf398; end: 1078bf3bf;  */

long FUN_1078bf398(long param_1)

{
  func_0x0001078bf3c0(param_1 + 8);
  return param_1;
}



/* Entry: 1078c1614; end: 1078c163b;  */

long FUN_1078c1614(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078c2088; end: 1078c224f;  */

void FUN_1078c2088(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_80;
  undefined1 uStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar7 = param_1;
  func_0x0001078c5bdc();
  plVar6 = (long *)(lVar7 + 0x98);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  plStack_60 = plVar6;
  uStack_48 = extraout_x8;
  func_0x00010724e404(plVar6);
  lVar7 = *(long *)(param_1 + 0x140);
  func_0x00010724e49c(&plStack_60);
  if (lVar7 == 0) {
    uStack_78 = 1;
    plStack_80 = plVar6;
    func_0x000107279a5c(plVar6);
    if (*(long *)(param_1 + 0x140) == 0) {
      lVar7 = *(long *)(param_1 + 0x90);
      uStack_58 = 1;
      puVar4 = (undefined8 *)0x228;
      __Znwm();
      plVar8 = puVar4 + 1;
      *plVar8 = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_DAT_1109e8668;
      plVar6 = puVar4 + 3;
      plStack_70 = *(long **)(lVar7 + 0x18);
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_50 = puVar4;
      func_0x000108122a10(plVar6,&plStack_70);
      func_0x000107475310(&plStack_70);
      puVar4[3] = &PTR_DAT_1109e86b8;
      puVar4[0x38] = param_1;
      puVar4[0x39] = lVar7;
      *(undefined1 *)((long)puVar4 + 0x1fc) = 0;
      *(undefined1 *)(puVar4 + 0x40) = 0;
      *(undefined1 *)((long)puVar4 + 0x204) = 0;
      puVar4[0x3b] = 0;
      puVar4[0x3a] = 0;
      puVar4[0x3d] = 0;
      puVar4[0x3c] = 0;
      *(undefined8 *)((long)puVar4 + 0x1f1) = 0;
      *(undefined8 *)((long)puVar4 + 0x1e9) = 0;
      puVar4[0x42] = 0;
      puVar4[0x41] = 0;
      puVar4[0x44] = 0;
      puVar4[0x43] = 0;
      puStack_50 = (undefined8 *)0x0;
      if ((puVar4[5] == 0) || (in_ZR = *(long *)(puVar4[5] + 8) == -1, (bool)in_ZR)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_70 = plVar6;
        puStack_68 = puVar4;
        func_0x0001003a8180(puVar4 + 4,&plStack_70);
        func_0x0001003a90c4(&plStack_70);
      }
      func_0x0001078c2284(&plStack_60);
      (**(code **)(*plVar6 + 0x20))(plVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x140);
      *(long **)(param_1 + 0x140) = plVar6;
      func_0x0001078c3de4(uVar5);
      func_0x0001078c3de4(0);
    }
    func_0x000107279ee0(&plStack_80);
  }
  func_0x0001078c5b3c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001078c3de4(plVar6);
    func_0x000107279ee0();
    func_0x0001078c5cc8();
    return;
  }
  return;
}



/* Entry: 1078c2360; end: 1078c2beb;  */

/* WARNING: Possible PIC construction at 0x0001078c29a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c29a8) */

void FUN_1078c2360(long param_1)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong unaff_x23;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  ulong uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 in_d3;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  ulong uStack_2d8;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  uint uStack_218;
  undefined1 uStack_214;
  uint uStack_210;
  undefined1 uStack_20c;
  undefined1 auStack_208 [24];
  char cStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [8];
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  int iStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_b8;
  
  lVar10 = param_1;
  func_0x0001078c5bdc();
  lVar13 = *(long *)(lVar10 + 0x1a8);
  pfVar2 = *(float **)(lVar10 + 0x1b0);
  uStack_214 = 0;
  uStack_210 = uStack_210 & 0xffffff00;
  uStack_20c = 0;
  auStack_208[0] = 0;
  cStack_1f0 = '\0';
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_21f = 0;
  uStack_218 = uStack_218 & 0xffffff00;
  uStack_227 = 0;
  uStack_220 = 0;
  uStack_198 = 0;
  lStack_1a0 = 0;
  lStack_188 = 0;
  lStack_190 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_180 = lVar13 + 8;
  uStack_170 = 0;
  uStack_178 = 0x3f800000;
  uStack_160 = 0;
  uStack_168 = 0x3f800000;
  uStack_158 = CONCAT44(uStack_158._4_4_,0x3f800000);
  uStack_b8 = extraout_x8;
  func_0x0001078c6018();
  fVar27 = 1.0;
  if (*(char *)(lVar13 + 0x28) == '\0') {
    fVar27 = *pfVar2;
  }
  uVar12 = (ulong)(uint)*(float *)(lVar13 + 0x30);
  uStack_218 = (uint)(fVar27 * *(float *)(lVar13 + 0x2c));
  uStack_210 = (uint)(fVar27 * *(float *)(lVar13 + 0x30));
  uStack_214 = uStack_218 != 0;
  uStack_20c = uStack_210 != 0;
  uVar16 = (ulong)(uint)fVar27;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_1c8,lVar13 + 0x38);
  if (-1 < (char)bStack_1b1) {
    uStack_1c0 = (ulong)bStack_1b1;
  }
  if (uStack_1c0 != 0) {
    func_0x0001078bbb08(auStack_208,auStack_1c8);
  }
  func_0x0001078c60e0();
  uStack_2d8 = 0x400921fb54442d18;
  while (uVar15 = uStack_238, uVar28 = uStack_240, puVar7 = PTR___ZSt7nothrow_1103469d8,
        lStack_188 != 0) {
    lStack_188 = lStack_188 + -1;
    puVar14 = (undefined8 *)
              (*(long *)(lStack_1a8 + ((ulong)(lStack_190 + lStack_188) / 0x55) * 8) +
              ((ulong)(lStack_190 + lStack_188) % 0x55) * 0x30);
    plVar21 = (long *)*puVar14;
    fVar42 = *(float *)(puVar14 + 2);
    fVar43 = *(float *)((long)puVar14 + 0x1c);
    uVar28 = puVar14[1];
    in_d3 = *(undefined8 *)((long)puVar14 + 0x14);
    uVar17 = puVar14[2];
    uVar29 = puVar14[4];
    fVar22 = *(float *)(puVar14 + 5);
    puVar14 = &uStack_1b0;
    func_0x0001078c30a8();
    if ((undefined8 *)0xa9 < puVar14) {
      __ZdlPv(*(undefined8 *)(lStack_1a0 + -8));
      lStack_1a0 = lStack_1a0 + -8;
    }
    lVar13 = *plVar21;
    fVar40 = *(float *)(lVar13 + 0xd8);
    fVar36 = *(float *)(lVar13 + 0xdc);
    fVar41 = *(float *)(lVar13 + 0xe0);
    fVar37 = *(float *)(lVar13 + 0xe4);
    fVar30 = *(float *)(lVar13 + 0xe8);
    fVar23 = *(float *)(lVar13 + 0xfc);
    fVar32 = *(float *)(lVar13 + 0x100);
    fVar24 = *(float *)(lVar13 + 0x104);
    fVar25 = *(float *)(lVar13 + 0x108);
    fVar35 = *(float *)(lVar13 + 0x10c);
    uVar44 = *(undefined8 *)(lVar13 + 0xec);
    func_0x000107278acc(&uStack_118,lVar13 + 8);
    lVar13 = *plVar21;
    cVar3 = *(char *)(lVar13 + 0xf4);
    cVar4 = *(char *)(lVar13 + 0xf5);
    fVar31 = *(float *)(lVar13 + 0xf8);
    uVar26 = *(undefined4 *)(lVar13 + 0x110);
    lStack_180 = *(long *)(pfVar2 + 6);
    if (lStack_180 != 0) {
      plVar1 = (long *)(lStack_180 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    func_0x0001078c2fc8(&lStack_1d0,&lStack_180);
    fVar33 = (float)uVar44 * fVar23 * fVar27;
    fVar34 = (float)((ulong)uVar44 >> 0x20) * fVar23 * fVar27;
    fVar40 = fVar27 * fVar40 - (fVar41 * 0.5 * fVar33 + fVar33 * 0.5);
    fVar23 = fVar27 * fVar36 - (fVar37 * 0.5 * fVar34 + fVar34 * 0.5);
    fVar36 = (float)(uVar28 >> 0x20);
    fVar37 = (float)((ulong)in_d3 >> 0x20);
    fVar38 = (float)uVar29 + (float)uVar28 * fVar40 + (float)in_d3 * fVar23;
    fVar39 = (float)((ulong)uVar29 >> 0x20) + fVar36 * fVar40 + fVar37 * fVar23;
    fVar41 = (float)in_d3 * 0.0 + (float)uVar28 * 0.0 + fVar38;
    fVar36 = fVar37 * 0.0 + fVar36 * 0.0 + fVar39;
    func_0x000107475310(&lStack_180);
    func_0x00010811e790(lStack_1d0,3);
    uStack_1d8 = CONCAT44(fVar34 + fVar36,fVar33 + fVar41);
    uStack_1e0 = CONCAT44(fVar36,fVar41);
    func_0x00010811fa78(lStack_1d0,&uStack_1e0);
    if (cVar3 != '\0') {
      func_0x0001081204fc(0xbf800000,lStack_1d0);
    }
    if (cVar4 != '\0') {
      func_0x000108120568(0xbf800000,lStack_1d0);
    }
    uVar16 = uStack_2d8;
    func_0x0001081205c0((float)(((double)((long)fVar31 % 0x168) * 3.141592653589793) / 180.0),
                        lStack_1d0);
    uVar12 = (ulong)(uint)fVar25;
    func_0x00010811e7a8(lStack_1d0,
                        (ulong)(uint)(int)(fVar32 * 255.0) << 0x10 |
                        (ulong)(uint)(int)(fVar35 * 255.0) << 0x18 |
                        (ulong)(uint)(int)(fVar24 * 255.0) << 8 | (ulong)(uint)(int)(fVar25 * 255.0)
                       );
    func_0x00010811f914(uVar26,lStack_1d0);
    func_0x000104c2fe00(&lStack_180,&uStack_118);
    if ((lStack_1d0 != 0) && (*(long *)(lStack_1d0 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_1d0 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_148 = lStack_1d0;
    iStack_140 = (int)fVar30;
    uVar15 = (ulong)(uint)fVar27;
    func_0x0001078c2c50(&uStack_1e0);
    uStack_138 = uVar15;
    uStack_130 = uVar12;
    uStack_128 = uVar16;
    uStack_120 = in_d3;
    if (uStack_238 < uStack_230) {
      func_0x0001078c3378(uStack_238,&lStack_180);
      uVar12 = uStack_238 + 0x68;
    }
    else {
      lVar13 = uStack_238 - uStack_240;
      uVar12 = lVar13 / 0x68 + 1;
      if (unaff_x23 < uVar12) {
        FUN_1078c33b0();
LAB_1078c2b50:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1078c2b54);
        (*pcVar8)();
      }
      uVar18 = (long)(uStack_230 - uStack_240) / 0x68;
      uVar15 = uVar18 * 2;
      if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
        uVar15 = uVar12;
      }
      if (0x13b13b13b13b13a < uVar18) {
        uVar15 = unaff_x23;
      }
      if (uVar15 == 0) {
        lVar10 = 0;
      }
      else {
        if (unaff_x23 < uVar15) {
          func_0x000104bd35f4();
          goto LAB_1078c2b50;
        }
        lVar10 = uVar15 * 0x68;
        __Znwm();
      }
      lVar13 = lVar10 + lVar13;
      func_0x0001078c3378(lVar13,&lStack_180);
      uVar19 = uStack_238;
      uVar18 = uStack_240;
      uVar20 = lVar13 + ((long)(uStack_238 - uStack_240) / -0x68) * 0x68;
      uVar12 = uVar20;
      for (unaff_x23 = uStack_240; unaff_x23 != uVar19; unaff_x23 = unaff_x23 + 0x68) {
        func_0x0001078c60b8();
        uVar12 = uVar12 + 0x68;
      }
      func_0x0001078c60e0(uVar12);
      for (; uVar18 != uVar19; uVar18 = uVar18 + 0x68) {
        func_0x0001078c2c24(uVar18);
      }
      uVar12 = lVar13 + 0x68;
      uStack_230 = lVar10 + uVar15 * 0x68;
      bVar6 = uStack_240 != 0;
      uStack_240 = uVar20;
      if (bVar6) {
        uStack_238 = uVar12;
        __ZdlPv();
      }
    }
    uStack_238 = uVar12;
    func_0x0001078c2c24(&lStack_180);
    func_0x00010813fee4(&uStack_228,lStack_1d0 + 0xc0);
    lVar10 = plVar21[2];
    uVar12 = uVar28;
    for (lVar13 = plVar21[1]; lVar13 != lVar10; lVar13 = lVar13 + 0x20) {
      uStack_168 = CONCAT44(fVar43,fVar37);
      uStack_158 = CONCAT44(uStack_158._4_4_,fVar22 + fVar42 * fVar40 + fVar43 * fVar23);
      uVar12 = uVar28;
      lStack_180 = lVar13;
      uStack_178 = uVar28;
      uStack_170 = uVar17;
      uStack_160 = CONCAT44(fVar39,fVar38);
      func_0x0001078c6018();
    }
    func_0x0001078bedfc(&lStack_1d0);
    func_0x00010726b164(&uStack_118);
  }
  lStack_180 = 0;
  uStack_178 = 0;
  uVar18 = (long)(uStack_238 - uStack_240) / 0x68;
  uVar19 = uVar18;
  if ((long)(uStack_238 - uStack_240) < 1) {
    uVar19 = 0;
  }
  else {
    for (; uVar19 != 0; uVar19 = uVar19 >> 1) {
      lVar13 = uVar19 * 0x68;
      __ZnwmRKSt9nothrow_t(lVar13,puVar7);
      if (lVar13 != 0) goto LAB_1078c2944;
    }
    lVar13 = 0;
LAB_1078c2944:
    uStack_118 = 0;
    uStack_110 = uVar19;
    func_0x0001078c3694(&lStack_180,lVar13);
    uStack_178 = uVar19;
    func_0x0001078c33c4(&uStack_118);
  }
  func_0x0001078c33e8(uVar28,uVar15,uVar18,lStack_180,uVar19);
  func_0x0001078c33c4(&lStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  func_0x0001078c3004(&uStack_1b0);
  uVar28 = uStack_240;
  *(ulong *)(param_1 + 0x1d8) = CONCAT71(uStack_21f,uStack_220);
  *(ulong *)(param_1 + 0x1d0) = CONCAT71(uStack_227,uStack_228);
  puVar11 = (ulong *)(param_1 + 0x1b8);
  if (*(long *)(param_1 + 0x1b8) == 0) {
    *(ulong *)(param_1 + 0x1c0) = uStack_238;
    *puVar11 = uStack_240;
    *(ulong *)(param_1 + 0x1c8) = uStack_230;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_240 = 0;
    if (cStack_1f0 == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_180,auStack_208);
      uVar28 = (ulong)**(uint **)(param_1 + 0x1b0);
      func_0x0001078c2c50(param_1 + 0x1d0);
      uStack_168 = uVar28;
      uStack_160 = uVar12;
      uStack_158 = uVar16;
      uStack_150 = in_d3;
      func_0x0001074c5cd0(param_1 + 0x1f0,&lStack_180);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_180);
    }
    fVar22 = (float)uVar12;
    fVar27 = (float)uVar28;
    func_0x0001078bee98(&lStack_180,param_1 + 0x18);
    puVar14 = (undefined8 *)(param_1 + 0x208);
    func_0x0001078beedc(puVar14,&lStack_180);
    func_0x0001078bee2c(&lStack_180);
    uVar17 = *(undefined8 *)(param_1 + 0x208);
    func_0x0001078c60c0();
    func_0x0001078c60c0();
    lStack_180 = 0;
    uStack_178 = CONCAT44(fVar22 + 0.0,fVar27 + 0.0);
    func_0x00010811fa78(uVar17,&lStack_180);
    func_0x000108120484(-*(float *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x208));
    func_0x0001081204c0(-*(float *)(param_1 + 0x1d4),*(undefined8 *)(param_1 + 0x208));
    lVar10 = *(long *)(param_1 + 0x1c0);
    for (lVar13 = *(long *)(param_1 + 0x1b8); uVar9 = lVar13 == lVar10, !(bool)uVar9;
        lVar13 = lVar13 + 0x68) {
      uVar17 = *puVar14;
      lStack_180 = *(long *)(lVar13 + 0x38);
      if ((lStack_180 != 0) && (*(long *)(lStack_180 + 0x10) != 0)) {
        plVar21 = (long *)(*(long *)(lStack_180 + 0x10) + 8);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = *plVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x00010811f0b8(uVar17,&lStack_180);
      func_0x0001078bee2c(&lStack_180);
    }
    func_0x000108122b44(param_1,puVar14,1);
    func_0x0001078c60c0();
    func_0x000108122c38(param_1);
    func_0x0001078c2c74(&uStack_240);
    func_0x0001078c5b3c(uStack_b8);
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001078c6108();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar11 = &uStack_240;
    func_0x0001078c2c74();
    func_0x0001078c5cc8();
  }
  uVar12 = puVar11[1];
  uVar16 = *puVar11;
  while (uVar12 != uVar16) {
    uVar12 = uVar12 - 0x68;
    func_0x0001078c2c24();
  }
  puVar11[1] = uVar16;
  return;
}



/* Entry: 1078c30c4; end: 1078c3173;  */

void FUN_1078c30c4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  func_0x0001078c5e7c();
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == *(undefined8 **)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    uVar2 = unaff_x19[1];
    bVar1 = uVar2 == uVar4;
    if (uVar4 < uVar2) {
      func_0x0001078c5f74();
      if (!bVar1) {
        func_0x0001078c6024();
        uVar2 = unaff_x19[1];
      }
      puVar3 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar2 + unaff_x23 * 8;
    }
    else {
      uVar2 = (long)((long)puVar3 - uVar4) >> 2;
      if ((long)puVar3 - uVar4 == 0) {
        uVar2 = 1;
      }
      func_0x0001078c3174(&uStack_70,uVar2,uVar2 >> 2);
      func_0x0001078c3230(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar2 = unaff_x19[1];
      uVar4 = *unaff_x19;
      uVar6 = unaff_x19[3];
      uVar5 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar4;
      uStack_68 = uVar2;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      func_0x0001078c31f0(&uStack_70);
      puVar3 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar3 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar3 + 1);
  return;
}



/* Entry: 1078c33b0; end: 1078c33c3;  */

undefined * FUN_1078c33b0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x0001078c3694();
  return puVar1;
}



/* Entry: 1078c3da8; end: 1078c3de3;  */

void FUN_1078c3da8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001078c5e98();
  func_0x000104c2f1f0();
  func_0x0001078bef50(unaff_x20 + 0x38,unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  return;
}



/* Entry: 1078c42cc; end: 1078c4337;  */

long FUN_1078c42cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001078c4308();
    lVar2 = uVar1 + 0x88;
  }
  else {
    lVar2 = param_1;
    func_0x0001078c4338();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x88;
}



/* Entry: 1078c4640; end: 1078c4673;  */

void FUN_1078c4640(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001078c4674();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1078c47e8; end: 1078c4887;  */

long FUN_1078c47e8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uStack_39;
  long lStack_38;
  
  func_0x0001078c4888(param_1,&UNK_10f433cc4,&UNK_10f433cc4,param_2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = &UNK_10f433cc5;
  func_0x0001078c492c(param_2,&UNK_10f433cc5);
  if (param_2 != 0) {
    lStack_38 = param_1;
    func_0x0001078c4934(puVar1 + 0x38,&lStack_38,&uStack_39);
  }
  return param_1;
}



/* Entry: 1078c55ec; end: 1078c5653;  */

void FUN_1078c55ec(undefined8 param_1)

{
  ulong unaff_x27;
  byte bVar1;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  func_0x0001078c6140();
  func_0x0001078c5dc8();
  do {
    func_0x0001078c5f98();
    for (; unaff_x27 != 0; unaff_x27 = unaff_x27 - 1 & unaff_x27) {
      func_0x0001078c5ea4();
      func_0x0001074083d0();
      if ((int)param_1 != 0) {
        func_0x0001078c6114();
        return;
      }
    }
    bVar1 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar1 & 1) == 0);
  return;
}



/* Entry: 1078c58ec; end: 1078c58f7;  */

void FUN_1078c58ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8750;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078c5acc; end: 1078c5adf;  */

void FUN_1078c5acc(void)

{
  func_0x0001078c5ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078cab74; end: 1078cab7b;  */

void FUN_1078cab74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_40 = lVar1 + 0x1b8;
  uStack_38 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  if (*(long *)(lVar1 + 0x30) != 0) {
    func_0x0001078d1bf8(*(undefined8 *)(lVar1 + 0x28));
    *(undefined8 *)(lVar1 + 0x28) = 0;
    lVar3 = *(long *)(lVar1 + 0x20);
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*(long *)(lVar1 + 0x18) + lVar2 * 8) = 0;
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x128);
  while (lVar2 != lVar1 + 0x130) {
    lVar3 = *(long *)(lVar2 + 0x40);
    func_0x000104c2f714(lVar2);
    func_0x0001078d29c0();
    lVar2 = lVar3;
  }
  *(long *)(lVar1 + 0x128) = lVar1 + 0x130;
  *(long *)(lVar1 + 0x168) = lVar1 + 0xe8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000104c305a0(&lStack_40);
  return;
}



/* Entry: 1078cb570; end: 1078cb643;  */

ulong FUN_1078cb570(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined1 *puVar8;
  ulong uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  ulong uStack_78;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar6 = param_2;
  func_0x0001078d2214();
  uStack_78 = 0;
  plVar4 = (long *)*puVar6;
  uStack_38 = extraout_x8;
  (**(code **)(*plVar4 + 0x18))();
  func_0x000104c2fe00(auStack_70,plVar4);
  puVar5 = &uStack_78;
  puVar7 = auStack_70;
  func_0x0001073f26dc();
  puVar1 = (undefined1 *)param_2[2];
  for (puVar8 = (undefined1 *)param_2[1]; uVar2 = uStack_78, uVar3 = puVar8 == puVar1, !(bool)uVar3;
      puVar8 = puVar8 + 0x20) {
    puVar7 = puVar8;
    FUN_1078cb570();
    uStack_78 = (long)puVar5 + (uStack_78 >> 4) + uStack_78 * 0x1000 + -0x61c8864680b583eb ^
                uStack_78;
  }
  func_0x000104c2f714(auStack_70);
  func_0x0001078d208c(uStack_38);
  if ((bool)uVar3) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_70);
  func_0x0001078d2494();
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(int *)(puVar7 + 0x10) != 0) {
    puStack_88 = &UNK_1078cb644;
    uStack_98 = 0;
    func_0x0001077ab248(&uStack_98,puVar7);
    return uStack_98;
  }
  puStack_88 = &UNK_1078cb644;
  uStack_98 = 0;
  func_0x0001073ca0ec(&uStack_98,puVar7);
  return uStack_98;
}



/* Entry: 1078cd020; end: 1078cd03f;  */

void FUN_1078cd020(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001078cd000();
  }
  return;
}



/* Entry: 1078cd640; end: 1078cdaa3;  */

void FUN_1078cd640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  uint *param_5,long *param_6,long param_7,long param_8,long param_9,long param_10)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  long lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint *apuStack_b0 [2];
  
  lVar19 = *param_6;
  bVar18 = *(byte *)(lVar19 + 0x54);
  if (bVar18 != 2) {
    bVar18 = bVar18 == 1;
  }
  uVar6 = *(byte *)(lVar19 + 0x55) - 1;
  uVar17 = (uVar6 & 0xff) * 4 + 4;
  if (2 < uVar6) {
    uVar17 = 0;
  }
  uVar16 = *(byte *)(lVar19 + 0x56) - 1;
  uVar6 = (uVar16 & 0xff) * 0x10 + 0x20;
  if (4 < uVar16) {
    uVar6 = 0x10;
  }
  uVar7 = (uint)*(byte *)(lVar19 + 0x57);
  apuStack_b0[0] = param_5;
  func_0x0001078ce230();
  uVar8 = (uint)*(byte *)(lVar19 + 0x58);
  func_0x0001078ce230();
  uVar9 = (uint)*(byte *)(lVar19 + 0x59);
  func_0x0001078ce230();
  func_0x0001078d27a8(lVar19 + 0x5c);
  uVar20 = param_1;
  uVar23 = param_2;
  uVar26 = param_3;
  uVar29 = param_4;
  func_0x0001078d27a8(lVar19 + 0x70);
  uVar21 = uVar20;
  uVar24 = uVar23;
  uVar27 = uVar26;
  uVar30 = uVar29;
  func_0x0001078d27a8(lVar19 + 0x84);
  uVar22 = uVar21;
  uVar25 = uVar24;
  uVar28 = uVar27;
  uVar31 = uVar30;
  func_0x0001078d27a8(lVar19 + 0x98);
  uVar16 = 0x10000000;
  if (*(char *)(lVar19 + 0xac) != '\0') {
    uVar16 = 0x20000000;
  }
  cVar2 = *(char *)(lVar19 + 0xad);
  bVar3 = *(byte *)(lVar19 + 0xae);
  cVar4 = *(char *)(lVar19 + 0xaf);
  uVar10 = lVar19 + 0xb0;
  func_0x0001078d268c();
  uVar11 = *param_6 + 0xb8;
  func_0x0001078d268c();
  uVar12 = *param_6 + 0xc0;
  func_0x0001078d268c();
  uVar13 = *param_6 + 200;
  func_0x0001078d268c();
  uVar14 = *param_6 + 0xe0;
  func_0x0001078d268c();
  uVar15 = *param_6 + 0xe8;
  func_0x0001078d268c();
  uVar1 = *(uint *)(*param_6 + 0x100);
  bVar5 = *(byte *)(*param_6 + 0x104);
  *param_5 = (uVar17 | bVar18 | uVar6 | uVar7 << 0x14 | uVar8 << 0x10 | uVar9 << 0x18) +
             (*param_5 & 0xf000ff00);
  func_0x0001078d24f8(param_1);
  func_0x00010811d124();
  func_0x0001078d24f8(param_2);
  func_0x00010811d124();
  func_0x0001078d24f8(param_3);
  func_0x00010811d124();
  func_0x0001078d24f8(param_4);
  func_0x00010811d124();
  func_0x0001078d24f8(uVar20);
  func_0x00010811d1d8();
  func_0x0001078d24f8(uVar23);
  func_0x00010811d1d8();
  func_0x0001078d24f8(uVar26);
  func_0x00010811d1d8();
  func_0x0001078d2310(uVar29);
  func_0x00010811d1d8();
  func_0x0001078d2310(uVar21);
  func_0x00010811d200();
  func_0x0001078d2310(uVar24);
  func_0x00010811d200();
  func_0x0001078d2310(uVar27);
  func_0x00010811d200();
  func_0x0001078d2310(uVar30);
  func_0x00010811d200();
  func_0x0001078d2310(uVar22);
  func_0x00010811d228();
  func_0x0001078d2310(uVar25);
  func_0x00010811d228();
  func_0x0001078d2310(uVar28);
  func_0x00010811d228();
  func_0x0001078d2310(uVar31);
  func_0x00010811d228();
  uVar17 = 0x40000000;
  if (cVar2 != '\x01') {
    uVar17 = 0;
  }
  uVar6 = 0x80000000;
  if (cVar2 != '\x02') {
    uVar6 = uVar17;
  }
  *param_5 = uVar6 | uVar16 | *param_5 & 0xfffffff;
  if (bVar3 != 2) {
    bVar3 = bVar3 == 1;
  }
  bVar18 = 0;
  if (cVar4 != '\0') {
    bVar18 = 4;
  }
  *(byte *)(param_5 + 1) = bVar18 | (byte)param_5[1] & 0xf0 | bVar3;
  if (*(char *)(param_7 + 4) == '\x01') {
    func_0x00010726a954();
    func_0x0001078d2618();
    func_0x00010811d414();
  }
  if (*(char *)(param_8 + 4) == '\x01') {
    func_0x00010726a954();
    func_0x0001078d2618();
    func_0x00010811d438();
  }
  if (uVar14 >> 0x20 != 0) {
    func_0x00010811d45c(apuStack_b0,uVar14 | 0x100000000);
  }
  if (uVar15 >> 0x20 != 0) {
    func_0x00010811d480(apuStack_b0,uVar15 | 0x100000000);
  }
  if (*(char *)(param_9 + 4) == '\x01') {
    func_0x00010726a954();
    func_0x0001078d2618();
    func_0x00010811d4a4();
  }
  if (*(char *)(param_10 + 4) == '\x01') {
    func_0x00010726a954();
    func_0x0001078d2618();
    func_0x00010811d4c8();
  }
  if ((bVar5 & 1) != 0) {
    func_0x00010811d4ec(apuStack_b0,(ulong)uVar1 | 0x100000000);
  }
  if (uVar13 >> 0x20 != 0) {
    func_0x0001078d2b28();
    func_0x00010811d328();
  }
  if (uVar10 >> 0x20 != 0) {
    func_0x0001078d2b28();
    func_0x00010811d250();
  }
  if (uVar12 >> 0x20 != 0) {
    func_0x0001078d2b28();
    func_0x00010811d2f0();
  }
  if (uVar11 >> 0x20 != 0) {
    func_0x0001078d2b28();
    func_0x00010811d2b8();
  }
  return;
}



/* Entry: 1078cde24; end: 1078cdeaf;  */

void FUN_1078cde24(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001078d25ec();
  func_0x0001078d2214();
  uStack_28 = extraout_x8;
  func_0x0001078ce538(auStack_40,1);
  *(undefined8 *)(lStack_30 + 0x10) = 0;
  func_0x0001078d2b34();
  func_0x000108126a7c();
  func_0x0001078d2b14();
  func_0x0001078ce51c();
  func_0x0001078ce614();
  func_0x0001078d2b00();
  (*extraout_x8_00)();
  func_0x0001078d208c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078ce630();
  func_0x0001078d25c0();
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078ce624();
  }
  return;
}



/* Entry: 1078ce1dc; end: 1078ce1ef;  */

void FUN_1078ce1dc(void)

{
  func_0x0001078ce1f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ce39c; end: 1078ce3cb;  */

void FUN_1078ce39c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x58160581605817) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x2e8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e8b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078ce4b4; end: 1078ce4df;  */

void FUN_1078ce4b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001078ce4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1078ce5a8; end: 1078ce5bf;  */

void FUN_1078ce5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078ce740; end: 1078ce78b;  */

undefined8 * FUN_1078ce740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8980;
  func_0x0001074736dc(param_1 + 0x43);
  func_0x0001078bee2c(param_1 + 0x40);
  func_0x0001057f951c(param_1 + 0x3d);
  func_0x0001078ce6c0(param_1 + 0x3a);
  *param_1 = &PTR_DAT_110a255a0;
  func_0x0001078d4914(param_1 + 0x34);
  func_0x000108123684(param_1 + 0x33);
  func_0x00010810071c(param_1 + 0x1d);
  func_0x0001078bee2c(param_1 + 0x1c);
  func_0x000108123524(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1078cec54; end: 1078cec83;  */

undefined8 * FUN_1078cec54(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__115recursive_mutex6unlockEv(*param_1);
  }
  return param_1;
}



/* Entry: 1078cf1f8; end: 1078cf223;  */

undefined8 * FUN_1078cf1f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e8830;
  func_0x0001078cab50(param_1 + 1);
  return param_1;
}



/* Entry: 1078d1814; end: 1078d1873;  */

void FUN_1078d1814(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [32];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    return;
  }
  if (*(int *)(param_1 + 0x68) == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x68) == 3) {
    return;
  }
  if (*(int *)(param_1 + 0x68) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0x68) == 8) {
    lVar4 = *param_2;
    lVar1 = (*(long **)(param_1 + 8))[1];
    for (lVar3 = **(long **)(param_1 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x70) {
      if (*(int *)(lVar3 + 0x68) == 9) {
        lVar2 = lVar3;
        func_0x0001074d2730(lVar3);
        func_0x0001078cf224(auStack_50,lVar2);
        func_0x0001077e90e8(lVar4 + 8,auStack_50);
        func_0x0001078d2a88();
      }
    }
  }
  return;
}



/* Entry: 1078d1b34; end: 1078d1b3f;  */

void FUN_1078d1b34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8a18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d1c74; end: 1078d1c7b;  */

void FUN_1078d1c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d1f08; end: 1078d1f0b;  */

void FUN_1078d1f08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d3408; end: 1078d3433;  */

void FUN_1078d3408(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d4af0();
  if (!(bool)in_ZR) {
    func_0x0001078d49f8();
    func_0x000107475334();
  }
  return;
}



/* Entry: 1078d39e8; end: 1078d3a0b;  */

void FUN_1078d39e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001078d49f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1078d3c08; end: 1078d3c23;  */

void FUN_1078d3c08(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078d3de8; end: 1078d3e0b;  */

void FUN_1078d3de8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001078d49f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1078d3fc8; end: 1078d4037;  */

void FUN_1078d3fc8(void)

{
  func_0x0001078d4ac4();
  func_0x0001078d3c24();
  func_0x0001078d4038();
  func_0x0001078d4aa4();
  func_0x0001078d4abc();
  return;
}



/* Entry: 1078d4310; end: 1078d4367;  */

long FUN_1078d4310(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x0001078d43e0(*param_3,param_1);
    param_1 = param_1 + 0xb0;
    *param_3 = *param_3 + 0xb0;
    lVar1 = lVar1 + 0xb0;
  }
  return lVar1;
}



/* Entry: 1078d4508; end: 1078d452f;  */

void FUN_1078d4508(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x0001078d3a2c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    func_0x0001078d3d24();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001078d4afc();
    func_0x0001078d4590();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
    func_0x00010090c1cc(unaff_x20 + 0x38,unaff_x19 + 0x38);
    return;
  }
  return;
}



/* Entry: 1078d4648; end: 1078d468b;  */

undefined8 FUN_1078d4648(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  func_0x0001078d48a0();
  return uVar1;
}



/* Entry: 1078d495c; end: 1078d497f;  */

void FUN_1078d495c(void)

{
  func_0x0001078d4a98();
  func_0x0001078d4980();
  return;
}



/* Entry: 1078d5088; end: 1078d509b;  */

void FUN_1078d5088(void)

{
  return;
}



/* Entry: 1078d52b8; end: 1078d52df;  */

long FUN_1078d52b8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d53f8; end: 1078d545b;  */

void FUN_1078d53f8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078d5c68; end: 1078d5d63;  */

void FUN_1078d5c68(long param_1)

{
  long unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001078d6cf0();
  if ((0.0 < *(float *)(param_1 + 0x188)) || (0.0 < *(float *)(unaff_x19 + 0x18c))) {
    if ((unaff_x20 != (undefined4 *)0x0) && (*(float *)(param_1 + 0x188) == 0.0)) {
      func_0x00010778196c();
      func_0x0001078d6cbc(*(undefined4 *)(unaff_x19 + 0x18c),*unaff_x20,unaff_x20[1]);
    }
  }
  else if (unaff_x20 != (undefined4 *)0x0) {
    func_0x0001078d6c30();
    if ((int)param_1 == 0) {
      func_0x0001078d6c24();
    }
    else {
      func_0x0001078d6ca8(*(undefined4 *)(unaff_x19 + 0x1a8));
    }
  }
  return;
}



/* Entry: 1078d5eec; end: 1078d5ef3;  */

void FUN_1078d5eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d6c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d60c8; end: 1078d60cf;  */

void FUN_1078d60c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d6c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


