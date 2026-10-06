/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082f9314; end: 1082f9387;  */

void FUN_1082f9314(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + 0x178);
  plStack_28 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1082a21e8(uVar1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082f935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 1082f9388; end: 1082f938b;  */

undefined8 * FUN_1082f9388(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    FUN_1082f93ec();
  }
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082f938c; end: 1082f939f;  */

void FUN_1082f938c(void)

{
  FUN_1082f93bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f93a0; end: 1082f93bb;  */

undefined * FUN_1082f93a0(void)

{
  return &UNK_10f488eec;
}



/* Entry: 1082f93bc; end: 1082f93eb;  */

undefined8 * FUN_1082f93bc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    FUN_1082f93ec();
  }
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082f93ec; end: 1082f93f7;  */

void FUN_1082f93ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082f93f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082f93f8; end: 1082f941f;  */

void FUN_1082f93f8(void)

{
  FUN_1082f9420();
  return;
}



/* Entry: 1082f9420; end: 1082f962b;  */

void FUN_1082f9420(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar7;
  ulong uVar6;
  float fVar8;
  float fVar10;
  ulong uVar9;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0xb8);
  if ((*(byte *)(lVar4 + 0x19) >> 1 & 1) != 0) {
    fVar5 = (float)param_6[1] - (float)*param_6;
    fVar7 = (float)((ulong)param_6[1] >> 0x20) - (float)((ulong)*param_6 >> 0x20);
    if (fVar5 <= fVar7) {
      fVar5 = fVar7;
    }
    if ((fVar5 < 1e+06) && (puVar3 = param_5, FUN_10828e338(), (int)puVar3 == 0)) {
      if (*(char *)(*(long *)(lVar4 + 0x10) + 5) == '\x01') {
        if (5 < *(uint *)(param_6 + 6)) {
          FUN_10841076c(&UNK_10f488ef5);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1082f961c);
          (*pcVar1)();
        }
        fVar5 = (float)*param_5;
        fVar7 = (float)((ulong)*param_5 >> 0x20);
        fVar8 = (float)*(undefined8 *)((long)param_5 + 0xc);
        fVar10 = (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
        switch(*(uint *)(param_6 + 6)) {
        case 2:
        case 3:
          func_0x0001082fac3c(CONCAT44(fVar7 * fVar7 + fVar10 * fVar10,fVar5 * fVar5 + fVar8 * fVar8
                                      ),param_6[2]);
          if (((ulong)puVar3 & 1) == 0) goto code_r0x0001082f9590;
          break;
        case 4:
          uVar6 = param_6[2];
          uVar9 = param_6[4];
          fVar5 = (float)(uVar6 >> 0x20);
          fVar7 = (float)(uVar9 >> 0x20);
          uVar11 = uVar6 ^ (uVar6 ^ uVar9) &
                           CONCAT44(-(uint)(fVar7 < fVar5),-(uint)((float)uVar9 < (float)uVar6));
          uVar6 = uVar6 ^ (uVar6 ^ uVar9) &
                          CONCAT44(-(uint)(fVar5 < fVar7),-(uint)((float)uVar6 < (float)uVar9));
          func_0x0001082fac3c(uVar6,CONCAT44((int)(uVar6 >> 0x20),(int)uVar11));
          iVar2 = (int)puVar3;
          if ((((ulong)puVar3 & 1) == 0) ||
             (func_0x0001082fac3c(uVar11,CONCAT44((int)(uVar11 >> 0x20),(int)uVar6)), iVar2 == 0))
          goto code_r0x0001082f9590;
          break;
        case 5:
          lVar4 = 0;
          do {
            if (lVar4 == 0x20) goto code_r0x0001082f9520;
            func_0x0001082fac3c();
            lVar4 = lVar4 + 8;
          } while (((ulong)puVar3 & 1) != 0);
          goto code_r0x0001082f9590;
        }
code_r0x0001082f9520:
      }
code_r0x0001082f9590:
      uStack_78 = *(undefined8 *)(param_4 + 0x24);
      uStack_80 = *(undefined8 *)(param_4 + 0x1c);
      if (*(char *)(param_4 + 0x18) == '\x01') {
        lVar4 = 0x88;
        __Znwm();
        func_0x0001082fabac();
      }
      else {
        lVar4 = 0xa8;
        __Znwm();
        FUN_1082a3af0(lVar4 + 0x88,param_4);
        func_0x0001082fabac(lVar4,lVar4 + 0x88,&uStack_80);
      }
      *param_1 = lVar4;
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082f962c; end: 1082f9663;  */

void FUN_1082f962c(void)

{
  FUN_1082f9420();
  return;
}



/* Entry: 1082f9664; end: 1082f96a3;  */

bool FUN_1082f9664(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar3;
  ulong uVar2;
  int iVar4;
  ulong uVar5;
  
  fVar1 = (float)param_1 * (float)param_2;
  fVar3 = (float)((ulong)param_1 >> 0x20) * (float)((ulong)param_2 >> 0x20);
  uVar2 = CONCAT44(fVar3,fVar1);
  iVar4 = -(uint)(fVar3 < fVar1);
  uVar5 = NEON_rev64(uVar2,4);
  uVar2 = uVar2 ^ (uVar2 ^ uVar5) & CONCAT44(iVar4,iVar4);
  fVar3 = (float)uVar2;
  fVar1 = 1.0;
  if (1.0 <= fVar3) {
    fVar1 = fVar3;
  }
  return (float)(uVar2 >> 0x20) < fVar1 * fVar1 * 5.0;
}



/* Entry: 1082f96a4; end: 1082f9887;  */

undefined8 *
FUN_1082f96a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,uint param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_s3;
  
  if ((bRam000000011372a9f0 & 1) == 0) {
    iVar1 = 0x1372a9f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam000000011372a9ec = iVar1;
      ___cxa_guard_release(0x11372a9f0);
    }
  }
  iVar1 = iRam000000011372a9ec;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)iVar1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_110a3a6d8;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((long)param_1 + 0x39) =
       (*(byte *)((long)param_1 + 0x39) & 0xf0 | (byte)(param_8 >> 4)) ^ 1;
  *(uint *)(param_1 + 8) = param_8 & 0x11;
  puVar2 = param_4;
  func_0x0001081865e0(param_4,0xa0,8);
  param_4[1] = puVar2 + 0x14;
  uVar4 = param_5[1];
  uVar3 = *param_5;
  uVar6 = param_5[3];
  uVar5 = param_5[2];
  puVar2[4] = param_5[4];
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  uVar4 = param_6[1];
  uVar3 = *param_6;
  uVar6 = param_6[3];
  uVar5 = param_6[2];
  uVar8 = param_6[5];
  uVar7 = param_6[4];
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_6 + 6);
  puVar2[10] = uVar8;
  puVar2[9] = uVar7;
  puVar2[8] = uVar6;
  puVar2[7] = uVar5;
  puVar2[6] = uVar4;
  puVar2[5] = uVar3;
  uVar4 = param_7[1];
  uVar3 = *param_7;
  uVar6 = param_7[3];
  uVar5 = param_7[2];
  uVar7 = *(undefined8 *)((long)param_7 + 0x1c);
  puVar2[0x10] = *(undefined8 *)((long)param_7 + 0x24);
  puVar2[0xf] = uVar7;
  *(undefined8 *)((long)puVar2 + 0x74) = uVar6;
  *(undefined8 *)((long)puVar2 + 0x6c) = uVar5;
  *(undefined8 *)((long)puVar2 + 100) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x5c) = uVar3;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  puVar2[0x13] = 0;
  puVar2[0x12] = uVar4;
  puVar2[0x11] = uVar3;
  param_1[0xc] = 0;
  param_1[9] = puVar2;
  param_1[10] = puVar2 + 0x13;
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  func_0x0001082fac5c(param_5,param_6);
  *(int *)(param_1 + 4) = (int)uVar3;
  *(int *)((long)param_1 + 0x24) = (int)uVar5;
  *(int *)(param_1 + 5) = (int)uVar7;
  *(undefined4 *)((long)param_1 + 0x2c) = in_s3;
  *(ushort *)((long)param_1 + 0x1a) = (ushort)(param_8 < 0x10);
  return param_1;
}



/* Entry: 1082f9888; end: 1082f98c7;  */

undefined8 * FUN_1082f9888(undefined8 *param_1)

{
  FUN_1082647e4(param_1 + 0xe);
  FUN_1082647e4(param_1 + 0xd);
  FUN_1082647e4(param_1 + 0xc);
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082f98c8; end: 1082f98db;  */

void FUN_1082f98c8(void)

{
  FUN_1082f9888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f98dc; end: 1082f98ff;  */

undefined * FUN_1082f98dc(void)

{
  return &UNK_10f488f7f;
}



/* Entry: 1082f9900; end: 1082f997b;  */

undefined8 FUN_1082f9900(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  FUN_1082fc374(lVar2,param_2 + 0x30,param_4,param_1 + 0x20,param_2 + 0x20,0);
  if (((int)lVar2 == 0) || (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    **(undefined8 **)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x58);
  }
  return uVar3;
}



/* Entry: 1082f997c; end: 1082f9a63;  */

void FUN_1082f997c(long param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x70) != 0)) &&
     (*(long *)(param_1 + 0x68) != 0)) {
    FUN_1082a1068(param_2,*(undefined8 *)(param_1 + 0x80),param_1 + 0x20);
    FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x98),0,
                  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x88));
    uStack_38 = *(undefined8 *)(param_1 + 0x68);
    uStack_28 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    uStack_30 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_1082a16e0(param_2,&uStack_28,&uStack_30,&uStack_38,0);
    FUN_1082647e4(&uStack_38);
    FUN_1082647e4(&uStack_30);
    FUN_1082647e4(&uStack_28);
    FUN_1082fa3cc(param_2,0x5a,0,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x78),0);
  }
  return;
}



/* Entry: 1082f9a64; end: 1082f9cff;  */

undefined8
FUN_1082f9a64(undefined8 param_1,float param_2,float param_3,long param_4,undefined8 param_5,
             int param_6,ulong param_7,undefined8 *param_8,uint param_9)

{
  undefined1 (*pauVar1) [12];
  unkbyte9 *pVar2;
  char cVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 extraout_s3;
  float extraout_s3_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  
  cVar3 = *(char *)(param_8 + 7);
  if (cVar3 == '\x02') {
    if (param_6 != 1) {
      return 0;
    }
  }
  else if (param_6 != 1 || cVar3 != '\x03') {
    return 0;
  }
  if (param_9 == (*(byte *)(param_4 + 0x40) & 0x10) >> 4) {
    return 0;
  }
  iStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar12 = param_7;
  func_0x000108363bec(param_7,*(undefined8 *)(param_4 + 0x48));
  if ((int)uVar12 == 0) {
    uVar12 = param_7;
    FUN_10828e338();
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    uStack_b8 = 0;
    uStack_c0 = 0x3f800000;
    uStack_a8 = 0;
    uStack_b0 = 0x3f800000;
    uStack_a0 = 0x103f800000;
    uVar13 = *(undefined8 *)(param_4 + 0x48);
    FUN_10818cfd0(uVar13,&uStack_c0);
    if ((int)uVar13 == 0) {
      return 3;
    }
    FUN_108363e94(&uStack_c0,param_7);
    uVar16 = (undefined1)(uStack_b8 >> 0x20);
    uVar17 = (undefined1)(uStack_b8 >> 0x28);
    uVar18 = (undefined1)(uStack_b8 >> 0x30);
    uVar19 = (undefined1)(uStack_b8 >> 0x38);
    if ((uStack_c0._4_4_ != 0.0) || (param_2 = uStack_c0._4_4_, uStack_b8._4_4_ != 0.0)) {
      param_2 = ABS(uStack_c0._4_4_);
      fVar7 = ABS(uStack_b8._4_4_);
      uVar16 = SUB41(fVar7,0);
      uVar17 = (undefined1)((uint)fVar7 >> 8);
      uVar18 = (undefined1)((uint)fVar7 >> 0x10);
      uVar19 = (undefined1)((uint)fVar7 >> 0x18);
      param_3 = param_2 + ABS((float)uStack_b0);
      if (param_2 + ABS((float)uStack_b0) <= fVar7 + ABS((float)uStack_c0)) {
        param_3 = fVar7 + ABS((float)uStack_c0);
      }
      param_3 = param_3 * 0.00024414062;
      bVar9 = false;
      bVar10 = false;
      bVar11 = false;
      if (param_2 <= param_3) {
        bVar9 = false;
        bVar10 = false;
        bVar11 = true;
        if (!NAN(fVar7) && !NAN(param_3)) {
          bVar9 = fVar7 < param_3;
          bVar10 = fVar7 == param_3;
          bVar11 = false;
        }
      }
      if (!bVar10 && bVar9 == bVar11) {
        return 0;
      }
    }
    uStack_c0 = uStack_c0 & 0xffffffff;
    uStack_b8 = uStack_b8 & 0xffffffff;
    uStack_a0 = CONCAT44(0x80,(undefined4)uStack_a0);
    if (*(char *)(param_8 + 7) != '\x02') {
      FUN_1083857ec(param_8,&uStack_c0,&uStack_70);
      if (((ulong)param_8 & 1) == 0) {
        return 0;
      }
      goto LAB_1082f9bdc;
    }
    func_0x0001082fac5c(&uStack_c0,param_8);
    uStack_80 = CONCAT44(param_2,CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))));
    uStack_78 = CONCAT44(extraout_s3,param_3);
    param_8 = &uStack_80;
  }
  else if (cVar3 != '\x02') {
    uStack_68 = param_8[1];
    uStack_70 = *param_8;
    uStack_58 = param_8[3];
    uStack_60 = param_8[2];
    param_2 = (float)uStack_60;
    uStack_48 = param_8[5];
    uStack_50 = param_8[4];
    iStack_40 = *(int *)(param_8 + 6);
    goto LAB_1082f9bdc;
  }
  FUN_10827a1cc(&uStack_70,param_8);
