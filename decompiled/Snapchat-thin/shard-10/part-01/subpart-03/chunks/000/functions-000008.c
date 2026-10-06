/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077ff668; end: 1077ff687;  */

void FUN_1077ff668(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107405848();
  }
  return;
}



/* Entry: 1077ffa30; end: 1077ffa7b;  */

void FUN_1077ffa30(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != iVar1 >> 0x1f) && ((-1 < iVar1 || (*(long *)(param_1 + 2) != 0)))) {
    return;
  }
  func_0x00010bdb14c4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1077ffa74);
  (*pcVar2)();
}



/* Entry: 1077ffb84; end: 1077ffbef;  */

undefined8 * FUN_1077ffb84(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  param_1[1] = &PTR_DAT_1109dfae0;
  func_0x000105301370(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_DAT_1109dfa68;
  param_1[1] = &PTR_DAT_1109dfa98;
  param_1[2] = &PTR_DAT_1109dfac0;
  return param_1;
}



/* Entry: 1077ffd2c; end: 1077ffd77;  */

void FUN_1077ffd2c(int *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 2);
  iVar1 = *param_1;
  if (iVar1 == iVar1 >> 0x1f) {
    lVar4 = *param_2;
    func_0x0001077ffd78(lVar4);
  }
  else {
    if (iVar1 < 0) {
      plVar3 = (long *)*plVar3;
    }
    lVar4 = *param_2;
    for (plVar5 = plVar3 + 1; plVar5 != plVar3 + 1 + *plVar3 * 3; plVar5 = plVar5 + 3) {
      lVar2 = plVar5[2];
      *param_2 = lVar2;
      FUN_1077ffd2c(lVar2,param_2);
      plVar5[2] = 0;
    }
    func_0x0001077ffd78(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar4);
  return;
}



/* Entry: 107801244; end: 10780127f;  */

void FUN_107801244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar1;
  return;
}



/* Entry: 107801c90; end: 107801d8b;  */

double FUN_107801c90(double param_1,undefined8 *param_2,long param_3,float *param_4)

{
  ulong uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  float *pfVar4;
  ulong extraout_x8;
  ulong uVar5;
  long extraout_x8_00;
  long extraout_x9;
  float *extraout_x10;
  long extraout_x10_00;
  float *pfVar6;
  undefined8 uVar7;
  long extraout_x11;
  long extraout_x11_00;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_18;
  
  func_0x000107808a58();
  func_0x000107809938();
  if (in_NG == in_OV) {
    uVar5 = extraout_x8 >> 1;
    uVar1 = (long)param_4 - (long)param_2 >> 5;
    cVar2 = SBORROW8(uVar5,uVar1);
    cVar3 = (long)(uVar5 - uVar1) < 0;
    in_ZR = uVar5 == uVar1;
    if ((long)uVar1 <= (long)uVar5) {
      func_0x0001078097f8();
      pfVar6 = extraout_x10;
      if ((cVar3 != cVar2) && (pfVar6 = extraout_x10, *extraout_x10 < extraout_x10[8])) {
        pfVar6 = extraout_x10 + 8;
      }
      fVar8 = *param_4;
      param_1 = (double)(ulong)(uint)fVar8;
      in_ZR = *pfVar6 == fVar8;
      if (fVar8 <= *pfVar6) {
        uVar7 = *(undefined8 *)(param_4 + 1);
        fVar8 = param_4[3];
        uVar10 = *(undefined8 *)(param_4 + 6);
        uVar9 = *(undefined8 *)(param_4 + 4);
        do {
          pfVar4 = pfVar6;
          func_0x000107808ff8();
          *(undefined8 *)(extraout_x11 + 0x18) = *(undefined8 *)(pfVar4 + 6);
          in_ZR = extraout_x8_00 == extraout_x9;
          if (extraout_x8_00 < extraout_x9) break;
          func_0x00010780966c();
          pfVar6 = (float *)(param_2 + extraout_x10_00 * 4);
          if ((extraout_x11_00 + 2 < param_3) && (*pfVar6 < pfVar6[8])) {
            pfVar6 = pfVar6 + 8;
          }
          in_ZR = *pfVar6 == SUB84(param_1,0);
        } while (SUB84(param_1,0) <= *pfVar6);
        *pfVar4 = SUB84(param_1,0);
        pfVar4[3] = fVar8;
        *(undefined8 *)(pfVar4 + 1) = uVar7;
        *(undefined8 *)(pfVar4 + 6) = uVar10;
        *(undefined8 *)(pfVar4 + 4) = uVar9;
      }
    }
  }
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  return (double)((float)param_2[1] - (float)*param_2) *
         (double)((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20));
}



/* Entry: 107802ac8; end: 107802b93;  */

undefined8 FUN_107802ac8(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107809198();
  uVar1 = *(float *)(param_2 + 4) < *(float *)(param_1 + 4);
  if ((bool)uVar1) {
    func_0x00010780a0e8();
    if (!(bool)uVar1) {
      func_0x000107809944();
      func_0x000107809608(*(undefined4 *)(unaff_x20 + 4));
      if (!(bool)uVar1) {
        return 1;
      }
    }
  }
  else {
    uVar1 = *(float *)(param_3 + 4) < *(float *)(param_2 + 4);
    if (!(bool)uVar1) {
      return 0;
    }
    func_0x000107808ee4();
    func_0x000107809738(*(undefined4 *)(unaff_x19 + 4));
    if (!(bool)uVar1) {
      return 1;
    }
    func_0x000107809cf8();
  }
  FUN_107801244();
  return 1;
}



/* Entry: 1078035e8; end: 1078036bf;  */

void FUN_1078035e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar1;
  char cVar2;
  ulong extraout_x8;
  ulong uVar3;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x10;
  long lVar4;
  undefined8 *extraout_x10_00;
  long extraout_x10_01;
  undefined8 *puVar5;
  long extraout_x11;
  long extraout_x11_00;
  float fVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_18;
  ulong uVar7;
  
  func_0x000107808a58();
  func_0x000107809938();
  if (in_NG == in_OV) {
    uVar3 = extraout_x8 >> 1;
    uVar7 = (long)param_3 - (long)param_1 >> 5;
    cVar1 = SBORROW8(uVar3,uVar7);
    cVar2 = (long)(uVar3 - uVar7) < 0;
    in_ZR = uVar3 == uVar7;
    if ((long)uVar7 <= (long)uVar3) {
      func_0x0001078097f8();
      lVar4 = extraout_x10;
      if ((cVar2 != cVar1) && (*(float *)(extraout_x10 + 0xc) < *(float *)(extraout_x10 + 0x2c))) {
        lVar4 = extraout_x10 + 0x20;
      }
      fVar6 = *(float *)((long)param_3 + 0xc);
      uVar7 = (ulong)(uint)fVar6;
      in_ZR = *(float *)(lVar4 + 0xc) == fVar6;
      if (fVar6 <= *(float *)(lVar4 + 0xc)) {
        func_0x00010780a100();
        uVar9 = param_3[3];
        uVar8 = param_3[2];
        puVar5 = extraout_x10_00;
        do {
          param_3 = puVar5;
          func_0x000107808ff8();
          *(undefined8 *)(extraout_x11 + 0x18) = param_3[3];
          in_ZR = extraout_x8_00 == extraout_x9;
          if (extraout_x8_00 < extraout_x9) break;
          func_0x00010780966c();
          puVar5 = param_1 + extraout_x10_01 * 4;
          if ((extraout_x11_00 + 2 < (long)param_2) &&
             (*(float *)((long)puVar5 + 0xc) < *(float *)((long)puVar5 + 0x2c))) {
            puVar5 = puVar5 + 4;
          }
          in_ZR = *(float *)((long)puVar5 + 0xc) == (float)uVar7;
        } while ((float)uVar7 <= *(float *)((long)puVar5 + 0xc));
        func_0x000107809c14();
        param_3[3] = uVar9;
        param_3[2] = uVar8;
      }
    }
  }
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar8 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar8;
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3 = param_3 + 4;
  }
  return;
}



/* Entry: 107803f88; end: 107804cdb;  */

/* WARNING: Possible PIC construction at 0x0001078048f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078048f4) */
/* WARNING: Removing unreachable block (ram,0x000107804cd8) */
/* WARNING: Removing unreachable block (ram,0x00010780495c) */
/* WARNING: Removing unreachable block (ram,0x000107808b08) */
/* WARNING: Removing unreachable block (ram,0x0001078040a8) */
/* WARNING: Removing unreachable block (ram,0x0001078040e4) */
/* WARNING: Removing unreachable block (ram,0x0001078040cc) */
/* WARNING: Removing unreachable block (ram,0x0001078040e8) */
/* WARNING: Removing unreachable block (ram,0x000107804100) */
/* WARNING: Removing unreachable block (ram,0x000107804108) */
/* WARNING: Removing unreachable block (ram,0x000107804118) */
/* WARNING: Removing unreachable block (ram,0x00010780411c) */
/* WARNING: Removing unreachable block (ram,0x000107804120) */
/* WARNING: Removing unreachable block (ram,0x000107804124) */
/* WARNING: Removing unreachable block (ram,0x000107804128) */
/* WARNING: Removing unreachable block (ram,0x00010780412c) */
/* WARNING: Removing unreachable block (ram,0x000107804138) */
/* WARNING: Removing unreachable block (ram,0x000107804148) */
/* WARNING: Removing unreachable block (ram,0x00010780414c) */
/* WARNING: Removing unreachable block (ram,0x000107804150) */
/* WARNING: Removing unreachable block (ram,0x000107804164) */
/* WARNING: Removing unreachable block (ram,0x0001078041a4) */
/* WARNING: Removing unreachable block (ram,0x00010780418c) */
/* WARNING: Removing unreachable block (ram,0x0001078041a8) */
/* WARNING: Removing unreachable block (ram,0x0001078041d0) */
/* WARNING: Removing unreachable block (ram,0x0001078041d8) */
/* WARNING: Removing unreachable block (ram,0x0001078041ec) */
/* WARNING: Removing unreachable block (ram,0x0001078041f0) */
/* WARNING: Removing unreachable block (ram,0x0001078041f4) */
/* WARNING: Removing unreachable block (ram,0x0001078041f8) */
/* WARNING: Removing unreachable block (ram,0x0001078041fc) */
/* WARNING: Removing unreachable block (ram,0x000107804200) */
/* WARNING: Removing unreachable block (ram,0x000107804208) */
/* WARNING: Removing unreachable block (ram,0x00010780421c) */
/* WARNING: Removing unreachable block (ram,0x000107804268) */
/* WARNING: Removing unreachable block (ram,0x000107804250) */
/* WARNING: Removing unreachable block (ram,0x00010780426c) */
/* WARNING: Removing unreachable block (ram,0x000107804284) */
/* WARNING: Removing unreachable block (ram,0x0001078042d0) */
/* WARNING: Removing unreachable block (ram,0x0001078042dc) */
/* WARNING: Removing unreachable block (ram,0x0001078042e0) */
/* WARNING: Removing unreachable block (ram,0x0001078042f4) */
/* WARNING: Removing unreachable block (ram,0x0001078042fc) */
/* WARNING: Removing unreachable block (ram,0x000107804300) */
/* WARNING: Removing unreachable block (ram,0x000107804304) */
/* WARNING: Removing unreachable block (ram,0x000107804310) */
/* WARNING: Removing unreachable block (ram,0x000107804314) */
/* WARNING: Removing unreachable block (ram,0x0001078044fc) */
/* WARNING: Removing unreachable block (ram,0x0001078048bc) */
/* WARNING: Removing unreachable block (ram,0x000107804968) */
/* WARNING: Removing unreachable block (ram,0x00010780496c) */
/* WARNING: Removing unreachable block (ram,0x000107804970) */
/* WARNING: Removing unreachable block (ram,0x000107804978) */
/* WARNING: Removing unreachable block (ram,0x000107804980) */
/* WARNING: Removing unreachable block (ram,0x000107804bb0) */
/* WARNING: Removing unreachable block (ram,0x000107804988) */
/* WARNING: Removing unreachable block (ram,0x000107804b60) */
/* WARNING: Removing unreachable block (ram,0x000107804b68) */
/* WARNING: Removing unreachable block (ram,0x000107804b6c) */
/* WARNING: Removing unreachable block (ram,0x000107804b70) */
/* WARNING: Removing unreachable block (ram,0x000107804990) */
/* WARNING: Removing unreachable block (ram,0x000107804c88) */
/* WARNING: Removing unreachable block (ram,0x000107804c8c) */
/* WARNING: Removing unreachable block (ram,0x000107804c94) */
/* WARNING: Removing unreachable block (ram,0x000107804c9c) */
/* WARNING: Removing unreachable block (ram,0x000107804ca0) */
/* WARNING: Removing unreachable block (ram,0x000107804ca8) */
/* WARNING: Removing unreachable block (ram,0x000107804cb4) */
/* WARNING: Removing unreachable block (ram,0x000107804cb8) */
/* WARNING: Removing unreachable block (ram,0x000107804cc4) */
/* WARNING: Removing unreachable block (ram,0x000107804ccc) */
/* WARNING: Removing unreachable block (ram,0x000107804cd0) */
/* WARNING: Removing unreachable block (ram,0x000107804998) */
/* WARNING: Removing unreachable block (ram,0x0001078049a8) */
/* WARNING: Removing unreachable block (ram,0x0001078049ac) */
/* WARNING: Removing unreachable block (ram,0x000107804b14) */
/* WARNING: Removing unreachable block (ram,0x0001078049b0) */
/* WARNING: Removing unreachable block (ram,0x0001078049b4) */
/* WARNING: Removing unreachable block (ram,0x0001078049d0) */
/* WARNING: Removing unreachable block (ram,0x0001078049e0) */
/* WARNING: Removing unreachable block (ram,0x0001078049e8) */
/* WARNING: Removing unreachable block (ram,0x0001078049ec) */
/* WARNING: Removing unreachable block (ram,0x0001078049f0) */
/* WARNING: Removing unreachable block (ram,0x0001078049fc) */
/* WARNING: Removing unreachable block (ram,0x0001078049f4) */
/* WARNING: Removing unreachable block (ram,0x000107804a00) */
/* WARNING: Removing unreachable block (ram,0x000107804a08) */
/* WARNING: Removing unreachable block (ram,0x000107804a0c) */
/* WARNING: Removing unreachable block (ram,0x000107804a14) */
/* WARNING: Removing unreachable block (ram,0x000107804a18) */
/* WARNING: Removing unreachable block (ram,0x000107804a1c) */
/* WARNING: Removing unreachable block (ram,0x000107804a20) */
/* WARNING: Removing unreachable block (ram,0x000107804a24) */
/* WARNING: Removing unreachable block (ram,0x000107804a28) */
/* WARNING: Removing unreachable block (ram,0x000107804a2c) */
/* WARNING: Removing unreachable block (ram,0x000107804a30) */
/* WARNING: Removing unreachable block (ram,0x000107804a40) */
/* WARNING: Removing unreachable block (ram,0x000107804a48) */
/* WARNING: Removing unreachable block (ram,0x000107804a38) */
/* WARNING: Removing unreachable block (ram,0x0001078049c0) */
/* WARNING: Removing unreachable block (ram,0x0001078049c4) */
/* WARNING: Removing unreachable block (ram,0x0001078049c8) */
/* WARNING: Removing unreachable block (ram,0x0001078049cc) */
/* WARNING: Removing unreachable block (ram,0x000107804a50) */
/* WARNING: Removing unreachable block (ram,0x000107804a54) */
/* WARNING: Removing unreachable block (ram,0x000107804a94) */
/* WARNING: Removing unreachable block (ram,0x000107804a5c) */
/* WARNING: Removing unreachable block (ram,0x000107804a60) */
/* WARNING: Removing unreachable block (ram,0x000107804a68) */
/* WARNING: Removing unreachable block (ram,0x000107804a6c) */
/* WARNING: Removing unreachable block (ram,0x000107804a70) */
/* WARNING: Removing unreachable block (ram,0x000107804a74) */
/* WARNING: Removing unreachable block (ram,0x000107804a78) */
/* WARNING: Removing unreachable block (ram,0x000107804a7c) */
/* WARNING: Removing unreachable block (ram,0x000107804a80) */
/* WARNING: Removing unreachable block (ram,0x000107804a84) */
/* WARNING: Removing unreachable block (ram,0x000107804a98) */
/* WARNING: Removing unreachable block (ram,0x000107804aa0) */
/* WARNING: Removing unreachable block (ram,0x000107804aa8) */
/* WARNING: Removing unreachable block (ram,0x000107804aac) */
/* WARNING: Removing unreachable block (ram,0x000107804ab0) */
/* WARNING: Removing unreachable block (ram,0x000107804ab4) */
/* WARNING: Removing unreachable block (ram,0x000107804ac0) */
/* WARNING: Removing unreachable block (ram,0x000107804ad0) */
/* WARNING: Removing unreachable block (ram,0x000107804af4) */
/* WARNING: Removing unreachable block (ram,0x000107804af8) */
/* WARNING: Removing unreachable block (ram,0x000107804b00) */
/* WARNING: Removing unreachable block (ram,0x000107804b10) */
/* WARNING: Removing unreachable block (ram,0x000107804ad8) */
/* WARNING: Removing unreachable block (ram,0x000107804ae0) */
/* WARNING: Removing unreachable block (ram,0x000107804af0) */
/* WARNING: Removing unreachable block (ram,0x000107804ac4) */
/* WARNING: Removing unreachable block (ram,0x000107804ac8) */
/* WARNING: Removing unreachable block (ram,0x000107804a8c) */
/* WARNING: Removing unreachable block (ram,0x000107804508) */
/* WARNING: Removing unreachable block (ram,0x000107804518) */
/* WARNING: Removing unreachable block (ram,0x00010780451c) */
/* WARNING: Removing unreachable block (ram,0x000107804520) */
/* WARNING: Removing unreachable block (ram,0x000107804528) */
/* WARNING: Removing unreachable block (ram,0x000107804530) */
/* WARNING: Removing unreachable block (ram,0x000107804b98) */
/* WARNING: Removing unreachable block (ram,0x000107804538) */
/* WARNING: Removing unreachable block (ram,0x000107804b28) */
/* WARNING: Removing unreachable block (ram,0x000107804540) */
/* WARNING: Removing unreachable block (ram,0x000107804c00) */
/* WARNING: Removing unreachable block (ram,0x000107804c04) */
/* WARNING: Removing unreachable block (ram,0x000107804c0c) */
/* WARNING: Removing unreachable block (ram,0x000107804c14) */
/* WARNING: Removing unreachable block (ram,0x000107804c18) */
/* WARNING: Removing unreachable block (ram,0x000107804c20) */
/* WARNING: Removing unreachable block (ram,0x000107804c30) */
/* WARNING: Removing unreachable block (ram,0x000107804c38) */
/* WARNING: Removing unreachable block (ram,0x000107804c3c) */
/* WARNING: Removing unreachable block (ram,0x000107804548) */
/* WARNING: Removing unreachable block (ram,0x000107804558) */
/* WARNING: Removing unreachable block (ram,0x00010780455c) */
/* WARNING: Removing unreachable block (ram,0x0001078046d8) */
/* WARNING: Removing unreachable block (ram,0x000107804560) */
/* WARNING: Removing unreachable block (ram,0x000107804568) */
/* WARNING: Removing unreachable block (ram,0x000107804588) */
/* WARNING: Removing unreachable block (ram,0x000107804598) */
/* WARNING: Removing unreachable block (ram,0x0001078045a0) */
/* WARNING: Removing unreachable block (ram,0x0001078045a4) */
/* WARNING: Removing unreachable block (ram,0x0001078045a8) */
/* WARNING: Removing unreachable block (ram,0x0001078045b4) */
/* WARNING: Removing unreachable block (ram,0x0001078045ac) */
/* WARNING: Removing unreachable block (ram,0x0001078045b8) */
/* WARNING: Removing unreachable block (ram,0x0001078045c0) */
/* WARNING: Removing unreachable block (ram,0x0001078045c4) */
/* WARNING: Removing unreachable block (ram,0x0001078045cc) */
/* WARNING: Removing unreachable block (ram,0x0001078045d4) */
/* WARNING: Removing unreachable block (ram,0x0001078045d8) */
/* WARNING: Removing unreachable block (ram,0x0001078045dc) */
/* WARNING: Removing unreachable block (ram,0x0001078045e0) */
/* WARNING: Removing unreachable block (ram,0x0001078045ec) */
/* WARNING: Removing unreachable block (ram,0x0001078045fc) */
/* WARNING: Removing unreachable block (ram,0x000107804604) */
/* WARNING: Removing unreachable block (ram,0x0001078045f4) */
/* WARNING: Removing unreachable block (ram,0x000107804574) */
/* WARNING: Removing unreachable block (ram,0x000107804578) */
/* WARNING: Removing unreachable block (ram,0x00010780457c) */
/* WARNING: Removing unreachable block (ram,0x000107804584) */
/* WARNING: Removing unreachable block (ram,0x00010780460c) */
/* WARNING: Removing unreachable block (ram,0x000107804610) */
/* WARNING: Removing unreachable block (ram,0x000107804658) */
/* WARNING: Removing unreachable block (ram,0x000107804618) */
/* WARNING: Removing unreachable block (ram,0x00010780461c) */
/* WARNING: Removing unreachable block (ram,0x000107804624) */
/* WARNING: Removing unreachable block (ram,0x00010780462c) */
/* WARNING: Removing unreachable block (ram,0x000107804630) */
/* WARNING: Removing unreachable block (ram,0x000107804634) */
/* WARNING: Removing unreachable block (ram,0x000107804638) */
/* WARNING: Removing unreachable block (ram,0x000107804640) */
/* WARNING: Removing unreachable block (ram,0x000107804644) */
/* WARNING: Removing unreachable block (ram,0x000107804648) */
/* WARNING: Removing unreachable block (ram,0x00010780465c) */
/* WARNING: Removing unreachable block (ram,0x000107804664) */
/* WARNING: Removing unreachable block (ram,0x00010780466c) */
/* WARNING: Removing unreachable block (ram,0x000107804670) */
/* WARNING: Removing unreachable block (ram,0x000107804674) */
/* WARNING: Removing unreachable block (ram,0x000107804678) */
/* WARNING: Removing unreachable block (ram,0x000107804684) */
/* WARNING: Removing unreachable block (ram,0x000107804694) */
/* WARNING: Removing unreachable block (ram,0x0001078046b8) */
/* WARNING: Removing unreachable block (ram,0x0001078046bc) */
/* WARNING: Removing unreachable block (ram,0x0001078046c4) */
/* WARNING: Removing unreachable block (ram,0x0001078046d4) */
/* WARNING: Removing unreachable block (ram,0x00010780469c) */
/* WARNING: Removing unreachable block (ram,0x0001078046a4) */
/* WARNING: Removing unreachable block (ram,0x0001078046b4) */
/* WARNING: Removing unreachable block (ram,0x000107804688) */
/* WARNING: Removing unreachable block (ram,0x00010780468c) */
/* WARNING: Removing unreachable block (ram,0x000107804650) */
/* WARNING: Removing unreachable block (ram,0x000107804318) */
/* WARNING: Removing unreachable block (ram,0x0001078046e0) */
/* WARNING: Removing unreachable block (ram,0x0001078046f4) */
/* WARNING: Removing unreachable block (ram,0x0001078046f8) */
/* WARNING: Removing unreachable block (ram,0x0001078046fc) */
/* WARNING: Removing unreachable block (ram,0x000107804704) */
/* WARNING: Removing unreachable block (ram,0x00010780470c) */
/* WARNING: Removing unreachable block (ram,0x000107804ba4) */
/* WARNING: Removing unreachable block (ram,0x000107804714) */
/* WARNING: Removing unreachable block (ram,0x000107804b34) */
/* WARNING: Removing unreachable block (ram,0x00010780471c) */
/* WARNING: Removing unreachable block (ram,0x000107804c44) */
/* WARNING: Removing unreachable block (ram,0x000107804c48) */
/* WARNING: Removing unreachable block (ram,0x000107804c50) */
/* WARNING: Removing unreachable block (ram,0x000107804c58) */
/* WARNING: Removing unreachable block (ram,0x000107804c5c) */
/* WARNING: Removing unreachable block (ram,0x000107804c64) */
/* WARNING: Removing unreachable block (ram,0x000107804c74) */
/* WARNING: Removing unreachable block (ram,0x000107804c7c) */
/* WARNING: Removing unreachable block (ram,0x000107804c80) */
/* WARNING: Removing unreachable block (ram,0x000107804724) */
/* WARNING: Removing unreachable block (ram,0x000107804734) */
/* WARNING: Removing unreachable block (ram,0x000107804738) */
/* WARNING: Removing unreachable block (ram,0x0001078048b4) */
/* WARNING: Removing unreachable block (ram,0x00010780473c) */
/* WARNING: Removing unreachable block (ram,0x000107804744) */
/* WARNING: Removing unreachable block (ram,0x000107804764) */
/* WARNING: Removing unreachable block (ram,0x000107804774) */
/* WARNING: Removing unreachable block (ram,0x00010780477c) */
/* WARNING: Removing unreachable block (ram,0x000107804780) */
/* WARNING: Removing unreachable block (ram,0x000107804784) */
/* WARNING: Removing unreachable block (ram,0x000107804790) */
/* WARNING: Removing unreachable block (ram,0x000107804788) */
/* WARNING: Removing unreachable block (ram,0x000107804794) */
/* WARNING: Removing unreachable block (ram,0x00010780479c) */
/* WARNING: Removing unreachable block (ram,0x0001078047a0) */
/* WARNING: Removing unreachable block (ram,0x0001078047a8) */
/* WARNING: Removing unreachable block (ram,0x0001078047b0) */
/* WARNING: Removing unreachable block (ram,0x0001078047b4) */
/* WARNING: Removing unreachable block (ram,0x0001078047b8) */
/* WARNING: Removing unreachable block (ram,0x0001078047bc) */
/* WARNING: Removing unreachable block (ram,0x0001078047c8) */
/* WARNING: Removing unreachable block (ram,0x0001078047d8) */
/* WARNING: Removing unreachable block (ram,0x0001078047e0) */
/* WARNING: Removing unreachable block (ram,0x0001078047d0) */
/* WARNING: Removing unreachable block (ram,0x000107804750) */
/* WARNING: Removing unreachable block (ram,0x000107804754) */
/* WARNING: Removing unreachable block (ram,0x000107804758) */
/* WARNING: Removing unreachable block (ram,0x000107804760) */
/* WARNING: Removing unreachable block (ram,0x0001078047e8) */
/* WARNING: Removing unreachable block (ram,0x0001078047ec) */
/* WARNING: Removing unreachable block (ram,0x000107804834) */
/* WARNING: Removing unreachable block (ram,0x0001078047f4) */
/* WARNING: Removing unreachable block (ram,0x0001078047f8) */
/* WARNING: Removing unreachable block (ram,0x000107804800) */
/* WARNING: Removing unreachable block (ram,0x000107804808) */
/* WARNING: Removing unreachable block (ram,0x00010780480c) */
/* WARNING: Removing unreachable block (ram,0x000107804810) */
/* WARNING: Removing unreachable block (ram,0x000107804814) */
/* WARNING: Removing unreachable block (ram,0x00010780481c) */
/* WARNING: Removing unreachable block (ram,0x000107804820) */
/* WARNING: Removing unreachable block (ram,0x000107804824) */
/* WARNING: Removing unreachable block (ram,0x000107804838) */
/* WARNING: Removing unreachable block (ram,0x000107804840) */
/* WARNING: Removing unreachable block (ram,0x000107804848) */
/* WARNING: Removing unreachable block (ram,0x00010780484c) */
/* WARNING: Removing unreachable block (ram,0x000107804850) */
/* WARNING: Removing unreachable block (ram,0x000107804854) */
/* WARNING: Removing unreachable block (ram,0x000107804860) */
/* WARNING: Removing unreachable block (ram,0x000107804870) */
/* WARNING: Removing unreachable block (ram,0x000107804894) */
/* WARNING: Removing unreachable block (ram,0x000107804898) */
/* WARNING: Removing unreachable block (ram,0x0001078048a0) */
/* WARNING: Removing unreachable block (ram,0x0001078048b0) */
/* WARNING: Removing unreachable block (ram,0x000107804878) */
/* WARNING: Removing unreachable block (ram,0x000107804880) */
/* WARNING: Removing unreachable block (ram,0x000107804890) */
/* WARNING: Removing unreachable block (ram,0x000107804864) */
/* WARNING: Removing unreachable block (ram,0x000107804868) */
/* WARNING: Removing unreachable block (ram,0x00010780482c) */
/* WARNING: Removing unreachable block (ram,0x000107804324) */
/* WARNING: Removing unreachable block (ram,0x000107804334) */
/* WARNING: Removing unreachable block (ram,0x000107804338) */
/* WARNING: Removing unreachable block (ram,0x00010780433c) */
/* WARNING: Removing unreachable block (ram,0x000107804344) */
/* WARNING: Removing unreachable block (ram,0x00010780434c) */
/* WARNING: Removing unreachable block (ram,0x000107804b8c) */
/* WARNING: Removing unreachable block (ram,0x000107804354) */
/* WARNING: Removing unreachable block (ram,0x000107804b1c) */
/* WARNING: Removing unreachable block (ram,0x000107804b3c) */
/* WARNING: Removing unreachable block (ram,0x000107804b40) */
/* WARNING: Removing unreachable block (ram,0x000107804b44) */
/* WARNING: Removing unreachable block (ram,0x00010780435c) */
/* WARNING: Removing unreachable block (ram,0x000107804bbc) */
/* WARNING: Removing unreachable block (ram,0x000107804bc0) */
/* WARNING: Removing unreachable block (ram,0x000107804bc8) */
/* WARNING: Removing unreachable block (ram,0x000107804bd0) */
/* WARNING: Removing unreachable block (ram,0x000107804bd4) */
/* WARNING: Removing unreachable block (ram,0x000107804bdc) */
/* WARNING: Removing unreachable block (ram,0x000107804bec) */
/* WARNING: Removing unreachable block (ram,0x000107804bf4) */
/* WARNING: Removing unreachable block (ram,0x000107804bf8) */
/* WARNING: Removing unreachable block (ram,0x000107804364) */
/* WARNING: Removing unreachable block (ram,0x000107804374) */
/* WARNING: Removing unreachable block (ram,0x000107804378) */
/* WARNING: Removing unreachable block (ram,0x00010780437c) */
/* WARNING: Removing unreachable block (ram,0x000107804384) */
/* WARNING: Removing unreachable block (ram,0x0001078043a4) */
/* WARNING: Removing unreachable block (ram,0x0001078043b4) */
/* WARNING: Removing unreachable block (ram,0x0001078043bc) */
/* WARNING: Removing unreachable block (ram,0x0001078043c0) */
/* WARNING: Removing unreachable block (ram,0x0001078043c4) */
/* WARNING: Removing unreachable block (ram,0x0001078043d0) */
/* WARNING: Removing unreachable block (ram,0x0001078043c8) */
/* WARNING: Removing unreachable block (ram,0x0001078043d4) */
/* WARNING: Removing unreachable block (ram,0x0001078043dc) */
/* WARNING: Removing unreachable block (ram,0x0001078043e0) */
/* WARNING: Removing unreachable block (ram,0x0001078043e8) */
/* WARNING: Removing unreachable block (ram,0x0001078043f0) */
/* WARNING: Removing unreachable block (ram,0x0001078043f4) */
/* WARNING: Removing unreachable block (ram,0x0001078043f8) */
/* WARNING: Removing unreachable block (ram,0x0001078043fc) */
/* WARNING: Removing unreachable block (ram,0x000107804408) */
/* WARNING: Removing unreachable block (ram,0x000107804418) */
/* WARNING: Removing unreachable block (ram,0x000107804420) */
/* WARNING: Removing unreachable block (ram,0x000107804410) */
/* WARNING: Removing unreachable block (ram,0x000107804390) */
/* WARNING: Removing unreachable block (ram,0x000107804394) */
/* WARNING: Removing unreachable block (ram,0x000107804398) */
/* WARNING: Removing unreachable block (ram,0x0001078043a0) */
/* WARNING: Removing unreachable block (ram,0x000107804428) */
/* WARNING: Removing unreachable block (ram,0x0001078044f4) */
/* WARNING: Removing unreachable block (ram,0x00010780442c) */
/* WARNING: Removing unreachable block (ram,0x000107804474) */
/* WARNING: Removing unreachable block (ram,0x000107804434) */
/* WARNING: Removing unreachable block (ram,0x000107804438) */
/* WARNING: Removing unreachable block (ram,0x000107804440) */
/* WARNING: Removing unreachable block (ram,0x000107804448) */
/* WARNING: Removing unreachable block (ram,0x00010780444c) */
/* WARNING: Removing unreachable block (ram,0x000107804450) */
/* WARNING: Removing unreachable block (ram,0x000107804454) */
/* WARNING: Removing unreachable block (ram,0x00010780445c) */
/* WARNING: Removing unreachable block (ram,0x000107804460) */
/* WARNING: Removing unreachable block (ram,0x000107804464) */
/* WARNING: Removing unreachable block (ram,0x000107804478) */
/* WARNING: Removing unreachable block (ram,0x000107804480) */
/* WARNING: Removing unreachable block (ram,0x000107804488) */
/* WARNING: Removing unreachable block (ram,0x00010780448c) */
/* WARNING: Removing unreachable block (ram,0x000107804490) */
/* WARNING: Removing unreachable block (ram,0x000107804494) */
/* WARNING: Removing unreachable block (ram,0x0001078044a0) */
/* WARNING: Removing unreachable block (ram,0x0001078044b0) */
/* WARNING: Removing unreachable block (ram,0x0001078044d4) */
/* WARNING: Removing unreachable block (ram,0x0001078044d8) */
/* WARNING: Removing unreachable block (ram,0x0001078044e0) */
/* WARNING: Removing unreachable block (ram,0x0001078044f0) */
/* WARNING: Removing unreachable block (ram,0x0001078044b8) */
/* WARNING: Removing unreachable block (ram,0x0001078044c0) */
/* WARNING: Removing unreachable block (ram,0x0001078044d0) */
/* WARNING: Removing unreachable block (ram,0x0001078044a4) */
/* WARNING: Removing unreachable block (ram,0x0001078044a8) */
/* WARNING: Removing unreachable block (ram,0x00010780446c) */
/* WARNING: Removing unreachable block (ram,0x0001078048d0) */
/* WARNING: Removing unreachable block (ram,0x0001078048d4) */
/* WARNING: Removing unreachable block (ram,0x0001078048d8) */
/* WARNING: Removing unreachable block (ram,0x000107804d00) */
/* WARNING: Removing unreachable block (ram,0x000107804d1c) */
/* WARNING: Removing unreachable block (ram,0x000107804d10) */
/* WARNING: Removing unreachable block (ram,0x000107804d44) */
/* WARNING: Removing unreachable block (ram,0x00010780428c) */
/* WARNING: Removing unreachable block (ram,0x00010780429c) */
/* WARNING: Removing unreachable block (ram,0x0001078042a0) */
/* WARNING: Removing unreachable block (ram,0x0001078042a4) */
/* WARNING: Removing unreachable block (ram,0x0001078042a8) */
/* WARNING: Removing unreachable block (ram,0x0001078042ac) */
/* WARNING: Removing unreachable block (ram,0x0001078042b0) */
/* WARNING: Removing unreachable block (ram,0x0001078042bc) */

