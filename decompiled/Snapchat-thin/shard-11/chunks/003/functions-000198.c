/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083bb400; end: 1083bb467;  */

void FUN_1083bb400(long param_1,long *param_2)

{
  func_0x0001083bc8ec(param_1,*(undefined4 *)(param_1 + 0x30));
  func_0x0001083bc8ec();
  (**(code **)(*param_2 + 0xc0))(param_2,param_1 + 0x18);
  (**(code **)(*param_2 + 0xd8))(param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001083bb464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined1 *)(param_1 + 0x48));
  return;
}



/* Entry: 1083bb468; end: 1083bb4d3;  */

bool FUN_1083bb468(long param_1)

{
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x1c) == 1) && (*(int *)(param_1 + 0x30) != 3)) {
    return *(int *)(param_1 + 0x34) != 3;
  }
  return false;
}



/* Entry: 1083bb4d4; end: 1083bb613;  */

void FUN_1083bb4d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,float *param_7,undefined4 param_8,
                  undefined4 param_9,long param_10,undefined8 param_11,undefined1 param_12)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 unaff_x21;
  float fVar4;
  float fVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(char *)(param_10 + 4) == '\x01') {
    fVar4 = *(float *)(param_10 + 8);
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 == 1.0;
        bVar2 = 1.0 <= fVar4;
      }
    }
    if (bVar2 && !bVar1) goto LAB_1083bb5f8;
    fVar4 = *(float *)(param_10 + 0xc);
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 == 1.0;
        bVar2 = 1.0 <= fVar4;
      }
    }
    if (bVar2 && !bVar1) goto LAB_1083bb5f8;
  }
  uStack_49 = param_12;
  uStack_48 = param_9;
  uStack_44 = param_8;
  if ((*param_6 != 0) && (*param_7 < param_7[2])) {
    fVar4 = param_7[1];
    fVar5 = param_7[3];
    if (fVar4 < fVar5) {
      uStack_68 = *(undefined8 *)(*param_6 + 0x20);
      uStack_70 = 0;
      FUN_10817500c(&uStack_70);
      uStack_60 = CONCAT44(fVar5,fVar4);
      puVar3 = &uStack_60;
      uStack_58 = param_4;
      uStack_54 = param_5;
      FUN_108281a6c(puVar3,param_7);
      if (((ulong)puVar3 & 1) != 0) {
        uStack_71 = 0;
        func_0x0001083bb6a8(&uStack_70,param_6,param_7,&uStack_44,&uStack_48,param_10,&uStack_71,
                            &uStack_49);
        uStack_60 = uStack_70;
        uStack_70 = 0;
        FUN_1083bc830(&uStack_70);
        func_0x0001083bc974();
        func_0x0001083bc910();
        func_0x000106f47224(&uStack_60);
        return;
      }
LAB_1083bb5f8:
      *param_1 = 0;
      return;
    }
  }
  func_0x0001083bb0dc(&stack0xffffffffffffffd8);
  *param_1 = unaff_x21;
  FUN_1083bb148(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1083bb614; end: 1083bb727;  */

void FUN_1083bb614(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0x50;
  __Znwm();
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001083bb24c();
  *param_1 = uVar4;
  func_0x0001083bc8dc();
  return;
}



/* Entry: 1083bb728; end: 1083bb877;  */

void FUN_1083bb728(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  FUN_1083b7d24(auStack_60,param_3,param_8);
  FUN_1083bb384(&lStack_58,auStack_60,param_4,param_5,param_6,param_7,0);
  func_0x0001083bc8e4();
  lVar5 = lStack_58;
  if (lStack_58 != 0) {
    if (0x1a < *(uint *)(param_3 + 0x20)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1083bb84c);
      (*pcVar4)();
    }
    if (((1 << (ulong)(*(uint *)(param_3 + 0x20) & 0x1f) & 0x7affffdU) == 0) &&
       (lVar6 = *(long *)(param_2 + 8), lVar6 != 0)) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_78 = lStack_58;
      lStack_58 = 0;
      lStack_70 = lVar6;
      FUN_1083ba7d0(&lStack_68,6,&lStack_70,&lStack_78);
      lVar5 = lStack_58;
      lStack_58 = lStack_68;
      lStack_68 = 0;
      FUN_1083bc804(lVar5);
      func_0x0001083bc940();
      func_0x0001083bc92c();
      func_0x0001083bc8b0();
      lVar5 = lStack_58;
    }
    lStack_58 = 0;
  }
  *param_1 = lVar5;
  func_0x0001083bc890();
  return;
}



/* Entry: 1083bb878; end: 1083bbad3;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1083bb878(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   long param_9,undefined8 param_10,int param_11,long param_12)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  ulong unaff_d8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long alStack_c0 [6];
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  alStack_c0[2] = *(undefined8 *)(param_9 + 0x20);
  alStack_c0[1] = 0;
  uStack_80 = param_5;
  uStack_7c = param_6;
  uStack_78 = param_7;
  uStack_74 = param_8;
  uStack_70 = param_1;
  uStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  FUN_10817500c(alStack_c0 + 1);
  uStack_90 = param_1;
  uStack_8c = param_2;
  uStack_88 = param_3;
  uStack_84 = param_4;
  FUN_10814c9e0(alStack_c0 + 1,&uStack_70,&uStack_80,0);
  puVar7 = &uStack_90;
  FUN_108281a6c(puVar7,&uStack_70);
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = &uStack_70;
    FUN_10838ed10(puVar7,&uStack_90);
    iVar6 = (int)puVar7;
    func_0x0001083bc960();
    if (iVar6 == 0) {
      return unaff_d8;
    }
    func_0x000108142084(alStack_c0 + 1,&uStack_70,1);
    uStack_80 = param_1;
    uStack_7c = param_2;
    uStack_78 = param_3;
    uStack_74 = param_4;
  }
  uVar2 = *(uint *)(param_9 + 0x18);
  if (uVar2 < 0x1b) {
    alStack_c0[0] = 0;
    if (param_11 == 0) {
      FUN_1083b5bfc(&lStack_c8,param_9,0,0,param_10,alStack_c0 + 1);
      lVar8 = alStack_c0[0];
      alStack_c0[0] = lStack_c8;
      lStack_c8 = 0;
      FUN_1083bc804(lVar8);
      func_0x0001083bc890();
    }
    else {
      piVar1 = (int *)(param_9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lStack_d0 = param_9;
      FUN_1083bb4d4(&lStack_c8,&lStack_d0,&uStack_70,0,0,param_10,alStack_c0 + 1,0);
      lVar8 = alStack_c0[0];
      alStack_c0[0] = lStack_c8;
      lStack_c8 = 0;
      FUN_1083bc804(lVar8);
      func_0x0001083bc890();
      func_0x0001083bc8e4();
    }
    if (alStack_c0[0] == 0) {
      func_0x0001083bc960();
    }
    else {
      lVar8 = alStack_c0[0];
      if (((0x500002U >> (ulong)(uVar2 & 0x1f) & 1) != 0) &&
         (lVar9 = *(long *)(param_12 + 8), lVar9 != 0)) {
        piVar1 = (int *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lStack_e0 = alStack_c0[0];
        alStack_c0[0] = 0;
        lStack_d8 = lVar9;
        FUN_1083ba7d0(&lStack_c8,6,&lStack_d8,&lStack_e0);
        lVar8 = alStack_c0[0];
        alStack_c0[0] = lStack_c8;
        lStack_c8 = 0;
        FUN_1083bc804(lVar8);
        func_0x0001083bc890();
        func_0x0001083bc8b0();
        func_0x0001083bc940();
        lVar8 = alStack_c0[0];
      }
      alStack_c0[0] = 0;
      func_0x000108114f18(param_12 + 8,lVar8);
      func_0x0001083bc92c();
      unaff_d8 = (ulong)uStack_80;
    }
    func_0x000106f47224(alStack_c0);
    return unaff_d8;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1083bba80);
  (*pcVar5)();
}



/* Entry: 1083bbad4; end: 1083bbf5b;  */

byte FUN_1083bbad4(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 *puStack_288;
  long *plStack_280;
  undefined8 *puStack_278;
  undefined8 **ppuStack_270;
  undefined1 **ppuStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  undefined1 **ppuStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  undefined8 *puStack_238;
  undefined1 *puStack_230;
  undefined1 uStack_221;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined8 *puStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  undefined1 auStack_1c0 [4];
  float fStack_1bc;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte bStack_154;
  undefined1 auStack_150 [24];
  int iStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [40];
  undefined8 uStack_100;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = *(ulong *)(param_1 + 0x18);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  if ((int)uStack_a0 != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar4 + 0x90))();
    uStack_a0 = uStack_a0 & 0xffffff0000000000;
    uVar6 = 2;
    if ((int)plVar4 == 0) {
      uVar6 = 0;
    }
    uStack_98 = 0;
    uStack_90 = CONCAT44(uVar6,1);
  }
  uVar2 = *param_2;
  lVar5 = param_2[1];
  uStack_d8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_c8 = 0;
  uStack_d0 = 0x3f800000;
  uStack_c0 = 0x103f800000;
  lStack_b0 = lVar5;
  uStack_a8 = uVar2;
  if (*(char *)(param_3 + 0x78) == '\x01') {
    lVar8 = param_3;
    FUN_1083bbf5c(param_3,&uStack_e0);
    if ((int)lVar8 == 0) {
      return 0;
    }
    if ((float)uStack_c0 != 1.0) {
      FUN_108363a40(&uStack_e0);
    }
  }
  iVar3 = uStack_90._4_4_;
  lVar8 = lVar5;
  FUN_108368ffc(lVar5,*(undefined8 *)(param_1 + 0x10),&uStack_e0,uStack_90._4_4_);
  if (lVar8 == 0) {
    return 0;
  }
  FUN_1083bbf94(auStack_150);
  FUN_10814105c(&uStack_1d0,lVar8);
  uStack_1a0 = *(undefined8 *)(lVar8 + 0x5c);
  lStack_1a8 = *(long *)(lVar8 + 0x54);
  uStack_190 = *(undefined8 *)(lVar8 + 0x6c);
  uStack_198 = *(undefined8 *)(lVar8 + 100);
  uStack_188 = *(undefined8 *)(lVar8 + 0x74);
  puStack_220 = auStack_150;
  puStack_218 = auStack_128;
  FUN_1083bbfdc(&puStack_220,&uStack_1d0);
  func_0x0001083bc908();
  bVar9 = uStack_a0._4_1_;
  if (((uStack_a0 & 0x100000000) == 0) && ((*(byte *)(param_3 + 0x78) & 1) != 0)) {
    iVar7 = (int)uStack_90;
    FUN_1081600e0(&uStack_1d0,auStack_128,&uStack_e0);
    if (iVar7 == 1) {
      iVar7 = (int)&uStack_1d0;
      func_0x0001081421e0();
      if (((iVar7 < 2) && (fStack_1c8 == (float)(int)fStack_1c8)) &&
         (fStack_1bc == (float)(int)fStack_1bc)) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
    }
    bVar9 = 0;
    uStack_a0 = uStack_a0 & 0xffffff0000000000;
    uStack_98 = 0;
    uStack_90 = CONCAT44(iVar3,iVar7);
  }
  FUN_1083be330(&uStack_1d0,param_3,param_2,auStack_128);
  if ((bStack_154 & 1) == 0) goto LAB_1083bbea4;
  func_0x0001083bc948(auStack_150);
  FUN_1083bbf94(&uStack_1d0);
  fVar12 = *(float *)(lVar8 + 0x50);
  if (fVar12 <= 0.0) {
    lVar8 = 0;
  }
  else {
    FUN_10814105c(&puStack_220,lVar8 + 0x28);
    uStack_1f0 = *(undefined8 *)(lVar8 + 0x84);
    puStack_1f8 = *(undefined8 **)(lVar8 + 0x7c);
    uStack_1e0 = *(undefined8 *)(lVar8 + 0x94);
    uStack_1e8 = *(undefined8 *)(lVar8 + 0x8c);
    uStack_1d8 = *(undefined8 *)(lVar8 + 0x9c);
    puStack_288 = &uStack_1d0;
    plStack_280 = &lStack_1a8;
    FUN_1083bbfdc(&puStack_288,&puStack_220);
    func_0x0001083bc908();
    lVar8 = lVar5;
    func_0x0001081865ac(lVar5,0x18c,4);
    *(float *)(lVar8 + 0x188) = fVar12;
    uVar10 = NEON_scvtf(uStack_1b0,4);
    uVar11 = NEON_scvtf(uStack_130,4);
    *(ulong *)(lVar8 + 0x180) =
         CONCAT44((float)((ulong)uVar10 >> 0x20) / (float)((ulong)uVar11 >> 0x20),
                  (float)uVar10 / (float)uVar11);
    func_0x0001083bc948(&uStack_1d0);
    func_0x0001083bc91c(uVar2,0xd3);
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (iVar7 == 3) {
    uStack_221 = *(int *)(param_1 + 0x34) == 3;
  }
  else {
    uStack_221 = false;
  }
  puStack_240 = &uStack_221;
  puStack_238 = &uStack_a8;
  puStack_220 = auStack_150;
  plStack_208 = &lStack_b0;
  puStack_1f8 = &uStack_a0;
  puStack_230 = param_1;
  puStack_218 = param_1;
  puStack_210 = puStack_238;
  puStack_200 = param_2;
  if (((iStack_138 == 4 || iStack_138 == 6) && (bVar9 != 1)) && ((int)uStack_90 == 1 && iVar3 != 2))
  {
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x34) == 0)) {
      FUN_108387820(uVar2,0x2d,uStack_100);
      goto LAB_1083bbee0;
    }
