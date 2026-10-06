/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10810f0d4; end: 10810f127;  */

void FUN_10810f0d4(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_4 + 0x14) == '\x01') {
    func_0x00010810f14c();
    *(undefined4 *)(param_3 + 8) = param_1;
    *(undefined4 *)(param_3 + 0xc) = param_2;
  }
  else {
    func_0x00010810f128();
    *(undefined4 *)(param_3 + 8) = param_1;
    *(undefined4 *)(param_3 + 0xc) = param_2;
    uVar1 = *(undefined8 *)((long)param_4 + 0xd);
    uVar2 = *param_4;
    *(undefined8 *)(param_3 + 0x18) = param_4[1];
    *(undefined8 *)(param_3 + 0x10) = uVar2;
    *(undefined8 *)(param_3 + 0x1d) = uVar1;
  }
  return;
}



/* Entry: 10810f128; end: 10810f167;  */

void FUN_10810f128(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  func_0x00010b99d978(puVar1,0x28);
  *puVar1 = 5;
  return;
}



/* Entry: 10810f168; end: 10810f19b;  */

void FUN_10810f168(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108110254();
  FUN_10810f19c();
  *(undefined8 *)(param_1 + 8) = unaff_x20;
  do {
    func_0x0001081101c8();
  } while (extraout_w10 != 0);
  *(undefined1 *)(unaff_x19 + 0x91) = 1;
  return;
}



/* Entry: 10810f19c; end: 10810f1b7;  */

void FUN_10810f19c(undefined8 *param_1)

{
  func_0x00010811019c();
  *param_1 = 7;
  return;
}



/* Entry: 10810f1b8; end: 10810f1e3;  */

void FUN_10810f1b8(long param_1,undefined8 param_2)

{
  int extraout_w10;
  
  FUN_10810f1e4();
  *(undefined8 *)(param_1 + 8) = param_2;
  do {
    func_0x0001081101c8();
  } while (extraout_w10 != 0);
  return;
}



/* Entry: 10810f1e4; end: 10810f1ff;  */

void FUN_10810f1e4(undefined8 *param_1)

{
  func_0x00010811019c();
  *param_1 = 8;
  return;
}



/* Entry: 10810f200; end: 10810f26f;  */

long FUN_10810f200(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0x38;
  if (param_1[1] == param_1[2]) {
    FUN_10810fd88(&lStack_28,param_1,lVar1,1);
  }
  else {
    func_0x00010810f650(lVar1,param_2);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 10810f270; end: 10810f31b;  */

undefined8 * FUN_10810f270(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001132542d8 & 1) == 0) {
    iVar1 = 0x132542d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x70;
      __Znwm();
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0x32aaaba7;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xd] = 0;
      puRam00000001132542d0 = puVar2;
      ___cxa_guard_release(0x1132542d8);
    }
  }
  return puRam00000001132542d0;
}



/* Entry: 10810f31c; end: 10810f323;  */

void FUN_10810f31c(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10810f324; end: 10810f48b;  */

void FUN_10810f324(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                  long param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  plVar3 = *(long **)(param_6 + 8);
  uVar4 = param_1;
  fVar5 = param_2;
  func_0x00010810ef20();
  bVar2 = false;
  if (((float)uVar4 < param_3) && (bVar2 = false, !NAN(fVar5) && !NAN(param_4))) {
    bVar2 = fVar5 < param_4;
  }
  if (bVar2) {
    lVar1 = plVar3[0x18c];
    *(int *)(plVar3 + 0x18c) = (int)lVar1 + 1;
    *(int *)(plVar3[0x188] + 0x58) = *(int *)(plVar3[0x188] + 0x58) + 1;
    fVar6 = param_2;
    func_0x00010833e24c(param_1,plVar3);
    if (param_8 != 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      plStack_b0 = (long *)0x0;
      uStack_80 = 0;
      uStack_70 = 0x4080000000000000;
      uStack_68 = 0;
      FUN_108343500(0);
      fStack_7c = fVar6;
      fStack_78 = param_3;
      fStack_74 = param_4;
      FUN_1083762f4(&plStack_b0,1);
      (**(code **)(*plVar3 + 0xa8))(plVar3,&plStack_b0);
      FUN_108375e94(&plStack_b0);
    }
    func_0x00010833e1e4(-(float)uVar4,-fVar5,plVar3);
    uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x68) >> 0x20) + 0.0,
                         (float)*(undefined8 *)(param_5 + 0x68) + 0.0);
    plStack_b0 = (long *)0x0;
    FUN_10810f48c(plVar3,&plStack_b0,0);
    if (*(char *)(param_5 + 0x91) == '\x01') {
      FUN_10833c3b4(plVar3,0,0);
    }
    uStack_a8 = CONCAT44(param_2,(int)param_1);
    uStack_a0 = 0;
    uStack_98 = 0;
    plStack_b0 = plVar3;
    FUN_10810f498(param_5,param_7,&plStack_b0);
    FUN_10833baf4(plVar3,(int)lVar1);
  }
  return;
}



/* Entry: 10810f48c; end: 10810f497;  */

void FUN_10810f48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *unaff_x21;
  
  func_0x000108342398(param_1,param_2,1,param_3);
  iVar1 = (int)param_2;
  FUN_1082ffd68();
  if (iVar1 != 0) {
    func_0x00010833c27c();
    FUN_1082d8624();
    func_0x000108341f64();
    func_0x000108342298(*(undefined8 *)(*unaff_x21 + 0x170));
  }
  return;
}



/* Entry: 10810f498; end: 10810f57b;  */

void FUN_10810f498(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == lRam00000001132542c8) {
    lVar2 = *(long *)(param_1 + 0x18);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      FUN_10810ffe4(param_1,lVar1,param_3);
    }
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10) + param_2 * 0x38;
  lVar2 = *(long *)(lVar1 + 0x20);
  lVar1 = lVar2 + *(long *)(lVar1 + 0x10);
  while (lVar2 != lVar1) {
    func_0x000108110034();
  }
  return;
}



/* Entry: 10810f57c; end: 10810f60f;  */