void FUN_107803f88(double param_1,double param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  double unaff_d15;
  double dVar5;
  undefined1 auStack_4f0 [416];
  long lStack_350;
  undefined1 auStack_348 [408];
  long lStack_1b0;
  undefined1 auStack_1a8 [424];
  
  func_0x000107809884();
  func_0x000107808a58();
  func_0x000107803784();
  FUN_1077ffa30();
  plVar1 = param_4 + 1;
  func_0x000107804d98(&lStack_350,plVar1,plVar1 + *param_4 * 3);
  func_0x000107804d98(auStack_4f0,plVar1,plVar1 + *param_4 * 3);
  lStack_1b0 = lStack_350;
  _memcpy(auStack_1a8,auStack_348,lStack_350 * 0x18);
  if (lStack_350 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107808e28(auStack_1a8 + lStack_350 * 0x18 + -8);
    func_0x000107804dbc();
    lVar4 = lStack_1b0;
  }
  func_0x000107809fac(lVar4);
  func_0x000107808f7c();
  dVar5 = unaff_d15;
  do {
    func_0x0001078090d0();
    func_0x0001078089e0();
    func_0x0001078088a0();
    func_0x0001078087d8();
    if (param_1 < dVar5) {
LAB_10780408c:
      unaff_d15 = param_2;
      dVar5 = param_1;
    }
    else {
      bVar2 = false;
      bVar3 = true;
      if (param_1 == dVar5) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_2) && !NAN(unaff_d15)) {
          bVar2 = param_2 == unaff_d15;
          bVar3 = unaff_d15 <= param_2;
        }
      }
      if (!bVar3 || bVar2) goto LAB_10780408c;
    }
    func_0x000107808730();
    func_0x00010780a04c();
  } while( true );
}



/* Entry: 107805610; end: 107805703;  */

/* WARNING: Possible PIC construction at 0x000107805750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010780577c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010780576c) */
/* WARNING: Removing unreachable block (ram,0x000107805780) */
/* WARNING: Removing unreachable block (ram,0x000107805790) */
/* WARNING: Removing unreachable block (ram,0x000107805798) */
/* WARNING: Removing unreachable block (ram,0x00010780579c) */
/* WARNING: Removing unreachable block (ram,0x000107805890) */
/* WARNING: Removing unreachable block (ram,0x000107805898) */
/* WARNING: Removing unreachable block (ram,0x00010780589c) */
/* WARNING: Removing unreachable block (ram,0x0001078058bc) */
/* WARNING: Removing unreachable block (ram,0x0001078058c0) */
/* WARNING: Removing unreachable block (ram,0x0001078058cc) */
/* WARNING: Removing unreachable block (ram,0x0001078058d4) */
/* WARNING: Removing unreachable block (ram,0x0001078058d8) */
/* WARNING: Removing unreachable block (ram,0x0001078058a0) */
/* WARNING: Removing unreachable block (ram,0x0001078058a4) */
/* WARNING: Removing unreachable block (ram,0x0001078058ac) */
/* WARNING: Removing unreachable block (ram,0x0001078058b0) */
/* WARNING: Removing unreachable block (ram,0x0001078058b8) */
/* WARNING: Removing unreachable block (ram,0x0001078058dc) */
/* WARNING: Removing unreachable block (ram,0x0001078058e8) */
/* WARNING: Removing unreachable block (ram,0x0001078058ec) */
/* WARNING: Removing unreachable block (ram,0x0001078058f4) */
/* WARNING: Removing unreachable block (ram,0x0001078058f8) */
/* WARNING: Removing unreachable block (ram,0x000107805900) */
/* WARNING: Removing unreachable block (ram,0x000107805924) */
/* WARNING: Removing unreachable block (ram,0x000107805904) */
/* WARNING: Removing unreachable block (ram,0x000107805908) */
/* WARNING: Removing unreachable block (ram,0x000107805910) */
/* WARNING: Removing unreachable block (ram,0x000107805914) */
/* WARNING: Removing unreachable block (ram,0x000107805918) */
/* WARNING: Removing unreachable block (ram,0x00010780592c) */
/* WARNING: Removing unreachable block (ram,0x000107805938) */
/* WARNING: Removing unreachable block (ram,0x000107805948) */
/* WARNING: Removing unreachable block (ram,0x000107805788) */
/* WARNING: Removing unreachable block (ram,0x0001078057a0) */
/* WARNING: Removing unreachable block (ram,0x0001078057a8) */
/* WARNING: Removing unreachable block (ram,0x0001078057b4) */
/* WARNING: Removing unreachable block (ram,0x0001078057b8) */
/* WARNING: Removing unreachable block (ram,0x0001078057bc) */
/* WARNING: Removing unreachable block (ram,0x0001078057e0) */
/* WARNING: Removing unreachable block (ram,0x0001078057e4) */
/* WARNING: Removing unreachable block (ram,0x000107805800) */
/* WARNING: Removing unreachable block (ram,0x0001078057ec) */
/* WARNING: Removing unreachable block (ram,0x0001078057fc) */
/* WARNING: Removing unreachable block (ram,0x0001078057cc) */
/* WARNING: Removing unreachable block (ram,0x0001078057dc) */
/* WARNING: Removing unreachable block (ram,0x000107805804) */
/* WARNING: Removing unreachable block (ram,0x00010780580c) */
/* WARNING: Removing unreachable block (ram,0x00010780583c) */
/* WARNING: Removing unreachable block (ram,0x000107805844) */
/* WARNING: Removing unreachable block (ram,0x000107805848) */
/* WARNING: Removing unreachable block (ram,0x000107805868) */
/* WARNING: Removing unreachable block (ram,0x000107805968) */
/* WARNING: Removing unreachable block (ram,0x000107805970) */
/* WARNING: Removing unreachable block (ram,0x00010780587c) */
/* WARNING: Removing unreachable block (ram,0x000107805880) */
/* WARNING: Removing unreachable block (ram,0x000107805814) */
/* WARNING: Removing unreachable block (ram,0x000107805818) */
/* WARNING: Removing unreachable block (ram,0x000107805820) */
/* WARNING: Removing unreachable block (ram,0x000107805824) */
/* WARNING: Removing unreachable block (ram,0x000107805828) */
/* WARNING: Removing unreachable block (ram,0x000107805830) */
/* WARNING: Removing unreachable block (ram,0x000107805834) */
/* WARNING: Removing unreachable block (ram,0x000107805838) */
/* WARNING: Removing unreachable block (ram,0x000107805764) */
/* WARNING: Removing unreachable block (ram,0x00010780575c) */
/* WARNING: Removing unreachable block (ram,0x000107805754) */
/* WARNING: Removing unreachable block (ram,0x000107805888) */
/* WARNING: Removing unreachable block (ram,0x000107805ad0) */
/* WARNING: Removing unreachable block (ram,0x000107805ad4) */
/* WARNING: Removing unreachable block (ram,0x000107805adc) */
/* WARNING: Removing unreachable block (ram,0x000107805ae0) */
/* WARNING: Removing unreachable block (ram,0x000107805b04) */
/* WARNING: Removing unreachable block (ram,0x000107805ae8) */
/* WARNING: Removing unreachable block (ram,0x000107805af0) */
/* WARNING: Removing unreachable block (ram,0x000107805af4) */
/* WARNING: Removing unreachable block (ram,0x000107805af8) */
/* WARNING: Removing unreachable block (ram,0x000107805afc) */
/* WARNING: Removing unreachable block (ram,0x000107805b08) */
/* WARNING: Removing unreachable block (ram,0x000107805b10) */
/* WARNING: Removing unreachable block (ram,0x000107805b84) */
/* WARNING: Removing unreachable block (ram,0x000107805b18) */
/* WARNING: Removing unreachable block (ram,0x000107805b20) */
/* WARNING: Removing unreachable block (ram,0x000107805b30) */
/* WARNING: Removing unreachable block (ram,0x000107805b34) */
/* WARNING: Removing unreachable block (ram,0x000107805b38) */
/* WARNING: Removing unreachable block (ram,0x000107805b4c) */
/* WARNING: Removing unreachable block (ram,0x000107805b54) */
/* WARNING: Removing unreachable block (ram,0x000107805b60) */
/* WARNING: Removing unreachable block (ram,0x000107805b64) */
/* WARNING: Removing unreachable block (ram,0x000107805b68) */
/* WARNING: Removing unreachable block (ram,0x000107805b90) */

long FUN_107805610(long param_1,long param_2,float *param_3)

{
  undefined4 uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float *pfVar5;
  ulong extraout_x8;
  ulong uVar6;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar8;
  float *extraout_x10;
  long extraout_x10_00;
  float *pfVar9;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 extraout_x10_03;
  ulong extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  undefined8 *puVar10;
  undefined8 *extraout_x11_03;
  long extraout_x12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_18;
  ulong uVar14;
  
  func_0x000107808a58();
  func_0x000107809938();
  if ((in_NG == in_OV) && (func_0x000107808d30(), in_NG == in_OV)) {
    func_0x000107808ae8();
    uVar7 = extraout_x9;
    pfVar9 = extraout_x10;
    if ((in_NG != in_OV) && (pfVar9 = extraout_x10, *extraout_x10 < extraout_x10[6])) {
      uVar7 = extraout_x11;
      pfVar9 = extraout_x10 + 6;
    }
    fVar16 = *pfVar9;
    fVar12 = *param_3;
    uVar14 = (ulong)(uint)fVar12;
    in_CY = fVar12 <= fVar16;
    in_ZR = fVar16 == fVar12;
    if (fVar12 <= fVar16) {
      uVar19 = *(undefined8 *)(param_3 + 3);
      uVar15 = *(undefined8 *)(param_3 + 1);
      fVar12 = param_3[5];
      pfVar5 = param_3;
      uVar6 = extraout_x8;
      do {
        param_3 = pfVar9;
        fVar16 = (float)uVar14;
        uVar20 = *(undefined8 *)(param_3 + 2);
        uVar18 = *(undefined8 *)param_3;
        *(undefined8 *)(pfVar5 + 4) = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(pfVar5 + 2) = uVar20;
        *(undefined8 *)pfVar5 = uVar18;
        in_CY = uVar7 <= uVar6;
        in_ZR = uVar6 == uVar7;
        if ((long)uVar6 < (long)uVar7) break;
        func_0x00010780966c();
        fVar16 = (float)uVar14;
        pfVar9 = (float *)(param_1 + extraout_x10_00 * extraout_x11_00);
        uVar7 = extraout_x9_00;
        if (((long)(extraout_x12 + 2U) < param_2) && (uVar7 = extraout_x9_00, *pfVar9 < pfVar9[6]))
        {
          uVar7 = extraout_x12 + 2U;
          pfVar9 = pfVar9 + 6;
        }
        fVar17 = *pfVar9;
        in_CY = fVar16 <= fVar17;
        in_ZR = fVar17 == fVar16;
        pfVar5 = param_3;
        uVar6 = extraout_x8_00;
      } while (fVar16 <= fVar17);
      *param_3 = fVar16;
      param_3[5] = fVar12;
      *(undefined8 *)(param_3 + 3) = uVar19;
      *(undefined8 *)(param_3 + 1) = uVar15;
    }
  }
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107805988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10780598c + (ulong)(byte)(&UNK_10dea61e8)[unaff_x26] * 4))();
    return param_1;
  }
  bVar2 = 0x23e < extraout_x8_02;
  if ((long)extraout_x8_02 < 0x240) {
    uVar3 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar4 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar4) {
        while (func_0x000107809f1c(), !(bool)uVar4) {
          uVar7 = (ulong)*(uint *)(unaff_x20 + 4);
          func_0x000107809708();
          if ((bool)uVar3) {
            uVar15 = *(undefined8 *)((long)unaff_x20 + 0x24);
            uVar1 = *(undefined4 *)((long)unaff_x20 + 0x2c);
            do {
              func_0x00010780a120();
              func_0x000107809d1c();
            } while ((bool)uVar3);
            *extraout_x11_03 = extraout_x10_03;
            *(int *)(extraout_x11_03 + 1) = (int)uVar7;
            *(undefined4 *)((long)extraout_x11_03 + 0x14) = uVar1;
            *(undefined8 *)((long)extraout_x11_03 + 0xc) = uVar15;
          }
          func_0x000107809f8c();
        }
      }
    }
    else {
      puVar8 = unaff_x20;
      if (!(bool)uVar4) {
        while( true ) {
          puVar10 = puVar8;
          uVar4 = 1;
          if (puVar10 + 3 == unaff_x19) break;
          uVar7 = (ulong)(uint)*(float *)(puVar10 + 4);
          puVar8 = puVar10 + 3;
          if (*(float *)(puVar10 + 4) < *(float *)(puVar10 + 1)) {
            uVar15 = *(undefined8 *)((long)puVar10 + 0x24);
            uVar1 = *(undefined4 *)((long)puVar10 + 0x2c);
            do {
              uVar4 = 1;
              func_0x000107809d04();
              uVar13 = (undefined4)uVar7;
              puVar8 = extraout_x9_01;
              uVar19 = extraout_x10_01;
              puVar10 = unaff_x20;
              if (extraout_x11_01 == 0) goto code_r0x000107805a8c;
              func_0x000107809d1c();
              uVar13 = (undefined4)uVar7;
            } while ((bool)uVar4);
            puVar8 = extraout_x9_02;
            uVar19 = extraout_x10_02;
            puVar10 = (undefined8 *)((long)unaff_x20 + extraout_x11_02 + 0x18);
code_r0x000107805a8c:
            *puVar10 = uVar19;
            *(undefined4 *)(puVar10 + 1) = uVar13;
            *(undefined8 *)((long)puVar10 + 0xc) = uVar15;
            *(undefined4 *)((long)puVar10 + 0x14) = uVar1;
          }
        }
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar2) {
        func_0x000107808e08();
        puVar11 = &UNK_107805754;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar11 = &UNK_107805780;
      }
      goto code_r0x000107805c00;
    }
    uVar4 = unaff_x20 == unaff_x19;
    if (!(bool)uVar4) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107805e7c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8_01);
  if ((bool)uVar4) {
    return param_1;
  }
  puVar11 = &SUB_107805c00;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107805c00:
  fVar12 = *(float *)(param_2 + 8);
  uVar7 = (ulong)(uint)fVar12;
  uVar15 = 0;
  if (*(float *)(param_1 + 8) <= fVar12) {
    if (fVar12 <= unaff_x21[2]) {
      return 0;
    }
    func_0x000107809398();
    *(undefined8 *)(unaff_x21 + 2) = uVar15;
    *(ulong *)unaff_x21 = uVar7;
    *(undefined8 *)(unaff_x21 + 4) = extraout_x8_04;
    if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar12 <= unaff_x21[2]) {
      func_0x000107808e40();
      uVar7 = (ulong)(uint)unaff_x21[2];
      uVar15 = 0;
      if (*(float *)(param_2 + 8) <= unaff_x21[2]) {
        return 1;
      }
      func_0x000107809398(puVar11);
      uVar19 = extraout_x8_05;
    }
    else {
      func_0x000107809bf8();
      uVar19 = extraout_x8_03;
    }
    *(undefined8 *)(unaff_x21 + 2) = uVar15;
    *(ulong *)unaff_x21 = uVar7;
    *(undefined8 *)(unaff_x21 + 4) = uVar19;
  }
  return 1;
}



/* Entry: 1078064a0; end: 10780654b;  */

undefined8 FUN_1078064a0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 unaff_x30;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  fVar2 = *(float *)(param_2 + 4);
  uVar3 = 0;
  uVar4 = 0;
  if (*(float *)(param_1 + 4) <= fVar2) {
    if (fVar2 <= *(float *)((long)param_3 + 4)) {
      return 0;
    }
    func_0x000107809398();
    param_3[1] = uVar4;
    *param_3 = CONCAT44(uVar3,fVar2);
    param_3[2] = extraout_x8_00;
    if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar2 <= *(float *)((long)param_3 + 4)) {
      func_0x000107808e40();
      fVar2 = *(float *)((long)param_3 + 4);
      uVar3 = 0;
      uVar4 = 0;
      if (*(float *)(param_2 + 4) <= fVar2) {
        return 1;
      }
      func_0x000107809398(unaff_x30);
      uVar1 = extraout_x8_01;
    }
    else {
      func_0x000107809bf8();
      uVar1 = extraout_x8;
    }
    param_3[1] = uVar4;
    *param_3 = CONCAT44(uVar3,fVar2);
    param_3[2] = uVar1;
  }
  return 1;
}