LAB_1082f9bdc:
  iStack_90 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lVar15 = *(long *)(param_4 + 0x48);
  if (*(int *)(lVar15 + 0x58) == 1 && iStack_40 == 1) {
    uStack_80 = 0;
    uStack_78 = 0;
    puVar14 = &uStack_80;
    func_0x00010838ed30(puVar14,lVar15 + 0x28,&uStack_70);
    if ((int)puVar14 == 0) {
      return 3;
    }
    FUN_10827a1cc(&uStack_c0,&uStack_80);
  }
  else {
    FUN_108385cbc(&uStack_c0,lVar15 + 0x28,&uStack_70);
    if (iStack_90 == 0) {
      return 0;
    }
  }
  func_0x0001082fac5c(*(undefined8 *)(param_4 + 0x48),&uStack_c0);
  bVar9 = true;
  if ((1.0 <= param_3 - (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))) &&
     (bVar9 = false, !NAN(extraout_s3_00 - param_2))) {
    bVar9 = extraout_s3_00 - param_2 < 1.0;
  }
  if (bVar9) {
    return 0;
  }
  lVar15 = *(long *)(param_4 + 0x48);
  if ((*(byte *)(lVar15 + 0x5c) & 1) == 0) {
    pVar2 = (unkbyte9 *)(lVar15 + 0x28);
    uVar13 = *(undefined8 *)(lVar15 + 0x30);
    uVar16 = (undefined1)((ulong)uVar13 >> 8);
    uVar17 = (undefined1)((ulong)uVar13 >> 0x10);
    uVar18 = (undefined1)((ulong)uVar13 >> 0x18);
    uVar19 = (undefined1)((ulong)uVar13 >> 0x20);
    uVar20 = (undefined1)((ulong)uVar13 >> 0x28);
    uVar21 = (undefined1)((ulong)uVar13 >> 0x30);
    uVar22 = (undefined1)((ulong)uVar13 >> 0x38);
    pauVar1 = (undefined1 (*) [12])(lVar15 + 0x60);
    fVar25 = (float)*(undefined8 *)(lVar15 + 0x68);
    fVar26 = (float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20);
    fVar23 = (float)*(undefined8 *)*pauVar1;
    fVar24 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar27._12_4_ = fVar26;
    auVar27._0_12_ = *pauVar1;
    auVar8._12_4_ = fVar26;
    auVar8._0_12_ = *pauVar1;
    auVar27 = NEON_ext(auVar27,auVar8,8,1);
    auVar28[9] = uVar16;
    auVar28._0_9_ = *pVar2;
    auVar28[10] = uVar17;
    auVar28[0xb] = uVar18;
    auVar28[0xc] = uVar19;
    auVar28[0xd] = uVar20;
    auVar28[0xe] = uVar21;
    auVar28[0xf] = uVar22;
    auVar4[9] = uVar16;
    auVar4._0_9_ = *pVar2;
    auVar4[10] = uVar17;
    auVar4[0xb] = uVar18;
    auVar4[0xc] = uVar19;
    auVar4[0xd] = uVar20;
    auVar4[0xe] = uVar21;
    auVar4[0xf] = uVar22;
    auVar28 = NEON_ext(auVar28,auVar4,8,1);
    fVar7 = (float)*(undefined8 *)pVar2;
    fVar5 = (float)((ulong)*(undefined8 *)pVar2 >> 0x20);
    fVar6 = (float)((ulong)uVar13 >> 0x20);
    fVar24 = fVar24 + ((float)(uStack_c0 >> 0x20) - fVar5) *
                      ((fVar24 - auVar27._4_4_) / (fVar5 - auVar28._4_4_));
    fVar26 = fVar26 + ((float)(uStack_b8 >> 0x20) - fVar6) *
                      ((fVar26 - auVar27._12_4_) / (fVar6 - auVar28._12_4_));
    *(ulong *)(lVar15 + 0x68) =
         CONCAT17((char)((uint)fVar26 >> 0x18),
                  CONCAT16((char)((uint)fVar26 >> 0x10),
                           CONCAT15((char)((uint)fVar26 >> 8),
                                    CONCAT14(SUB41(fVar26,0),
                                             fVar25 + ((float)uStack_b8 - (float)uVar13) *
                                                      ((fVar25 - auVar27._8_4_) /
                                                      ((float)uVar13 - auVar28._8_4_))))));
    *(ulong *)(lVar15 + 0x60) =
         CONCAT17((char)((uint)fVar24 >> 0x18),
                  CONCAT16((char)((uint)fVar24 >> 0x10),
                           CONCAT15((char)((uint)fVar24 >> 8),
                                    CONCAT14(SUB41(fVar24,0),
                                             fVar23 + ((float)uStack_c0 - fVar7) *
                                                      ((fVar23 - auVar27._0_4_) /
                                                      (fVar7 - auVar28._0_4_))))));
  }
  *(ulong *)(lVar15 + 0x30) = uStack_b8;
  *(ulong *)(lVar15 + 0x28) = uStack_c0;
  *(undefined8 *)(lVar15 + 0x40) = uStack_a8;
  *(undefined8 *)(lVar15 + 0x38) = uStack_b0;
  *(undefined8 *)(lVar15 + 0x50) = uStack_98;
  *(undefined8 *)(lVar15 + 0x48) = uStack_a0;
  *(int *)(lVar15 + 0x58) = iStack_90;
  return 1;
}



/* Entry: 1082f9d00; end: 1082f9d63;  */

void FUN_1082f9d00(long param_1)

{
  ulong uVar1;
  undefined1 uStack_21;
  
  uVar1 = param_1 + 0x30;
  func_0x0001082fc400();
  if (uStack_21 == '\x01') {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 4;
  }
  if ((uVar1 & 1) != 0) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 2;
  }
  return;
}



/* Entry: 1082f9d64; end: 1082f9d73;  */

undefined8 FUN_1082f9d64(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 0x39) & 3;
  if (bVar1 < 2) {
    return 0;
  }
  if (bVar1 == 2) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082fc374);
  (*pcVar2)();
}



/* Entry: 1082f9d74; end: 1082fa04f;  */

void FUN_1082f9d74(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9)

{
  long *plVar1;
  long lVar2;
  int extraout_w8;
  int iVar3;
  undefined4 uVar4;
  int extraout_w9;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  if ((param_5 & 1) == 0) {
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x40) | 8;
    *(uint *)(param_1 + 0x40) = uVar6;
  }
  plVar1 = param_3;
  FUN_10840f8d0(param_3,0xf9,8);
  lVar2 = param_3[1];
  param_3[1] = (long)(plVar1 + 0x1e);
  plVar1[0x1e] = (long)FUN_1082fa3d4;
  lVar5 = param_3[1];
  param_3[1] = lVar5 + 8;
  *(char *)(lVar5 + 8) = (char)plVar1 - (char)(int)lVar2;
  *param_3 = param_3[1] + 1;
  param_3[1] = param_3[1] + 1;
  *(undefined4 *)(plVar1 + 1) = 0x21;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  *plVar1 = (long)&PTR_DAT_110a3a788;
  *(undefined4 *)(plVar1 + 8) = 0;
  *(uint *)((long)plVar1 + 0x44) = uVar6;
  plVar8 = plVar1 + 0x1b;
  *plVar8 = (long)(plVar1 + 9);
  plVar1[0x1c] = 0xc00000000;
  FUN_10829e324(plVar1 + 2,&PTR_DAT_110a3a7d0,3);
  func_0x0001082fac0c();
  func_0x0001082fac0c();
  if ((int)plVar1[0x1c] < (int)(*(uint *)((long)plVar1 + 0xe4) >> 1)) {
    func_0x0001082fabec();
    *(undefined4 *)(extraout_x9 + 0x10) = 1;
    iVar3 = extraout_w8;
  }
  else {
    func_0x0001082fac34(0x3ff8000000000000,plVar8);
    func_0x0001082fac8c();
    func_0x0001082fabec();
    *(undefined4 *)(extraout_x9_00 + 0x10) = 1;
    func_0x0001082fac2c(plVar8);
    iVar3 = (int)plVar1[0x1c];
  }
  *(int *)(plVar1 + 0x1c) = iVar3 + 1;
  if ((*(byte *)((long)plVar1 + 0x44) >> 1 & 1) == 0) {
    FUN_1082fa4b4(plVar8,1,0xe);
  }
  else {
    FUN_1082fa4b4(plVar8,3,0x10);
    uStack_64 = 3;
    uStack_65 = 0x10;
    FUN_1082eb028(plVar8,&UNK_10f488fba,&uStack_64,&uStack_65);
  }
  uVar4 = 0x11;
  if ((*(byte *)((long)plVar1 + 0x44) & 4) != 0) {
    uVar4 = 3;
  }
  if ((int)plVar1[0x1c] < (int)(*(uint *)((long)plVar1 + 0xe4) >> 1)) {
    lVar2 = *plVar8;
    plVar7 = (long *)(lVar2 + (long)(int)plVar1[0x1c] * 0x18);
    *plVar7 = (long)&DAT_10f68f0f0;
    *(undefined4 *)(plVar7 + 1) = uVar4;
    *(undefined1 *)((long)plVar7 + 0xc) = 0x17;
    *(undefined4 *)(plVar7 + 2) = 1;
  }
  else {
    plVar7 = plVar8;
    func_0x0001082fac34(0x3ff8000000000000);
    func_0x0001082fac8c();
    plVar7 = (long *)((long)plVar7 + (long)extraout_w9 * (long)extraout_w10);
    *plVar7 = (long)&DAT_10f68f0f0;
    *(undefined4 *)(plVar7 + 1) = uVar4;
    *(undefined1 *)((long)plVar7 + 0xc) = 0x17;
    *(undefined4 *)(plVar7 + 2) = 1;
    func_0x0001082fac2c(plVar8);
    lVar2 = *plVar8;
  }
  *(int *)(plVar1 + 0x1c) = (int)plVar1[0x1c] + 1;
  plVar1[0x1d] = (long)plVar7;
  FUN_10829e324(plVar1 + 5,lVar2);
  lVar2 = param_1 + 0x30;
  FUN_1082fc8bc(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,plVar1,0,param_8,param_9);
  *(long *)(param_1 + 0x80) = lVar2;
  return;
}



/* Entry: 1082fa050; end: 1082fa3cb;  */

void FUN_1082fa050(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char cStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar4 = *(long *)(param_1 + 0x80);
  if (lVar4 == 0) {
    FUN_1082fbcfc(param_1,param_2);
    lVar4 = *(long *)(param_1 + 0x80);
  }
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(*(long *)(lVar4 + 0x98) + 0x38),*(undefined4 *)(param_1 + 0x58)
             ,param_1 + 0x60,param_1 + 0x78);
  if (param_2 != (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x48);
    while (lVar4 = *plVar5, lVar4 != 0) {
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0x3f800000;
      uStack_9c = 0;
      uStack_88 = 0;
      uStack_80 = 0x103f800000;
      fVar14 = *(float *)(lVar4 + 0x30) - *(float *)(lVar4 + 0x28);
      fVar15 = *(float *)(lVar4 + 0x34) - *(float *)(lVar4 + 0x2c);
      uStack_90 = uStack_a0;
      uStack_8c = uStack_9c;
      func_0x000108142138(fVar14 * 0.5,fVar15 * 0.5,
                          (*(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x30)) * 0.5,
                          (*(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x34)) * 0.5,&uStack_a0);
      FUN_108363f68(&uStack_a0,lVar4);
      fVar6 = *(float *)(lVar4 + 0x38);
      fVar9 = *(float *)(lVar4 + 0x3c);
      fVar8 = *(float *)(lVar4 + 0x40);
      fVar11 = *(float *)(lVar4 + 0x44);
      fVar12 = *(float *)(lVar4 + 0x4c);
      fVar13 = *(float *)(lVar4 + 0x54);
      fVar14 = 2.0 / fVar14;
      fVar15 = 2.0 / fVar15;
      param_2[1] = CONCAT44(*(float *)(lVar4 + 0x50) * fVar14,*(float *)(lVar4 + 0x48) * fVar14);
      *param_2 = CONCAT44(fVar8 * fVar14,fVar6 * fVar14);
      param_2[3] = CONCAT44(fVar13 * fVar15,fVar12 * fVar15);
      param_2[2] = CONCAT44(fVar11 * fVar15,fVar9 * fVar15);
      *(undefined4 *)(param_2 + 4) = uStack_a0;
      auVar1._4_4_ = uStack_98;
      auVar1._0_4_ = uStack_9c;
      auVar1._8_4_ = uStack_94;
      auVar10._4_4_ = uStack_98;
      auVar10._0_4_ = uStack_9c;
      auVar10._8_4_ = uStack_94;
      auVar10._12_4_ = uStack_90;
      auVar1._12_4_ = uStack_90;
      auVar10 = NEON_ext(auVar10,auVar1,0xc,1);
      *(ulong *)((long)param_2 + 0x2c) = CONCAT44(auVar10._8_4_,auVar10._0_4_);
      *(ulong *)((long)param_2 + 0x24) = CONCAT44(uStack_94,uStack_9c);
      *(undefined4 *)((long)param_2 + 0x34) = uStack_8c;
      if ((*(byte *)(param_1 + 0x40) >> 1 & 1) == 0) {
        plVar5 = param_2 + 7;
      }
      else {
        if ((*(byte *)(lVar4 + 0x5c) & 1) == 0) {
          param_2[7] = 0;
          lVar2 = *(long *)(lVar4 + 0x60);
          param_2[9] = *(long *)(lVar4 + 0x68);
          param_2[8] = lVar2;
        }
        else {
          fVar6 = *(float *)(lVar4 + 0x30) - *(float *)(lVar4 + 0x28);
          FUN_108287898(lVar4 + 0x60);
          uVar7 = 0;
          FUN_108287898(lVar4 + 0x60);
          fVar8 = *(float *)(lVar4 + 0x28);
          FUN_1081790bc(lVar4 + 0x60);
          *(undefined4 *)(param_2 + 7) = uVar7;
          *(undefined4 *)((long)param_2 + 0x3c) = extraout_s1;
          *(float *)(param_2 + 8) = fVar8;
          *(float *)((long)param_2 + 0x44) = extraout_s1_01;
          *(float *)(param_2 + 9) = fVar6 + fVar8;
          *(float *)((long)param_2 + 0x4c) = extraout_s1_00 + extraout_s1_01;
        }
        plVar5 = param_2 + 10;
      }
      func_0x0001082e70b0(&uStack_b4,lVar4 + 0x88,*(uint *)(param_1 + 0x40) >> 2 & 1);
      param_2 = (long *)((long)plVar5 + 4);
      *(undefined4 *)plVar5 = uStack_b4;
      if (cStack_a4 == '\x01') {
        *(undefined4 *)((long)plVar5 + 4) = uStack_b0;
        *(undefined4 *)(plVar5 + 1) = uStack_ac;
        *(undefined4 *)((long)plVar5 + 0xc) = uStack_a8;
        param_2 = plVar5 + 2;
      }
      plVar5 = (long *)(lVar4 + 0x98);
    }
  }
  if ((bRam000000011372a9f8 & 1) == 0) {
    iVar3 = 0x1372a9f8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      ___cxa_guard_release(0x11372a9f8);
    }
  }
  func_0x0001082fabc4(0x11372aa28);
  if ((bRam000000011372aa08 & 1) == 0) {
    iVar3 = 0x1372aa08;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam000000011372aa00 = 0x11372aa28;
      ___cxa_guard_release(0x11372aa08);
    }
  }
  func_0x0001082fac1c();
  FUN_1082aee00(&uStack_a0);
  func_0x0001082f7d78(param_1 + 0x70,&uStack_a0);
  func_0x0001082fac64();
  if ((bRam000000011372aa10 & 1) == 0) {
    iVar3 = 0x1372aa10;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      ___cxa_guard_release(0x11372aa10);
    }
  }
  func_0x0001082fabc4(0x11372aa60);
  if ((bRam000000011372aa20 & 1) == 0) {
    iVar3 = 0x1372aa20;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam000000011372aa18 = 0x11372aa60;
      ___cxa_guard_release(0x11372aa20);
    }
  }
  func_0x0001082fac1c();
  FUN_1082aee00(&uStack_a0);
  func_0x0001082f7d78(param_1 + 0x68,&uStack_a0);
  func_0x0001082fac64();
  return;
}



