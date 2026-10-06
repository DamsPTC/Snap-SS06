/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083b80e8; end: 1083b814b;  */

void FUN_1083b80e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083b814c; end: 1083b81ef;  */

void FUN_1083b814c(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  plVar2 = param_2 + 2;
  uStack_24 = param_3;
  FUN_1083b8270(plVar2,param_2[1],&uStack_30);
  if (((int)plVar2 == 0) || (*param_2 == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_108346318(auStack_38,*param_2,uStack_30);
    lStack_48 = param_2[1];
    FUN_1083b84b4(&uStack_40,param_2 + 2,auStack_38,&lStack_48,&uStack_24);
    uVar1 = uStack_40;
    uStack_40 = 0;
    *param_1 = uVar1;
    FUN_1083b8098(&uStack_40);
    func_0x0001078bddf8(auStack_38);
  }
  return;
}



/* Entry: 1083b81f0; end: 1083b826f;  */

void FUN_1083b81f0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  uStack_38 = param_4;
  FUN_1083b8270(param_2,param_4,&uStack_40);
  if ((((int)uVar1 == 0) || (*param_3 == 0)) || (*(ulong *)(*param_3 + 0x20) < uStack_40)) {
    *param_1 = 0;
  }
  else {
    FUN_1083b8360(auStack_48,param_2,param_3,&uStack_38);
    func_0x0001083b8554();
  }
  return;
}



/* Entry: 1083b8270; end: 1083b835f;  */

bool FUN_1083b8270(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_1083306e4(&uStack_70,param_1,param_2);
  if (((((uVar2 & 1) == 0) || ((int)*(uint *)(param_1 + 0x10) < 1)) ||
      (((int)*(uint *)(param_1 + 0x14) < 1 || *(uint *)(param_1 + 0x10) >> 0x1d != 0) ||
       *(uint *)(param_1 + 0x14) >> 0x1d != 0)) ||
     ((*(int *)(param_1 + 8) - 0x1bU < 0xffffffe6 || 3 < *(uint *)(param_1 + 0xc) ||
      (lVar3 = param_1, FUN_1083307d8(param_1,param_2), (int)lVar3 == 0)))) {
    bVar1 = false;
  }
  else {
    func_0x00010835c6b0(param_1,param_2);
    if ((param_3 != (long *)0x0) && (param_1 != -1)) {
      *param_3 = param_1;
    }
    bVar1 = param_1 != -1;
  }
  FUN_108330548(&uStack_70);
  return bVar1;
}



/* Entry: 1083b8360; end: 1083b83b7;  */

void FUN_1083b8360(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001083b8540();
  func_0x0001083b8580();
  func_0x0001083b8570();
  *unaff_x20 = param_1;
  func_0x0001083b8538();
  return;
}



/* Entry: 1083b83b8; end: 1083b845b;  */

void FUN_1083b83b8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar1 = param_2 + 2;
  FUN_1083b8270(plVar1,param_2[1],&uStack_38);
  if (((int)plVar1 == 0) || (*param_2 == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_108346520(auStack_40,*param_2,uStack_38,param_3,param_4);
    lStack_50 = param_2[1];
    FUN_1083b845c(auStack_48,param_2 + 2,auStack_40,&lStack_50);
    func_0x0001083b8554();
    func_0x0001078bddf8(auStack_40);
  }
  return;
}



/* Entry: 1083b845c; end: 1083b84b3;  */

void FUN_1083b845c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001083b8540();
  func_0x0001083b8580();
  func_0x0001083b8570();
  *unaff_x20 = param_1;
  func_0x0001083b8538();
  return;
}



/* Entry: 1083b84b4; end: 1083b8523;  */

void FUN_1083b84b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0001083b8540();
  *param_2 = 0;
  FUN_1083b7584();
  *unaff_x20 = param_1;
  func_0x0001083b8538();
  return;
}



/* Entry: 1083b8524; end: 1083b859f;  */

void FUN_1083b8524(void)

{
  return;
}