void FUN_10810f57c(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x00010810f680(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



/* Entry: 10810f610; end: 10810f617;  */

void FUN_10810f610(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b9a8d98();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10810f618; end: 10810f753;  */

void FUN_10810f618(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b9a8d98();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10810f754; end: 10810fa6b;  */

long FUN_10810f754(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  func_0x000108110254();
  plVar15 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
  uVar4 = (long)plVar3 - (long)plVar15;
  lVar10 = 0;
  if (uVar4 != 0) {
    lVar10 = ((long)plVar3 - (long)plVar15 >> 3) * 0x66 + -1;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (lVar10 != *(long *)(param_1 + 0x28) + uVar2) goto LAB_10810f94c;
  if (uVar2 < 0x66) {
    plVar13 = unaff_x19 + 3;
    plVar11 = (long *)*plVar13;
    plVar12 = (long *)*unaff_x19;
    if ((ulong)((long)plVar11 - (long)plVar12) <= uVar4) {
      puVar7 = (undefined8 *)((long)plVar11 - (long)plVar12 >> 2);
      if (plVar11 == plVar12) {
        puVar7 = (undefined8 *)0x1;
      }
      plStack_98 = plVar13;
      FUN_10810fbc0();
      puVar16 = (undefined8 *)((long)puVar7 + uVar4);
      puVar17 = puVar7 + (long)param_2;
      uVar8 = 0xff0;
      puVar18 = param_2;
      puStack_b8 = puVar7;
      puStack_b0 = puVar16;
      puStack_a0 = puVar17;
      __Znwm();
      uVar2 = (long)param_2 * 8;
      param_2 = puVar18;
      puVar14 = puVar16;
      if (uVar4 == uVar2) {
        if (plVar3 == plVar15) {
          puVar14 = (undefined8 *)0x1;
          plStack_70 = plVar13;
          FUN_10810fbc0();
          puStack_78 = puVar14 + (long)puVar18;
          param_2 = puVar16;
          puStack_90 = puVar14;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          FUN_10810fb98(&puStack_90,puVar16,puVar16);
          puVar1 = puStack_78;
          puVar14 = puStack_80;
          puVar9 = puStack_88;
          puVar18 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar7;
          puStack_88 = puVar16;
          puStack_80 = puVar16;
          puStack_78 = puVar17;
          func_0x000108110220();
          puVar7 = puVar18;
          puVar16 = puVar9;
          puVar17 = puVar1;
        }
        else {
          puVar16 = puVar16 + (((long)puVar16 - (long)puVar7 >> 3) + 1) / -2;
          puVar14 = puVar16;
          puStack_b0 = puVar16;
        }
      }
      puVar18 = puVar14 + 1;
      *puVar14 = uVar8;
      puVar14 = (undefined8 *)unaff_x19[2];
      puStack_a8 = puVar18;
      while (puVar9 = (undefined8 *)unaff_x19[1], puVar14 != puVar9) {
        puVar9 = puVar16;
        if (puVar16 == puVar7) {
          if (puVar18 < puVar17) {
            lVar10 = (long)puVar18 - (long)puVar7;
            puVar1 = puVar18 + (((long)puVar17 - (long)puVar18 >> 3) + 1) / 2;
            puVar9 = (undefined8 *)((long)puVar1 - ((long)puVar18 - (long)puVar7));
            puVar18 = puVar1;
            if (lVar10 != 0) {
              _memmove(puVar9,puVar16,lVar10);
              param_2 = puVar16;
            }
          }
          else {
            lVar10 = (long)puVar17 - (long)puVar7 >> 2;
            if ((long)puVar17 - (long)puVar7 == 0) {
              lVar10 = 1;
            }
            plStack_70 = plVar13;
            FUN_10810fbc0();
            func_0x0001081101f0(lVar10 * 2 + 6);
            param_2 = puVar7;
            FUN_10810fb98(&puStack_90,puVar7,puVar18);
            puVar6 = puStack_78;
            puVar5 = puStack_80;
            puVar9 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar7;
            puStack_88 = puVar16;
            puStack_80 = puVar18;
            puStack_78 = puVar17;
            func_0x000108110220();
            puVar7 = puVar1;
            puVar18 = puVar5;
            puVar17 = puVar6;
          }
        }
        puVar14 = puVar14 + -1;
        puVar16 = puVar9 + -1;
        *puVar16 = *puVar14;
      }
      puStack_b8 = (undefined8 *)*unaff_x19;
      *unaff_x19 = (long)puVar7;
      unaff_x19[1] = (long)puVar16;
      puStack_a0 = (undefined8 *)unaff_x19[3];
      puStack_a8 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = (long)puVar18;
      unaff_x19[3] = (long)puVar17;
      puStack_b0 = puVar9;
      func_0x00010810fbf4(&puStack_b8);
      goto LAB_10810f94c;
    }
    puVar7 = (undefined8 *)0xff0;
    __Znwm();
    if (plVar11 != plVar3) {
      *plVar3 = (long)puVar7;
      unaff_x19[2] = (long)(plVar3 + 1);
      goto LAB_10810f94c;
    }
    if (plVar15 == plVar12) {
      lVar10 = (long)plVar11 - (long)plVar15 >> 2;
      if (plVar3 == plVar15) {
        lVar10 = 1;
      }
      plStack_70 = plVar13;
      FUN_10810fbc0();
      func_0x0001081101f0(lVar10 * 2 + 6);
      FUN_10810fb98(&puStack_90,unaff_x19[1],unaff_x19[2]);
      puVar17 = (undefined8 *)unaff_x19[1];
      puVar16 = (undefined8 *)*unaff_x19;
      puVar18 = (undefined8 *)unaff_x19[3];
      puVar14 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = (long)puStack_88;
      *unaff_x19 = (long)puStack_90;
      unaff_x19[3] = (long)puStack_78;
      unaff_x19[2] = (long)puStack_80;
      puStack_90 = puVar16;
      puStack_88 = puVar17;
      puStack_80 = puVar14;
      puStack_78 = puVar18;
      func_0x000108110220();
      plVar15 = (long *)unaff_x19[1];
    }
    plVar15[-1] = (long)puVar7;
    unaff_x19[1] = (long)plVar15;
    param_2 = puVar7;
  }
  else {
    unaff_x19[4] = uVar2 - 0x66;
    param_2 = (undefined8 *)*plVar15;
    unaff_x19[1] = (long)(plVar15 + 1);
  }
  FUN_10810faac();
LAB_10810f94c:
  FUN_10810fa6c();
  func_0x00010b99d74c(param_2);
  unaff_x19[5] = unaff_x19[5] + 1;
  FUN_10810fa6c();
  if (*unaff_x19 == unaff_x20) {
    unaff_x20 = unaff_x19[-1] + 0xff0;
  }
  return unaff_x20 + -0x28;
}



/* Entry: 10810fa6c; end: 10810faab;  */

void FUN_10810fa6c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10810faac; end: 10810fb97;  */

void FUN_10810faac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x000108110254();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10810fbc0();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10810fb98(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010810fbf4(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10810fb98; end: 10810fbbf;  */

void FUN_10810fb98(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10810fbc0; end: 10810fc33;  */

undefined1  [16] FUN_10810fbc0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10810fc34; end: 10810fcd7;  */

void FUN_10810fc34(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long extraout_x8;
  long lVar1;
  undefined8 uVar2;
  long extraout_x9;
  long extraout_x10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x30);
  if (*(long *)(param_2 + 0x28) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    func_0x0001081101d8(*(undefined8 *)(param_2 + 8));
    lVar1 = extraout_x8 + extraout_x9 * extraout_x10;
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FUN_10810fcd8(param_2);
  }
  uVar2 = *param_4;
  *param_1 = &PTR_DAT_110d7e488;
  param_1[1] = 1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = param_2;
  param_1[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x30);
  return;
}



/* Entry: 10810fcd8; end: 10810fd87;  */

bool FUN_10810fcd8(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  func_0x0001081101d8(*(undefined8 *)(param_1 + 8));
  (*(code *)**(undefined8 **)(extraout_x8 + extraout_x9 * extraout_x10))();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0xcb < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x66;
  }
  return bVar1;
}



/* Entry: 10810fd88; end: 10810fecf;  */

long * FUN_10810fd88(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + (long)param_4;
  if (uVar1 - uVar3 <= 0x249249249249249 - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar8 = (uVar3 << 3) / 5;
    }
    else {
      uVar8 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    if (0x249249249249248 < uVar8) {
      uVar8 = 0x249249249249249;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar1 < 0x24924924924924a) {
      lVar9 = *param_2;
      lVar5 = uVar3 * 0x38;
      __Znwm();
      lVar2 = *param_2;
      lVar4 = param_2[1];
      lVar6 = lVar2;
      FUN_10810fed0(lVar2,param_3,lVar5);
      func_0x00010810f650();
      plVar7 = param_3;
      FUN_10810fed0(param_3,lVar2 + lVar4 * 0x38,lVar6 + (long)param_4 * 0x38);
      if (lVar2 != 0) {
        FUN_10810f57c(lVar2,param_2[1]);
        plVar7 = (long *)*param_2;
        if (param_2 + 3 != plVar7) {
          __ZdlPv();
        }
      }
      *param_2 = lVar5;
      param_2[1] = param_2[1] + (long)param_4;
      param_2[2] = uVar3;
      *param_1 = (long)param_3 + (lVar5 - lVar9);
      return plVar7;
    }
  }
  _abort();
  for (; param_2 != param_3; param_2 = param_2 + 7) {
    func_0x00010810f650(param_4,param_2);
    param_4 = param_4 + 7;
  }
  return param_4;
}



/* Entry: 10810fed0; end: 10810ffe3;  */

long FUN_10810fed0(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    func_0x00010810f650(param_3,param_1);
    param_3 = param_3 + 0x38;
  }
  return param_3;
}



/* Entry: 10810ffe4; end: 108110193;  */

void FUN_10810ffe4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10) + param_2 * 0x38;
  lVar1 = *(long *)(lVar2 + 0x20);
  lVar2 = lVar1 + *(long *)(lVar2 + 0x10);
  while (lVar1 != lVar2) {
    func_0x000108110034();
  }
  return;
}



/* Entry: 108110194; end: 10811025f;  */

void FUN_108110194(void)

{
  return;
}



/* Entry: 108110260; end: 108110337;  */

void FUN_108110260(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (*(float *)(param_2 + 0x30) == 1.0) {
    lVar1 = *param_1;
    *(int *)(lVar1 + 0xc60) = *(int *)(lVar1 + 0xc60) + 1;
    *(int *)(*(long *)(lVar1 + 0xc40) + 0x58) = *(int *)(*(long *)(lVar1 + 0xc40) + 0x58) + 1;
  }
  else {
    func_0x00010811044c();
    func_0x00010811042c();
    FUN_10833c3b4(*param_1,0,&uStack_70);
    FUN_108375e94(&uStack_70);
    lVar1 = *param_1;
  }
  uStack_70 = *(undefined8 *)(param_2 + 8);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  fStack_68 = (float)*(undefined8 *)(param_2 + 0x10);
  fStack_5c = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  _fStack_68 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20),
                        (float)(int)(fStack_68 * *(float *)(param_1 + 1)) / *(float *)(param_1 + 1))
  ;
  _uStack_60 = CONCAT44((float)(int)(fStack_5c * *(float *)((long)param_1 + 0xc)) /
                        *(float *)((long)param_1 + 0xc),(int)*(undefined8 *)(param_2 + 0x18));
  _uStack_50 = CONCAT44(0x80,(int)*(undefined8 *)(param_2 + 0x28));
  FUN_10833e2b0(lVar1,&uStack_70);
  return;
}



/* Entry: 108110338; end: 108110397;  */

void FUN_108110338(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  if (*(float *)(param_2 + 0x10) != 1.0) {
    func_0x00010811044c();
    func_0x00010811042c();
    FUN_108340e6c(*param_1,*(undefined8 *)(param_2 + 8),0,auStack_60);
    FUN_108375e94(auStack_60);
    return;
  }
  iVar1 = (int)*param_1;
  lVar2 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    func_0x000108341d9c();
    if (lVar2 != 0) {
      iVar1 = 0;
      func_0x0001081420b8();
    }
    func_0x000108341ef4();
    (*extraout_x8)();
    if (1 < iVar1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x20 + 0x160);
      func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108340f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (**(code **)(*unaff_x19 + 0x20))();
    func_0x000108341f64();
    func_0x000108342278(auStack_40);
    func_0x000108342034(*(undefined8 *)(*unaff_x19 + 0x18));
    (*extraout_x8_00)();
    FUN_1083424c8(auStack_40);
  }
  return;
}