/* Entry: 107806db4; end: 107806e17;  */

void FUN_107806db4(void)

{
  undefined1 uVar1;
  long in_x4;
  long unaff_x22;
  
  func_0x000107808810();
  func_0x000107806d6c();
  uVar1 = *(float *)(in_x4 + 0xc) < *(float *)(unaff_x22 + 0xc);
  if ((bool)uVar1) {
    func_0x000107808a7c();
    func_0x000107809464();
    if ((bool)uVar1) {
      func_0x0001078087a0();
      func_0x000107809524();
      if ((bool)uVar1) {
        func_0x00010780877c();
        func_0x000107809534();
        if ((bool)uVar1) {
          func_0x000107808758();
        }
      }
    }
  }
  return;
}



/* Entry: 1078076e4; end: 107807803;  */

void FUN_1078076e4(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x24;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = (uint)param_1;
  if (1 < param_3) {
    uVar8 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 5 <= (long)uVar8) {
      lVar6 = (long)param_4 - param_1 >> 4;
      uVar1 = lVar6 + 1;
      puVar3 = (undefined8 *)(param_1 + uVar1 * 0x20);
      uVar2 = lVar6 + 2;
      puVar7 = puVar3;
      uVar9 = uVar1;
      if ((long)uVar2 < param_3) {
        unaff_x24 = puVar3 + 4;
        func_0x000107809dfc(*param_2);
        puVar7 = unaff_x24;
        uVar9 = uVar2;
        if (uVar5 == 0) {
          puVar7 = puVar3;
          uVar9 = uVar1;
        }
      }
      func_0x0001078090f4(*param_2);
      if ((uVar5 & 1) == 0) {
        uVar12 = param_4[1];
        uVar10 = *param_4;
        uVar15 = param_4[3];
        uVar14 = param_4[2];
        uVar11 = uVar10;
        uVar13 = uVar12;
        do {
          func_0x00010780a1ac();
          param_4[3] = puVar7[3];
          param_4[2] = uVar13;
          param_4[1] = uVar11;
          if ((long)uVar8 < (long)uVar9) break;
          uVar2 = uVar9 << 1 | 1;
          puVar3 = (undefined8 *)(param_1 + uVar2 * 0x20);
          uVar1 = uVar9 * 2 + 2;
          puVar7 = puVar3;
          uVar9 = uVar2;
          if ((long)uVar1 < param_3) {
            func_0x0001078090f4(*param_2);
            puVar7 = puVar3 + 4;
            uVar9 = uVar1;
            if (uVar5 == 0) {
              puVar7 = puVar3;
              uVar9 = uVar2;
            }
          }
          func_0x0001078099a8();
          bVar4 = uVar5 == 0;
          uVar5 = 0;
          param_4 = unaff_x24;
        } while (bVar4);
        *unaff_x24 = uVar10;
        unaff_x24[3] = uVar15;
        unaff_x24[2] = uVar14;
        unaff_x24[1] = uVar12;
      }
    }
  }
  return;
}



/* Entry: 107807b9c; end: 107807cbf;  */

long * FUN_107807b9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001077fa8c4(lVar1 + 0x58);
      func_0x000104c2f714(lVar1 + 0x20);
    }
    func_0x000107809de4();
  }
  return param_1;
}



/* Entry: 107808004; end: 10780803b;  */

long FUN_107808004(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  func_0x0001003adc18(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 10780813c; end: 107808173;  */

long FUN_10780813c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dfc08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078083b8; end: 1078083db;  */

undefined8 * FUN_1078083b8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dfc28;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001078091f4();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  func_0x0001077ff7a8(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 10780a254; end: 10780a2b3;  */

float FUN_10780a254(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  lVar1 = param_2[1];
  fVar4 = 0.0;
  lVar2 = *param_2;
  lVar3 = lVar2;
  for (; lVar3 = lVar3 + 4, lVar2 != lVar1 + -4; lVar2 = lVar2 + 4) {
    func_0x0001077f4424(lVar2,lVar3);
    fVar4 = fVar4 + (float)param_1;
  }
  return fVar4;
}



/* Entry: 10780af58; end: 10780b433;  */

void FUN_10780af58(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  long lVar13;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar15;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar16;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  long *plVar17;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar18;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  ulong extraout_x14;
  ulong uVar20;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar21;
  int extraout_w16;
  long lVar22;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x00010780dd5c();
  func_0x00010780d974();
LAB_10780af70:
  func_0x00010780d960();
LAB_10780af74:
  while( true ) {
    func_0x00010780d94c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dea65f0)[extraout_x8] * 4 + 0x10780b174))();
      return;
    }
    bVar8 = 0x16 < extraout_x8;
    cVar10 = SBORROW8(extraout_x8,0x17);
    cVar11 = (long)(extraout_x8 - 0x17) < 0;
    uVar12 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar12 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar9 = 0;
        if ((bool)uVar12) {
          return;
        }
        while (func_0x00010780dc48(), !(bool)uVar9) {
          iVar6 = *(int *)(unaff_x20[1] + 0xc) * *(int *)(unaff_x20[1] + 8);
          iVar7 = *(int *)(*unaff_x20 + 0xc) * *(int *)(*unaff_x20 + 8);
          uVar9 = iVar6 == iVar7;
          if (iVar7 < iVar6) {
            do {
              func_0x00010780dbd4();
              uVar9 = extraout_w12_00 == extraout_w15_00 * extraout_w14_01;
            } while (!(bool)uVar9 && extraout_w15_00 * extraout_w14_01 <= extraout_w12_00);
            *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
          }
          func_0x00010780dce4();
        }
        return;
      }
      if ((bool)uVar12) {
        return;
      }
      func_0x00010780dd50();
      goto LAB_10780b1e0;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x00010780dab0();
      lVar22 = extraout_x8_01;
      lVar14 = extraout_x9;
      lVar16 = extraout_x10_06;
      lVar13 = extraout_x9;
      goto joined_r0x00010780b244;
    }
    func_0x00010780daf0();
    if (bVar8) {
      func_0x00010780da00();
      func_0x00010780b434();
      func_0x00010780d938();
      func_0x00010780b434();
      func_0x00010780dae0();
      func_0x00010780b434();
      func_0x00010780dad0();
      func_0x00010780b434();
      func_0x00010780d924();
    }
    else {
      func_0x00010780dac0();
      func_0x00010780b434();
    }
    func_0x00010780dcf0();
    if ((unaff_x25 & 1) != 0) break;
    uVar4 = *(int *)(unaff_x20[-1] + 0xc) * *(int *)(unaff_x20[-1] + 8);
    uVar5 = *(int *)(extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 8);
    cVar10 = SBORROW4(uVar4,uVar5);
    cVar11 = (int)(uVar4 - uVar5) < 0;
    uVar12 = uVar4 == uVar5;
    if ((int)uVar5 < (int)uVar4) break;
    uVar4 = *(int *)(*unaff_x21 + 0xc) * *(int *)(*unaff_x21 + 8);
    uVar9 = uVar4 <= uVar5;
    cVar10 = SBORROW4(uVar5,uVar4);
    cVar11 = (int)(uVar5 - uVar4) < 0;
    uVar12 = uVar5 == uVar4;
    plVar15 = unaff_x20;
    if ((int)uVar4 < (int)uVar5) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar4 = *(int *)(*unaff_x26 + 0xc) * *(int *)(*unaff_x26 + 8);
        uVar9 = uVar4 <= uVar5;
        cVar10 = SBORROW4(uVar5,uVar4);
        cVar11 = (int)(uVar5 - uVar4) < 0;
        uVar12 = uVar5 == uVar4;
        plVar15 = unaff_x26;
      } while ((int)uVar5 <= (int)uVar4);
    }
    else {
      do {
        func_0x00010780dcb4();
        if ((bool)uVar9) break;
        func_0x00010780dc60();
        func_0x00010780db60();
      } while ((bool)uVar12 || cVar11 != cVar10);
    }
    func_0x00010780dc54();
    plVar15 = extraout_x10_01;
    if (!(bool)uVar9) {
      do {
        func_0x00010780db60();
        plVar15 = extraout_x10_02;
      } while (!(bool)uVar12 && cVar11 == cVar10);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar10 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar11 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x00010780d884();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x00010780db60();
      } while ((bool)in_ZR || cVar11 != cVar10);
      do {
        func_0x00010780db60();
        plVar15 = extraout_x10_03;
      } while (!(bool)in_ZR && cVar11 == cVar10);
    }
    func_0x00010780dc3c();
    if (!(bool)in_ZR) {
      func_0x00010780dc30();
    }
    func_0x00010780dc78();
  }
  do {
    func_0x00010780dc04();
    func_0x00010780ddcc();
  } while (!(bool)uVar12 && cVar11 == cVar10);
  func_0x00010780daa0();
  plVar15 = extraout_x10;
  plVar17 = unaff_x19;
  if ((bool)uVar12) {
    do {
      if (plVar17 <= plVar15) break;
      func_0x00010780dbb8();
      plVar15 = extraout_x10_00;
      plVar17 = extraout_x11;
    } while (extraout_w13_00 * extraout_w14_00 <= extraout_w9_00);
  }
  else {
    do {
      func_0x00010780dbb8();
    } while (extraout_w13 * extraout_w14 <= extraout_w9);
  }
  func_0x00010780dcc0();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x00010780da60();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_01 < *(int *)(*unaff_x26 + 0xc) * *(int *)(*unaff_x26 + 8));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) * *(int *)(*plVar15 + 8) <= extraout_w9_01);
  }
  func_0x00010780dd2c();
  if (!(bool)in_ZR) {
    func_0x00010780dc90();
  }
  func_0x00010780dc84();
  if ((bool)in_CY) {
    func_0x00010780db10();
    func_0x00010780b568();
    func_0x00010780da30();
    func_0x00010780b568();
    if ((int)param_1 != 0) goto LAB_10780b150;
    if ((unaff_x28 & 1) != 0) goto LAB_10780af74;
  }
  func_0x00010780d8c0();
  FUN_10780af58();
  unaff_x25 = 0;
  goto LAB_10780af74;
LAB_10780b1e0:
  func_0x00010780dd44();
  if ((bool)uVar12) {
    return;
  }
  iVar6 = *(int *)(extraout_x11_00[1] + 0xc) * *(int *)(extraout_x11_00[1] + 8);
  iVar7 = *(int *)(*extraout_x11_00 + 0xc) * *(int *)(*extraout_x11_00 + 8);
  cVar10 = SBORROW4(iVar6,iVar7);
  cVar11 = iVar6 - iVar7 < 0;
  uVar12 = iVar6 == iVar7;
  if (iVar7 < iVar6) {
    do {
      func_0x00010780dd08();
      lVar22 = extraout_x10_04;
      plVar15 = unaff_x20;
      if ((bool)uVar12) goto LAB_10780b22c;
      func_0x00010780dc14();
      func_0x00010780ddd8();
    } while (!(bool)uVar12 && cVar11 == cVar10);
    lVar22 = extraout_x10_05;
    plVar15 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_10780b22c:
    *plVar15 = lVar22;
  }
  func_0x00010780dcd8();
  goto LAB_10780b1e0;
joined_r0x00010780b244:
  if (lVar13 < 0) {
    do {
      if (lVar22 < 2) {
        return;
      }
      func_0x00010780d8e8();
      lVar14 = extraout_x8_03;
      lVar22 = extraout_x12_00;
      lVar16 = extraout_x14_00;
      do {
        lVar22 = lVar22 + lVar16 * 8;
        lVar13 = *(long *)(lVar22 + 8);
        lVar16 = lVar16 * 2 + 2;
        cVar10 = SBORROW8(lVar16,lVar14);
        cVar11 = lVar16 - lVar14 < 0;
        bVar8 = lVar16 == lVar14;
        if (lVar16 < lVar14) {
          lVar22 = *(long *)(lVar22 + 0x10);
          iVar6 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8);
          iVar7 = *(int *)(lVar22 + 0xc) * *(int *)(lVar22 + 8);
          cVar10 = SBORROW4(iVar6,iVar7);
          cVar11 = iVar6 - iVar7 < 0;
          bVar8 = iVar6 == iVar7;
        }
        func_0x00010780da50();
        lVar14 = extraout_x8_04;
        lVar22 = extraout_x12_01;
        lVar16 = extraout_x14_01;
      } while (bVar8 || cVar11 != cVar10);
      func_0x00010780dc9c();
      if (bVar8) {
        *extraout_x9_01 = extraout_x10_08;
        lVar22 = extraout_x8_05;
      }
      else {
        func_0x00010780d7d0();
        lVar22 = extraout_x8_06;
        if ((cVar11 == cVar10) &&
           (func_0x00010780d8d4(), lVar22 = extraout_x8_07,
           *(int *)(extraout_x11_03 + 0xc) * *(int *)(extraout_x11_03 + 8) <
           *(int *)(extraout_x13_03 + 0xc) * *(int *)(extraout_x13_03 + 8))) {
          do {
            func_0x00010780dc6c();
            lVar22 = extraout_x8_08;
            uVar18 = extraout_x11_04;
            puVar21 = extraout_x15;
            if (extraout_x10_09 == 0) break;
            func_0x00010780d898();
            lVar22 = extraout_x8_09;
            uVar18 = extraout_x11_05;
            puVar21 = extraout_x15_00;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 0xc) * *(int *)(extraout_x13_04 + 8));
          *puVar21 = uVar18;
        }
      }
      lVar22 = lVar22 + -1;
    } while( true );
  }
  cVar10 = SBORROW8(lVar14,lVar16);
  cVar11 = lVar14 - lVar16 < 0;
  if (lVar16 <= lVar14) {
    func_0x00010780d99c();
    if (cVar11 != cVar10) {
      param_1 = (long *)(ulong)(uint)(*(int *)(*(long *)(extraout_x11_01 + 8) + 0xc) *
                                     *(int *)(*(long *)(extraout_x11_01 + 8) + 8));
    }
    func_0x00010780dbf4();
    iVar6 = *(int *)(extraout_x13_02 + 0xc) * *(int *)(extraout_x13_02 + 8);
    lVar22 = extraout_x8_02;
    lVar14 = extraout_x9_00;
    lVar16 = extraout_x10_07;
    plVar15 = extraout_x11_02;
    lVar13 = extraout_x12;
    uVar20 = extraout_x14;
    if (extraout_w16 * extraout_w15 <= iVar6) {
      do {
        plVar17 = plVar15;
        *param_1 = lVar13;
        if (extraout_x9_00 < (long)uVar20) break;
        uVar3 = uVar20 << 1 | 1;
        plVar2 = unaff_x20 + uVar3;
        uVar1 = uVar20 * 2 + 2;
        lVar19 = *plVar2;
        plVar15 = plVar2;
        lVar13 = lVar19;
        uVar20 = uVar3;
        if ((long)uVar1 < extraout_x8_02) {
          lVar13 = plVar2[1];
          plVar15 = plVar2 + 1;
          uVar20 = uVar1;
          if (*(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8) <=
              *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8)) {
            plVar15 = plVar2;
            lVar13 = lVar19;
            uVar20 = uVar3;
          }
        }
        param_1 = plVar17;
      } while (*(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8) <= iVar6);
      *plVar17 = extraout_x13_02;
    }
  }
  lVar16 = lVar16 + -1;
  lVar13 = lVar16;
  goto joined_r0x00010780b244;
LAB_10780b150:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto LAB_10780af70;
}



/* Entry: 10780bc3c; end: 10780bc97;  */

void FUN_10780bc3c(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780bbf4();
  func_0x00010780dcfc();
  func_0x00010780d768();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d910();
    func_0x00010780d768();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d804();
      func_0x00010780d768();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780d7f0();
        func_0x00010780d768();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010780db28();
        }
      }
    }
  }
  return;
}



/* Entry: 10780c9d4; end: 10780ca53;  */

void FUN_10780c9d4(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  
  lVar8 = *param_2;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar8 + 8);
  iVar2 = *(int *)(lVar7 + 8);
  lVar9 = *param_3;
  iVar3 = *(int *)(lVar9 + 8);
  if (iVar2 < iVar1) {
    if (iVar1 < iVar3) {
      *param_1 = lVar9;
    }
    else {
      *param_1 = lVar8;
      *param_2 = lVar7;
      if (*(int *)(*param_3 + 8) <= iVar2) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar7;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    bVar6 = iVar3 == iVar1;
    if (iVar1 < iVar3) {
      *param_2 = lVar9;
      *param_3 = lVar8;
      func_0x00010780d9cc(*param_2);
      if (!bVar6 && cVar5 == cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10780d194; end: 10780d277;  */

void FUN_10780d194(void)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long extraout_x8;
  long extraout_x11;
  long lVar3;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  long extraout_x15;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010780d854();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea6626)[extraout_x8] * 4 + 0x10780d1c8))(1);
    return;
  }
  func_0x00010780d8fc();
  func_0x00010780d070();
  func_0x00010780da80();
  lVar3 = extraout_x11;
  do {
    if (lVar3 == unaff_x20) {
      return;
    }
    func_0x00010780da70();
    bVar2 = *(int *)(extraout_x11_00 + 0xc) == *(int *)(extraout_x13 + 0xc);
    if (*(int *)(extraout_x13 + 0xc) < *(int *)(extraout_x11_00 + 0xc)) {
      do {
        func_0x00010780dca8();
        if (bVar2) {
          bVar2 = true;
          break;
        }
        iVar1 = *(int *)(*(long *)(unaff_x19 + extraout_x15 + -0x10) + 0xc);
        bVar2 = extraout_w12 == iVar1;
      } while (!bVar2 && iVar1 <= extraout_w12);
      func_0x00010780da40();
      if (bVar2) {
        func_0x00010780da10();
        return;
      }
    }
    func_0x00010780da20();
    lVar3 = extraout_x11_01;
  } while( true );
}



/* Entry: 10780decc; end: 10780df1f;  */

long FUN_10780decc(long param_1)

{
  func_0x00010780ffb0(param_1 + 0x150);
  func_0x00010724b8b8(param_1 + 0x140);
  func_0x00010780ff88(param_1 + 0x130);
  func_0x000107276ba4(param_1 + 0x78);
  func_0x00010780f50c(param_1 + 0x58);
  func_0x00010780f57c(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10780ee80; end: 10780f1d7;  */

void FUN_10780ee80(long param_1,long param_2,long *param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  undefined2 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined1 auStack_170 [24];
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_120;
  undefined1 uStack_118;
  int iStack_e8;
  long lStack_e0;
  undefined2 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_80;
  undefined1 uStack_78;
  
  func_0x000107811080();
  uVar1 = param_1 + 0x78;
  lStack_d0 = param_2;
  plStack_c8 = param_3;
  do {
    if (lStack_d0 == 0) {
      return;
    }
    lVar2 = *plStack_c8;
    lVar5 = plStack_c8[1];
    puVar8 = (undefined2 *)plStack_c8[2];
    func_0x000107811110();
    lStack_e0 = lVar5;
    puStack_d8 = puVar8;
    while (lStack_e0 != 0) {
      uVar3 = *puStack_d8;
      uStack_118 = 1;
      uStack_120 = uVar1;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv(uVar1);
      lVar5 = param_1 + 0x38;
      lVar7 = lVar2;
      func_0x00010780e8c0();
      if (lVar5 == 0) {
        func_0x000107812390();
        if (param_4 != 0) goto LAB_10780ef38;
LAB_10780ef58:
        func_0x000107812530(&uStack_c0);
        func_0x0001078847ec(&uStack_80,0x4020000000000000,0x3fd0000000000000,&lStack_b8);
        func_0x0001073c81ec(&lStack_b8,&uStack_80);
        func_0x0001073c7fd0(&uStack_80);
        func_0x0001077ff6dc(&uStack_120,&uStack_c0);
        func_0x0001073c7fd0(&lStack_b8);
LAB_10780efa8:
        if (iStack_e8 == 1) {
          uVar9 = uStack_120 & 0xffffffff;
          func_0x00010786e848(&uStack_140,lVar2);
          __ZNSt3__19to_stringEi(auStack_158,uVar3);
          __ZNSt3__19to_stringEi(auStack_170,uVar9);
          func_0x000105989090(&uStack_c0,&uStack_140,auStack_158,auStack_170);
          func_0x0001003a91d4(&UNK_10f42ae8e);
          func_0x0001003a9204(&uStack_80);
          func_0x00010786df04(2,&uStack_80,0,0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_140);
        }
        else {
          if (iStack_e8 != 0) {
            func_0x00010563ab98();
LAB_10780f138:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10780f13c);
            (*pcVar4)();
          }
          uStack_78 = 1;
          uStack_80 = uVar1;
          __ZNSt3__119__shared_mutex_base4lockEv(uVar1);
          lVar5 = param_1 + 0x38;
          func_0x00010780e8ec(lVar5,lVar2);
          if (iStack_e8 != 0) {
            func_0x00010563ab98();
            goto LAB_10780f138;
          }
          func_0x00010780f1d8(&uStack_140,&uStack_120);
          plVar6 = (long *)(lVar5 + 0x18);
          func_0x0001078111d8(plVar6,auStack_158,uVar3);
          if (*plVar6 == 0) {
            lVar7 = 0x38;
            __Znwm();
            lStack_b8 = lVar5 + 0x20;
            uStack_b0 = 1;
            *(undefined2 *)(lVar7 + 0x20) = uVar3;
            *(undefined8 *)(lVar7 + 0x30) = uStack_138;
            *(undefined8 *)(lVar7 + 0x28) = uStack_140;
            uStack_140 = 0;
            uStack_138 = 0;
            func_0x000107811224(lVar5 + 0x18,auStack_158[0],plVar6,lVar7);
            uStack_c0 = 0;
            func_0x00010781124c(&uStack_c0);
          }
          func_0x00010780fe0c(&uStack_140);
          func_0x000104c305a0(&uStack_80);
        }
        func_0x00010780fe34(&uStack_120);
      }
      else {
        lVar5 = lVar7 + 0x28;
        func_0x0001078101b0(lVar5,uVar3);
        func_0x000107812390();
        if (lVar7 + 0x30 == lVar5) {
          if (param_4 == 0) goto LAB_10780ef58;
LAB_10780ef38:
          func_0x000107812530(&uStack_120);
          goto LAB_10780efa8;
        }
      }
      func_0x000107811170(&lStack_e0);
    }
    func_0x0001078110dc(&lStack_d0);
  } while( true );
}



/* Entry: 10780f53c; end: 10780f57b;  */

void FUN_10780f53c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1] + 8;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001078100a8(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x18;
  }
  return;
}



/* Entry: 10780f88c; end: 10780f8af;  */

void FUN_10780f88c(void)

{
  long extraout_x8;
  
  func_0x000107812384();
  if (extraout_x8 != 0) {
    func_0x00010781222c();
  }
  return;
}



/* Entry: 10780fc7c; end: 10780fc9f;  */

void FUN_10780fc7c(void)

{
  func_0x000107812518(&PTR_LOOP_110c8acd8);
  return;
}



/* Entry: 10780fe94; end: 10780fed3;  */