/* Entry: 1083b85a0; end: 1083b8c6b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083b85a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 *param_6,uint *param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar24;
  ulong uVar23;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar30;
  undefined8 uVar28;
  float fVar31;
  ulong uVar29;
  undefined4 uStack_1a4;
  int *piStack_170;
  undefined8 *puStack_168;
  int *piStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int *piStack_148;
  float fStack_140;
  float fStack_13c;
  int *piStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long lStack_118;
  int *piStack_110;
  long lStack_108;
  undefined8 uStack_100;
  int *piStack_f8;
  int *piStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  
  iVar26 = (int)*(undefined8 *)(param_7 + 2) - (int)*(undefined8 *)param_7;
  iVar30 = (int)((ulong)*(undefined8 *)(param_7 + 2) >> 0x20) -
           (int)((ulong)*(undefined8 *)param_7 >> 0x20);
  piVar13 = (int *)CONCAT44(iVar30,iVar26);
  uVar22 = NEON_scvtf(param_6[2],4);
  uVar28 = NEON_scvtf(piVar13,4);
  fVar21 = (float)uVar22 / (float)uVar28;
  fVar24 = (float)((ulong)uVar22 >> 0x20) / (float)((ulong)uVar28 >> 0x20);
  uVar22 = NEON_fmov(0x3f800000,4);
  fVar31 = (float)((ulong)uVar22 >> 0x20);
  if (param_9 == 0) {
    uVar29 = 0x100000001;
    uVar23 = (ulong)(CONCAT14(~-(fVar24 == fVar31),(uint)(~-(fVar21 == (float)uVar22) & 1)) &
                    0x1ffffffff);
  }
  else {
    bVar7 = (float)uVar22 < fVar21;
    bVar8 = fVar31 < fVar24;
    _log2f();
    _log2f();
    uVar29 = CONCAT44((int)fVar24,(int)fVar21);
    uVar23 = CONCAT44((int)fVar24,(int)fVar21) ^
             (CONCAT44((int)fVar24,(int)fVar21) ^ uVar29) & ~CONCAT44(-(uint)bVar8,-(uint)bVar7);
    uVar23 = CONCAT44((int)(float)(uVar23 >> 0x20),(int)(float)uVar23);
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_94 = 0x3f800000;
  uStack_8c = 0x40800000;
  FUN_1083762f4(&uStack_d0,1);
  uVar25 = (uint)(uVar23 >> 0x20);
  uVar20 = (uint)uVar23;
  iVar19 = 0;
  if (param_9 != 0) {
    iVar19 = 2;
  }
  uStack_e8 = 0;
  uStack_e4 = 0;
  if (-1 < (int)(uVar20 | uVar25)) {
    iVar19 = param_9;
  }
  uStack_e0 = 0;
  auStack_d8 = (undefined1  [8])0x0;
  if (iVar19 == 2) {
    puVar14 = (undefined8 *)auStack_d8;
    uVar18 = 1;
LAB_1083b86ec:
    *(undefined4 *)puVar14 = uVar18;
  }
  else if (iVar19 == 3) {
    uVar18 = 0;
    puVar14 = (undefined8 *)((long)auStack_d8 + 4);
    uStack_e4 = 1;
    uStack_e0 = 0x3eaaaaab3eaaaaab;
    goto LAB_1083b86ec;
  }
  piStack_f8 = (int *)0x0;
  piStack_f0 = (int *)0x0;
  uVar2 = *param_7;
  uVar4 = param_7[1];
  if (((param_8 == 0) || (uVar23 = *(ulong *)(param_5 + 0x18), uVar23 == 0)) ||
     (uVar11 = uVar23, FUN_108343d54(), (uVar11 & 1) != 0)) {
    FUN_1083b83b8(&piStack_170,param_5 + 8,0,0);
    piVar15 = piStack_f8;
    piStack_f8 = piStack_170;
    piStack_170 = (int *)0x0;
    FUN_1083b8c6c(piVar15);
    func_0x000106f47184(&piStack_170);
    uStack_1a4 = 0;
  }
  else {
    FUN_108343d7c(&uStack_128,uVar23);
    piStack_170 = uStack_128;
    uStack_128 = (int *)0x0;
    uStack_100 = 0;
    puStack_168 = (undefined8 *)((ulong)*(uint *)(param_5 + 0x24) << 0x20 | 0x10);
    piStack_160 = piVar13;
    FUN_10810a400(&uStack_100);
    func_0x0001083b8d68(&piStack_138);
    piVar15 = piStack_138;
    if (piStack_138 == (int *)0x0) {
      lStack_108 = 0;
      func_0x0001083b8d4c();
      lVar10 = lStack_108;
      lStack_108 = 0;
      if (lVar10 != 0) {
        func_0x0001083b8d40();
      }
      uStack_1a4 = 0;
    }
    else {
      piVar17 = piStack_138;
      FUN_1083b8df0(piStack_138);
      func_0x0001083b812c(&piStack_148,param_5);
      uVar29 = (ulong)(uint)(float)(int)-uVar4;
      FUN_10834001c((float)(int)-uVar2,piVar17,piStack_148,&uStack_e8,&uStack_d0);
      func_0x0001083b8d60();
      piVar17 = piStack_f0;
      piStack_f0 = piStack_138;
      piStack_138 = (int *)0x0;
      func_0x0001083b8c90(piVar17);
      FUN_10830ad7c(&piStack_148,piStack_f0);
      piVar17 = piStack_f8;
      piStack_f8 = piStack_148;
      piStack_148 = (int *)0x0;
      FUN_1083b8c6c(piVar17);
      func_0x0001083b8d60();
      uVar4 = 0;
      uStack_1a4 = 1;
      uVar2 = 0;
    }
    func_0x000106f471d4(&piStack_138);
    func_0x0001083b8d74();
    FUN_10810a400(&uStack_128);
    if (piVar15 == (int *)0x0) goto LAB_1083b89dc;
  }
  do {
    if (uVar20 == 0 && uVar25 == 0) {
      puVar14 = param_6;
      func_0x0001078bdb50();
      piVar13 = (int *)((long)puVar14 * (long)*(int *)((long)param_6 + 0x14));
      __Znam();
      piStack_160 = (int *)*param_6;
      if (piStack_160 != (int *)0x0) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piStack_160,0x10);
          if (bVar7) {
            *piStack_160 = *piStack_160 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_150 = param_6[2];
      uStack_158 = param_6[1];
      piVar15 = piStack_f8;
      piStack_170 = piVar13;
      puStack_168 = puVar14;
      piStack_138 = piVar13;
      FUN_1083b5b58(piStack_f8,0,&piStack_170,uVar2,uVar4,0);
      if ((int)piVar15 == 0) {
        func_0x0001083b8d4c();
      }
      else {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        piStack_138 = (int *)0x0;
        uStack_128 = (int *)0x0;
        *puVar16 = &PTR_FUN_110a41c60;
        puVar16[1] = piVar13;
        puVar16[2] = puVar14;
        FUN_1083b8d10(&uStack_128);
        func_0x0001083b8d4c();
        if (puVar16 != (undefined8 *)0x0) {
          func_0x0001083b8d40();
        }
      }
      FUN_10810a400(&piStack_160);
      func_0x0001078ae540(&piStack_138);
      break;
    }
    iVar3 = *(int *)(param_6 + 2);
    iVar5 = *(int *)((long)param_6 + 0x14);
    iVar19 = iVar3;
    if (uVar20 - 1 != 0) {
      iVar19 = iVar26 << 1;
    }
    iVar1 = iVar3;
    uVar9 = 0;
    if (uVar20 != 0) {
      iVar1 = iVar19;
      uVar9 = uVar20 - 1;
    }
    if ((uVar20 & 0x80000000) != 0) {
      iVar1 = iVar3 << (ulong)(~uVar20 & 0x1f);
      uVar9 = uVar20 + 1;
    }
    uVar20 = uVar9;
    iVar19 = iVar5;
    if (uVar25 - 1 != 0) {
      iVar19 = iVar30 << 1;
    }
    iVar3 = iVar5;
    uVar9 = 0;
    if (uVar25 != 0) {
      iVar3 = iVar19;
      uVar9 = uVar25 - 1;
    }
    if ((uVar25 & 0x80000000) != 0) {
      iVar3 = iVar5 << (ulong)(~uVar25 & 0x1f);
      uVar9 = uVar25 + 1;
    }
    uVar25 = uVar9;
    piStack_170 = *(int **)(piStack_f8 + 4);
    if (piStack_170 != (int *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piStack_170,0x10);
        if (bVar7) {
          *piStack_170 = *piStack_170 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puStack_168 = *(undefined8 **)(piStack_f8 + 6);
    piStack_160 = (int *)CONCAT44(iVar3,iVar1);
    if (uVar20 == 0 && uVar25 == 0) {
      func_0x000108152830(&piStack_170,param_6);
    }
    func_0x0001083b8d68(&piStack_110);
    piVar15 = piStack_110;
    uVar27 = (undefined4)uVar29;
    uVar18 = SUB84(piVar13,0);
    if (piStack_110 == (int *)0x0) {
      lStack_118 = 0;
      func_0x0001083b8d4c();
      lVar10 = lStack_118;
      lStack_118 = 0;
      if (lVar10 != 0) {
        func_0x0001083b8d40();
      }
    }
    else {
      piVar12 = piStack_110;
      FUN_1083b8df0(piStack_110);
      piVar17 = piStack_f8;
      piVar13 = (int *)(ulong)uVar2;
      uVar23 = (ulong)uVar4;
      FUN_108219ff8(piVar13,uVar23,iVar26,iVar30);
      piStack_138 = piVar13;
      uStack_130 = uVar23;
      FUN_10817500c(&piStack_138);
      uStack_128 = (int *)CONCAT44(uVar27,uVar18);
      fStack_140 = (float)iVar1;
      piVar13 = (int *)(ulong)(uint)fStack_140;
      fStack_13c = (float)iVar3;
      uVar29 = (ulong)(uint)fStack_13c;
      piStack_148 = (int *)0x0;
      uStack_120 = param_3;
      uStack_11c = param_4;
      FUN_10833ed1c(piVar12,piVar17,&uStack_128,&piStack_148,&uStack_e8,&uStack_d0,uStack_1a4);
      piVar17 = piStack_f0;
      piStack_f0 = piStack_110;
      piStack_110 = (int *)0x0;
      func_0x0001083b8c90(piVar17);
      FUN_10830ad7c(&uStack_128,piStack_f0);
      piVar17 = piStack_f8;
      piStack_f8 = uStack_128;
      uStack_128 = (int *)0x0;
      FUN_1083b8c6c(piVar17);
      func_0x000106f47184(&uStack_128);
      uVar4 = 0;
      uStack_1a4 = 1;
      uVar2 = 0;
      iVar30 = iVar3;
      iVar26 = iVar1;
    }
    func_0x000106f471d4(&piStack_110);
    func_0x0001083b8d74();
  } while (piVar15 != (int *)0x0);
LAB_1083b89dc:
  func_0x000106f47184(&piStack_f8);
  func_0x000106f471d4(&piStack_f0);
  FUN_108375e94(&uStack_d0);
  return;
}



/* Entry: 1083b8c6c; end: 1083b8cb3;  */

void FUN_1083b8c6c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001083b8d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083b8cb4; end: 1083b8ce3;  */

undefined8 * FUN_1083b8cb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a41c60;
  FUN_1083b8d10(param_1 + 1);
  return param_1;
}



/* Entry: 1083b8ce4; end: 1083b8cf7;  */

void FUN_1083b8ce4(void)

{
  FUN_1083b8cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b8cf8; end: 1083b8d0f;  */

undefined8 FUN_1083b8cf8(void)

{
  return 1;
}



/* Entry: 1083b8d10; end: 1083b8d3f;  */

long * FUN_1083b8d10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1083b8d40; end: 1083b8def;  */

void FUN_1083b8d40(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083b8d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083b8df0; end: 1083b8e77;  */

void FUN_1083b8df0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1[5] == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x40))();
    plVar2 = (long *)param_1[5];
    param_1[5] = (long)plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar1 = (long *)param_1[5];
    }
    if (plVar1 != (long *)0x0) {
      plVar1[0x18e] = (long)param_1;
    }
  }
  return;
}



/* Entry: 1083b8e78; end: 1083b8eb3;  */

long * FUN_1083b8e78(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  FUN_1083b8df0();
  if (*param_2 != 0) {
    plVar1 = *(long **)(param_1 + 0xc48);
                    /* WARNING: Could not recover jumptable at 0x00010833c274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1d8))(plVar1,param_2,param_3,param_4);
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 1083b8eb4; end: 1083b8f4f;  */

undefined8
FUN_1083b8eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_108330de8(param_2,&uStack_60);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1083b8e78(param_1,&uStack_60,param_3,param_4);
  }
  FUN_10810a400(&uStack_50);
  return param_1;
}



/* Entry: 1083b8f50; end: 1083b8f63;  */

void FUN_1083b8f50(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083b8f54);
  (*pcVar1)();
}