LAB_1083bbe24:
    func_0x0001081865ac(lVar5,0x3c0,4);
    puStack_278 = &uStack_a8;
    plStack_280 = &lStack_248;
    ppuStack_268 = &puStack_240;
    puStack_288 = &uStack_a0;
    ppuStack_270 = &puStack_260;
    puStack_260 = puStack_278;
    plStack_258 = plStack_280;
    ppuStack_250 = ppuStack_268;
    lStack_248 = lVar5;
    FUN_1083bc298(&puStack_288,auStack_150);
    if (lVar8 != 0) {
      func_0x0001083bc91c(uStack_a8,0xd4);
      FUN_1083bc298(&puStack_288,&uStack_1d0);
      func_0x0001083bc91c(uStack_a8,0xd5);
    }
    func_0x0001083bc174(&puStack_220);
  }
  else {
    bVar1 = 0;
    if (iVar7 == 0) {
      bVar1 = bVar9;
    }
    if (((bVar1 & (iStack_138 == 4 || iStack_138 == 6)) != 1) || (*(int *)(param_1 + 0x34) != 0))
    goto LAB_1083bbe24;
    FUN_108387820(uVar2,0xc2,uStack_100);
LAB_1083bbee0:
    if (iStack_138 == 6) {
      FUN_108387820(uStack_a8,0xb,0);
    }
    func_0x0001083bc174(&puStack_220);
  }
  FUN_10810a400(auStack_1c0);
LAB_1083bbea4:
  func_0x0001083bc934();
  return bStack_154;
}



/* Entry: 1083bbf5c; end: 1083bbf93;  */

void FUN_1083bbf5c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x00010829c1c4(auStack_48);
  FUN_10818cfd0(auStack_48,param_2);
  return;
}



/* Entry: 1083bbf94; end: 1083bbfdb;  */

undefined8 * FUN_1083bbf94(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10810c9b4(param_1 + 5);
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 1083bbfdc; end: 1083bc01b;  */

undefined8 * FUN_1083bbfdc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_10827c3e4(*param_1);
  puVar1 = (undefined8 *)param_1[1];
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  puVar1[4] = *(undefined8 *)(param_2 + 0x48);
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  return param_1;
}



/* Entry: 1083bc01c; end: 1083bc297;  */