/* Entry: 1082fa3cc; end: 1082fa3d3;  */

void FUN_1082fa3cc(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x24;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x178);
  func_0x0001082a25cc();
  FUN_1082a23bc();
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x24 + 0x68);
    func_0x0001082a2608();
                    /* WARNING: Could not recover jumptable at 0x0001082a2604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1082fa3d4; end: 1082fa41b;  */

long FUN_1082fa3d4(long param_1)

{
  FUN_1082f4638(param_1 + -0x21);
  return param_1 + -0xf9;
}



/* Entry: 1082fa41c; end: 1082fa4b3;  */

void FUN_1082fa41c(long *param_1,undefined8 param_2)

{
  int extraout_w8;
  int iVar1;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x9_01;
  
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    *(undefined8 *)(*param_1 + (long)(int)param_1[1] * 0x18) = param_2;
    func_0x0001082facac();
    *(undefined4 *)(extraout_x9 + 0x10) = 1;
    iVar1 = extraout_w8;
  }
  else {
    func_0x0001082fac34(0x3ff8000000000000,param_1);
    func_0x0001082fac44();
    *extraout_x9_00 = param_2;
    func_0x0001082facac();
    *(undefined4 *)(extraout_x9_01 + 0x10) = 1;
    func_0x0001082fac2c(param_1);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  return;
}



/* Entry: 1082fa4b4; end: 1082fa54f;  */

void FUN_1082fa4b4(long *param_1)

{
  int extraout_w8;
  int iVar1;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x9_01;
  
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    *(undefined **)(*param_1 + (long)(int)param_1[1] * 0x18) = &UNK_10f488fa0;
    func_0x0001082facac();
    *(undefined4 *)(extraout_x9 + 0x10) = 1;
    iVar1 = extraout_w8;
  }
  else {
    func_0x0001082fac34(0x3ff8000000000000,param_1);
    func_0x0001082fac44();
    *extraout_x9_00 = &UNK_10f488fa0;
    func_0x0001082facac();
    *(undefined4 *)(extraout_x9_01 + 0x10) = 1;
    func_0x0001082fac2c(param_1);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  return;
}



/* Entry: 1082fa550; end: 1082fa56f;  */

void FUN_1082fa550(void)

{
  undefined1 *unaff_x19;
  
  func_0x0001082fac6c();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082fa570; end: 1082fa5a3;  */

undefined * FUN_1082fa570(void)

{
  return &UNK_10f489003;
}



/* Entry: 1082fa5a4; end: 1082fa5eb;  */

void FUN_1082fa5a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *puVar1 = &PTR_FUN_110a3a828;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082fa5ec; end: 1082fa5ef;  */

undefined8 * FUN_1082fa5ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082fa5f0; end: 1082fa603;  */

void FUN_1082fa5f0(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082fa604; end: 1082fa607;  */

void FUN_1082fa604(void)

{
  return;
}



/* Entry: 1082fa608; end: 1082fab37;  */

void FUN_1082fa608(undefined8 param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  lVar2 = *(long *)(param_2 + 0x28);
  uVar1 = *(uint *)(lVar2 + 0x44);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  FUN_1082dd9a4(uVar3,lVar2);
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x00010828e8b0(auStack_88,*(undefined8 *)(lVar2 + 0xe8));
  FUN_1082dd7c8(uVar3,auStack_88,*(undefined8 *)(param_2 + 0x30),1);
  func_0x00010827024c(auStack_88);
  func_0x0001082fabdc();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082faca0();
  func_0x0001082fab84();
  func_0x0001082fab84();
  if ((*(byte *)(lVar2 + 0x44) >> 3 & 1) != 0) {
    func_0x0001082fabdc();
  }
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fac80();
  func_0x0001082fab84();
  func_0x0001082fab8c();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab8c();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fac80();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab8c();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fab8c();
  func_0x0001082fab8c();
  func_0x0001082fab84();
  func_0x0001082fab84();
  *param_3 = 0xe;
  func_0x0001083a3534(param_3 + 0x10,&UNK_10f489907);
  if ((*(byte *)(lVar2 + 0x44) >> 1 & 1) != 0) {
    func_0x0001082fab84();
    func_0x0001082fab84();
    param_3[0x28] = 0xe;
    func_0x0001083a3534(param_3 + 0x38,&UNK_10f489995);
  }
  auStack_88[0] = 0x10;
  if ((uVar1 & 1) != 0) {
    auStack_88[0] = 0xe;
  }
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_74 = 0;
  FUN_1082dd868(uVar3,&UNK_10f4899a0,auStack_88,0);
  func_0x0001082fab84();
  func_0x0001082fabdc();
  func_0x0001082fab84();
  func_0x0001082fab84();
  func_0x0001082fabdc();
  if ((uVar1 & 1) == 0) {
    func_0x0001082fabdc();
    func_0x0001082fabdc();
  }
  func_0x0001082faca0();
  func_0x0001082fab84();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  func_0x0001082faba0();
  if ((uVar1 & 1) == 0) {
    func_0x0001082fab98();
    func_0x0001082faba0();
  }
  func_0x0001082fab98();
  func_0x0001082faba0();
  func_0x0001082fab98();
  if ((*(byte *)(lVar2 + 0x44) >> 3 & 1) != 0) {
    func_0x0001082faba0();
    func_0x0001082faca0();
    func_0x0001082fab98();
  }
  func_0x0001082faba0();
  func_0x0001082fab98();
  uVar1 = *(uint *)(lVar2 + 0x44);
  if ((uVar1 >> 3 & 1) == 0) {
    func_0x0001082faba0();
    func_0x0001082faca0();
    func_0x0001082fab98();
    uVar1 = *(uint *)(lVar2 + 0x44);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    func_0x0001082faba0();
    func_0x0001082fab98();
  }
  func_0x0001082faba0();
  func_0x0001082fab98();
  return;
}



/* Entry: 1082fab38; end: 1082fab83;  */

void FUN_1082fab38(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 1082fab84; end: 1082facb7;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1082fab84(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  uint *puVar5;
  long *plVar6;
  long *unaff_x21;
  ulong uVar7;
  undefined1 auStack_58 [8];
  
  func_0x00010828bb68();
  if (param_2 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = unaff_x21;
    FUN_1083a3d50();
  }
  if (plVar6 != (long *)0x0) {
    uVar7 = (ulong)*(uint *)*unaff_x21;
    plVar2 = (long *)(uVar7 ^ 0xffffffff);
    if ((long)plVar6 + uVar7 >> 0x20 == 0) {
      plVar2 = plVar6;
    }
    if (plVar2 != (long *)0x0) {
      uVar1 = (long)plVar2 + uVar7;
      if (((uint *)*unaff_x21)[1] == 1 && (uVar1 ^ uVar7) < 4) {
        plVar6 = unaff_x21;
        func_0x0001083a3dbc(unaff_x21,0xffffffffffffffff,param_2);
        func_0x0001083a3dd4((long)plVar6 + uVar7);
        *(undefined1 *)((long)plVar6 + uVar1) = 0;
        *(int *)*unaff_x21 = (int)uVar1;
      }
      else {
        puVar4 = auStack_58;
        FUN_1083a3310(puVar4,(long)plVar2 + (ulong)*(uint *)*unaff_x21);
        func_0x0001083a3de0();
        if (uVar7 != 0) {
          func_0x0001083a3d9c(puVar4,*unaff_x21 + 8);
        }
        func_0x0001083a3dd4(puVar4 + uVar7);
        puVar5 = (uint *)*unaff_x21;
        lVar3 = *puVar5 - uVar7;
        if (uVar7 <= *puVar5 && lVar3 != 0) {
          _memcpy(puVar4 + uVar7 + (long)plVar2,(long)puVar5 + uVar7 + 8,lVar3);
          puVar5 = (uint *)*unaff_x21;
        }
        func_0x0001083a3cdc(puVar5);
      }
    }
  }
  return;
}



/* Entry: 1082facb8; end: 1082fadbb;  */

void FUN_1082facb8(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_74;
  
  FUN_1082d4100(param_3,*(undefined4 *)(param_4 + 0x68),param_4,&uStack_74);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar1 = 0xa0;
    __Znwm();
    func_0x0001082fbc9c(uVar5,uVar4,uVar3,uVar2);
  }
  else {
    lVar1 = 0xc0;
    __Znwm();
    FUN_1082a3af0(lVar1 + 0xa0,param_2);
    func_0x0001082fbc9c(uVar5,uVar4,uVar3,uVar2,lVar1,lVar1 + 0xa0,uStack_74);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1082fadbc; end: 1082fae4f;  */

void FUN_1082fadbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_9c [52];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_1082d38bc(auStack_9c,param_5,param_4);
  auVar6._8_8_ = extraout_var;
  auVar6._0_8_ = extraout_d2;
  uStack_68 = *param_5;
  uStack_4c = param_5[3];
  uStack_50 = (undefined4)*(undefined8 *)(param_5 + 1);
  auVar2._4_12_ = auVar6._4_12_;
  auVar2._0_4_ = uStack_50;
  uVar1 = (undefined4)((ulong)*(undefined8 *)(param_5 + 1) >> 0x20);
  auVar4._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
  auVar4._0_8_ = auVar2._0_8_;
  auVar4._8_4_ = uVar1;
  auVar3._8_8_ = auVar4._8_8_;
  auVar3._4_4_ = uStack_50;
  auVar3._0_4_ = uStack_50;
  auVar5._0_12_ = auVar3._0_12_;
  auVar5._12_4_ = uVar1;
  auVar6 = NEON_ext(auVar5,auVar5,8,1);
  auVar7._0_12_ = auVar6._0_12_;
  auVar7._12_4_ = uStack_4c;
  uStack_58 = auVar7._8_8_;
  uStack_60 = auVar6._0_8_;
  auVar6 = NEON_fmov(0x3f800000,4);
  uStack_40 = auVar6._8_8_;
  uStack_48 = auVar6._0_8_;
  uStack_38 = 0;
  uStack_64 = uStack_68;
  FUN_1082facb8(param_1,param_3,0,auStack_9c,param_6,0);
  return;
}



/* Entry: 1082fae50; end: 1082fb0db;  */

undefined8 *
FUN_1082fae50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,long param_6,undefined8 param_7,long param_8,undefined *param_9,
             undefined1 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [32];
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uVar11 = param_2;
  uVar12 = param_3;
  uVar13 = param_4;
  if ((bRam000000011372aaa0 & 1) == 0) {
    iVar4 = 0x1372aaa0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1082e6880();
      iRam000000011372aa98 = iVar4;
      ___cxa_guard_release(0x11372aaa0);
    }
  }
  iVar4 = iRam000000011372aa98;
  param_5[1] = 0;
  param_5[2] = 0;
  *(short *)(param_5 + 3) = (short)iVar4;
  *(undefined8 *)((long)param_5 + 0x24) = 0;
  *(undefined8 *)((long)param_5 + 0x1c) = 0;
  *(undefined4 *)((long)param_5 + 0x2c) = 0;
  *param_5 = &PTR_FUN_110a3a870;
  plVar7 = param_5 + 6;
  *plVar7 = param_6;
  *(undefined1 *)(param_5 + 7) = param_10;
  *(byte *)((long)param_5 + 0x39) = *(byte *)((long)param_5 + 0x39) & 0xf0 | (byte)param_7 & 3;
  puVar1 = &UNK_10df14cb4;
  if (param_9 != (undefined *)0x0) {
    puVar1 = param_9;
  }
  param_5[8] = puVar1;
  puVar8 = param_5 + 9;
  *(undefined4 *)puVar8 = 1;
  uVar9 = 0x38;
  if (param_6 != 0) {
    uVar9 = 0x58;
  }
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[10] = 0;
  *(undefined4 *)(param_5 + 0xd) = 0;
  func_0x00010840f1a4(puVar8,uVar9);
  param_5[0x11] = 0;
  param_5[0x12] = 0;
  param_5[0xe] = 0;
  param_5[0xf] = 0;
  lVar5 = param_8;
  FUN_1082d5218(param_8,param_7,*(undefined4 *)(param_8 + 0x68));
  uVar9 = FUN_1082c0b88(param_8);
  sVar6 = 2;
  if ((int)lVar5 == 0) {
    sVar6 = 0;
  }
  *(undefined4 *)(param_5 + 4) = uVar9;
  *(undefined4 *)((long)param_5 + 0x24) = uVar11;
  *(undefined4 *)(param_5 + 5) = uVar12;
  *(undefined4 *)((long)param_5 + 0x2c) = uVar13;
  if ((int)param_7 == 1) {
    sVar6 = sVar6 + 1;
  }
  *(short *)((long)param_5 + 0x1a) = sVar6;
  auVar10 = NEON_fmov(0x3f800000,4);
  uStack_b4 = auVar10._8_8_;
  uStack_bc = auVar10._0_8_;
  uStack_ac = 0;
  uStack_78 = 0;
  lVar5 = param_8;
  uStack_88 = uStack_bc;
  uStack_80 = uStack_b4;
  FUN_1082d4170(param_8,auStack_dc);
  if ((int)lVar5 == 0) {
    uStack_e0 = 0;
    *(undefined4 *)(param_8 + 0x68) = 0;
  }
  else {
    uStack_e0 = *(undefined4 *)(param_8 + 0x68);
  }
  lVar2 = 0;
  if (*plVar7 != 0) {
    lVar2 = param_8 + 0x34;
  }
  uStack_f0 = param_1;
  uStack_ec = param_2;
  uStack_e8 = param_3;
  uStack_e4 = param_4;
  FUN_1082fb0dc(puVar8,param_8,&uStack_f0,lVar2);
  if (1 < (int)lVar5) {
    uStack_e0 = uStack_74;
    puVar3 = (undefined1 *)0x0;
    if (*plVar7 != 0) {
      puVar3 = auStack_a8;
    }
    uStack_f0 = param_1;
    uStack_ec = param_2;
    uStack_e8 = param_3;
    uStack_e4 = param_4;
    FUN_1082fb0dc(puVar8,auStack_dc,&uStack_f0,puVar3);
  }
  return param_5;
}



/* Entry: 1082fb0dc; end: 1082fb24f;  */

void FUN_1082fb0dc(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack_44;
  
  if (param_4 == (undefined8 *)0x0) {
    bVar9 = 0;
    piVar5 = (int *)0x0;
    iStack_44 = 0;
  }
  else {
    iStack_44 = *(int *)(param_4 + 6);
    piVar5 = &iStack_44;
    bVar9 = 0x10;
  }
  iVar7 = 0x48;
  if (*(int *)(param_2 + 6) != 3) {
    iVar7 = 0x38;
  }
  if (piVar5 != (int *)0x0) {
    iVar4 = 0x30;
    if (*piVar5 != 3) {
      iVar4 = 0x20;
    }
    iVar7 = iVar4 + iVar7;
  }
  pbVar3 = param_1;
  FUN_1082fb94c(param_1,iVar7);
  bVar2 = *pbVar3;
  bVar9 = *(byte *)(param_2 + 6) & 3 | bVar9;
  *pbVar3 = bVar9 | bVar2 & 0xec;
  if (param_4 == (undefined8 *)0x0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(byte *)(param_4 + 6) & 3) << 2;
  }
  *pbVar3 = bVar6 | bVar9 | bVar2 & 0xe0;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  *(undefined4 *)(pbVar3 + 0x14) = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(pbVar3 + 0xc) = uVar11;
  *(undefined8 *)(pbVar3 + 4) = uVar10;
  pbVar1 = pbVar3 + 0x18;
  if (*(int *)(param_2 + 6) == 3) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar12 = param_2[2];
    uVar14 = param_2[5];
    uVar13 = param_2[4];
    *(undefined8 *)(pbVar3 + 0x30) = param_2[3];
    *(undefined8 *)(pbVar3 + 0x28) = uVar12;
    *(undefined8 *)(pbVar3 + 0x40) = uVar14;
    *(undefined8 *)(pbVar3 + 0x38) = uVar13;
    *(undefined8 *)(pbVar3 + 0x20) = uVar11;
    *(undefined8 *)pbVar1 = uVar10;
    lVar8 = 0x30;
  }
  else {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    *(undefined8 *)(pbVar3 + 0x20) = param_2[1];
    *(undefined8 *)pbVar1 = uVar10;
    *(undefined8 *)(pbVar3 + 0x30) = uVar12;
    *(undefined8 *)(pbVar3 + 0x28) = uVar11;
    lVar8 = 0x20;
  }
  if (param_4 != (undefined8 *)0x0) {
    pbVar1 = pbVar1 + lVar8;
    if (*(int *)(param_4 + 6) == 3) {
      uVar11 = param_4[1];
      uVar10 = *param_4;
      uVar13 = param_4[3];
      uVar12 = param_4[2];
      uVar14 = param_4[4];
      *(undefined8 *)(pbVar1 + 0x28) = param_4[5];
      *(undefined8 *)(pbVar1 + 0x20) = uVar14;
    }
    else {
      uVar11 = param_4[1];
      uVar10 = *param_4;
      uVar13 = param_4[3];
      uVar12 = param_4[2];
    }
    *(undefined8 *)(pbVar1 + 8) = uVar11;
    *(undefined8 *)pbVar1 = uVar10;
    *(undefined8 *)(pbVar1 + 0x18) = uVar13;
    *(undefined8 *)(pbVar1 + 0x10) = uVar12;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 6)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 6);
  }
  if ((param_4 != (undefined8 *)0x0) && (*(int *)(param_1 + 0x20) < *(int *)(param_4 + 6))) {
    *(int *)(param_1 + 0x20) = *(int *)(param_4 + 6);
  }
  return;
}