/* Entry: 1083b8f64; end: 1083b8f9b;  */

void FUN_1083b8f64(long param_1)

{
  func_0x0001083b8d7c();
  func_0x0001083b939c();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1083b8f9c; end: 1083b8fdf;  */

long FUN_1083b8f9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0001083b939c();
  lVar2 = *(long *)(lVar1 + 0x28);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xc70) = 0;
  }
  func_0x000106f47184(param_1 + 0x30);
  FUN_1083b9358((long *)(lVar1 + 0x28));
  return param_1;
}



/* Entry: 1083b8fe0; end: 1083b8fef;  */

undefined8 FUN_1083b8fe0(void)

{
  return 0;
}



/* Entry: 1083b8ff0; end: 1083b9073;  */

void FUN_1083b8ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lStack_48;
  
  FUN_10830ad7c(&lStack_48);
  if (lStack_48 != 0) {
    FUN_10834001c(param_1,param_2,param_4,lStack_48,param_5,param_6);
  }
  func_0x000106f47184(&lStack_48);
  return;
}



/* Entry: 1083b9074; end: 1083b925b;  */

void FUN_1083b9074(long *param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_150 [56];
  long lStack_118;
  int *piStack_110;
  undefined8 uStack_108;
  int *piStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plVar4 = param_1;
  func_0x0001083b8e4c(param_1,&uStack_d0);
  if ((int)plVar4 == 0) {
    (**(code **)(*param_1 + 0x18))(&piStack_110,param_1);
    if (piStack_110 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_110,0x10);
        if (bVar2) {
          *piStack_110 = *piStack_110 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_f8 = piStack_110;
    uStack_f0 = uStack_108;
    uStack_e8 = param_4 - (param_3 & 0xffffffff00000000) & 0xffffffff00000000 |
                (ulong)(uint)((int)param_4 - (int)param_3);
    FUN_1083306e4(&uStack_a0,&piStack_f8,0);
    FUN_10810a400(&piStack_f8);
    FUN_10810a400(&piStack_110);
    FUN_1083309b4(&uStack_a0);
    FUN_1083b8eb4(param_1,&uStack_a0,param_3,param_3 >> 0x20);
    if (((ulong)param_1 & 1) == 0) {
      lStack_118 = 0;
      (*param_7)(param_8,&lStack_118);
      lVar3 = lStack_118;
      lStack_118 = 0;
      if (lVar3 != 0) {
        func_0x0001083b9388();
      }
      goto LAB_1083b91b4;
    }
    param_3 = 0;
    param_4 = lStack_78;
  }
  else {
    FUN_108330c70(&uStack_a0,&uStack_d0);
  }
  uStack_e0 = param_3;
  lStack_d8 = param_4;
  FUN_10833043c(auStack_150,&uStack_a0);
  FUN_1083b85a0(auStack_150,param_2,&uStack_e0,param_5,param_6,param_7,param_8);
  FUN_108330548(auStack_150);
LAB_1083b91b4:
  func_0x0001083b93c0();
  FUN_108330548(&uStack_a0);
  return;
}



/* Entry: 1083b925c; end: 1083b92b3;  */

void FUN_1083b925c(void)

{
  long lVar1;
  code *in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack_28;
  
  lStack_28 = 0;
  (*in_stack_00000008)(in_stack_00000010,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    FUN_1083b9388();
  }
  return;
}



/* Entry: 1083b92b4; end: 1083b9333;  */

void FUN_1083b92b4(long *param_1,int param_2)

{
  code *pcVar1;
  
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (param_1[6] == 0) {
    if (param_2 != 0) {
      return;
    }
    pcVar1 = *(code **)(*param_1 + 0x80);
  }
  else {
    if (*(int *)(param_1[6] + 8) != 1) {
      (**(code **)(*param_1 + 0x88))();
      if ((int)param_1 == 0) {
        return;
      }
      func_0x0001083b93b4();
      return;
    }
    func_0x0001083b93b4();
    pcVar1 = *(code **)(*param_1 + 0x90);
  }
  (*pcVar1)(param_1);
  return;
}



/* Entry: 1083b9334; end: 1083b9357;  */

void FUN_1083b9334(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000113826c70 & 1) == 0) {
    iVar4 = 0x13826c70;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = &PTR_DAT_110a3e048;
      puVar5[1] = 1;
      puRam0000000113826c68 = puVar5;
      ___cxa_guard_release(0x113826c70);
    }
  }
  puVar5 = puRam0000000113826c68;
  if (puRam0000000113826c68 != (undefined8 *)0x0) {
    piVar1 = (int *)(puRam0000000113826c68 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = 0;
  *param_1 = puVar5;
  FUN_1083432b8(&uStack_28);
  return;
}



/* Entry: 1083b9358; end: 1083b9387;  */

long * FUN_1083b9358(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083b9388();
  }
  return param_1;
}



/* Entry: 1083b9388; end: 1083b93cb;  */