void FUN_10780fe94(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078122e0();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x38) {
    func_0x0001073c7fd0(lVar1 + -0x30);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107810018; end: 10781004f;  */

void FUN_107810018(long param_1)

{
  func_0x0001078124ac(param_1 + 0x18);
  func_0x000107810070();
  return;
}



/* Entry: 10781037c; end: 107810483;  */

void FUN_10781037c(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  puVar3 = &uStack_28;
  func_0x0001000df370(puVar3,8);
  uVar1 = (long)puVar3 + 0x9e3779b97f4a7c15;
  uVar2 = (ulong)*(ushort *)(param_1 + 1) + 0x9e3779b97f4a7c15;
  func_0x0001078125a0((long)&PTR_LOOP_110c8acd8 +
                      (uVar1 * 0x1000 + (uVar1 >> 4) + -0x61c8864680b583eb +
                       ((ulong)*(ushort *)((long)param_1 + 10) + uVar2 * 0x1000 + (uVar2 >> 4) +
                        0x9e3779b97f4a7c15 ^ uVar2) ^ uVar1));
  return;
}



/* Entry: 10781078c; end: 1078107a3;  */

void FUN_10781078c(void)

{
  func_0x000107812518(&PTR_LOOP_110c8acd8);
  return;
}



/* Entry: 10781093c; end: 10781095f;  */

void FUN_10781093c(long param_1,undefined8 param_2)

{
  func_0x0001078122d4(param_2,param_1 + 8);
  func_0x0001078123c4(&PTR_DAT_1109dfdd8);
  func_0x00010780f904();
  return;
}



/* Entry: 107810d34; end: 107810d6b;  */

undefined8 FUN_107810d34(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm(0x68);
  func_0x000107810f34();
  return uVar1;
}



/* Entry: 107810fe0; end: 10781107f;  */

long FUN_107810fe0(ulong *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  lVar1 = 0;
  uVar2 = *param_1;
  uVar4 = uVar2 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar8 = *(undefined8 *)(uVar2 + uVar4);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar14 == bVar3),
                          CONCAT16(-(bVar13 == bVar3),
                                   CONCAT15(-(bVar12 == bVar3),
                                            CONCAT14(-(bVar11 == bVar3),
                                                     CONCAT13(-(bVar10 == bVar3),
                                                              CONCAT12(-(bVar9 == bVar3),
                                                                       CONCAT11(-(bVar7 == bVar3),
                                                                                -((byte)uVar8 ==
                                                                                 bVar3)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar4 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar6 * 0x18) == *param_2) {
        return uVar2 + uVar6;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
  return 0;
}



/* Entry: 1078111a8; end: 1078111bb;  */

void FUN_1078111a8(void)

{
  func_0x0001078111c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107811948; end: 107811953;  */

undefined ** FUN_107811948(void)

{
  return &PTR_DAT_1109dff88;
}



/* Entry: 107811ac0; end: 107811b0b;  */

long * FUN_107811ac0(long param_1,long *param_2,ushort *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *param_3 < *(ushort *)(plVar3 + 4)) {
        plVar4 = (long *)*plVar3;
        plVar1 = plVar3;
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_107811b08;
      }
      if (*param_3 <= *(ushort *)(plVar3 + 4)) break;
      plVar1 = plVar3 + 1;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_107811b08:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 107811c8c; end: 107811cff;  */

void FUN_107811c8c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001078122e0();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  func_0x000107811d88(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107811f54; end: 107811f87;  */

void FUN_107811f54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107278b70(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}



/* Entry: 10781212c; end: 107812623;  */

void FUN_10781212c(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x19;
  byte unaff_w20;
  
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
  *(ulong *)(param_1 + -8) =
       *(long *)(param_1 + -8) - (ulong)(*(char *)(param_1 + param_2) == -0x80);
  uVar1 = *(ulong *)(unaff_x19 + 0x10);
  *(byte *)(param_1 + param_2) = unaff_w20 & 0x7f;
  *(byte *)(param_1 + (uVar1 & param_2 - 7U) + (uVar1 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 107812ce4; end: 107812e53;  */

void FUN_107812ce4(undefined8 *param_1,int *param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  double dStack_60;
  int *piStack_58;
  
  piVar6 = param_2;
  func_0x0001096f6e38();
  piStack_58 = piVar6;
  func_0x000107813830();
  func_0x0001096f69f4(piVar6);
  if (piStack_58[1] != 0) {
    piStack_58[0xe] = 4;
  }
  func_0x0001078138ac(param_2);
  uVar2 = piStack_58[0x18];
  lVar9 = *(long *)(piStack_58 + 0x1c);
  piVar6 = piStack_58;
  func_0x0001096f6f94(piStack_58,0);
  uVar8 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  while( true ) {
    bVar3 = *(byte *)((long)param_3 + 0x17);
    uVar7 = param_3[1];
    if (-1 < (char)bVar3) {
      uVar7 = (ulong)bVar3;
    }
    if (uVar7 <= uVar8) break;
    fVar10 = 0.0;
    puVar4 = (uint *)(lVar9 + 8);
    piVar5 = piVar6;
    for (uVar7 = (ulong)uVar2; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (uVar8 == *puVar4) {
        fVar10 = fVar10 + (float)*piVar5 * 0.015625;
      }
      puVar4 = puVar4 + 5;
      piVar5 = piVar5 + 5;
    }
    plVar1 = (long *)*param_3;
    if (-1 < (char)bVar3) {
      plVar1 = param_3;
    }
    dStack_60 = *(double *)(param_4 + 8) * (double)fVar10;
    func_0x000107812e54(param_1,(long)plVar1 + uVar8 * 2,&dStack_60);
    uVar8 = uVar8 + 1;
  }
  func_0x00010781311c(&piStack_58);
  return;
}



/* Entry: 107813288; end: 1078132ab;  */

void FUN_107813288(void)

{
  func_0x0001078132ac();
  return;
}



/* Entry: 107813494; end: 1078134cb;  */

void FUN_107813494(long *param_1,long param_2)

{
  func_0x0001078138fc();
  func_0x000107813560(param_1 + 2,*param_1,param_1[1],
                      *(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000107813840();
  return;
}



/* Entry: 1078136c8; end: 107813727;  */

void FUN_1078136c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x80) {
    func_0x00010724b3d8(param_3 + -0x48);
  }
  return;
}



/* Entry: 107813e24; end: 107813e5f;  */

void FUN_107813e24(long param_1)

{
  func_0x00010781bf34(param_1 + 0x10);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return;
}



/* Entry: 1078144d0; end: 1078144f3;  */

void FUN_1078144d0(long *param_1)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  if (0x3f < (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  func_0x0001078230e4(param_1,0x7f);
  func_0x0001075533fc();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000107822f40();
      func_0x0001078229c4();
      func_0x0001078222a8();
      func_0x00010781df58();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1078152ec; end: 107816537;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107815a88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1078152ec(undefined4 *param_1,undefined8 param_2,float param_3,undefined4 param_4,
                  long ****param_5,undefined8 *param_6)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  ulong *puVar4;
  long ****pppplVar5;
  long lVar6;
  byte bVar7;
  ushort uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined *puVar15;
  byte bVar16;
  char cVar17;
  code *pcVar18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  undefined8 *puVar23;
  long **pplVar24;
  undefined8 extraout_x8;
  ulong uVar25;
  long ****extraout_x8_00;
  code *extraout_x8_01;
  ulong extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  double extraout_x8_05;
  long ****extraout_x8_06;
  code *extraout_x8_07;
  ulong extraout_x8_08;
  long ****pppplVar26;
  long lVar27;
  long ****extraout_x8_09;
  code *extraout_x8_10;
  long ***extraout_x8_11;
  long ****pppplVar28;
  ulong extraout_x8_12;
  double extraout_x8_13;
  code *extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  ulong extraout_x8_17;
  double extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long ****pppplVar29;
  long ****extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  ulong extraout_x8_25;
  long ****extraout_x8_26;
  ulong extraout_x8_27;
  long extraout_x9;
  long ****extraout_x9_00;
  long ****extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long ***ppplVar30;
  long ***extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  long *extraout_x10;
  long *plVar31;
  long *extraout_x10_00;
  long ****extraout_x10_01;
  long ****extraout_x11;
  long ****extraout_x11_00;
  long extraout_x12;
  long *plVar32;
  long ****extraout_x13;
  undefined8 extraout_x13_00;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  long ****pppplVar37;
  long ****pppplVar38;
  long ****pppplVar39;
  long ****pppplVar40;
  long ****pppplVar41;
  long **pplVar42;
  long *plVar43;
  long lVar44;
  long **pplVar45;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined4 uVar46;
  byte bStack_ce8;
  long ***ppplStack_ce0;
  long ***appplStack_cd0 [2];
  long ***ppplStack_cc0;
  long **pplStack_cb8;
  long **pplStack_cb0;
  long *plStack_ca0;
  long *plStack_c98;
  undefined1 auStack_c88 [808];
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_940;
  long lStack_938;
  undefined8 uStack_930;
  long ***appplStack_920 [2];
  long ***ppplStack_910;
  double dStack_908;
  long ***ppplStack_900;
  long ***ppplStack_8f8;
  long **pplStack_8f0;
  char cStack_8c8;
  undefined1 auStack_8c0 [8];
  undefined1 auStack_8b8 [40];
  undefined1 auStack_890 [8];
  long lStack_888;
  undefined1 auStack_208 [74];
  byte bStack_1be;
  char cStack_1bd;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float fStack_188;
  undefined4 uStack_184;
  byte bStack_168;
  undefined1 auStack_160 [56];
  undefined2 uStack_128;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107821e20();
  lStack_938 = 0;
  uStack_940 = 0;
  uStack_930 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_950 = 0;
  uStack_80 = extraout_x8;
  func_0x0001074d0f04(&uStack_940,0x20);
  func_0x0001074d2c98(&uStack_960,0x20);
  plVar43 = (long *)*param_6;
  lVar2 = *plVar43;
  func_0x00010740b5f8(auStack_c88,plVar43[1] + 0x10,param_5 + 8);
  lVar33 = plVar43[1];
  pppplVar37 = param_5 + 0x22f;
  func_0x0001078139a8(pppplVar37,plVar43 + 4);
  func_0x00010781c4b0(auStack_8c0,pppplVar37);
  (*(code *)(*param_5)[0xb])(&uStack_1a0,param_5,lVar2,auStack_c88,0x2000);
  func_0x00010781c4d8(auStack_890,lVar2,lVar33,param_5 + 8,auStack_8c0,&uStack_1a0);
  func_0x0001077f79bc(auStack_8b8);
  func_0x0001078175f0(&plStack_ca0,*plVar43,plVar43 + 0x12);
  if ((*(char *)(param_5 + 0x22d) == '\x01') &&
     (pppplVar37 = (long ****)param_5[0x22b], pppplVar37 != (long ****)0x0)) {
    iVar22 = (int)param_5[1];
    func_0x0001078173dc();
    plVar31 = plStack_c98;
    plVar32 = plStack_ca0;
    puVar15 = PTR___ZSt7nothrow_1103469d8;
    if (iVar22 != 0) {
      pppplVar40 = (long ****)((long)plStack_c98 - (long)plStack_ca0 >> 3);
      uStack_198 = (long ****)0x0;
      uStack_1a0 = (long ****)0x0;
      ppplStack_cc0 = (long ***)pppplVar37;
      pppplVar37 = pppplVar40;
      if ((long)pppplVar40 < 0x81) {
        pppplVar37 = (long ****)0x0;
      }
      else {
        for (; pppplVar37 != (long ****)0x0; pppplVar37 = (long ****)((ulong)pppplVar37 >> 1)) {
          lVar33 = (long)pppplVar37 << 3;
          __ZnwmRKSt9nothrow_t(lVar33,puVar15);
          if (lVar33 != 0) goto LAB_107815494;
        }
        lVar33 = 0;
LAB_107815494:
        ppplStack_900 = (long ***)0x0;
        ppplStack_8f8 = (long ***)pppplVar37;
        func_0x000107820b10(&uStack_1a0,lVar33);
        uStack_198 = pppplVar37;
        FUN_107820b28(&ppplStack_900);
      }
      func_0x000107820928(plVar32,plVar31,&ppplStack_cc0,pppplVar40,uStack_1a0,pppplVar37);
      FUN_107820b28(&uStack_1a0);
    }
  }
  uVar25 = 0;
  for (plVar32 = plStack_ca0; plVar32 != plStack_c98; plVar32 = plVar32 + 1) {
    uVar25 = (ulong)(uint)((int)uVar25 +
                          (int)(((*(long **)(*plVar32 + 0x5b8))[1] - **(long **)(*plVar32 + 0x5b8))
                               / 0x38));
  }
  uVar8 = *(ushort *)(lVar2 + 0x74);
  pppplVar38 = (long ****)(ulong)uVar8;
  puVar3 = (uint *)param_6[6];
  puVar4 = (ulong *)param_6[7];
  uVar34 = param_6[8];
  bVar7 = *(byte *)(plVar43[1] + 4);
  pppplVar40 = (long ****)param_6[4];
  pppplVar5 = (long ****)param_6[5];
  func_0x00010781ca54(pppplVar40,
                      (long)((float)((long)pppplVar40[3] + uVar25) / *(float *)(pppplVar40 + 4)));
  ppplStack_ce0 = (long ***)0x0;
  pplVar42 = (long **)&uStack_1a0;
  pppplVar37 = pppplVar5 + 2;
  uVar35 = (uint)uVar8;
  pppplVar39 = pppplVar5;
  do {
    pppplVar28 = (long ****)((long)plStack_c98 - (long)plStack_ca0 >> 3);
    uVar20 = (long ****)ppplStack_ce0 == pppplVar28;
    if (pppplVar28 <= ppplStack_ce0) {
      func_0x000107822bb4();
      if ((extraout_x8_27 & 1) == 0) {
        *(ushort *)(lVar2 + 0x74) = *(ushort *)(lVar2 + 0x74) & 0xff7f;
      }
      ppplStack_900 = (long ***)(lVar2 + 0xa5c);
      uStack_190 = *(long *)(lStack_888 + 0x218) + 0xc;
      uStack_198 = (long ****)(plVar43 + 2);
      uStack_1a0 = (long ****)ppplStack_900;
      func_0x0001074a113c(param_5 + 0x24c,&UNK_10dd5b8f9,&ppplStack_900,&uStack_1a0);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 4) = uStack_958;
      *(undefined8 *)(param_1 + 2) = uStack_960;
      *(undefined8 *)(param_1 + 6) = uStack_950;
      uStack_960 = 0;
      uStack_958 = 0;
      uStack_950 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(long *)(param_1 + 0xc) = lStack_938;
      *(undefined8 *)(param_1 + 10) = uStack_940;
      *(undefined8 *)(param_1 + 0xe) = uStack_930;
      uStack_940 = 0;
      lStack_938 = 0;
      uStack_930 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x1a) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x1e) = 0;
      param_1[0x22] = 0x3f800000;
      param_1[0x24] = 0;
      func_0x00010745c408(&plStack_ca0);
      func_0x0001077f79bc(auStack_208);
      func_0x0001074ae918(&uStack_960);
      func_0x00010748ab6c(&uStack_940);
      func_0x000107821dac(uStack_80);
      if ((bool)uVar20) {
        return;
      }
      ___stack_chk_fail();
LAB_10781632c:
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x107816334);
      (*pcVar18)();
    }
    lVar33 = plStack_ca0[(long)ppplStack_ce0];
    if ((((uint)pppplVar38 >> 0xb & 1) == 0) ||
       (uVar20 = *(char *)(lVar33 + 0x655) == '\x01', !(bool)uVar20)) {
      func_0x000107822bb4();
      if ((extraout_x8_02 & 1) == 0) {
        bStack_ce8 = 0;
LAB_107815604:
        pppplVar40 = (long ****)param_6[3];
        func_0x0001078201d4(pppplVar40,*(undefined4 *)(lVar33 + 0x658));
        if (pppplVar40 == (long ****)0x0) {
          func_0x000107822818(*(undefined8 *)(lVar33 + 0x5b8));
          if ((bool)uVar20) {
LAB_10781564c:
            uVar36 = 0;
          }
          else {
            func_0x000107822a94(lStack_888);
            (*extraout_x8_03)();
            if (((ulong)pppplVar40 & 1) != 0) goto LAB_10781564c;
            uVar36 = (uint)pppplVar40 ^ 1;
            if (*(char *)(lVar33 + 0x5c8) == '\x03') {
              func_0x000107822bc0();
              for (pppplVar38 = (long ****)ppplStack_ce0; pppplVar38 != pppplVar39;
                  pppplVar38 = pppplVar38 + 7) {
                func_0x000107822e28();
                func_0x000107822cfc();
                func_0x000107822e08();
                if ((pplVar42 != (long **)0x0) && (((ulong)pplVar42[5] & 1) != 0))
                goto LAB_107815618;
              }
            }
            else {
              if (*(char *)(lVar33 + 0x5c8) == '\x02') {
                func_0x000107822bc0();
                pppplVar38 = (long ****)ppplStack_ce0;
                do {
                  if (pppplVar38 == pppplVar39) goto LAB_107815650;
                  func_0x000107822e28();
                  func_0x000107822cfc();
                  func_0x000107822e08();
                  pppplVar38 = pppplVar38 + 7;
                } while (pplVar42 == (long **)0x0);
                goto LAB_107815618;
              }
              uVar36 = 1;
            }
          }
LAB_107815650:
          cVar17 = cStack_1bd;
          bVar16 = bStack_1be;
          pppplVar39 = (long ****)(ulong)bStack_1be;
          pppplVar40 = param_5;
          func_0x000107816538(param_5,lVar33,auStack_890);
          uVar1 = 0;
          if (bVar16 != 1) {
            uVar1 = uVar36;
          }
          pppplVar38 = pppplVar40;
          if (uVar1 == 1 && cVar17 != '\x01') {
            plVar32 = *(long **)(lVar33 + 0x5b8);
            lVar6 = plVar32[1];
            for (lVar44 = *plVar32; uVar20 = lVar44 - lVar6 < 0, lVar44 != lVar6;
                lVar44 = lVar44 + 0x38) {
              plVar32 = (long *)param_6[4];
              func_0x00010724ef84(&ppplStack_900,lVar44);
              pppplVar38 = (long ****)(plVar32 + 3);
              func_0x000100102e7c(pppplVar38,&ppplStack_900);
              pppplVar29 = (long ****)plVar32[1];
              pppplVar28 = pppplVar38;
              if (pppplVar29 != (long ****)0x0) {
                uVar25 = (long)pppplVar29 - 1;
                if (((ulong)pppplVar29 & uVar25) == 0) {
                  pppplVar39 = (long ****)(uVar25 & (ulong)pppplVar38);
                  uVar20 = false;
                }
                else {
                  uVar20 = (long)pppplVar38 - (long)pppplVar29 < 0;
                  pppplVar39 = pppplVar38;
                  if (pppplVar29 <= pppplVar38) {
                    uVar9 = 0;
                    if (pppplVar29 != (long ****)0x0) {
                      uVar9 = (ulong)pppplVar38 / (ulong)pppplVar29;
                    }
                    pppplVar39 = (long ****)((long)pppplVar38 - uVar9 * (long)pppplVar29);
                  }
                }
                pppplVar41 = *(long *****)(*plVar32 + (long)pppplVar39 * 8);
                if (pppplVar41 != (long ****)0x0) {
                  do {
                    while( true ) {
                      pppplVar41 = (long ****)*pppplVar41;
                      if (pppplVar41 == (long ****)0x0) goto LAB_107815a34;
                      pppplVar26 = (long ****)pppplVar41[1];
                      uVar20 = (long)pppplVar26 - (long)pppplVar38 < 0;
                      if (pppplVar26 != pppplVar38) break;
                      pppplVar28 = pppplVar41 + 2;
                      func_0x0001000e107c(pppplVar28,&ppplStack_900);
                      if (((ulong)pppplVar28 & 1) != 0) goto LAB_107815b58;
                    }
                    if (((ulong)pppplVar29 & uVar25) == 0) {
                      pppplVar26 = (long ****)((ulong)pppplVar26 & uVar25);
                    }
                    else if (pppplVar29 <= pppplVar26) {
                      uVar9 = 0;
                      if (pppplVar29 != (long ****)0x0) {
                        uVar9 = (ulong)pppplVar26 / (ulong)pppplVar29;
                      }
                      pppplVar26 = (long ****)((long)pppplVar26 - uVar9 * (long)pppplVar29);
                    }
                    uVar20 = (long)pppplVar26 - (long)pppplVar39 < 0;
                  } while (pppplVar26 == pppplVar39);
                }
              }
LAB_107815a34:
              func_0x000107822558();
              pppplVar41 = (long ****)(plVar32 + 2);
              uStack_190 = 1;
              *pppplVar28 = (long ***)0x0;
              pppplVar28[1] = (long ***)pppplVar38;
              pppplVar28[4] = (long ***)pplStack_8f0;
              pppplVar28[3] = ppplStack_8f8;
              pppplVar28[2] = ppplStack_900;
              ppplStack_8f8 = (long ***)0x0;
              ppplStack_900 = (long ***)0x0;
              pplStack_8f0 = (long **)0x0;
              *(undefined1 *)(pppplVar28 + 5) = 0;
              uStack_1a0 = pppplVar28;
              uStack_198 = pppplVar41;
              func_0x000107822290(plVar32[3]);
              if (pppplVar29 == (long ****)0x0) {
LAB_107815a90:
                func_0x000107821dc0((long)pppplVar29 << 1);
                func_0x00010781ca54(plVar32);
                pppplVar29 = (long ****)plVar32[1];
                if (((ulong)pppplVar29 & (long)pppplVar29 - 1U) == 0) {
                  pppplVar39 = (long ****)((long)pppplVar29 - 1U & (ulong)pppplVar38);
                }
                else {
                  pppplVar39 = pppplVar38;
                  if (pppplVar29 <= pppplVar38) {
                    uVar25 = 0;
                    if (pppplVar29 != (long ****)0x0) {
                      uVar25 = (ulong)pppplVar38 / (ulong)pppplVar29;
                    }
                    pppplVar39 = (long ****)((long)pppplVar38 - uVar25 * (long)pppplVar29);
                  }
                }
              }
              else {
                param_3 = (float)pppplVar29;
                func_0x000107822234(CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ),(int)plVar32[4]);
                if ((bool)uVar20) goto LAB_107815a90;
              }
              lVar27 = *plVar32;
              if (*(long *)(lVar27 + (long)pppplVar39 * 8) == 0) {
                *pppplVar28 = *pppplVar41;
                *pppplVar41 = (long ***)pppplVar28;
                *(long *****)(lVar27 + (long)pppplVar39 * 8) = pppplVar41;
                if (*pppplVar28 != (long ***)0x0) {
                  pppplVar38 = (long ****)(*pppplVar28)[1];
                  if (((ulong)pppplVar29 & (long)pppplVar29 - 1U) == 0) {
                    pppplVar38 = (long ****)((ulong)pppplVar38 & (long)pppplVar29 - 1U);
                  }
                  else if (pppplVar29 <= pppplVar38) {
                    uVar25 = 0;
                    if (pppplVar29 != (long ****)0x0) {
                      uVar25 = (ulong)pppplVar38 / (ulong)pppplVar29;
                    }
                    pppplVar38 = (long ****)((long)pppplVar38 - uVar25 * (long)pppplVar29);
                  }
                  *(long *****)(lVar27 + (long)pppplVar38 * 8) = pppplVar28;
                }
              }
              else {
                func_0x000107822b04();
              }
              uStack_1a0 = (long ****)0x0;
              plVar32[3] = plVar32[3] + 1;
              func_0x00010781cb70(&uStack_1a0);
              pppplVar41 = pppplVar28;
LAB_107815b58:
              *(byte *)(pppplVar41 + 5) = ((byte)pppplVar40 | (byte)((ulong)pppplVar40 >> 8)) & 1;
              pppplVar38 = &ppplStack_900;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            }
          }
          if (*(int *)(lVar33 + 0x658) != -1) {
            func_0x000107822a94(lStack_888);
            (*extraout_x8_04)();
            if (((ulong)pppplVar38 & 1) == 0) {
              pppplVar38 = (long ****)param_6[3];
              func_0x000107426444(pppplVar38,(int *)(lVar33 + 0x658));
            }
          }
          *(int *)(param_5 + 0x22a) = *(int *)(param_5 + 0x22a) + 1;
          if (((ulong)pppplVar40 & 0x101) != 0) {
            *(int *)((long)param_5 + 0x1154) = *(int *)((long)param_5 + 0x1154) + 1;
            func_0x00010782229c();
            pplVar42 = (long **)&uStack_1a0;
            ppplStack_cc0 = (long ***)pppplVar38;
            pplStack_cb8 = (long **)extraout_x8_05;
            if (extraout_x8_05 != 0.0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_00 != 0);
            }
            (*(code *)(*pppplVar38)[7])(&uStack_1a0);
            puVar23 = &uStack_1a0;
            func_0x000107330078();
            ppplStack_900 = (long ***)(double)(int)**(short **)*puVar23;
            ppplStack_8f8 = (long ***)(double)(int)(*(short **)*puVar23)[1];
            func_0x000107822d68(&uStack_1a0,&ppplStack_900);
            dVar12 = (double)uStack_1a0 / (double)CONCAT44(uStack_184,fStack_188);
            dVar14 = (double)uStack_198 / (double)CONCAT44(uStack_184,fStack_188);
            auVar10[8] = SUB81(dVar14,0);
            auVar10._0_8_ = dVar12;
            auVar10[9] = (char)((ulong)dVar14 >> 8);
            auVar10[10] = (char)((ulong)dVar14 >> 0x10);
            auVar10[0xb] = (char)((ulong)dVar14 >> 0x18);
            auVar10[0xc] = (char)((ulong)dVar14 >> 0x20);
            auVar10[0xd] = (char)((ulong)dVar14 >> 0x28);
            auVar10[0xe] = (char)((ulong)dVar14 >> 0x30);
            auVar10[0xf] = (char)((ulong)dVar14 >> 0x38);
            fVar11 = (float)dVar12;
            in_b0 = SUB41(fVar11,0);
            in_register_00005001 = (undefined1)((uint)fVar11 >> 8);
            in_register_00005002 = (undefined1)((uint)fVar11 >> 0x10);
            in_register_00005003 = (undefined1)((uint)fVar11 >> 0x18);
            fVar13 = (float)auVar10._8_8_;
            in_register_00005004 = SUB41(fVar13,0);
            in_register_00005005 = (undefined1)((uint)fVar13 >> 8);
            in_register_00005006 = (undefined1)((uint)fVar13 >> 0x10);
            in_register_00005007 = (undefined1)((uint)fVar13 >> 0x18);
            appplStack_cd0[0] =
                 (long ***)
                 CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,fVar11))));
            func_0x000107822d1c(param_5 + 8,param_5[0x254],param_5[0x255]);
            uVar46 = SUB84(uStack_1a0,0);
            uStack_1a0 = (long ****)
                         CONCAT44(uVar46,CONCAT13(in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))));
            uStack_198 = (long ****)CONCAT44(param_4,param_3);
            func_0x000107822d1c(param_5 + 8,param_5[0x251],param_5[0x252]);
            uStack_190 = CONCAT44(uVar46,CONCAT13(in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))));
            fStack_188 = param_3;
            uStack_184 = param_4;
            func_0x0001074b2900(&ppplStack_900,&uStack_1a0,2);
            dStack_908 = (double)pplStack_cb8;
            ppplStack_910 = ppplStack_cc0;
            ppplStack_cc0 = (long ***)0x0;
            pplStack_cb8 = (long **)0x0;
            func_0x000107278b70(appplStack_920,(undefined8 *)(lVar33 + 0x5b8));
            pppplVar38 = (long ****)(ulong)uVar35;
            param_3 = *(float *)(param_6 + 2);
            func_0x0001074d5004(CONCAT17(in_register_00005007,
                                         CONCAT16(in_register_00005006,
                                                  CONCAT15(in_register_00005005,
                                                           CONCAT14(in_register_00005004,
                                                                    CONCAT13(in_register_00005003,
                                                                             CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                                *(undefined4 *)((long)param_6 + 0xc),&uStack_1a0,&ppplStack_910,
                                appplStack_cd0,&ppplStack_900,appplStack_920);
            func_0x00010748b9dc(&uStack_940,&uStack_1a0);
            func_0x00010748be00(&uStack_1a0);
            func_0x00010726b09c(appplStack_920);
            func_0x000107267e44(&ppplStack_910);
            *(byte *)(lStack_938 + -8) = bStack_ce8 & 1;
            pppplVar40 = &ppplStack_900;
            func_0x00010748be30();
            func_0x000107822ce0();
            if (((uVar8 >> 0xb & 1) == 0) || (*(char *)(lVar33 + 0x655) != '\x01'))
            goto LAB_107815dcc;
            func_0x00010782229c();
            ppplStack_900 = (long ***)pppplVar40;
            ppplStack_8f8 = (long ***)extraout_x8_06;
            if (extraout_x8_06 != (long ****)0x0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_01 != 0);
            }
            func_0x0001078229b8();
            (*extraout_x8_07)();
            func_0x00010726236c(&uStack_1a0);
            func_0x000107330fdc(&ppplStack_900);
            uVar20 = (int)(bStack_168 - 1) < 0;
            if (bStack_168 == 1) {
              func_0x00010724ef84(&ppplStack_cc0,&uStack_1a0);
              uVar36 = *puVar3;
              pppplVar40 = pppplVar5 + 3;
              func_0x000100102e7c(pppplVar40,&ppplStack_cc0);
              pppplVar38 = (long ****)pppplVar5[1];
              pppplVar28 = pppplVar40;
              if (pppplVar38 != (long ****)0x0) {
                pplVar42 = (long **)((long)pppplVar38 + -1);
                if (((ulong)pppplVar38 & (ulong)pplVar42) == 0) {
                  pppplVar39 = (long ****)((ulong)pplVar42 & (ulong)pppplVar40);
                  uVar20 = false;
                }
                else {
                  uVar20 = (long)pppplVar40 - (long)pppplVar38 < 0;
                  pppplVar39 = pppplVar40;
                  if (pppplVar38 <= pppplVar40) {
                    uVar25 = 0;
                    if (pppplVar38 != (long ****)0x0) {
                      uVar25 = (ulong)pppplVar40 / (ulong)pppplVar38;
                    }
                    pppplVar39 = (long ****)((long)pppplVar40 - uVar25 * (long)pppplVar38);
                  }
                }
                pplVar45 = (*pppplVar5)[(long)pppplVar39];
                if (pplVar45 != (long **)0x0) {
                  do {
                    while( true ) {
                      pplVar45 = (long **)*pplVar45;
                      if (pplVar45 == (long **)0x0) goto LAB_107815f54;
                      pppplVar29 = (long ****)pplVar45[1];
                      uVar20 = (long)pppplVar29 - (long)pppplVar40 < 0;
                      if (pppplVar29 != pppplVar40) break;
                      pppplVar28 = (long ****)(pplVar45 + 2);
                      func_0x0001000e107c(pppplVar28,&ppplStack_cc0);
                      if (((ulong)pppplVar28 & 1) != 0) {
                        func_0x000107822374();
                        func_0x000107822aa4();
                        ppplStack_ce0 = (long ***)(ulong)uVar36;
                        goto LAB_107816210;
                      }
                    }
                    if (((ulong)pppplVar38 & (ulong)pplVar42) == 0) {
                      pppplVar29 = (long ****)((ulong)pppplVar29 & (ulong)pplVar42);
                    }
                    else if (pppplVar38 <= pppplVar29) {
                      uVar25 = 0;
                      if (pppplVar38 != (long ****)0x0) {
                        uVar25 = (ulong)pppplVar29 / (ulong)pppplVar38;
                      }
                      pppplVar29 = (long ****)((long)pppplVar29 - uVar25 * (long)pppplVar38);
                    }
                    uVar20 = (long)pppplVar29 - (long)pppplVar39 < 0;
                  } while (pppplVar29 == pppplVar39);
                }
              }
LAB_107815f54:
              pplVar42 = (long **)&uStack_1a0;
              func_0x000107822558();
              pplVar45 = pplStack_cb0;
              pplStack_8f0 = (long **)0x1;
              *pppplVar28 = (long ***)0x0;
              pppplVar28[1] = (long ***)pppplVar40;
              pppplVar28[3] = (long ***)pplStack_cb8;
              pppplVar28[2] = ppplStack_cc0;
              ppplStack_cc0 = (long ***)0x0;
              pplStack_cb8 = (long **)0x0;
              pplStack_cb0 = (long **)0x0;
              pppplVar28[4] = (long ***)pplVar45;
              pppplVar28[5] = (long ***)((ulong)bVar7 | (long)(ulong)uVar36 << 0x20);
              ppplStack_900 = (long ***)pppplVar28;
              ppplStack_8f8 = (long ***)pppplVar37;
              func_0x000107822290(pppplVar5[3]);
              if (pppplVar38 == (long ****)0x0) {
LAB_107815fac:
                func_0x00010782245c();
                bVar19 = (long ****)0x2 < pppplVar38;
                bVar21 = pppplVar38 == (long ****)0x3;
                func_0x000107821e0c();
                pppplVar39 = extraout_x8_22;
                if (!bVar19 || bVar21) {
                  pppplVar39 = extraout_x9_00;
                }
                if ((long)pppplVar39 - 1U == 0) {
                  pppplVar39 = (long ****)0x2;
                }
                else if (((ulong)pppplVar39 & (long)pppplVar39 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                }
                pppplVar38 = (long ****)pppplVar5[1];
                uVar20 = pppplVar39 == pppplVar38;
                if (pppplVar38 < pppplVar39) {
LAB_107815ff8:
                  pppplVar38 = pppplVar39;
                  if ((ulong)pppplVar38 >> 0x3d != 0) goto LAB_10781632c;
                  lVar33 = (long)pppplVar38 << 3;
                  __Znwm(lVar33);
                  func_0x000107820208(pppplVar5,lVar33);
                  pppplVar39 = (long ****)0x0;
                  pppplVar5[1] = (long ***)pppplVar38;
                  pppplVar28 = pppplVar37;
                  while (bVar21 = pppplVar39 <= pppplVar38, pppplVar38 != pppplVar39) {
                    func_0x000107822324();
                    pppplVar39 = extraout_x9_01;
                    pppplVar28 = extraout_x13;
                  }
                  uVar20 = 1;
                  if (*pppplVar28 != (long ***)0x0) {
                    func_0x000107823078();
                    pppplVar39 = extraout_x11;
                    if (bVar21) {
                      pppplVar39 = (long ****)((long)extraout_x11 - extraout_x12 * (long)pppplVar38)
                      ;
                    }
                    uVar20 = ((ulong)pppplVar38 & extraout_x9_02) == 0;
                    if ((bool)uVar20) {
                      pppplVar39 = (long ****)((ulong)extraout_x11 & extraout_x9_02);
                    }
                    *(undefined8 *)(extraout_x8_23 + (long)pppplVar39 * 8) = extraout_x13_00;
                    lVar33 = extraout_x8_23;
                    uVar25 = extraout_x9_02;
                    plVar32 = extraout_x10;
                    while (plVar31 = plVar32, plVar32 = (long *)*plVar31, plVar32 != (long *)0x0) {
                      pppplVar28 = (long ****)plVar32[1];
                      if (((ulong)pppplVar38 & uVar25) == 0) {
                        pppplVar28 = (long ****)((ulong)pppplVar28 & uVar25);
                      }
                      else if (pppplVar38 <= pppplVar28) {
                        uVar9 = 0;
                        if (pppplVar38 != (long ****)0x0) {
                          uVar9 = (ulong)pppplVar28 / (ulong)pppplVar38;
                        }
                        pppplVar28 = (long ****)((long)pppplVar28 - uVar9 * (long)pppplVar38);
                      }
                      uVar20 = pppplVar28 == pppplVar39;
                      if (!(bool)uVar20) {
                        if (*(long *)(lVar33 + (long)pppplVar28 * 8) == 0) {
                          *(long **)(lVar33 + (long)pppplVar28 * 8) = plVar31;
                          pppplVar39 = pppplVar28;
                        }
                        else {
                          *plVar31 = *plVar32;
                          func_0x000107821df4();
                          lVar33 = extraout_x8_24;
                          uVar25 = extraout_x9_03;
                          plVar32 = extraout_x10_00;
                          pppplVar39 = extraout_x11_00;
                        }
                      }
                    }
                  }
                }
                else if (pppplVar39 < pppplVar38) {
                  pppplVar28 = (long ****)(long)((float)pppplVar5[3] / *(float *)(pppplVar5 + 4));
                  if ((pppplVar38 < (long ****)0x3) ||
                     (((ulong)pppplVar38 & (long)pppplVar38 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else {
                    func_0x000107821d54();
                  }
                  if (pppplVar39 <= pppplVar28) {
                    pppplVar39 = pppplVar28;
                  }
                  uVar20 = pppplVar39 == pppplVar38;
                  if (pppplVar39 < pppplVar38) {
                    if (pppplVar39 != (long ****)0x0) goto LAB_107815ff8;
                    func_0x000107820208(pppplVar5,0);
                    pppplVar38 = (long ****)0x0;
                    pppplVar5[1] = (long ***)0x0;
                  }
                  else {
                    pppplVar38 = (long ****)pppplVar5[1];
                  }
                }
                func_0x0001078225d8();
                if ((bool)uVar20) {
                  pppplVar39 = (long ****)(extraout_x8_25 & (ulong)pppplVar40);
                }
                else {
                  pppplVar39 = pppplVar40;
                  if (pppplVar38 <= pppplVar40) {
                    uVar25 = 0;
                    if (pppplVar38 != (long ****)0x0) {
                      uVar25 = (ulong)pppplVar40 / (ulong)pppplVar38;
                    }
                    pppplVar39 = (long ****)((long)pppplVar40 - uVar25 * (long)pppplVar38);
                  }
                }
              }
              else {
                param_3 = (float)pppplVar38;
                func_0x000107822234(CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ),*(undefined4 *)(extraout_x9 + 0x20));
                if ((bool)uVar20) goto LAB_107815fac;
              }
              ppplVar30 = *pppplVar5;
              pplVar45 = ppplVar30[(long)pppplVar39];
              if (pplVar45 == (long **)0x0) {
                *ppplStack_900 = (long **)*pppplVar37;
                *pppplVar37 = ppplStack_900;
                ppplVar30[(long)pppplVar39] = (long **)pppplVar37;
                if ((long ***)*ppplStack_900 != (long ***)0x0) {
                  pppplVar40 = (long ****)(*ppplStack_900)[1];
                  if (((ulong)pppplVar38 & (long)pppplVar38 - 1U) == 0) {
                    pppplVar40 = (long ****)((ulong)pppplVar40 & (long)pppplVar38 - 1U);
                  }
                  else if (pppplVar38 <= pppplVar40) {
                    func_0x000107822b90();
                    ppplStack_900 = (long ***)extraout_x8_26;
                    ppplVar30 = extraout_x9_04;
                    pppplVar40 = extraout_x10_01;
                  }
                  ppplVar30[(long)pppplVar40] = (long **)ppplStack_900;
                }
              }
              else {
                *ppplStack_900 = (long **)*pplVar45;
                *pplVar45 = (long *)ppplStack_900;
              }
              ppplStack_900 = (long ***)0x0;
              pppplVar5[3] = (long ***)((long)pppplVar5[3] + 1);
              func_0x0001074d2d14(&ppplStack_900);
              func_0x000107822374();
              *puVar3 = *puVar3 + 1;
              pppplVar38 = (long ****)(ulong)uVar35;
            }
LAB_107816210:
            *puVar4 = *puVar4 + 1;
            pppplVar40 = (long ****)&uStack_1a0;
            goto LAB_107815dc8;
          }
          func_0x00010782229c();
          ppplStack_900 = (long ***)pppplVar38;
          ppplStack_8f8 = (long ***)extraout_x8_09;
          if (extraout_x8_09 != (long ****)0x0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_02 != 0);
          }
          func_0x0001078229b8();
          (*extraout_x8_10)();
          func_0x000107822df8();
          func_0x00010782229c();
          ppplStack_cc0 = (long ***)pppplVar38;
          pplStack_cb8 = (long **)extraout_x8_11;
          if (extraout_x8_11 != (long ***)0x0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_03 != 0);
          }
          func_0x0001074d4d04(auStack_160);
          uStack_128 = 0;
          func_0x000104c2fe00(auStack_120,plVar43 + 4);
          func_0x000104c2fe00(auStack_e8,plVar43 + 0xb);
          uStack_b0 = 7;
          uStack_a8 = 0;
          uStack_a0 = 0;
          func_0x000107269c1c(&uStack_a8);
          uStack_98 = 0;
          uStack_88 = 0;
          func_0x000107822410();
          func_0x000107822950();
          func_0x000107822ce0();
          pppplVar40 = &ppplStack_900;
          func_0x000107330fdc();
        }
LAB_107815618:
        pplVar42 = (long **)&uStack_1a0;
        pppplVar38 = (long ****)(ulong)uVar35;
      }
    }
    else {
      func_0x00010782229c();
      uStack_1a0 = pppplVar40;
      uStack_198 = extraout_x8_00;
      if (extraout_x8_00 != (long ****)0x0) {
        do {
          func_0x000107821f0c();
        } while (extraout_w10 != 0);
      }
      func_0x0001078229b8();
      (*extraout_x8_01)();
      func_0x00010726236c(&ppplStack_900);
      func_0x000107330fdc(&uStack_1a0);
      if (cStack_8c8 == '\x01') {
        func_0x00010724ef84(&ppplStack_cc0,&ppplStack_900);
      }
      else {
        func_0x00010002b838(&ppplStack_cc0,"");
      }
      ppplVar30 = (long ***)pplStack_cb8;
      if (-1 < (long)pplStack_cb0) {
        ppplVar30 = (long ***)((ulong)pplStack_cb0 >> 0x38);
      }
      if (ppplVar30 == (long ***)0x0) {
        func_0x000107822bb4();
        uVar25 = extraout_x8_08;
      }
      else {
        pppplVar38 = (long ****)pppplVar5[1];
        if ((pppplVar38 != (long ****)0x0) && (pppplVar5[3] != (long ***)0x0)) {
          pppplVar40 = pppplVar5 + 3;
          func_0x000100102e7c(pppplVar40,&ppplStack_cc0);
          pppplVar39 = (long ****)((long)pppplVar38 + -1);
          if (((ulong)pppplVar38 & (ulong)pppplVar39) == 0) {
            ppplStack_ce0 = (long ***)((ulong)pppplVar40 & (ulong)pppplVar39);
          }
          else {
            ppplStack_ce0 = (long ***)pppplVar40;
            if (pppplVar38 <= pppplVar40) {
              uVar25 = 0;
              if (pppplVar38 != (long ****)0x0) {
                uVar25 = (ulong)pppplVar40 / (ulong)pppplVar38;
              }
              ppplStack_ce0 = (long ***)((long)pppplVar40 - uVar25 * (long)pppplVar38);
            }
          }
          pplVar42 = (long **)0x0;
          pplVar45 = (*pppplVar5)[(long)ppplStack_ce0];
          if ((*pppplVar5)[(long)ppplStack_ce0] != (long **)0x0) {
            do {
              while( true ) {
                pplVar42 = (long **)*pplVar45;
                if (pplVar42 == (long **)0x0) goto LAB_107815cac;
                pppplVar28 = (long ****)pplVar42[1];
                pplVar45 = pplVar42;
                if (pppplVar40 != pppplVar28) break;
                pplVar24 = pplVar42 + 2;
                func_0x0001000e107c(pplVar24,&ppplStack_cc0);
                if (((ulong)pplVar24 & 1) != 0) {
                  func_0x000107822bb4();
                  func_0x000107822aa4();
                  if ((extraout_x8_17 & 1) == 0) goto LAB_107815dc0;
                  bVar21 = true;
                  goto LAB_107815cbc;
                }
              }
              if (((ulong)pppplVar38 & (ulong)pppplVar39) == 0) {
                pppplVar28 = (long ****)((ulong)pppplVar28 & (ulong)pppplVar39);
              }
              else if (pppplVar38 <= pppplVar28) {
                uVar25 = 0;
                if (pppplVar38 != (long ****)0x0) {
                  uVar25 = (ulong)pppplVar28 / (ulong)pppplVar38;
                }
                pppplVar28 = (long ****)((long)pppplVar28 - uVar25 * (long)pppplVar38);
              }
            } while (pppplVar28 == (long ****)ppplStack_ce0);
          }
        }
LAB_107815cac:
        func_0x000107822bb4();
        func_0x000107822aa4();
        uVar25 = extraout_x8_12;
      }
      bVar21 = uVar34 == 0;
      if ((uVar25 & 1) == 0) {
LAB_107815cbc:
        ppplStack_910 = (long ***)(double)(float)*(undefined8 *)(lVar33 + 0x10);
        dStack_908 = (double)(float)((ulong)*(undefined8 *)(lVar33 + 0x10) >> 0x20);
        pppplVar40 = (long ****)&uStack_1a0;
        func_0x000107822d68(pppplVar40,&ppplStack_910);
        dVar12 = (double)CONCAT44(uStack_184,fStack_188);
        if (((dVar12 <= 0.0) || (1.0 < ABS((float)((double)uStack_1a0 / dVar12)))) ||
           (uVar20 = ABS((float)((double)uStack_198 / dVar12)) == 1.0,
           1.0 < ABS((float)((double)uStack_198 / dVar12)))) {
          func_0x00010782229c();
          ppplStack_910 = (long ***)pppplVar40;
          dStack_908 = extraout_x8_13;
          if (extraout_x8_13 != 0.0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_04 != 0);
          }
          func_0x0001078229b8();
          (*extraout_x8_14)();
          func_0x000107822df8();
          func_0x00010782229c();
          appplStack_920[0] = (long ***)pppplVar40;
          if (extraout_x8_15 != 0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_05 != 0);
          }
          func_0x000107822ec0();
          func_0x0001078229d4();
          func_0x000107822ea0();
          uStack_b0 = 8;
          func_0x00010782229c();
          appplStack_cd0[0] = (long ***)pppplVar40;
          if (extraout_x8_16 != 0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_06 != 0);
          }
          (*(code *)(*pppplVar40)[4])();
          func_0x000107268400(pplVar42 + 0x1f,pppplVar40);
          func_0x00010782285c();
          func_0x000107822410();
        }
        else {
          if ((bVar21) || (uVar20 = *puVar4 == uVar34, *puVar4 < uVar34)) {
            func_0x000107822374();
            func_0x00010724b3d8(&ppplStack_900);
            bStack_ce8 = *(byte *)(lVar33 + 0x655);
            goto LAB_107815604;
          }
          func_0x00010782229c();
          ppplStack_910 = (long ***)pppplVar40;
          dStack_908 = extraout_x8_18;
          if (extraout_x8_18 != 0.0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_07 != 0);
          }
          func_0x0001078229b8();
          (*extraout_x8_19)();
          func_0x000107822df8();
          func_0x00010782229c();
          appplStack_920[0] = (long ***)pppplVar40;
          if (extraout_x8_20 != 0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_08 != 0);
          }
          func_0x000107822ec0();
          func_0x0001078229d4();
          func_0x000107822ea0();
          uStack_b0 = 9;
          func_0x00010782229c();
          appplStack_cd0[0] = (long ***)pppplVar40;
          if (extraout_x8_21 != 0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10_09 != 0);
          }
          (*(code *)(*pppplVar40)[4])();
          func_0x000107268400(pplVar42 + 0x1f,pppplVar40);
          func_0x00010782285c();
          func_0x000107822410();
        }
        func_0x000107822950();
        func_0x000107330fdc(appplStack_cd0);
        func_0x000107330fdc(appplStack_920);
        func_0x000107330fdc(&ppplStack_910);
      }