/* Entry: 1082fb250; end: 1082fb28f;  */

undefined8 * FUN_1082fb250(undefined8 *param_1)

{
  FUN_1082647e4(param_1 + 0x12);
  FUN_1082647e4(param_1 + 0x11);
  FUN_10840f118(param_1 + 9);
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082fb290; end: 1082fb2a3;  */

void FUN_1082fb290(void)

{
  FUN_1082fb250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082fb2a4; end: 1082fb2c7;  */

undefined * FUN_1082fb2a4(void)

{
  return &UNK_10f489c2c;
}



/* Entry: 1082fb2c8; end: 1082fb3e7;  */

undefined8 FUN_1082fb2c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x39) & 3;
  bVar2 = *(byte *)(param_2 + 0x39) & 3;
  if (((bVar1 == bVar2) || ((*(byte *)(param_1 + 0x39) & 3) == 0 && bVar2 == 1)) ||
     (bVar1 == 1 && (*(byte *)(param_2 + 0x39) & 3) == 0)) {
    iVar4 = 0x200;
    if (bVar1 == bVar2 && bVar1 != 1) {
      iVar4 = 0x1000;
    }
    if (*(int *)(param_2 + 0x60) + *(int *)(param_1 + 0x60) <= iVar4) {
      lVar3 = param_1 + 0x30;
      FUN_1082fcb80(lVar3,param_2 + 0x30,param_4,param_1 + 0x20,param_2 + 0x20,1);
      if ((int)lVar3 != 0) {
        iVar4 = *(int *)(param_1 + 0x80);
        if (*(int *)(param_1 + 0x80) <= *(int *)(param_2 + 0x80)) {
          iVar4 = *(int *)(param_2 + 0x80);
        }
        *(int *)(param_1 + 0x80) = iVar4;
        if (bVar1 != bVar2) {
          *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xfc | 1;
        }
        FUN_10840f460(param_1 + 0x48,*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x5c)
                     );
        iVar4 = *(int *)(param_2 + 100);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_2 + 0x60);
        if (*(int *)(param_1 + 100) < iVar4) {
          *(int *)(param_1 + 100) = iVar4;
        }
        if (*(int *)(param_1 + 0x68) < *(int *)(param_2 + 0x68)) {
          *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
          return 0;
        }
        return 0;
      }
    }
  }
  return 2;
}



/* Entry: 1082fb3e8; end: 1082fb51b;  */

void FUN_1082fb3e8(ulong param_1)

{
  int iVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 auStack_44 [2];
  
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x0001082fbcc4();
    auStack_44[0] = (undefined2)param_1;
    if ((((uint)param_1 & 0x30) == 0x20) || (*(long *)(unaff_x19 + 0x90) != 0)) {
      if (*(long *)(unaff_x19 + 0x78) == 0) {
        FUN_1082fbcfc();
      }
      iVar1 = *(int *)(unaff_x19 + 0x60);
      FUN_1082a1068();
      uStack_50 = *(undefined8 *)(unaff_x19 + 0x90);
      uStack_58 = 0;
      *(undefined8 *)(unaff_x19 + 0x88) = 0;
      *(undefined8 *)(unaff_x19 + 0x90) = 0;
      FUN_1082a16e0();
      uVar2 = 2;
      if ((param_1 & 0x400) != 0) {
        uVar2 = 3;
      }
      func_0x0001082fbcac();
      FUN_1082647e4(&uStack_58);
      FUN_1082647e4(&uStack_50);
      FUN_1082a10b4();
      FUN_108302bd4(*(undefined8 *)(*(long *)(unaff_x20 + 0x160) + 0x10),
                    *(undefined8 *)(unaff_x20 + 0x178),auStack_44,0,
                    *(undefined4 *)(unaff_x19 + 0x60),iVar1 << (ulong)uVar2,
                    *(undefined4 *)(unaff_x19 + 0x98));
    }
  }
  return;
}



/* Entry: 1082fb51c; end: 1082fb6e7;  */

uint FUN_1082fb51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uStack_c0;
  ulong uStack_b8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar1 = param_1 + 0x48;
  lStack_88 = 0;
  lVar8 = param_1;
  lStack_90 = lVar1;
  func_0x0001082fbcbc();
  uStack_98 = *(ulong *)(lStack_88 + 0xc);
  uStack_a0 = *(ulong *)(lStack_88 + 4);
  uVar11 = 3;
  if (*(float *)(lStack_88 + 0x10) != 1.0) {
    uVar11 = 1;
  }
  do {
    uStack_a4 = uVar11;
    func_0x0001082fbcbc();
    if ((int)lVar8 == 0) break;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (((uVar11 & 1) == 0) ||
       ((((-((float)uStack_a0 == (float)*(undefined8 *)(lStack_88 + 4)) & 1U) +
          (-((float)(uStack_a0 >> 0x20) == (float)((ulong)*(undefined8 *)(lStack_88 + 4) >> 0x20)) &
          2U) + (-((float)uStack_98 == (float)*(undefined8 *)(lStack_88 + 0xc)) & 4U) +
                (-((float)(uStack_98 >> 0x20) ==
                  (float)((ulong)*(undefined8 *)(lStack_88 + 0xc) >> 0x20)) & 8U) ^ 0xff) & 0xf) !=
        0)) {
      uVar2 = 2;
      if (*(float *)(lStack_88 + 0x10) != 1.0) {
        uVar2 = 0;
      }
      uVar2 = uVar11 & uVar2;
      uVar11 = 0;
      if (uVar2 != 0) {
        uVar11 = 2;
      }
    }
    else {
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    uStack_a4 = uVar11;
  } while (uVar11 != 0);
  uVar9 = param_1 + 0x30;
  func_0x0001082fbad4(uVar9,param_2,param_3,param_4,(*(byte *)(param_1 + 0x39) & 3) == 1,&uStack_a4)
  ;
  lStack_88 = 0;
  if ((uStack_a4 & 1) == 0) {
    uVar10 = uVar9;
    iVar7 = 0;
    lStack_90 = lVar1;
    while( true ) {
      *(int *)(param_1 + 0x80) = iVar7;
      func_0x0001082fbcbc();
      if ((int)uVar10 == 0) break;
      FUN_1083021c0(*(undefined4 *)(lStack_88 + 4),*(undefined4 *)(lStack_88 + 8),
                    *(undefined4 *)(lStack_88 + 0xc),*(undefined4 *)(lStack_88 + 0x10));
      iVar7 = *(int *)(param_1 + 0x80);
      if (*(int *)(param_1 + 0x80) <= (int)uVar10) {
        iVar7 = (int)uVar10;
      }
    }
  }
  else {
    uVar3 = (undefined4)uStack_a0;
    uVar4 = uStack_a0._4_4_;
    uVar5 = (undefined4)uStack_98;
    uVar6 = uStack_98._4_4_;
    uVar10 = uVar9;
    lStack_90 = lVar1;
    FUN_1083021c0(uStack_a0 & 0xffffffff,uStack_a0._4_4_,uStack_98 & 0xffffffff,uStack_98._4_4_);
    iVar7 = (int)uVar10;
    *(int *)(param_1 + 0x80) = iVar7;
    while (func_0x0001082fbcbc(), (int)uVar10 != 0) {
      *(undefined4 *)(lStack_88 + 4) = uVar3;
      *(undefined4 *)(lStack_88 + 8) = uVar4;
      *(undefined4 *)(lStack_88 + 0xc) = uVar5;
      *(undefined4 *)(lStack_88 + 0x10) = uVar6;
    }
  }
  if (iVar7 == 0 && (uVar9 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return (uint)uVar9 & 0xffff;
}



/* Entry: 1082fb6e8; end: 1082fb6ef;  */

uint FUN_1082fb6e8(long param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 + 0x30;
  FUN_1082fc34c();
  if (*(undefined **)(param_1 + 0x40) != &UNK_10df14cb4) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}



/* Entry: 1082fb6f0; end: 1082fb77b;  */

void FUN_1082fb6f0(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 auStack_34 [2];
  
  FUN_1082fbe28();
  param_2 = param_2 + 0x28;
  func_0x0001082a6e68();
  uVar2 = param_1;
  FUN_1082fb980();
  auStack_34[0] = (undefined2)uVar2;
  iVar1 = *(int *)(param_1 + 0x60);
  uVar4 = 2;
  if ((uVar2 & 0x400) != 0) {
    uVar4 = 3;
  }
  puVar3 = auStack_34;
  FUN_108302c64(puVar3);
  FUN_1081fe46c(param_2,(long)puVar3 * (long)(iVar1 << (ulong)uVar4));
  *(long *)(param_1 + 0x70) = param_2;
  FUN_1082fbae8(param_1,auStack_34,param_2);
  return;
}



/* Entry: 1082fb77c; end: 1082fb783;  */

undefined8 FUN_1082fb77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1082fb784; end: 1082fb83b;  */

void FUN_1082fb784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 auStack_64 [2];
  
  lVar2 = param_1;
  FUN_1082fb980();
  auStack_64[0] = (undefined2)lVar2;
  uVar3 = param_3;
  FUN_108302cec(param_3,auStack_64);
  uVar1 = SUB81(auStack_64,0);
  FUN_1082fbc60();
  lVar2 = param_1 + 0x30;
  FUN_1082fcbb8(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,uVar1,param_8,param_9);
  *(long *)(param_1 + 0x78) = lVar2;
  return;
}



/* Entry: 1082fb83c; end: 1082fb94b;  */

void FUN_1082fb83c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  long *plVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_50;
  undefined2 auStack_44 [2];
  
  func_0x0001082fbcc4();
  auStack_44[0] = (undefined2)param_1;
  iVar1 = *(int *)(unaff_x19 + 0x60);
  uVar6 = 2;
  if ((param_1 & 0x400) != 0) {
    uVar6 = 3;
  }
  puVar3 = auStack_44;
  FUN_108302c64(puVar3);
  (**(code **)(*unaff_x20 + 0x18))();
  if (unaff_x20 == (long *)0x0) {
    puVar5 = &UNK_10f488006;
  }
  else {
    if (*(long *)(unaff_x19 + 0x70) == 0) {
      FUN_1082fbae8();
    }
    else {
      _memcpy(unaff_x20,*(long *)(unaff_x19 + 0x70),(long)puVar3 * (long)(iVar1 << (ulong)uVar6));
    }
    if (((uint)param_1 & 0x30) == 0x20) {
      return;
    }
    FUN_108302af4(&uStack_50);
    uVar2 = uStack_50;
    uStack_50 = 0;
    plVar4 = *(long **)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    func_0x0001082fbcac();
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      return;
    }
    puVar5 = &UNK_10f488023;
  }
  FUN_10841076c(puVar5);
  return;
}