/* Entry: 108110398; end: 1081103bf;  */

void FUN_108110398(int param_1,long param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_40 [16];
  
  lVar1 = 0;
  if (param_2 != 0) {
    func_0x000108341d9c();
    if (lVar1 != 0) {
      param_1 = 0;
      func_0x0001081420b8();
    }
    func_0x000108341ef4();
    (*extraout_x8)();
    if (1 < param_1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x20 + 0x160);
      func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108340f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (**(code **)(*unaff_x19 + 0x20))();
    func_0x000108341f64();
    func_0x000108342278(auStack_40);
    func_0x000108342034(*(undefined8 *)(*unaff_x19 + 0x18));
    (*extraout_x8_00)();
    FUN_1083424c8(auStack_40);
  }
  return;
}



/* Entry: 1081103c0; end: 10811041f;  */

void FUN_1081103c0(undefined8 *param_1,long param_2)

{
  long alStack_30 [2];
  
  param_1[3] = *(undefined8 *)(param_2 + 8);
  func_0x00010813f2e0(alStack_30,param_2 + 0x10,param_1 + 2);
  if (*(int *)(alStack_30[0] + 0x48) != 0) {
    FUN_108110420(*param_1,alStack_30,0);
  }
  FUN_10837ca5c(alStack_30[0]);
  return;
}



/* Entry: 108110420; end: 10811045f;  */

void FUN_108110420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_80;
  func_0x000108342398(param_1,param_2,1,param_3);
  func_0x00010833c27c();
  if ((*(byte *)(unaff_x22 + 0xe) >> 1 & 1) == 0) {
    FUN_10816eab0(&uStack_80,unaff_x21[0x188] + 0x18);
    FUN_10827a0d8();
    if (iVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uVar2 = unaff_x22;
      FUN_1083773e8();
      if ((int)uVar2 != 0) goto LAB_10833e670;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uVar2 = unaff_x22;
      FUN_1083777d4();
      if ((int)uVar2 != 0) {
        FUN_108384c90(&uStack_80,&uStack_40);
        goto LAB_10833e670;
      }
      func_0x0001083777e0();
      if ((unaff_x22 & 1) != 0) goto LAB_10833e670;
    }
  }
  func_0x0001083423c0(*(undefined8 *)(*unaff_x21 + 0x180));
LAB_10833e670:
  func_0x000108342298();
  return;
}



/* Entry: 108110460; end: 108112113;  */

undefined8 * FUN_108110460(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  *param_1 = &PTR_DAT_110a24698;
  param_1[1] = 1;
  param_1[2] = &PTR_DAT_110a246e0;
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000108111ef8();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[3] = uVar1;
  param_1[4] = param_3;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0xb);
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = 0;
  return param_1;
}



/* Entry: 108112114; end: 108112193;  */

void FUN_108112114(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  int extraout_w11;
  
  *param_1 = &PTR_FUN_110a24918;
  param_1[1] = 1;
  param_1[2] = &PTR_DAT_110a24958;
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
  param_1[3] = lVar4;
  uVar5 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001081131a0();
      uVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = uVar5;
  param_1[5] = param_4;
  param_1[6] = param_1 + 9;
  param_1[8] = 2;
  param_1[7] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 108112194; end: 1081121e3;  */

undefined8 * FUN_108112194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24918;
  param_1[2] = &PTR_DAT_110a24958;
  func_0x0001078d4914(param_1 + 0x2b);
  func_0x00010811a300(param_1 + 6);
  FUN_1081130f8(param_1 + 4);
  FUN_1080dc698(param_1 + 3);
  return param_1;
}



/* Entry: 1081121e4; end: 1081121ef;  */

undefined8 * FUN_1081121e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24918;
  param_1[2] = &PTR_DAT_110a24958;
  func_0x0001078d4914(param_1 + 0x2b);
  func_0x00010811a300(param_1 + 6);
  FUN_1081130f8(param_1 + 4);
  FUN_1080dc698(param_1 + 3);
  return param_1;
}



/* Entry: 1081121f0; end: 108112203;  */

void FUN_1081121f0(void)