void FUN_1083bc01c(undefined8 *param_1,float *param_2,long param_3,int param_4,int param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pfVar1 = param_2;
  func_0x0001081865e0(param_2,0x58,8);
  *(float **)(param_2 + 2) = pfVar1 + 0x16;
  pfVar1[10] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar1[8] = 0.0;
  pfVar1[9] = 0.0;
  pfVar1[0xe] = 0.0;
  pfVar1[0xf] = 0.0;
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[0x12] = 0.0;
  pfVar1[0x13] = 0.0;
  pfVar1[0x10] = 0.0;
  pfVar1[0x11] = 0.0;
  pfVar1[0x14] = 0.0;
  pfVar1[0x15] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  param_1[10] = pfVar1;
  *(undefined8 *)pfVar1 = *param_1;
  puVar2 = param_1;
  func_0x000108337358();
  lVar4 = param_1[10];
  *(int *)(lVar4 + 8) = (int)puVar2;
  uVar7 = NEON_scvtf(param_1[4],4);
  *(undefined8 *)(lVar4 + 0xc) = uVar7;
  if (*(char *)(param_3 + 4) == '\x01') {
    FUN_1083bb198(&uStack_80,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
    *(undefined8 *)(lVar4 + 0x1c) = uStack_78;
    *(undefined8 *)(lVar4 + 0x14) = uStack_80;
    *(undefined8 *)(lVar4 + 0x2c) = uStack_68;
    *(undefined8 *)(lVar4 + 0x24) = uStack_70;
    *(undefined8 *)(lVar4 + 0x3c) = uStack_58;
    *(undefined8 *)(lVar4 + 0x34) = uStack_60;
    *(undefined8 *)(lVar4 + 0x4c) = uStack_48;
    *(undefined8 *)(lVar4 + 0x44) = uStack_50;
  }
  pfVar1 = param_2;
  FUN_1083bc47c();
  param_1[0xb] = pfVar1;
  pfVar1 = param_2;
  FUN_1083bc47c();
  param_1[0xc] = pfVar1;
  iVar5 = *(int *)(param_1 + 4);
  pfVar3 = (float *)param_1[0xb];
  *pfVar3 = (float)iVar5;
  pfVar3[1] = 1.0 / (float)iVar5;
  iVar5 = *(int *)((long)param_1 + 0x24);
  *pfVar1 = (float)iVar5;
  pfVar1[1] = 1.0 / (float)iVar5;
  if (((*(byte *)(param_3 + 4) & 1) == 0) && (*(int *)(param_3 + 0x10) == 0)) {
    *(undefined1 *)(param_1[10] + 0x54) = 1;
    pfVar1[2] = 1.4013e-45;
    pfVar3[2] = 1.4013e-45;
  }
  if (param_4 == 3 || param_5 == 3) {
    FUN_1083bc4b0();
    param_1[0xd] = param_2;
    lVar4 = param_1[10];
    fVar6 = *(float *)param_1[0xb];
    fVar8 = *(float *)param_1[0xc];
    param_2[0x10] = fVar6;
    param_2[0x11] = fVar8;
    if (*(char *)(lVar4 + 0x54) == '\x01') {
      param_2[0x12] = fVar6;
      param_2[0x13] = fVar8;
    }
  }
  return;
}



/* Entry: 1083bc298; end: 1083bc447;  */

void FUN_1083bc298(long *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  int unaff_w22;
  byte bVar10;
  byte unaff_w23;
  long *plVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  lVar8 = *param_1;
  if (*(char *)(lVar8 + 4) == '\x01') {
    FUN_1083bb198(&uStack_60,*(undefined4 *)(lVar8 + 8),*(undefined4 *)(lVar8 + 0xc));
    lVar8 = *(long *)param_1[1];
    *(undefined8 *)(lVar8 + 0x188) = uStack_58;
    *(undefined8 *)(lVar8 + 0x180) = uStack_60;
    *(undefined8 *)(lVar8 + 0x198) = in_stack_ffffffffffffffb8;
    *(undefined8 *)(lVar8 + 400) = in_stack_ffffffffffffffb0;
    *(undefined8 *)(lVar8 + 0x1a8) = in_stack_ffffffffffffffc8;
    *(undefined8 *)(lVar8 + 0x1a0) = in_stack_ffffffffffffffc0;
    *(undefined8 *)(lVar8 + 0x1b8) = in_stack_ffffffffffffffd8;
    *(undefined8 *)(lVar8 + 0x1b0) = in_stack_ffffffffffffffd0;
    func_0x0001083bc8fc(param_1[2]);
    FUN_108387820();
    func_0x0001083bc994();
    func_0x0001083bc888();
    func_0x0001083bc9ac();
    func_0x0001083bc888();
    func_0x0001083bc988();
    func_0x0001083bc888();
    func_0x0001083bc9a0();
    func_0x0001083bc888();
    func_0x0001083bc994();
    func_0x0001083bc888();
    func_0x0001083bc9ac();
    func_0x0001083bc888();
    func_0x0001083bc988();
    func_0x0001083bc888();
    func_0x0001083bc9a0();
    func_0x0001083bc888();
    func_0x0001083bc994();
    func_0x0001083bc888();
    func_0x0001083bc9ac();
    func_0x0001083bc888();
    func_0x0001083bc988();
    func_0x0001083bc888();
    func_0x0001083bc9a0();
    func_0x0001083bc888();
    func_0x0001083bc994();
    func_0x0001083bc888();
    func_0x0001083bc9ac();
    func_0x0001083bc888();
    func_0x0001083bc988();
    func_0x0001083bc888();
    func_0x0001083bc9a0();
LAB_1083bc40c:
    func_0x0001083bc888();
    plVar3 = *(long **)param_1[2];
    iVar5 = 1;
    puVar7 = (undefined8 *)0x0;
    goto code_r0x000108387820;
  }
  if (*(int *)(lVar8 + 0x10) == 1) {
    func_0x0001083bc8fc(param_1[2]);
    FUN_108387820();
    func_0x0001083bc888(param_1[3],0xc4,0xc6);
    func_0x0001083bc888(param_1[3],0xc5,0xc6);
    func_0x0001083bc888(param_1[3],0xc4,199);
    goto LAB_1083bc40c;
  }
  plVar4 = (long *)param_1[4];
  if ((*(byte *)*plVar4 & 1) == 0) {
    lVar8 = plVar4[2];
    uVar2 = *(int *)(lVar8 + 0x30) - 1;
    plVar3 = plVar4;
    if (uVar2 < 3) {
      func_0x0001083bc87c(plVar4,*(undefined4 *)(&UNK_10df20518 + (ulong)uVar2 * 4));
      FUN_108387820();
    }
    uVar2 = *(int *)(lVar8 + 0x34) - 1;
    if (uVar2 < 3) {
      lVar8 = *(long *)(&UNK_10df20528 + (ulong)uVar2 * 8);
      uVar6 = *(undefined4 *)(&UNK_10df20540 + (ulong)uVar2 * 4);
      goto LAB_1083bc5f0;
    }
  }
  else {
    uVar6 = 0x56;
    lVar8 = 0x68;
LAB_1083bc5f0:
    plVar3 = *(long **)plVar4[1];
    FUN_108387820(plVar3,uVar6,*(undefined8 *)(param_2 + lVar8));
  }
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 1:
    func_0x0001083bc87c();
    break;
  case 2:
    func_0x0001083bc87c();
    break;
  case 3:
    func_0x0001083bc87c();
    break;
  case 4:
    func_0x0001083bc87c();
    break;
  case 5:
    func_0x0001083bc87c();
    goto code_r0x0001083bc760;
  case 6:
    func_0x0001083bc87c();
    goto code_r0x0001083bc748;
  case 7:
    func_0x0001083bc87c();
    break;
  case 8:
    func_0x0001083bc87c();
    goto code_r0x0001083bc748;
  case 9:
    func_0x0001083bc87c();
    goto code_r0x0001083bc760;
  case 10:
    func_0x0001083bc87c();
    goto code_r0x0001083bc738;
  case 0xb:
    func_0x0001083bc87c();
code_r0x0001083bc738:
    FUN_108387820();
    func_0x0001083bc87c();
    goto code_r0x0001083bc748;
  case 0xc:
    func_0x0001083bc87c();
code_r0x0001083bc748:
    FUN_108387820();
    func_0x0001083bc87c();
    break;
  case 0xd:
    func_0x0001083bc87c();
    break;
  case 0xe:
    func_0x0001083bc87c();
    FUN_108387820();
    func_0x0001083bc87c();
    break;
  case 0xf:
  case 0x10:
    func_0x0001083bc87c();
    break;
  case 0x11:
    func_0x0001083bc87c();
code_r0x0001083bc760:
    FUN_108387820();
    func_0x0001083bc87c();
    break;
  case 0x12:
    func_0x0001083bc87c();
    break;
  case 0x13:
    func_0x0001083bc87c();
    break;
  case 0x14:
    func_0x0001083bc87c();
    break;
  case 0x15:
    func_0x0001083bc87c();
    break;
  case 0x16:
    func_0x0001083bc87c();
    break;
  case 0x17:
    func_0x0001083bc87c();
    break;
  case 0x18:
    func_0x0001083bc87c();
    break;
  case 0x19:
    func_0x0001083bc87c();
    FUN_108387820();
    func_0x0001083bc87c();
    func_0x000108388124();
    goto LAB_1083bc774;
  case 0x1a:
    func_0x0001083bc87c();
    FUN_108387820();
    func_0x0001083bc87c();
    break;
  default:
    goto LAB_1083bc774;
  }
  FUN_108387820();
LAB_1083bc774:
  puVar7 = *(undefined8 **)(param_2 + 0x68);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  func_0x0001083bc87c();
  iVar5 = 0x57;
code_r0x000108387820:
  bVar10 = 0;
  iVar9 = 0;
  switch(iVar5) {
  case 0x12:
  case 0x13:
  case 0x33:
  case 0x37:
    bVar10 = 0;
    goto code_r0x000108387980;
  case 0x14:
    iVar9 = 0;
    bVar10 = 1;
    break;
  case 0x15:
  case 0x19:
  case 0x1d:
  case 0x21:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x35:
  case 0x36:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x78:
  case 0x7c:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0x8c:
  case 0x90:
  case 0x94:
  case 0x98:
  case 0x9c:
  case 0x9d:
    break;
  case 0x16:
  case 0x17:
  case 0x34:
  case 0x38:
    func_0x000108388e04();
    break;
  case 0x18:
    func_0x000108388df8();
    break;
  case 0x1a:
  case 0x1b:
    func_0x000108388e04();
    break;
  case 0x1c:
    func_0x000108388df8();
    break;
  case 0x1e:
  case 0x1f:
    func_0x000108388e04();
    break;
  case 0x20:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
    func_0x000108388df8();
    break;
  case 0x22:
  case 0x23:
    func_0x000108388e04();
    break;
  case 0x24:
    func_0x000108388df8();
    break;
  case 0x26:
    func_0x000108388df8();
    break;
  case 0x4f:
    bVar10 = 1;
code_r0x000108387980:
    iVar9 = 1;
    break;
  case 0x61:
    func_0x000108388e58(plVar3,puVar7 + 2);
    func_0x000108388e58(plVar3,puVar7);
    func_0x000108388e68();
    break;
  case 0x75:
  case 0x76:
    func_0x000108388e04();
    break;
  case 0x77:
    func_0x000108388df8();
    break;
  case 0x79:
  case 0x7a:
    func_0x000108388e04();
    break;
  case 0x7b:
    func_0x000108388df8();
    break;
  case 0x7d:
  case 0x7e:
    func_0x000108388e04();
    break;
  case 0x7f:
    func_0x000108388df8();
    break;
  case 0x81:
  case 0x82:
    func_0x000108388e04();
    break;
  case 0x83:
    func_0x000108388df8();
    break;
  case 0x85:
  case 0x86:
    func_0x000108388e04();
    break;
  case 0x87:
    func_0x000108388df8();
    break;
  case 0x89:
  case 0x8a:
    func_0x000108388e04();
    break;
  case 0x8b:
    func_0x000108388df8();
    break;
  case 0x8d:
  case 0x8e:
    func_0x000108388e04();
    break;
  case 0x8f:
    func_0x000108388df8();
    break;
  case 0x91:
  case 0x92:
    func_0x000108388e04();
    break;
  case 0x93:
    func_0x000108388df8();
    break;
  case 0x95:
  case 0x96:
    func_0x000108388e04();
    break;
  case 0x97:
    func_0x000108388df8();
    break;
  case 0x99:
  case 0x9a:
    func_0x000108388e04();
    break;
  case 0x9b:
    func_0x000108388df8();
    break;
  case 0x9e:
  case 0x9f:
    func_0x000108388e04();
    break;
  case 0xa0:
    func_0x000108388df8();
    break;
  default:
    if (iVar5 == 0xe1) {
      plVar4 = plVar3;
      FUN_108387ab4();
      func_0x000108388e68();
      *puVar7 = plVar4;
      iVar9 = unaff_w22;
      bVar10 = unaff_w23;
    }
    else {
      iVar9 = 0;
      bVar10 = 0;
      if (iVar5 == 0xf2) {
        plVar4 = plVar3;
        FUN_108387ab4();
        func_0x000108388e68();
        puVar7[1] = plVar4;
      }
    }
  }
  plVar11 = (long *)*plVar3;
  lVar8 = plVar3[2];
  plVar4 = plVar11;
  func_0x0001081865e0(plVar11,0x18,8);
  plVar11[1] = (long)(plVar4 + 3);
  *plVar4 = lVar8;
  *(int *)(plVar4 + 1) = iVar5;
  plVar4[2] = (long)puVar7;
  plVar3[2] = (long)plVar4;
  *(int *)(plVar3 + 4) = (int)plVar3[4] + 1;
  if (((bVar10 & 1) == 0) && (iVar9 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(plVar3[9] + 0xd);
  lVar8 = (long)(int)plVar3[10] << 4;
  while( true ) {
    if (lVar8 == 0) {
      func_0x000108388900(plVar3 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(undefined8 **)(pbVar1 + -0xd) == puVar7) break;
    pbVar1 = pbVar1 + 0x10;
    lVar8 = lVar8 + -0x10;
  }
  pbVar1[-1] = (byte)iVar9 | pbVar1[-1];
  *pbVar1 = bVar10 | *pbVar1;
  return;
}



/* Entry: 1083bc448; end: 1083bc44b;  */

undefined8 * FUN_1083bc448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a436d0;
  func_0x000106f47184(param_1 + 2);
  return param_1;
}



/* Entry: 1083bc44c; end: 1083bc45f;  */

void FUN_1083bc44c(void)

{
  FUN_1083bc7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083bc460; end: 1083bc47b;  */

undefined8 FUN_1083bc460(void)

{
  return 0;
}



/* Entry: 1083bc47c; end: 1083bc4af;  */

void FUN_1083bc47c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001083bc924(param_1,0xc);
  param_1[1] = (long)puVar1 + 0xc;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  return;
}



/* Entry: 1083bc4b0; end: 1083bc4cf;  */

void FUN_1083bc4b0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1083bc4d0(param_1,&uStack_11);
  return;
}



/* Entry: 1083bc4d0; end: 1083bc507;  */

void FUN_1083bc4d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001083bc924(param_1,0x50);
  param_1[1] = puVar1 + 10;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  return;
}



/* Entry: 1083bc508; end: 1083bc7d7;  */

/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387854) */
/* WARNING: Removing unreachable block (ram,0x0001083879b0) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083bc508(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  func_0x0001083bc8fc(*param_1);
  FUN_108387820();
  func_0x0001083bc8fc(*param_1);
  FUN_108387820();
  plVar2 = (long *)param_1[2];
  func_0x0001083bc560(plVar2,param_4);
  func_0x0001083bc8fc(*param_1);
  plVar3 = (long *)*plVar2;
  lVar4 = plVar2[2];
  plVar1 = plVar3;
  func_0x0001081865e0(plVar3,0x18,8);
  plVar3[1] = (long)(plVar1 + 3);
  *plVar1 = lVar4;
  *(undefined4 *)(plVar1 + 1) = 0xd1;
  plVar1[2] = param_3;
  plVar2[2] = (long)plVar1;
  *(int *)(plVar2 + 4) = (int)plVar2[4] + 1;
  return;
}



/* Entry: 1083bc7d8; end: 1083bc803;  */

undefined8 * FUN_1083bc7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a436d0;
  func_0x000106f47184(param_1 + 2);
  return param_1;
}



/* Entry: 1083bc804; end: 1083bc82f;  */

void FUN_1083bc804(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001083bc828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083bc830; end: 1083bc87b;  */

long * FUN_1083bc830(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083bc87c; end: 1083bc9bf;  */

undefined8 FUN_1083bc87c(void)

{
  long unaff_x19;
  
  return **(undefined8 **)(unaff_x19 + 8);
}



/* Entry: 1083bc9c0; end: 1083bca23;  */

long * FUN_1083bc9c0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 auStack_58 [40];
  
  plVar1 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar1 + 0x50))();
  if ((param_3 != 0) && ((int)plVar1 != 0)) {
    FUN_1081600e0(auStack_58,param_1 + 0xc,param_3);
    func_0x0001083bcc70();
  }
  return plVar1;
}



/* Entry: 1083bca24; end: 1083bca67;  */

void FUN_1083bca24(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0xa0))(param_2,param_1 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0001083bca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1083bca68; end: 1083bcae7;  */

long * FUN_1083bca68(long param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_40 = 0x103f800000;
  plVar1 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar1 + 0x60))(plVar1,&uStack_60);
  if ((param_2 != 0) && (plVar1 != (long *)0x0)) {
    FUN_1081600e0(auStack_88,param_1 + 0xc,&uStack_60);
    func_0x0001083bcc70();
  }
  return plVar1;
}



/* Entry: 1083bcae8; end: 1083bcaef;  */

void FUN_1083bcae8(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  plVar2 = *(long **)(param_1 + 0x38);
  puVar1 = auStack_30;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,puVar1);
  if ((int)plVar2 != 0) {
    puVar1 = auStack_30;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  }
  return;
}



/* Entry: 1083bcaf0; end: 1083bcb3f;  */

void FUN_1083bcaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_9c [124];
  
  plVar1 = *(long **)(param_1 + 0x38);
  FUN_1083be4d4(auStack_9c,param_3,param_1 + 0xc);
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,auStack_9c);
  return;
}



/* Entry: 1083bcb40; end: 1083bcb67;  */

void FUN_1083bcb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083bccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
  return;
}



/* Entry: 1083bcb68; end: 1083bcba7;  */

void FUN_1083bcb68(void)

{
  func_0x0001083bcc94();
  return;
}