LAB_107815dc0:
      func_0x000107822374();
      pppplVar40 = &ppplStack_900;
LAB_107815dc8:
      func_0x00010724b3d8();
    }
LAB_107815dcc:
    ppplStack_ce0 = (long ***)((long)ppplStack_ce0 + 1);
  } while( true );
}



/* Entry: 10781766c; end: 107818647;  */

void FUN_10781766c(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  byte bVar13;
  code *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar14;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  long *plVar15;
  long *extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *extraout_x9_03;
  long extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong uVar16;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong uVar17;
  bool bVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong unaff_x24;
  char cVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  uint6 uVar35;
  undefined8 uVar36;
  float fStack_1c8;
  uint uStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  undefined4 *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [32];
  undefined *puStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [40];
  undefined4 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  ulong auStack_c0 [2];
  undefined *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  
  pfVar7 = *(float **)(param_1 + 0x1158);
  uVar12 = (ulong)*(uint *)(param_1 + 0x1148);
  func_0x0001078227d8(uVar12,pfVar7[0x452]);
  *(int *)(param_1 + 0x114c) = (int)uVar12;
  puVar28 = (undefined8 *)(param_1 + 0x1140);
  func_0x000107822650();
  (*extraout_x8)();
  plVar22 = (long *)(param_1 + 0x11a8);
  bVar13 = 0;
  while( true ) {
    plVar22 = (long *)*plVar22;
    if (plVar22 == (long *)0x0) break;
    lVar19 = *(long *)(param_1 + 0x1158);
    uVar1 = *(undefined4 *)(plVar22 + 2);
    lVar14 = lVar19 + 0x1238;
    func_0x0001078212b8(lVar14,uVar1);
    if (lVar14 == 0) {
      unaff_x24 = 0;
    }
    else {
      unaff_x24 = (ulong)*(byte *)(lVar14 + 0x14);
    }
    pfVar8 = (float *)(lVar19 + 0x11c0);
    func_0x000107821358(pfVar8,uVar1);
    if (pfVar8 == (float *)0x0) {
      uVar21 = (uint)*(byte *)((long)plVar22 + 0x16) | (uint)unaff_x24;
      uStack_178._0_5_ =
           CONCAT14(*(byte *)((long)plVar22 + 0x15),
                    (float)(uVar21 & *(byte *)((long)plVar22 + 0x15) & 1));
      uStack_170._0_5_ =
           CONCAT14(*(byte *)((long)plVar22 + 0x14),
                    (float)(uVar21 & *(byte *)((long)plVar22 + 0x14) & 1));
      func_0x000107822754();
      bVar3 = bVar13 & 1;
      pfVar7 = pfVar8;
      bVar13 = 1;
      if ((bVar3 == 0) && ((*(byte *)((long)plVar22 + 0x15) & 1) == 0)) {
        bVar13 = *(byte *)((long)plVar22 + 0x14);
      }
    }
    else {
      uVar21 = 0;
      if ((unaff_x24 & 1) == 0) {
        uVar21 = (uint)uVar12;
      }
      pfVar7 = (float *)&uStack_178;
      func_0x000107813908(uVar21,pfVar7,pfVar8 + 5,*(undefined1 *)((long)plVar22 + 0x14),
                          *(undefined1 *)((long)plVar22 + 0x15));
      func_0x000107822754();
      bVar3 = bVar13 & 1;
      bVar13 = 1;
      if ((bVar3 == 0) && (*(char *)((long)plVar22 + 0x15) == *(char *)(pfVar8 + 6))) {
        bVar13 = *(char *)((long)plVar22 + 0x14) != *(char *)(pfVar8 + 8);
      }
    }
  }
  plVar22 = (long *)(*(long *)(param_1 + 0x1158) + 0x11d0);
LAB_1078177f8:
  do {
    plVar22 = (long *)*plVar22;
    if (plVar22 == (long *)0x0) {
      plVar22 = (long *)(*(long *)(param_1 + 0x1158) + 0x11f8);
      do {
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) {
          plVar22 = (long *)(*(long *)(param_1 + 0x1158) + 0x1220);
          do {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) {
              if ((bVar13 & 1) == 0) {
                if (*(char *)(param_1 + 0x1168) == '\x01') {
                  lVar14 = *(long *)(param_1 + 0x1158);
                }
                else {
                  lVar14 = 0;
                }
                puVar28 = (undefined8 *)(lVar14 + 0x1138);
              }
              *(undefined8 *)(param_1 + 0x1138) = *puVar28;
              func_0x00010781c100(param_1 + 0x12e0);
              func_0x00010781c100(param_1 + 0x12f8);
              uVar12 = *(ulong *)(param_1 + 0x1378);
              if (uVar12 != 0) {
                func_0x00010781bfc0(param_1 + 0x1368);
                func_0x00010ae6cbe8(param_1 + 0x1368,&UNK_1109e0480,uVar12 < 0x80);
              }
              func_0x0001074ae96c(param_1 + 0x1330);
              func_0x0001077f7230(&fStack_1c8,param_1 + 0x40,*(long *)(param_1 + 0x1158) + 0x40);
              func_0x00010781ff84(param_1 + 0x12e0,
                                  (CONCAT44(uStack_1bc,fStack_1c0) - CONCAT44(uStack_1c4,fStack_1c8)
                                  ) / 0x18);
              for (lVar14 = CONCAT44(uStack_1c4,fStack_1c8);
                  lVar14 != CONCAT44(uStack_1bc,fStack_1c0); lVar14 = lVar14 + 0x18) {
                func_0x0001078214bc(param_1 + 0x12e0,lVar14 + 8);
              }
              func_0x00010781ff84(param_1 + 0x12f8,((long)puStack_1a8 - (long)puStack_1b0) / 0x18);
              puVar29 = puStack_1b0;
              do {
                if (puVar29 == puStack_1a8) {
                  func_0x00010732f7e8(param_1 + 0x1310,auStack_198);
                  plVar22 = (long *)(param_1 + 0x1340);
                  lVar19 = param_3[1];
                  for (lVar14 = *param_3; lVar14 != lVar19; lVar14 = lVar14 + 0xb0) {
                    lVar32 = *(long *)(lVar14 + 0x20);
                    lVar30 = *(long *)(lVar14 + 0x28);
                    lVar31 = lVar30 - lVar32;
                    if (0 < lVar31) {
                      puVar26 = *(undefined **)(param_1 + 0x1338);
                      if (*plVar22 - (long)puVar26 < lVar31) {
                        lVar32 = param_1 + 0x1330;
                        func_0x0001074c6c54(lVar32,((long)puVar26 - *(long *)(param_1 + 0x1330)) /
                                                   0x120 + lVar31 / 0x120);
                        func_0x0001074c6cfc(&uStack_178,lVar32,
                                            ((long)puVar26 - *(long *)(param_1 + 0x1330)) / 0x120,
                                            plVar22);
                        ppuVar10 = (undefined **)((long)ppuStack_168 + lVar31);
                        for (; lVar31 != 0; lVar31 = lVar31 + -0x120) {
                          func_0x000107822dc0();
                        }
                        ppuStack_168 = ppuVar10;
                        func_0x0001074d33b4(param_1 + 0x1330,&uStack_178,puVar26);
                        func_0x0001078228b4();
                      }
                      else {
                        uStack_170 = &puStack_d0;
                        ppuStack_168 = &puStack_b0;
                        auStack_160[0] = 0;
                        uStack_178 = plVar22;
                        puStack_d0 = puVar26;
                        for (; puStack_b0 = puVar26, lVar32 != lVar30; lVar32 = lVar32 + 0x120) {
                          func_0x000107822dc0();
                          puVar26 = puStack_b0 + 0x120;
                        }
                        auStack_160[0] = 1;
                        func_0x0001074c6e2c(&uStack_178);
                        *(undefined **)(param_1 + 0x1338) = puVar26;
                      }
                    }
                  }
                  lVar14 = *param_3;
                  lVar19 = param_3[1];
                  do {
                    if (lVar14 == lVar19) {
                      func_0x0001077f7f40(&fStack_1c8);
                      return;
                    }
                    puStack_b0 = &UNK_10e52b660;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    lStack_a8 = 0;
                    ppuVar10 = &puStack_b0;
                    func_0x0001074f6bcc(ppuVar10,(*(long *)(lVar14 + 0x28) -
                                                 *(long *)(lVar14 + 0x20)) / 0x120);
                    lVar30 = *(long *)(lVar14 + 0x28);
                    for (lVar32 = *(long *)(lVar14 + 0x20); lVar32 != lVar30;
                        lVar32 = lVar32 + 0x120) {
                      Hint_Prefetch(puStack_b0,0,2,0);
                      func_0x000107822f40(puStack_b0);
                      uVar24 = uStack_a0;
                      puVar26 = puStack_b0;
                      lVar31 = 0;
                      uVar12 = (ulong)puStack_b0 >> 0xc ^ (ulong)ppuVar10 >> 7;
                      bVar13 = (byte)ppuVar10;
                      uVar35 = CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(bVar13,
                                                  CONCAT11(bVar13,bVar13))))) & 0x7f7f7f7f7f7f;
                      while( true ) {
                        uVar12 = uVar12 & uVar24;
                        uVar36 = *(undefined8 *)(puVar26 + uVar12);
                        for (uVar23 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == (bVar13 & 0x7f)),
                                               CONCAT16(-((byte)((ulong)uVar36 >> 0x30) ==
                                                         (bVar13 & 0x7f)),
                                                        CONCAT15(-((char)((ulong)uVar36 >> 0x28) ==
                                                                  (char)(uVar35 >> 0x28)),
                                                                 CONCAT14(-((char)((ulong)uVar36 >>
                                                                                  0x20) ==
                                                                           (char)(uVar35 >> 0x20)),
                                                                          CONCAT13(-((char)((ulong)
                                                  uVar36 >> 0x18) == (char)(uVar35 >> 0x18)),
                                                  CONCAT12(-((char)((ulong)uVar36 >> 0x10) ==
                                                            (char)(uVar35 >> 0x10)),
                                                           CONCAT11(-((char)((ulong)uVar36 >> 8) ==
                                                                     (char)(uVar35 >> 8)),
                                                                    -((char)uVar36 == (char)uVar35))
                                                          )))))) & 0x8080808080808080; uVar23 != 0;
                            uVar23 = uVar23 - 1 & uVar23) {
                          uVar17 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
                          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar17 & 0xffff0000ffff) << 0x10;
                          ppuVar11 = (undefined **)&uStack_178;
                          uStack_178 = (long *)(lVar32 + 0x40);
                          uStack_170 = &puStack_b0;
                          func_0x00010751d0dc(ppuVar11,lStack_a8 +
                                                       (uVar12 + ((ulong)LZCOUNT(uVar17 >> 0x20 |
                                                                                 uVar17 << 0x20) >>
                                                                 3) & uVar24) * 0x40);
                          if (((ulong)ppuVar11 & 1) != 0) goto LAB_107818288;
                        }
                        func_0x000107822ac4();
                        if ((extraout_x8_09 & 1) != 0) break;
                        lVar31 = lVar31 + 8;
                        uVar12 = lVar31 + uVar12;
                      }
                      ppuVar11 = &puStack_b0;
                      func_0x00010781ddb0(ppuVar11,ppuVar10);
                      ppuVar11 = (undefined **)(lStack_a8 + (long)ppuVar11 * 0x40);
                      func_0x000104c2fe00(ppuVar11,(long *)(lVar32 + 0x40));
                      *(undefined4 *)(ppuVar11 + 7) = *(undefined4 *)(lVar32 + 0xf0);
LAB_107818288:
                      ppuVar10 = ppuVar11;
                    }
                    uVar12 = 0;
                    puStack_d0 = (undefined *)0x0;
                    uStack_c8 = 0;
                    auStack_c0[0] = 0;
                    lVar30 = *(long *)(lVar14 + 0x28);
                    for (lVar32 = *(long *)(lVar14 + 0x20); lVar32 != lVar30;
                        lVar32 = lVar32 + 0x120) {
                      if ((*(uint *)(lVar32 + 0xf0) & 0xfffffffe) == 8) {
                        if (uVar12 < auStack_c0[0]) {
                          func_0x0001074d0058(uVar12,lVar32);
                          uVar12 = uVar12 + 0x120;
                          uStack_c8 = uVar12;
                        }
                        else {
                          ppuVar10 = &puStack_d0;
                          func_0x0001074c6c54(ppuVar10,(long)(uVar12 - (long)puStack_d0) / 0x120 + 1
                                             );
                          func_0x0001074c6cfc(&uStack_178,ppuVar10,
                                              (long)(uStack_c8 - (long)puStack_d0) / 0x120,
                                              auStack_c0);
                          func_0x0001074d0058(ppuStack_168,lVar32);
                          ppuStack_168 = ppuStack_168 + 0x24;
                          func_0x0001074c6cac(&puStack_d0,&uStack_178);
                          uVar12 = uStack_c8;
                          func_0x0001078228b4();
                          uStack_c8 = uVar12;
                        }
                      }
                    }
                    func_0x0001074c31d0(&uStack_178,lVar14 + 0x40);
                    func_0x0001074f6868(auStack_160,&puStack_b0);
                    uStack_138 = uStack_c8;
                    puStack_140 = puStack_d0;
                    uStack_130 = auStack_c0[0];
                    uStack_c8 = 0;
                    auStack_c0[0] = 0;
                    puStack_d0 = (undefined *)0x0;
                    uStack_128 = *(undefined1 *)(lVar14 + 0x38);
                    uStack_118 = *(undefined8 *)(lVar14 + 0x68);
                    uStack_120 = *(undefined8 *)(lVar14 + 0x60);
                    uStack_108 = *(undefined8 *)(lVar14 + 0x78);
                    uStack_110 = *(undefined8 *)(lVar14 + 0x70);
                    func_0x000107270b5c(auStack_100,lVar14 + 0x80);
                    uStack_d8 = *(undefined4 *)(lVar14 + 0xa8);
                    Hint_Prefetch(*(undefined8 *)(param_1 + 0x1348),0,2,0);
                    uVar12 = param_1 + 0x1348;
                    func_0x0001072a02f8(*(undefined8 *)(param_1 + 0x1348),uVar12,lVar14);
                    lVar32 = 0;
                    uVar17 = *(ulong *)(param_1 + 0x1348);
                    uVar23 = *(ulong *)(param_1 + 0x1358);
                    uVar24 = uVar17 >> 0xc ^ uVar12 >> 7;
                    bVar13 = (byte)uVar12;
                    uVar35 = CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(bVar13,
                                                  CONCAT11(bVar13,bVar13))))) & 0x7f7f7f7f7f7f;
                    while( true ) {
                      uVar24 = uVar24 & uVar23;
                      uVar36 = *(undefined8 *)(uVar17 + uVar24);
                      for (uVar16 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == (bVar13 & 0x7f)),
                                             CONCAT16(-((byte)((ulong)uVar36 >> 0x30) ==
                                                       (bVar13 & 0x7f)),
                                                      CONCAT15(-((char)((ulong)uVar36 >> 0x28) ==
                                                                (char)(uVar35 >> 0x28)),
                                                               CONCAT14(-((char)((ulong)uVar36 >>
                                                                                0x20) ==
                                                                         (char)(uVar35 >> 0x20)),
                                                                        CONCAT13(-((char)((ulong)
                                                  uVar36 >> 0x18) == (char)(uVar35 >> 0x18)),
                                                  CONCAT12(-((char)((ulong)uVar36 >> 0x10) ==
                                                            (char)(uVar35 >> 0x10)),
                                                           CONCAT11(-((char)((ulong)uVar36 >> 8) ==
                                                                     (char)(uVar35 >> 8)),
                                                                    -((char)uVar36 == (char)uVar35))
                                                          )))))) & 0x8080808080808080; uVar16 != 0;
                          uVar16 = uVar16 - 1 & uVar16) {
                        uVar25 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar25 & 0xffff0000ffff) << 0x10;
                        uVar25 = uVar24 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) &
                                 uVar23;
                        uVar9 = *(long *)(param_1 + 0x1350) + uVar25 * 0xe0;
                        func_0x000107283140(uVar9,lVar14);
                        if ((uVar9 & 1) != 0) goto LAB_1078184b8;
                      }
                      func_0x000107822ac4();
                      if ((extraout_x8_10 & 1) != 0) break;
                      lVar32 = lVar32 + 8;
                      uVar24 = lVar32 + uVar24;
                    }
                    uVar25 = param_1 + 0x1348;
                    FUN_10781de4c(uVar25,uVar12);
                    lVar32 = *(long *)(param_1 + 0x1350) + uVar25 * 0xe0;
                    func_0x000107262e9c(lVar32,lVar14);
                    _bzero(lVar32 + 0x38,0xa8);
                    *(undefined **)(lVar32 + 0x50) = &UNK_10e52b660;
                    *(undefined8 *)(lVar32 + 0x60) = 0;
                    *(undefined8 *)(lVar32 + 0x58) = 0;
                    *(undefined8 *)(lVar32 + 0x70) = 0;
                    *(undefined8 *)(lVar32 + 0x68) = 0;
                    *(undefined8 *)(lVar32 + 0x80) = 0;
                    *(undefined8 *)(lVar32 + 0x78) = 0;
                    *(undefined8 *)(lVar32 + 0x98) = 0;
                    *(undefined8 *)(lVar32 + 0x90) = 0;
                    *(undefined8 *)(lVar32 + 0xa8) = 0;
                    *(undefined8 *)(lVar32 + 0xa0) = 0;
                    *(undefined8 *)(lVar32 + 0xb8) = 0;
                    *(undefined8 *)(lVar32 + 0xb0) = 0;
                    *(undefined8 *)(lVar32 + 200) = 0;
                    *(undefined8 *)(lVar32 + 0xc0) = 0;
                    *(undefined4 *)(lVar32 + 0xd0) = 0x3f800000;