{
  FUN_108112194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108112204; end: 10811220b;  */

void FUN_108112204(long param_1)

{
  FUN_108112194(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10811220c; end: 10811229b;  */

uint FUN_10811220c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x158) == 0) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    uStack_38 = *(undefined8 *)(*(long *)(param_1 + 0x158) + 0x88);
    lVar1 = *(long *)(param_1 + 0x30);
    for (lVar5 = *(long *)(param_1 + 0x38) * 0x88; lVar5 != 0; lVar5 = lVar5 + -0x88) {
      lVar2 = lVar1;
      func_0x00010811a020(lVar1,&uStack_38);
      if ((int)lVar2 != 0) {
        if (*(char *)(lVar1 + 0x80) != '\0') {
          iVar4 = 1;
        }
        uVar3 = 1;
      }
      lVar1 = lVar1 + 0x88;
    }
  }
  return uVar3 | iVar4 << 8;
}



/* Entry: 10811229c; end: 1081122fb;  */

void FUN_10811229c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x0001081234cc();
  if ((iVar1 != 0) && (*(char *)(*(long *)(param_1 + 0x18) + 400) == '\x01')) {
    FUN_1081122fc();
  }
  return;
}



/* Entry: 1081122fc; end: 108112313;  */

long * FUN_1081122fc(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x0001080da3e4();
    if (param_1 != param_2) {
      lVar1 = 0;
      if (*param_2 != 0) {
        do {
          func_0x0001081131a0();
          lVar1 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *param_1 = lVar1;
      func_0x0001078d4938();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 108112314; end: 108112357;  */

long * FUN_108112314(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001081131a0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x0001078d4938();
  }
  return param_1;
}



/* Entry: 108112358; end: 108112453;  */

undefined1 ** FUN_108112358(undefined8 param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [272];
  undefined8 uStack_48;
  
  func_0x000108113144();
  puStack_170 = auStack_158;
  uStack_160 = 2;
  uStack_168 = 0;
  uStack_48 = extraout_x8;
  if (param_3 == 0) {
    FUN_108112cc8(&puStack_170,param_2 + 0x30);
  }
  else if (*(long *)(param_2 + 0x158) != 0) {
    uStack_178 = *(undefined8 *)(*(long *)(param_2 + 0x158) + 0x88);
    puVar4 = *(undefined8 **)(param_2 + 0x30);
    for (lVar5 = *(long *)(param_2 + 0x38) * 0x88; lVar5 != 0; lVar5 = lVar5 + -0x88) {
      puVar2 = puVar4;
      func_0x00010811a020(puVar4,&uStack_178);
      if ((int)puVar2 != 0) {
        puVar4[3] = uStack_178;
        *(undefined1 *)(puVar4 + 4) = 1;
        *(undefined1 *)(puVar4 + 0x10) = 0;
        func_0x00010811a130(&puStack_170,*puVar4);
        FUN_108112454();
      }
      puVar4 = puVar4 + 0x11;
    }
  }
  puVar4 = (undefined8 *)(param_2 + 0x20);
  FUN_1081124a4(param_1,param_2 + 0x158,puVar4,&puStack_170);
  ppuVar3 = &puStack_170;
  func_0x00010811a300();
  func_0x00010811311c(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  *ppuVar3 = (undefined1 *)*puVar4;
  FUN_108112be0(ppuVar3 + 1,puVar4 + 1);
  uVar1 = *(undefined1 *)(puVar4 + 4);
  puVar6 = (undefined1 *)puVar4[2];
  ppuVar3[3] = (undefined1 *)puVar4[3];
  ppuVar3[2] = puVar6;
  *(undefined1 *)(ppuVar3 + 4) = uVar1;
  func_0x000108112c50(ppuVar3 + 5,puVar4 + 5);
  *(undefined1 *)(ppuVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
  return ppuVar3;
}



/* Entry: 108112454; end: 1081124a3;  */

undefined8 * FUN_108112454(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_108112be0(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar1;
  func_0x000108112c50(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}



/* Entry: 1081124a4; end: 1081124e3;  */

void FUN_1081124a4(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  func_0x000108113194();
  uVar1 = 0x150;
  __Znwm();
  FUN_1081131b0();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1081124e4; end: 10811259f;  */

bool FUN_1081124e4(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) == param_2[1]) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    lVar5 = 8;
    for (lVar4 = *(long *)(param_1 + 0x38) * 0x88; bVar1 = lVar4 != 0, lVar4 != 0;
        lVar4 = lVar4 + -0x88) {
      lVar6 = *(long *)(*param_2 + lVar5);
      if (lVar6 == 0) {
        if ((*(byte *)(uVar3 + 0x78) & 1) != 0) {
          return bVar1;
        }
      }
      else {
        uVar2 = uVar3;
        func_0x000108119ed8();
        if (uVar2 != *(ulong *)(lVar6 + 0x10)) {
          return bVar1;
        }
        uVar2 = uVar3;
        func_0x000108119fb8();
        func_0x000108119e94();
        if ((uVar2 & 1) != 0) {
          return bVar1;
        }
      }
      uVar3 = uVar3 + 0x88;
      lVar5 = lVar5 + 0x60;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1081125a0; end: 1081125f7;  */

/* WARNING: Possible PIC construction at 0x000108112654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108112658) */
/* WARNING: Removing unreachable block (ram,0x000108112730) */
/* WARNING: Removing unreachable block (ram,0x000108112738) */
/* WARNING: Removing unreachable block (ram,0x00010811273c) */
/* WARNING: Removing unreachable block (ram,0x00010811274c) */

void FUN_1081125a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  long *param_5)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 **ppuVar4;
  undefined8 **ppuVar5;
  long *plVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar12;
  undefined8 extraout_x8_01;
  long lVar13;
  long lVar14;
  long *plStack_2f0;
  undefined1 auStack_2e8 [96];
  undefined8 uStack_288;
  undefined8 *apuStack_230 [17];
  undefined1 uStack_1a1;
  long lStack_1a0;
  undefined1 auStack_198 [88];
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [192];
  undefined8 uStack_18;
  undefined1 *puVar6;
  
  ppuVar8 = &puStack_f0;
  ppuVar4 = &puStack_f0;
  func_0x000108113144();
  puStack_f0 = auStack_d8;
  uStack_e0 = 2;
  uStack_e8 = 0;
  uStack_18 = extraout_x8;
  FUN_1081125f8();
  func_0x00010810e8bc();
  func_0x00010811311c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = (undefined8 **)ppuVar4;
  puVar12 = ppuVar8;
  func_0x000108113144();
  uStack_138 = extraout_x8_00;
  lStack_1a0 = 0;
  uStack_1a1 = 0;
  if (puVar12[1] == 0) {
    while( true ) {
      lVar13 = *(long *)((long)ppuVar4 + 0x38);
      bVar1 = lVar13 == 0;
      if (lVar13 == 0) break;
      FUN_108113040(apuStack_230,*(long *)((long)ppuVar4 + 0x30) + (lVar13 + -1) * 0x88);
      puVar6 = (undefined1 *)((long)ppuVar4 + 0x30);
      func_0x00010811a26c(puVar6,lVar13 + -1);
      iVar3 = (int)puVar6;
      auStack_198[0] = 0;
      uStack_140 = 0;
      func_0x000105c3b044();
      if (iVar3 != 0) {
        FUN_1081127f4(auStack_198,&UNK_10f47b661);
      }
      puVar12 = apuStack_230[0];
      (**(code **)(**(long **)((long)ppuVar4 + 0x20) + 0x40))();
      FUN_1080e8dd4(auStack_198);
      ppuVar5 = apuStack_230;
      func_0x000108119eac();
    }
    func_0x00010811311c(uStack_138);
    if (bVar1) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar12 = (undefined8 *)*ppuVar8;
    param_4 = &uStack_1a1;
    param_5 = &lStack_1a0;
    param_3 = (undefined8 *)0x0;
    ppuVar5 = (undefined8 **)ppuVar4;
  }
  puVar9 = *(undefined8 **)((long)ppuVar5 + 0x38);
  uVar2 = param_3 == puVar9;
  if (param_3 < puVar9) {
    puVar6 = (undefined1 *)ppuVar5;
    if (puVar12[1] == 0) {
      FUN_108112a0c();
    }
    else {
      FUN_108112a88(ppuVar5,puVar12,param_3,puVar9,param_4,param_5);
    }
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
  }
  puVar6 = (undefined1 *)ppuVar5;
  puVar10 = param_4;
  plVar11 = param_5;
  func_0x000108113144();
  plVar7 = *(long **)(puVar6 + 0x28);
  uStack_288 = extraout_x8_01;
  (**(code **)(*plVar7 + 0x10))();
  puVar6 = (undefined1 *)((long)ppuVar5 + 0x30);
  func_0x00010811a13c(puVar6,param_3,plVar7);
  lVar14 = puVar12[1];
  lVar13 = *param_5;
  if (lVar14 == 0) {
    *param_5 = lVar13 + 1;
    *(long *)(puVar6 + 0x10) = lVar13;
    iVar3 = (int)puVar6 + 0x28;
    FUN_108112c78();
    func_0x000108113188();
    if (iVar3 != 0) {
      func_0x000108110cf4(auStack_2e8,&UNK_10f47b684);
    }
    (**(code **)(**(long **)((long)ppuVar5 + 0x20) + 0x20))
              (&plStack_2f0,*(long **)((long)ppuVar5 + 0x20),plVar7,param_3);
    plVar7 = plStack_2f0;
    if (plStack_2f0 == (long *)0x0) {
      plStack_2f0 = (long *)0x0;
    }
    else {
      func_0x000108119f70(puVar6 + 8);
    }
    uVar2 = *(ulong *)((long)ppuVar5 + 0x38) == 2;
    if ((1 < *(ulong *)((long)ppuVar5 + 0x38)) && (plStack_2f0 == (long *)0x0)) {
      *param_4 = 1;
    }
    func_0x0001078d4980();
  }
  else {
    *(long *)(puVar6 + 0x10) = lVar13;
    func_0x000108119f20(puVar6,*(undefined8 *)(lVar14 + 0x10),puVar12 + 2);
    iVar3 = (int)puVar6;
    func_0x000108113188();
    if (iVar3 != 0) {
      func_0x000108110cf4(auStack_2e8,&UNK_10f47b6a8);
    }
    (**(code **)(**(long **)((long)ppuVar5 + 0x20) + 0x28))
              (*(long **)((long)ppuVar5 + 0x20),plVar7,param_3,*(undefined8 *)(lVar14 + 0x10));
    param_3 = puVar12 + 2;
    puVar10 = (undefined1 *)0x0;
    (**(code **)(**(long **)((long)ppuVar5 + 0x20) + 0x38))
              (*(long **)((long)ppuVar5 + 0x20),plVar7,param_3,0);
    *param_4 = 1;
  }
  puVar6 = auStack_2e8;
  FUN_1080e8dd4();
  func_0x00010811311c(uStack_288);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010811a1a8(puVar6 + 0x30,param_3,puVar10);
  (**(code **)(**(long **)(puVar6 + 0x20) + 0x30))(*(long **)(puVar6 + 0x20),plVar7,puVar10);
  *(undefined1 *)plVar11 = 1;
  return;
}



/* Entry: 1081125f8; end: 1081127f3;  */

/* WARNING: Possible PIC construction at 0x000108112654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108112658) */
/* WARNING: Removing unreachable block (ram,0x000108112730) */
/* WARNING: Removing unreachable block (ram,0x000108112738) */
/* WARNING: Removing unreachable block (ram,0x00010811273c) */
/* WARNING: Removing unreachable block (ram,0x00010811274c) */

void FUN_1081125f8(undefined1 *param_1,long *param_2,ulong param_3,undefined1 *param_4,long *param_5
                  )

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long **pplVar4;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long *plVar10;
  undefined8 extraout_x8_00;
  long lVar11;
  long lVar12;
  long *plStack_200;
  undefined1 auStack_1f8 [96];
  undefined8 uStack_198;
  long *aplStack_140 [17];
  undefined1 uStack_b1;
  long lStack_b0;
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 *puVar5;
  
  pplVar4 = (long **)param_1;
  plVar10 = param_2;
  func_0x000108113144();
  uStack_48 = extraout_x8;
  lStack_b0 = 0;
  uStack_b1 = 0;
  if (plVar10[1] == 0) {
    while( true ) {
      lVar11 = *(long *)(param_1 + 0x38);
      bVar1 = lVar11 == 0;
      if (lVar11 == 0) break;
      FUN_108113040(aplStack_140,*(long *)(param_1 + 0x30) + (lVar11 + -1) * 0x88);
      puVar5 = param_1 + 0x30;
      func_0x00010811a26c(puVar5,lVar11 + -1);
      iVar3 = (int)puVar5;
      auStack_a8[0] = 0;
      uStack_50 = 0;
      func_0x000105c3b044();
      if (iVar3 != 0) {
        FUN_1081127f4(auStack_a8,&UNK_10f47b661);
      }
      plVar10 = aplStack_140[0];
      (**(code **)(**(long **)(param_1 + 0x20) + 0x40))();
      FUN_1080e8dd4(auStack_a8);
      pplVar4 = aplStack_140;
      func_0x000108119eac();
    }
    func_0x00010811311c(uStack_48);
    if (bVar1) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar10 = (long *)*param_2;
    param_4 = &uStack_b1;
    param_5 = &lStack_b0;
    param_3 = 0;
    pplVar4 = (long **)param_1;
  }
  uVar7 = *(ulong *)((long)pplVar4 + 0x38);
  uVar2 = param_3 == uVar7;
  if (param_3 < uVar7) {
    puVar5 = (undefined1 *)pplVar4;
    if (plVar10[1] == 0) {
      FUN_108112a0c();
    }
    else {
      FUN_108112a88(pplVar4,plVar10,param_3,uVar7,param_4,param_5);
    }
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  }
  puVar5 = (undefined1 *)pplVar4;
  puVar8 = param_4;
  plVar9 = param_5;
  func_0x000108113144();
  plVar6 = *(long **)(puVar5 + 0x28);
  uStack_198 = extraout_x8_00;
  (**(code **)(*plVar6 + 0x10))();
  puVar5 = (undefined1 *)((long)pplVar4 + 0x30);
  func_0x00010811a13c(puVar5,param_3,plVar6);
  lVar12 = plVar10[1];
  lVar11 = *param_5;
  if (lVar12 == 0) {
    *param_5 = lVar11 + 1;
    *(long *)(puVar5 + 0x10) = lVar11;
    iVar3 = (int)puVar5 + 0x28;
    FUN_108112c78();
    func_0x000108113188();
    if (iVar3 != 0) {
      func_0x000108110cf4(auStack_1f8,&UNK_10f47b684);
    }
    (**(code **)(**(long **)((long)pplVar4 + 0x20) + 0x20))
              (&plStack_200,*(long **)((long)pplVar4 + 0x20),plVar6,param_3);
    plVar6 = plStack_200;
    if (plStack_200 == (long *)0x0) {
      plStack_200 = (long *)0x0;
    }
    else {
      func_0x000108119f70(puVar5 + 8);
    }
    uVar2 = *(ulong *)((long)pplVar4 + 0x38) == 2;
    if ((1 < *(ulong *)((long)pplVar4 + 0x38)) && (plStack_200 == (long *)0x0)) {
      *param_4 = 1;
    }
    func_0x0001078d4980();
  }
  else {
    *(long *)(puVar5 + 0x10) = lVar11;
    func_0x000108119f20(puVar5,*(undefined8 *)(lVar12 + 0x10),plVar10 + 2);
    iVar3 = (int)puVar5;
    func_0x000108113188();
    if (iVar3 != 0) {
      func_0x000108110cf4(auStack_1f8,&UNK_10f47b6a8);
    }
    (**(code **)(**(long **)((long)pplVar4 + 0x20) + 0x28))
              (*(long **)((long)pplVar4 + 0x20),plVar6,param_3,*(undefined8 *)(lVar12 + 0x10));
    param_3 = (ulong)(plVar10 + 2);
    puVar8 = (undefined1 *)0x0;
    (**(code **)(**(long **)((long)pplVar4 + 0x20) + 0x38))
              (*(long **)((long)pplVar4 + 0x20),plVar6,param_3,0);
    *param_4 = 1;
  }
  puVar5 = auStack_1f8;
  FUN_1080e8dd4();
  func_0x00010811311c(uStack_198);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010811a1a8(puVar5 + 0x30,param_3,puVar8);
  (**(code **)(**(long **)(puVar5 + 0x20) + 0x30))(*(long **)(puVar5 + 0x20),plVar6,puVar8);
  *(undefined1 *)plVar9 = 1;
  return;
}



/* Entry: 1081127f4; end: 108112823;  */

undefined8 FUN_1081127f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1080e8d4c();
  FUN_1081130dc(param_1,param_2);
  return param_1;
}



/* Entry: 108112824; end: 1081129b3;  */

void FUN_108112824(long param_1,long param_2,long param_3,undefined1 *param_4,long *param_5)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  long lVar8;
  long *plStack_c0;
  undefined1 auStack_b8 [96];
  undefined8 uStack_58;
  
  lVar2 = param_1;
  puVar5 = param_4;
  plVar6 = param_5;
  func_0x000108113144();
  plVar3 = *(long **)(lVar2 + 0x28);
  uStack_58 = extraout_x8;
  (**(code **)(*plVar3 + 0x10))();
  lVar2 = param_1 + 0x30;
  func_0x00010811a13c(lVar2,param_3,plVar3);
  lVar8 = *(long *)(param_2 + 8);
  lVar7 = *param_5;
  if (lVar8 == 0) {
    *param_5 = lVar7 + 1;
    *(long *)(lVar2 + 0x10) = lVar7;
    iVar1 = (int)lVar2 + 0x28;
    FUN_108112c78();
    func_0x000108113188();
    if (iVar1 != 0) {
      func_0x000108110cf4(auStack_b8,&UNK_10f47b684);
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
              (&plStack_c0,*(long **)(param_1 + 0x20),plVar3,param_3);
    plVar3 = plStack_c0;
    if (plStack_c0 == (long *)0x0) {
      plStack_c0 = (long *)0x0;
    }
    else {
      func_0x000108119f70(lVar2 + 8);
    }
    in_ZR = *(ulong *)(param_1 + 0x38) == 2;
    if ((1 < *(ulong *)(param_1 + 0x38)) && (plStack_c0 == (long *)0x0)) {
      *param_4 = 1;
    }
    func_0x0001078d4980();
  }
  else {
    *(long *)(lVar2 + 0x10) = lVar7;
    func_0x000108119f20(lVar2,*(undefined8 *)(lVar8 + 0x10),param_2 + 0x10);
    iVar1 = (int)lVar2;
    func_0x000108113188();
    if (iVar1 != 0) {
      func_0x000108110cf4(auStack_b8,&UNK_10f47b6a8);
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x28))
              (*(long **)(param_1 + 0x20),plVar3,param_3,*(undefined8 *)(lVar8 + 0x10));
    param_3 = param_2 + 0x10;
    puVar5 = (undefined1 *)0x0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x38))(*(long **)(param_1 + 0x20),plVar3,param_3,0);
    *param_4 = 1;
  }
  puVar4 = auStack_b8;
  FUN_1080e8dd4();
  func_0x00010811311c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010811a1a8(puVar4 + 0x30,param_3,puVar5);
  (**(code **)(**(long **)(puVar4 + 0x20) + 0x30))(*(long **)(puVar4 + 0x20),plVar3,puVar5);
  *(undefined1 *)plVar6 = 1;
  return;
}



/* Entry: 1081129b4; end: 108112a0b;  */

void FUN_1081129b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  func_0x00010811a1a8(param_1 + 0x30,param_3,param_4);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x30))(*(long **)(param_1 + 0x20),param_2,param_4);
  *param_5 = 1;
  return;
}