/* Entry: 1083bcba8; end: 1083bcc07;  */

undefined8 FUN_1083bcba8(void)

{
  return 0;
}



/* Entry: 1083bcc08; end: 1083bcc47;  */

void FUN_1083bcc08(void)

{
  func_0x0001083bcc88();
  return;
}



/* Entry: 1083bcc48; end: 1083bcd1f;  */

undefined8 FUN_1083bcc48(void)

{
  return 0;
}



/* Entry: 1083bcd20; end: 1083bcdaf;  */

void FUN_1083bcd20(ulong param_1)

{
  undefined8 *unaff_x19;
  int unaff_w21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001083bd0a8();
  if ((param_1 & 1) == 0) {
    *unaff_x19 = 0;
  }
  else if (unaff_w21 == 0) {
    uStack_58 = 0x3f0000003f000000;
    uStack_60 = 0x3f0000003f000000;
    func_0x0001083bd0cc(&uStack_60);
    func_0x0001083bd0c4();
  }
  else {
    __Znwm(0x38);
    FUN_1083bd0d8();
  }
  return;
}



/* Entry: 1083bcdb0; end: 1083bce33;  */

void FUN_1083bcdb0(ulong param_1)

{
  undefined8 *unaff_x19;
  int unaff_w21;
  
  func_0x0001083bd0a8();
  if ((param_1 & 1) == 0) {
    *unaff_x19 = 0;
  }
  else if (unaff_w21 == 0) {
    func_0x0001083bd0cc(&UNK_10df20580);
    func_0x0001083bd0c4();
  }
  else {
    __Znwm(0x38);
    FUN_1083bd0d8();
  }
  return;
}



/* Entry: 1083bce34; end: 1083bce93;  */

void FUN_1083bce34(long param_1,long *param_2)

{
  FUN_1083bd088(param_1,*(undefined4 *)(param_1 + 0xc));
  func_0x0001083bd098(*(undefined4 *)(param_1 + 0x10));
  func_0x0001083bd098(*(undefined4 *)(param_1 + 0x14));
  FUN_1083bd088();
  func_0x0001083bd098(*(undefined4 *)(param_1 + 0x1c));
  FUN_1083bd088();
                    /* WARNING: Could not recover jumptable at 0x0001083bce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(param_1 + 0x24));
  return;
}



/* Entry: 1083bce94; end: 1083bcfd7;  */

char FUN_1083bce94(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char cVar5;
  long lVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b4 [124];
  char cStack_38;
  char cStack_31;
  
  uStack_d8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_c8 = 0;
  uStack_d0 = 0x3f800000;
  uStack_c0 = 0x103f800000;
  FUN_1083be330(auStack_b4,param_3,param_2,&uStack_e0);
  if (cStack_38 == '\x01') {
    pcVar1 = (char *)(param_1 + 0x29);
    cStack_31 = *pcVar1;
    cVar5 = cStack_31;
    if (cStack_31 != '\0') goto LAB_1083bcf4c;
    pcVar3 = pcVar1;
    FUN_10825bc50(pcVar1,&cStack_31,1,0,0);
    if ((int)pcVar3 == 0) {
      do {
        cVar5 = *pcVar1;
LAB_1083bcf4c:
      } while (cVar5 != '\x02');
    }
    else {
      FUN_10829bb5c(&uStack_e0,param_1);
      uVar2 = uStack_e0;
      uStack_e0 = 0;
      FUN_10829c150(param_1 + 0x30,uVar2);
      FUN_10829c12c(&uStack_e0);
      *(undefined1 *)(param_1 + 0x29) = 2;
    }
    puVar4 = (undefined4 *)param_2[1];
    func_0x0001081865ac(puVar4,0x30,8);
    *puVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar6 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(puVar4 + 1) = *(undefined8 *)(lVar6 + 0x110c);
    puVar4[3] = (float)*(int *)(lVar6 + 0x1114);
    puVar4[4] = (float)*(int *)(lVar6 + 0x111c);
    *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(param_1 + 0x28);
    puVar4[6] = *(undefined4 *)(param_1 + 0x18);
    *(long *)(puVar4 + 8) = lVar6 + 4;
    *(long *)(puVar4 + 10) = lVar6 + 0x104;
    FUN_108387820(*param_2,0xd2,puVar4);
  }
  return cStack_38;
}



/* Entry: 1083bcfd8; end: 1083bd027;  */

bool FUN_1083bcfd8(float param_1,float param_2,float param_3,uint param_4,int *param_5)

{
  bool bVar1;
  
  bVar1 = false;
  if (((0.0 <= param_1) && (0.0 <= param_2)) && (param_4 < 0x100)) {
    if ((param_5 != (int *)0x0) && ((*param_5 < 0 || (param_5[1] < 0)))) {
      return false;
    }
    bVar1 = !NAN(param_3 - param_3);
  }
  return bVar1;
}



/* Entry: 1083bd028; end: 1083bd03b;  */

void FUN_1083bd028(void)

{
  FUN_1083bd058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083bd03c; end: 1083bd057;  */

undefined8 FUN_1083bd03c(void)

{
  return 0;
}



/* Entry: 1083bd058; end: 1083bd087;  */

undefined8 * FUN_1083bd058(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a438c8;
  FUN_10829c12c(param_1 + 6);
  return param_1;
}



/* Entry: 1083bd088; end: 1083bd0d7;  */

void FUN_1083bd088(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001083bd094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x38))();
  return;
}



/* Entry: 1083bd0d8; end: 1083bd0ff;  */

void FUN_1083bd0d8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083bccb8();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083bd100; end: 1083bd1a7;  */