/* Entry: 1082fb94c; end: 1082fb97f;  */

long FUN_1082fb94c(long param_1,int param_2)

{
  func_0x00010840f398();
  return (*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14)) - (long)param_2;
}



/* Entry: 1082fb980; end: 1082fb9db;  */

undefined4 FUN_1082fb980(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  bVar2 = *(byte *)(param_1 + 0x39);
  uVar3 = 1;
  if (*(int *)(param_1 + 0x60) < 2) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if ((bVar2 & 3) != 1) {
    uVar1 = uVar3;
  }
  FUN_1082fb9dc(&uStack_14,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x80),
                *(undefined4 *)(param_1 + 0x68),bVar2 >> 2 & 1,0,bVar2 & 3,bVar2 >> 3 & 1,uVar1);
  return uStack_14;
}



/* Entry: 1082fb9dc; end: 1082fbae7;  */

void FUN_1082fb9dc(ushort *param_1,int param_2,ushort param_3,ushort param_4,int param_5,int param_6
                  ,int param_7,int param_8,ushort param_9)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = 0x40;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x200;
  if (param_6 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x400;
  if (param_7 != 1) {
    uVar3 = 0;
  }
  uVar4 = 0x800;
  if (param_8 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x1000;
  if (param_2 < 2 || param_7 != 1) {
    uVar5 = 0;
  }
  *param_1 = uVar1 | (param_3 & 3) << 7 | (ushort)param_2 & 3 | (param_4 & 3) << 2 |
             uVar2 | uVar3 | uVar4 | uVar5 | (param_9 & 3) << 4 | *param_1 & 0xe000;
  return;
}



/* Entry: 1082fbae8; end: 1082fbc07;  */

undefined1 * FUN_1082fbae8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  bool bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  long lStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  undefined1 auStack_1b0 [376];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = auStack_1b0;
  FUN_1083027e4();
  lStack_1c8 = param_1 + 0x48;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  auVar10 = NEON_fmov(0x3f800000,4);
  uStack_208 = auVar10._8_8_;
  uStack_210 = auVar10._0_8_;
  uStack_1f8 = 0;
  auStack_200 = (undefined1  [8])0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  uStack_1cc = 0;
  pbStack_1b8 = *(byte **)(param_1 + 0x50);
  uStack_1dc = uStack_210;
  uStack_1d4 = uStack_208;
  while( true ) {
    pbVar2 = pbStack_1b8;
    pbVar6 = (byte *)(*(long *)(lStack_1c8 + 8) + (long)*(int *)(lStack_1c8 + 0x14));
    bVar3 = pbStack_1b8 == pbVar6;
    if (pbVar6 <= pbStack_1b8) break;
    pbVar5 = (byte *)(ulong)(*pbStack_1b8 & 3);
    pbStack_1c0 = pbStack_1b8;
    FUN_1082fbc08(pbVar5,pbStack_1b8 + 0x18,&uStack_230);
    pbVar6 = pbVar5;
    if ((*pbVar2 >> 4 & 1) != 0) {
      pbVar6 = (byte *)(ulong)(*pbVar2 >> 2 & 3);
      FUN_1082fbc08(pbVar6,pbVar5,auStack_200 + 4);
    }
    param_3 = (undefined8 *)0x0;
    if ((*pbStack_1c0 & 0x10) != 0) {
      param_3 = (undefined8 *)(auStack_200 + 4);
    }
    puVar4 = auStack_1b0;
    param_2 = &uStack_230;
    pbStack_1b8 = pbVar6;
    FUN_10830284c();
  }
  func_0x0001082fbcd0(uStack_38);
  if (bVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)puVar4 == 3) {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar1 = param_2[2];
    uVar12 = param_2[5];
    uVar11 = param_2[4];
    param_3[3] = param_2[3];
    param_3[2] = uVar1;
    param_3[5] = uVar12;
    param_3[4] = uVar11;
    param_3[1] = uVar9;
    *param_3 = uVar8;
    lVar7 = 0x30;
  }
  else {
    uVar9 = *param_2;
    uVar1 = param_2[2];
    uVar8 = param_2[3];
    param_3[1] = param_2[1];
    *param_3 = uVar9;
    param_3[3] = uVar8;
    param_3[2] = uVar1;
    lVar7 = 0x20;
  }
  func_0x0001082d51f4(param_3,puVar4);
  return (undefined1 *)((long)param_2 + lVar7);
}



/* Entry: 1082fbc08; end: 1082fbc5f;  */

long FUN_1082fbc08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_1 == 3) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar4 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_3[3] = param_2[3];
    param_3[2] = uVar4;
    param_3[5] = uVar6;
    param_3[4] = uVar5;
    param_3[1] = uVar3;
    *param_3 = uVar2;
    lVar1 = 0x30;
  }
  else {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_3[1] = param_2[1];
    *param_3 = uVar2;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
    lVar1 = 0x20;
  }
  func_0x0001082d51f4(param_3,param_1);
  return (long)param_2 + lVar1;
}



/* Entry: 1082fbc60; end: 1082fbcfb;  */

undefined8 FUN_1082fbc60(ushort *param_1)

{
  ushort uVar1;
  code *pcVar2;
  
  uVar1 = *param_1 >> 4 & 3;
  if (uVar1 < 2) {
    return 0;
  }
  if (uVar1 == 2) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082fbc88);
  (*pcVar2)();
}



/* Entry: 1082fbcfc; end: 1082fbe27;  */

long * FUN_1082fbcfc(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0xd0))();
  plVar4 = plVar3;
  func_0x0001082fc1e4(*(undefined8 *)(*param_2 + 0xe0));
  plVar5 = plVar4;
  func_0x0001082fc1e4(*(undefined8 *)(*param_2 + 0x70));
  plVar6 = plVar5;
  func_0x0001082fc1dc(*(undefined8 *)(*param_2 + 0x90));
  (**(code **)(*param_2 + 0x80))(auStack_a0);
  func_0x0001082fc1e4(*(undefined8 *)(*param_2 + 0x88));
  func_0x0001082fc1dc(*(undefined8 *)(*param_2 + 0x98));
  func_0x0001082fc1dc(*(undefined8 *)(*param_2 + 0xa0));
  puVar10 = auStack_a0;
  (**(code **)(*param_1 + 0x78))();
  func_0x0001082fc1cc();
  func_0x0001082fc1ec(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001082fc1c4();
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar3 + 5;
  func_0x0001082a6e68(plVar7);
  plVar8 = (long *)*plVar4;
  (**(code **)(*plVar8 + 0x28))();
  lVar1 = plVar8[1];
  if (plVar5 == (long *)0x0) {
    uStack_158 = 0;
    uStack_160 = 0x2000000020000000;
    uStack_150 = 0x2000000020000000;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
  }
  else {
    FUN_1082a191c(&uStack_160,plVar5);
  }
  uVar2 = (char)lVar1 == '\x01';
  puVar9 = (undefined8 *)(ulong)('\x01' < (char)lVar1);
  (**(code **)(*param_1 + 0x78))
            (param_1,*(undefined8 *)(plVar3[2] + 0xb8),plVar7,plVar4,puVar9,&uStack_160,plVar6,
             puVar10);
  (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
  func_0x0001082fc1cc();
  func_0x0001082fc1ec(uStack_118);
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0001082fc1c4();
  *plVar3 = 0;
  plVar3[1] = 0;
  *puVar9 = 0;
  FUN_1082fbfcc();
  func_0x0001082fc1d4();
  return plVar3;
}



/* Entry: 1082fbe28; end: 1082fbf73;  */

long * FUN_1082fbe28(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2 + 5;
  func_0x0001082a6e68(plVar3);
  plVar4 = (long *)*param_3;
  (**(code **)(*plVar4 + 0x28))();
  lVar1 = plVar4[1];
  if (param_4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0x2000000020000000;
    uStack_a0 = 0x2000000020000000;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    FUN_1082a191c(&uStack_b0,param_4);
  }
  uVar2 = (char)lVar1 == '\x01';
  puVar5 = (undefined8 *)(ulong)('\x01' < (char)lVar1);
  (**(code **)(*param_1 + 0x78))
            (param_1,*(undefined8 *)(param_2[2] + 0xb8),plVar3,param_3,puVar5,&uStack_b0,param_5,
             param_6);
  (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  func_0x0001082fc1cc();
  func_0x0001082fc1ec(uStack_68);
  if ((bool)uVar2) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001082fc1c4();
  *param_2 = 0;
  param_2[1] = 0;
  *puVar5 = 0;
  FUN_1082fbfcc();
  func_0x0001082fc1d4();
  return param_2;
}



/* Entry: 1082fbf74; end: 1082fbfcb;  */

undefined8 * FUN_1082fbf74(undefined8 *param_1)

{
  undefined8 *in_x4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *in_x4 = 0;
  FUN_1082fbfcc();
  func_0x0001082fc1d4();
  return param_1;
}



/* Entry: 1082fbfcc; end: 1082fc0f7;  */

void FUN_1082fbfcc(long *param_1,long *param_2,undefined1 param_3,undefined8 param_4,long *param_5,
                  int param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_5c [4];
  undefined8 uStack_58;
  
  if ((-1 < param_8) && (*param_5 != 0)) {
    iVar1 = 0;
    if (param_6 != 0) {
      iVar1 = 0x7fffffff / param_6;
    }
    if (param_8 <= iVar1) {
      uStack_58 = 0;
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x18))(param_2,param_4,param_8 * param_6,&uStack_58,auStack_5c);
      *param_1 = (long)plVar2;
      if (plVar2 == (long *)0x0) {
        FUN_10841076c(&UNK_10f489c37);
      }
      else {
        FUN_1082e91fc();
        uStack_70 = uStack_58;
        param_1[1] = (long)param_2;
        *(undefined1 *)(param_1 + 2) = param_3;
        lStack_68 = *param_5;
        *param_5 = 0;
        uStack_58 = 0;
        FUN_1082e9218();
        FUN_1082647e4(&uStack_70);
        func_0x0001082fc1d4();
      }
      FUN_1082647e4(&uStack_58);
    }
  }
  return;
}



/* Entry: 1082fc0f8; end: 1082fc1c3;  */

undefined8 * FUN_1082fc0f8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(*param_2 + 0xb0))(param_2);
  FUN_1082ee6b0(&lStack_38);
  if (lStack_38 == 0) {
    FUN_10841076c(&UNK_10f489c70);
  }
  else {
    lStack_40 = lStack_38 + 0xb0;
    lStack_38 = 0;
    FUN_1082fbfcc(param_1,param_2,0,param_3,&lStack_40,4,6,param_4,0x1000);
    FUN_1082647e4(&lStack_40);
  }
  FUN_10828f708(&lStack_38);
  return param_1;
}



/* Entry: 1082fc1c4; end: 1082fc1ff;  */

void FUN_1082fc1c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1082fc200; end: 1082fc257;  */

long * FUN_1082fc200(long *param_1,long param_2)

{
  long *plVar1;
  
  if ((short)param_1[3] == *(short *)(param_2 + 0x18)) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x20))();
    if ((int)plVar1 == 0) {
      FUN_1082fc258(param_1,param_2);
      plVar1 = (long *)0x0;
    }
    return plVar1;
  }
  return (long *)0x2;
}



/* Entry: 1082fc258; end: 1082fc28b;  */

void FUN_1082fc258(long param_1,long param_2)

{
  uint *puVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(ushort *)(param_2 + 0x1a);
  if ((uVar2 & 1) != 0) {
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 1;
    uVar2 = *(ushort *)(param_2 + 0x1a);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 2;
  }
  puVar1 = (uint *)(param_1 + 0x20);
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = *(float *)(param_2 + 0x24);
  fVar5 = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x2c);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)puVar1;
  *(uint *)(param_1 + 0x28) =
       (uint)fVar5 ^ ((uint)fVar5 ^ *(uint *)(param_1 + 0x28)) & ~-(uint)((float)uVar8 < fVar5);
  *(uint *)(param_1 + 0x2c) =
       (uint)fVar6 ^
       ((uint)fVar6 ^ *(uint *)(param_1 + 0x2c)) & ~-(uint)((float)((ulong)uVar8 >> 0x20) < fVar6);
  *puVar1 = (uint)fVar3 ^ ((uint)fVar3 ^ *puVar1) & ~-(uint)(fVar3 < (float)uVar7);
  *(uint *)(param_1 + 0x24) =
       (uint)fVar4 ^
       ((uint)fVar4 ^ *(uint *)(param_1 + 0x24)) & ~-(uint)(fVar4 < (float)((ulong)uVar7 >> 0x20));
  return;
}