/* Entry: 108112a0c; end: 108112a87;  */

bool FUN_108112a0c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  lVar3 = param_3 * 0x88;
  do {
    if (param_4 <= (ulong)(param_3 + lVar2)) {
LAB_108112a74:
      return (ulong)(param_3 + lVar2) < param_4;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    lVar1 = lVar4 + lVar3;
    if ((*(byte *)(lVar1 + 0x78) & 1) == 0) {
      lVar5 = *param_6;
      *param_6 = lVar5 + 1;
      *(long *)(lVar1 + 0x10) = lVar5;
      if (lVar2 != 0) {
        FUN_1081129b4(param_1,*(undefined8 *)(lVar4 + lVar3),param_3 + lVar2);
      }
      goto LAB_108112a74;
    }
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 0x88;
  } while( true );
}



/* Entry: 108112a88; end: 108112baf;  */

bool FUN_108112a88(long param_1,long param_2,long param_3,ulong param_4,undefined1 *param_5,
                  undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  
  lVar5 = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  lVar6 = param_3 * 0x88;
  do {
    if (param_4 <= (ulong)(param_3 + lVar5)) {
LAB_108112b88:
      return (ulong)(param_3 + lVar5) < param_4;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    lVar2 = lVar3 + lVar6;
    lVar1 = lVar2;
    func_0x000108119ed8();
    if (lVar1 == lVar4) {
      *(undefined8 *)(lVar2 + 0x10) = *param_6;
      func_0x000108119fec();
      lVar4 = lVar2;
      func_0x000108119e94();
      if ((int)lVar4 != 0) {
        func_0x00010810e760(auStack_b0,lVar2);
        func_0x00010810e720(lVar2,param_2 + 0x10);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
                  (*(long **)(param_1 + 0x20),*(undefined8 *)(lVar3 + lVar6),param_2 + 0x10,
                   auStack_b0);
        *param_5 = 1;
        FUN_10837ca5c(uStack_78);
      }
      if (lVar5 != 0) {
        FUN_1081129b4(param_1,*(undefined8 *)(lVar3 + lVar6),param_3 + lVar5,param_3,param_5);
      }
      goto LAB_108112b88;
    }
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x88;
  } while( true );
}



/* Entry: 108112bb0; end: 108112bdf;  */

void FUN_108112bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010811316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28),param_1);
  return;
}