LAB_1078184b8:
                    lVar32 = *(long *)(param_1 + 0x1350) + uVar25 * 0xe0;
                    func_0x0001074f64d0(lVar32 + 0x38,&uStack_178);
                    func_0x0001074f6808(lVar32 + 0x50,auStack_160);
                    func_0x0001074f64f4(lVar32 + 0x70,&puStack_140);
                    *(undefined8 *)(lVar32 + 0x90) = uStack_120;
                    *(ulong *)(lVar32 + 0x88) = CONCAT71(uStack_127,uStack_128);
                    *(undefined8 *)(lVar32 + 0xa0) = uStack_110;
                    *(undefined8 *)(lVar32 + 0x98) = uStack_118;
                    *(undefined8 *)(lVar32 + 0xa8) = uStack_108;
                    func_0x0001072e89fc(lVar32 + 0xb0,auStack_100);
                    *(undefined4 *)(lVar32 + 0xd8) = uStack_d8;
                    func_0x00010781c098(&uStack_178);
                    func_0x0001074ae918(&puStack_d0);
                    func_0x0001074f646c(&puStack_b0);
                    lVar14 = lVar14 + 0xb0;
                  } while( true );
                }
                func_0x0001078214bc(param_1 + 0x12f8,puVar29 + 2);
                (**(code **)(**(long **)(puVar29 + 2) + 0x40))(&uStack_178);
                if ((char)ppuStack_168 == '\x01') {
                  lVar14 = *(long *)(param_1 + 0x1158) + 0x1238;
                  func_0x0001078212b8(lVar14,*puVar29);
                  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x14) == '\x01')) {
                    lVar19 = *(long *)(*(long *)(puVar29 + 2) + 0x30);
                    Hint_Prefetch(*(undefined8 *)(param_1 + 0x1368),0,2,0);
                    uVar12 = lVar19 + 0x60;
                    func_0x000104c2fe38(*(undefined8 *)(param_1 + 0x1368));
                    lVar14 = 0;
                    uVar23 = *(ulong *)(param_1 + 0x1368);
                    uVar17 = *(ulong *)(param_1 + 0x1378);
                    uVar24 = uVar23 >> 0xc ^ uVar12 >> 7;
                    bVar13 = (byte)uVar12;
                    uVar35 = CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(bVar13,
                                                  CONCAT11(bVar13,bVar13))))) & 0x7f7f7f7f7f7f;
                    while( true ) {
                      uVar24 = uVar24 & uVar17;
                      uVar36 = *(undefined8 *)(uVar23 + uVar24);
                      for (uVar16 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == (bVar13 & 0x7f)),
                                             CONCAT16(-((byte)((ulong)uVar36 >> 0x30) ==
                                                       (bVar13 & 0x7f)),
                                                      CONCAT15(-((char)((ulong)uVar36 >> 0x28) ==
                                                                (char)(uVar35 >> 0x28)),
                                                               CONCAT14(-((char)((ulong)uVar36 >>
                                                                                0x20) ==
                                                                         (char)(uVar35 >> 0x20)),
                                                                        CONCAT13(-((char)((ulong)
                                                  uVar36 >> 0x18) == (char)(uVar35 >> 0x18)),
                                                  CONCAT12(-((char)((ulong)uVar36 >> 0x10) ==
                                                            (char)(uVar35 >> 0x10)),
                                                           CONCAT11(-((char)((ulong)uVar36 >> 8) ==
                                                                     (char)(uVar35 >> 8)),
                                                                    -((char)uVar36 == (char)uVar35))
                                                          )))))) & 0x8080808080808080; uVar16 != 0;
                          uVar16 = uVar16 - 1 & uVar16) {
                        uVar25 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar25 & 0xffff0000ffff) << 0x10;
                        uVar25 = uVar24 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) &
                                 uVar17;
                        uVar9 = *(long *)(param_1 + 0x1370) + uVar25 * 0x50;
                        func_0x000104c32db4(uVar9,lVar19 + 0x60);
                        if ((uVar9 & 1) != 0) goto LAB_107817fec;
                      }
                      func_0x000107822ac4();
                      if ((extraout_x8_08 & 1) != 0) break;
                      lVar14 = lVar14 + 8;
                      uVar24 = lVar14 + uVar24;
                    }
                    uVar25 = param_1 + 0x1368;
                    func_0x00010781daf0(uVar25,uVar12);
                    lVar14 = *(long *)(param_1 + 0x1370) + uVar25 * 0x50;
                    func_0x000104c2fe00(lVar14,lVar19 + 0x60);
                    *(undefined8 *)(lVar14 + 0x38) = 0;
                    *(undefined8 *)(lVar14 + 0x40) = 0;
                    *(undefined8 *)(lVar14 + 0x48) = 0;
LAB_107817fec:
                    lVar14 = *(long *)(param_1 + 0x1370);
                    (**(code **)(**(long **)(puVar29 + 2) + 0x40))(&uStack_178);
                    if (((ulong)ppuStack_168 & 1) == 0) {
                      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x107818570);
                      (*pcVar4)();
                    }
                    func_0x00010781dc2c(lVar14 + uVar25 * 0x50 + 0x38,&uStack_178);
                  }
                }
                puVar29 = puVar29 + 6;
              } while( true );
            }
            uVar21 = *(uint *)(plVar22 + 2);
            uVar12 = (ulong)uVar21;
            uVar24 = *(ulong *)(param_1 + 0x1218);
            if ((uVar24 != 0) && (*(long *)(param_1 + 0x1228) != 0)) {
              uVar23 = uVar24 - 1;
              uVar20 = (uint)uVar24;
              if ((uVar24 & uVar23) == 0) {
                uVar17 = (ulong)(uVar20 - 1 & uVar21);
              }
              else {
                uVar17 = uVar12;
                if (uVar24 <= uVar12) {
                  uVar2 = 0;
                  if (uVar20 != 0) {
                    uVar2 = uVar21 / uVar20;
                  }
                  uVar17 = (ulong)(uVar21 - uVar2 * uVar20);
                }
              }
              plVar15 = *(long **)(*(long *)(param_1 + 0x1210) + uVar17 * 8);
              if (plVar15 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar15 = (long *)*plVar15;
                    if (plVar15 == (long *)0x0) goto LAB_107817d84;
                    uVar16 = plVar15[1];
                    if (uVar16 != uVar12) break;
                    if (*(uint *)(plVar15 + 2) == uVar21) {
                      bVar18 = true;
                      goto LAB_107817d88;
                    }
                  }
                  if ((uVar24 & uVar23) == 0) {
                    uVar16 = uVar16 & uVar23;
                  }
                  else if (uVar24 <= uVar16) {
                    uVar25 = 0;
                    if (uVar24 != 0) {
                      uVar25 = uVar16 / uVar24;
                    }
                    uVar16 = uVar16 - uVar25 * uVar24;
                  }
                } while (uVar16 == uVar17);
              }
            }
LAB_107817d84:
            bVar18 = false;
LAB_107817d88:
            func_0x000107822e80();
            if ((!bVar18) && (pfVar7 != (float *)0x0)) {
              pfVar7 = pfVar7 + 5;
              func_0x000107813970();
              if (((ulong)pfVar7 & 1) == 0) {
                uVar6 = *(undefined1 *)((long)plVar22 + 0x14);
                pfVar7 = (float *)(param_1 + 0x1210);
                func_0x0001078202c0(pfVar7,plVar22 + 2);
                *(undefined1 *)pfVar7 = uVar6;
              }
            }
          } while( true );
        }
        uVar21 = *(uint *)(plVar22 + 2);
        uVar12 = (ulong)uVar21;
        uVar24 = *(ulong *)(param_1 + 0x11f0);
        if ((uVar24 != 0) && (*(long *)(param_1 + 0x1200) != 0)) {
          uVar23 = uVar24 - 1;
          uVar20 = (uint)uVar24;
          if ((uVar24 & uVar23) == 0) {
            uVar17 = (ulong)(uVar20 - 1 & uVar21);
          }
          else {
            uVar17 = uVar12;
            if (uVar24 <= uVar12) {
              uVar2 = 0;
              if (uVar20 != 0) {
                uVar2 = uVar21 / uVar20;
              }
              uVar17 = (ulong)(uVar21 - uVar2 * uVar20);
            }
          }
          plVar15 = *(long **)(*(long *)(param_1 + 0x11e8) + uVar17 * 8);
          if (plVar15 != (long *)0x0) {
            do {
              while( true ) {
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto LAB_107817c7c;
                uVar16 = plVar15[1];
                if (uVar16 != uVar12) break;
                if (*(uint *)(plVar15 + 2) == uVar21) {
                  bVar18 = true;
                  goto LAB_107817c80;
                }
              }
              if ((uVar24 & uVar23) == 0) {
                uVar16 = uVar16 & uVar23;
              }
              else if (uVar24 <= uVar16) {
                uVar25 = 0;
                if (uVar24 != 0) {
                  uVar25 = uVar16 / uVar24;
                }
                uVar16 = uVar16 - uVar25 * uVar24;
              }
            } while (uVar16 == uVar17);
          }
        }
LAB_107817c7c:
        bVar18 = false;
LAB_107817c80:
        func_0x000107822e80();
        if ((!bVar18) && (pfVar7 != (float *)0x0)) {
          pfVar7 = pfVar7 + 5;
          func_0x000107813970();
          if (((ulong)pfVar7 & 1) == 0) {
            pfVar7 = (float *)(param_1 + 0x11e8);
            func_0x0001078204d4(pfVar7,plVar22 + 2);
            uVar33 = *(undefined8 *)((long)plVar22 + 0x26);
            uVar36 = *(undefined8 *)((long)plVar22 + 0x1e);
            uVar34 = *(undefined8 *)((long)plVar22 + 0x14);
            *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)((long)plVar22 + 0x1c);
            *(undefined8 *)pfVar7 = uVar34;
            *(undefined8 *)((long)pfVar7 + 0x12) = uVar33;
            *(undefined8 *)((long)pfVar7 + 10) = uVar36;
          }
        }
      } while( true );
    }
    uVar21 = *(uint *)(plVar22 + 2);
    uVar24 = (ulong)uVar21;
    pfVar7 = (float *)(param_1 + 0x11c0);
    func_0x00010782141c(pfVar7,uVar24);
  } while (pfVar7 != (float *)0x0);
  lVar14 = *(long *)(param_1 + 0x1158) + 0x1238;
  func_0x0001078212b8(lVar14,uVar24);
  if (lVar14 == 0) {
    cVar27 = '\0';
    uVar23 = uVar12;
  }
  else {
    cVar27 = *(char *)(lVar14 + 0x14);
    uVar20 = 0;
    if (cVar27 == '\0') {
      uVar20 = (uint)uVar12;
    }
    uVar23 = (ulong)uVar20;
  }
  pfVar7 = &fStack_1c8;
  func_0x000107813908(uVar23,pfVar7,(long)plVar22 + 0x14,0,0);
  uVar6 = fStack_1c8 == 0.0;
  uVar5 = fStack_1c8 < 0.0;
  if (((bool)uVar6) && ((uStack_1c4 & 1) == 0)) goto code_r0x00010781786c;
  goto LAB_107817888;
code_r0x00010781786c:
  uVar6 = fStack_1c0 == 0.0;
  uVar5 = fStack_1c0 < 0.0;
  if (((bool)uVar6) && ((uStack_1bc & 1) == 0)) goto LAB_1078177f8;
LAB_107817888:
  uVar23 = *(ulong *)(param_1 + 0x11c8);
  if (uVar23 != 0) {
    func_0x0001078225d8();
    uVar20 = (uint)uVar23;
    if ((bool)uVar6) {
      unaff_x24 = (ulong)(uVar20 - 1 & uVar21);
      uVar6 = true;
    }
    else {
      uVar5 = (long)(uVar23 - uVar24) < 0;
      uVar6 = uVar23 == uVar24;
      unaff_x24 = uVar24;
      if (uVar23 <= uVar24) {
        uVar2 = 0;
        if (uVar20 != 0) {
          uVar2 = uVar21 / uVar20;
        }
        unaff_x24 = (ulong)(uVar21 - uVar2 * uVar20);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x11c0) + unaff_x24 * 8);
    uVar17 = extraout_x8_00;
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_107817914;
          uVar16 = plVar15[1];
          if (uVar16 != uVar24) break;
          uVar5 = (int)(*(uint *)(plVar15 + 2) - uVar21) < 0;
          uVar6 = *(uint *)(plVar15 + 2) == uVar21;
          if ((bool)uVar6) goto LAB_107817a0c;
        }
        if ((uVar23 & uVar17) == 0) {
          uVar16 = uVar16 & uVar17;
        }
        else if (uVar23 <= uVar16) {
          func_0x000107822b90();
          uVar17 = extraout_x8_01;
          plVar15 = extraout_x9;
          uVar16 = extraout_x10;
        }
        uVar5 = (long)(uVar16 - unaff_x24) < 0;
        uVar6 = uVar16 == unaff_x24;
      } while ((bool)uVar6);
    }
  }
LAB_107817914:
  lVar19 = 0x28;
  __Znwm();
  lVar14 = lVar19;
  func_0x000107822b24(param_1 + 0x11d0);
  *(ulong *)(lVar14 + 0x1c) = CONCAT44(uStack_1bc,fStack_1c0);
  *(ulong *)(lVar14 + 0x14) = CONCAT44(uStack_1c4,fStack_1c8);
  func_0x000107822290(*(undefined8 *)(param_1 + 0x11d8));
  if (uVar23 != 0) {
    func_0x000107822234();
    bVar18 = !(bool)uVar5;
    uVar5 = 0;
    if (bVar18) goto LAB_1078179a0;
  }
  func_0x00010782245c();
  uVar5 = (long)(uVar23 - 3) < 0;
  uVar6 = uVar23 == 3;
  func_0x000107821dc0();
  func_0x00010781fb60(param_1 + 0x11c0);
  uVar23 = *(ulong *)(param_1 + 0x11c8);
  func_0x0001078225d8();
  if ((bool)uVar6) {
    uVar6 = 1;
    unaff_x24 = (ulong)((int)uVar23 - 1U & uVar21);
  }
  else {
    uVar5 = (long)(uVar23 - uVar24) < 0;
    uVar6 = uVar23 == uVar24;
    unaff_x24 = uVar24;
    if (uVar23 <= uVar24) {
      uVar17 = 0;
      if (uVar23 != 0) {
        uVar17 = uVar24 / uVar23;
      }
      unaff_x24 = uVar24 - uVar17 * uVar23;
    }
  }