void FUN_1083b9388(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083b9390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083b93cc; end: 1083b9467;  */

ulong FUN_1083b93cc(ulong param_1,long param_2)

{
  ulong uVar1;
  
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    uVar1 = 0;
    if ((((0 < (int)*(uint *)(param_1 + 0x14) && *(uint *)(param_1 + 0x10) >> 0x1d == 0) &&
          *(uint *)(param_1 + 0x14) >> 0x1d == 0) && (*(int *)(param_1 + 8) != 0)) &&
       (*(int *)(param_1 + 0xc) != 0)) {
      if (param_2 == -1) {
        uVar1 = 1;
      }
      else {
        uVar1 = param_1;
        FUN_1083307d8(param_1,param_2);
        if ((int)uVar1 != 0) {
          uVar1 = (ulong)((ulong)(param_2 * *(int *)(param_1 + 0x14)) >> 0x1f == 0);
        }
      }
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 1083b9468; end: 1083b950b;  */

undefined8 * FUN_1083b9468(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  func_0x0001083b9c28();
  puVar1 = param_1;
  func_0x0001083b8f80();
  *puVar1 = &PTR_FUN_110a41de0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  FUN_108330bac(puVar1 + 7);
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



/* Entry: 1083b950c; end: 1083b95db;  */

undefined8 * FUN_1083b950c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lStack_38;
  
  puVar1 = param_1;
  FUN_1083b8f64(param_1,*(undefined4 *)(*param_3 + 0xc),*(undefined4 *)(*param_3 + 0x10));
  puVar2 = puVar1 + 7;
  puVar1[8] = 0;
  *puVar2 = 0;
  *puVar1 = &PTR_FUN_110a41de0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  FUN_1083306e4(puVar2,param_2,*(undefined8 *)(*param_3 + 0x20));
  lStack_38 = *param_3;
  *param_3 = 0;
  FUN_108330884(puVar2,&lStack_38,0,0);
  func_0x0001083b9c20();
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



/* Entry: 1083b95dc; end: 1083b9627;  */

undefined8 FUN_1083b95dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xca8;
  __Znwm(0xca8);
  FUN_108342e40();
  return uVar1;
}



/* Entry: 1083b9628; end: 1083b9637;  */

void FUN_1083b9628(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = param_2 + 0xc;
  uVar2 = param_3;
  FUN_1083b93cc(param_3,0xffffffffffffffff);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_108360070(&lStack_40,param_3,0);
    if (lStack_40 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_1083b9ae8(&uStack_48,param_3,&lStack_40,&lStack_38);
      uVar1 = uStack_48;
      uStack_48 = 0;
      *param_1 = uVar1;
      FUN_1083b9bc8(&uStack_48);
    }
    FUN_1083312cc(&lStack_40);
  }
  return;
}



/* Entry: 1083b9638; end: 1083b96b7;  */

void FUN_1083b9638(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_48;
  
  func_0x0001083b812c(&uStack_48,param_3 + 0x38);
  FUN_10834001c(param_1,param_2,param_4,uStack_48,param_5,param_6);
  func_0x000106f47184(&uStack_48);
  return;
}



/* Entry: 1083b96b8; end: 1083b97e7;  */

void FUN_1083b96b8(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  undefined7 uStack_68;
  bool bStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plVar5;
  
  if (param_3 != (undefined4 *)0x0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    _uStack_68 = 0;
    lStack_70 = 0;
    puVar7 = param_3;
    func_0x00010821a0c0();
    piStack_88 = *(int **)(param_2 + 0x50);
    if (piStack_88 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
        if (bVar3) {
          *piStack_88 = *piStack_88 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_80 = *(undefined8 *)(param_2 + 0x58);
    puStack_78 = puVar7;
    FUN_108330980(&lStack_70,&piStack_88);
    FUN_10810a400(&piStack_88);
    FUN_108331090(param_2 + 0x38,(ulong)&lStack_70 | 8,*param_3,param_3[1]);
    if (lStack_70 != 0) {
      *(undefined1 *)(lStack_70 + 0x59) = 2;
    }
    func_0x0001083b812c(param_1,&lStack_70);
    FUN_108330548(&lStack_70);
    return;
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(long *)(param_2 + 0x38) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      *(undefined1 *)(*(long *)(param_2 + 0x38) + 0x59) = 1;
    }
  }
  else {
    iVar4 = 1;
  }
  plVar5 = (long *)(param_2 + 0x38);
  if ((((0 < (int)*(uint *)(param_2 + 0x60)) &&
       ((0 < (int)*(uint *)(param_2 + 100) && *(uint *)(param_2 + 0x60) >> 0x1d == 0) &&
        *(uint *)(param_2 + 100) >> 0x1d == 0)) && (*(int *)(param_2 + 0x58) != 0)) &&
     (*(int *)(param_2 + 0x5c) != 0)) {
    uVar8 = *(ulong *)(param_2 + 0x48);
    uVar6 = param_2 + 0x50;
    func_0x0001078bdb50();
    if (uVar6 <= uVar8) {
      if (iVar4 != 1) {
        bVar3 = false;
        if (*plVar5 != 0) {
          bVar3 = *(char *)(*plVar5 + 0x59) != '\0';
        }
        if ((iVar4 == 2) || (bVar3)) {
          _uStack_68 = CONCAT17(iVar4 == 2,uStack_68);
          FUN_1083b7cdc(&uStack_60,plVar5,&bStack_61);
          uVar2 = uStack_60;
          uStack_60 = 0;
          *param_1 = uVar2;
          FUN_1083b8098(&uStack_60);
          return;
        }
      }
      func_0x0001083b8110();
      iVar4 = (int)plVar5;
      FUN_108330de8();
      if (iVar4 == 0) {
        *param_1 = 0;
      }
      else {
        FUN_1083b814c(param_1,&uStack_60,0);
      }
      func_0x0001083b8100(&uStack_60);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b97e8; end: 1083b97ff;  */

int ** FUN_1083b97e8(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int **ppiVar7;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar1 = param_1 + 0x38;
  iVar4 = (int)param_1 + 0x50;
  FUN_108331284();
  if (iVar4 != 0) {
    iVar4 = (int)param_2 + 0x10;
    func_0x000108331288();
    if (iVar4 != 0) {
      uStack_70 = *param_2;
      uStack_68 = param_2[1];
      piStack_60 = (int *)param_2[2];
      if (piStack_60 != (int *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_60,0x10);
          if (bVar3) {
            *piStack_60 = *piStack_60 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_50 = param_2[4];
      uStack_58 = param_2[3];
      puVar5 = &uStack_70;
      uStack_48 = param_3;
      uStack_44 = param_4;
      FUN_1083aa5ac(puVar5,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
      if (((ulong)puVar5 & 1) == 0) {
        ppiVar7 = (int **)0x0;
      }
      else {
        lVar6 = lVar1;
        FUN_108330d14(lVar1,uStack_48,uStack_44);
        piStack_88 = *(int **)(param_1 + 0x50);
        if (piStack_88 != (int *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
            if (bVar3) {
              *piStack_88 = *piStack_88 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_78 = uStack_50;
        ppiVar7 = &piStack_88;
        FUN_108345950(ppiVar7,lVar6,*(undefined8 *)(param_1 + 0x48),&piStack_60,uStack_70,uStack_68)
        ;
        if (((ulong)ppiVar7 & 1) != 0) {
          func_0x000108330c90(lVar1);
        }
        FUN_10810a400(&piStack_88);
      }
      FUN_10810a400(&piStack_60);
      return ppiVar7;
    }
  }
  return (int **)0x0;
}



/* Entry: 1083b9800; end: 1083b98f7;  */

undefined8 FUN_1083b9800(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_38;
  
  FUN_10830ad7c(&lStack_38);
  plVar3 = (long *)(param_1 + 0x38);
  if (*(long *)(lStack_38 + 0x30) == *plVar3) {
    if (param_2 == 0) {
      plVar2 = plVar3;
      FUN_1083b98f8();
      if (((ulong)plVar2 & 1) == 0) goto LAB_1083b98cc;
    }
    else {
      FUN_10833043c(auStack_70,plVar3);
      plVar2 = plVar3;
      FUN_1083b98f8();
      if (((ulong)plVar2 & 1) == 0) {
        func_0x0001083b9c48();
LAB_1083b98cc:
        uVar4 = 0;
        goto LAB_1083b98a8;
      }
      puVar1 = (undefined8 *)(param_1 + 0x40);
      uVar4 = *puVar1;
      FUN_10821a8d8();
      _memcpy(uVar4,uStack_68,puVar1);
      func_0x0001083b9c48();
    }
    FUN_1083b8df0();
    func_0x000108330578(*(long *)(param_1 + 0xc48) + 0x128,plVar3);
  }
  uVar4 = 1;
LAB_1083b98a8:
  func_0x000106f47184(&lStack_38);
  return uVar4;
}



/* Entry: 1083b98f8; end: 1083b991b;  */

void FUN_1083b98f8(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_108330ca0(auStack_20,param_1);
  return;
}



/* Entry: 1083b991c; end: 1083b991f;  */

void FUN_1083b991c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000113826c70 & 1) == 0) {
    iVar4 = 0x13826c70;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = &PTR_DAT_110a3e048;
      puVar5[1] = 1;
      puRam0000000113826c68 = puVar5;
      ___cxa_guard_release(0x113826c70);
    }
  }
  puVar5 = puRam0000000113826c68;
  if (puRam0000000113826c68 != (undefined8 *)0x0) {
    piVar1 = (int *)(puRam0000000113826c68 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = 0;
  *param_1 = puVar5;
  FUN_1083432b8(&uStack_28);
  return;
}



/* Entry: 1083b9920; end: 1083b99b7;  */

void FUN_1083b9920(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = param_6;
  if (param_5 == 0) {
    uStack_50 = 0;
  }
  uVar2 = param_2;
  uStack_58 = param_7;
  lStack_48 = param_5;
  uStack_40 = param_4;
  lStack_38 = param_3;
  FUN_1083b93cc(param_2,param_4);
  if (((uVar2 & 1) == 0) || (param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_1083b99b8(&uStack_60,param_2,&lStack_38,&uStack_40,&lStack_48,&uStack_50,&uStack_58);
    uVar1 = uStack_60;
    uStack_60 = 0;
    *param_1 = uVar1;
    FUN_1083b9bc8(&uStack_60);
  }
  return;
}



/* Entry: 1083b99b8; end: 1083b9a2f;  */

void FUN_1083b99b8(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  func_0x0001083b9c28();
  uVar1 = 0x78;
  __Znwm();
  FUN_1083b9468();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1083b9a30; end: 1083b9a3f;  */

void FUN_1083b9a30(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uVar2 = param_2;
  uStack_58 = param_5;
  uStack_40 = param_4;
  lStack_38 = param_3;
  FUN_1083b93cc(param_2,param_4);
  if (((uVar2 & 1) == 0) || (param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_1083b99b8(&uStack_60,param_2,&lStack_38,&uStack_40,&uStack_48,&uStack_50,&uStack_58);
    uVar1 = uStack_60;
    uStack_60 = 0;
    *param_1 = uVar1;
    FUN_1083b9bc8(&uStack_60);
  }
  return;
}



/* Entry: 1083b9a40; end: 1083b9ae7;  */

void FUN_1083b9a40(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_2;
  uStack_38 = param_4;
  FUN_1083b93cc(param_2,0xffffffffffffffff);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_108360070(&lStack_40,param_2,param_3);
    if (lStack_40 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_1083b9ae8(&uStack_48,param_2,&lStack_40,&uStack_38);
      uVar1 = uStack_48;
      uStack_48 = 0;
      *param_1 = uVar1;
      FUN_1083b9bc8(&uStack_48);
    }
    FUN_1083312cc(&lStack_40);
  }
  return;
}



/* Entry: 1083b9ae8; end: 1083b9b6b;  */

void FUN_1083b9ae8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm();
  *param_3 = 0;
  FUN_1083b950c();
  *param_1 = uVar1;
  func_0x0001083b9c20();
  return;
}



/* Entry: 1083b9b6c; end: 1083b9b6f;  */

undefined8 * FUN_1083b9b6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a41de0;
  FUN_108330548(param_1 + 7);
  puVar1 = param_1;
  func_0x0001083b939c();
  lVar2 = puVar1[5];
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xc70) = 0;
  }
  func_0x000106f47184(param_1 + 6);
  FUN_1083b9358(puVar1 + 5);
  return param_1;
}



/* Entry: 1083b9b70; end: 1083b9b83;  */

void FUN_1083b9b70(void)

{
  FUN_1083b9b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b9b84; end: 1083b9b97;  */

void FUN_1083b9b84(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0x50);
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = piVar3;
  param_1[1] = *(undefined8 *)(param_2 + 0x58);
  param_1[2] = *(undefined8 *)(param_2 + 0x60);
  return;
}



/* Entry: 1083b9b98; end: 1083b9bc7;  */

undefined8 * FUN_1083b9b98(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a41de0;
  FUN_108330548(param_1 + 7);
  puVar1 = param_1;
  func_0x0001083b939c();
  lVar2 = puVar1[5];
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xc70) = 0;
  }
  func_0x000106f47184(param_1 + 6);
  FUN_1083b9358(puVar1 + 5);
  return param_1;
}



/* Entry: 1083b9bc8; end: 1083b9c17;  */

long * FUN_1083b9bc8(long *param_1)

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



/* Entry: 1083b9c18; end: 1083b9c4f;  */

void FUN_1083b9c18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083b9c50; end: 1083b9d1b;  */

long FUN_1083b9c50(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lStack_40;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  puVar1 = &uStack_34;
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined4 *)((ulong)puVar1 | 1);
    uStack_34 = 0x72;
  }
  puVar2 = puVar1;
  if ((param_2 >> 1 & 1) != 0) {
    puVar2 = (undefined4 *)((long)puVar1 + 1);
    *(undefined1 *)puVar1 = 0x77;
  }
  *(undefined1 *)puVar2 = 0x62;
  lVar3 = param_1;
  _fopen(param_1,&uStack_34);
  if ((param_2 == 1) && (lVar3 == 0)) {
    lStack_40 = 0x1138270b0;
    FUN_1083b9d1c(param_1,&lStack_40);
    if ((int)param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lStack_40 + 8;
      _fopen(lVar3,&uStack_34);
    }
    FUN_1083a3ca0(lStack_40);
  }
  return lVar3;
}



/* Entry: 1083b9d1c; end: 1083b9e3b;  */

bool FUN_1083b9d1c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  _CFBundleGetMainBundle();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = param_1;
    _strlen(param_1);
    uVar4 = 0;
    _CFURLCreateFromFileSystemRepresentation(0,param_1,lVar3,0);
    uStack_38 = uVar4;
    _CFURLCopyFileSystemPath();
    uStack_40 = uVar4;
    _CFBundleCopyResourceURL(lVar2,uVar4,0,&PTR____CFConstantStringClassReference_110dbf1f8);
    bVar1 = lVar2 != 0;
    lStack_48 = lVar2;
    if (lVar2 != 0) {
      _CFURLCopyFileSystemPath();
      lVar3 = lVar2;
      lStack_50 = lVar2;
      _CFStringGetSystemEncoding();
      _CFStringGetCStringPtr(lVar2,lVar3);
      FUN_1083a3680(param_2,lVar2);
      FUN_1083b9e3c(&lStack_50);
    }
    FUN_1083b9e6c(&lStack_48);
    FUN_1083b9e3c(&uStack_40);
    FUN_1083b9e6c(&uStack_38);
  }
  return bVar1;
}



/* Entry: 1083b9e3c; end: 1083b9e6b;  */

long * FUN_1083b9e3c(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 1083b9e6c; end: 1083b9e9b;  */

long * FUN_1083b9e6c(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 1083b9e9c; end: 1083b9ea3;  */

void FUN_1083b9e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083b9ea4; end: 1083b9f3b;  */

void FUN_1083b9ea4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_c0 [4];
  short sStack_bc;
  long lStack_60;
  
  _bzero(auStack_c0,0x90);
  uVar1 = param_1;
  _fstat(param_1,auStack_c0);
  if ((((int)uVar1 == 0) && (sStack_bc < -0x7000)) && (-1 < lStack_60)) {
    lVar2 = 0;
    _mmap(0,lStack_60,1,2,param_1,0);
    if (lVar2 != -1) {
      *param_2 = lStack_60;
    }
  }
  return;
}



/* Entry: 1083b9f3c; end: 1083b9f73;  */

long FUN_1083b9f3c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_c0 [4];
  short sStack_bc;
  long lStack_60;
  
  _fileno();
  if ((int)param_1 < 0) {
    return 0;
  }
  _bzero(auStack_c0,0x90);
  uVar1 = param_1;
  _fstat(param_1,auStack_c0);
  if ((((int)uVar1 == 0) && (sStack_bc < -0x7000)) && (-1 < lStack_60)) {
    lVar2 = 0;
    _mmap(0,lStack_60,1,2,param_1,0);
    if (lVar2 != -1) {
      *param_2 = lStack_60;
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 1083b9f74; end: 1083ba223;  */

undefined8 FUN_1083b9f74(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  short *psVar19;
  short *psVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar15 = param_1[1];
  uVar16 = uVar15 - 6;
  if (uVar15 < 6) {
    return 0;
  }
  psVar19 = (short *)*param_1;
  uVar22 = (ulong)((uint)((ushort)psVar19[2] >> 8) | ((ushort)psVar19[2] & 0xff00ff) << 8);
  if (uVar15 < uVar22) {
    return 0;
  }
  sVar3 = *psVar19;
  uVar23 = (ulong)((uint)((ushort)psVar19[1] >> 8) | ((ushort)psVar19[1] & 0xff00ff) << 8);
  uVar21 = uVar16 / 0xc;
  if (uVar23 <= uVar16 / 0xc) {
    uVar21 = uVar23;
  }
  uVar17 = param_1[2];
  psVar20 = psVar19 + uVar17 * 6 + 4;
  do {
    if (uVar21 <= uVar17) {
      return 0;
    }
    uVar9 = psVar20[-1];
    sVar4 = *psVar20;
    uVar5 = psVar20[1];
    uVar6 = psVar20[2];
    uVar7 = psVar20[3];
    uVar8 = psVar20[4];
    uVar17 = uVar17 + 1;
    param_1[2] = uVar17;
    psVar20 = psVar20 + 6;
  } while (*(uint *)(param_1 + 3) != 0xffffffff && *(uint *)(param_1 + 3) != (uint)uVar6);
  *(ushort *)(param_2 + 0x10) = uVar6;
  uVar17 = (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8);
  uVar21 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
  if (uVar15 - uVar22 < uVar17 + uVar21) {
    return 0;
  }
  uVar13 = (uint)(uVar9 >> 8) | (uint)uVar9 << 0x18;
  if (uVar13 < 4) {
    pbVar1 = (byte *)((long)psVar19 + uVar17 + uVar22);
    switch(uVar13) {
    case 1:
      FUN_1083a357c(param_2);
      if (sVar4 == 0) {
        for (; uVar21 != 0; uVar21 = uVar21 - 1) {
          uVar13 = (uint)*pbVar1;
          if ((char)*pbVar1 < '\0') {
            uVar13 = (uint)*(ushort *)(&UNK_10df20356 + (ulong)(uVar13 - 0x80) * 2);
          }
          func_0x00010818f354(param_2,uVar13);
          pbVar1 = pbVar1 + 1;
        }
      }
      goto code_r0x0001083ba10c;
    case 3:
      if (((sVar4 != 0) && (sVar4 != 0x100)) && (sVar4 != 0xa00)) goto LAB_1083ba104;
    }
    FUN_1083ba224(pbVar1,uVar21,param_2);
  }
  else {
LAB_1083ba104:
    FUN_1083a357c(param_2);
  }
code_r0x0001083ba10c:
  uVar13 = (uint)(uVar5 >> 8);
  uVar11 = uVar5 & 0xff00ff;
  uVar12 = uVar11 << 8;
  uVar10 = uVar13 | uVar12;
  if ((sVar3 == 0x100) && (uVar11 >> 7 != 0)) {
    if (uVar16 < uVar23 * 0xc) {
      return 0;
    }
    uVar16 = uVar16 + uVar23 * -0xc;
    if (uVar16 < 2) {
      return 0;
    }
    uVar13 = uVar13 | uVar12 & 0x7fff;
    puVar2 = (ushort *)(psVar19 + uVar23 * 6 + 3);
    if (uVar13 < ((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8)) {
      if (uVar16 - 2 < (ulong)(uVar13 + 1) << 2) {
        return 0;
      }
      uVar5 = puVar2[(ulong)uVar13 * 2 + 1];
      uVar6 = (puVar2 + (ulong)uVar13 * 2 + 1)[1];
      uVar15 = (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
      uVar16 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
      if (uVar16 + uVar22 + uVar15 <= (ulong)param_1[1]) {
        FUN_1083ba224((long)psVar19 + uVar15 + uVar22,uVar16,param_2 + 8);
        return 1;
      }
      return 0;
    }
  }
  iVar18 = 0;
  uVar16 = 0x152;
  while( true ) {
    uVar13 = (uint)uVar16;
    if (uVar13 - iVar18 == 0 || (int)uVar13 < iVar18) break;
    uVar11 = iVar18 + (uVar13 - iVar18 >> 1);
    if (uVar10 <= *(ushort *)(&UNK_110a41eb0 + (ulong)uVar11 * 0x10)) {
      uVar13 = uVar11;
    }
    uVar16 = (ulong)uVar13;
    if (uVar10 > *(ushort *)(&UNK_110a41eb0 + (ulong)uVar11 * 0x10)) {
      iVar18 = uVar11 + 1;
    }
  }
  uVar11 = uVar13;
  if (uVar10 < *(ushort *)(&UNK_110a41eb0 + (-(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4)))
  {
    uVar11 = ~uVar13;
  }
  uVar13 = -uVar13 - 2;
  if (uVar10 <= *(ushort *)(&UNK_110a41eb0 + (-(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4))
     ) {
    uVar13 = uVar11;
  }
  if ((int)uVar13 < 0) {
    puVar14 = &UNK_10f480001;
  }
  else {
    puVar14 = (&PTR_DAT_110a41eb8)[(ulong)uVar13 * 2];
  }
  func_0x0001083a3534(param_2 + 8,puVar14);
  return 1;
}



/* Entry: 1083ba224; end: 1083ba30b;  */

void FUN_1083ba224(ushort *param_1,ulong param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ulong uVar5;
  
  FUN_1083a357c(param_3);
  do {
    if (param_2 == 1) {
      uVar3 = 0xfffd;
      puVar4 = param_1;
      uVar5 = 0;
    }
    else {
      if (param_2 == 0) {
        return;
      }
      puVar4 = param_1 + 1;
      uVar5 = param_2 - 2;
      uVar2 = (*param_1 & 0xff00ff) << 8;
      uVar3 = *param_1 >> 8 | uVar2;
      uVar2 = uVar2 & 0xfc00;
      if (uVar2 != 0xdc00) {
        if (uVar2 != 0xd800) goto LAB_1083ba2e4;
        if (uVar5 < 2) {
          uVar5 = 0;
        }
        else {
          uVar1 = *puVar4;
          if ((uVar1 >> 2 & 0x3f) == 0x37) {
            uVar3 = uVar3 * 0x400 + ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) + 0xfca02400;
            puVar4 = param_1 + 2;
            uVar5 = param_2 - 4;
            goto LAB_1083ba2e4;
          }
        }
      }
      uVar3 = 0xfffd;
    }
LAB_1083ba2e4:
    param_2 = uVar5;
    func_0x00010818f354(param_3,uVar3);
    param_1 = puVar4;
  } while( true );
}



/* Entry: 1083ba30c; end: 1083ba33b;  */

int FUN_1083ba30c(uint *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (uint *)((long)param_1 + (param_2 + 3U & 0xfffffffffffffffc));
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    iVar3 = (uVar2 >> 0x10 | uVar2 << 0x10) + iVar3;
  }
  return iVar3;
}



/* Entry: 1083ba33c; end: 1083ba43f;  */

void FUN_1083ba33c(undefined8 *param_1,long *param_2,ushort *param_3,undefined4 param_4)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0xe0))(param_2,0x6e616d65,0,0xffffffff,0);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    plVar3 = plVar2;
    __Znam();
    plStack_48 = plVar3;
    (**(code **)(*param_2 + 0xe0))(param_2,0x6e616d65,0,plVar2,plVar3);
    if (param_2 == plVar2) {
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
      *puVar4 = &PTR_DAT_110a433f0;
      puVar4[1] = param_3;
      *(undefined4 *)(puVar4 + 2) = param_4;
      *(undefined4 *)((long)puVar4 + 0x14) = 0;
      uVar1 = *param_3;
      puVar4[3] = plVar3;
      puVar4[4] = plVar3;
      puVar4[5] = plVar2;
      puVar4[6] = 0;
      *(uint *)(puVar4 + 7) = (uint)uVar1;
      *param_1 = puVar4;
      func_0x00010724e5b8(&uStack_50);
    }
    else {
      *param_1 = 0;
    }
    func_0x00010724e5b8(&plStack_48);
  }
  return;
}



/* Entry: 1083ba440; end: 1083ba44f;  */

void FUN_1083ba440(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0xe0))(param_2,0x6e616d65,0,0xffffffff,0);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    plVar3 = plVar2;
    __Znam();
    plStack_48 = plVar3;
    (**(code **)(*param_2 + 0xe0))(param_2,0x6e616d65,0,plVar2,plVar3);
    if (param_2 == plVar2) {
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
      *puVar4 = &PTR_DAT_110a433f0;
      puVar4[1] = 0x113256128;
      *(undefined4 *)(puVar4 + 2) = 3;
      *(undefined4 *)((long)puVar4 + 0x14) = 0;
      uVar1 = uRam0000000113256128;
      puVar4[3] = plVar3;
      puVar4[4] = plVar3;
      puVar4[5] = plVar2;
      puVar4[6] = 0;
      *(uint *)(puVar4 + 7) = (uint)uVar1;
      *param_1 = puVar4;
      func_0x00010724e5b8(&uStack_50);
    }
    else {
      *param_1 = 0;
    }
    func_0x00010724e5b8(&plStack_48);
  }
  return;
}