/* Entry: 108112be0; end: 108112c23;  */

long * FUN_108112be0(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001081131a0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_108112c24();
  }
  return param_1;
}



/* Entry: 108112c24; end: 108112c77;  */

void FUN_108112c24(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108112c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108112c78; end: 108112cab;  */

void FUN_108112c78(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_10837ca38(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 108112cac; end: 108112cc7;  */

void FUN_108112cac(long param_1)

{
  func_0x00010810e740();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 108112cc8; end: 108112cf3;  */

long FUN_108112cc8(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_108112cf4(param_1);
  }
  return param_1;
}



/* Entry: 108112cf4; end: 108112d0b;  */

void FUN_108112cf4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = *param_2;
  lVar4 = lVar1 + param_2[1] * 0x88;
  uVar2 = (lVar4 - lVar1) / 0x88;
  if (uVar2 <= (ulong)param_1[2]) {
    func_0x000108112ea8(param_1,lVar1,uVar2,*param_1,param_1[1]);
    param_1[1] = uVar2;
    return;
  }
  plVar3 = param_1;
  FUN_108112e1c(param_1,uVar2,lVar4,0);
  plVar6 = (long *)*param_1;
  if ((plVar6 != (long *)0x0) && (FUN_108112dc0(param_1), param_1 + 3 != plVar6)) {
    __ZdlPv(plVar6);
  }
  param_1[1] = 0;
  param_1[2] = uVar2;
  *param_1 = (long)plVar3;
  lVar5 = *param_1 + param_1[1] * 0x88;
  plVar3 = param_1;
  FUN_108112f3c(param_1,lVar1,lVar4,lVar5);
  param_1[1] = ((long)plVar3 - lVar5) / 0x88 + param_1[1];
  return;
}



/* Entry: 108112d0c; end: 108112dbf;  */

void FUN_108112d0c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = (param_3 - param_2) / 0x88;
  if (uVar1 <= (ulong)param_1[2]) {
    func_0x000108112ea8(param_1,param_2,uVar1,*param_1,param_1[1]);
    param_1[1] = uVar1;
    return;
  }
  plVar2 = param_1;
  FUN_108112e1c(param_1,uVar1);
  plVar4 = (long *)*param_1;
  if ((plVar4 != (long *)0x0) && (FUN_108112dc0(param_1), param_1 + 3 != plVar4)) {
    __ZdlPv(plVar4);
  }
  param_1[1] = 0;
  param_1[2] = uVar1;
  *param_1 = (long)plVar2;
  lVar3 = *param_1 + param_1[1] * 0x88;
  plVar2 = param_1;
  FUN_108112f3c(param_1,param_2,param_3,lVar3);
  param_1[1] = ((long)plVar2 - lVar3) / 0x88 + param_1[1];
  return;
}



/* Entry: 108112dc0; end: 108112e1b;  */

void FUN_108112dc0(undefined8 *param_1)

{
  func_0x000108112de8(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 108112e1c; end: 108112e63;  */

void FUN_108112e1c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0xf0f0f0f0f0f0f0 < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x108112e3c;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 < 0xf0f0f0f0f0f0f1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010772e264();
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_108112e64;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  plVar3 = param_1;
  FUN_108112f3c();
  param_1[1] = ((long)plVar3 - (lVar1 + lVar2 * 0x88)) / 0x88 + param_1[1];
  return;
}



/* Entry: 108112e64; end: 108112f3b;  */

void FUN_108112e64(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  plVar3 = param_1;
  FUN_108112f3c();
  param_1[1] = ((long)plVar3 - (lVar1 + lVar2 * 0x88)) / 0x88 + param_1[1];
  return;
}



/* Entry: 108112f3c; end: 108112f73;  */

void FUN_108112f3c(void)

{
  undefined8 in_x3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108113194(in_x3);
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x88) {
    FUN_108113040();
  }
  return;
}



/* Entry: 108112f74; end: 108112fc3;  */

long FUN_108112f74(long param_1,long param_2,long *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_108112454(*param_3,param_1);
    param_1 = param_1 + 0x88;
    *param_3 = *param_3 + 0x88;
  }
  return param_1;
}