LAB_1078179a0:
  if (*(long *)(*(long *)(param_1 + 0x11c0) + unaff_x24 * 8) == 0) {
    func_0x000107822b9c();
    if (extraout_x9_00 != 0) {
      func_0x000107822528();
      lVar14 = extraout_x8_02;
      if ((bool)uVar6) {
        uVar24 = extraout_x9_01 & extraout_x10_00;
        uVar6 = 1;
      }
      else {
        uVar5 = (long)(extraout_x9_01 - uVar23) < 0;
        uVar6 = extraout_x9_01 == uVar23;
        uVar24 = extraout_x9_01;
        if (uVar23 <= extraout_x9_01) {
          func_0x000107823110();
          lVar14 = extraout_x8_03;
          uVar24 = extraout_x9_02;
        }
      }
      *(long *)(lVar14 + uVar24 * 8) = lVar19;
    }
  }
  else {
    func_0x000107822b14();
  }
  uStack_178 = (long *)0x0;
  *(long *)(param_1 + 0x11d8) = *(long *)(param_1 + 0x11d8) + 1;
  pfVar7 = (float *)&uStack_178;
  func_0x0001078213f8();
  uVar24 = (ulong)*(uint *)(plVar22 + 2);
LAB_107817a0c:
  uVar23 = *(ulong *)(param_1 + 0x1240);
  if (uVar23 != 0) {
    func_0x0001078225d8();
    uVar21 = (uint)uVar23;
    uVar20 = (uint)uVar24;
    if ((bool)uVar6) {
      unaff_x24 = uVar21 - 1 & uVar24;
      uVar6 = true;
    }
    else {
      uVar5 = (long)(uVar23 - uVar24) < 0;
      uVar6 = uVar23 == uVar24;
      unaff_x24 = uVar24;
      if (uVar23 <= uVar24) {
        uVar2 = 0;
        if (uVar21 != 0) {
          uVar2 = uVar20 / uVar21;
        }
        unaff_x24 = (ulong)(uVar20 - uVar2 * uVar21);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x1238) + unaff_x24 * 8);
    uVar17 = extraout_x8_04;
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_107817a94;
          uVar16 = plVar15[1];
          if (uVar16 != uVar24) break;
          uVar5 = (int)(*(uint *)(plVar15 + 2) - uVar20) < 0;
          uVar6 = false;
          if (*(uint *)(plVar15 + 2) == uVar20) goto LAB_107817b84;
        }
        if ((uVar23 & uVar17) == 0) {
          uVar16 = uVar16 & uVar17;
        }
        else if (uVar23 <= uVar16) {
          func_0x000107822b90();
          uVar17 = extraout_x8_05;
          plVar15 = extraout_x9_03;
          uVar16 = extraout_x10_01;
        }
        uVar5 = (long)(uVar16 - unaff_x24) < 0;
        uVar6 = uVar16 == unaff_x24;
      } while ((bool)uVar6);
    }
  }
LAB_107817a94:
  func_0x000107822388();
  pfVar8 = pfVar7;
  func_0x000107822b24(param_1 + 0x1248);
  *(char *)(pfVar8 + 5) = cVar27;
  func_0x000107822290(*(undefined8 *)(param_1 + 0x1250));
  if ((uVar23 == 0) || (func_0x000107822234(), (bool)uVar5)) {
    func_0x00010782245c();
    func_0x000107821dc0();
    func_0x00010781fcb8(param_1 + 0x1238);
    uVar23 = *(ulong *)(param_1 + 0x1240);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar6 = 1;
      unaff_x24 = (int)uVar23 - 1 & uVar24;
    }
    else {
      uVar6 = uVar23 == uVar24;
      unaff_x24 = uVar24;
      if (uVar23 <= uVar24) {
        uVar17 = 0;
        if (uVar23 != 0) {
          uVar17 = uVar24 / uVar23;
        }
        unaff_x24 = uVar24 - uVar17 * uVar23;
      }
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x1238) + unaff_x24 * 8) == 0) {
    func_0x000107822b9c();
    if (extraout_x9_04 != 0) {
      func_0x000107822528();
      lVar14 = extraout_x8_06;
      if ((bool)uVar6) {
        uVar24 = extraout_x9_05 & extraout_x10_02;
      }
      else {
        uVar24 = extraout_x9_05;
        if (uVar23 <= extraout_x9_05) {
          func_0x000107823110();
          lVar14 = extraout_x8_07;
          uVar24 = extraout_x9_06;
        }
      }
      *(float **)(lVar14 + uVar24 * 8) = pfVar7;
    }
  }
  else {
    func_0x000107822b14();
  }
  uStack_178 = (long *)0x0;
  *(long *)(param_1 + 0x1250) = *(long *)(param_1 + 0x1250) + 1;
  pfVar7 = (float *)&uStack_178;
  func_0x000107820904();
LAB_107817b84:
  if ((bVar13 & 1) == 0) {
    if ((*(byte *)(plVar22 + 3) & 1) == 0) {
      bVar13 = *(byte *)(plVar22 + 4);
    }
    else {
      bVar13 = 1;
    }
  }
  else {
    bVar13 = 1;
  }
  goto LAB_1078177f8;
}



/* Entry: 1078190f0; end: 10781957f;  */

ulong FUN_1078190f0(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  byte bVar10;
  code *extraout_x8;
  ulong extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  ulong uVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  ulong uStack_3a8;
  ulong uStack_3a0;
  undefined4 uStack_398;
  ulong uStack_390;
  undefined4 uStack_388;
  ulong uStack_380;
  float fStack_378;
  ulong auStack_370 [4];
  undefined4 uStack_350;
  undefined1 auStack_348 [808];
  double dStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x00010782311c();
  func_0x000107822a74();
  bVar1 = false;
  lVar12 = *(long *)(param_5 + 0x28);
  func_0x000107822818(*(undefined8 *)(lVar12 + 0x778));
  uVar6 = (uint)param_4;
  bVar5 = *(long *)(param_5 + 0x168) == *(long *)(param_5 + 0x170);
  uVar4 = (bool)in_ZR || bVar5;
  if ((*(char *)(lVar12 + 0x1b8) != '\0') &&
     ((*(byte *)(param_5 + 0xa60) & 1) != 0 || !(bool)in_ZR && !bVar5)) {
    if (*(long *)(unaff_x19 + 0x480) == *(long *)(unaff_x19 + 0x488)) {
      uVar4 = *(long *)(unaff_x19 + 0x790) == *(long *)(unaff_x19 + 0x798);
      bVar1 = !(bool)uVar4;
    }
    else {
      bVar1 = true;
      uVar4 = false;
    }
  }
  if (extraout_w10 == 0) {
    if ((bool)in_ZR || bVar5) {
      uVar11 = 0;
      if ((*(byte *)(param_5 + 0xa60) != 0) &&
         (*(long *)(param_5 + 0x168) != *(long *)(param_5 + 0x170))) {
        uVar11 = unaff_x19 + 0x100;
        func_0x00010781962c(uVar11);
        if (bVar1) {
          lVar12 = unaff_x19 + 0x418;
          func_0x00010781962c(lVar12);
          lVar9 = unaff_x19 + 0x728;
          func_0x00010781962c(lVar9);
          uVar11 = (ulong)((uint)uVar11 | (uint)lVar12 | (uint)lVar9);
        }
      }
    }
    else {
      uStack_18 = *(undefined8 *)(unaff_x19 + 0x120);
      dVar18 = *(double *)(unaff_x19 + 0x118);
      uStack_10 = *(undefined8 *)(unaff_x19 + 0x128);
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
      *(ushort *)(unaff_x19 + 0x74) = *(ushort *)(unaff_x19 + 0x74) & 0xfeff;
      dStack_20 = dVar18;
      func_0x000107822a40();
      uVar6 = (uint)param_5;
      puVar7 = *(ulong **)(unaff_x19 + 0xe0);
      dVar18 = (double)(ulong)(uint)(float)dVar18;
      func_0x000107822650();
      (*extraout_x8)();
      puVar8 = puVar7;
      func_0x000107822a40();
      func_0x00010782278c();
      cVar2 = *(char *)(lVar12 + 0x700);
      cVar3 = *(char *)(lVar12 + 0x688);
      func_0x000107822980(auStack_348);
      uVar11 = 0;
      uVar20 = 0;
      auStack_370[1] = 0;
      auStack_370[0] = 0;
      auStack_370[3] = 0;
      auStack_370[2] = 0;
      uStack_350 = 0x3f800000;
      while( true ) {
        uVar15 = (*(long *)(unaff_x19 + 0x188) - *(long *)(unaff_x19 + 0x180)) / 0xa8;
        bVar5 = uVar11 == uVar15;
        if (uVar15 <= uVar11) break;
        puVar13 = (ulong *)(*(long *)(unaff_x19 + 0x180) + uVar11 * 0xa8);
        func_0x000107822c74();
        if (bVar5) {
          bVar10 = *(byte *)((long)puVar13 + 0x8d) ^ 1;
        }
        else {
          bVar10 = 0;
        }
        puVar14 = puVar8;
        if (((puVar13[0xf] & 1) == 0) &&
           (func_0x000107822bd8(bVar10), puVar14 = puVar8, (extraout_x8_00 & 1) == 0)) {
          func_0x000107822e1c();
          fVar16 = (float)uVar20;
          fVar23 = (float)param_3;
          puVar14 = (ulong *)0x0;
          if (puVar8 == (ulong *)0x0) goto LAB_107819370;
          func_0x000107822c98();
          puVar14 = (ulong *)(ulong)*(byte *)((long)puVar8 + 0x24);
          uStack_380 = *puVar13;
          fStack_378 = *(float *)(puVar13 + 1);
          func_0x000107822db4(&uStack_380);
          uVar20 = param_2;
          if (fStack_378 != 0.0) {
            uStack_3a8 = uStack_380;
            uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
            func_0x000107822db4(&uStack_3a8);
          }
          dVar19 = (double)(ulong)uVar6;
          if (((uint)puVar7 >> 8 & 1) == 0) {
            fVar17 = *(float *)(puVar13 + 3);
            dVar19 = (double)(ulong)(uint)fVar17;
            if (((ulong)puVar7 & 1) == 0) {
              fVar22 = *(float *)((long)puVar13 + 0x1c) - fVar17;
              uVar20 = (ulong)(uint)fVar22;
              dVar19 = (double)(ulong)(uint)(fVar17 + fVar22 * (float)((ulong)puVar7 >> 0x20));
            }
          }
          func_0x00010782287c();
          if (cVar3 == '\0') {
            uVar20 = (ulong)(uint)(float)dVar18;
            dVar19 = (double)(ulong)(uint)(*(float *)(unaff_x19 + 0xa58) / (float)dVar18);
          }
          func_0x0001078224bc();
          uStack_390 = 0;
          uStack_388 = 0;
          fVar17 = SUB84(dVar19,0);
          fVar22 = (float)uVar20;
          if (cVar3 == '\0') {
            uVar20 = (ulong)(uint)(fStack_378 + 0.0);
            param_3 = CONCAT44(fVar22,fVar17);
            param_2 = CONCAT44(fVar22 + (float)(uStack_380 >> 0x20),fVar17 + (float)uStack_380);
            uStack_3a0 = CONCAT44(uStack_3a0._4_4_,fStack_378 + 0.0);
            puVar14 = &uStack_3a8;
            uStack_3a8 = param_2;
            func_0x00010740b67c(puVar14,1,auStack_348);
          }
          else {
            if (cVar2 == '\0') {
              puVar14 = unaff_x20;
              dVar21 = dVar19;
              func_0x0001074163dc();
              func_0x000107818c8c(dVar19,uVar20,-dVar21);
              fVar17 = SUB84(dVar19,0);
              fVar22 = (float)uVar20;
            }
            param_2 = (ulong)(uint)((float)param_2 + fVar22);
            uVar20 = (ulong)(uint)(fVar16 + fVar17);
            param_3 = (ulong)(uint)(fVar23 + 0.0);
          }
          uStack_390 = CONCAT44((int)param_2,(int)uVar20);
          uStack_388 = (undefined4)param_3;
          if ((bVar1) && ((char)puVar13[0x14] == '\x01')) {
            puVar14 = auStack_370;
            uStack_3a8 = uVar11;
            uStack_3a0 = uStack_390;
            uStack_398 = uStack_388;
            func_0x000107818cd4(puVar14,puVar13[0x13],&uStack_3a8);
          }
          for (uVar15 = 0; uVar15 < (ulong)((long)(puVar13[0xd] - puVar13[0xc]) >> 2);
              uVar15 = uVar15 + 1) {
            uVar20 = (ulong)(uint)puVar13[0x12];
            puVar14 = &uStack_390;
            func_0x00010740b938(puVar14,(double *)(unaff_x19 + 0x118));
          }
        }
        else {
LAB_107819370:
          func_0x0001078229ac(puVar13[0xd]);
          func_0x00010740b970();
        }
        uVar11 = uVar11 + 1;
        puVar8 = puVar14;
      }
      if ((bVar1) && ((*(ushort *)(unaff_x19 + 0x74) >> 8 & 1) != 0)) {
        func_0x000107819580();
        func_0x000107819580();
      }
      dVar18 = dStack_20;
      func_0x0001078195fc(dStack_20,uStack_18,*(undefined8 *)(unaff_x19 + 0x118),
                          *(undefined8 *)(unaff_x19 + 0x120));
      uVar11 = (ulong)(SUB84(dVar18,0) ^ 1);
      func_0x000107821560(auStack_370);
      func_0x00010740c664(&dStack_20);
    }
  }
  else {
    if (*(char *)(lVar12 + 0x178) == '\0') {
      func_0x000107822364();
      if ((bool)uVar4) {
        uVar11 = 0;
      }
      else {
        func_0x0001078220b0();
        param_4 = unaff_x19 + 0x740;
        func_0x00010782209c(param_4,unaff_x19 + 0x7a8);
        func_0x00010740c594();
        uVar11 = param_4;
      }
      uVar6 = (uint)param_4;
      func_0x000107822354();
      if (!(bool)uVar4) {
        func_0x0001078220b0();
        lVar9 = unaff_x19 + 0x430;
        func_0x00010782209c(lVar9,unaff_x19 + 0x498);
        uVar6 = (uint)lVar9;
        func_0x00010740c594();
        uVar11 = (ulong)((uint)uVar11 | uVar6);
      }
    }
    else {
      uVar11 = 0;
    }
    if ((*(long *)(unaff_x19 + 0x168) != *(long *)(unaff_x19 + 0x170)) &&
       (*(char *)(lVar12 + 0x700) == '\0')) {
      func_0x000107822a48();
      func_0x000107822cb0();
      func_0x00010740c594();
      uVar11 = (ulong)((uint)uVar11 | uVar6);
    }
  }
  return uVar11;
}



/* Entry: 10781a010; end: 10781a1bf;  */

/* WARNING: Possible PIC construction at 0x00010781a180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781a184) */

void FUN_10781a010(long *param_1,long param_2,ulong param_3,int param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  ulong extraout_x8;
  long lVar8;
  long *plVar9;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *plVar12;
  long lVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_50;
  undefined4 uStack_48;
  
  puVar7 = &uStack_50;
  puVar1 = &stack0xfffffffffffffff0;
  uVar4 = *(char *)(param_2 + 0x138) == '\x01';
  if (!(bool)uVar4) {
    return;
  }
  func_0x000107822830();
  lVar13 = *param_1;
  plVar12 = *(long **)(lVar13 + 0x12c0);
  if ((plVar12 != (long *)0x0) && (*(long *)(lVar13 + 0x12d0) != 0)) {
    plVar6 = unaff_x21;
    func_0x00010781e16c();
    func_0x000107822824();
    if ((bool)uVar4) {
      plVar9 = (long *)((ulong)plVar6 & extraout_x8);
    }
    else {
      plVar9 = plVar6;
      if (plVar12 <= plVar6) {
        uVar3 = 0;
        if (plVar12 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar12;
        }
        plVar9 = (long *)((long)plVar6 - uVar3 * (long)plVar12);
      }
    }
    plVar10 = *(long **)(*(long *)(lVar13 + 0x12b8) + (long)plVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10781a0d8;
          plVar11 = (long *)plVar10[1];
          if (plVar6 != plVar11) break;
          if ((long *)plVar10[2] == unaff_x21) {
            unaff_x21 = (long *)plVar10[3];
            unaff_x22 = param_3 & 0xffffffff;
            unaff_x20 = 0xa50;
            if (param_4 == 0) {
              unaff_x20 = 0xa48;
            }
            if (unaff_x21 == (long *)plVar10[4]) {
              return;
            }
            uStack_50 = 0;
            if ((char)unaff_x21[2] != '\x02') {
              uStack_50 = 0x100;
            }
            uStack_50 = uStack_50 | unaff_x22;
            uStack_48 = 0;
            lVar8 = *(long *)(*(long *)(unaff_x19 + 8) + unaff_x20);
            lVar13 = 4;
            unaff_x30 = 0x10781a184;
            register0x00000008 = (BADSPACEBASE *)&uStack_50;
            unaff_x29 = puVar1;
            goto code_r0x00010781e080;
          }
        }
        if (((ulong)plVar12 & extraout_x8) == 0) {
          plVar11 = (long *)((ulong)plVar11 & extraout_x8);
        }
        else if (plVar12 <= plVar11) {
          uVar3 = 0;
          if (plVar12 != (long *)0x0) {
            uVar3 = (ulong)plVar11 / (ulong)plVar12;
          }
          plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar12);
        }
      } while (plVar11 == plVar9);
    }
  }
LAB_10781a0d8:
  if ((bRam0000000113726390 & 1) == 0) {
    iVar5 = 0x13726390;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000113726398 = param_3 & 0xffffffff;
      uRam00000001137263a0 = 0;
      ___cxa_guard_release(0x113726390);
    }
  }
  lVar13 = 0xa50;
  if (param_4 == 0) {
    lVar13 = 0xa48;
  }
  lVar8 = *(long *)(*(long *)(unaff_x19 + 8) + lVar13);
  lVar13 = unaff_x21[1] - *unaff_x21 >> 3;
  puVar7 = (ulong *)0x113726398;
code_r0x00010781e080:
  plVar12 = (long *)(lVar8 + 0x18);
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107822830(plVar12,lVar13,puVar7);
  lVar8 = plVar12[1];
  uVar2 = (lVar8 - *plVar12) / 0xc;
  uVar3 = uVar2 + lVar13;
  if (uVar2 < uVar3) {
    if ((long *)((*(long *)(unaff_x19 + 0x10) - lVar8) / 0xc) < unaff_x21) {
      func_0x000107408b4c(unaff_x19);
      func_0x000107822160();
      func_0x000107408bd0((undefined1 *)((long)register0x00000008 + -0x58));
      lVar13 = *(long *)((long)register0x00000008 + -0x48) + (long)unaff_x21 * 0xc;
      uVar3 = (long)unaff_x21 * 3 & 0x3fffffffffffffff;
      while (uVar3 != 0) {
        func_0x000107822b78();
        lVar13 = extraout_x9;
        uVar3 = extraout_x10;
      }
      *(long *)((long)register0x00000008 + -0x48) = lVar13;
      func_0x0001078225f0();
      func_0x000107408b94();
      func_0x000107408c50((undefined1 *)((long)register0x00000008 + -0x58));
    }
    else {
      lVar8 = lVar8 + (long)unaff_x21 * 0xc;
      uVar3 = (long)unaff_x21 * 3 & 0x3fffffffffffffff;
      while (uVar3 != 0) {
        func_0x000107822b78();
        lVar8 = extraout_x9_00;
        uVar3 = extraout_x10_00;
      }
      *(long *)(unaff_x19 + 8) = lVar8;
    }
  }
  else if (uVar2 != uVar3) {
    *(ulong *)(unaff_x19 + 8) = *plVar12 + uVar3 * 0xc;
  }
  return;
}



/* Entry: 10781a640; end: 10781a6b3;  */

undefined1 * FUN_10781a640(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_24;
  
  param_1 = param_1 + 0x1260;
  uStack_24 = param_2;
  func_0x0001078215d4(param_1,&uStack_24);
  if (param_1 == 0) {
    lVar2 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(lVar2,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
    ___cxa_free_exception();
    func_0x000107822108();
    puVar3 = &uStack_e0;
    *(undefined8 *)(lVar2 + 0x1138) = *(undefined8 *)(lVar2 + 0x1140);
    plVar4 = (long *)(lVar2 + 0x11a8);
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      uStack_e0 = 0x3f800000;
      if ((*(byte *)((long)plVar4 + 0x16) & *(byte *)((long)plVar4 + 0x15) & 1) == 0) {
        uStack_e0 = 0;
      }
      uStack_dc = CONCAT31(uStack_dc._1_3_,*(byte *)((long)plVar4 + 0x15));
      uStack_d8 = 0x3f800000;
      if ((*(byte *)((long)plVar4 + 0x16) & *(byte *)((long)plVar4 + 0x14) & 1) == 0) {
        uStack_d8 = 0;
      }
      uStack_d4 = CONCAT31(uStack_d4._1_3_,*(byte *)((long)plVar4 + 0x14));
      func_0x000107818648(lVar2 + 0x11c0,*(undefined4 *)(plVar4 + 2),&uStack_e0);
    }
    if ((*(char *)(lVar2 + 0x1168) == '\x01') && (*(long *)(lVar2 + 0x1158) != 0)) {
      func_0x000107822d10();
      func_0x00010781c100(lVar2 + 0x12f8);
      func_0x0001077f7230(&uStack_e0,lVar2 + 0x40,*(long *)(lVar2 + 0x1158) + 0x40);
      lVar1 = CONCAT44(uStack_d4,uStack_d8);
      for (lVar7 = CONCAT44(uStack_dc,uStack_e0); lVar6 = lStack_c8, lVar7 != lVar1;
          lVar7 = lVar7 + 0x18) {
        uStack_88 = *(undefined8 *)(lVar7 + 0x10);
        uStack_90 = *(undefined8 *)(lVar7 + 8);
        if (*(long *)(lVar7 + 0x10) != 0) {
          do {
            func_0x000107821f0c();
          } while (extraout_w10 != 0);
        }
        FUN_10781e398(lVar2 + 0x11c0,&uStack_90);
        func_0x000107822fa4();
      }
      for (; lVar6 != lStack_c0; lVar6 = lVar6 + 0x18) {
        uStack_88 = *(undefined8 *)(lVar6 + 0x10);
        uStack_90 = *(undefined8 *)(lVar6 + 8);
        if (*(long *)(lVar6 + 0x10) != 0) {
          do {
            func_0x000107821f0c();
          } while (extraout_w10_00 != 0);
        }
        FUN_10781e398(lVar2 + 0x12f8,&uStack_90);
        func_0x000107822fa4();
      }
      func_0x0001077f7f40(&uStack_e0);
    }
    else {
      func_0x000107822d10();
      func_0x00010781c100(lVar2 + 0x12f8);
      puVar3 = (undefined4 *)(lVar2 + 0x11c0);
      func_0x00010781ff84(puVar3,*(undefined8 *)(lVar2 + 0x10f0));
      puVar5 = *(undefined1 **)(lVar2 + 0x10e0);
      while (puVar5 != (undefined1 *)(lVar2 + 0x10e8)) {
        func_0x0001078214bc(lVar2 + 0x11c0,puVar5 + 0x28);
        func_0x00010002c7d4();
        puVar3 = (undefined4 *)puVar5;
      }
    }
    return (undefined1 *)puVar3;
  }
  return (undefined1 *)(param_1 + 0x18);
}



/* Entry: 10781b2a8; end: 10781b547;  */

void FUN_10781b2a8(long param_1,long param_2,long *param_3,byte *param_4,int param_5,long *param_6,
                  long *param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 in_ZR;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 unaff_w24;
  undefined1 unaff_w25;
  long lVar13;
  undefined1 uVar14;
  undefined1 auStack_108 [24];
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined1 uStack_dc;
  undefined7 uStack_db;
  undefined1 uStack_d4;
  undefined7 uStack_d3;
  undefined1 uStack_cc;
  undefined2 uStack_c8;
  byte bStack_c6;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [56];
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107821e20();
  uStack_68 = extraout_x8;
  if (((param_5 != 0) || ((*(byte *)(param_1 + 0x1448) & 1) == 0)) ||
     ((in_ZR = *(char *)(param_1 + 0x1438) == '\x01', (bool)in_ZR &&
      ((((*param_4 & 1) == 0 && ((param_4[1] & 1) == 0)) &&
       (func_0x000107822818(*(undefined8 *)(*(long *)(*param_3 + 0x28) + 0x778)), !(bool)in_ZR))))))
  {
LAB_10781b4f4:
    func_0x000107821dac(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar2 = (undefined1 *)*param_6;
    if (puVar2 == (undefined1 *)param_6[1]) {
      func_0x000107822fdc();
    }
    else {
      unaff_w24 = *puVar2;
      uStack_78 = (undefined7)*(undefined8 *)(puVar2 + 1);
      uStack_71 = (undefined1)*(undefined8 *)(puVar2 + 8);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)(puVar2 + 8) >> 8);
      unaff_w25 = 1;
    }
    puVar2 = (undefined1 *)*param_7;
    puVar3 = (undefined1 *)param_7[1];
    if (puVar2 == puVar3) {
      uVar14 = 0;
    }
    else {
      uVar14 = *puVar2;
      uStack_88 = (undefined7)*(undefined8 *)(puVar2 + 1);
      uStack_81 = (undefined1)*(undefined8 *)(puVar2 + 8);
      uStack_80 = (undefined7)((ulong)*(undefined8 *)(puVar2 + 8) >> 8);
    }
    func_0x000107407a9c(auStack_108,param_2 + 0x5a0);
    uStack_ef = uStack_78;
    uStack_e8 = uStack_71;
    uStack_e7 = uStack_70;
    uStack_db = uStack_88;
    uStack_d4 = uStack_81;
    uStack_d3 = uStack_80;
    uStack_c8 = *(undefined2 *)param_4;
    if ((param_4[2] & 1) == 0) {
      bStack_c6 = *(byte *)(param_1 + 0x1438);
    }
    else {
      bStack_c6 = 0;
    }
    bStack_c6 = bStack_c6 & 1;
    uStack_c4 = *(undefined4 *)(param_1 + 0xe98);
    uStack_f0 = unaff_w24;
    uStack_e0 = unaff_w25;
    uStack_dc = uVar14;
    uStack_cc = puVar2 != puVar3;
    func_0x000104c2fe00(auStack_c0,*param_3 + 0x38);
    uVar5 = *(ulong *)(param_1 + 0x1410);
    uVar9 = *(ulong *)(param_1 + 0x1418);
    in_ZR = uVar5 == uVar9;
    if (uVar5 < uVar9) {
      func_0x00010781f588(uVar5,auStack_108);
      lVar11 = uVar5 + 0x80;
LAB_10781b4e8:
      *(long *)(param_1 + 0x1410) = lVar11;
      func_0x00010781f5e8(auStack_108);
      goto LAB_10781b4f4;
    }
    lVar11 = uVar5 - *(long *)(param_1 + 0x1408);
    uVar5 = (lVar11 >> 7) + 1;
    if (uVar5 >> 0x39 == 0) {
      uVar9 = uVar9 - *(long *)(param_1 + 0x1408);
      uVar10 = (long)uVar9 >> 6;
      if (uVar10 <= uVar5) {
        uVar10 = uVar5;
      }
      if (0x7fffffffffffff7f < uVar9) {
        uVar10 = 0x1ffffffffffffff;
      }
      if (uVar10 == 0) {
        lVar6 = 0;
      }
      else {
        if (uVar10 >> 0x39 != 0) {
          func_0x000104bd35f4();
          goto LAB_10781b530;
        }
        lVar6 = uVar10 << 7;
        __Znwm();
      }
      lVar11 = lVar6 + lVar11;
      func_0x00010781f588(lVar11,auStack_108);
      lVar13 = *(long *)(param_1 + 0x1410);
      lVar12 = *(long *)(param_1 + 0x1408);
      lVar1 = lVar11 + (lVar12 - lVar13);
      lVar7 = lVar1;
      for (lVar8 = lVar12; lVar8 != lVar13; lVar8 = lVar8 + 0x80) {
        func_0x00010781f588(lVar7,lVar8);
        lVar7 = lVar7 + 0x80;
      }
      for (; in_ZR = lVar12 == lVar13, !(bool)in_ZR; lVar12 = lVar12 + 0x80) {
        func_0x00010781f5e8(lVar12);
      }
      lVar11 = lVar11 + 0x80;
      lVar8 = *(long *)(param_1 + 0x1408);
      *(long *)(param_1 + 0x1408) = lVar1;
      *(long *)(param_1 + 0x1410) = lVar11;
      *(ulong *)(param_1 + 0x1418) = lVar6 + uVar10 * 0x80;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      goto LAB_10781b4e8;
    }
  }
  FUN_10781f5dc();