/* Entry: 1082fc28c; end: 1082fc2f7;  */

void FUN_1082fc28c(long param_1)

{
  func_0x0001082fc2b8(param_1 + 8);
  *(long *)(*(long *)(param_1 + 8) + 0x10) = param_1;
  return;
}



/* Entry: 1082fc2f8; end: 1082fc31f;  */

void FUN_1082fc2f8(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar5 = *(undefined8 *)param_1;
  param_1[2] = (uint)fVar3 ^ ((uint)fVar3 ^ param_1[2]) & ~-(uint)((float)uVar6 < fVar3);
  param_1[3] = (uint)fVar4 ^
               ((uint)fVar4 ^ param_1[3]) & ~-(uint)((float)((ulong)uVar6 >> 0x20) < fVar4);
  *param_1 = (uint)fVar1 ^ ((uint)fVar1 ^ *param_1) & ~-(uint)(fVar1 < (float)uVar5);
  param_1[1] = (uint)fVar2 ^
               ((uint)fVar2 ^ param_1[1]) & ~-(uint)(fVar2 < (float)((ulong)uVar5 >> 0x20));
  return;
}



/* Entry: 1082fc320; end: 1082fc34b;  */

long * FUN_1082fc320(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082a3b78();
  }
  return param_1;
}



/* Entry: 1082fc34c; end: 1082fc373;  */

undefined8 FUN_1082fc34c(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 9) & 3;
  if (bVar1 < 2) {
    return 0;
  }
  if (bVar1 == 2) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082fc374);
  (*pcVar2)();
}



/* Entry: 1082fc374; end: 1082fc487;  */

bool FUN_1082fc374(ulong *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong in_x5;
  
  uVar2 = *param_1;
  if (((uVar2 != 0) == (*param_2 != 0)) && ((uVar2 == 0 || (FUN_1082ee8f0(), (uVar2 & 1) == 0)))) {
    bVar1 = (char)param_1[1] == (char)param_2[1];
    if (((in_x5 & 1) == 0) && (bVar1)) {
      bVar1 = ((*(byte *)((long)param_2 + 9) ^ *(byte *)((long)param_1 + 9)) & 3) == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1082fc488; end: 1082fc4cf;  */

bool FUN_1082fc488(float *param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = *param_1;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= fVar3) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3)) {
      bVar1 = fVar3 == 1.0;
      bVar2 = 1.0 <= fVar3;
    }
  }
  if (!bVar2 || bVar1) {
    fVar3 = param_1[1];
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3)) {
        bVar1 = fVar3 == 1.0;
        bVar2 = 1.0 <= fVar3;
      }
    }
    if ((!bVar2 || bVar1) && (0.0 <= param_1[2])) {
      return param_1[2] <= 1.0;
    }
  }
  return false;
}



/* Entry: 1082fc4d0; end: 1082fc58b;  */

uint FUN_1082fc4d0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined4 *param_7)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_24;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar1 = 0x22;
  }
  else {
    if ((int)param_6 == 0) {
      if (param_3 == 0) {
        param_6 = 0;
      }
      else {
        param_6 = (ulong)(*(long *)(param_3 + 0x40) != 0);
      }
    }
    FUN_1082a3cdc(lVar2,param_7,param_6,param_3,param_4,param_2,param_5,&uStack_30);
    uVar1 = (uint)lVar2;
    if ((uVar1 & 0x300) == 0x100) {
      uVar3 = 3;
      if (fStack_24 != 1.0) {
        uVar3 = 1;
      }
      *param_7 = uVar3;
      *(ulong *)(param_7 + 3) = CONCAT44(fStack_24,uStack_28);
      *(undefined8 *)(param_7 + 1) = uStack_30;
    }
  }
  *(byte *)((long)param_1 + 9) = (byte)((uVar1 & 3) << 2) | *(byte *)((long)param_1 + 9) & 0xf3;
  return uVar1 & 0xffff;
}



/* Entry: 1082fc58c; end: 1082fc623;  */

undefined8
FUN_1082fc58c(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_48;
  
  uStack_60 = 0;
  uStack_5c = 0x3210;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x3210;
  uStack_68 = 0;
  auStack_78[0] = param_7;
  uStack_70 = param_1;
  FUN_1082a35a0(&uStack_68,param_5);
  uStack_48 = param_3;
  FUN_1082f3ef8(param_2,auStack_78,param_6,param_4);
  func_0x0001082fcaa8();
  return param_6;
}



/* Entry: 1082fc624; end: 1082fc6e3;  */

undefined8 * FUN_1082fc624(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined8 *puVar4;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x160) + 0x10);
  uVar1 = *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x150) + 8) + 0xc);
  func_0x0001082a167c(auStack_90);
  FUN_1082fc58c(puVar4,param_1 + 0x10,uVar1,auStack_90,*(long *)(param_1 + 0x150) + 0x28,param_2,
                param_3);
  func_0x0001082fca9c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x0001082fca9c();
  func_0x0001082fca88();
  puVar2 = (undefined8 *)*puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
    *puVar2 = 0;
    *extraout_x8 = uVar3;
    uVar3 = puVar2[1];
    puVar2[1] = 0;
    extraout_x8[1] = uVar3;
    extraout_x8[2] = puVar2[2];
    puVar2[2] = 0;
    *(undefined1 *)(extraout_x8 + 3) = *(undefined1 *)(puVar2 + 3);
    return extraout_x8;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *(undefined1 *)(extraout_x8 + 3) = 1;
  return puVar4;
}



/* Entry: 1082fc6e4; end: 1082fc707;  */

void FUN_1082fc6e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2 = (undefined8 *)*param_2;
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *param_2 = 0;
    *param_1 = uVar1;
    uVar1 = param_2[1];
    param_2[1] = 0;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1082fc708; end: 1082fc787;  */

undefined8
FUN_1082fc708(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [32];
  
  FUN_1082fc6e4(auStack_60);
  FUN_1082fc58c(param_2,param_3,param_4,param_5,param_6,auStack_60,*(undefined1 *)(param_1 + 8));
  func_0x0001082fca90();
  return param_6;
}



/* Entry: 1082fc788; end: 1082fc81f;  */

void FUN_1082fc788(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_12;
  uVar1 = (undefined4)param_11;
  FUN_1082fc58c(param_1,param_2,*(undefined2 *)(param_3 + 0xc),param_5,param_6,param_8,
                param_11._4_1_);
  param_9 = uVar1;
  param_11 = uVar2;
  func_0x0001082fc884(param_2,param_1,param_3,&stack0xffffffffffffffe7,&stack0xffffffffffffffe8,
                      &param_11,&stack0xffffffffffffffd8,&stack0xffffffffffffffd7,
                      &stack0xffffffffffffffd0,&param_9);
  return;
}



/* Entry: 1082fc820; end: 1082fc8bb;  */

void FUN_1082fc820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined4 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_30 = param_8;
  uStack_29 = param_7;
  uStack_28 = param_6;
  uStack_19 = param_5;
  uStack_18 = param_3;
  func_0x0001082fc884(param_2,param_1,param_4,&uStack_19,&uStack_18,&stack0x00000008,&uStack_28,
                      &uStack_29,&uStack_30,&stack0x00000000);
  return;
}



/* Entry: 1082fc8bc; end: 1082fc97b;  */

undefined4
FUN_1082fc8bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined1 auStack_80 [32];
  
  FUN_1082fc6e4(auStack_80);
  FUN_1082fc788(param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_80,param_9,param_10,
                param_11,*(undefined1 *)(param_1 + 8),&UNK_10df14cb4);
  func_0x0001082fcab4();
  return param_11;
}



/* Entry: 1082fc97c; end: 1082fca87;  */

void FUN_1082fc97c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1;
  FUN_10840f8d0(param_1,0xb9,8);
  lVar1 = param_1[1];
  param_1[1] = (long)(plVar2 + 0x16);
  plVar2[0x16] = 0x1082fca48;
  lVar3 = param_1[1];
  param_1[1] = lVar3 + 8;
  *(char *)(lVar3 + 8) = (char)plVar2 - (char)(int)lVar1;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  FUN_1082a47e4(plVar2,*param_2,param_2[1],*(undefined1 *)param_2[2],*(undefined8 *)param_2[3],
                *(undefined8 *)param_2[4],*(undefined8 *)param_2[5],*(undefined1 *)param_2[6],
                *(undefined4 *)param_2[7],*(undefined4 *)param_2[8]);
  return;
}



/* Entry: 1082fca88; end: 1082fcabf;  */

void FUN_1082fca88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1082fcac0; end: 1082fcaf7;  */

uint FUN_1082fcac0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1082fc34c();
  uVar1 = (uint)lVar2;
  if (*(undefined **)(param_1 + 0x10) != &UNK_10df14cb4) {
    uVar1 = (uint)lVar2 | 2;
  }
  return uVar1;
}



/* Entry: 1082fcaf8; end: 1082fcb7f;  */

uint FUN_1082fcaf8(uint param_1)

{
  undefined8 *in_x5;
  byte *in_x6;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = in_x5[1];
  uVar1 = *in_x5;
  func_0x0001082fbad4();
  in_x5[1] = uVar2;
  *in_x5 = uVar1;
  if (in_x6 != (byte *)0x0) {
    FUN_1082fc488();
    *in_x6 = (byte)in_x5 ^ 1;
  }
  return param_1 & 0xffff;
}



/* Entry: 1082fcb80; end: 1082fcbb7;  */

void FUN_1082fcb80(void)

{
  FUN_1082fc374();
  return;
}



/* Entry: 1082fcbb8; end: 1082fcc77;  */

undefined4
FUN_1082fcbb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined1 auStack_80 [32];
  
  FUN_1082fc6e4(auStack_80);
  FUN_1082fc788(param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_80,param_9,param_10,
                param_11,*(undefined1 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FUN_1082fcc78();
  return param_11;
}



/* Entry: 1082fcc78; end: 1082fcc83;  */

/* WARNING: Possible PIC construction at 0x0001082a3ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082a3ba8) */

undefined8 * FUN_1082fcc78(void)

{
  undefined1 *puVar1;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  byte in_stack_00000038;
  
  if (((in_stack_00000038 & 1) != 0) && (in_stack_00000030 != 0)) {
    FUN_1082a36a0(in_stack_00000030 + 0xc);
  }
  puVar1 = &stack0x00000028;
  func_0x00010827fe08();
  in_stack_00000020 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010827fc1c();
  }
  return &stack0x00000020;
}



/* Entry: 1082fcc84; end: 1082fce17;  */

void FUN_1082fcc84(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  long lVar1;
  undefined8 extraout_x9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *param_5;
  *param_5 = 0;
  uStack_98 = *(undefined4 *)(param_5 + 1);
  uStack_94 = *(undefined2 *)((long)param_5 + 0xc);
  uStack_78 = *param_7;
  *param_7 = 0;
  uStack_80 = *param_9;
  *param_9 = 0;
  uStack_88 = *(undefined8 *)(param_3 + 0x24);
  uStack_90 = *(undefined8 *)(param_3 + 0x1c);
  uStack_b0 = uStack_80;
  uStack_a8 = uStack_78;
  uStack_a0 = uStack_70;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    lVar1 = 0xd8;
    __Znwm();
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x0001082fe0c4();
    uStack_b0 = 0;
    func_0x0001082fe030();
  }
  else {
    lVar1 = 0xf8;
    __Znwm();
    FUN_1082a3af0(lVar1 + 0xd8,param_3);
    func_0x0001082fe0c4();
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_70 = extraout_x9;
    func_0x0001082fe030(lVar1,lVar1 + 0xd8,&uStack_90);
  }
  *param_1 = lVar1;
  FUN_10827f75c(&uStack_80);
  func_0x0001082fe0b0();
  func_0x0001082fe0a8();
  FUN_10827f75c(&uStack_b0);
  FUN_10827f5a4(&uStack_a8);
  FUN_1082764bc(&uStack_a0);
  return;
}



/* Entry: 1082fce18; end: 1082fd017;  */

undefined8 *
FUN_1082fce18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8,
             undefined8 *param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam000000011372aab8 & 1) == 0) {
    iVar2 = 0x1372aab8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372aab0 = iVar2;
      ___cxa_guard_release(0x11372aab8);
    }
  }
  iVar2 = iRam000000011372aab0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(short *)(param_1 + 3) = (short)iVar2;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_110a3a938;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xf0;
  param_1[0x12] = param_1 + 8;
  param_1[0x13] = 0x200000000;
  uVar4 = *param_5;
  *param_5 = 0;
  param_1[0x14] = uVar4;
  uVar1 = *(undefined4 *)(param_5 + 1);
  *(undefined2 *)((long)param_1 + 0xac) = *(undefined2 *)((long)param_5 + 0xc);
  *(undefined4 *)(param_1 + 0x15) = uVar1;
  uVar4 = *param_7;
  *param_7 = 0;
  param_1[0x17] = uVar4;
  *(undefined4 *)(param_1 + 0x16) = param_6;
  *(undefined4 *)(param_1 + 0x18) = param_8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_1082fdb60(param_1 + 0x12,1);
  puVar3 = (undefined8 *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 0x50);
  *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + 1;
  FUN_10810c9b4();
  puVar3[7] = 0;
  puVar5 = puVar3 + 6;
  *puVar5 = 0;
  puVar3[5] = 0;
  uVar6 = param_4[1];
  uVar4 = *param_4;
  uVar8 = param_4[3];
  uVar7 = param_4[2];
  puVar3[4] = param_4[4];
  puVar3[1] = uVar6;
  *puVar3 = uVar4;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  uVar4 = *param_3;
  puVar3[9] = param_3[1];
  puVar3[8] = uVar4;
  uVar4 = *param_9;
  *param_9 = 0;
  FUN_10827f780(puVar3 + 5,uVar4);
  uVar4 = *param_10;
  puVar3[7] = param_10[1];
  *puVar5 = uVar4;
  FUN_108364f90(param_4,param_1 + 4,puVar5,1);
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  return param_1;
}