/* Entry: 108112fc4; end: 108112ffb;  */

void FUN_108112fc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long unaff_x19;
  
  func_0x000108113194(param_4);
  while (param_3 != 0) {
    FUN_108113040();
    unaff_x19 = unaff_x19 + -1;
    param_3 = unaff_x19;
  }
  return;
}



/* Entry: 108112ffc; end: 10811303f;  */

long FUN_108112ffc(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108113194();
  while (param_2 != 0) {
    FUN_108112454(unaff_x19,param_1);
    param_1 = param_1 + 0x88;
    unaff_x19 = unaff_x19 + 0x88;
    unaff_x20 = unaff_x20 + -1;
    param_2 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 108113040; end: 1081130c7;  */

undefined8 * FUN_108113040(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      func_0x0001081131a0();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x0001081130a0(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}



/* Entry: 1081130c8; end: 1081130db;  */

void FUN_1081130c8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    func_0x00010810e740();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 1081130dc; end: 1081130f7;  */

void FUN_1081130dc(long param_1)

{
  func_0x000105c3e4ac();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1081130f8; end: 10811311b;  */

undefined8 * FUN_1081130f8(undefined8 *param_1)

{
  func_0x0001080dc708(*param_1);
  return param_1;
}



/* Entry: 10811311c; end: 1081131af;  */

void FUN_10811311c(void)

{
  return;
}



/* Entry: 1081131b0; end: 1081143f3;  */

undefined8 * FUN_1081131b0(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110a249c0;
  param_1[1] = 1;
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
  param_1[2] = lVar4;
  lVar4 = *param_3;
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
  param_1[3] = lVar4;
  func_0x0001081134c0(param_1 + 4,param_4);
  param_1[0x29] = param_1[4];
  func_0x000108113238(param_1);
  return param_1;
}



/* Entry: 1081143f4; end: 1081144a7;  */

undefined8 * FUN_1081143f4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110a24bb8;
  param_1[1] = 1;
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
  param_1[2] = lVar4;
  param_1[3] = 0;
  _CFRetain();
  param_1[4] = param_3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  return param_1;
}



/* Entry: 1081144a8; end: 1081144ab;  */

undefined8 * FUN_1081144a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24bb8;
  if (param_1[5] != 0) {
    _CFRelease();
  }
  _CFRelease(param_1[4]);
  func_0x000106f471d4(param_1 + 3);
  FUN_1080dcc54(param_1 + 2);
  return param_1;
}



/* Entry: 1081144ac; end: 1081144bf;  */

void FUN_1081144ac(void)

{
  func_0x000108114458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081144c0; end: 1081144c7;  */

undefined8 FUN_1081144c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1081144c8; end: 1081146e7;  */

void FUN_1081144c8(undefined8 *param_1,double param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*(long *)(param_4 + 0x18) == 0) {
    FUN_10810a338(&uStack_38,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x10),
                  *(undefined8 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x30),6,param_4 + 0x28);
    uVar1 = uStack_38;
    uStack_38 = 0;
    func_0x000108113fc0((long *)(param_4 + 0x18),uVar1);
    FUN_108114864(uStack_38);
    if (*(long *)(param_4 + 0x18) == 0) {
      func_0x00010b99f5f8(&uStack_38,&UNK_10f47b74a);
      *param_1 = 2;
      param_1[1] = uStack_38;
      uStack_38 = 0;
      func_0x000104bda960(0);
      return;
    }
  }
  func_0x00010bf89d80(*(undefined8 *)(param_4 + 0x20));
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  uVar1 = uVar2;
  FUN_1083b8df0();
  *param_1 = 1;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  *(int *)(param_1 + 3) = (int)param_2;
  *(int *)((long)param_1 + 0x1c) = (int)param_3;
  return;
}



/* Entry: 1081146e8; end: 10811472f;  */

undefined8 * FUN_1081146e8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a24c00;
  if (param_1[6] != 0) {
    _CFRelease();
  }
  _CFRelease(param_1[5]);
  _CFRelease(param_1[4]);
  *param_1 = &PTR_DAT_110a24b28;
  plVar1 = param_1 + 2;
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x38))();
    func_0x0001081143d8(plVar1,0);
  }
  func_0x000108114238(param_1 + 3,0);
  func_0x0001081143b4(param_1 + 3);
  func_0x000108114364(plVar1);
  return param_1;
}



/* Entry: 108114730; end: 108114733;  */