/* Entry: 1083ba450; end: 1083ba527;  */

uint FUN_1083ba450(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint unaff_w23;
  bool bVar4;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  
  do {
    uStack_58 = 0x1138270b0;
    auStack_50[0] = 0x1138270b0;
    lVar2 = param_1 + 0x20;
    FUN_1083b9f74(lVar2,&uStack_58);
    if ((int)lVar2 == 0) {
      lVar2 = (long)*(int *)(param_1 + 0x14) + 1;
      iVar3 = (int)lVar2;
      if (*(int *)(param_1 + 0x10) == iVar3) {
        unaff_w23 = 0;
        bVar4 = false;
      }
      else {
        *(int *)(param_1 + 0x14) = iVar3;
        uVar1 = *(ushort *)(*(long *)(param_1 + 8) + lVar2 * 2);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(uint *)(param_1 + 0x38) = (uint)uVar1;
        bVar4 = true;
      }
    }
    else {
      func_0x0001083a34dc(param_2,&uStack_58);
      func_0x0001083a34dc(param_2 + 8,auStack_50);
      bVar4 = false;
      unaff_w23 = 1;
    }
    FUN_1083ba574(&uStack_58);
  } while (bVar4);
  return unaff_w23 & 1;
}



/* Entry: 1083ba528; end: 1083ba55f;  */