void FUN_1083bd100(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lStack_58;
  
  if ((param_6 == 0) || (uVar4 = param_6, FUN_10818cfd0(param_6,0), (uVar4 & 1) != 0)) {
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_58 = param_2;
    FUN_1083bd1a8(param_1,&lStack_58,param_3,param_4,param_5,param_6,param_7);
    func_0x0001083bdc04();
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083bd1a8; end: 1083bd267;  */

void FUN_1083bd1a8(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  long *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined8 param_10,float *param_11)

{
  bool bVar1;
  undefined8 unaff_x21;
  float *pfStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pfStack_48 = param_11;
  uStack_3c = param_9;
  uStack_38 = param_8;
  uStack_34 = param_7;
  if ((long *)*param_6 != (long *)0x0) {
    (**(code **)(*(long *)*param_6 + 0x20))();
    bVar1 = false;
    if ((param_2 < param_4) && (bVar1 = false, !NAN(param_3) && !NAN(param_5))) {
      bVar1 = param_3 < param_5;
    }
    if ((bVar1) &&
       ((param_11 == (float *)0x0 || ((*param_11 < param_11[2] && (param_11[1] < param_11[3])))))) {
      FUN_1083bd304(param_1,param_10,param_6,&uStack_34,&uStack_38,&uStack_3c,&pfStack_48);
      return;
    }
  }
  func_0x0001083bb0dc(&stack0xffffffffffffffd8);
  *param_1 = unaff_x21;
  FUN_1083bb148(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1083bd268; end: 1083bd303;  */

undefined8 *
FUN_1083bd268(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 *param_10)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_5 + 1) = 1;
  *param_5 = &PTR_FUN_110a43970;
  plVar1 = (long *)*param_6;
  *param_6 = 0;
  param_5[2] = plVar1;
  if (param_10 == (undefined8 *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    *(undefined4 *)(param_5 + 3) = param_1;
    *(undefined4 *)((long)param_5 + 0x1c) = param_2;
    *(undefined4 *)(param_5 + 4) = param_3;
    *(undefined4 *)((long)param_5 + 0x24) = param_4;
  }
  else {
    uVar2 = *param_10;
    param_5[4] = param_10[1];
    param_5[3] = uVar2;
  }
  *(undefined4 *)(param_5 + 5) = param_7;
  *(undefined4 *)((long)param_5 + 0x2c) = param_8;
  *(undefined4 *)(param_5 + 6) = param_9;
  return param_5;
}



/* Entry: 1083bd304; end: 1083bd377;  */

void FUN_1083bd304(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1083bdaf4(&uStack_28,param_3,param_4,param_5,param_6,param_7);
  uVar1 = uStack_28;
  if (param_2 == 0) {
    uStack_28 = 0;
    *param_1 = uVar1;
  }
  else {
    FUN_1083be074(param_1,uStack_28,param_2);
  }
  FUN_1083bdb80(&uStack_28);
  return;
}



/* Entry: 1083bd378; end: 1083bd407;  */

void FUN_1083bd378(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  func_0x0001083bdbd4(param_1,*(undefined4 *)(param_1 + 0x28));
  func_0x0001083bdbd4();
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 0x18);
  func_0x0001083bdbd4();
  lStack_28 = *(long *)(param_1 + 0x10);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10837f9b4(&lStack_28,param_2);
  FUN_10837fe04(&lStack_28);
  return;
}



/* Entry: 1083bd408; end: 1083bd64b;  */

void FUN_1083bd408(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
                  int *param_5,int param_6,uint *param_7)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int *piStack_68;
  
  uVar1 = *param_7;
  uVar13 = *(undefined8 *)(param_7 + 2);
  uVar12 = param_3;
  FUN_108365804(param_3,&uStack_78,0);
  if ((int)uVar12 == 0) {
    auVar24 = NEON_fmov(0x3fe0000000000000,8);
    dVar5 = ((double)(float)*param_2 + (double)(float)param_2[1]) * auVar24._0_8_;
    dVar7 = ((double)(float)((ulong)*param_2 >> 0x20) + (double)(float)((ulong)param_2[1] >> 0x20))
            * auVar24._8_8_;
    auVar24[8] = SUB81(dVar7,0);
    auVar24._0_8_ = dVar5;
    auVar24[9] = (char)((ulong)dVar7 >> 8);
    auVar24[10] = (char)((ulong)dVar7 >> 0x10);
    auVar24[0xb] = (char)((ulong)dVar7 >> 0x18);
    auVar24[0xc] = (char)((ulong)dVar7 >> 0x20);
    auVar24[0xd] = (char)((ulong)dVar7 >> 0x28);
    auVar24[0xe] = (char)((ulong)dVar7 >> 0x30);
    auVar24[0xf] = (char)((ulong)dVar7 >> 0x38);
    fVar3 = (float)dVar5;
    uVar14 = SUB41(fVar3,0);
    uVar16 = (undefined1)((uint)fVar3 >> 8);
    uVar18 = (undefined1)((uint)fVar3 >> 0x10);
    uVar20 = (undefined1)((uint)fVar3 >> 0x18);
    fVar23 = (float)auVar24._8_8_;
    piStack_68 = (int *)CONCAT17((char)((uint)fVar23 >> 0x18),
                                 CONCAT16((char)((uint)fVar23 >> 0x10),
                                          CONCAT15((char)((uint)fVar23 >> 8),
                                                   CONCAT14(SUB41(fVar23,0),fVar3))));
    FUN_108365a88(param_3,&piStack_68);
    bVar9 = true;
    if ((0.00024414062 < ABS((float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))))) &&
       (bVar9 = true,
       !NAN((float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) -
            (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)))))) {
      bVar9 = false;
    }
    fVar3 = SQRT((float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))));
    uVar15 = 0;
    uVar17 = 0;
    uVar19 = 0x80;
    uVar21 = 0x3f;
    uVar14 = uVar15;
    uVar16 = uVar17;
    uVar18 = uVar19;
    uVar20 = uVar21;
    if (!bVar9) {
      uVar15 = SUB41(fVar3,0);
      uVar17 = (undefined1)((uint)fVar3 >> 8);
      uVar19 = (undefined1)((uint)fVar3 >> 0x10);
      uVar21 = (undefined1)((uint)fVar3 >> 0x18);
      uVar14 = uVar15;
      uVar16 = uVar17;
      uVar18 = uVar19;
      uVar20 = uVar21;
    }
  }
  else {
    uVar15 = (undefined1)uStack_78;
    uVar17 = (undefined1)((ulong)uStack_78 >> 8);
    uVar19 = (undefined1)((ulong)uStack_78 >> 0x10);
    uVar21 = (undefined1)((ulong)uStack_78 >> 0x18);
    uVar14 = (char)((ulong)uStack_78 >> 0x20);
    uVar16 = (char)((ulong)uStack_78 >> 0x28);
    uVar18 = (char)((ulong)uStack_78 >> 0x30);
    uVar20 = (char)((ulong)uStack_78 >> 0x38);
  }
  fVar25 = (float)param_2[1] - (float)*param_2;
  fVar26 = (float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) * fVar25;
  uVar15 = SUB41(fVar3,0);
  uVar17 = (undefined1)((uint)fVar3 >> 8);
  uVar19 = (undefined1)((uint)fVar3 >> 0x10);
  uVar21 = (undefined1)((uint)fVar3 >> 0x18);
  fVar23 = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) * fVar26;
  uVar14 = SUB41(fVar23,0);
  uVar16 = (undefined1)((uint)fVar23 >> 8);
  uVar18 = (undefined1)((uint)fVar23 >> 0x10);
  uVar20 = (undefined1)((uint)fVar23 >> 0x18);
  if (4194304.0 < fVar3 * fVar23) {
    fVar22 = SQRT(4194304.0 / (fVar3 * fVar23));
    fVar3 = fVar3 * fVar22;
    uVar15 = SUB41(fVar3,0);
    uVar17 = (undefined1)((uint)fVar3 >> 8);
    uVar19 = (undefined1)((uint)fVar3 >> 0x10);
    uVar21 = (undefined1)((uint)fVar3 >> 0x18);
    fVar23 = fVar23 * fVar22;
    uVar14 = SUB41(fVar23,0);
    uVar16 = (undefined1)((uint)fVar23 >> 8);
    uVar18 = (undefined1)((uint)fVar23 >> 0x10);
    uVar20 = (undefined1)((uint)fVar23 >> 0x18);
  }
  if (param_6 != 0) {
    fVar23 = (float)param_6;
    fVar3 = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)));
    bVar9 = false;
    bVar10 = false;
    bVar11 = false;
    if (fVar3 <= fVar23) {
      bVar9 = false;
      bVar10 = false;
      bVar11 = true;
      if (!NAN((float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)))) && !NAN(fVar23)) {
        bVar9 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) < fVar23;
        bVar10 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) == fVar23;
        bVar11 = false;
      }
    }
    if (!bVar10 && bVar9 == bVar11) {
      if (fVar3 <= (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)))) {
        fVar3 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)));
      }
      iVar4 = (int)((float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) *
                   (fVar23 / fVar3));
      uVar15 = (undefined1)iVar4;
      uVar17 = (undefined1)((uint)iVar4 >> 8);
      uVar19 = (undefined1)((uint)iVar4 >> 0x10);
      uVar21 = (undefined1)((uint)iVar4 >> 0x18);
      iVar4 = (int)((float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) *
                   (fVar23 / fVar3));
      uVar14 = (undefined1)iVar4;
      uVar16 = (undefined1)((uint)iVar4 >> 8);
      uVar18 = (undefined1)((uint)iVar4 >> 0x10);
      uVar20 = (undefined1)((uint)iVar4 >> 0x18);
    }
  }
  iVar4 = (int)(float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)));
  uVar12 = NEON_fminnm(CONCAT17((char)((uint)iVar4 >> 0x18),
                                CONCAT16((char)((uint)iVar4 >> 0x10),
                                         CONCAT15((char)((uint)iVar4 >> 8),
                                                  CONCAT14((char)iVar4,
                                                           (int)(float)CONCAT13(uVar21,CONCAT12(
                                                  uVar19,CONCAT11(uVar17,uVar15))))))),
                       0x4effffff4effffff,4);
  uVar12 = NEON_fmaxnm(uVar12,0xceffffffceffffff,4);
  iVar4 = (int)(float)uVar12;
  iVar6 = (int)(float)((ulong)uVar12 >> 0x20);
  if ((iVar4 >= 1 && iVar6 != 0) && (iVar4 < 1 || -1 < iVar6)) {
    if (param_5 == (int *)0x0) {
      FUN_108343a94(&piStack_68);
    }
    else {
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(param_5,0x10);
        if (bVar9) {
          *param_5 = *param_5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        piStack_68 = param_5;
      } while (cVar2 != '\0');
    }
    if (0x1a < param_4) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1083bd63c);
      (*pcVar8)();
    }
    uStack_70 = NEON_ucvtf(CONCAT17((char)((uint)iVar6 >> 0x18),
                                    CONCAT16((char)((uint)iVar6 >> 0x10),
                                             CONCAT15((char)((uint)iVar6 >> 8),
                                                      CONCAT14((char)iVar6,iVar4)))),4);
    uVar12 = *(undefined8 *)(&UNK_10df205e0 + (ulong)param_4 * 8);
    *param_1 = 1;
    *(ulong *)(param_1 + 4) =
         CONCAT44((float)((ulong)uStack_70 >> 0x20) / fVar26,(float)uStack_70 / fVar25);
    uStack_78 = 0;
    FUN_10814c9e0(param_1 + 0xc,param_2,&uStack_78,0);
    if (piStack_68 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
        if (bVar9) {
          *piStack_68 = *piStack_68 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_80 = 0;
    *(int **)(param_1 + 0x38) = piStack_68;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    *(ulong *)(param_1 + 0x48) = CONCAT44(iVar6,iVar4);
    *(ulong *)(param_1 + 0x50) = (ulong)uVar1;
    *(undefined8 *)(param_1 + 0x58) = uVar13;
    FUN_10810a400(&uStack_80);
    FUN_10810a400(&piStack_68);
  }
  else {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_10810c9b4(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0x3f000000;
  }
  return;
}



/* Entry: 1083bd64c; end: 1083bd6c7;  */

void FUN_1083bd64c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  undefined8 unaff_x21;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_1083b8df0();
  FUN_10833e2b0();
  FUN_108110398(lVar1,param_4);
  param_3 = (long *)*param_3;
  plVar3 = param_3 + 6;
  if (*plVar3 == 0) {
    (**(code **)(*param_3 + 0x50))(&stack0xffffffffffffffd8,param_3,0);
    func_0x000108175028(plVar3,unaff_x21);
    func_0x00010830c35c();
    uVar2 = 0;
    if (*plVar3 == 0) goto LAB_10830add8;
  }
  do {
    func_0x00010830c2e4();
    uVar2 = extraout_x8;
  } while (extraout_w11 != 0);
LAB_10830add8:
  *param_1 = uVar2;
  return;
}



/* Entry: 1083bd6c8; end: 1083bd6eb;  */

undefined8 FUN_1083bd6c8(long param_1,undefined8 param_2)

{
  FUN_1081fbfc4(param_2,param_1 + 0x68);
  return 1;
}



/* Entry: 1083bd6ec; end: 1083bd9f3;  */

void FUN_1083bd6ec(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long alStack_140 [5];
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  byte abStack_b0 [4];
  float fStack_ac;
  float fStack_a8;
  long lStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar10 = *(long **)(param_2 + 8);
  plVar8 = plVar10;
  FUN_10840f8d0(plVar10,0x11,8);
  lVar4 = plVar10[1];
  plVar10[1] = (long)(plVar8 + 1);
  plVar8[1] = (long)FUN_1083bdbcc;
  lVar9 = plVar10[1];
  plVar10[1] = lVar9 + 8;
  *(char *)(lVar9 + 8) = (char)plVar8 - (char)(int)lVar4;
  *plVar10 = plVar10[1] + 1;
  plVar10[1] = plVar10[1] + 1;
  *plVar8 = 0;
  func_0x00010829c1c4(auStack_188,param_3);
  FUN_1083bd408(abStack_b0,param_1 + 0x18,auStack_188,*(undefined4 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),0,*(undefined8 *)(param_2 + 0x30));
  if ((abStack_b0[0] & 1) == 0) {
    uStack_160 = 0;
    goto LAB_1083bd924;
  }
  uStack_e8 = NEON_rev64(*(undefined8 *)(lStack_78 + 4),4);
  uStack_e0 = uStack_70;
  uStack_d4 = *(undefined8 *)(param_1 + 0x20);
  uStack_dc = *(undefined8 *)(param_1 + 0x18);
  uStack_bc = uStack_58;
  uStack_c4 = uStack_60;
  FUN_108391a80(auStack_100,0x11372b2d8,
                (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0xc) | 0x7069637400000000,0x34);
  lStack_108 = 0;
  puVar6 = auStack_100;
  FUN_108392374(puVar6,FUN_1083bd6c8,&lStack_108);
  if (((ulong)puVar6 & 1) == 0) {
    func_0x0001078bdb08(auStack_110,&lStack_78,&uStack_60);
    FUN_1083bd64c(alStack_140,abStack_b0,auStack_110,*(undefined8 *)(param_1 + 0x10));
    lVar4 = lStack_108;
    lStack_108 = alStack_140[0];
    alStack_140[0] = 0;
    func_0x0001083bda28(lVar4);
    func_0x000106f47184(alStack_140);
    func_0x000106f471d4(auStack_110);
    lVar4 = lStack_108;
    if (lStack_108 != 0) {
      puVar7 = (undefined8 *)0x70;
      __Znwm();
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = &PTR_FUN_110a43a18;
      _memcpy(puVar7 + 3,auStack_100,0x50);
      uStack_118 = 0;
      puVar7[0xd] = lVar4;
      FUN_1083923d8(puVar7,0);
      func_0x000106f47184(&uStack_118);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x10) = 1;
      goto LAB_1083bd8d0;
    }
    uStack_160 = 0;
  }
  else {
LAB_1083bd8d0:
    func_0x00010815f6c0(alStack_140,1.0 / fStack_ac,1.0 / fStack_a8);
    uStack_148 = *(undefined4 *)(param_1 + 0x30);
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_144 = 0;
    FUN_1083b5bfc(&uStack_160,lStack_108,*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x2c),&uStack_158,alStack_140);
  }
  func_0x000106f47184(&lStack_108);
LAB_1083bd924:
  FUN_10810a400(&lStack_78);
  uVar5 = uStack_160;
  uStack_160 = 0;
  func_0x000108114f18(plVar8,uVar5);
  func_0x000106f47224(&uStack_160);
  plVar8 = (long *)*plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x58))(plVar8,param_2,param_3);
  }
  return;
}



/* Entry: 1083bd9f4; end: 1083bd9f7;  */

undefined8 * FUN_1083bd9f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a43970;
  func_0x00010811496c(param_1 + 2);
  return param_1;
}



/* Entry: 1083bd9f8; end: 1083bda0b;  */

void FUN_1083bd9f8(void)

{
  FUN_1083bdac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083bda0c; end: 1083bda53;  */

undefined8 FUN_1083bda0c(void)

{
  return 0;
}



/* Entry: 1083bda54; end: 1083bda7f;  */

undefined8 * FUN_1083bda54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a43a18;
  func_0x000106f47184(param_1 + 0xd);
  return param_1;
}



/* Entry: 1083bda80; end: 1083bda93;  */

void FUN_1083bda80(void)