undefined8 * FUN_108114730(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a24c00;
  if (param_1[6] != 0) {
    _CFRelease();
  }
  _CFRelease(param_1[5]);
  _CFRelease(param_1[4]);
  *param_1 = &PTR_DAT_110a24b28;
  plVar1 = param_1 + 2;
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x38))();
    func_0x0001081143d8(plVar1,0);
  }
  func_0x000108114238(param_1 + 3,0);
  func_0x0001081143b4(param_1 + 3);
  func_0x000108114364(plVar1);
  return param_1;
}



/* Entry: 108114734; end: 108114747;  */

void FUN_108114734(void)

{
  FUN_1081146e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108114748; end: 108114817;  */

void FUN_108114748(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    func_0x00010bf42760(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)(lVar1);
    return;
  }
  return;
}



/* Entry: 108114818; end: 108114863;  */

void FUN_108114818(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  FUN_1081143f4();
  *param_1 = uVar1;
  return;
}



/* Entry: 108114864; end: 1081148cb;  */

void FUN_108114864(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108114888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081148cc; end: 1081149bf;  */

undefined8 * FUN_1081148cc(undefined8 *param_1)

{
  func_0x00010810e780(param_1 + 1);
  func_0x000108114994(*param_1);
  return param_1;
}



/* Entry: 1081149c0; end: 108114a5b;  */

undefined8 * FUN_1081149c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24c78;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  FUN_1081411f4(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



/* Entry: 108114a5c; end: 108114a5f;  */

undefined8 * FUN_108114a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24c78;
  FUN_10837ca38(param_1 + 0xc);
  FUN_1080f33d8(param_1 + 6);
  FUN_1080f3394(param_1 + 3);
  func_0x000106f47224(param_1 + 2);
  return param_1;
}



/* Entry: 108114a60; end: 108114a73;  */

void FUN_108114a60(void)

{
  func_0x000108114a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108114a74; end: 108114aaf;  */

void FUN_108114a74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x18;
  FUN_108114ab0();
  if ((uVar1 & 1) == 0) {
    func_0x0001074714f0(param_1 + 0x18,param_2);
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}



/* Entry: 108114ab0; end: 108114ad7;  */

long FUN_108114ab0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    FUN_108114e0c();
    return lVar1;
  }
  return 0;
}



/* Entry: 108114ad8; end: 108114b13;  */

void FUN_108114ad8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x30;
  FUN_108114b14();
  if ((uVar1 & 1) == 0) {
    FUN_108114e84(param_1 + 0x30,param_2);
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}



/* Entry: 108114b14; end: 108114b3b;  */

long FUN_108114b14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    FUN_108114e58();
    return lVar1;
  }
  return 0;
}



/* Entry: 108114b3c; end: 108114cd3;  */

/* WARNING: Possible PIC construction at 0x000108114ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108114d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108114ca8) */
/* WARNING: Removing unreachable block (ram,0x000108114cc0) */
/* WARNING: Removing unreachable block (ram,0x000108114d04) */

void FUN_108114b3c(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float *extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x9;
  long extraout_x9_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar8 = param_1;
  func_0x000108114f30(param_2);
  lVar6 = *(long *)(lVar8 + 0x30);
  if (lVar6 == *(long *)(lVar8 + 0x38)) {
    func_0x000108114f30(extraout_x9);
    if (extraout_x9_00 == extraout_x8_00) {
      plVar5 = (long *)(param_1 + 0x10);
      lVar8 = 0;
    }
    else {
      ___stack_chk_fail();
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = (long *)(lVar6 + 8);
    }
  }
  else {
    fVar10 = *extraout_x8;
    fStack_34 = extraout_x8[1];
    fVar12 = extraout_x8[2];
    fVar11 = extraout_x8[3];
    fVar13 = fVar10 + (fVar12 - fVar10) * 0.5;
    fStack_30 = fVar13;
    fStack_38 = fVar13;
    fStack_2c = fVar11;
    if (*(int *)(param_1 + 0x48) - 1U < 7) {
      fVar14 = fStack_34 + (fVar11 - fStack_34) * 0.5;
      fStack_30 = fVar10;
      fStack_38 = fVar12;
      switch(*(int *)(param_1 + 0x48)) {
      case 2:
        fStack_2c = fVar14;
        fStack_34 = fVar14;
        break;
      case 3:
        fStack_2c = fStack_34;
        fStack_34 = fVar11;
        break;
      case 4:
        fStack_30 = fVar13;
        fStack_38 = fVar13;
        fStack_2c = fStack_34;
        fStack_34 = fVar11;
        break;
      case 5:
        fStack_30 = fVar12;
        fStack_38 = fVar10;
        fStack_2c = fStack_34;
        fStack_34 = fVar11;
        break;
      case 6:
        fStack_30 = fVar12;
        fStack_38 = fVar10;
        fStack_2c = fVar14;
        fStack_34 = fVar14;
        break;
      case 7:
        fStack_30 = fVar12;
        fStack_38 = fVar10;
      }
    }
    uVar7 = *(long *)(lVar8 + 0x38) - lVar6;
    lVar8 = *(long *)(param_1 + 0x18);
    if (uVar7 != *(long *)(param_1 + 0x20) - lVar8) {
      lVar8 = 0;
    }
    FUN_1083c1ad4(&lStack_40,&fStack_38,lVar6,lVar8,uVar7 >> 2,0,0,0);
    lVar8 = lStack_40;
    lStack_40 = 0;
    plVar5 = (long *)(param_1 + 0x10);
  }
  plVar9 = (long *)*plVar5;
  *plVar5 = lVar8;
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 1;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108114f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108114cd4; end: 108114d0f;  */

/* WARNING: Removing unreachable block (ram,0x000108114ef0) */
/* WARNING: Removing unreachable block (ram,0x000108114ef4) */
/* WARNING: Removing unreachable block (ram,0x000108114efc) */
/* WARNING: Removing unreachable block (ram,0x000108114f04) */
/* WARNING: Removing unreachable block (ram,0x000108114f08) */

void FUN_108114cd4(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108114f18(param_2 + 8,lVar4);
  return;
}



/* Entry: 108114d10; end: 108114d5b;  */

void FUN_108114d10(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    lVar1 = param_1 + 0x4c;
    FUN_1080f6488(lVar1,param_2);
    if ((int)lVar1 == 0) {
      return;
    }
  }
  FUN_108114b3c(param_1,param_2);
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x54) = param_2[1];
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 108114d5c; end: 108114deb;  */

void FUN_108114d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  FUN_108114d10();
  if (*(long *)(param_1 + 0x30) != *(long *)(param_1 + 0x38)) {
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_44 = 0x3f800000;
    uStack_3c = 0x40800000;
    FUN_108114cd4(param_1,&uStack_80);
    func_0x000108113818(param_2,&uStack_80,param_3,param_1 + 0x60);
    FUN_108375e94(&uStack_80);
  }
  return;
}



/* Entry: 108114dec; end: 108114e0b;  */

void FUN_108114dec(void)

{
  FUN_108114e0c();
  return;
}



/* Entry: 108114e0c; end: 108114e37;  */

bool FUN_108114e0c(float *param_1,float *param_2,float *param_3)

{
  for (; (param_1 != param_2 && (*param_1 == *param_3)); param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1 == param_2;
}



/* Entry: 108114e38; end: 108114e57;  */

void FUN_108114e38(void)

{
  FUN_108114e58();
  return;
}



/* Entry: 108114e58; end: 108114e83;  */

bool FUN_108114e58(int *param_1,int *param_2,int *param_3)

{
  for (; (param_1 != param_2 && (*param_1 == *param_3)); param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1 == param_2;
}