void FUN_1083ba528(ushort param_1,long param_2)

{
  if (param_1 != 0) {
    if ((param_1 & 0x202) != 0) {
      *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 2;
    }
    if ((param_1 & 1) != 0) {
      *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 4;
    }
  }
  return;
}



/* Entry: 1083ba560; end: 1083ba573;  */

void FUN_1083ba560(void)

{
  func_0x0001083ba59c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083ba574; end: 1083ba5cb;  */

undefined8 * FUN_1083ba574(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 1);
  FUN_1083a3ca0(*param_1);
  return param_1;
}



/* Entry: 1083ba5cc; end: 1083ba7cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083ba5cc(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,ulong *param_6,ulong *param_7,ulong *param_8)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *extraout_x8;
  long lVar8;
  ulong *unaff_x20;
  ulong *unaff_x22;
  long *unaff_x23;
  ulong uVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  ulong auStack_98 [5];
  ulong auStack_70 [6];
  
  auStack_70[5] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_8;
  if ((*param_8 == 0) || (uVar7 = *param_7, uVar7 == 0)) {
    *param_1 = 0;
    puVar3 = param_6;
    param_6 = unaff_x22;
  }
  else {
    plVar2 = (long *)*param_6;
    unaff_x20 = param_8;
    if (plVar2 == (long *)0x0) {
      *param_7 = 0;
      auStack_98[4] = *param_8;
      *param_8 = 0;
      param_7 = auStack_70;
      puVar6 = auStack_98 + 4;
      auStack_70[0] = uVar7;
      FUN_1083ba7d0(param_1,3);
      func_0x000106f47224(auStack_98 + 4);
      puVar3 = auStack_70;
      func_0x000106f47224();
    }
    else {
      puVar4 = param_7;
      (**(code **)(*plVar2 + 0x38))();
      if (((ulong)plVar2 >> 0x20 & 1) == 0) {
        unaff_x23 = (long *)0x201;
        FUN_10835c894();
        auStack_70[2] = *param_8;
        *param_8 = 0;
        auStack_98[2] = 0;
        auStack_98[3] = 0;
        auStack_70[3] = *param_7;
        *param_7 = 0;
        auStack_70[4] = *param_6;
        *param_6 = 0;
        auStack_98[1] = 0;
        FUN_108154c6c(auStack_98 + 1);
        func_0x000106f47224(auStack_98 + 2);
        func_0x000106f47224(auStack_98 + 3);
        auStack_98[0] = 0;
        unaff_x20 = auStack_70 + 2;
        param_7 = auStack_98;
        puVar6 = auStack_70 + 2;
        FUN_108394528(param_1,unaff_x23,param_7,puVar6,3,0);
        FUN_108154c48(auStack_98);
        lVar8 = 0x10;
        do {
          puVar3 = (ulong *)((long)unaff_x20 + lVar8);
          FUN_108165f8c();
          lVar8 = lVar8 + -8;
        } while (lVar8 != -8);
      }
      else {
        param_6 = (ulong *)0x28;
        __Znwm();
        uVar7 = *param_7;
        *param_7 = 0;
        uVar9 = *param_8;
        *param_8 = 0;
        *(undefined4 *)(param_6 + 1) = 1;
        *param_6 = (ulong)&PTR_FUN_110a43430;
        auStack_70[1] = 0;
        auStack_70[2] = 0;
        param_6[2] = uVar7;
        param_6[3] = uVar9;
        *(int *)(param_6 + 4) = (int)plVar2;
        func_0x000106f47224(auStack_70 + 1);
        puVar3 = auStack_70 + 2;
        func_0x000106f47224();
        *param_1 = param_6;
        param_7 = puVar4;
        unaff_x23 = plVar2;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_70[5]) {
    ___stack_chk_fail();
    FUN_108154c48(auStack_98);
    lVar8 = 0x10;
    do {
      FUN_108165f8c((long)unaff_x20 + lVar8);
      lVar8 = lVar8 + -8;
    } while (lVar8 != -8);
    puVar4 = puVar3;
    __Unwind_Resume();
    pcStack_a8 = FUN_1083ba7d0;
    uVar7 = *puVar6;
    if ((uVar7 == 0) || (uVar9 = *param_7, uVar9 == 0)) {
      *extraout_x8 = 0;
    }
    else {
      iVar1 = (int)puVar4;
      if (iVar1 == 2) {
        *param_7 = 0;
        *extraout_x8 = uVar9;
      }
      else if (iVar1 == 1) {
        *puVar6 = 0;
        *extraout_x8 = uVar7;
      }
      else {
        plStack_d8 = unaff_x23;
        uStack_d0 = param_6;
        uStack_c8 = lVar8;
        puStack_c0 = unaff_x20;
        puStack_b8 = puVar3;
        puStack_b0 = &stack0xfffffffffffffff0;
        if (iVar1 == 0) {
          pcStack_a8 = FUN_1083ba7d0;
          FUN_108343500(0);
          uStack_d0 = (ulong *)CONCAT44(param_3,param_2);
          uStack_c8 = CONCAT44(param_5,param_4);
          FUN_108343a94(&plStack_d8);
          FUN_1083bae78(extraout_x8,&uStack_d0,&plStack_d8);
          func_0x0001083bb040(plStack_d8);
          return;
        }
        puVar5 = (undefined8 *)0x28;
        __Znwm();
        *param_7 = 0;
        uVar7 = *puVar6;
        *puVar6 = 0;
        *(undefined4 *)(puVar5 + 1) = 1;
        *puVar5 = &PTR_FUN_110a43430;
        uStack_f0 = 0;
        uStack_e8 = 0;
        puVar5[2] = uVar9;
        puVar5[3] = uVar7;
        *(int *)(puVar5 + 4) = iVar1;
        *extraout_x8 = (ulong)puVar5;
        func_0x000106f47224(&uStack_f0);
        func_0x000106f47224(&uStack_e8);
      }
    }
    return;
  }
  return;
}



/* Entry: 1083ba7d0; end: 1083ba8bb;  */