{
  FUN_1083bda54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083bda94; end: 1083bdac7;  */

long FUN_1083bda94(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1083bdac8; end: 1083bdaf3;  */

undefined8 * FUN_1083bdac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a43970;
  func_0x00010811496c(param_1 + 2);
  return param_1;
}



/* Entry: 1083bdaf4; end: 1083bdb7f;  */

void FUN_1083bdaf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  *param_2 = 0;
  FUN_1083bd268();
  *param_1 = uVar1;
  func_0x0001083bdc04();
  return;
}



/* Entry: 1083bdb80; end: 1083bdbcb;  */

long * FUN_1083bdb80(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083bdbcc; end: 1083bdc1f;  */

long * FUN_1083bdbcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + -0x11);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return (long *)(param_1 + -0x11);
}



/* Entry: 1083bdc20; end: 1083bdc8b;  */

void FUN_1083bdc20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  
  FUN_1083bdffc();
  uVar1 = *param_4;
  *param_4 = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_108394f9c(param_1 + 0x48,param_5,param_5 + param_6 * 8);
  return;
}



/* Entry: 1083bdc8c; end: 1083bdcd3;  */

void FUN_1083bdc8c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uStack_18;
  
  piVar3 = *(int **)(param_2 + 0x20);
  if (piVar3 == (int *)0x0) {
    uStack_18 = param_3;
    FUN_1083bdfdc(param_2 + 0x28,&uStack_18);
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = piVar3;
  }
  return;
}



/* Entry: 1083bdcd4; end: 1083bde67;  */

void FUN_1083bdcd4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  long alStack_c0 [15];
  char cStack_44;
  
  FUN_1083431b0(alStack_c0);
  iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + 8) + 0x30);
  iVar2 = *(int *)(alStack_c0[0] + 0xc);
  FUN_108392f34(alStack_c0);
  if (iVar1 <= iVar2) {
    lVar3 = *(long *)(param_1 + 0x10);
    FUN_108393498(lVar3,*(undefined8 *)(param_1 + 0x18));
    if (lVar3 != 0) {
      uStack_128 = 0;
      ppuStack_130 = (undefined **)0x3f800000;
      uStack_118 = 0;
      uStack_120 = 0x3f800000;
      uStack_110 = 0x103f800000;
      FUN_1083be330(alStack_c0,param_3,param_2,&ppuStack_130);
      if (cStack_44 == '\x01') {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
        lVar5 = (*(long *)(*(long *)(param_1 + 0x10) + 0x48) - lVar4) / 0x28;
        FUN_1083bdc8c(auStack_c8,param_1,param_2[3]);
        FUN_1083935fc(lVar4,lVar5,auStack_c8,*(long *)(param_1 + 0x20) == 0,param_2[3],param_2[1]);
        FUN_108154c48(auStack_c8);
        lStack_e8 = *(long *)(param_1 + 0x48);
        lStack_e0 = *(long *)(param_1 + 0x50) - lStack_e8 >> 3;
        lStack_d8 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
        lStack_d0 = *(long *)(*(long *)(param_1 + 0x10) + 0x78) - lStack_d8 >> 3;
        uStack_128 = *param_2;
        uStack_120 = param_2[1];
        ppuStack_130 = &PTR_FUN_110a3fb50;
        uStack_118 = CONCAT44(uStack_118._4_4_,*(undefined4 *)(param_2 + 2));
        uStack_110 = param_2[3];
        uStack_108 = 0;
        uStack_f8 = param_2[6];
        uStack_100 = 0;
        plStack_f0 = alStack_c0;
        FUN_1083faefc(lVar3,uStack_128,uStack_120,&ppuStack_130,lVar4,lVar5);
      }
    }
  }
  return;
}



/* Entry: 1083bde68; end: 1083bdf37;  */

void FUN_1083bde68(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) - 500U < 0x1d) {
    (**(code **)(*param_2 + 0x38))();
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,0);
    plVar3 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x20);
    plVar1 = (long *)*plVar3;
    if (-1 < *(char *)((long)plVar3 + 0x17)) {
      plVar1 = plVar3;
    }
    lVar2 = (long)plVar1;
    _strlen(plVar1);
    (**(code **)(*param_2 + 0x50))(param_2,plVar1,lVar2);
  }
  func_0x0001083be048();
  FUN_108392d0c(param_2,uStack_38);
  func_0x0001083be040();
  FUN_108393aa4(param_2,*(long *)(param_1 + 0x48),
                *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3);
  return;
}



/* Entry: 1083bdf38; end: 1083bdf3b;  */

undefined8 * FUN_1083bdf38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a43a80;
  func_0x000108166098(param_1 + 9);
  FUN_108394d70(param_1 + 5);
  FUN_108154c48(param_1 + 4);
  FUN_108394db4(param_1 + 3);
  FUN_108154c00(param_1 + 2);
  return param_1;
}



/* Entry: 1083bdf3c; end: 1083bdf4f;  */

void FUN_1083bdf3c(void)

{
  FUN_1083bdf84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083bdf50; end: 1083bdf83;  */

undefined8 FUN_1083bdf50(void)

{
  return 0;
}



/* Entry: 1083bdf84; end: 1083bdfdb;  */

undefined8 * FUN_1083bdf84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a43a80;
  func_0x000108166098(param_1 + 9);
  FUN_108394d70(param_1 + 5);
  FUN_108154c48(param_1 + 4);
  FUN_108394db4(param_1 + 3);
  FUN_108154c00(param_1 + 2);
  return param_1;
}



/* Entry: 1083bdfdc; end: 1083bdffb;  */

void FUN_1083bdfdc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083bdfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  *(undefined4 *)(plVar1 + 1) = 1;
  *plVar1 = (long)&PTR_FUN_110a43a80;
  lVar2 = *param_2;
  *param_2 = 0;
  plVar1[2] = lVar2;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1[3] = lVar2;
  return;
}



/* Entry: 1083bdffc; end: 1083be073;  */

void FUN_1083bdffc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a43a80;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[2] = uVar1;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1083be074; end: 1083be197;  */

void FUN_1083be074(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_40 = 0x103f800000;
  (**(code **)(*param_2 + 0x70))(&lStack_68,param_2,&uStack_60);
  if (lStack_68 == 0) {
    plVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_90 = 0;
    plStack_38 = param_2;
    func_0x000106f47224(&uStack_90);
  }
  else {
    FUN_1081600e0(&uStack_90,param_3,&uStack_60);
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_40 = uStack_70;
    FUN_10816979c(&plStack_38,&lStack_68);
    param_3 = &uStack_60;
  }
  FUN_1083be198(&uStack_90,&plStack_38,param_3);
  uVar4 = uStack_90;
  uStack_90 = 0;
  *param_1 = uVar4;
  FUN_1083be290(&uStack_90);
  func_0x000106f47224(&lStack_68);
  func_0x000106f47224(&plStack_38);
  return;
}



/* Entry: 1083be198; end: 1083be217;  */

void FUN_1083be198(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  uVar2 = *param_2;
  *param_2 = 0;
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  *(undefined8 *)((long)puVar1 + 0x14) = param_3[1];
  *(undefined8 *)((long)puVar1 + 0xc) = uVar3;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a43838;
  *(undefined8 *)((long)puVar1 + 0x24) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x2c) = param_3[4];
  puVar1[7] = uVar2;
  *param_1 = puVar1;
  FUN_1083be2e0();
  return;
}



/* Entry: 1083be218; end: 1083be28f;  */

void FUN_1083be218(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = *param_2;
  *param_2 = 0;
  lStack_28 = param_1;
  FUN_1083baae8(0x3f800000,&lStack_28,&uStack_30);
  FUN_108115b2c(&uStack_30);
  FUN_1083be2e0();
  return;
}



/* Entry: 1083be290; end: 1083be2df;  */

long * FUN_1083be290(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083be2e0; end: 1083be2e7;  */

undefined8 * FUN_1083be2e0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 != (long *)0x0) {
    plVar1 = in_stack_00000008 + 1;
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
      (**(code **)(*in_stack_00000008 + 0x10))();
    }
  }
  return &stack0x00000008;
}



/* Entry: 1083be2e8; end: 1083be32f;  */

undefined8 * FUN_1083be2e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  FUN_10810c9b4(param_1 + 5);
  FUN_10810c9b4(param_1 + 10);
  *(undefined2 *)(param_1 + 0xf) = 1;
  return param_1;
}



/* Entry: 1083be330; end: 1083be44b;  */

void FUN_1083be330(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_40 = param_2[0xe];
  if ((*(byte *)((long)param_2 + 0x79) & 1) == 0) {
    FUN_1081600e0(&uStack_e0,param_2,&uStack_60);
    FUN_1083be700();
  }
  puVar2 = &uStack_60;
  FUN_10818cfd0(puVar2,&uStack_60);
  if (((ulong)puVar2 & 1) == 0) {
    *param_1 = 0;
    param_1[0x7c] = 0;
  }
  else {
    FUN_1081600e0(&uStack_e0,param_4,&uStack_60);
    FUN_1083be700();
    if ((*(byte *)((long)param_2 + 0x79) & 1) == 0) {
      FUN_108387820(*param_3,0x11,0);
    }
    FUN_108387e90(*param_3,param_3[1],&uStack_60);
    uVar1 = *(undefined1 *)(param_2 + 0xf);
    uStack_d8 = param_2[1];
    uStack_e0 = *param_2;
    uStack_c8 = param_2[3];
    uStack_d0 = param_2[2];
    uStack_c0 = param_2[4];
    uStack_b0 = param_2[6];
    uStack_b8 = param_2[5];
    uStack_a0 = param_2[8];
    uStack_a8 = param_2[7];
    uStack_98 = param_2[9];
    uStack_70 = uRam0000000113254e40;
    uStack_88 = uRam0000000113254e28;
    uStack_90 = uRam0000000113254e20;
    uStack_78 = uRam0000000113254e38;
    uStack_80 = uRam0000000113254e30;
    _memcpy(param_1,&uStack_e0,0x78);
    param_1[0x78] = uVar1;
    param_1[0x79] = 1;
    param_1[0x7c] = 1;
  }
  return;
}



/* Entry: 1083be44c; end: 1083be4d3;  */

void FUN_1083be44c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_38 = 0;
  uStack_40 = 0x3f800000;
  uStack_30 = 0x103f800000;
  uVar5 = param_2 + 0x50;
  FUN_10818cfd0(uVar5,&uStack_50);
  uVar4 = uRam0000000113254e38;
  uVar3 = uRam0000000113254e30;
  uVar2 = uRam0000000113254e20;
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    param_1[1] = uRam0000000113254e28;
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[4] = uRam0000000113254e40;
  }
  else {
    FUN_1081600e0(param_1,param_3,&uStack_50);
  }
  *(bool *)(param_1 + 5) = !bVar1;
  return;
}



/* Entry: 1083be4d4; end: 1083be553;  */

void FUN_1083be4d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1081600e0(&uStack_58,param_2 + 5);
  FUN_1081600e0(param_1 + 10,param_2 + 10,param_3);
  uVar1 = *(undefined2 *)(param_2 + 0xf);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = param_2[4];
  param_1[6] = uStack_50;
  param_1[5] = uStack_58;
  param_1[8] = uStack_40;
  param_1[7] = uStack_48;
  param_1[9] = uStack_38;
  *(undefined2 *)(param_1 + 0xf) = uVar1;
  return;
}



/* Entry: 1083be554; end: 1083be557;  */

void FUN_1083be554(void)

{
  return;
}



/* Entry: 1083be558; end: 1083be5a7;  */