LAB_10781b530:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10781b534);
  (*pcVar4)();
}



/* Entry: 10781ba24; end: 10781ba3b;  */

void FUN_10781ba24(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 10781bb24; end: 10781bb4b;  */

void FUN_10781bb24(undefined8 param_1)

{
  func_0x000107822b3c();
  func_0x0001078226b0(param_1,&PTR_DAT_1109e01b0);
  func_0x000107822150();
  return;
}



/* Entry: 10781bc54; end: 10781bc5f;  */

void FUN_10781bc54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781bd7c; end: 10781bd9f;  */

void FUN_10781bd7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e0300;
  return;
}



/* Entry: 10781bf6c; end: 10781bf8f;  */

void FUN_10781bf6c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001074f6424();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10781c404; end: 10781c4d7;  */

void FUN_10781c404(long param_1)

{
  func_0x0001074cfe98(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10781cba8; end: 10781cbbb;  */

/* WARNING: Possible PIC construction at 0x00010781cc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781cda0) */
/* WARNING: Removing unreachable block (ram,0x00010781cdb4) */
/* WARNING: Removing unreachable block (ram,0x00010781cd74) */
/* WARNING: Removing unreachable block (ram,0x00010781cd94) */
/* WARNING: Removing unreachable block (ram,0x00010781cdc0) */
/* WARNING: Removing unreachable block (ram,0x00010781cd80) */
/* WARNING: Removing unreachable block (ram,0x00010781cd54) */
/* WARNING: Removing unreachable block (ram,0x00010781cc28) */
/* WARNING: Removing unreachable block (ram,0x00010781cca4) */
/* WARNING: Removing unreachable block (ram,0x00010781ccb4) */
/* WARNING: Removing unreachable block (ram,0x00010781cc7c) */
/* WARNING: Removing unreachable block (ram,0x00010781cdd8) */

undefined *** FUN_10781cba8(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [32];
  undefined **appuStack_138 [3];
  undefined8 *puStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined ***pppuStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_b0 [48];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c03f28();
  puStack_18 = &UNK_10781cbbc;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000107821e20();
  lStack_f0 = *plVar3;
  lStack_e8 = plVar3[1];
  *(undefined8 *)(lStack_f0 + 0x1290) = *(undefined8 *)(lStack_f0 + 0x1288);
  lStack_e0 = plVar3[2];
  lVar5 = plVar3[5];
  lVar6 = plVar3[4] + 8;
  puStack_c8 = &UNK_10781cc28;
  uStack_d8 = param_2;
  ppuStack_d0 = &puStack_20;
  func_0x000107821e20();
  ppuStack_118 = &PTR_DAT_1109e0390;
  pppuStack_100 = &ppuStack_118;
  lStack_110 = lVar5;
  if (*(char *)(lVar6 + 0x20) == '\x01') {
    func_0x0001077f795c(auStack_178);
    func_0x0001077f795c(auStack_158,&ppuStack_118);
    puVar4 = (undefined8 *)0x48;
    __Znwm();
    *puVar4 = &PTR_DAT_1109e0410;
    func_0x00010781bbac(puVar4 + 1,auStack_178);
    func_0x00010781bbac(puVar4 + 5,auStack_158);
    puStack_120 = puVar4;
    func_0x00010781d0e8(auStack_b0,appuStack_138);
    pppuVar1 = appuStack_138;
  }
  else {
    func_0x00010781d0e8(auStack_b0,&ppuStack_118);
    pppuVar1 = &ppuStack_118;
  }
  pppuVar2 = (undefined ***)pppuVar1[3];
  if (pppuVar2 == pppuVar1) {
    lVar6 = 0x20;
  }
  else {
    if (pppuVar2 == (undefined ***)0x0) {
      return pppuVar1;
    }
    lVar6 = 0x28;
  }
  (**(code **)((long)*pppuVar2 + lVar6))();
  return pppuVar1;
}



/* Entry: 10781cf30; end: 10781cf57;  */

void FUN_10781cf30(undefined8 param_1)

{
  func_0x000107822b3c();
  func_0x0001078226b0(param_1,&PTR_DAT_1109e03f0);
  func_0x000107822150();
  return;
}



/* Entry: 10781d088; end: 10781d093;  */

undefined ** FUN_10781d088(void)

{
  return &PTR_DAT_1109e0470;
}



/* Entry: 10781d970; end: 10781d993;  */

void FUN_10781d970(long param_1)

{
  func_0x000107822018();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781dc1c; end: 10781dc2b;  */

long FUN_10781dc1c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10781de4c; end: 10781dee7;  */

/* WARNING: Possible PIC construction at 0x00010781dec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781dec8) */

void FUN_10781de4c(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001078221e8();
  func_0x000107821e20();
  func_0x000100061de0();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = *(char *)(lVar2 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((!bVar1) || (func_0x000107822514(), !bVar1)) {
      func_0x000107822ad4();
      goto code_r0x00010781dee8;
    }
    func_0x0001078223f0();
    func_0x0001078224d4();
    lVar2 = *unaff_x19;
  }
  func_0x000107821e80(lVar2);
  func_0x000107821dac(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010781dee8:
  func_0x0001078230e4();
  func_0x0001075533fc();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x000107822f40();
      func_0x0001078229c4();
      func_0x0001078222a8();
      func_0x00010781df58();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10781e398; end: 10781e413;  */

void FUN_10781e398(long param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puStack_48;
  
  func_0x0001078221e8();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = *unaff_x20;
    puVar2 = puVar1 + 2;
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x000107822940((long)puVar1 - *unaff_x19);
    func_0x000107822160();
    func_0x000107822930();
    uVar3 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar3;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    func_0x000107822438();
    puVar2 = (undefined8 *)unaff_x19[1];
    func_0x000107822e6c();
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 10781e840; end: 10781e917;  */

/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */

undefined8 * FUN_10781e840(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000107822a74();
  puVar3 = param_2;
  func_0x000107822170();
  puVar2 = param_2;
  func_0x0001078224f0();
  if (((ulong)param_2 & 1) == 0) {
    if ((int)puVar2 == 0) {
      return puVar2;
    }
    func_0x000107822f04();
    unaff_x21 = unaff_x19;
    func_0x000107822170();
    if ((int)unaff_x21 == 0) {
      return unaff_x21;
    }
    func_0x000107822444();
  }
  else {
    puVar3 = unaff_x20;
    if ((int)puVar2 == 0) {
      func_0x000107822444();
      FUN_10781f098();
      func_0x0001078224f0();
      unaff_x21 = unaff_x19;
      if ((int)puVar2 == 0) {
        return puVar2;
      }
    }
  }
  func_0x0001078220d8();
  func_0x000107821e20();
  func_0x0001078220fc();
  func_0x00010782265c();
  func_0x0001078221e8();
  *unaff_x21 = *puVar3;
  func_0x000107822eb8(unaff_x21 + 1,puVar3 + 1);
  *(undefined2 *)(unaff_x19 + 0xd1) = *(undefined2 *)(unaff_x20 + 0xd1);
  puVar2 = unaff_x19 + 0xd2;
  cVar1 = *(char *)(unaff_x19 + 0xd6);
  if (cVar1 != *(char *)(unaff_x20 + 0xd6)) {
    if (cVar1 == '\0') {
      func_0x00010781bb90(puVar2,unaff_x20 + 0xd2);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar1 == '\0') goto code_r0x00010781f1b0;
  puVar3 = (undefined8 *)unaff_x19[0xd5];
  unaff_x19[0xd5] = 0;
  if (puVar3 == puVar2) {
    uVar4 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar4);
  }
  else if (puVar3 != (undefined8 *)0x0) {
    uVar4 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar3 = (undefined8 *)unaff_x20[0xd5];
  if (puVar3 == (undefined8 *)0x0) {
    unaff_x19[0xd5] = 0;
  }
  else if (puVar3 == unaff_x20 + 0xd2) {
    unaff_x19[0xd5] = puVar2;
    func_0x000107822650(unaff_x20[0xd5]);
    (*extraout_x8)();
  }
  else {
    unaff_x19[0xd5] = puVar3;
    unaff_x20[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar5 = unaff_x20[0xd8];
  uVar4 = unaff_x20[0xd7];
  uVar7 = unaff_x20[0xda];
  uVar6 = unaff_x20[0xd9];
  uVar9 = unaff_x20[0xdc];
  uVar8 = unaff_x20[0xdb];
  uVar10 = *(undefined8 *)((long)unaff_x20 + 0x6e1);
  *(undefined8 *)((long)unaff_x19 + 0x6e9) = *(undefined8 *)((long)unaff_x20 + 0x6e9);
  *(undefined8 *)((long)unaff_x19 + 0x6e1) = uVar10;
  unaff_x19[0xda] = uVar7;
  unaff_x19[0xd9] = uVar6;
  unaff_x19[0xdc] = uVar9;
  unaff_x19[0xdb] = uVar8;
  unaff_x19[0xd8] = uVar5;
  unaff_x19[0xd7] = uVar4;
  uVar4 = unaff_x20[0xdf];
  unaff_x19[0xe0] = unaff_x20[0xe0];
  unaff_x19[0xdf] = uVar4;
  return unaff_x19;
}



/* Entry: 10781f098; end: 10781f0ef;  */

/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */

void FUN_10781f098(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x0001078220d8();
  func_0x000107821e20();
  func_0x0001078220fc();
  func_0x00010782265c();
  func_0x0001078221e8();
  *param_1 = *param_2;
  func_0x000107822eb8(param_1 + 1,param_2 + 1);
  *(undefined2 *)(unaff_x19 + 0x688) = *(undefined2 *)(unaff_x20 + 0x688);
  lVar1 = unaff_x19 + 0x690;
  cVar2 = *(char *)(unaff_x19 + 0x6b0);
  if (cVar2 != *(char *)(unaff_x20 + 0x6b0)) {
    if (cVar2 == '\0') {
      func_0x00010781bb90(lVar1,unaff_x20 + 0x690);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0x6b0) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar2 == '\0') goto code_r0x00010781f1b0;
  lVar3 = *(long *)(unaff_x19 + 0x6a8);
  *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  if (lVar3 == lVar1) {
    uVar4 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar4);
  }
  else if (lVar3 != 0) {
    uVar4 = 0x28;
    goto code_r0x00010781f174;
  }
  lVar3 = *(long *)(unaff_x20 + 0x6a8);
  if (lVar3 == 0) {
    *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  }
  else if (lVar3 == unaff_x20 + 0x690) {
    *(long *)(unaff_x19 + 0x6a8) = lVar1;
    func_0x000107822650(*(undefined8 *)(unaff_x20 + 0x6a8));
    (*extraout_x8)();
  }
  else {
    *(long *)(unaff_x19 + 0x6a8) = lVar3;
    *(undefined8 *)(unaff_x20 + 0x6a8) = 0;
  }
code_r0x00010781f1b0:
  uVar5 = *(undefined8 *)(unaff_x20 + 0x6c0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x6b8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x6d0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x6c8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x6e0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x6d8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x6e1);
  *(undefined8 *)(unaff_x19 + 0x6e9) = *(undefined8 *)(unaff_x20 + 0x6e9);
  *(undefined8 *)(unaff_x19 + 0x6e1) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x6d0) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x6c8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x6e0) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x6d8) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x6c0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x6b8) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x6f8);
  *(undefined8 *)(unaff_x19 + 0x700) = *(undefined8 *)(unaff_x20 + 0x700);
  *(undefined8 *)(unaff_x19 + 0x6f8) = uVar4;
  return;
}



/* Entry: 10781f5dc; end: 10781f5e7;  */

undefined8 * FUN_10781f5dc(undefined8 *param_1)

{
  func_0x000107822090();
  func_0x000104c2f714(param_1 + 9);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 10781f884; end: 10781f95b;  */

void FUN_10781f884(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [8];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  ulong *puStack_38;
  
  func_0x0001078221e8();
  puVar3 = param_1 + 2;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)*puVar3) {
    uVar9 = *unaff_x20;
    puVar8 = puVar6 + 2;
    puVar6[1] = unaff_x20[1];
    *puVar6 = uVar9;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    lVar7 = (long)puVar6 - *unaff_x19;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      func_0x00010781bdd4();
LAB_10781f958:
      func_0x000104bd35f4();
      if (param_2 == (long *)0x0) {
        func_0x000104bfeb48();
        func_0x0001078230f8();
        while (unaff_x20 != (undefined8 *)0x0) {
          param_1 = unaff_x20 + 3;
          unaff_x20 = (undefined8 *)*unaff_x20;
          func_0x0001074b5130();
          func_0x0001078224e8();
        }
        func_0x000107822330();
        if (param_1 != (undefined8 *)0x0) {
          __ZdlPv();
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010781f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x30))(param_1,param_2);
      return;
    }
    uVar4 = (long)*puVar3 - *unaff_x19;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    puStack_38 = puVar3;
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar5 >> 0x3c != 0) goto LAB_10781f958;
      lVar2 = uVar5 << 4;
      __Znwm();
    }
    puStack_50 = (undefined8 *)(lVar2 + lVar7);
    lStack_40 = lVar2 + uVar5 * 0x10;
    uVar9 = *unaff_x20;
    puStack_48 = puStack_50 + 2;
    puStack_50[1] = unaff_x20[1];
    *puStack_50 = uVar9;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    func_0x0001078225f0();
    func_0x00010781bde0();
    puVar8 = (undefined8 *)unaff_x19[1];
    func_0x00010781be00(auStack_58);
  }
  unaff_x19[1] = (long)puVar8;
  return;
}



/* Entry: 10781fc64; end: 10781fcb7;  */

void FUN_10781fc64(long *param_1,long param_2)

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



/* Entry: 10781ffe4; end: 10781fffb;  */

/* WARNING: Possible PIC construction at 0x000107820044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078200ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107820048) */
/* WARNING: Removing unreachable block (ram,0x00010782004c) */
/* WARNING: Removing unreachable block (ram,0x00010782005c) */
/* WARNING: Removing unreachable block (ram,0x000107820064) */
/* WARNING: Removing unreachable block (ram,0x00010782006c) */
/* WARNING: Removing unreachable block (ram,0x000107820074) */
/* WARNING: Removing unreachable block (ram,0x00010782007c) */
/* WARNING: Removing unreachable block (ram,0x000107820094) */
/* WARNING: Removing unreachable block (ram,0x000107820084) */
/* WARNING: Removing unreachable block (ram,0x00010782008c) */
/* WARNING: Removing unreachable block (ram,0x000107820098) */
/* WARNING: Removing unreachable block (ram,0x0001078200a0) */
/* WARNING: Removing unreachable block (ram,0x0001078200b0) */
/* WARNING: Removing unreachable block (ram,0x0001078200b4) */
/* WARNING: Removing unreachable block (ram,0x0001078200a8) */
/* WARNING: Removing unreachable block (ram,0x000107820054) */
/* WARNING: Removing unreachable block (ram,0x0001078200f0) */

void FUN_10781ffe4(long *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  
  lVar2 = (long)(64.0 / *(float *)(param_1 + 4));
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x000107820100;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x000107820100:
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107820434; end: 1078204d3;  */

long FUN_107820434(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(uint *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 107820b28; end: 107820b4b;  */

undefined8 FUN_107820b28(undefined8 param_1)

{
  func_0x000107820b10(param_1,0);
  return param_1;
}



/* Entry: 107821598; end: 1078215af;  */

void FUN_107821598(long *param_1,long param_2)

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



/* Entry: 1078217a8; end: 1078217c3;  */

void FUN_1078217a8(void)

{
  func_0x0001078221c0();
  func_0x0001078217c4();
  return;
}



/* Entry: 1078218e8; end: 107821933;  */

void FUN_1078218e8(void)

{
  undefined1 in_ZR;
  
  func_0x000107821f50();
  if ((bool)in_ZR) {
    func_0x000107822484();
  }
  func_0x000107822470();
  func_0x000107821934();
  func_0x0001078221e0();
  func_0x0001078221d8();
  func_0x000107822274();
  return;
}



/* Entry: 107821ac8; end: 107821acb;  */

void FUN_107821ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107821d10; end: 107821d53;  */

void FUN_107821d10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 auStack_30 [2];
  
  func_0x0001078228a8();
  *param_3 = 0;
  param_3[1] = 0;
  auStack_30[0] = param_1;
  func_0x0001078144f4();
  func_0x0001074fa24c(auStack_30);
  return;
}



/* Entry: 107824044; end: 10782404f;  */

undefined1  [16] FUN_107824044(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x000107824400();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x0001078240b4(*param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107824298; end: 107824313;  */

long * FUN_107824298(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x58;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x58;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x58;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x58;
  return param_1;
}



/* Entry: 107824f80; end: 10782503b;  */

void FUN_107824f80(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x30) * 0x30;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
    func_0x0001078250b4(lVar2,lVar3);
    lVar2 = lVar2 + 0x30;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    func_0x000107405908(lVar4 + 0x10);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10782546c; end: 10782558b;  */

void FUN_10782546c(long param_1,undefined8 param_2,float param_3,float *param_4,float *param_5,
                  undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_d8 [104];
  
  fVar1 = *param_5;
  fVar9 = param_5[1];
  fVar2 = fVar1;
  func_0x0001074827ac();
  fVar3 = fVar2;
  func_0x0001078278ac();
  fVar6 = fVar3;
  func_0x0001078278ac();
  fVar5 = param_3;
  func_0x0001078278ac();
  if (*(char *)(param_4 + 0x18) == '\x01') {
    fVar6 = *param_4;
    uVar4 = *(undefined8 *)(param_4 + 0x14);
    uVar10 = CONCAT44((float)((ulong)uVar4 >> 0x20) / fVar6,(float)uVar4 / fVar6);
    func_0x0001078278ac();
    fVar7 = param_4[0x16] / fVar6;
    fVar11 = (float)uVar4 - fVar7;
    func_0x0001078278ac();
    fVar6 = param_4[0x17] / fVar6;
    fVar8 = fVar7 - fVar6;
  }
  else {
    uVar10 = 0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    fVar7 = fVar5;
  }
  func_0x0001078253e8(param_6);
  fVar9 = fVar9 - fVar7 * param_3;
  fVar1 = fVar1 - fVar6 * fVar2;
  func_0x0001073f6580(auStack_d8,param_4);
  func_0x000107407038(param_1,auStack_d8);
  *(float *)(param_1 + 0x68) = fVar9;
  *(float *)(param_1 + 0x6c) = fVar5 + fVar9;
  *(float *)(param_1 + 0x70) = fVar1;
  *(float *)(param_1 + 0x74) = fVar3 + fVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  *(float *)(param_1 + 0x80) = fVar11;
  *(float *)(param_1 + 0x84) = fVar8;
  func_0x0001073bc874(auStack_d8);
  return;
}



/* Entry: 107826908; end: 10782698f;  */

long FUN_107826908(undefined8 *param_1,undefined2 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined2 uStack_22;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if ((long)uVar3 < 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar3 = param_1[1];
  }
  if (uVar3 < param_3) {
    lVar1 = -1;
  }
  else {
    lVar2 = (long)puVar4 + param_3 * 2;
    uStack_22 = param_2;
    func_0x000107826960(lVar2,uVar3 - param_3,&uStack_22);
    lVar1 = lVar2 - (long)puVar4 >> 1;
    if (lVar2 == 0) {
      lVar1 = -1;
    }
  }
  return lVar1;
}



/* Entry: 107826d3c; end: 107826d93;  */

long * FUN_107826d3c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x186186186186187) {
    uVar1 = (param_1[2] - *param_1) / 0xa8;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xc30c30c30c30c2 < uVar1) {
      plVar2 = (long *)0x186186186186186;
    }
    return plVar2;
  }
  func_0x000107826df4();
  func_0x0001078278bc();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0xa8) * 0xa8;
  func_0x000107826ea0(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010782782c();
  return plVar2;
}



/* Entry: 107826fa4; end: 107826fc3;  */

void FUN_107826fa4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    func_0x000107405490();
  }
  return;
}



/* Entry: 1078271b8; end: 107827267;  */

long * FUN_1078271b8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x50;
    func_0x00010740553c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107827598; end: 107827633;  */

long * FUN_107827598(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= (ulong)plVar5[4]) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= (ulong)plVar5[4]) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < (ulong)plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 107827c18; end: 107827c3b;  */

void FUN_107827c18(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined2 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 107827f8c; end: 107828057;  */

long FUN_107827f8c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uStack_68;
  
  FUN_107826d3c(param_1,(param_1[1] - *param_1) / 0xa8 + 1);
  func_0x000107828674();
  func_0x000107828058(uStack_68,param_2,param_3,param_4,param_5,param_6,param_7);
  func_0x000107828650();
  func_0x000107826d94();
  lVar1 = param_1[1];
  func_0x000107828614();
  return lVar1;
}



/* Entry: 1078284d0; end: 107828527;  */

undefined1 * FUN_1078284d0(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x3ff0000000000000;
  func_0x0001072d124c(param_1 + 0x18);
  param_1[0x28] = 0;
  param_1[0x38] = 0;
  func_0x0001072627ac(param_1 + 0x40,param_2);
  param_1[0x80] = 0;
  param_1[0x90] = 0;
  param_1[0x98] = 0;
  param_1[0xa0] = 0;
  return param_1;
}



/* Entry: 1078288dc; end: 107828977;  */

void FUN_1078288dc(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong auStack_30 [2];
  
  auStack_30[0] = (ulong)*param_3;
  auStack_30[1] = 0;
  uVar1 = param_2;
  func_0x0001003a91d4();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x0001072b9f3c(param_1,&uStack_40,8,auStack_30);
  return;
}



/* Entry: 107828c3c; end: 107828c63;  */

void FUN_107828c3c(long param_1)

{
  func_0x000107828ae0(param_1 + -0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107829790; end: 1078297bf;  */

undefined1 * FUN_107829790(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  func_0x0001078297c0();
  return param_1;
}



/* Entry: 107829c04; end: 107829c63;  */

long * FUN_107829c04(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0xf83e0f83e0f83f) {
    uVar1 = (param_1[2] - *param_1) / 0x108;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x7c1f07c1f07c1e < uVar1) {
      plVar2 = (long *)0xf83e0f83e0f83e;
    }
    return plVar2;
  }
  func_0x0001072844bc();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x108) * 0x108;
  func_0x000107829d3c(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 107829ec4; end: 107829ee7;  */

undefined8 FUN_107829ec4(undefined8 param_1)

{
  func_0x000107829ee8(param_1,0);
  return param_1;
}



/* Entry: 10782a0c0; end: 10782a0e3;  */

void FUN_10782a0c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e0880;
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010782a364();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10782a280; end: 10782a417;  */

undefined ** FUN_10782a280(void)

{
  return &PTR_DAT_1109e0970;
}



/* Entry: 10782a984; end: 10782a9b7;  */

undefined8 * FUN_10782a984(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010782ac84();
  func_0x00010782a9b8(puVar1 + 0x6f);
  func_0x00010750c6cc(param_1 + 0x6d);
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  FUN_107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10782ac2c; end: 10782acdb;  */

undefined ** FUN_10782ac2c(void)

{
  return &PTR_DAT_1109e0c30;
}



/* Entry: 10782b074; end: 10782b2c3;  */

long FUN_10782b074(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    lVar2 = lVar3;
    func_0x00010782b00c(lVar3);
    iVar4 = iVar4 + (int)lVar2;
  }
  return (long)iVar4;
}