void FUN_1083ba7d0(long *param_1,int param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 unaff_x23;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *param_4;
  if ((lVar2 == 0) || (lVar3 = *param_3, lVar3 == 0)) {
    *param_1 = 0;
  }
  else if (param_2 == 2) {
    *param_3 = 0;
    *param_1 = lVar3;
  }
  else if (param_2 == 1) {
    *param_4 = 0;
    *param_1 = lVar2;
  }
  else {
    if (param_2 == 0) {
      FUN_108343500(0);
      FUN_108343a94(&stack0xffffffffffffffc8);
      FUN_1083bae78(param_1,&stack0xffffffffffffffd0,&stack0xffffffffffffffc8);
      func_0x0001083bb040(unaff_x23);
      return;
    }
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    *param_3 = 0;
    lVar2 = *param_4;
    *param_4 = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_110a43430;
    uStack_50 = 0;
    uStack_48 = 0;
    puVar1[2] = lVar3;
    puVar1[3] = lVar2;
    *(int *)(puVar1 + 4) = param_2;
    *param_1 = (long)puVar1;
    func_0x000106f47224(&uStack_50);
    func_0x000106f47224(&uStack_48);
  }
  return;
}



/* Entry: 1083ba8bc; end: 1083ba8fb;  */

void FUN_1083ba8bc(long param_1,long *param_2)