/* Entry: 1082fd018; end: 1082fd077;  */

long FUN_1082fd018(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x58) * 0x50;
    do {
      FUN_10827f75c(uVar1 + 0x28);
      uVar1 = uVar1 + 0x50;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x50));
  }
  return param_1;
}



/* Entry: 1082fd078; end: 1082fd0b7;  */

undefined8 * FUN_1082fd078(undefined8 *param_1)

{
  FUN_10827f5a4(param_1 + 0x17);
  FUN_1082764bc(param_1 + 0x14);
  FUN_1082fd018(param_1 + 8);
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082fd0b8; end: 1082fd0cb;  */

void FUN_1082fd0b8(void)

{
  FUN_1082fd078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082fd0cc; end: 1082fd0d7;  */

undefined * FUN_1082fd0cc(void)

{
  return &UNK_10f489c91;
}



/* Entry: 1082fd0d8; end: 1082fd127;  */

void FUN_1082fd0d8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar7;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  
  FUN_108298768(param_2,*(undefined8 *)(param_1 + 0xa0),0);
  if (*(long *)(param_1 + 0xd0) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xd0) + 0x88);
    func_0x0001082a3784(lVar4,param_2);
    puVar1 = *(undefined8 **)(lVar4 + 0x50);
    for (lVar7 = (long)*(int *)(lVar4 + 0x78) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      FUN_108296038(*puVar1,unaff_x19);
      puVar1 = puVar1 + 1;
    }
    if ((*unaff_x20 != 0) && ((*(byte *)(unaff_x20 + 3) >> 1 & 1) == 0)) {
      func_0x000108298794(unaff_x19,&stack0xffffffffffffffe8,&stack0xffffffffffffffe7);
      return;
    }
    return;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (*plVar5 != 0) {
    FUN_108296038(*plVar5,param_2);
  }
  if (plVar5[1] != 0) {
    uVar6 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_48 = &PTR_FUN_110a35a10;
    uStack_40 = param_2;
    FUN_1082960a8(plVar5[1],&ppuStack_48);
    pppuVar2 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298c3c(uVar6);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    pppuVar3 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar3 != (undefined ***)0x0) && ((int)unaff_x20[1] == 0x2d)) {
      func_0x0001082987ac(pppuVar2,unaff_x20);
    }
    plVar5 = (long *)unaff_x20[3];
    for (lVar7 = (long)(int)unaff_x20[4] << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      if (*plVar5 != 0) {
        FUN_1082960a8(*plVar5,pppuVar2);
      }
      plVar5 = plVar5 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082fd128; end: 1082fd233;  */

undefined8 FUN_1082fd128(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = param_1 + 0xa0;
  FUN_108287b04(uVar6,param_2 + 0xa0);
  if (((uVar6 & 1) == 0) && (*(int *)(param_1 + 0xc0) == *(int *)(param_2 + 0xc0))) {
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    FUN_10828b20c(uVar5,*(undefined8 *)(param_2 + 0xb8));
    if ((int)uVar5 != 0) {
      lVar7 = param_1 + 0x30;
      FUN_1082fc374(lVar7,param_2 + 0x30,param_4,param_1 + 0x20,param_2 + 0x20,0);
      if ((int)lVar7 != 0) {
        uVar2 = *(uint *)(param_2 + 0x98);
        lVar7 = *(long *)(param_2 + 0x90);
        FUN_1082fdb60(param_1 + 0x90,uVar2);
        iVar3 = *(int *)(param_1 + 0x98);
        *(uint *)(param_1 + 0x98) = iVar3 + uVar2;
        puVar1 = (undefined8 *)(lVar7 + 0x28);
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x90) + (long)iVar3 * 0x50 + 0x30);
        for (uVar6 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
            uVar6 = uVar6 - 1) {
          uVar8 = puVar1[-4];
          uVar5 = puVar1[-5];
          uVar10 = puVar1[-2];
          uVar9 = puVar1[-3];
          puVar4[-2] = puVar1[-1];
          puVar4[-5] = uVar8;
          puVar4[-6] = uVar5;
          puVar4[-3] = uVar10;
          puVar4[-4] = uVar9;
          uVar5 = *puVar1;
          *puVar1 = 0;
          puVar4[-1] = uVar5;
          uVar5 = puVar1[1];
          uVar9 = puVar1[4];
          uVar8 = puVar1[3];
          puVar4[1] = puVar1[2];
          *puVar4 = uVar5;
          puVar4[3] = uVar9;
          puVar4[2] = uVar8;
          puVar1 = puVar1 + 10;
          puVar4 = puVar4 + 10;
        }
        *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | *(byte *)(param_2 + 0xc4);
        return 0;
      }
    }
  }
  return 2;
}



/* Entry: 1082fd234; end: 1082fd297;  */

void FUN_1082fd234(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 200) != 0)) {
    FUN_1082a1068(param_2);
    FUN_1082f4388(param_2,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x98),
                  *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x88))
    ;
    puVar1 = *(undefined8 **)(param_1 + 200);
    plVar2 = (long *)*puVar1;
    if (plVar2 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      plVar2 = (long *)puVar1[4];
      if (plVar2 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      }
      plStack_48 = plVar2;
      FUN_1082a16e0(param_2,&uStack_38,&uStack_40,&plStack_48,0);
      func_0x0001082a20e4();
      FUN_1082647e4(&uStack_40);
      FUN_1082647e4(&uStack_38);
      func_0x0001082a1754(param_2,*(undefined4 *)(puVar1 + 5),*(undefined4 *)((long)puVar1 + 0x2c));
    }
    else {
      func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      uStack_58 = 0;
      plStack_60 = (long *)puVar1[4];
      plStack_50 = plVar2;
      if (plStack_60 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
      }
      FUN_1082a16e0(param_2,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)puVar1 + 0x1c))
      ;
      FUN_1082647e4(&plStack_60);
      func_0x0001082a2114();
      func_0x0001082a2124();
      if (*(int *)((long)puVar1 + 0xc) == 0) {
        func_0x0001082a175c(param_2,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((long)puVar1 + 0x14)
                            ,*(undefined2 *)(puVar1 + 3),*(undefined2 *)((long)puVar1 + 0x1a),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
      else {
        func_0x0001082a1764(param_2,*(undefined4 *)(puVar1 + 1),*(int *)((long)puVar1 + 0xc),
                            *(undefined4 *)(puVar1 + 2),*(undefined4 *)(puVar1 + 5),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
    }
    return;
  }
  return;
}



/* Entry: 1082fd298; end: 1082fd363;  */

/* WARNING: Removing unreachable block (ram,0x0001082fd31c) */

uint FUN_1082fd298(long param_1)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar3 = param_1 + 0x30;
    FUN_1082f3a00(lVar3);
    if (0 < *(int *)(param_1 + 0x98)) {
      bVar2 = (char)*(undefined8 *)(param_1 + 0x90) + 0x40;
      FUN_1082fc488();
      *(byte *)(param_1 + 0xc4) = bVar2 ^ 1;
      return (uint)lVar3 & 0xffff;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082fd364);
  (*pcVar1)();
}



/* Entry: 1082fd364; end: 1082fd373;  */

undefined8 FUN_1082fd364(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 0x39) & 3;
  if (bVar1 < 2) {
    return 0;
  }
  if (bVar1 == 2) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082fc374);
  (*pcVar2)();
}



/* Entry: 1082fd374; end: 1082fd627;  */

void FUN_1082fd374(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 auStack_90 [4];
  long lStack_70;
  undefined2 uStack_62;
  
  lVar9 = *(long *)(param_1 + 0xb8);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(uint *)(param_1 + 0xc0);
  cVar3 = *(char *)(param_1 + 0xc4);
  plVar6 = param_3;
  lStack_70 = lVar9;
  FUN_10840f8d0(param_3,0x141,8);
  lVar5 = param_3[1];
  param_3[1] = (long)(plVar6 + 0x27);
  plVar6[0x27] = (long)FUN_1082fdc24;
  lVar8 = param_3[1];
  param_3[1] = lVar8 + 8;
  *(char *)(lVar8 + 8) = (char)plVar6 - (char)(int)lVar5;
  *param_3 = param_3[1] + 1;
  param_3[1] = param_3[1] + 1;
  lStack_70 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 1) = 0x31;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  *plVar6 = (long)&PTR_SUB_110a3a9e8;
  plVar6[9] = 0;
  *(undefined4 *)(plVar6 + 10) = 0;
  *(undefined1 *)((long)plVar6 + 0x54) = 0;
  *(undefined4 *)(plVar6 + 0xb) = 1;
  plVar6[0xc] = 0;
  *(undefined4 *)(plVar6 + 0xd) = 0;
  *(undefined1 *)((long)plVar6 + 0x6c) = 0;
  *(undefined4 *)(plVar6 + 0xe) = 1;
  plVar6[0xf] = 0;
  *(undefined4 *)(plVar6 + 0x10) = 0;
  *(undefined1 *)((long)plVar6 + 0x84) = 0;
  *(undefined4 *)(plVar6 + 0x11) = 1;
  plVar6[0x12] = 0;
  *(undefined4 *)(plVar6 + 0x13) = 0;
  *(undefined1 *)((long)plVar6 + 0x9c) = 0;
  *(undefined4 *)(plVar6 + 0x14) = 1;
  plVar6[0x15] = lVar9;
  auStack_90[0] = 0;
  func_0x0001082c6adc(plVar6 + 0x16);
  uStack_62 = *(undefined2 *)(param_1 + 0xac);
  FUN_10829c7b0(plVar6 + 0x16,(ulong)uVar2 << 0x20,0x100000000,*(long *)(param_1 + 0xa0) + 0x20,
                &uStack_62);
  *(undefined4 *)(plVar6 + 8) = 1;
  plVar6[9] = (long)&DAT_10f68f20c;
  *(undefined4 *)(plVar6 + 10) = 1;
  *(undefined1 *)((long)plVar6 + 0x54) = 0xe;
  *(undefined4 *)(plVar6 + 0xb) = 1;
  plVar6[0xc] = (long)&UNK_10f489ca0;
  *(undefined4 *)(plVar6 + 0xd) = 1;
  *(undefined1 *)((long)plVar6 + 0x6c) = 0xe;
  *(undefined4 *)(plVar6 + 0xe) = 1;
  plVar6[0xf] = (long)&UNK_10f489cae;
  uVar7 = 3;
  *(undefined4 *)(plVar6 + 0x10) = 3;
  *(undefined1 *)((long)plVar6 + 0x84) = 0x10;
  *(undefined4 *)(plVar6 + 0x11) = 1;
  if (cVar3 == '\0') {
    uVar7 = 0x11;
  }
  plVar6[0x12] = (long)&DAT_10f68f0f0;
  *(undefined4 *)(plVar6 + 0x13) = uVar7;
  *(undefined1 *)((long)plVar6 + 0x9c) = 0x17;
  *(undefined4 *)(plVar6 + 0x14) = 1;
  FUN_10829e324(plVar6 + 2,plVar6 + 9,4);
  FUN_10827f5a4(auStack_90);
  FUN_10827f5a4(&lStack_70);
  FUN_1082fc6e4(auStack_90,param_1 + 0x30);
  FUN_1082fc788(param_2,param_3,param_4,param_5,param_6,param_7,plVar6,auStack_90,0,param_8,param_9,
                *(undefined1 *)(param_1 + 0x38),&UNK_10df14cb4);
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  FUN_1082a3b78(auStack_90);
  return;
}



/* Entry: 1082fd628; end: 1082fdb5f;  */