void FUN_1083be558(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  
  iVar2 = (int)param_1;
  puVar1 = auStack_30;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  (**(code **)(*param_1 + 0x78))(iVar2,puVar1);
  if (iVar2 != 0) {
    puVar1 = auStack_30;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  }
  return;
}



/* Entry: 1083be5a8; end: 1083be5af;  */

void FUN_1083be5a8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1083be5b0; end: 1083be5fb;  */

void FUN_1083be5b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_9c [124];
  
  FUN_1083be2e8(auStack_9c,param_3);
  (**(code **)(*param_1 + 0x58))(param_1,param_2,auStack_9c);
  return;
}



/* Entry: 1083be5fc; end: 1083be69b;  */

void FUN_1083be5fc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  puVar4[4] = param_3[1];
  puVar4[3] = uVar5;
  uStack_40 = 0;
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR_FUN_110a43778;
  uStack_38 = 0;
  puVar4[2] = param_2;
  puVar4[6] = uVar7;
  puVar4[5] = uVar6;
  puVar4[7] = param_3[4];
  *param_1 = puVar4;
  func_0x000106f47224(&uStack_38);
  FUN_108376a5c(&uStack_40);
  return;
}



/* Entry: 1083be69c; end: 1083be6ff;  */

void FUN_1083be69c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1083ad640(auStack_28,0xffffffff,7);
  FUN_1083be218(param_1,param_2,auStack_28);
  FUN_108115b2c(auStack_28);
  return;
}



/* Entry: 1083be700; end: 1083be713;  */

void FUN_1083be700(void)

{
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(unaff_x29 + -0x48) = in_stack_00000008;
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000000;
  *(undefined8 *)(unaff_x29 + -0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x29 + -0x40) = in_stack_00000010;
  *(undefined8 *)(unaff_x29 + -0x30) = in_stack_00000020;
  return;
}



/* Entry: 1083be714; end: 1083be767;  */

undefined8 FUN_1083be714(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((*(byte *)(param_1 + 0x3c) & 1) == 0) &&
     (puVar1 = param_2, FUN_10828e338(), ((ulong)puVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1083be768; end: 1083be80b;  */

char FUN_1083be768(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [120];
  undefined1 uStack_38;
  char cStack_34;
  
  uStack_d8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_c8 = 0;
  uStack_d0 = 0x3f800000;
  uStack_c0 = 0x103f800000;
  FUN_1083be330(auStack_b0,param_3,param_2,&uStack_e0);
  if (cStack_34 == '\x01') {
    uStack_38 = 0;
    uVar1 = 0x52;
    if (*(char *)(param_1 + 0x3c) != '\0') {
      uVar1 = 0x53;
    }
    FUN_108387820(*param_2,uVar1,param_1 + 0x18);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x58))(*(long **)(param_1 + 0x10),param_2,auStack_b0)
    ;
  }
  return cStack_34;
}



/* Entry: 1083be80c; end: 1083be83b;  */

void FUN_1083be80c(void)

{
  return;
}



/* Entry: 1083be83c; end: 1083be89b;  */

undefined8 FUN_1083be83c(long param_1,undefined8 *param_2)

{
  FUN_108387820(*param_2,0x11,0);
  if (*(char *)(param_1 + 0x65) == '\x01') {
    FUN_108387820(*param_2,0x53,param_1 + 0x3c);
  }
  FUN_108387820(*param_2,0xae,param_1 + 0xc);
  return 1;
}



/* Entry: 1083be89c; end: 1083be9c7;  */

float * FUN_1083be89c(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                     int param_6,int param_7)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_98 = 0;
  uStack_a0 = 0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f800000;
  pfVar3 = (float *)(param_3 + (long)param_6 * 8);
  pfVar1 = (float *)(param_3 + (long)param_5 * 8);
  fStack_70 = *pfVar1;
  fStack_64 = pfVar1[1];
  fStack_78 = *pfVar3 - fStack_70;
  pfVar1 = (float *)(param_3 + (long)param_7 * 8);
  fStack_74 = *pfVar1 - fStack_70;
  fStack_6c = pfVar3[1] - fStack_64;
  uStack_80 = 0x103f800000;
  uStack_60 = 0;
  uStack_58 = 0x803f800000;
  fStack_68 = pfVar1[1] - fStack_64;
  pfVar3 = &fStack_78;
  FUN_10818cfd0(pfVar3,&uStack_a0);
  if ((int)pfVar3 != 0) {
    FUN_108364350(param_1 + 0x3c,&uStack_a0,param_2);
    puVar2 = (undefined8 *)(param_4 + (long)param_5 * 0x10);
    uVar8 = puVar2[1];
    uVar5 = *puVar2;
    puVar2 = (undefined8 *)(param_4 + (long)param_6 * 0x10);
    uVar14 = puVar2[1];
    uVar11 = *puVar2;
    puVar2 = (undefined8 *)(param_4 + (long)param_7 * 0x10);
    uVar20 = puVar2[1];
    uVar17 = *puVar2;
    fVar4 = (float)uVar5;
    fVar10 = (float)uVar11 - fVar4;
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    fVar12 = (float)((ulong)uVar11 >> 0x20) - fVar6;
    fVar7 = (float)uVar8;
    fVar13 = (float)uVar14 - fVar7;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    fVar15 = (float)((ulong)uVar14 >> 0x20) - fVar9;
    *(ulong *)(param_1 + 0x14) = CONCAT44(fVar15,fVar13);
    *(ulong *)(param_1 + 0xc) = CONCAT44(fVar12,fVar10);
    fVar16 = (float)uVar17 - fVar4;
    fVar18 = (float)((ulong)uVar17 >> 0x20) - fVar6;
    fVar19 = (float)uVar20 - fVar7;
    fVar21 = (float)((ulong)uVar20 >> 0x20) - fVar9;
    *(ulong *)(param_1 + 0x24) = CONCAT44(fVar21,fVar19);
    *(ulong *)(param_1 + 0x1c) = CONCAT44(fVar18,fVar16);
    *(undefined8 *)(param_1 + 0x34) = uVar8;
    *(undefined8 *)(param_1 + 0x2c) = uVar5;
    if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
      fVar23 = *(float *)(param_1 + 0x44);
      fVar22 = *(float *)(param_1 + 0x48);
      fVar24 = *(float *)(param_1 + 0x3c);
      fVar25 = *(float *)(param_1 + 0x40);
      *(ulong *)(param_1 + 0x14) =
           CONCAT44(fVar21 * fVar22 + fVar15 * fVar24,fVar19 * fVar22 + fVar13 * fVar24);
      *(ulong *)(param_1 + 0xc) =
           CONCAT44(fVar18 * fVar22 + fVar12 * fVar24,fVar16 * fVar22 + fVar10 * fVar24);
      fVar22 = *(float *)(param_1 + 0x4c);
      fVar24 = *(float *)(param_1 + 0x50);
      *(ulong *)(param_1 + 0x24) =
           CONCAT44(fVar21 * fVar22 + fVar15 * fVar25,fVar19 * fVar22 + fVar13 * fVar25);
      *(ulong *)(param_1 + 0x1c) =
           CONCAT44(fVar18 * fVar22 + fVar12 * fVar25,fVar16 * fVar22 + fVar10 * fVar25);
      *(ulong *)(param_1 + 0x34) =
           CONCAT44(fVar9 + fVar21 * fVar24 + fVar15 * fVar23,
                    fVar7 + fVar19 * fVar24 + fVar13 * fVar23);
      *(ulong *)(param_1 + 0x2c) =
           CONCAT44(fVar6 + fVar18 * fVar24 + fVar12 * fVar23,
                    fVar4 + fVar16 * fVar24 + fVar10 * fVar23);
    }
  }
  return pfVar3;
}



/* Entry: 1083be9c8; end: 1083be9f7;  */

void FUN_1083be9c8(void)

{
  return;
}



/* Entry: 1083be9f8; end: 1083bea6b;  */

undefined8 FUN_1083be9f8(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    FUN_1083c0ed8();
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xf4);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xfc);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x108);
  }
  uVar4 = uRam0000000113254e38;
  uVar3 = uRam0000000113254e30;
  uVar2 = uRam0000000113254e28;
  uVar1 = uRam0000000113254e20;
  if (param_3 != (undefined8 *)0x0) {
    param_3[4] = uRam0000000113254e40;
    param_3[1] = uVar2;
    *param_3 = uVar1;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
  }
  return 1;
}



/* Entry: 1083bea6c; end: 1083bef77;  */

void FUN_1083bea6c(undefined8 *param_1,float param_2,undefined8 param_3,undefined8 **param_4,
                  undefined8 **param_5,undefined8 **param_6,undefined8 param_7,undefined8 **param_8,
                  undefined8 **param_9,ulong param_10,undefined2 *param_11,undefined8 **param_12)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  float extraout_w8;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s11;
  float unaff_s12;
  undefined8 uStack_198;
  undefined8 **ppuStack_190;
  undefined8 *puStack_188;
  undefined8 **ppuStack_180;
  undefined4 uStack_178;
  int iStack_174;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_4;
  ppuVar7 = param_5;
  if (((param_2 < 0.0) || (fVar11 = (float)param_3, fVar11 < 0.0)) ||
     (ppuVar5 = param_6, ppuVar7 = param_9, fVar10 = param_2,
     FUN_1083c0f98(param_6,param_9,param_10,param_11), ((ulong)ppuVar5 & 1) == 0)) {
LAB_1083bec28:
    *param_1 = 0;
    goto LAB_1083bedec;
  }
  func_0x0001083bf270();
  func_0x0001083bf29c();
  iVar8 = (int)param_9;
  if (ABS(fVar10) <= 3.0517578e-05) {
    if (ABS(param_2 - fVar11) <= 3.0517578e-05) {
      if ((fVar11 <= 3.0517578e-05) || ((int)param_10 != 0)) {
        func_0x0001083bf2b8();
        FUN_1083c0fc8(param_1,param_6,param_8,param_9,&puStack_160,param_10);
        ppuVar5 = &puStack_160;
      }
      else {
        puStack_f8 = param_6[1];
        puStack_100 = *param_6;
        puStack_d8 = param_6[(long)iVar8 * 2 + -1];
        puStack_e0 = param_6[(long)iVar8 * 2 + -2];
        puStack_f0 = puStack_100;
        puStack_e8 = puStack_f8;
        func_0x0001083bf2b8();
        param_8 = &puStack_100;
        func_0x0001083bf2ac(param_1,param_3,param_4,param_8,&puStack_158,&UNK_10df2070c,3,0);
        ppuVar5 = &puStack_158;
      }
    }
    else {
      if (3.0517578e-05 < ABS(param_2)) goto LAB_1083beb18;
      func_0x0001083bf2b8();
      func_0x0001083bf2ac(param_1,param_3,param_4,param_6,&puStack_168,param_8,param_9,param_10);
      ppuVar5 = &puStack_168;
      param_8 = param_6;
    }
  }
  else {
LAB_1083beb18:
    if (param_12 != (undefined8 **)0x0) {
      ppuVar7 = (undefined8 **)0x0;
      ppuVar5 = param_12;
      FUN_10818cfd0();
      if (((ulong)ppuVar5 & 1) == 0) goto LAB_1083bec28;
    }
    uVar3 = iVar8 != 0;
    uVar4 = iVar8 == 1;
    if ((bool)uVar4) {
      param_8 = (undefined8 **)0x0;
      puStack_118 = param_6[1];
      puStack_120 = *param_6;
      param_6 = &puStack_120;
      param_9 = (undefined8 **)0x2;
      puStack_110 = puStack_120;
      puStack_108 = puStack_118;
    }
    func_0x0001083bf2b8();
    uStack_198 = 0;
    uStack_178 = SUB84(param_9,0);
    uStack_170 = *param_11;
    uStack_16e = *(undefined1 *)(param_11 + 1);
    ppuStack_190 = param_6;
    ppuStack_180 = param_8;
    iStack_174 = (int)param_10;
    FUN_10810a400(&uStack_198);
    fVar10 = 1.0;
    uStack_148 = 0;
    uStack_150 = 0x3f800000;
    uStack_138 = 0;
    uStack_140 = 0x3f800000;
    uStack_130 = 0x103f800000;
    func_0x0001083bf270();
    func_0x0001083bf29c();
    func_0x0001083bf284(ABS(fVar10));
    if (!(bool)uVar3 || (bool)uVar4) {
      fVar10 = fVar11;
      if (fVar11 <= param_2) {
        fVar10 = param_2;
      }
      fVar12 = ABS(param_2 - fVar11);
      bVar1 = false;
      bVar2 = false;
      if (extraout_w8 < ABS(fVar10)) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar12) && !NAN(extraout_w8)) {
          bVar1 = fVar12 == extraout_w8;
          bVar2 = extraout_w8 <= fVar12;
        }
      }
      if (bVar2 && !bVar1) {
        FUN_10814bdfc(&uStack_150,-*(float *)param_5,-*(float *)((long)param_5 + 4));
        FUN_108364068(1.0 / fVar10,1.0 / fVar10,&uStack_150);
        bVar1 = false;
        uVar9 = 0;
        goto LAB_1083bed6c;
      }