{
  func_0x0001083baa5c(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x0001083baa5c();
                    /* WARNING: Could not recover jumptable at 0x0001083ba8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1083ba8fc; end: 1083ba9d7;  */

void FUN_1083ba8fc(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x18);
  lVar1 = param_2[1];
  func_0x0001081865ac(lVar1,0x180,4);
  if (*(char *)(param_3 + 0x79) == '\x01') {
    FUN_108387820(*param_2,0xa1,lVar1);
  }
  func_0x0001083baa6c(*(undefined8 *)(*plVar2 + 0x58));
  if ((int)plVar2 != 0) {
    FUN_108387820(*param_2,0x2f,lVar1 + 0x80);
    if (*(char *)(param_3 + 0x79) == '\x01') {
      FUN_108387820(*param_2,0xa2,lVar1);
    }
    func_0x0001083baa6c(*(undefined8 *)(*plVar3 + 0x58));
    if ((int)plVar3 != 0) {
      FUN_108387820(*param_2,0x31,lVar1 + 0x80);
      FUN_1083337ec(*(undefined4 *)(param_1 + 0x20),*param_2);
    }
  }
  return;
}



/* Entry: 1083ba9d8; end: 1083ba9db;  */

long FUN_1083ba9d8(long param_1)

{
  func_0x000106f47224(param_1 + 0x18);
  func_0x000106f47224(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083ba9dc; end: 1083ba9ef;  */

void FUN_1083ba9dc(void)

{
  FUN_1083baa24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083ba9f0; end: 1083baa23;  */

undefined8 FUN_1083ba9f0(void)

{
  return 0;
}



/* Entry: 1083baa24; end: 1083baa53;  */

long FUN_1083baa24(long param_1)

{
  func_0x000106f47224(param_1 + 0x18);
  func_0x000106f47224(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083baa54; end: 1083baa7f;  */

undefined8 FUN_1083baa54(void)

{
  return 0;
}



/* Entry: 1083baa80; end: 1083baae7;  */

undefined8 *
FUN_1083baa80(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 1) = 1;
  *param_2 = &PTR_FUN_110a434d8;
  uVar1 = *param_3;
  *param_3 = 0;
  uVar2 = *param_4;
  *param_4 = 0;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  FUN_1083bae00();
  *(undefined4 *)(param_2 + 4) = param_1;
  return param_2;
}



/* Entry: 1083baae8; end: 1083bab93;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083baae8(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long alStack_60 [2];
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else if (*param_4 == 0) {
    *param_3 = 0;
    *param_1 = lVar2;
  }
  else {
    lVar1 = 0x28;
    __Znwm();
    *param_3 = 0;
    *param_4 = 0;
    alStack_60[0] = lVar2;
    FUN_1083baa80(param_2);
    alStack_60[1] = 0;
    *param_1 = lVar1;
    FUN_1083badb0(alStack_60 + 1);
    FUN_1083bae00();
    func_0x000106f47224(alStack_60);
  }
  return;
}



/* Entry: 1083bab94; end: 1083bac23;  */

long * FUN_1083bab94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x0001083bae08();
  if ((iVar4 == 0) || (*(float *)(param_1 + 0x20) != 1.0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar5 + 0x40))();
    func_0x0001083bae00();
  }
  return plVar5;
}



/* Entry: 1083bac24; end: 1083bac67;  */

void FUN_1083bac24(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001083bac64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1083bac68; end: 1083bad3b;  */

void FUN_1083bac68(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x58))();
  if ((int)plVar2 == 0) {
    return;
  }
  if (*(float *)(param_1 + 0x20) == 1.0) {
    plVar2 = *(long **)(param_1 + 0x18);
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined4 *)param_2[1];
    puVar3 = puVar1;
    func_0x0001081865e0(puVar1,4,4);
    *puVar3 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 **)(puVar1 + 2) = puVar3 + 1;
    FUN_108387820(uVar4,0x35,puVar3);
    plVar2 = *(long **)(param_1 + 0x18);
    if (*(float *)(param_1 + 0x20) != 1.0) {
      uVar4 = 0;
      goto LAB_1083bad18;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001083bae08(uVar4);
LAB_1083bad18:
                    /* WARNING: Could not recover jumptable at 0x0001083bad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2,uVar4);
  return;
}



/* Entry: 1083bad3c; end: 1083bad3f;  */

undefined8 * FUN_1083bad3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a434d8;
  FUN_10829ba9c(param_1 + 3);
  func_0x000106f47224(param_1 + 2);
  return param_1;
}



/* Entry: 1083bad40; end: 1083bad53;  */

void FUN_1083bad40(void)

{
  FUN_1083bad70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083bad54; end: 1083bad6f;  */

undefined8 FUN_1083bad54(void)

{
  return 0;
}



/* Entry: 1083bad70; end: 1083badaf;  */

undefined8 * FUN_1083bad70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a434d8;
  FUN_10829ba9c(param_1 + 3);
  func_0x000106f47224(param_1 + 2);
  return param_1;
}



/* Entry: 1083badb0; end: 1083badff;  */

long * FUN_1083badb0(long *param_1)

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



/* Entry: 1083bae00; end: 1083bae13;  */

undefined8 * FUN_1083bae00(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    piVar1 = (int *)(in_stack_00000008 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108115bc4();
    }
  }
  return &stack0x00000008;
}



/* Entry: 1083bae14; end: 1083bae77;  */

void FUN_1083bae14(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_108343500();
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uStack_24 = param_5;
  FUN_108343a94(&uStack_38);
  FUN_1083bae78(param_1,&uStack_30,&uStack_38);
  func_0x0001083bb040(uStack_38);
  return;
}



/* Entry: 1083bae78; end: 1083baf2b;  */

void FUN_1083bae78(undefined8 *param_1,undefined8 param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,float *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 auStack_98 [13];
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fVar3 = *param_6 - *param_6;
  for (lVar1 = 4; lVar1 != 0x10; lVar1 = lVar1 + 4) {
    param_3 = *(float *)((long)param_6 + lVar1);
    fVar3 = fVar3 * param_3;
  }
  if (NAN(fVar3)) {
    uVar2 = 0;
  }
  else {
    FUN_108376234();
    uVar2 = *param_7;
    fStack_30 = fVar3;
    fStack_2c = param_3;
    uStack_28 = param_4;
    uStack_24 = param_5;
    FUN_108343afc();
    FUN_108344004(auStack_98,uVar2,3,param_6,3);
    FUN_1083441a4(auStack_98,&fStack_30);
    func_0x0001083bafa8(auStack_98,&fStack_30);
    uVar2 = auStack_98[0];
    auStack_98[0] = 0;
    FUN_1083bb04c(auStack_98);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1083baf2c; end: 1083baf43;  */

void FUN_1083baf2c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001083baf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xc);
  return;
}



/* Entry: 1083baf44; end: 1083bafef;  */

undefined8 FUN_1083baf44(long param_1,undefined8 *param_2)

{
  undefined1 auStack_94 [100];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x14);
  uStack_30 = *(undefined8 *)(param_1 + 0xc);
  FUN_108343afc();
  FUN_108344004(auStack_94,param_1,3,param_2[3],2);
  FUN_1083441a4(auStack_94,&uStack_30);
  func_0x000108387d70(*param_2,param_2[1],&uStack_30);
  return 1;
}



/* Entry: 1083baff0; end: 1083bb04b;  */

void FUN_1083baff0(void)

{
  return;
}



/* Entry: 1083bb04c; end: 1083bb09b;  */

long * FUN_1083bb04c(long *param_1)

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



/* Entry: 1083bb09c; end: 1083bb117;  */

void FUN_1083bb09c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001083bb0dc(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  FUN_1083bb148(&uStack_28);
  return;
}



/* Entry: 1083bb118; end: 1083bb147;  */

void FUN_1083bb118(void)

{
  return;
}



/* Entry: 1083bb148; end: 1083bb197;  */

long * FUN_1083bb148(long *param_1)

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



/* Entry: 1083bb198; end: 1083bb2af;  */

void FUN_1083bb198(float *param_1,float param_2,float param_3)

{
  *param_1 = param_2 * 0.16666667;
  param_1[1] = param_2 * -0.33333334 + 1.0;
  param_1[2] = param_2 * 0.16666667;
  param_1[3] = 0.0;
  param_1[4] = param_2 * -0.5 - param_3;
  param_1[5] = 0.0;
  param_1[6] = param_3 + param_2 * 0.5;
  param_1[7] = 0.0;
  param_1[8] = param_3 + param_3 + param_2 * 0.5;
  param_1[9] = param_2 * 2.0 + -3.0 + param_3;
  param_1[10] = param_2 * -2.5 + 3.0 + param_3 * -2.0;
  param_1[0xb] = -param_3;
  param_1[0xc] = param_2 * -0.16666667 - param_3;
  param_1[0xd] = (param_2 * -1.5 + 2.0) - param_3;
  param_1[0xe] = param_2 * 1.5 + -2.0 + param_3;
  param_1[0xf] = param_3 + param_2 * 0.16666667;
  return;
}



/* Entry: 1083bb2b0; end: 1083bb383;  */

void FUN_1083bb2b0(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 unaff_x21;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_5 + 4) == '\x01') {
    *param_1 = 0;
  }
  else {
    lVar1 = *param_2;
    uStack_38 = param_4;
    uStack_34 = param_3;
    if (lVar1 == 0) {
      func_0x0001083bb0dc(&stack0xffffffffffffffd8);
      *param_1 = unaff_x21;
      FUN_1083bb148(&stack0xffffffffffffffd8);
      return;
    }
    fStack_40 = (float)*(int *)(lVar1 + 0x20);
    fStack_3c = (float)*(int *)(lVar1 + 0x24);
    uStack_48 = 0;
    uStack_59 = 1;
    uStack_5a = 0;
    FUN_1083bb614(&uStack_58,param_2,&uStack_48,&uStack_34,&uStack_38,param_5,&uStack_59,&uStack_5a)
    ;
    uStack_50 = uStack_58;
    uStack_58 = 0;
    FUN_1083bc830(&uStack_58);
    func_0x0001083bc974();
    func_0x0001083bc910();
    func_0x0001083bc8b0();
  }
  return;
}



/* Entry: 1083bb384; end: 1083bb3ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083bb384(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long alStack_38 [2];
  float fStack_28;
  float fStack_24;
  
  alStack_38[0] = *param_1;
  if (alStack_38[0] == 0) {
    fStack_28 = 0.0;
    fStack_24 = 0.0;
  }
  else {
    fStack_28 = (float)*(int *)(alStack_38[0] + 0x20);
    fStack_24 = (float)*(int *)(alStack_38[0] + 0x24);
  }
  alStack_38[1] = 0;
  *param_1 = 0;
  FUN_1083bb4d4(alStack_38,alStack_38 + 1,param_2,param_3,param_4,param_5,param_6);
  func_0x0001083bc8dc();
  return;
}