undefined8 *****
FUN_1082fd628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *****param_5,undefined8 *****param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  int iVar10;
  undefined8 *****pppppuVar11;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  long extraout_x9;
  undefined4 extraout_w11;
  undefined4 extraout_w12;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 ****ppppuVar16;
  undefined1 auVar17 [16];
  double extraout_var;
  undefined8 ****extraout_var_00;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined8 ****ppppuStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  double dStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_160;
  double dStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  char cStack_b4;
  undefined8 ****ppppuStack_b0;
  undefined8 ***pppuStack_a8;
  byte bStack_91;
  undefined8 ***apppuStack_90 [3];
  undefined8 ***pppuStack_78;
  long lStack_70;
  
  uVar23 = (undefined4)((ulong)param_4 >> 0x20);
  uVar22 = (undefined4)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = param_5;
  pppppuVar8 = param_6;
  pppppuVar9 = param_6;
  if (param_5[0x1a] == (undefined8 ****)0x0) {
    FUN_1082fbcfc();
    iVar10 = (int)pppppuVar8;
    if (param_5[0x1a] == (undefined8 ****)0x0) goto LAB_1082fdb1c;
  }
  bStack_91 = 1;
  uVar13 = (ulong)(*(uint *)(param_5 + 0x13) &
                  ((int)*(uint *)(param_5 + 0x13) >> 0x1f ^ 0xffffffffU));
  unaff_x22 = 0x28;
  pppppuVar11 = (undefined8 *****)0x0;
  for (unaff_x21 = 0; iVar10 = (int)pppppuVar8, uVar13 != unaff_x21; unaff_x21 = unaff_x21 + 1) {
    if ((long)*(int *)(param_5 + 0x13) <= (long)unaff_x21) goto LAB_1082fdb54;
    pppppuVar5 = (undefined8 *****)&bStack_91;
    FUN_1082e91c4(pppppuVar5,pppppuVar11,
                  *(undefined4 *)(*(long *)((long)param_5[0x12] + unaff_x22) + 0x6c));
    unaff_x22 = unaff_x22 + 0x50;
    pppppuVar8 = pppppuVar11;
    pppppuVar11 = pppppuVar5;
  }
  if (((int)pppppuVar11 != 0) && ((bStack_91 & 1) != 0)) {
    pppppuVar5 = &ppppuStack_b0;
    FUN_1082fc0f8(pppppuVar5,param_6,param_5[0x1a][0x13][4]);
    iVar10 = (int)param_6;
    pppppuVar9 = (undefined8 *****)ppppuStack_b0;
    if ((undefined8 *****)ppppuStack_b0 == (undefined8 *****)0x0) {
      pppppuVar5 = (undefined8 *****)&UNK_10f488006;
      FUN_10841076c();
    }
    else {
      uVar14 = 0;
      auVar17 = NEON_fmov(0x3f800000,4);
      uStack_188 = 0xbf000000bf000000;
      uStack_190 = 0x3f0000003f000000;
      unaff_x21 = 0x11372aac8;
      unaff_x22 = 0x11372aad0;
      dStack_178 = auVar17._8_8_;
      dStack_180 = auVar17._0_8_;
      dStack_1b0 = -dStack_180;
      dStack_1a8 = -dStack_178;
      uStack_198 = 0x3f80000000000000;
      uStack_1a0 = 0x3f80000000000000;
      for (; iVar10 = (int)param_6, uVar14 != uVar13; uVar14 = uVar14 + 1) {
        if ((long)*(int *)(param_5 + 0x13) <= (long)uVar14) {
LAB_1082fdb54:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1082fdb58);
          (*pcVar3)();
        }
        ppppuVar12 = param_5[0x12] + uVar14 * 10;
        func_0x0001082e70b0(&uStack_c4,ppppuVar12 + 8,*(byte *)((long)param_5 + 0xc4));
        ppppuVar4 = ppppuVar12;
        FUN_1082878d0();
        if ((int)ppppuVar4 != 0) {
          func_0x00010835de0c(ppppuVar12[5],ppppuVar12);
        }
        pppuStack_e0 = (undefined8 ****)0x0;
        uStack_d8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        ppppuVar16 = (undefined8 ****)param_5[0x14][0x12];
        if ((bRam000000011372aac0 & 1) == 0) {
          iVar10 = 0x1372aac0;
          func_0x0001082fe080();
          ppppuVar16 = uStack_100;
          if (iVar10 != 0) {
            uRam000000011372aae8 = uStack_188;
            uRam000000011372aae0 = uStack_190;
            ___cxa_guard_release();
            ppppuVar16 = uStack_100;
          }
        }
        if (((bRam000000011372aac8 & 1) == 0) &&
           (uVar6 = unaff_x21, func_0x0001082fe080(), ppppuVar16 = uStack_100, (int)uVar6 != 0)) {
          uRam000000011372aaf8 = uStack_198;
          uRam000000011372aaf0 = uStack_1a0;
          ___cxa_guard_release(0x11372aac8);
          ppppuVar16 = uStack_100;
        }
        if (((bRam000000011372aad0 & 1) == 0) &&
           (lVar7 = unaff_x22, func_0x0001082fe080(), ppppuVar16 = uStack_100, (int)lVar7 != 0)) {
          dRam000000011372ab08 = dStack_1a8;
          dRam000000011372ab00 = dStack_1b0;
          ___cxa_guard_release(0x11372aad0);
          ppppuVar16 = uStack_100;
        }
        auVar17._8_8_ = ppppuVar16;
        auVar17._0_8_ = ppppuVar16;
        auVar17 = NEON_scvtf(auVar17,4);
        fStack_150 = SUB84(dStack_180,0) / auVar17._0_4_;
        fStack_14c = (float)((ulong)dStack_180 >> 0x20) / auVar17._4_4_;
        fStack_148 = SUB84(dStack_178,0) / auVar17._8_4_;
        fStack_144 = (float)((ulong)dStack_178 >> 0x20) / auVar17._12_4_;
        while( true ) {
          pppppuVar5 = (undefined8 *****)ppppuVar12[5];
          param_6 = (undefined8 *****)&pppuStack_e0;
          func_0x00010835dca0(pppppuVar5,param_6,&uStack_f0,0,0);
          if ((int)pppppuVar5 == 0) break;
          auVar2._8_8_ = uStack_d8;
          auVar2._0_8_ = pppuStack_e0;
          auVar17 = NEON_scvtf(auVar2,4);
          uStack_f8 = auVar17._8_8_;
          uStack_100 = auVar17._0_8_;
          FUN_1082fdf24(uStack_100,uRam000000011372aae0);
          dStack_160 = (double)func_0x0001082fdff8();
          uVar19 = CONCAT44(fStack_144,fStack_148);
          uVar18 = CONCAT44(fStack_14c,fStack_150);
          dStack_158 = extraout_var;
          uStack_140 = func_0x0001082fdf2c(uStack_100);
          uStack_110 = CONCAT44(uVar23,uVar22);
          uStack_130 = uVar18;
          uStack_128 = uVar19;
          uStack_120 = param_3;
          func_0x0001082fdf2c(dStack_160,CONCAT44(fStack_14c,fStack_150));
          uStack_100 = (undefined8 ****)func_0x0001082fdff8();
          uStack_f8 = extraout_var_00;
          if (*(int *)(param_5 + 0x15) == 1) {
            dStack_158 = dRam000000011372ab08;
            dStack_160 = dRam000000011372ab00;
            uVar21 = uStack_110;
            func_0x0001082fdf2c(dRam000000011372ab00,CONCAT44((int)uStack_130,(int)uStack_140));
            func_0x0001082fdff8();
            uStack_168 = uRam000000011372aaf8;
            uStack_170 = uRam000000011372aaf0;
            uVar18 = uRam000000011372aaf0;
            uVar19 = uRam000000011372aaf8;
            uStack_140 = FUN_1082fdf24();
            uStack_110 = CONCAT44(uVar23,uVar22);
            uStack_130 = uVar18;
            uStack_128 = uVar19;
            uStack_120 = uVar21;
            func_0x0001082fdf2c(dStack_160,uStack_100);
            uVar20 = (undefined4)uVar21;
            func_0x0001082fdff8();
            uVar18 = uStack_170;
            uVar15 = FUN_1082fdf24();
            uStack_f8 = (undefined8 ****)CONCAT44((int)uVar18,uVar20);
            uStack_100 = (undefined8 ****)CONCAT44(uVar22,uVar15);
          }
          if ((int)ppppuVar4 == 0) {
            FUN_1082fdf34(ppppuVar12,apppuStack_90,&uStack_f0);
            *pppppuVar9 = (undefined8 ****)apppuStack_90[0];
            func_0x0001082fe0d8();
            *(undefined4 *)(pppppuVar9 + 4) = uStack_c4;
            if (cStack_b4 == '\x01') {
              *(undefined8 *)((long)pppppuVar9 + 0x24) = uStack_c0;
              *(undefined4 *)((long)pppppuVar9 + 0x2c) = uStack_b8;
              pppppuVar9 = pppppuVar9 + 6;
            }
            else {
              pppppuVar9 = (undefined8 *****)((long)pppppuVar9 + 0x24);
            }
            *pppppuVar9 = (undefined8 ****)pppuStack_78;
            *(int *)(pppppuVar9 + 1) = (int)uStack_140;
            *(int *)((long)pppppuVar9 + 0xc) = (int)uStack_110;
            pppppuVar9[3] = uStack_f8;
            pppppuVar9[2] = uStack_100;
            *(undefined4 *)(pppppuVar9 + 4) = uStack_c4;
            param_3 = uStack_110;
            if (cStack_b4 == '\x01') {
              func_0x0001082fe040();
            }
            func_0x0001082fe058(uStack_130,uStack_120);
            if (cStack_b4 == '\x01') {
              func_0x0001082fe040();
            }
            func_0x0001082fe058(uStack_110,uStack_120);
            if (cStack_b4 == '\x01') {
              *(undefined8 *)(extraout_x9 + 0x24) = uStack_c0;
              *(undefined4 *)(extraout_x9 + 0x2c) = uStack_b8;
              pppppuVar9 = (undefined8 *****)(extraout_x9 + 0x30);
            }
            else {
              pppppuVar9 = (undefined8 *****)(extraout_x9 + 0x24);
            }
          }
          else {
            *(undefined4 *)pppppuVar9 = (undefined4)uStack_f0;
            *(undefined4 *)((long)pppppuVar9 + 4) = uStack_f0._4_4_;
            func_0x0001082fe0d8(uStack_e8 & 0xffffffff);
            *(undefined4 *)(pppppuVar9 + 4) = uStack_c4;
            if (cStack_b4 == '\x01') {
              *(undefined8 *)((long)pppppuVar9 + 0x24) = uStack_c0;
              *(undefined4 *)((long)pppppuVar9 + 0x2c) = uStack_b8;
              pppppuVar5 = pppppuVar9 + 6;
            }
            else {
              pppppuVar5 = (undefined8 *****)((long)pppppuVar9 + 0x24);
            }
            *(undefined4 *)pppppuVar5 = extraout_w12;
            *(undefined4 *)((long)pppppuVar5 + 4) = extraout_w9;
            *(int *)(pppppuVar5 + 1) = (int)uStack_140;
            *(int *)((long)pppppuVar5 + 0xc) = (int)uStack_110;
            pppppuVar5[3] = uStack_f8;
            pppppuVar5[2] = uStack_100;
            *(undefined4 *)(pppppuVar5 + 4) = uStack_c4;
            if (cStack_b4 == '\x01') {
              *(undefined8 *)((long)pppppuVar5 + 0x24) = uStack_c0;
              *(undefined4 *)((long)pppppuVar5 + 0x2c) = uStack_b8;
              pppppuVar5 = pppppuVar5 + 6;
            }
            else {
              pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + 0x24);
            }
            *(undefined4 *)pppppuVar5 = extraout_w8;
            *(undefined4 *)((long)pppppuVar5 + 4) = extraout_w11;
            *(int *)(pppppuVar5 + 1) = (int)uStack_120;
            *(undefined4 *)((long)pppppuVar5 + 0xc) = (undefined4)uStack_130;
            pppppuVar5[3] = uStack_f8;
            pppppuVar5[2] = uStack_100;
            *(undefined4 *)(pppppuVar5 + 4) = uStack_c4;
            if (cStack_b4 == '\x01') {
              *(undefined8 *)((long)pppppuVar5 + 0x24) = uStack_c0;
              *(undefined4 *)((long)pppppuVar5 + 0x2c) = uStack_b8;
              pppppuVar5 = pppppuVar5 + 6;
            }
            else {
              pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + 0x24);
            }
            *(undefined4 *)pppppuVar5 = extraout_w8;
            *(undefined4 *)((long)pppppuVar5 + 4) = extraout_w9;
            *(int *)(pppppuVar5 + 1) = (int)uStack_120;
            *(int *)((long)pppppuVar5 + 0xc) = (int)uStack_110;
            pppppuVar5[3] = uStack_f8;
            pppppuVar5[2] = uStack_100;
            *(undefined4 *)(pppppuVar5 + 4) = uStack_c4;
            pppppuVar9 = (undefined8 *****)((long)pppppuVar5 + 0x24);
            param_3 = uStack_110;
            if (cStack_b4 == '\x01') {
              *(undefined8 *)((long)pppppuVar5 + 0x24) = uStack_c0;
              *(undefined4 *)((long)pppppuVar5 + 0x2c) = uStack_b8;
              pppppuVar9 = pppppuVar5 + 6;
            }
          }
        }
      }
      param_5[0x19] = (undefined8 ****)pppuStack_a8;
    }
  }
LAB_1082fdb1c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pppppuVar8 = (undefined8 *****)&pppuStack_1f0;
  ppppuStack_1d0 = pppppuVar9;
  ppppuStack_1c8 = param_5;
  puStack_1c0 = &stack0xfffffffffffffff0;
  pcStack_1b8 = FUN_1082fdb60;
  uVar1 = *(uint *)(pppppuVar5 + 1);
  pppppuVar9 = pppppuVar5;
  if ((int)((*(uint *)((long)pppppuVar5 + 0xc) >> 1) - uVar1) < iVar10) {
    lStack_1e0 = unaff_x22;
    uStack_1d8 = unaff_x21;
    if ((int)(uVar1 ^ 0x7fffffff) < iVar10) {
      func_0x00010bdb1a68();
      pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x141);
      (*(code *)**pppppuVar5)(pppppuVar5);
      return pppppuVar5;
    }
    uStack_1e8 = 0x7fffffff;
    pppuStack_1f0 = (undefined8 ****)0x50;
    uVar13 = (ulong)(uVar1 + iVar10);
    FUN_10840fe24(0x3ff8000000000000);
    pppppuVar9 = pppppuVar8;
    if (*(int *)(pppppuVar5 + 1) != 0) {
      _memcpy(pppppuVar8,*pppppuVar5,(long)*(int *)(pppppuVar5 + 1) * 0x50);
    }
    if ((*(byte *)((long)pppppuVar5 + 0xc) & 1) != 0) {
      pppppuVar9 = (undefined8 *****)*pppppuVar5;
      _free(pppppuVar9);
    }
    uVar13 = uVar13 / 0x50;
    if (0x7ffffffe < uVar13) {
      uVar13 = 0x7fffffff;
    }
    *pppppuVar5 = pppppuVar8;
    *(uint *)((long)pppppuVar5 + 0xc) = (int)uVar13 << 1 | 1;
  }
  return pppppuVar9;
}



/* Entry: 1082fdb60; end: 1082fdc23;  */

undefined8 * FUN_1082fdb60(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = param_1;
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - uVar1) < param_2) {
    if ((int)(uVar1 ^ 0x7fffffff) < param_2) {
      func_0x00010bdb1a68();
      param_1 = (undefined8 *)((long)param_1 + -0x141);
      (**(code **)*param_1)(param_1);
      return param_1;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 0x50;
    uVar4 = (ulong)(uVar1 + param_2);
    FUN_10840fe24(0x3ff8000000000000);
    puVar3 = puVar2;
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(puVar2,*param_1,(long)*(int *)(param_1 + 1) * 0x50);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      puVar3 = (undefined8 *)*param_1;
      _free(puVar3);
    }
    uVar4 = uVar4 / 0x50;
    if (0x7ffffffe < uVar4) {
      uVar4 = 0x7fffffff;
    }
    *param_1 = puVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar4 << 1 | 1;
  }
  return puVar3;
}



/* Entry: 1082fdc24; end: 1082fdc9f;  */

undefined8 * FUN_1082fdc24(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x141);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 1082fdca0; end: 1082fdcb3;  */

void FUN_1082fdca0(void)

{
  undefined1 *unaff_x19;
  
  func_0x0001082fdc54();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}