LAB_1083becfc:
      *param_1 = 0;
    }
    else {
      puStack_100 = *param_4;
      puStack_f8 = *param_5;
      uStack_b8 = 0x3f800000;
      uStack_b4 = 0;
      uStack_c0._0_4_ = 0.0;
      uStack_c0._4_4_ = 0;
      puVar6 = &uStack_150;
      ppuVar7 = &puStack_100;
      FUN_108365458(puVar6,ppuVar7,&uStack_c0,2);
      if (((ulong)puVar6 & 1) == 0) goto LAB_1083becfc;
      fVar10 = ABS(fVar11 - param_2);
      func_0x0001083bf284();
      if (!(bool)uVar3 || (bool)uVar4) {
        bVar1 = false;
        uVar9 = 1;
      }
      else {
        func_0x0001083bf270();
        func_0x0001083bf29c();
        fVar12 = param_2 / fVar10;
        fVar10 = fVar11 / fVar10;
        unaff_s11 = fVar12 / (fVar12 - fVar10);
        func_0x0001083bf284(ABS(unaff_s11 + -1.0));
        if (!(bool)uVar3 || (bool)uVar4) {
          unaff_s11 = 0.0;
          FUN_108363ef4(0xbf800000,0,&uStack_150);
          FUN_108364068(0xbf800000,0x3f800000,&uStack_150);
          fVar10 = fVar12;
        }
        param_10 = (ulong)(!(bool)uVar3 || (bool)uVar4);
        uStack_c0._4_4_ = 0;
        uStack_b8 = 0x3f800000;
        uStack_b4 = 0;
        uStack_c8 = 0x3f800000;
        uStack_d0 = 0;
        puStack_f8 = (undefined8 *)0x0;
        puStack_100 = (undefined8 *)0x3f800000;
        puStack_e8 = (undefined8 *)0x0;
        puStack_f0 = (undefined8 *)0x3f800000;
        puStack_e0 = (undefined8 *)0x103f800000;
        ppuVar5 = &puStack_100;
        ppuVar7 = (undefined8 **)&uStack_c0;
        uStack_c0._0_4_ = unaff_s11;
        FUN_108365458(ppuVar5,ppuVar7,&uStack_d0,2);
        if ((int)ppuVar5 == 0) goto LAB_1083becfc;
        FUN_108363f68(&uStack_150,&puStack_100);
        fVar13 = ABS(1.0 - unaff_s11);
        unaff_s12 = fVar10 / fVar13;
        fVar10 = 0.5;
        fVar12 = 0.5;
        if (0.00024414062 < ABS(1.0 - unaff_s12)) {
          fVar12 = unaff_s12 * unaff_s12 + -1.0;
          fVar10 = unaff_s12 / fVar12;
          fVar12 = 1.0 / SQRT(ABS(fVar12));
        }
        FUN_108364068(fVar10,fVar12,&uStack_150);
        FUN_108364068(fVar13,fVar13,&uStack_150);
        uVar9 = 2;
        bVar1 = true;
      }
LAB_1083bed6c:
      puVar6 = (undefined8 *)0x120;
      __Znwm();
      FUN_1083bf3ec();
      *puVar6 = &PTR_DAT_110a43ca8;
      *(undefined8 **)((long)puVar6 + 0xf4) = *param_4;
      *(undefined8 **)((long)puVar6 + 0xfc) = *param_5;
      *(float *)((long)puVar6 + 0x104) = param_2;
      *(float *)(puVar6 + 0x21) = fVar11;
      *(undefined4 *)((long)puVar6 + 0x10c) = uVar9;
      if (bVar1) {
        *(float *)(puVar6 + 0x22) = unaff_s12;
        *(float *)((long)puVar6 + 0x114) = unaff_s11;
        *(char *)(puVar6 + 0x23) = (char)param_10;
      }
      ppuVar7 = (undefined8 **)0x113254e20;
      if (param_12 != (undefined8 **)0x0) {
        ppuVar7 = param_12;
      }
      puStack_100 = puVar6;
      FUN_1083be074(param_1,puVar6);
      func_0x000106f47224(&puStack_100);
    }
    ppuVar5 = &puStack_188;
    param_8 = ppuVar7;
  }
  FUN_10810a400();
  ppuVar7 = param_8;
LAB_1083bedec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10810a400(&puStack_158);
  __Unwind_Resume();
  FUN_1083bf2c4();
  (*(code *)(*ppuVar7)[0x10])(ppuVar7,(long)ppuVar5 + 0xf4);
  (*(code *)(*ppuVar7)[0x10])(ppuVar7,(long)ppuVar5 + 0xfc);
  (*(code *)(*ppuVar7)[5])(*(undefined4 *)((long)ppuVar5 + 0x104),ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x0001083befe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*ppuVar7)[5])(*(undefined4 *)(ppuVar5 + 0x21),ppuVar7);
  return;
}



/* Entry: 1083bef78; end: 1083befe7;  */

void FUN_1083bef78(long param_1,long *param_2)

{
  FUN_1083bf2c4();
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0xf4);
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0xfc);
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x104),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001083befe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x108),param_2);
  return;
}



/* Entry: 1083befe8; end: 1083bf22f;  */

/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387854) */
/* WARNING: Removing unreachable block (ram,0x000108387930) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083befe8(float param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  
  if (*(int *)(param_2 + 0x10c) != 1) {
    if (*(int *)(param_2 + 0x10c) == 0) {
      fVar12 = *(float *)(param_2 + 0x108) - *(float *)(param_2 + 0x104);
      func_0x0001083bf2a4(param_4,0x60);
      fVar10 = *(float *)(param_2 + 0x104);
      fVar11 = *(float *)(param_2 + 0x108);
      if (*(float *)(param_2 + 0x108) <= fVar10) {
        fVar11 = fVar10;
      }
      FUN_10814bdfc(auStack_90,-fVar10 / fVar12,0);
      func_0x00010815f6c0(auStack_b8,fVar11 / fVar12,0x3f800000);
      FUN_1081600e0(auStack_68,auStack_90,auStack_b8);
      FUN_108387e90(param_4,param_3,auStack_68);
    }
    else {
      FUN_1083bf230();
      fVar10 = *(float *)(param_2 + 0x110);
      fVar11 = *(float *)(param_2 + 0x114);
      *(float *)(param_3 + 0x40) = 1.0 / fVar10;
      *(float *)(param_3 + 0x44) = fVar11;
      if (ABS(1.0 - fVar10) <= 0.00024414062) {
        uVar7 = 0xd7;
        lVar9 = 0;
      }
      else {
        lVar9 = param_3;
        if (fVar10 <= 1.0) {
          if (((*(byte *)(param_2 + 0x118) & 1) != 0) || (1.0 < fVar11)) {
            uVar7 = 0xd9;
          }
          else {
            uVar7 = 0xda;
          }
        }
        else {
          uVar7 = 0xd8;
        }
      }
      FUN_108387820(param_4,uVar7,lVar9);
      fVar11 = *(float *)(param_2 + 0x110);
      bVar1 = false;
      bVar2 = true;
      bVar5 = false;
      if (0.00024414062 < ABS(1.0 - fVar11)) {
        bVar1 = false;
        bVar2 = false;
        bVar5 = true;
        if (!NAN(fVar11)) {
          bVar1 = fVar11 < 1.0;
          bVar2 = fVar11 == 1.0;
          bVar5 = false;
        }
      }
      if (bVar2 || bVar1 != bVar5) {
        func_0x0001083bf294(param_4,0xde);
      }
      fVar11 = *(float *)(param_2 + 0x114);
      uVar4 = 1.0 <= fVar11;
      uVar3 = fVar11 == 1.0;
      if (1.0 < fVar11) {
        func_0x0001083bf2a4(param_4,0xc1);
        fVar11 = *(float *)(param_2 + 0x114);
      }
      func_0x0001083bf284(ABS(fVar11));
      if ((bool)uVar4 && !(bool)uVar3) {
        func_0x0001083bf294(param_4,0xdb);
      }
      if (*(char *)(param_2 + 0x118) == '\x01') {
        func_0x0001083bf2a4(param_4,0xdc);
      }
      fVar11 = *(float *)(param_2 + 0x110);
      bVar1 = false;
      bVar2 = true;
      bVar5 = false;
      if (0.00024414062 < ABS(1.0 - fVar11)) {
        bVar1 = false;
        bVar2 = false;
        bVar5 = true;
        if (!NAN(fVar11)) {
          bVar1 = fVar11 < 1.0;
          bVar2 = fVar11 == 1.0;
          bVar5 = false;
        }
      }
      if (bVar2 || bVar1 != bVar5) goto LAB_1083bf1f4;
    }
    return;
  }
  FUN_1083bf230();
  fVar11 = *(float *)(param_2 + 0x104);
  FUN_10829bae8(param_2);
  fVar11 = fVar11 / param_1;
  *(float *)(param_3 + 0x40) = fVar11 * fVar11;
  func_0x0001083bf294(param_4,0xd6);
  func_0x0001083bf294(param_4,0xdd);
LAB_1083bf1f4:
  plVar8 = (long *)*param_5;
  lVar9 = param_5[2];
  plVar6 = plVar8;
  func_0x0001081865e0(plVar8,0x18,8);
  plVar8[1] = (long)(plVar6 + 3);
  *plVar6 = lVar9;
  *(undefined4 *)(plVar6 + 1) = 0xdf;
  plVar6[2] = param_3;
  param_5[2] = (long)plVar6;
  *(int *)(param_5 + 4) = (int)param_5[4] + 1;
  return;
}



/* Entry: 1083bf230; end: 1083bf23f;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */
/* WARNING: Removing unreachable block (ram,0x0001081865dc) */

long FUN_1083bf230(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = (ulong)(-(int)lVar1 & 3);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar1) < uVar2 + 0x48) {
    func_0x00010840f7d0();
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = (ulong)(-(int)lVar1 & 3);
  }
  return lVar1 + uVar2;
}



/* Entry: 1083bf240; end: 1083bf253;  */

void FUN_1083bf240(void)

{
  FUN_1083bf7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


