/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e530a8; end: 106e53127;  */

bool FUN_106e530a8(undefined8 *param_1)

{
  bool bVar1;
  double *pdVar2;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 *unaff_x21;
  double unaff_d8;
  
  func_0x0001003ac254();
  pdVar2 = (double *)*param_1;
  FUN_106e51d80();
  func_0x000106e54558();
  if (*pdVar2 <= unaff_d8) {
    pdVar2 = (double *)*unaff_x21;
    FUN_106e51d80();
    func_0x000106e54558();
    if (unaff_d8 == *pdVar2) {
      bVar1 = *unaff_x20 < *unaff_x19;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106e53128; end: 106e532ff;  */

undefined1  [16] FUN_106e53128(float param_1,float param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  long *aplStack_58 [3];
  
  uVar6 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_106e531d4;
          uVar5 = plVar7[1];
          if (uVar5 != uVar6) break;
          if (plVar7[2] == uVar6) {
            uVar2 = 0;
            aplStack_58[0] = plVar7;
            goto LAB_106e532d4;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar1 * uVar8;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_106e531d4:
  FUN_106e53300(aplStack_58,param_3,uVar6);
  func_0x000106e546a8();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x000106e545a8(uVar8 << 1);
    func_0x000106e53350(param_3);
    uVar8 = param_3[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_3;
  plVar7 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar6 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar3 * uVar8;
      }
      *(long **)(lVar4 + uVar6 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar7;
    *plVar7 = (long)aplStack_58[0];
  }
  func_0x000106e545c0();
  FUN_106e53500();
  uVar2 = 1;
LAB_106e532d4:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = aplStack_58[0];
  return auVar9;
}



/* Entry: 106e53300; end: 106e533ff;  */

void FUN_106e53300(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uVar2 = *(undefined8 *)*param_5;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  return;
}



/* Entry: 106e53400; end: 106e534cb;  */

void FUN_106e53400(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_106e534cc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_106e534e4(plVar6);
    FUN_106e534cc(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000106e546dc();
      func_0x000106e546c8();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000106e54498();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 106e534cc; end: 106e534e3;  */

void FUN_106e534cc(long *param_1,long param_2)

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



/* Entry: 106e534e4; end: 106e534ff;  */

void FUN_106e534e4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000106e5462c();
  FUN_106e53520();
  return;
}



/* Entry: 106e53500; end: 106e5351f;  */

void FUN_106e53500(void)

{
  func_0x000106e5462c();
  FUN_106e53520();
  return;
}



/* Entry: 106e53520; end: 106e53537;  */

void FUN_106e53520(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000100100fec(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 106e53538; end: 106e535bb;  */

void FUN_106e53538(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000100100fec(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 106e535bc; end: 106e53767;  */

void FUN_106e535bc(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  func_0x0001003ac254();
  func_0x0001003ab96c(auStack_70);
  func_0x0001003abb10();
  lVar1 = *unaff_x20;
  *unaff_x20 = (long)puVar2;
  unaff_x20[1] = unaff_x20[1] + (lVar1 - (long)puVar2);
  func_0x000106e53620();
  *unaff_x19 = puVar3;
  return;
}



/* Entry: 106e53768; end: 106e53847;  */

void FUN_106e53768(void)

{
  long extraout_x8;
  byte extraout_w9;
  
  func_0x000106e54424();
  func_0x000106e54608();
  *(byte *)(extraout_x8 + 9) = extraout_w9 & 0x8f | 0x20;
  return;
}



/* Entry: 106e53848; end: 106e539cf;  */

char * FUN_106e53848(char *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 uVar1;
  int extraout_w8;
  undefined8 *unaff_x20;
  char *unaff_x21;
  char *pcStack_38;
  
  func_0x0001003a9ccc();
  pcStack_38 = param_1;
  func_0x000106e546bc(*param_1);
  if ((bool)in_CY && !(bool)in_ZR) {
    if (extraout_w8 == 0x7b) {
      param_1 = param_1 + 1;
      if (param_1 != unaff_x21) {
        FUN_106e53b9c();
      }
      if ((param_1 == unaff_x21) || (*param_1 != '}')) {
        FUN_106e539d0();
      }
      else {
        param_1 = param_1 + 1;
      }
    }
  }
  else {
    uVar1 = SUB84(&pcStack_38,0);
    func_0x000106e53b54();
    *(undefined4 *)*unaff_x20 = uVar1;
    param_1 = pcStack_38;
  }
  return param_1;
}



/* Entry: 106e539d0; end: 106e539df;  */

void FUN_106e539d0(long param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar3 = *(long **)(param_1 + 0x10);
  func_0x00010bd48714();
  lVar6 = *plVar3;
  puVar1 = (undefined1 *)(lVar6 + 10);
  uVar2 = param_3;
  if (param_3 < 5) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    }
    *(char *)(lVar6 + 0xe) = (char)param_3;
    return;
  }
  puVar4 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_106e53aa8();
  puVar5 = puVar4;
  ___cxa_throw(puVar4,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  ___cxa_free_exception(puVar4);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar5 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e539e0; end: 106e539eb;  */

void FUN_106e539e0(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *param_1;
  puVar1 = (undefined1 *)(lVar5 + 10);
  uVar2 = param_3;
  if (param_3 < 5) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    }
    *(char *)(lVar5 + 0xe) = (char)param_3;
    return;
  }
  puVar3 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_106e53aa8();
  puVar4 = puVar3;
  ___cxa_throw(puVar3,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  ___cxa_free_exception(puVar3);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar4 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e539ec; end: 106e53a27;  */

void FUN_106e539ec(long *param_1,int param_2)

{
  if (param_2 == 4) {
    FUN_106e53ad0(param_1 + 3);
  }
  *(byte *)(*param_1 + 9) = *(byte *)(*param_1 + 9) & 0xf0 | (byte)param_2 & 0xf;
  return;
}



/* Entry: 106e53a28; end: 106e53aa7;  */

void FUN_106e53a28(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = param_3;
  puVar2 = param_1;
  if (param_3 < 5) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1[4] = (char)param_3;
    return;
  }
  puVar3 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_106e53aa8();
  puVar4 = puVar3;
  ___cxa_throw(puVar3,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  ___cxa_free_exception(puVar3);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar4 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e53aa8; end: 106e53aab;  */

void FUN_106e53aa8(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e53aac; end: 106e53acf;  */

void FUN_106e53aac(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e53ad0; end: 106e53af3;  */

void FUN_106e53ad0(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  
  if ((int)param_1[1] - 1U < 0xb) {
    return;
  }
  puVar6 = &UNK_10f3dbeea;
  plVar3 = *(long **)(*param_1 + 0x10);
  func_0x00010bd48714();
  lVar7 = *plVar3;
  puVar1 = (undefined1 *)(lVar7 + 10);
  uVar2 = param_3;
  if (param_3 < 5) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar6;
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
    }
    *(char *)(lVar7 + 0xe) = (char)param_3;
    return;
  }
  puVar4 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_106e53aa8();
  puVar5 = puVar4;
  ___cxa_throw(puVar4,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  ___cxa_free_exception(puVar4);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar5 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e53af4; end: 106e53b9b;  */

void FUN_106e53af4(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  
  FUN_106e53ad0();
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 - 1 < 8) && (8 < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x10aU) == 0)) {
    puVar7 = &UNK_10f3dbf15;
    plVar4 = *(long **)(*param_1 + 0x10);
    func_0x00010bd48714();
    lVar8 = *plVar4;
    puVar1 = (undefined1 *)(lVar8 + 10);
    uVar3 = param_3;
    if (4 < param_3) {
      puVar5 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      FUN_106e53aa8();
      puVar6 = puVar5;
      ___cxa_throw(puVar5,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
      ___cxa_free_exception(puVar5);
      __Unwind_Resume();
      __ZNSt13runtime_errorC2EPKc();
      *puVar6 = &PTR_DAT_110d9ebf8;
      return;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar7;
      puVar1 = puVar1 + 1;
      puVar7 = puVar7 + 1;
    }
    *(char *)(lVar8 + 0xe) = (char)param_3;
  }
  return;
}



/* Entry: 106e53b9c; end: 106e53c9f;  */

char * FUN_106e53b9c(undefined8 param_1,char *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  char *pcVar4;
  char *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  long extraout_x9;
  uint extraout_w10;
  undefined4 extraout_w10_00;
  char *unaff_x21;
  char *pcStack_38;
  
  func_0x000106e545f0();
  if (!(bool)in_ZR) {
    bVar2 = 0x39 < extraout_w8;
    bVar3 = extraout_w8 == 0x3a;
    if (!bVar3) {
      func_0x000106e546bc();
      if (!bVar2 || bVar3) {
        if (extraout_w8_00 == 0x30) {
          pcStack_38 = unaff_x21 + 1;
        }
        else {
          FUN_106e53ca8(&pcStack_38,param_2);
        }
        if ((pcStack_38 != param_2) && ((*pcStack_38 == ':' || (*pcStack_38 == '}')))) {
          func_0x000106e53cf8();
          return pcStack_38;
        }
        func_0x000106e543f8();
        func_0x000106e53cf0();
        return pcStack_38;
      }
      uVar1 = (extraout_w8_00 & 0xffffffdf) - 0x41;
      if ((extraout_w8_00 != 0x5f && 0x18 < uVar1) && (extraout_w8_00 == 0x5f || uVar1 != 0x19)) {
        func_0x000106e543f8();
        func_0x000106e53cf0();
        return unaff_x21;
      }
      pcVar4 = unaff_x21 + 1;
      do {
        bVar3 = param_2 <= pcVar4;
        if (pcVar4 == param_2) goto LAB_106e53c30;
        func_0x000106e545d8();
        pcVar4 = extraout_x8;
      } while ((!bVar3) || (extraout_w9 == 0x5f || extraout_w10 < 0x1a));
      param_2 = extraout_x8 + -1;
LAB_106e53c30:
      func_0x000106e546f0();
      *(undefined4 *)(extraout_x9 + 0x10) = extraout_w10_00;
      *(char **)(extraout_x9 + 0x18) = unaff_x21;
      *(undefined8 *)(extraout_x9 + 0x20) = extraout_x8_00;
      return param_2;
    }
  }
  FUN_106e53ca0();
  return unaff_x21;
}



/* Entry: 106e53ca0; end: 106e53ca7;  */

void FUN_106e53ca0(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  
  uVar1 = (undefined4)*param_1;
  func_0x000106e54660();
  lVar2 = *(long *)(unaff_x19 + 8);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(undefined4 *)(lVar2 + 0x18) = uVar1;
  return;
}



/* Entry: 106e53ca8; end: 106e53cef;  */

undefined8 FUN_106e53ca8(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint extraout_w9;
  uint uVar3;
  uint extraout_w9_00;
  uint uVar4;
  undefined8 unaff_x19;
  
  func_0x000106e54370();
  uVar3 = extraout_w9;
  do {
    uVar4 = (uint)unaff_x19;
    uVar1 = uVar3 <= uVar4;
    bVar2 = uVar4 == uVar3;
    if ((bool)uVar1 && !bVar2) {
      unaff_x19 = 0x80000000;
      goto LAB_106e53cdc;
    }
    func_0x000106e543b8();
  } while ((!bVar2) && (func_0x000106e54578(), uVar3 = extraout_w9_00, !(bool)uVar1));
  if ((int)uVar4 < 0) {
LAB_106e53cdc:
    func_0x000106e54568();
    FUN_106e53cf0();
  }
  return unaff_x19;
}



/* Entry: 106e53cf0; end: 106e53cff;  */

void FUN_106e53cf0(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar3 = *(long **)(*param_1 + 0x10);
  func_0x00010bd48714();
  lVar6 = *plVar3;
  puVar1 = (undefined1 *)(lVar6 + 10);
  uVar2 = param_3;
  if (param_3 < 5) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    }
    *(char *)(lVar6 + 0xe) = (char)param_3;
    return;
  }
  puVar4 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_106e53aa8();
  puVar5 = puVar4;
  ___cxa_throw(puVar4,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  ___cxa_free_exception(puVar4);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar5 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e53d00; end: 106e53d4f;  */

void FUN_106e53d00(undefined4 param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000106e54660();
  lVar1 = *(long *)(unaff_x19 + 8);
  *(undefined4 *)(lVar1 + 0x10) = 1;
  *(undefined4 *)(lVar1 + 0x18) = param_1;
  return;
}



/* Entry: 106e53d50; end: 106e53d7b;  */

char * FUN_106e53d50(char *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  char *pcVar5;
  char *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  long extraout_x9;
  uint extraout_w10;
  undefined4 extraout_w10_00;
  char *pcVar6;
  char *unaff_x21;
  char *pcStack_48;
  
  uVar3 = *(int *)(param_1 + 0x10) == 1;
  if (*(int *)(param_1 + 0x10) < 1) {
    param_1[0x10] = -1;
    param_1[0x11] = -1;
    param_1[0x12] = -1;
    param_1[0x13] = -1;
    return param_1;
  }
  pcVar6 = "cannot switch from automatic to manual argument indexing";
  func_0x00010bd48714();
  func_0x000106e545f0();
  if (!(bool)uVar3) {
    bVar2 = 0x39 < extraout_w8;
    bVar4 = extraout_w8 == 0x3a;
    if (!bVar4) {
      func_0x000106e546bc();
      if (!bVar2 || bVar4) {
        if (extraout_w8_00 == 0x30) {
          pcStack_48 = unaff_x21 + 1;
        }
        else {
          FUN_106e53e88(&pcStack_48,pcVar6);
        }
        if ((pcStack_48 != pcVar6) && ((*pcStack_48 == ':' || (*pcStack_48 == '}')))) {
          func_0x000106e53ed8();
          return pcStack_48;
        }
        func_0x000106e543f8();
        func_0x000106e53ed0();
        return pcStack_48;
      }
      uVar1 = (extraout_w8_00 & 0xffffffdf) - 0x41;
      if ((extraout_w8_00 != 0x5f && 0x18 < uVar1) && (extraout_w8_00 == 0x5f || uVar1 != 0x19)) {
        func_0x000106e543f8();
        func_0x000106e53ed0();
        return unaff_x21;
      }
      pcVar5 = unaff_x21 + 1;
      do {
        bVar4 = pcVar6 <= pcVar5;
        if (pcVar5 == pcVar6) goto LAB_106e53e10;
        func_0x000106e545d8();
        pcVar5 = extraout_x8;
      } while ((!bVar4) || (extraout_w9 == 0x5f || extraout_w10 < 0x1a));
      pcVar6 = extraout_x8 + -1;
LAB_106e53e10:
      func_0x000106e546f0();
      *(undefined4 *)(extraout_x9 + 0x28) = extraout_w10_00;
      *(char **)(extraout_x9 + 0x30) = unaff_x21;
      *(undefined8 *)(extraout_x9 + 0x38) = extraout_x8_00;
      return pcVar6;
    }
  }
  FUN_106e53e80();
  return unaff_x21;
}



/* Entry: 106e53d7c; end: 106e53e7f;  */

char * FUN_106e53d7c(undefined8 param_1,char *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  char *pcVar4;
  char *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  long extraout_x9;
  uint extraout_w10;
  undefined4 extraout_w10_00;
  char *unaff_x21;
  char *pcStack_38;
  
  func_0x000106e545f0();
  if (!(bool)in_ZR) {
    bVar2 = 0x39 < extraout_w8;
    bVar3 = extraout_w8 == 0x3a;
    if (!bVar3) {
      func_0x000106e546bc();
      if (!bVar2 || bVar3) {
        if (extraout_w8_00 == 0x30) {
          pcStack_38 = unaff_x21 + 1;
        }
        else {
          FUN_106e53e88(&pcStack_38,param_2);
        }
        if ((pcStack_38 != param_2) && ((*pcStack_38 == ':' || (*pcStack_38 == '}')))) {
          func_0x000106e53ed8();
          return pcStack_38;
        }
        func_0x000106e543f8();
        func_0x000106e53ed0();
        return pcStack_38;
      }
      uVar1 = (extraout_w8_00 & 0xffffffdf) - 0x41;
      if ((extraout_w8_00 != 0x5f && 0x18 < uVar1) && (extraout_w8_00 == 0x5f || uVar1 != 0x19)) {
        func_0x000106e543f8();
        func_0x000106e53ed0();
        return unaff_x21;
      }
      pcVar4 = unaff_x21 + 1;
      do {
        bVar3 = param_2 <= pcVar4;
        if (pcVar4 == param_2) goto LAB_106e53e10;
        func_0x000106e545d8();
        pcVar4 = extraout_x8;
      } while ((!bVar3) || (extraout_w9 == 0x5f || extraout_w10 < 0x1a));
      param_2 = extraout_x8 + -1;
LAB_106e53e10:
      func_0x000106e546f0();
      *(undefined4 *)(extraout_x9 + 0x28) = extraout_w10_00;
      *(char **)(extraout_x9 + 0x30) = unaff_x21;
      *(undefined8 *)(extraout_x9 + 0x38) = extraout_x8_00;
      return param_2;
    }
  }
  FUN_106e53e80();
  return unaff_x21;
}



/* Entry: 106e53e80; end: 106e53e87;  */

void FUN_106e53e80(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  
  uVar1 = (undefined4)*param_1;
  func_0x000106e54660();
  lVar2 = *(long *)(unaff_x19 + 8);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  return;
}



/* Entry: 106e53e88; end: 106e53ecf;  */

undefined8 FUN_106e53e88(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint extraout_w9;
  uint uVar3;
  uint extraout_w9_00;
  uint uVar4;
  undefined8 unaff_x19;
  
  func_0x000106e54370();
  uVar3 = extraout_w9;
  do {
    uVar4 = (uint)unaff_x19;
    uVar1 = uVar3 <= uVar4;
    bVar2 = uVar4 == uVar3;
    if ((bool)uVar1 && !bVar2) {
      unaff_x19 = 0x80000000;
      goto LAB_106e53ebc;
    }
    func_0x000106e543b8();
  } while ((!bVar2) && (func_0x000106e54578(), uVar3 = extraout_w9_00, !(bool)uVar1));
  if ((int)uVar4 < 0) {
LAB_106e53ebc:
    func_0x000106e54568();
    FUN_106e53ed0();
  }
  return unaff_x19;
}



/* Entry: 106e53ed0; end: 106e53edf;  */

void FUN_106e53ed0(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar3 = *(long **)(*param_1 + 0x10);
  func_0x00010bd48714();
  lVar6 = *plVar3;
  puVar1 = (undefined1 *)(lVar6 + 10);
  uVar2 = param_3;
  if (param_3 < 5) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    }
    *(char *)(lVar6 + 0xe) = (char)param_3;
    return;
  }
  puVar4 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_106e53aa8();
  puVar5 = puVar4;
  ___cxa_throw(puVar4,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  ___cxa_free_exception(puVar4);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar5 = &PTR_DAT_110d9ebf8;
  return;
}



/* Entry: 106e53ee0; end: 106e53f2f;  */

void FUN_106e53ee0(undefined4 param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000106e54660();
  lVar1 = *(long *)(unaff_x19 + 8);
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x30) = param_1;
  return;
}



/* Entry: 106e53f30; end: 106e53f63;  */

void FUN_106e53f30(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  
  if (0xe < *(uint *)(param_1 + 1) || (1 << (ulong)(*(uint *)(param_1 + 1) & 0x1f) & 0x41feU) == 0)
  {
    return;
  }
  puVar6 = &UNK_10f3dbff5;
  plVar3 = *(long **)(*param_1 + 0x10);
  func_0x00010bd48714();
  lVar7 = *plVar3;
  puVar1 = (undefined1 *)(lVar7 + 10);
  uVar2 = param_3;
  if (4 < param_3) {
    puVar4 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    FUN_106e53aa8();
    puVar5 = puVar4;
    ___cxa_throw(puVar4,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
    ___cxa_free_exception(puVar4);
    __Unwind_Resume();
    __ZNSt13runtime_errorC2EPKc();
    *puVar5 = &PTR_DAT_110d9ebf8;
    return;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *puVar6;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(char *)(lVar7 + 0xe) = (char)param_3;
  return;
}



/* Entry: 106e53f64; end: 106e54097;  */

void FUN_106e53f64(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puStack_20;
  long lStack_18;
  
  cVar1 = *(char *)((long)param_2 + 0x17);
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (long)cVar1) {
    puStack_20 = param_2;
  }
  lStack_18 = param_2[1];
  if (-1 < cVar1) {
    lStack_18 = (long)cVar1;
  }
  func_0x0001003ac264(param_1,&puStack_20);
  return;
}



/* Entry: 106e54098; end: 106e540db;  */

void FUN_106e54098(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar3 = param_2;
  FUN_106e540dc();
  iVar2 = (int)puVar3;
  if (iVar2 < 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar4 = *param_2;
  if ((long)uVar4 < 0) {
    if (iVar2 < (int)uVar4) {
      puVar1 = (undefined8 *)(param_2[1] + (long)iVar2 * 0x20);
      uVar5 = *puVar1;
      param_1[1] = puVar1[1];
      *param_1 = uVar5;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 2);
      return;
    }
  }
  else if ((iVar2 < 0xf) &&
          (uVar4 = uVar4 >> ((ulong)(uint)(iVar2 << 2) & 0x3f),
          *(uint *)(param_1 + 2) = (uint)uVar4 & 0xf, (uVar4 & 0xf) != 0)) {
    puVar1 = (undefined8 *)(param_2[1] + (long)iVar2 * 0x10);
    uVar5 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar5;
  }
  return;
}



/* Entry: 106e540dc; end: 106e5418f;  */

undefined4 FUN_106e540dc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*param_1 >> 0x3e & 1) == 0) {
    return 0xffffffff;
  }
  lVar5 = 0;
  uVar6 = 0;
  lVar2 = -0x10;
  if (0x7fffffffffffffff < *param_1) {
    lVar2 = -0x20;
  }
  plVar1 = (long *)(param_1[1] + lVar2);
  while( true ) {
    if ((ulong)plVar1[1] <= uVar6) {
      return 0xffffffff;
    }
    uVar4 = *(undefined8 *)(*plVar1 + lVar5);
    uVar3 = uVar4;
    _strlen(uVar4);
    FUN_106e54190(uVar4,uVar3,param_2,param_3);
    if ((int)uVar4 != 0) break;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x10;
  }
  return *(undefined4 *)(*plVar1 + lVar5 + 8);
}



/* Entry: 106e54190; end: 106e541bf;  */

bool FUN_106e54190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_106e541c0(&uStack_20,param_3,param_4);
  return iVar1 == 0;
}



/* Entry: 106e541c0; end: 106e541f3;  */

uint FUN_106e541c0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if (param_3 <= uVar2) {
    uVar1 = param_3;
  }
  uVar4 = (uint)(param_3 < uVar2);
  if (param_3 > uVar2) {
    uVar4 = 0xffffffff;
  }
  _memcmp(uVar3,param_2,uVar1);
  if ((uint)uVar3 != 0) {
    uVar4 = (uint)uVar3;
  }
  return uVar4;
}



/* Entry: 106e541f4; end: 106e542eb;  */

/* WARNING: Possible PIC construction at 0x000106e54264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e54268) */
/* WARNING: Removing unreachable block (ram,0x000106e54284) */
/* WARNING: Removing unreachable block (ram,0x000106e542a0) */
/* WARNING: Removing unreachable block (ram,0x000106e542b4) */
/* WARNING: Removing unreachable block (ram,0x000106e542c8) */
/* WARNING: Removing unreachable block (ram,0x000106e542c4) */
/* WARNING: Removing unreachable block (ram,0x000106e542b0) */
/* WARNING: Removing unreachable block (ram,0x000106e54550) */
/* WARNING: Removing unreachable block (ram,0x000106e54298) */
/* WARNING: Removing unreachable block (ram,0x000106e54270) */
/* WARNING: Removing unreachable block (ram,0x000106e54678) */

long FUN_106e541f4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  char *pcStack_20;
  
  func_0x000106e54614();
  if ((bool)in_CY && !(bool)in_ZR) {
    puVar1 = &UNK_10f3dc070;
    func_0x00010bd48714();
    lVar2 = 0;
    for (; puVar1 != (undefined *)0x0; puVar1 = puVar1 + -1) {
      if (-0x41 < *pcStack_20) {
        lVar2 = lVar2 + 1;
      }
      pcStack_20 = pcStack_20 + 1;
    }
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000106e5421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10ddee887)[extraout_x8] * 4 + 0x106e54220))();
  return param_1;
}



/* Entry: 106e542ec; end: 106e54317;  */

long FUN_106e542ec(char *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (-0x41 < *param_1) {
      lVar1 = lVar1 + 1;
    }
    param_1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 106e54318; end: 106e5434b;  */

void FUN_106e54318(undefined8 param_1,long param_2,long param_3)

{
  func_0x000106e54310(param_1,param_3);
  func_0x0001003a9cd8(&stack0xffffffffffffffef,param_2,param_2 + param_3,param_1);
  return;
}



/* Entry: 106e5434c; end: 106e5472b;  */

void FUN_106e5434c(void)

{
  ulong uVar1;
  long ****pppplVar2;
  long *plVar3;
  long *plVar4;
  long ***ppplVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long unaff_x29;
  double in_stack_00000060;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  plVar3 = (long *)&stack0x00000070;
  lVar7 = unaff_x29 + -0xa0;
  func_0x0001003a9ccc();
  lStack_98 = 0;
  ppplStack_a0 = (long ***)0x0;
  plVar8 = (long *)(lVar7 + 0x10);
  ppplStack_a8 = (long ***)&ppplStack_a0;
  lStack_90 = lVar7;
LAB_106e51b64:
  do {
    do {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        FUN_106e4f8e0(plVar3,lStack_98);
        while ((long ****)ppplStack_a8 != &ppplStack_a0) {
          puVar6 = unaff_x20;
          FUN_106e51d80();
          FUN_106e51f50(unaff_x21 + 0x78,ppplStack_a8 + 4);
          uVar1 = plVar3[1];
          if (uVar1 < (ulong)plVar3[2]) {
            func_0x000106e54654(*puVar6,uVar1);
            lVar7 = uVar1 + 0x30;
          }
          else {
            plVar8 = plVar3;
            FUN_106e4fcb0(plVar3,(long)(uVar1 - *plVar3) / 0x30 + 1);
            FUN_106e4fa1c(auStack_88,plVar8,(plVar3[1] - *plVar3) / 0x30,plVar3 + 2);
            func_0x000106e54654(*puVar6,lStack_78);
            lStack_78 = lStack_78 + 0x30;
            FUN_106e4f990(plVar3,auStack_88);
            lVar7 = plVar3[1];
            func_0x000106e4fc40(auStack_88);
          }
          plVar3[1] = lVar7;
          func_0x00010002c7d4();
        }
        func_0x000106e53078(ppplStack_a0);
        return;
      }
      pppplVar10 = &ppplStack_a0;
      pppplVar9 = &ppplStack_a0;
      pppplVar2 = (long ****)ppplStack_a0;
    } while ((double)plVar8[3] < in_stack_00000060);
    while (pppplVar2 != (long ****)0x0) {
      while( true ) {
        pppplVar9 = pppplVar2;
        plVar4 = &lStack_90;
        FUN_106e530a8(plVar4,plVar8 + 2,pppplVar9 + 4);
        if ((int)plVar4 == 0) break;
        pppplVar2 = (long ****)*pppplVar9;
        pppplVar10 = pppplVar9;
        if ((long ****)*pppplVar9 == (long ****)0x0) goto LAB_106e51be4;
      }
      plVar4 = &lStack_90;
      FUN_106e530a8(plVar4,pppplVar9 + 4,plVar8 + 2);
      if ((int)plVar4 == 0) {
        if (*pppplVar10 != (long ***)0x0) goto LAB_106e51b64;
        break;
      }
      pppplVar10 = pppplVar9 + 1;
      pppplVar2 = (long ****)pppplVar9[1];
    }
LAB_106e51be4:
    ppplVar5 = (long ***)0x28;
    __Znwm();
    ppplVar5[4] = (long **)plVar8[2];
    *ppplVar5 = (long **)0x0;
    ppplVar5[1] = (long **)0x0;
    ppplVar5[2] = (long **)pppplVar9;
    *pppplVar10 = ppplVar5;
    if ((long ****)*ppplStack_a8 != (long ****)0x0) {
      ppplStack_a8 = (long ***)*ppplStack_a8;
    }
    func_0x00010002c5b0(ppplStack_a0);
    lStack_98 = lStack_98 + 1;
  } while( true );
}



/* Entry: 106e5472c; end: 106e5474f;  */

void FUN_106e5472c(void)

{
  FUN_106e528b0();
  return;
}



/* Entry: 106e54750; end: 106e547f7;  */

void FUN_106e54750(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
  if ((bRam000000011381e990 & 1) == 0) {
    uVar5 = 0x11381e990;
    ___cxa_guard_acquire();
    if ((int)uVar5 != 0) {
      uStack_14 = 0xf;
      func_0x00010044fc98();
      func_0x0001053903fc(0x11381e980,&PTR_DAT_11097ffc0,&uStack_14,uVar5);
      ___cxa_guard_release(0x11381e990);
    }
  }
  lVar4 = lRam000000011381e988;
  uVar5 = uRam000000011381e980;
  param_1[1] = lRam000000011381e988;
  *param_1 = uVar5;
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
  return;
}



/* Entry: 106e547f8; end: 106e5489f;  */

void FUN_106e547f8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
  if ((bRam000000011381e9b0 & 1) == 0) {
    uVar5 = 0x11381e9b0;
    ___cxa_guard_acquire();
    if ((int)uVar5 != 0) {
      uStack_14 = 0xf;
      func_0x00010044fc98();
      FUN_106e548a0(0x11381e9a0,&PTR_DAT_11097ffc0,&uStack_14,uVar5);
      ___cxa_guard_release(0x11381e9b0);
    }
  }
  lVar4 = lRam000000011381e9a8;
  uVar5 = uRam000000011381e9a0;
  param_1[1] = lRam000000011381e9a8;
  *param_1 = uVar5;
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
  return;
}



/* Entry: 106e548a0; end: 106e548c7;  */

void FUN_106e548a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_106e548c8(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 106e548c8; end: 106e5497f;  */

undefined1 *
FUN_106e548c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_106e54980(auStack_50,1);
  FUN_106e549dc(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000106e54adc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000106e54adc(auStack_50);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_106e549ac();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 106e54980; end: 106e549ab;  */

long FUN_106e54980(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_106e549ac();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 106e549ac; end: 106e549db;  */

undefined8 * FUN_106e549ac(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x276276276276277) {
    puVar1 = (undefined8 *)(param_2 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11097ffd8;
  param_1[1] = 0;
  FUN_106e54a50(param_1 + 3);
  return param_1;
}



/* Entry: 106e549dc; end: 106e54a27;  */

undefined8 * FUN_106e549dc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11097ffd8;
  param_1[1] = 0;
  FUN_106e54a50(param_1 + 3);
  return param_1;
}



/* Entry: 106e54a28; end: 106e54a2b;  */

void FUN_106e54a28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097ffd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e54a2c; end: 106e54a3f;  */

void FUN_106e54a2c(void)

{
  FUN_106e54ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e54a40; end: 106e54a4f;  */

void FUN_106e54a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e54a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 106e54a50; end: 106e54ac7;  */

undefined8
FUN_106e54a50(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x00010002b838(auStack_48,*param_2);
  func_0x00010063d5a4(param_1,auStack_48,*param_3,param_4,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return param_1;
}



/* Entry: 106e54ac8; end: 106e54af3;  */

void FUN_106e54ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097ffd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e54af4; end: 106e54c17;  */

undefined8 * FUN_106e54af4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar7 = param_1 + 1;
  plVar6 = plVar7;
  plVar5 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x000106e54b24:
  do {
    if (plVar1 == (long *)0x0) {
LAB_106e54b78:
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      uStack_48 = 0;
      puStack_58 = puVar4;
      plStack_50 = plVar7;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 4,param_2);
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[7] = 0;
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = plVar5;
      *plVar6 = (long)puVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      puStack_58 = (undefined8 *)0x0;
      func_0x000106e55574(&puStack_58);
LAB_106e54be8:
      return puVar4 + 7;
    }
    uVar2 = param_2;
    func_0x000100125af4(param_2,plVar1 + 4);
    plVar5 = plVar1;
    if (((uint)uVar2 >> 7 & 1) != 0) {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x000106e54b24;
    }
    plVar3 = plVar1 + 4;
    func_0x000100125af4(plVar3,param_2);
    if (((uint)plVar3 >> 7 & 1) == 0) {
      puVar4 = (undefined8 *)*plVar6;
      if (puVar4 != (undefined8 *)0x0) goto LAB_106e54be8;
      goto LAB_106e54b78;
    }
    plVar6 = plVar1 + 1;
    plVar1 = (long *)*plVar6;
  } while( true );
}



/* Entry: 106e54c18; end: 106e553ef;  */

void FUN_106e54c18(undefined1 *param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  ulong *****pppppuVar4;
  ulong *****pppppuVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong ****ppppuVar8;
  long lVar9;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong ****ppppuVar13;
  ulong *****pppppuVar14;
  long lVar15;
  ulong *****pppppuVar16;
  long lVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [24];
  ulong ****ppppuStack_120;
  ulong ****ppppuStack_118;
  ulong ****ppppuStack_110;
  ulong ***apppuStack_108 [3];
  int iStack_f0;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong ****ppppuStack_b0;
  ulong ***apppuStack_a8 [3];
  ulong ****ppppuStack_90;
  ulong ****ppppuStack_88;
  ulong ****ppppuStack_80;
  ulong ****ppppuStack_78;
  ulong ****ppppuStack_70;
  
  func_0x00010007847c(auStack_138,&UNK_10f3dc12e);
  if (*(int *)(param_2 + 0x68) == 0) {
    pppppuVar14 = (ulong *****)apppuStack_a8;
    func_0x00010007847c(pppppuVar14,&UNK_10f3dc0a0);
    lVar17 = *(long *)(param_2 + 0x120);
    ppppuStack_c8 = (undefined8 *****)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x000106e55668();
    pppppuVar5 = (ulong *****)(param_2 + 0x88);
    while (func_0x000106e555f8(), (int)pppppuVar14 != 0) {
      func_0x000106e55638();
      if ((bool)in_ZR) {
        func_0x000106e55620();
        pppppuVar4 = (ulong *****)0x0;
        bVar18 = false;
        while (func_0x000106e555f8(), (int)pppppuVar14 != 0) {
          in_ZR = iStack_f0 == 2;
          if ((bool)in_ZR) {
            func_0x000106e55620();
            while (func_0x000106e555f8(), (int)pppppuVar14 != 0) {
              func_0x000106e55638();
              if ((bool)in_ZR) {
                func_0x000106e5565c();
                func_0x000106e555d4();
                func_0x000106e55630();
                pppppuVar16 = pppppuVar14;
                if (lVar17 != 0) {
                  pppppuVar16 = *(ulong ******)(param_2 + 0x120);
                  uVar10 = uStack_c0;
                  pppppuVar1 = (undefined8 *****)ppppuStack_c8;
                  if (-1 < (long)uStack_b8) {
                    uVar10 = uStack_b8 >> 0x38;
                    pppppuVar1 = &ppppuStack_c8;
                  }
                  func_0x000106e55650(pppppuVar16,pppppuVar1,uVar10);
                  func_0x000106e555d4();
                  func_0x000106e55630();
                }
                in_ZR = uStack_b8._7_1_ == 0;
                uVar10 = uStack_c0;
                if (-1 < (long)uStack_b8) {
                  uVar10 = (ulong)uStack_b8._7_1_;
                }
                pppppuVar14 = pppppuVar16;
                if (uVar10 != 0) {
                  func_0x000106e555ec();
                  pppppuVar7 = pppppuVar16 + 2;
                  ppppuVar13 = pppppuVar16[1];
                  in_ZR = ppppuVar13 == *pppppuVar7;
                  pppppuVar14 = pppppuVar16;
                  if (ppppuVar13 < *pppppuVar7) {
                    ppppuVar8 = ppppuVar13 + 1;
                    *ppppuVar13 = (ulong ***)ppppuStack_b0;
                  }
                  else {
                    pppppuVar6 = pppppuVar16;
                    FUN_106e528f0(pppppuVar16,((long)ppppuVar13 - (long)*pppppuVar16 >> 3) + 1);
                    ppppuVar13 = *pppppuVar16;
                    ppppuVar8 = pppppuVar16[1];
                    ppppuStack_70 = (ulong ****)pppppuVar7;
                    if (pppppuVar6 == (ulong *****)0x0) {
                      ppppuStack_90 = (ulong ****)0x0;
                    }
                    else {
                      func_0x00010048ac4c();
                      ppppuStack_90 = (ulong ****)pppppuVar7;
                    }
                    ppppuStack_88 =
                         (ulong ****)((long)ppppuStack_90 + ((long)ppppuVar8 - (long)ppppuVar13));
                    ppppuStack_78 = ppppuStack_90 + (long)pppppuVar6;
                    pppppuVar7 = (ulong *****)(ppppuStack_88 + 1);
                    *ppppuStack_88 = (ulong ***)ppppuStack_b0;
                    ppppuStack_80 = (ulong ****)pppppuVar7;
                    FUN_106e55488(pppppuVar16,&ppppuStack_90);
                    ppppuVar8 = pppppuVar16[1];
                    func_0x000106e5567c();
                  }
                  pppppuVar16[1] = ppppuVar8;
                }
              }
              else {
                in_ZR = extraout_w8_01 == 2;
                if ((bool)in_ZR) {
                  FUN_106e5f348(&ppppuStack_120,apppuStack_108);
                  ppppuVar13 = ppppuStack_b0;
                  pppppuVar14 = *(ulong ******)(param_2 + 0x80);
                  if (pppppuVar14 != (ulong *****)0x0) {
                    uVar10 = (long)pppppuVar14 - 1;
                    if (((ulong)pppppuVar14 & uVar10) == 0) {
                      pppppuVar4 = (ulong *****)(uVar10 & (ulong)ppppuStack_b0);
                    }
                    else {
                      pppppuVar4 = (ulong *****)ppppuStack_b0;
                      if (pppppuVar14 <= ppppuStack_b0) {
                        uVar12 = 0;
                        if (pppppuVar14 != (ulong *****)0x0) {
                          uVar12 = (ulong)ppppuStack_b0 / (ulong)pppppuVar14;
                        }
                        pppppuVar4 = (ulong *****)((long)ppppuStack_b0 - uVar12 * (long)pppppuVar14)
                        ;
                      }
                    }
                    plVar11 = *(long **)(*(long *)(param_2 + 0x78) + (long)pppppuVar4 * 8);
                    if (plVar11 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar11 = (long *)*plVar11;
                          if (plVar11 == (long *)0x0) goto LAB_106e550d4;
                          pppppuVar16 = (ulong *****)plVar11[1];
                          if (pppppuVar16 != (ulong *****)ppppuStack_b0) break;
                          if ((ulong *****)plVar11[2] == (ulong *****)ppppuStack_b0) {
                            in_ZR = 1;
                            goto LAB_106e55210;
                          }
                        }
                        if (((ulong)pppppuVar14 & uVar10) == 0) {
                          pppppuVar16 = (ulong *****)((ulong)pppppuVar16 & uVar10);
                        }
                        else if (pppppuVar14 <= pppppuVar16) {
                          uVar12 = 0;
                          if (pppppuVar14 != (ulong *****)0x0) {
                            uVar12 = (ulong)pppppuVar16 / (ulong)pppppuVar14;
                          }
                          pppppuVar16 = (ulong *****)
                                        ((long)pppppuVar16 - uVar12 * (long)pppppuVar14);
                        }
                      } while (pppppuVar16 == pppppuVar4);
                    }
                  }
LAB_106e550d4:
                  ppppuVar8 = (ulong ****)0x30;
                  __Znwm();
                  ppppuStack_80 = (ulong ****)0x1;
                  *ppppuVar8 = (ulong ***)0x0;
                  ppppuVar8[1] = (ulong ***)ppppuVar13;
                  ppppuVar8[2] = (ulong ***)ppppuVar13;
                  ppppuVar8[4] = (ulong ***)ppppuStack_118;
                  ppppuVar8[3] = (ulong ***)ppppuStack_120;
                  ppppuVar8[5] = (ulong ***)ppppuStack_110;
                  ppppuStack_120 = (ulong ****)0x0;
                  ppppuStack_118 = (ulong ****)0x0;
                  ppppuStack_110 = (ulong ****)0x0;
                  fVar19 = (float)(*(long *)(param_2 + 0x90) + 1);
                  ppppuStack_90 = ppppuVar8;
                  ppppuStack_88 = (ulong ****)pppppuVar5;
                  if ((pppppuVar14 == (ulong *****)0x0) ||
                     (fVar20 = *(float *)(param_2 + 0x98) * (float)pppppuVar14,
                     in_ZR = fVar20 == fVar19, fVar20 < fVar19)) {
                    uVar10 = 1;
                    if ((ulong *****)0x2 < pppppuVar14) {
                      uVar10 = (ulong)(((ulong)pppppuVar14 & (long)pppppuVar14 - 1U) != 0);
                    }
                    uVar10 = uVar10 | (long)pppppuVar14 << 1;
                    uVar12 = (ulong)(fVar19 / *(float *)(param_2 + 0x98));
                    if (uVar10 <= uVar12) {
                      uVar10 = uVar12;
                    }
                    func_0x000106e53350(param_2 + 0x78,uVar10);
                    pppppuVar14 = *(ulong ******)(param_2 + 0x80);
                    if (((ulong)pppppuVar14 & (long)pppppuVar14 - 1U) == 0) {
                      in_ZR = true;
                      pppppuVar4 = (ulong *****)((long)pppppuVar14 - 1U & (ulong)ppppuVar13);
                    }
                    else {
                      in_ZR = (ulong *****)ppppuVar13 == pppppuVar14;
                      pppppuVar4 = (ulong *****)ppppuVar13;
                      if (pppppuVar14 <= ppppuVar13) {
                        uVar10 = 0;
                        if (pppppuVar14 != (ulong *****)0x0) {
                          uVar10 = (ulong)ppppuVar13 / (ulong)pppppuVar14;
                        }
                        pppppuVar4 = (ulong *****)((long)ppppuVar13 - uVar10 * (long)pppppuVar14);
                      }
                    }
                  }
                  lVar15 = *(long *)(param_2 + 0x78);
                  plVar11 = *(long **)(lVar15 + (long)pppppuVar4 * 8);
                  if (plVar11 == (long *)0x0) {
                    *ppppuStack_90 = (ulong ***)*pppppuVar5;
                    *pppppuVar5 = ppppuStack_90;
                    *(ulong ******)(lVar15 + (long)pppppuVar4 * 8) = pppppuVar5;
                    if (*ppppuStack_90 != (ulong ***)0x0) {
                      pppppuVar4 = (ulong *****)(*ppppuStack_90)[1];
                      if (((ulong)pppppuVar14 & (long)pppppuVar14 - 1U) == 0) {
                        pppppuVar4 = (ulong *****)((ulong)pppppuVar4 & (long)pppppuVar14 - 1U);
                        in_ZR = true;
                      }
                      else {
                        in_ZR = pppppuVar4 == pppppuVar14;
                        if (pppppuVar14 <= pppppuVar4) {
                          uVar10 = 0;
                          if (pppppuVar14 != (ulong *****)0x0) {
                            uVar10 = (ulong)pppppuVar4 / (ulong)pppppuVar14;
                          }
                          pppppuVar4 = (ulong *****)((long)pppppuVar4 - uVar10 * (long)pppppuVar14);
                        }
                      }
                      *(ulong *****)(lVar15 + (long)pppppuVar4 * 8) = ppppuStack_90;
                    }
                  }
                  else {
                    *ppppuStack_90 = (ulong ***)*plVar11;
                    *plVar11 = (long)ppppuStack_90;
                  }
                  ppppuStack_90 = (ulong ****)0x0;
                  *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + 1;
                  FUN_106e53500(&ppppuStack_90);
LAB_106e55210:
                  pppppuVar14 = &ppppuStack_120;
                  func_0x000100100fec();
                  pppppuVar4 = (ulong *****)0x1;
                }
                else {
                  func_0x000106e55600();
                }
              }
            }
            func_0x000106e55628();
          }
          else {
            in_ZR = iStack_f0 == 1;
            if ((bool)in_ZR) {
              pppppuVar14 = (ulong *****)apppuStack_108;
              FUN_106e5f22c();
              bVar18 = true;
              ppppuStack_b0 = (ulong ****)pppppuVar14;
            }
            else {
              func_0x000106e55600();
            }
          }
        }
        if (!bVar18) {
          func_0x000106e55608();
          __ZNSt13runtime_errorC1EPKc();
          func_0x000106e555bc();
          goto LAB_106e552fc;
        }
        if ((int)pppppuVar4 == 0) {
          pppppuVar14 = (ulong *****)(param_2 + 0x78);
          FUN_106e51f50(pppppuVar14,&ppppuStack_b0);
          FUN_106e55508();
        }
        func_0x000106e55628();
      }
      else {
        func_0x000106e55600();
      }
    }
    __ZNSt3__16chrono12system_clock3nowEv();
    *(ulong ******)(param_2 + 0xf0) = pppppuVar14;
    func_0x000106e55618();
    func_0x000106e55610();
    func_0x000106e55674();
  }
  else {
    uVar3 = *(int *)(param_2 + 0x68) == 1;
    if (!(bool)uVar3) {
      func_0x000106e55608();
      func_0x000106e55644();
      func_0x000106e555bc();
LAB_106e552fc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x106e55300);
      (*pcVar2)();
    }
    pppppuVar5 = (ulong *****)apppuStack_a8;
    func_0x00010007847c(pppppuVar5,&UNK_10f3dc0e1);
    lVar17 = *(long *)(param_2 + 0x120);
    func_0x000106e55668();
    while (func_0x000106e555f8(), (int)pppppuVar5 != 0) {
      func_0x000106e55638();
      if ((bool)uVar3) {
        FUN_106e5f348(&ppppuStack_90,apppuStack_108);
        func_0x00010528d604(param_2 + 0xa0,&ppppuStack_90);
        pppppuVar5 = &ppppuStack_90;
        func_0x000100100fec();
      }
      else {
        uVar3 = extraout_w8 == 2;
        if ((bool)uVar3) {
          func_0x000106e55620();
          ppppuStack_c8 = (undefined8 *****)0x0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          ppppuStack_120 = (ulong ****)0x0;
          ppppuStack_118 = (ulong ****)0x0;
          ppppuStack_110 = (ulong ****)0x0;
          while (func_0x000106e555f8(), (int)pppppuVar5 != 0) {
            func_0x000106e55638();
            if ((bool)uVar3) {
              func_0x000106e5565c();
              func_0x000106e555d4();
              func_0x000106e55630();
            }
            else {
              uVar3 = extraout_w8_00 == 2;
              if ((bool)uVar3) {
                func_0x000106e55620();
                while (func_0x000106e555f8(), (int)pppppuVar5 != 0) {
                  func_0x000106e55638();
                  if ((bool)uVar3) {
                    pppppuVar5 = (ulong *****)apppuStack_108;
                    FUN_106e5f15c();
                    uVar3 = ppppuStack_118 == ppppuStack_110;
                    if (ppppuStack_118 < ppppuStack_110) {
                      *ppppuStack_118 = (ulong ***)((ulong)pppppuVar5 & 0xffffffff);
                      ppppuStack_118 = ppppuStack_118 + 1;
                    }
                    else {
                      pppppuVar14 = &ppppuStack_120;
                      FUN_106e528f0(pppppuVar14,
                                    ((long)ppppuStack_118 - (long)ppppuStack_120 >> 3) + 1);
                      lVar15 = (long)ppppuStack_118 - (long)ppppuStack_120;
                      ppppuStack_70 = (ulong ****)&ppppuStack_110;
                      if (pppppuVar14 == (ulong *****)0x0) {
                        pppppuVar4 = (ulong *****)0x0;
                        lVar9 = lVar15;
                      }
                      else {
                        pppppuVar4 = &ppppuStack_110;
                        func_0x00010048ac4c();
                        lVar9 = (long)ppppuStack_118 - (long)ppppuStack_120;
                      }
                      ppppuStack_88 = (ulong ****)((long)pppppuVar4 + lVar15);
                      ppppuStack_78 = (ulong ****)(pppppuVar4 + (long)pppppuVar14);
                      pppppuVar16 = (ulong *****)((long)ppppuStack_88 - lVar9);
                      pppppuVar14 = (ulong *****)(ppppuStack_88 + 1);
                      ppppuStack_90 = (ulong ****)pppppuVar4;
                      *ppppuStack_88 = (ulong ***)((ulong)pppppuVar5 & 0xffffffff);
                      pppppuVar5 = pppppuVar16;
                      ppppuStack_80 = (ulong ****)pppppuVar14;
                      _memcpy();
                      ppppuVar8 = ppppuStack_80;
                      ppppuVar13 = ppppuStack_110;
                      ppppuStack_110 = ppppuStack_78;
                      ppppuStack_118 = ppppuStack_80;
                      ppppuStack_80 = ppppuStack_120;
                      ppppuStack_78 = ppppuVar13;
                      ppppuStack_90 = ppppuStack_120;
                      ppppuStack_88 = ppppuStack_120;
                      ppppuStack_120 = (ulong ****)pppppuVar16;
                      func_0x000106e5567c();
                      ppppuStack_118 = ppppuVar8;
                    }
                  }
                  else {
                    func_0x000106e55600();
                  }
                }
                func_0x000106e55628();
              }
              else {
                func_0x000106e55600();
              }
            }
          }
          uVar10 = (ulong)(char)uStack_b8._7_1_;
          if ((long)uVar10 < 0) {
            if (uStack_c0 == 0) goto LAB_106e552d0;
          }
          else if (uStack_b8._7_1_ == '\0') {
LAB_106e552d0:
            func_0x000106e55608();
            __ZNSt13runtime_errorC1EPKc();
            func_0x000106e555bc();
            goto LAB_106e552fc;
          }
          uVar3 = ppppuStack_120 == ppppuStack_118;
          if (!(bool)uVar3) {
            if (lVar17 != 0) {
              pppppuVar5 = *(ulong ******)(param_2 + 0x120);
              uVar12 = uStack_c0;
              pppppuVar1 = (undefined8 *****)ppppuStack_c8;
              if (-1 < (long)uStack_b8) {
                uVar12 = uVar10;
                pppppuVar1 = &ppppuStack_c8;
              }
              func_0x000106e55650(pppppuVar5,pppppuVar1,uVar12);
              func_0x000106e555d4();
              func_0x000106e55630();
              uVar10 = uStack_b8 >> 0x38;
            }
            uVar3 = (char)uVar10 == '\0';
            uVar12 = uStack_c0;
            if (-1 < (char)uVar10) {
              uVar12 = uVar10 & 0xff;
            }
            if (uVar12 != 0) {
              func_0x000106e555ec();
              pppppuVar14 = pppppuVar5;
              func_0x000106e555ec();
              FUN_106e51b18(pppppuVar5,pppppuVar14[1],ppppuStack_120,ppppuStack_118);
            }
          }
          func_0x000106e55628();
          pppppuVar5 = &ppppuStack_120;
          func_0x00010048b0a4();
          func_0x000106e55610();
        }
        else {
          func_0x000106e55600();
        }
      }
    }
    __ZNSt3__16chrono12system_clock3nowEv();
    *(ulong ******)(param_2 + 0xf0) = pppppuVar5;
    func_0x000106e55618();
    func_0x000106e55674();
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x000100078bd8(auStack_138);
  return;
}



/* Entry: 106e553f0; end: 106e5546f;  */

undefined1  [16] FUN_106e553f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(int *)(param_1 + 0xd) == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x12);
  }
  else {
    if (*(int *)(param_1 + 0xd) != 1) {
      func_0x000106e55608();
      func_0x000106e55644();
      puVar1 = param_1;
      puVar2 = PTR___ZTISt13runtime_error_110346a40;
      ___cxa_throw(param_1,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      ___cxa_free_exception(param_1);
      __Unwind_Resume();
      *puVar1 = &PTR_DAT_11097ff70;
      func_0x000106e52ba0(puVar1 + 0x24);
      func_0x00010b5a2440(puVar1 + 0x1f);
      func_0x000106e52b14(puVar1 + 0x17);
      func_0x000104bee630(puVar1 + 0x14);
      FUN_106e52a7c(puVar1 + 0xf);
      func_0x000106e4ed24(puVar1 + 1);
      auVar5._8_8_ = puVar2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uVar3 = (long)(param_1[0x15] - param_1[0x14]) / 0x18;
  }
  auVar4._8_8_ = param_1[0x1e];
  auVar4._0_8_ = uVar3 & 0xffffffff;
  return auVar4;
}



/* Entry: 106e55470; end: 106e55473;  */

undefined8 * FUN_106e55470(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097ff70;
  func_0x000106e52ba0(param_1 + 0x24);
  func_0x00010b5a2440(param_1 + 0x1f);
  func_0x000106e52b14(param_1 + 0x17);
  func_0x000104bee630(param_1 + 0x14);
  FUN_106e52a7c(param_1 + 0xf);
  func_0x000106e4ed24(param_1 + 1);
  return param_1;
}



/* Entry: 106e55474; end: 106e55487;  */

void FUN_106e55474(void)

{
  FUN_106e55510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e55488; end: 106e55507;  */

void FUN_106e55488(long *param_1,undefined8 *param_2)

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



/* Entry: 106e55508; end: 106e5550f;  */

void FUN_106e55508(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = (long)param_3 - (long)param_2;
  uVar3 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if (uVar3 - (long)puVar8 < uVar2) {
    puVar5 = param_1;
    if (puVar8 != (undefined8 *)0x0) {
      param_1[1] = puVar8;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar5 = puVar8;
    }
    if ((long)uVar2 < 0) {
      func_0x000104bd9bc0();
      *puVar5 = &PTR_DAT_11087bbd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar2 || uVar6 - uVar2 == 0) {
      uVar6 = uVar2;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar6 = 0x7fffffffffffffff;
    }
    func_0x00010002b958(param_1,uVar6);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar4 = *param_2;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar5 - (long)puVar8) < uVar2) {
      puVar7 = param_2 + ((long)puVar5 - (long)puVar8);
      puVar4 = puVar5;
      if (puVar5 != puVar8) {
        _memmove(puVar8,param_2);
        puVar5 = (undefined8 *)param_1[1];
        puVar4 = puVar5;
      }
      for (; puVar7 != param_3; puVar7 = puVar7 + 1) {
        *(undefined1 *)puVar5 = *puVar7;
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      }
    }
    else {
      lVar1 = (long)param_3 - (long)param_2;
      if (lVar1 != 0) {
        _memmove(puVar8,param_2,lVar1);
      }
      puVar4 = (undefined8 *)((long)puVar8 + lVar1);
    }
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 106e55510; end: 106e555bb;  */

undefined8 * FUN_106e55510(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097ff70;
  func_0x000106e52ba0(param_1 + 0x24);
  func_0x00010b5a2440(param_1 + 0x1f);
  func_0x000106e52b14(param_1 + 0x17);
  func_0x000104bee630(param_1 + 0x14);
  FUN_106e52a7c(param_1 + 0xf);
  func_0x000106e4ed24(param_1 + 1);
  return param_1;
}



/* Entry: 106e555bc; end: 106e55783;  */

void FUN_106e555bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 106e55784; end: 106e5588f;  */

undefined8 * FUN_106e55784(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  __ZNSt3__16localeC1Ev(param_1 + 5);
  FUN_106e55890(param_1 + 6);
  FUN_106e558cc(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  FUN_106e5c518(param_1 + 0x3d,0x20);
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  FUN_106e57114(param_1 + 0x46,&UNK_10ddeec90,0);
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7reserveEm(param_1 + 0x36,200);
  return param_1;
}



/* Entry: 106e55890; end: 106e558cb;  */

undefined8 FUN_106e55890(undefined8 param_1)

{
  func_0x000106e5e950();
  func_0x000106e570a8();
  func_0x000106e5e44c();
  return param_1;
}



/* Entry: 106e558cc; end: 106e55907;  */

undefined8 FUN_106e558cc(undefined8 param_1)

{
  func_0x000106e5e950();
  func_0x000106e5c4ac();
  func_0x000106e5e44c();
  return param_1;
}



/* Entry: 106e55908; end: 106e5591f;  */

void FUN_106e55908(long param_1,long param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uStack_d8;
  ulong uStack_d0;
  
  lVar5 = param_2 + 0x30;
  uVar4 = param_3 + param_4;
  func_0x000106e5e340();
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  if (*(long *)(lVar5 + 0x30) == 0) {
LAB_106e56cec:
    lVar5 = (long)*(char *)(param_2 + 0x5f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_2 + 0x50);
    }
    if (lVar5 == 0) goto LAB_106e56d38;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(param_1,param_2 + 0x48)
    ;
  }
  else {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEmw
              (param_1,(uVar4 - param_3) * 2,0);
    in_ZR = uVar4 == param_3;
    if (!(bool)in_ZR) {
      func_0x000106e5e7bc((long)*(char *)(param_1 + 0x17));
      func_0x000106e5e6f8();
      func_0x000106e5e2b4();
      func_0x000106e5e1c8();
      do {
        plVar3 = *(long **)(param_2 + 0x60);
        func_0x000106e5e430(*(undefined8 *)(*plVar3 + 0x20));
        *(ulong *)(param_2 + 0xe8) = (uStack_d0 - param_3) + *(long *)(param_2 + 0xe8);
        in_ZR = true;
        if (uStack_d0 - param_3 == 0) break;
        iVar2 = (int)plVar3;
        in_ZR = iVar2 == 1;
        if (!(bool)in_ZR) {
          if (iVar2 == 0) {
            func_0x000106e5e1b4(uStack_d8);
            func_0x000106e5e6f8();
            goto LAB_106e56d08;
          }
          in_ZR = iVar2 == 3;
          if ((bool)in_ZR) {
            func_0x000106e5e4d0((long)*(char *)(param_1 + 0x17));
            func_0x000106e5e6f8();
            func_0x000106e5e844(param_1);
            FUN_106e5df90();
            goto LAB_106e56d08;
          }
          break;
        }
        func_0x000106e5e1b4(uStack_d8);
        func_0x000106e5e6f8();
        func_0x000106e5e1c8();
        in_ZR = uStack_d0 == uVar4;
        param_3 = uStack_d0;
      } while (uStack_d0 < uVar4);
      func_0x000106e5e984();
      goto LAB_106e56cec;
    }
  }
LAB_106e56d08:
  func_0x000106e5e168(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_106e56d38:
  FUN_106e5df18(&UNK_10f3dc1cc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e56d48);
  (*pcVar1)();
}



/* Entry: 106e55920; end: 106e559ff;  */

void FUN_106e55920(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  
  FUN_106e55a00(&lStack_180);
  func_0x000105680760(auStack_168);
  bVar2 = true;
  for (lVar3 = lStack_180; lVar3 != lStack_178; lVar3 = lVar3 + 0x18) {
    puVar1 = &UNK_10f3dc1ab;
    if (!bVar2) {
      puVar1 = &UNK_10ddefa88;
    }
    func_0x0001003abe30(auStack_158,puVar1,~bVar2);
    func_0x0001006282fc();
    bVar2 = false;
  }
  func_0x000105491b64(param_1,auStack_150);
  func_0x000105673d7c(auStack_168);
  func_0x0001000e30f4(&lStack_180);
  return;
}



/* Entry: 106e55a00; end: 106e5694b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_106e55a00(uint *******param_1,byte *param_2,uint *******param_3,uint *******param_4,
                  uint *******param_5)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  uint *******pppppppuVar11;
  uint *******pppppppuVar12;
  long lVar13;
  uint uVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  uint *******extraout_x9_00;
  uint *****pppppuVar17;
  uint *******pppppppuVar18;
  ulong uVar19;
  long extraout_x9_01;
  long extraout_x10;
  uint *******extraout_x10_00;
  undefined8 *puVar20;
  ulong uVar21;
  uint *******pppppppuVar22;
  uint ******ppppppuVar23;
  uint ******ppppppuVar24;
  ulong uVar25;
  uint *******extraout_x10_01;
  long extraout_x11;
  long extraout_x11_00;
  ulong uVar26;
  long extraout_x11_01;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  uint *******pppppppuVar30;
  byte *pbVar31;
  undefined8 *puVar32;
  uint *******pppppppuVar33;
  uint *******pppppppuVar34;
  uint *******pppppppuVar35;
  undefined8 uStack_378;
  uint *******pppppppuStack_370;
  undefined1 auStack_368 [128];
  undefined8 uStack_2e8;
  uint *******pppppppuStack_2e0;
  uint *******pppppppuStack_2d8;
  uint *******pppppppuStack_2d0;
  uint *******pppppppuStack_2c8;
  byte *pbStack_2c0;
  uint *******pppppppuStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  uint *******pppppppuStack_298;
  uint *******pppppppuStack_290;
  uint *******pppppppuStack_288;
  ulong uStack_280;
  ulong uStack_278;
  uint ******ppppppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  uint *******pppppppuStack_250;
  ulong uStack_248;
  byte bStack_239;
  uint *******pppppppuStack_238;
  uint *******pppppppuStack_230;
  uint ******ppppppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint ******ppppppuStack_210;
  uint *******pppppppuStack_208;
  undefined8 uStack_200;
  uint uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  undefined1 uStack_b0;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  pppppppuVar35 = (uint *******)0x0;
  pppppppuVar34 = (uint *******)0x0;
  pbVar31 = param_2;
  pppppppuVar12 = param_3;
  pppppppuVar11 = param_4;
  pppppppuStack_288 = param_5;
  func_0x000106e5e340();
  pppppppuVar30 = (uint *******)&pppppppuStack_110;
  pppppppuStack_238 = pppppppuVar12;
  pppppppuStack_230 = pppppppuVar11;
  uStack_78 = extraout_x8;
  while( true ) {
    uVar9 = param_4 == pppppppuVar35;
    if ((bool)uVar9) break;
    cVar8 = *(char *)((long)param_3 + (long)pppppppuVar35);
    pbVar31 = (byte *)(long)cVar8;
    func_0x000106e56e44();
    if (cVar8 != ' ' && (int)pbVar31 != 0) {
      param_2[0x1e0] = 0;
      param_2[0x1e1] = 0;
      param_2[0x1e2] = 0;
      param_2[0x1e3] = 0;
      pppppppuStack_298 = (uint *******)(param_2 + 0x1c8);
      func_0x000106e56e20();
      func_0x000106e56e20(param_2 + 0x1b0);
      func_0x000100164364(param_2 + 0x218);
      pppppppuVar35 = param_3;
      param_5 = param_4;
      FUN_106e55908(&pppppppuStack_250,param_2);
      uVar14 = (uint)param_2[6];
      cVar7 = SBORROW4(uVar14,1);
      cVar8 = (int)(uVar14 - 1) < 0;
      pppppppuStack_290 = param_1;
      if (uVar14 != 1) goto LAB_106e55f40;
      param_4 = (uint *******)(param_2 + 0x230);
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d7 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      pppppppuStack_c0 = (uint *******)0x0;
      pppppppuStack_b8 = (uint *******)((ulong)pppppppuStack_b8 & 0xffffffffffffff00);
      uStack_b0 = 0;
      pppppppuStack_a8 = (uint *******)0x0;
      pppppppuStack_108 = (uint *******)0x0;
      pppppppuStack_110 = (uint *******)0x0;
      uStack_100 = (uint *******)0x0;
      uStack_ef = 0;
      uStack_e8 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      func_0x000106e5e7e4();
      lVar29 = extraout_x11;
      lVar13 = extraout_x10;
      if (cVar8 == cVar7) {
        lVar29 = extraout_x8_00;
        lVar13 = extraout_x9;
      }
      pppppppuVar35 = (uint *******)(lVar13 + lVar29 * 4);
      param_5 = (uint *******)&pppppppuStack_110;
      param_3 = param_4;
      FUN_106e5c5d8();
      FUN_106e58698(&pppppppuStack_110);
      if ((int)param_3 == 0) {
        ppppppuStack_270 = (uint ******)((ulong)ppppppuStack_270 & 0xffffffffffffff00);
        uStack_258 = 0;
        goto LAB_106e55f38;
      }
      ppppppuStack_228 = (uint ******)0x0;
      uStack_220 = 0;
      uStack_218 = 0;
      func_0x000106e5e7e4();
      lVar29 = extraout_x11_00;
      param_3 = extraout_x10_00;
      if (cVar8 == cVar7) {
        lVar29 = extraout_x8_01;
        param_3 = extraout_x9_00;
      }
      pppppppuVar34 = (uint *******)((long)param_3 + lVar29 * 4);
      uStack_f8 = 0;
      pppppppuStack_c0 = (uint *******)0x0;
      pppppppuStack_b8 = (uint *******)0x0;
      uStack_b0 = 0;
      pppppppuStack_a8 = (uint *******)0x0;
      pppppppuStack_a0 = (uint *******)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_e8 = 0;
      uStack_e7 = 0;
      uStack_f0 = 0;
      uStack_ef = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_cf = 0;
      uStack_c8 = 0;
      uStack_d7 = 0;
      uStack_d0 = 0;
      pppppppuVar35 = param_3;
      param_5 = param_4;
      pppppppuStack_110 = param_3;
      pppppppuStack_108 = pppppppuVar34;
      uStack_100 = param_4;
      FUN_106e5daa8(param_3,pppppppuVar34,&uStack_f0,param_4,0);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1cf = 0;
      uStack_1d7 = 0;
      uStack_1d0 = 0;
      pppppppuStack_208 = (uint *******)0x0;
      uStack_200 = 0;
      ppppppuStack_210 = (uint ******)0x0;
      uStack_1f8 = 0;
      func_0x000106e5e88c();
      if ((int)pppppppuVar35 == 0) {
        param_3 = (uint *******)0x0;
        pppppppuVar34 = (uint *******)0x0;
        param_4 = &ppppppuStack_228;
        goto LAB_106e55ce0;
      }
      pppppppuVar35 = &ppppppuStack_228;
      FUN_106e5de48(param_3,pppppppuVar34);
      goto LAB_106e55ef4;
    }
    pppppppuVar34 = (uint *******)(ulong)((uint)(cVar8 == ' ') | (uint)pppppppuVar34);
    pppppppuVar35 = (uint *******)((long)pppppppuVar35 + 1);
  }
  if ((uint)pppppppuVar34 == 0) {
    func_0x000100060b18(&pppppppuStack_110,&pppppppuStack_238);
    pppppppuVar12 = (uint *******)&pppppppuStack_110;
    pppppppuVar35 = (uint *******)0x1;
    func_0x0001000e3098();
    func_0x000106e5e644();
  }
  else {
    *(uint ********)(param_2 + 0x1e8) = param_3;
    *(uint ********)(param_2 + 0x1f0) = param_4;
    for (pppppppuVar35 = (uint *******)0x0; *(uint ********)(param_2 + 0x200) = pppppppuVar35,
        param_4 != pppppppuVar35; pppppppuVar35 = (uint *******)((long)pppppppuVar35 + 1)) {
      if (*(byte *)((long)param_3 + (long)pppppppuVar35) != param_2[0x1f8]) {
        param_5 = (uint *******)(ulong)(uint)(int)(char)param_2[0x1f8];
        func_0x000106e5e9c8();
        func_0x0001057fa6a0();
        *(byte **)(param_2 + 0x208) = pbVar31;
        param_2[0x210] = 1;
        goto LAB_106e55c5c;
      }
    }
    param_2[0x200] = 0;
    param_2[0x201] = 0;
    param_2[0x202] = 0;
    param_2[0x203] = 0;
    param_2[0x204] = 0;
    param_2[0x205] = 0;
    param_2[0x206] = 0;
    param_2[0x207] = 0;
    if (param_2[0x210] == 1) {
      param_2[0x210] = 0;
    }
LAB_106e55c5c:
    func_0x000100164364(param_2 + 0x218);
    do {
      func_0x0001057f87ac(&pppppppuStack_110,param_2 + 0x1e8);
      uVar9 = (char)uStack_100 != '\x01' || pppppppuStack_108 == (uint *******)0x0;
      if ((char)uStack_100 == '\x01' && pppppppuStack_108 != (uint *******)0x0) {
        func_0x0001004c38a0(param_2 + 0x218,&pppppppuStack_110);
      }
      pbVar31 = param_2 + 0x1e8;
      func_0x0001057f87f0();
    } while (((ulong)pbVar31 & 1) != 0);
    pppppppuVar12 = (uint *******)(param_2 + 0x218);
    func_0x00010015bc98();
  }
  goto LAB_106e567e8;
code_r0x000106e55e74:
  param_5 = uStack_100;
  FUN_106e5daa8(param_1,pppppppuStack_108,&uStack_f0,uStack_100,uVar14 | 0x860);
  if (((ulong)pppppppuVar35 & 1) == 0) {
    pppppppuVar35 = (uint *******)((long)param_1 + 4);
LAB_106e55e38:
    uStack_f8 = uStack_f8 | 0x80;
    param_5 = uStack_100;
    FUN_106e5daa8(pppppppuVar35,pppppppuStack_108,&uStack_f0);
    if (((ulong)pppppppuVar35 & 1) == 0) {
LAB_106e55e9c:
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_15f = 0;
      uStack_167 = 0;
      uStack_160 = 0;
      FUN_106e5de88(&uStack_f0,&uStack_180);
      pppppppuVar35 = (uint *******)0x0;
      FUN_106e5dd7c();
    }
    else {
      uStack_b0 = pppppppuStack_b8 != param_1;
      pppppppuStack_c0 = param_1;
    }
  }
LAB_106e55ce0:
  func_0x000106e5e88c();
  if (((ulong)pppppppuVar35 & 1) == 0) {
    param_4 = pppppppuStack_c0;
    func_0x000106e5e5ec(pppppppuStack_c0,pppppppuStack_b8);
    lVar29 = 0;
    while (param_3 = pppppppuStack_a0, pppppppuVar34 = pppppppuStack_a8, uVar14 = uStack_f8,
          lVar29 != 8) {
      lVar13 = lVar29 + 4;
      if (*(int *)(&UNK_10ddefa7c + lVar29) == 0x24 && lVar13 != 8) {
        iVar10 = *(int *)(&UNK_10ddefa80 + lVar29);
        if (iVar10 == 0x60) {
          param_4 = pppppppuStack_c0;
          func_0x000106e5e5ec(pppppppuStack_c0,pppppppuStack_b8);
        }
        else if (iVar10 == 0x26) {
          param_4 = *(uint ********)CONCAT71(uStack_ef,uStack_f0);
          func_0x000106e5e5ec(param_4,((undefined8 *)CONCAT71(uStack_ef,uStack_f0))[1]);
        }
        else if (iVar10 == 0x27) {
          param_4 = pppppppuStack_a8;
          func_0x000106e5e5ec(pppppppuStack_a8,pppppppuStack_a0);
        }
        else if (iVar10 == 0x24) {
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(param_4,0x24)
          ;
        }
        else {
          uVar21 = (ulong)(iVar10 - 0x30U);
          if (9 < iVar10 - 0x30U) goto LAB_106e55d14;
          if (lVar29 == 0) {
            lVar13 = 4;
          }
          else if (*(uint *)(&UNK_10ddefa84 + lVar29) - 0x30 < 10) {
            uVar21 = ((ulong)*(uint *)(&UNK_10ddefa84 + lVar29) + uVar21 * 10) - 0x30;
            lVar13 = lVar29 + 8;
          }
          puVar20 = (undefined8 *)(CONCAT71(uStack_ef,uStack_f0) + uVar21 * 0x18);
          bVar6 = (ulong)((CONCAT71(uStack_e7,uStack_e8) - CONCAT71(uStack_ef,uStack_f0)) / 0x18) <=
                  uVar21;
          puVar32 = puVar20;
          if (bVar6) {
            puVar32 = (undefined8 *)&uStack_d8;
          }
          param_4 = (uint *******)*puVar32;
          puVar32 = puVar20 + 1;
          if (bVar6) {
            puVar32 = (undefined8 *)&uStack_d0;
          }
          func_0x000106e5e5ec(param_4,*puVar32);
        }
      }
      else {
LAB_106e55d14:
        __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(param_4);
        lVar13 = lVar29;
      }
      lVar29 = lVar13 + 4;
    }
    uStack_f8 = uStack_f8 | 0x800;
    puVar4 = (undefined8 *)CONCAT71(uStack_ef,uStack_f0);
    puVar32 = (undefined8 *)&uStack_d0;
    puVar20 = (undefined8 *)&uStack_d8;
    if ((undefined8 *)CONCAT71(uStack_e7,uStack_e8) != puVar4) {
      puVar32 = puVar4 + 1;
      puVar20 = puVar4;
    }
    param_1 = (uint *******)*puVar32;
    pppppppuVar35 = param_1;
    if ((uint *******)*puVar20 != param_1) goto LAB_106e55e38;
    if (pppppppuStack_108 != param_1) goto code_r0x000106e55e74;
    goto LAB_106e55e9c;
  }
  pppppppuVar35 = param_4;
  FUN_106e5de48(pppppppuVar34,param_3);
LAB_106e55ef4:
  FUN_106e5dd7c(&uStack_1f0);
  FUN_106e5dd7c(&uStack_f0);
  uStack_268 = uStack_220;
  ppppppuStack_270 = ppppppuStack_228;
  uStack_260 = uStack_218;
  ppppppuStack_228 = (uint ******)0x0;
  uStack_220 = 0;
  uStack_218 = 0;
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&ppppppuStack_228);
  uStack_258 = 1;
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_
            (&pppppppuStack_250,&ppppppuStack_270);
LAB_106e55f38:
  pppppppuVar34 = (uint *******)&pppppppuStack_110;
  FUN_106e57088(&ppppppuStack_270);
LAB_106e55f40:
  pppppppuVar30 = pppppppuStack_250;
  if (-1 < (char)bStack_239) {
    uStack_248 = (ulong)bStack_239;
    pppppppuVar30 = (uint *******)&pppppppuStack_250;
  }
  pppppppuVar12 = (uint *******)((long)pppppppuVar30 + uStack_248 * 4);
  for (; pppppppuVar30 != pppppppuVar12; pppppppuVar30 = (uint *******)((long)pppppppuVar30 + 4)) {
    uVar14 = *(uint *)pppppppuVar30;
    param_4 = (uint *******)(ulong)uVar14;
    pppppppuVar11 = param_4;
    func_0x000106e56e44();
    if ((int)pppppppuVar11 == 3) {
      if (((((*param_2 & 1) == 0) && (pppppppuStack_288 == (uint *******)0x0)) &&
          ((param_2[7] & 1) == 0)) ||
         (pppppppuVar11 = param_4, func_0x000106e5edc0(), (int)pppppppuVar11 == 0)) {
        pppppppuVar11 = param_4;
        FUN_106e56f00(param_4,param_2 + 0x28);
        if (((ulong)pppppppuVar11 & 1) == 0) {
          if (param_2[2] == 1) {
            if ((uVar14 == 0x5f) || (uVar14 == 0x2d)) goto LAB_106e55fe8;
            pppppppuVar11 = param_4;
            func_0x000106e56e78();
            if ((int)pppppppuVar11 != 0) {
              FUN_106e56de8(param_2,param_4);
              goto LAB_106e55f9c;
            }
          }
          if (param_2[1] == 1) {
            plVar27 = *(long **)(param_2 + 8);
            if (plVar27 == (long *)0x0) {
              FUN_106e52d68();
              lVar29 = 0x2e0;
              puVar32 = (undefined8 *)&UNK_110980070;
              do {
                pppppppuVar35 = (uint *******)puVar32[-1];
                param_5 = (uint *******)*puVar32;
                FUN_106e55908(&uStack_180,param_2);
                param_3 = *(uint ********)(param_2 + 0x18);
                if (param_3 < *(uint ********)(param_2 + 0x20)) {
                  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                            (param_3,&uStack_180);
                  pppppppuVar34 = param_3 + 3;
                  *(uint ********)(param_2 + 0x18) = pppppppuVar34;
                }
                else {
                  pbVar31 = param_2 + 0x10;
                  FUN_106e56f34(pbVar31,((long)param_3 - *(long *)(param_2 + 0x10)) / 0x18 + 1);
                  pppppppuVar35 =
                       (uint *******)
                       ((*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / 0x18);
                  param_5 = (uint *******)(param_2 + 0x20);
                  FUN_106e56fa4(&pppppppuStack_110,pbVar31);
                  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                            (uStack_100,&uStack_180);
                  uStack_100 = uStack_100 + 3;
                  FUN_106e56f54(param_2 + 0x10,&pppppppuStack_110);
                  pppppppuVar34 = *(uint ********)(param_2 + 0x18);
                  FUN_106e57008(&pppppppuStack_110);
                }
                *(uint ********)(param_2 + 0x18) = pppppppuVar34;
                puVar20 = &uStack_180;
                __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
                puVar32 = puVar32 + 2;
                lVar29 = lVar29 + -0x10;
              } while (lVar29 != 0);
              func_0x000106e5e950();
              puVar20[1] = 0;
              *puVar20 = 0;
              puVar20[3] = 0;
              puVar20[2] = 0;
              *(undefined4 *)(puVar20 + 4) = 0x3f800000;
              pppppppuStack_110 = (uint *******)0x0;
              FUN_106e52dc8(param_2 + 8);
              pppppppuVar11 = (uint *******)&pppppppuStack_110;
              func_0x000106e52da8();
              uVar21 = 0;
              uVar19 = 0;
              while (uVar21 != 0x34f) {
                uVar25 = uVar19 + 1;
                uStack_278 = uVar19;
                if ((uVar25 < 0x2e) && (*(ushort *)(&UNK_10ddefa20 + uVar25 * 2) <= uVar21)) {
                  uStack_278 = uVar25;
                }
                uVar1 = *(uint *)(&UNK_10ddeece4 + uVar21 * 4);
                pppppppuVar33 = (uint *******)(long)(int)uVar1;
                param_3 = *(uint ********)(param_2 + 8);
                pppppppuVar34 = (uint *******)param_3[1];
                uStack_280 = uVar21;
                if (pppppppuVar34 != (uint *******)0x0) {
                  uVar21 = (long)pppppppuVar34 - 1;
                  if (((ulong)pppppppuVar34 & uVar21) == 0) {
                    param_1 = (uint *******)(uVar21 & (ulong)pppppppuVar33);
                  }
                  else {
                    param_1 = pppppppuVar33;
                    if (pppppppuVar34 <= pppppppuVar33) {
                      uVar19 = 0;
                      if (pppppppuVar34 != (uint *******)0x0) {
                        uVar19 = (ulong)pppppppuVar33 / (ulong)pppppppuVar34;
                      }
                      param_1 = (uint *******)((long)pppppppuVar33 - uVar19 * (long)pppppppuVar34);
                    }
                  }
                  pppppuVar17 = (*param_3)[(long)param_1];
                  if (pppppuVar17 != (uint *****)0x0) {
                    do {
                      while( true ) {
                        pppppuVar17 = (uint *****)*pppppuVar17;
                        if (pppppuVar17 == (uint *****)0x0) goto LAB_106e561fc;
                        pppppppuVar22 = (uint *******)pppppuVar17[1];
                        if (pppppppuVar22 != pppppppuVar33) break;
                        if (*(uint *)(pppppuVar17 + 2) == uVar1) goto LAB_106e564c0;
                      }
                      if (((ulong)pppppppuVar34 & uVar21) == 0) {
                        pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 & uVar21);
                      }
                      else if (pppppppuVar34 <= pppppppuVar22) {
                        uVar19 = 0;
                        if (pppppppuVar34 != (uint *******)0x0) {
                          uVar19 = (ulong)pppppppuVar22 / (ulong)pppppppuVar34;
                        }
                        pppppppuVar22 =
                             (uint *******)((long)pppppppuVar22 - uVar19 * (long)pppppppuVar34);
                      }
                    } while (pppppppuVar22 == param_1);
                  }
                }
LAB_106e561fc:
                func_0x000106e5e3d0();
                pppppppuVar22 = param_3 + 2;
                pppppppuStack_110 = pppppppuVar11;
                pppppppuStack_108 = pppppppuVar22;
                uStack_100 = (uint *******)0x1;
                *pppppppuVar11 = (uint ******)0x0;
                pppppppuVar11[1] = (uint ******)pppppppuVar33;
                *(uint *)(pppppppuVar11 + 2) = uVar1;
                *(char *)((long)pppppppuVar11 + 0x14) = (char)uStack_278;
                if ((pppppppuVar34 == (uint *******)0x0) ||
                   (*(float *)(param_3 + 4) * (float)pppppppuVar34 < (float)((long)param_3[3] + 1)))
                {
                  uVar21 = 1;
                  if ((uint *******)0x2 < pppppppuVar34) {
                    uVar21 = (ulong)(((ulong)pppppppuVar34 & (long)pppppppuVar34 - 1U) != 0);
                  }
                  pppppppuVar15 = (uint *******)(uVar21 | (long)pppppppuVar34 << 1);
                  pppppppuVar18 =
                       (uint *******)(long)((float)((long)param_3[3] + 1) / *(float *)(param_3 + 4))
                  ;
                  if (pppppppuVar15 <= pppppppuVar18) {
                    pppppppuVar15 = pppppppuVar18;
                  }
                  if ((long)pppppppuVar15 - 1U == 0) {
                    pppppppuVar15 = (uint *******)0x2;
                  }
                  else if (((ulong)pppppppuVar15 & (long)pppppppuVar15 - 1U) != 0) {
                    __ZNSt3__112__next_primeEm();
                    pppppppuVar34 = (uint *******)param_3[1];
                  }
                  if (pppppppuVar34 < pppppppuVar15) {
LAB_106e562bc:
                    pppppppuVar34 = pppppppuVar15;
                    if ((ulong)pppppppuVar34 >> 0x3d != 0) {
                      func_0x000104bd35f4();
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x106e5681c);
                      (*pcVar5)();
                    }
                    lVar29 = (long)pppppppuVar34 << 3;
                    __Znwm(lVar29);
                    FUN_106e5c598(param_3,lVar29);
                    param_3[1] = (uint ******)pppppppuVar34;
                    ppppppuVar16 = *param_3;
                    for (pppppppuVar15 = (uint *******)0x0; pppppppuVar34 != pppppppuVar15;
                        pppppppuVar15 = (uint *******)((long)pppppppuVar15 + 1)) {
                      ppppppuVar16[(long)pppppppuVar15] = (uint *****)0x0;
                    }
                    ppppppuVar23 = *pppppppuVar22;
                    if (ppppppuVar23 != (uint ******)0x0) {
                      pppppppuVar15 = (uint *******)ppppppuVar23[1];
                      uVar19 = (long)pppppppuVar34 - 1;
                      uVar21 = 0;
                      if (pppppppuVar34 != (uint *******)0x0) {
                        uVar21 = (ulong)pppppppuVar15 / (ulong)pppppppuVar34;
                      }
                      pppppppuVar18 = pppppppuVar15;
                      if (pppppppuVar34 <= pppppppuVar15) {
                        pppppppuVar18 =
                             (uint *******)((long)pppppppuVar15 - uVar21 * (long)pppppppuVar34);
                      }
                      if (((ulong)pppppppuVar34 & uVar19) == 0) {
                        pppppppuVar18 = (uint *******)((ulong)pppppppuVar15 & uVar19);
                      }
                      ppppppuVar16[(long)pppppppuVar18] = (uint *****)pppppppuVar22;
                      while (ppppppuVar24 = ppppppuVar23, ppppppuVar23 = (uint ******)*ppppppuVar24,
                            ppppppuVar23 != (uint ******)0x0) {
                        pppppppuVar15 = (uint *******)ppppppuVar23[1];
                        if (((ulong)pppppppuVar34 & uVar19) == 0) {
                          pppppppuVar15 = (uint *******)((ulong)pppppppuVar15 & uVar19);
                        }
                        else if (pppppppuVar34 <= pppppppuVar15) {
                          uVar21 = 0;
                          if (pppppppuVar34 != (uint *******)0x0) {
                            uVar21 = (ulong)pppppppuVar15 / (ulong)pppppppuVar34;
                          }
                          pppppppuVar15 =
                               (uint *******)((long)pppppppuVar15 - uVar21 * (long)pppppppuVar34);
                        }
                        if (pppppppuVar15 != pppppppuVar18) {
                          if (ppppppuVar16[(long)pppppppuVar15] == (uint *****)0x0) {
                            ppppppuVar16[(long)pppppppuVar15] = (uint *****)ppppppuVar24;
                            pppppppuVar18 = pppppppuVar15;
                          }
                          else {
                            *ppppppuVar24 = *ppppppuVar23;
                            *ppppppuVar23 = (uint *****)*ppppppuVar16[(long)pppppppuVar15];
                            *ppppppuVar16[(long)pppppppuVar15] = (uint ****)ppppppuVar23;
                            ppppppuVar23 = ppppppuVar24;
                          }
                        }
                      }
                    }
                  }
                  else if (pppppppuVar15 < pppppppuVar34) {
                    pppppppuVar18 =
                         (uint *******)(long)((float)param_3[3] / *(float *)(param_3 + 4));
                    if ((pppppppuVar34 < (uint *******)0x3) ||
                       (((ulong)pppppppuVar34 & (long)pppppppuVar34 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((uint *******)0x1 < pppppppuVar18) {
                      pppppppuVar18 =
                           (uint *******)(1L << (-LZCOUNT((long)pppppppuVar18 + -1) & 0x3fU));
                    }
                    if (pppppppuVar15 <= pppppppuVar18) {
                      pppppppuVar15 = pppppppuVar18;
                    }
                    if (pppppppuVar15 < pppppppuVar34) {
                      if (pppppppuVar15 != (uint *******)0x0) goto LAB_106e562bc;
                      FUN_106e5c598(param_3,0);
                      pppppppuVar34 = (uint *******)0x0;
                      param_3[1] = (uint ******)0x0;
                    }
                    else {
                      pppppppuVar34 = (uint *******)param_3[1];
                    }
                  }
                  if (((ulong)pppppppuVar34 & (long)pppppppuVar34 - 1U) == 0) {
                    param_1 = (uint *******)((long)pppppppuVar34 - 1U & (ulong)pppppppuVar33);
                  }
                  else {
                    param_1 = pppppppuVar33;
                    if (pppppppuVar34 <= pppppppuVar33) {
                      uVar21 = 0;
                      if (pppppppuVar34 != (uint *******)0x0) {
                        uVar21 = (ulong)pppppppuVar33 / (ulong)pppppppuVar34;
                      }
                      param_1 = (uint *******)((long)pppppppuVar33 - uVar21 * (long)pppppppuVar34);
                    }
                  }
                }
                ppppppuVar16 = *param_3;
                pppppuVar17 = ppppppuVar16[(long)param_1];
                if (pppppuVar17 == (uint *****)0x0) {
                  *pppppppuVar11 = *pppppppuVar22;
                  *pppppppuVar22 = (uint ******)pppppppuVar11;
                  ppppppuVar16[(long)param_1] = (uint *****)pppppppuVar22;
                  if (*pppppppuVar11 != (uint ******)0x0) {
                    pppppppuVar33 = (uint *******)(*pppppppuVar11)[1];
                    if (((ulong)pppppppuVar34 & (long)pppppppuVar34 - 1U) == 0) {
                      pppppppuVar33 =
                           (uint *******)((ulong)pppppppuVar33 & (long)pppppppuVar34 - 1U);
                    }
                    else if (pppppppuVar34 <= pppppppuVar33) {
                      uVar21 = 0;
                      if (pppppppuVar34 != (uint *******)0x0) {
                        uVar21 = (ulong)pppppppuVar33 / (ulong)pppppppuVar34;
                      }
                      pppppppuVar33 =
                           (uint *******)((long)pppppppuVar33 - uVar21 * (long)pppppppuVar34);
                    }
                    ppppppuVar16[(long)pppppppuVar33] = (uint *****)pppppppuVar11;
                  }
                }
                else {
                  *pppppppuVar11 = (uint ******)*pppppuVar17;
                  *pppppuVar17 = (uint ****)pppppppuVar11;
                }
                pppppppuStack_110 = (uint *******)0x0;
                param_3[3] = (uint ******)((long)param_3[3] + 1);
                pppppppuVar11 = (uint *******)&pppppppuStack_110;
                FUN_106e5c5b0();
LAB_106e564c0:
                uVar19 = uStack_278;
                uVar21 = uStack_280 + 1;
              }
              plVar27 = *(long **)(param_2 + 8);
            }
            uVar21 = plVar27[1];
            if ((uVar21 != 0) && (plVar27[3] != 0)) {
              uVar19 = (ulong)(int)uVar14;
              uVar25 = uVar21 - 1;
              if ((uVar21 & uVar25) == 0) {
                uVar26 = uVar25 & uVar19;
              }
              else {
                uVar26 = uVar19;
                if (uVar21 <= uVar19) {
                  uVar26 = 0;
                  if (uVar21 != 0) {
                    uVar26 = uVar19 / uVar21;
                  }
                  uVar26 = uVar19 - uVar26 * uVar21;
                }
              }
              plVar27 = *(long **)(*plVar27 + uVar26 * 8);
              if (plVar27 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar27 = (long *)*plVar27;
                    if (plVar27 == (long *)0x0) goto LAB_106e565e4;
                    uVar28 = plVar27[1];
                    if (uVar28 != uVar19) break;
                    if (*(uint *)(plVar27 + 2) == uVar14) {
                      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                                (&ppppppuStack_210,
                                 *(long *)(param_2 + 0x10) +
                                 (ulong)*(byte *)((long)plVar27 + 0x14) * 0x18);
                      uStack_1f8 = CONCAT31(uStack_1f8._1_3_,1);
                      goto LAB_106e5665c;
                    }
                  }
                  if ((uVar21 & uVar25) == 0) {
                    uVar28 = uVar28 & uVar25;
                  }
                  else if (uVar21 <= uVar28) {
                    uVar3 = 0;
                    if (uVar21 != 0) {
                      uVar3 = uVar28 / uVar21;
                    }
                    uVar28 = uVar28 - uVar3 * uVar21;
                  }
                } while (uVar28 == uVar26);
              }
            }
          }
LAB_106e565e4:
          if ((param_2[5] == 1) &&
             (pppppppuVar11 = param_4, func_0x000106e55684(), (ulong)pppppppuVar11 >> 0x20 != 0)) {
            uStack_100 = (uint *******)CONCAT17(1,(undefined7)uStack_100);
            pppppppuStack_110 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
            uStack_200 = uStack_100;
            pppppppuStack_208 = pppppppuStack_108;
            ppppppuStack_210 = (uint ******)pppppppuStack_110;
            pppppppuStack_108 = (uint *******)0x0;
            uStack_100 = (uint *******)0x0;
            pppppppuStack_110 = (uint *******)0x0;
            uStack_1f8 = CONCAT31(uStack_1f8._1_3_,1);
            func_0x000106e5e63c();
            if ((char)uStack_1f8 != '\x01') goto LAB_106e56608;
LAB_106e5665c:
            __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                      (&pppppppuStack_110,&ppppppuStack_210);
            pppppppuVar11 = uStack_100;
            pppppppuVar33 = (uint *******)(long)uStack_100._7_1_;
            if ((long)pppppppuVar33 < 0) {
              pppppppuVar22 = pppppppuStack_110;
              if (pppppppuStack_108 != (uint *******)0x0) goto LAB_106e56684;
              pppppppuVar15 = (uint *******)0x0;
LAB_106e566e8:
              for (lVar29 = (long)pppppppuVar15 << 2; lVar29 != 0; lVar29 = lVar29 + -4) {
                uVar21 = (ulong)*(uint *)pppppppuVar22;
                FUN_106e56eb8(uVar21,param_2 + 0x28);
                __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
                          (param_2 + 0x1b0,uVar21);
                pppppppuVar22 = (uint *******)((long)pppppppuVar22 + 4);
              }
            }
            else {
              if (uStack_100._7_1_ == '\0') {
LAB_106e566b4:
                pppppppuVar22 = (uint *******)&pppppppuStack_110;
                pppppppuVar15 = pppppppuVar33;
                goto LAB_106e566e8;
              }
              pppppppuVar22 = (uint *******)&pppppppuStack_110;
LAB_106e56684:
              uVar14 = *(uint *)pppppppuVar22;
              func_0x000106e56e78();
              if (uVar14 == 0) {
                pppppppuVar22 = pppppppuStack_110;
                pppppppuVar15 = pppppppuStack_108;
                if ((long)pppppppuVar11 < 0) goto LAB_106e566e8;
                goto LAB_106e566b4;
              }
              pppppppuVar33 = pppppppuStack_110;
              if (-1 < (long)pppppppuVar11) {
                pppppppuVar33 = (uint *******)&pppppppuStack_110;
              }
              FUN_106e56de8(param_2,*(uint *)pppppppuVar33);
            }
            func_0x000106e5e63c();
          }
          else {
            ppppppuStack_210 = (uint ******)((ulong)ppppppuStack_210 & 0xffffffffffffff00);
            uStack_1f8 = uStack_1f8 & 0xffffff00;
LAB_106e56608:
            func_0x000106e5e8c0();
            __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
                      (param_2 + 0x1b0,pppppppuVar11);
          }
          FUN_106e57088(&ppppppuStack_210);
        }
        else {
LAB_106e55fe8:
          func_0x000106e5e6c4();
        }
      }
      else {
        if ((char)param_2[0x1c7] < '\0') {
          if (*(long *)(param_2 + 0x1b8) != 0) goto LAB_106e564d8;
        }
        else if (param_2[0x1c7] != 0) {
LAB_106e564d8:
          func_0x000106e5e6c4();
        }
        if (4 < uVar14 - 0x1f3fb) {
          if ((param_2[7] & 1) == 0) {
            __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
                      (param_2 + 0x1b0,param_4);
            func_0x000106e5e6c4();
          }
          if (pppppppuStack_288 != (uint *******)0x0) {
            uStack_100 = (uint *******)CONCAT17(1,(undefined7)uStack_100);
            pppppppuStack_110 = (uint *******)(ulong)uVar14;
            pppppppuVar35 = (uint *******)&pppppppuStack_110;
            param_5 = (uint *******)0x1;
            FUN_106e5694c(&ppppppuStack_210,param_2);
            FUN_106e56ee8(pppppppuStack_288,&ppppppuStack_210);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_210);
            func_0x000106e5e63c();
          }
        }
      }
    }
    else {
      if ((int)pppppppuVar11 == 1) {
        func_0x000106e5e8c0();
        param_4 = pppppppuVar11;
      }
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
                (param_2 + 0x1b0,param_4);
    }
LAB_106e55f9c:
  }
  func_0x000106e5e6c4();
  pppppppuVar30 = pppppppuStack_290;
  uVar9 = 0;
  if ((param_2[3] == 1) &&
     (uVar9 = *(long *)(param_2 + 0x218) == *(long *)(param_2 + 0x220), (bool)uVar9)) {
    bVar2 = param_2[0x1df];
    param_5 = (uint *******)(long)(char)bVar2;
    pppppppuVar12 = param_5;
    if ((long)param_5 < 0) {
      pppppppuVar12 = *(uint ********)(param_2 + 0x1d0);
    }
    if (pppppppuVar12 != (uint *******)0x0) {
      uVar9 = param_2[4] == 1;
      if (((bool)uVar9) && (uVar9 = *(int *)(param_2 + 0x1e0) == 0x2a, (bool)uVar9)) {
        if ((char)bVar2 < '\0') {
          param_5 = *(uint ********)(param_2 + 0x1d0);
          uVar9 = param_5 == (uint *******)0x1;
          if ((uint *******)0x1 < param_5) goto LAB_106e5678c;
          goto LAB_106e567b4;
        }
        uVar9 = bVar2 == 1;
        if (1 < bVar2) {
LAB_106e5678c:
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5eraseEmm
                    (pppppppuStack_298,(long)param_5 + -1,1);
          param_5 = (uint *******)(ulong)param_2[0x1df];
          goto LAB_106e567a0;
        }
LAB_106e567a8:
        param_5 = (uint *******)((ulong)param_5 & 0xff);
        pppppppuVar35 = pppppppuStack_298;
      }
      else {
LAB_106e567a0:
        if (((uint)param_5 >> 7 & 1) == 0) goto LAB_106e567a8;
        param_5 = *(uint ********)(param_2 + 0x1d0);
LAB_106e567b4:
        pppppppuVar35 = (uint *******)*pppppppuStack_298;
      }
      FUN_106e5694c(&pppppppuStack_110,param_2);
      func_0x0001000fecf4(param_2 + 0x218,&pppppppuStack_110);
      func_0x000106e5e644();
    }
  }
  pppppppuVar12 = (uint *******)(param_2 + 0x218);
  func_0x00010015bc98(pppppppuVar30);
  param_1 = (uint *******)&pppppppuStack_250;
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
LAB_106e567e8:
  func_0x000106e5e168(uStack_78);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x000106e5e63c();
  FUN_106e57088(&ppppppuStack_210);
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&pppppppuStack_250);
  pppppppuVar33 = param_1;
  __Unwind_Resume();
  pppppppuVar11 = (uint *******)((long)pppppppuVar35 + (long)param_5 * 4);
  pcStack_2a8 = FUN_106e5694c;
  pppppppuVar22 = pppppppuVar12 + 6;
  pppppppuStack_2e0 = param_3;
  pppppppuStack_2d8 = param_4;
  pppppppuStack_2d0 = pppppppuVar34;
  pppppppuStack_2c8 = param_1;
  pbStack_2c0 = param_2;
  pppppppuStack_2b8 = pppppppuVar30;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x000106e5e340();
  pppppppuVar22[0x17] = (uint ******)0x0;
  uStack_2e8 = extraout_x8_02;
  if (pppppppuVar22[6] == (uint ******)0x0) {
LAB_106e56b3c:
    ppppppuVar16 = (uint ******)(long)(char)*(byte *)((long)pppppppuVar12 + 0x47);
    if ((long)ppppppuVar16 < 0) {
      ppppppuVar16 = pppppppuVar12[7];
    }
    if (ppppppuVar16 == (uint ******)0x0) goto LAB_106e56b88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (pppppppuVar33,pppppppuVar12 + 6);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
              (pppppppuVar33,(long)pppppppuVar11 - (long)pppppppuVar35 >> 1,0);
    if (pppppppuVar11 != pppppppuVar35) {
      func_0x000106e5e7bc((long)*(char *)((long)pppppppuVar33 + 0x17));
      func_0x000106e5e428();
      func_0x000106e5e2b4();
      func_0x000106e5e1c8();
      do {
        iVar10 = (int)pppppppuVar12[0xc];
        func_0x000106e5e3c4();
        func_0x000106e5e430();
        pppppppuVar12[0x1d] =
             (uint ******)
             ((long)pppppppuVar12[0x1d] + ((long)pppppppuStack_370 - (long)pppppppuVar35 >> 2));
        uVar9 = true;
        if ((long)pppppppuStack_370 - (long)pppppppuVar35 == 0) break;
        if (iVar10 != 1) {
          if (iVar10 == 0) {
            func_0x000106e5e1b4(uStack_378);
            func_0x000106e5e428();
            goto LAB_106e56a90;
          }
          uVar9 = false;
          if (iVar10 == 3) {
            func_0x000106e5e4d0((long)*(char *)((long)pppppppuVar33 + 0x17));
            func_0x000106e5e428();
            func_0x000106e5e844(pppppppuVar33);
            func_0x0001000da738();
            goto LAB_106e56a90;
          }
          break;
        }
        func_0x000106e5e1b4(uStack_378);
        func_0x000106e5e428();
        func_0x000106e5e1c8();
        uVar9 = pppppppuStack_370 == pppppppuVar11;
        pppppppuVar35 = pppppppuStack_370;
      } while (pppppppuStack_370 < pppppppuVar11);
LAB_106e56b34:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar33);
      goto LAB_106e56b3c;
    }
    func_0x000106e5e2b4();
LAB_106e56a90:
    bVar2 = *(byte *)((long)pppppppuVar33 + 0x17);
    ppppppuVar16 = pppppppuVar33[1];
    func_0x000106e5e7bc((int)(char)bVar2);
    func_0x000106e5e428();
    if (-1 < (char)bVar2) {
      ppppppuVar16 = (uint ******)(ulong)bVar2;
    }
    bVar2 = *(byte *)((long)pppppppuVar33 + 0x17);
    pppppppuVar35 = (uint *******)*pppppppuVar33;
    if (-1 < (char)bVar2) {
      pppppppuVar35 = pppppppuVar33;
    }
    lVar29 = (long)pppppppuVar35 + (long)ppppppuVar16;
    ppppppuVar16 = pppppppuVar33[1];
    if (-1 < (char)bVar2) {
      ppppppuVar16 = (uint ******)(ulong)bVar2;
    }
    lVar13 = lVar29 + (long)ppppppuVar16;
    while( true ) {
      ppppppuVar16 = pppppppuVar12[0xc];
      (*(code *)(*ppppppuVar16)[5])(ppppppuVar16,auStack_368,lVar29,lVar13,&pppppppuStack_370);
      iVar10 = (int)ppppppuVar16;
      cVar7 = SBORROW4(iVar10,1);
      cVar8 = iVar10 + -1 < 0;
      if (iVar10 != 1) break;
      func_0x000106e5e1b4(pppppppuStack_370);
      func_0x000106e5e428();
      func_0x000106e5e1c8();
      pppppppuVar35 = extraout_x10_01;
      if (cVar8 == cVar7) {
        pppppppuVar35 = pppppppuVar33;
      }
      lVar29 = (long)pppppppuVar35 + (extraout_x8_03 - extraout_x9_01);
      lVar13 = extraout_x11_01;
      if (cVar8 == cVar7) {
        lVar13 = extraout_x8_04;
      }
      lVar13 = (long)pppppppuVar35 + lVar13;
    }
    if (iVar10 == 0) {
      uVar9 = false;
    }
    else {
      uVar9 = iVar10 == 3;
      if (!(bool)uVar9) goto LAB_106e56b34;
    }
    func_0x000106e5e4d0((long)*(char *)((long)pppppppuVar33 + 0x17));
    func_0x000106e5e428();
  }
  func_0x000106e5e168(uStack_2e8);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_106e56b88:
  FUN_106e5df18(&UNK_10f3dc1ac);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x106e56b98);
  (*pcVar5)();
}



/* Entry: 106e5694c; end: 106e56963;  */

void FUN_106e5694c(long *param_1,long param_2,ulong param_3,long param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  char cVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x9;
  long *extraout_x10;
  long extraout_x11;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  uVar7 = param_3 + param_4 * 4;
  lVar9 = param_2 + 0x30;
  func_0x000106e5e340();
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  uStack_48 = extraout_x8;
  if (*(long *)(lVar9 + 0x30) == 0) {
LAB_106e56b3c:
    lVar9 = (long)*(char *)(param_2 + 0x47);
    if (lVar9 < 0) {
      lVar9 = *(long *)(param_2 + 0x38);
    }
    if (lVar9 == 0) goto LAB_106e56b88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2 + 0x30)
    ;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
              (param_1,(long)(uVar7 - param_3) >> 1,0);
    if (uVar7 != param_3) {
      func_0x000106e5e7bc((long)*(char *)((long)param_1 + 0x17));
      func_0x000106e5e428();
      func_0x000106e5e2b4();
      func_0x000106e5e1c8();
      do {
        iVar5 = (int)*(undefined8 *)(param_2 + 0x60);
        func_0x000106e5e3c4();
        func_0x000106e5e430();
        *(long *)(param_2 + 0xe8) = *(long *)(param_2 + 0xe8) + ((long)(uStack_d0 - param_3) >> 2);
        in_ZR = true;
        if (uStack_d0 - param_3 == 0) break;
        if (iVar5 != 1) {
          if (iVar5 == 0) {
            func_0x000106e5e1b4(uStack_d8);
            func_0x000106e5e428();
            goto LAB_106e56a90;
          }
          in_ZR = false;
          if (iVar5 == 3) {
            func_0x000106e5e4d0((long)*(char *)((long)param_1 + 0x17));
            func_0x000106e5e428();
            func_0x000106e5e844(param_1);
            func_0x0001000da738();
            goto LAB_106e56a90;
          }
          break;
        }
        func_0x000106e5e1b4(uStack_d8);
        func_0x000106e5e428();
        func_0x000106e5e1c8();
        in_ZR = uStack_d0 == uVar7;
        param_3 = uStack_d0;
      } while (uStack_d0 < uVar7);
LAB_106e56b34:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
      goto LAB_106e56b3c;
    }
    func_0x000106e5e2b4();
LAB_106e56a90:
    bVar1 = *(byte *)((long)param_1 + 0x17);
    uVar7 = param_1[1];
    func_0x000106e5e7bc((int)(char)bVar1);
    func_0x000106e5e428();
    if (-1 < (char)bVar1) {
      uVar7 = (ulong)bVar1;
    }
    bVar1 = *(byte *)((long)param_1 + 0x17);
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar1) {
      plVar6 = param_1;
    }
    lVar9 = (long)plVar6 + uVar7;
    uVar7 = param_1[1];
    if (-1 < (char)bVar1) {
      uVar7 = (ulong)bVar1;
    }
    lVar8 = lVar9 + uVar7;
    while( true ) {
      plVar6 = *(long **)(param_2 + 0x60);
      (**(code **)(*plVar6 + 0x28))(plVar6,auStack_c8,lVar9,lVar8,&uStack_d0);
      iVar5 = (int)plVar6;
      cVar3 = SBORROW4(iVar5,1);
      cVar4 = iVar5 + -1 < 0;
      if (iVar5 != 1) break;
      func_0x000106e5e1b4(uStack_d0);
      func_0x000106e5e428();
      func_0x000106e5e1c8();
      plVar6 = extraout_x10;
      if (cVar4 == cVar3) {
        plVar6 = param_1;
      }
      lVar9 = (long)plVar6 + (extraout_x8_00 - extraout_x9);
      lVar8 = extraout_x11;
      if (cVar4 == cVar3) {
        lVar8 = extraout_x8_01;
      }
      lVar8 = (long)plVar6 + lVar8;
    }
    if (iVar5 == 0) {
      in_ZR = false;
    }
    else {
      in_ZR = iVar5 == 3;
      if (!(bool)in_ZR) goto LAB_106e56b34;
    }
    func_0x000106e5e4d0((long)*(char *)((long)param_1 + 0x17));
    func_0x000106e5e428();
  }
  func_0x000106e5e168(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_106e56b88:
  FUN_106e5df18(&UNK_10f3dc1ac);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x106e56b98);
  (*pcVar2)();
}



/* Entry: 106e56964; end: 106e56bcb;  */

void FUN_106e56964(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x9;
  long *extraout_x10;
  long extraout_x11;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  lVar9 = param_2;
  func_0x000106e5e340();
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  uStack_48 = extraout_x8;
  if (*(long *)(lVar9 + 0x30) == 0) {
LAB_106e56b3c:
    lVar9 = (long)*(char *)(param_2 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(param_2 + 8);
    }
    if (lVar9 == 0) goto LAB_106e56b88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
              (param_1,(long)(param_4 - param_3) >> 1,0);
    if (param_4 != param_3) {
      func_0x000106e5e7bc((long)*(char *)((long)param_1 + 0x17));
      func_0x000106e5e428();
      func_0x000106e5e2b4();
      func_0x000106e5e1c8();
      do {
        iVar6 = (int)*(undefined8 *)(param_2 + 0x30);
        func_0x000106e5e3c4();
        func_0x000106e5e430();
        *(long *)(param_2 + 0xb8) = *(long *)(param_2 + 0xb8) + ((long)(uStack_d0 - param_3) >> 2);
        in_ZR = true;
        if (uStack_d0 - param_3 == 0) break;
        if (iVar6 != 1) {
          if (iVar6 == 0) {
            func_0x000106e5e1b4(uStack_d8);
            func_0x000106e5e428();
            goto LAB_106e56a90;
          }
          in_ZR = false;
          if (iVar6 == 3) {
            func_0x000106e5e4d0((long)*(char *)((long)param_1 + 0x17));
            func_0x000106e5e428();
            func_0x000106e5e844(param_1);
            func_0x0001000da738();
            goto LAB_106e56a90;
          }
          break;
        }
        func_0x000106e5e1b4(uStack_d8);
        func_0x000106e5e428();
        func_0x000106e5e1c8();
        in_ZR = uStack_d0 == param_4;
        param_3 = uStack_d0;
      } while (uStack_d0 < param_4);
LAB_106e56b34:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
      goto LAB_106e56b3c;
    }
    func_0x000106e5e2b4();
LAB_106e56a90:
    bVar2 = *(byte *)((long)param_1 + 0x17);
    uVar1 = param_1[1];
    func_0x000106e5e7bc((int)(char)bVar2);
    func_0x000106e5e428();
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    bVar2 = *(byte *)((long)param_1 + 0x17);
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar2) {
      plVar7 = param_1;
    }
    lVar9 = (long)plVar7 + uVar1;
    uVar1 = param_1[1];
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    lVar8 = lVar9 + uVar1;
    while( true ) {
      plVar7 = *(long **)(param_2 + 0x30);
      (**(code **)(*plVar7 + 0x28))(plVar7,auStack_c8,lVar9,lVar8,&uStack_d0);
      iVar6 = (int)plVar7;
      cVar4 = SBORROW4(iVar6,1);
      cVar5 = iVar6 + -1 < 0;
      if (iVar6 != 1) break;
      func_0x000106e5e1b4(uStack_d0);
      func_0x000106e5e428();
      func_0x000106e5e1c8();
      plVar7 = extraout_x10;
      if (cVar5 == cVar4) {
        plVar7 = param_1;
      }
      lVar9 = (long)plVar7 + (extraout_x8_00 - extraout_x9);
      lVar8 = extraout_x11;
      if (cVar5 == cVar4) {
        lVar8 = extraout_x8_01;
      }
      lVar8 = (long)plVar7 + lVar8;
    }
    if (iVar6 == 0) {
      in_ZR = false;
    }
    else {
      in_ZR = iVar6 == 3;
      if (!(bool)in_ZR) goto LAB_106e56b34;
    }
    func_0x000106e5e4d0((long)*(char *)((long)param_1 + 0x17));
    func_0x000106e5e428();
  }
  func_0x000106e5e168(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_106e56b88:
  FUN_106e5df18(&UNK_10f3dc1ac);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x106e56b98);
  (*pcVar3)();
}



/* Entry: 106e56bcc; end: 106e56d67;  */

void FUN_106e56bcc(long param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 uStack_d8;
  ulong uStack_d0;
  
  lVar4 = param_2;
  func_0x000106e5e340();
  *(undefined8 *)(lVar4 + 0xb8) = 0;
  if (*(long *)(lVar4 + 0x30) == 0) {
LAB_106e56cec:
    lVar4 = (long)*(char *)(param_2 + 0x2f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(param_2 + 0x20);
    }
    if (lVar4 == 0) goto LAB_106e56d38;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(param_1,param_2 + 0x18)
    ;
  }
  else {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEmw
              (param_1,(param_4 - param_3) * 2,0);
    in_ZR = param_4 == param_3;
    if (!(bool)in_ZR) {
      func_0x000106e5e7bc((long)*(char *)(param_1 + 0x17));
      func_0x000106e5e6f8();
      func_0x000106e5e2b4();
      func_0x000106e5e1c8();
      do {
        plVar3 = *(long **)(param_2 + 0x30);
        func_0x000106e5e430(*(undefined8 *)(*plVar3 + 0x20));
        *(ulong *)(param_2 + 0xb8) = (uStack_d0 - param_3) + *(long *)(param_2 + 0xb8);
        in_ZR = true;
        if (uStack_d0 - param_3 == 0) break;
        iVar2 = (int)plVar3;
        in_ZR = iVar2 == 1;
        if (!(bool)in_ZR) {
          if (iVar2 == 0) {
            func_0x000106e5e1b4(uStack_d8);
            func_0x000106e5e6f8();
            goto LAB_106e56d08;
          }
          in_ZR = iVar2 == 3;
          if ((bool)in_ZR) {
            func_0x000106e5e4d0((long)*(char *)(param_1 + 0x17));
            func_0x000106e5e6f8();
            func_0x000106e5e844(param_1);
            FUN_106e5df90();
            goto LAB_106e56d08;
          }
          break;
        }
        func_0x000106e5e1b4(uStack_d8);
        func_0x000106e5e6f8();
        func_0x000106e5e1c8();
        in_ZR = uStack_d0 == param_4;
        param_3 = uStack_d0;
      } while (uStack_d0 < param_4);
      func_0x000106e5e984();
      goto LAB_106e56cec;
    }
  }
LAB_106e56d08:
  func_0x000106e5e168(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_106e56d38:
  FUN_106e5df18(&UNK_10f3dc1cc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e56d48);
  (*pcVar1)();
}



/* Entry: 106e56d68; end: 106e56de7;  */

void FUN_106e56d68(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)(param_1 + 0x1b0);
  if (*(char *)(param_1 + 0x1c7) < '\0') {
    if (*(long *)(param_1 + 0x1b8) == 0) {
      return;
    }
    plVar2 = (long *)*plVar1;
  }
  else {
    plVar2 = plVar1;
    if (*(char *)(param_1 + 0x1c7) == '\0') {
      return;
    }
  }
  FUN_106e5694c(auStack_38,param_1,plVar2);
  func_0x0001000fecf4(param_1 + 0x218,auStack_38);
  func_0x000106e5e698();
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEPKw(plVar1,&UNK_10ddefaa0)
  ;
  return;
}



/* Entry: 106e56de8; end: 106e56e1f;  */

void FUN_106e56de8(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1e0) != param_2) {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1e0) = param_2;
  }
  return;
}



/* Entry: 106e56e20; end: 106e56eb7;  */

void FUN_106e56e20(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined4 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 106e56eb8; end: 106e56ee7;  */

void FUN_106e56eb8(undefined8 param_1,long *param_2)

{
  FUN_106e57208();
                    /* WARNING: Could not recover jumptable at 0x000106e56ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))();
  return;
}



/* Entry: 106e56ee8; end: 106e56eff;  */

void FUN_106e56ee8(void)

{
  FUN_106e5e0a0();
  return;
}



/* Entry: 106e56f00; end: 106e56f33;  */

void FUN_106e56f00(undefined8 param_1,long *param_2)

{
  FUN_106e57208();
                    /* WARNING: Could not recover jumptable at 0x000106e56f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))();
  return;
}



/* Entry: 106e56f34; end: 106e56f53;  */

ulong FUN_106e56f34(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    uVar2 = uVar1 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      uVar2 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar2;
  }
  FUN_106e56f98();
  func_0x000106e5e578();
  uVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(uVar2);
  func_0x000106e5e2fc();
  return uVar2;
}



/* Entry: 106e56f54; end: 106e56f97;  */

void FUN_106e56f54(long *param_1,long param_2)

{
  func_0x000106e5e578();
  _memcpy(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x000106e5e2fc();
  return;
}



/* Entry: 106e56f98; end: 106e56fa3;  */

long * FUN_106e56f98(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong extraout_x8;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000106e5e118();
  func_0x000106e5e2f0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000106e5e73c();
    if (extraout_x8 <= unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x18;
  return unaff_x19;
}



/* Entry: 106e56fa4; end: 106e57007;  */

long * FUN_106e56fa4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong extraout_x8;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000106e5e2f0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000106e5e73c();
    if (extraout_x8 <= unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x18;
  return unaff_x19;
}



/* Entry: 106e57008; end: 106e5704f;  */

long * FUN_106e57008(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 106e57050; end: 106e57087;  */

void FUN_106e57050(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9__grow_byEmmmmmm();
  *(long *)(param_1 + 8) = (param_4 - param_6) + param_7;
  return;
}



/* Entry: 106e57088; end: 106e570cf;  */

void FUN_106e57088(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  return;
}



/* Entry: 106e570d0; end: 106e570fb;  */

void FUN_106e570d0(long param_1)

{
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  
  func_0x000106e5e880();
  func_0x000106e5e9bc(PTR___ZTVNSt3__114__codecvt_utf8IwEE_110346b10);
  *(undefined8 *)(param_1 + 0x18) = unaff_x20;
  *(undefined4 *)(param_1 + 0x20) = unaff_w19;
  return;
}



/* Entry: 106e570fc; end: 106e570ff;  */

void FUN_106e570fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17codecvtIwc11__mbstate_tED2Ev_110346880)();
  return;
}



/* Entry: 106e57100; end: 106e57113;  */

void FUN_106e57100(void)

{
  __ZNSt3__17codecvtIwc11__mbstate_tED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e57114; end: 106e5717f;  */

void FUN_106e57114(long param_1,undefined8 param_2,undefined4 param_3)

{
  func_0x000106e5e868();
  FUN_106e571a8();
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  _wcslen();
  FUN_106e57180();
  return;
}



/* Entry: 106e57180; end: 106e571a7;  */

long FUN_106e57180(long param_1,undefined8 param_2,long param_3)

{
  FUN_106e57220();
  if (param_1 == param_3) {
    return param_1;
  }
  FUN_106887738();
  __ZNSt3__16localeC1Ev();
  FUN_106e571dc();
  return param_1;
}



/* Entry: 106e571a8; end: 106e571db;  */

undefined8 FUN_106e571a8(undefined8 param_1)

{
  __ZNSt3__16localeC1Ev();
  FUN_106e571dc();
  return param_1;
}



/* Entry: 106e571dc; end: 106e57207;  */

void FUN_106e571dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_106e57208();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_1;
  func_0x000106e57214();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 106e57208; end: 106e5721f;  */

void FUN_106e57208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_110346100)
            (param_1,PTR___ZNSt3__15ctypeIwE2idE_110346778);
  return;
}



/* Entry: 106e57220; end: 106e5744b;  */

long * FUN_106e57220(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  puVar2 = &stack0xfffffffffffffff0;
  plVar4 = (long *)0x8;
  plVar8 = param_2;
  __Znwm();
  *plVar4 = (long)&PTR_FUN_1109803d0;
  plVar5 = plVar4;
  func_0x000106e5e3bc();
  *plVar5 = (long)&PTR_DAT_1109804a0;
  plVar5[1] = (long)plVar4;
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  *puVar6 = &PTR_DAT_110980428;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = plVar5;
  lStack_58 = param_1[6];
  lStack_60 = param_1[5];
  param_1[5] = (long)plVar5;
  param_1[6] = (long)puVar6;
  func_0x000106e52c80();
  plVar4 = (long *)param_1[5];
  param_1[7] = (long)plVar4;
  uVar1 = *(uint *)(param_1 + 3) & 0x1f0;
  if (uVar1 == 0) {
    func_0x000106e5e370();
    plVar8 = plVar7;
code_r0x000106e5744c:
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000106e5e79c();
    FUN_106e576cc();
    plVar5 = plVar8;
    if (plVar8 == unaff_x23) {
      func_0x000106e5e508();
    }
    while ((plVar7 = plVar5, plVar8 != unaff_x19 && ((int)*plVar8 == 0x7c))) {
      func_0x000106e5e820();
      FUN_106e576cc();
      plVar5 = plVar7;
      if (plVar7 == unaff_x24) {
        func_0x000106e5e508();
      }
      func_0x000106e5e3e4();
      FUN_106e57bc4();
      plVar8 = plVar7;
    }
  }
  else {
    if (uVar1 == 0x10) {
      func_0x000106e5e370();
      puVar2 = &stack0xffffffffffffffd0;
      unaff_x29 = &stack0xfffffffffffffff0;
      if (plVar8 == param_3) {
        return plVar8;
      }
      plVar5 = plVar7;
      if ((int)*plVar8 == 0x5e) {
        FUN_106e57ec4();
        plVar8 = (long *)((long)plVar8 + 4);
      }
      unaff_x20 = plVar8;
      if (plVar8 != param_3) {
        plVar5 = plVar7;
        FUN_106e5be08(plVar7,plVar8,param_3);
        unaff_x22 = (long *)((long)plVar5 + 4);
        unaff_x20 = plVar5;
        if ((plVar5 != param_3 && unaff_x22 == param_3) && ((int)*plVar5 == 0x24)) {
          plVar5 = plVar7;
          func_0x000106e57efc();
          unaff_x20 = unaff_x22;
        }
      }
      if (unaff_x20 == param_3) {
        return unaff_x20;
      }
      unaff_x30 = FUN_106e57560;
      FUN_10688ad94();
    }
    else {
      if ((uVar1 != 0x20) && (uVar1 != 0x40)) {
        if (uVar1 == 0x80) {
          func_0x000106e5e1a4();
          uVar3 = plVar7 == param_2;
          if ((bool)uVar3) {
            func_0x000106e5e508();
          }
          else {
            func_0x000106e5e510();
            FUN_106e574c4();
          }
          while (func_0x000106e5ea14(), !(bool)uVar3) {
            func_0x000106e5e1a4();
            uVar3 = plVar7 == param_2;
            if ((bool)uVar3) {
              func_0x000106e5e508();
            }
            else {
              func_0x000106e5e510();
              FUN_106e574c4();
            }
            func_0x000106e5e3e4();
            FUN_106e57bc4();
          }
          return param_2;
        }
        if (uVar1 == 0x100) {
          func_0x000106e5e1a4();
          uVar3 = plVar7 == param_2;
          if ((bool)uVar3) {
            func_0x000106e5e508();
          }
          else {
            func_0x000106e5e510();
            FUN_106e57560();
          }
          while (func_0x000106e5ea14(), !(bool)uVar3) {
            func_0x000106e5e1a4();
            uVar3 = plVar7 == param_2;
            if ((bool)uVar3) {
              func_0x000106e5e508();
            }
            else {
              func_0x000106e5e510();
              FUN_106e57560();
            }
            func_0x000106e5e3e4();
            FUN_106e57bc4();
          }
          return param_2;
        }
        FUN_1068879ec();
        FUN_106e57660(plVar5);
        plVar8 = plVar4;
        (**(code **)(*plVar4 + 8))();
        unaff_x30 = FUN_106e5744c;
        func_0x000106e5e230();
        register0x00000008 = (BADSPACEBASE *)&lStack_60;
        unaff_x19 = plVar7;
        unaff_x20 = param_1;
        unaff_x21 = plVar4;
        unaff_x22 = param_2;
        unaff_x23 = plVar5;
        unaff_x29 = puVar2;
        goto code_r0x000106e5744c;
      }
      func_0x000106e5e370();
      puVar2 = (undefined1 *)register0x00000008;
      plVar5 = plVar7;
      param_3 = unaff_x19;
      plVar7 = unaff_x21;
    }
    *(long **)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = plVar7;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = param_3;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    func_0x000106e5e79c();
    FUN_106e5c204();
    plVar7 = plVar5;
    plVar8 = plVar5;
    if (plVar5 == unaff_x23) {
LAB_106e575d0:
      FUN_10688ad94();
      return plVar5;
    }
    while ((plVar5 = plVar7, plVar8 != param_3 && ((int)*plVar8 == 0x7c))) {
      func_0x000106e5e820();
      FUN_106e5c204();
      if (plVar5 == unaff_x24) goto LAB_106e575d0;
      plVar7 = plVar5;
      func_0x000106e5e3e4();
      FUN_106e57bc4();
      plVar8 = plVar5;
    }
  }
  return plVar8;
}



/* Entry: 106e5744c; end: 106e574c3;  */

int * FUN_106e5744c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *unaff_x19;
  int *unaff_x23;
  int *unaff_x24;
  
  func_0x000106e5e79c();
  FUN_106e576cc();
  piVar1 = param_1;
  if (param_1 == unaff_x23) {
    func_0x000106e5e508();
  }
  while ((piVar2 = piVar1, param_1 != unaff_x19 && (*param_1 == 0x7c))) {
    func_0x000106e5e820();
    FUN_106e576cc();
    piVar1 = piVar2;
    if (piVar2 == unaff_x24) {
      func_0x000106e5e508();
    }
    func_0x000106e5e3e4();
    FUN_106e57bc4();
    param_1 = piVar2;
  }
  return param_1;
}



/* Entry: 106e574c4; end: 106e5755f;  */

int * FUN_106e574c4(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_x23;
  int *unaff_x24;
  
  if (param_2 != param_3) {
    piVar1 = param_1;
    if (*param_2 == 0x5e) {
      FUN_106e57ec4();
      param_2 = param_2 + 1;
    }
    if (param_2 != param_3) {
      piVar2 = param_1;
      FUN_106e5be08(param_1,param_2,param_3);
      piVar1 = piVar2;
      param_2 = piVar2;
      if ((piVar2 != param_3 && piVar2 + 1 == param_3) && (*piVar2 == 0x24)) {
        func_0x000106e57efc();
        piVar1 = param_1;
        param_2 = piVar2 + 1;
      }
    }
    if (param_2 != param_3) {
      FUN_10688ad94();
      func_0x000106e5e79c();
      FUN_106e5c204();
      piVar2 = piVar1;
      piVar3 = piVar1;
      if (piVar1 != unaff_x23) {
        while( true ) {
          piVar1 = piVar2;
          if ((piVar3 == param_3) || (*piVar3 != 0x7c)) {
            return piVar3;
          }
          func_0x000106e5e820();
          FUN_106e5c204();
          if (piVar1 == unaff_x24) break;
          piVar2 = piVar1;
          func_0x000106e5e3e4();
          FUN_106e57bc4();
          piVar3 = piVar1;
        }
      }
      FUN_10688ad94();
      return piVar1;
    }
  }
  return param_2;
}



/* Entry: 106e57560; end: 106e575d3;  */

int * FUN_106e57560(int *param_1)

{
  int *piVar1;
  int *unaff_x19;
  int *piVar2;
  int *unaff_x23;
  int *unaff_x24;
  
  func_0x000106e5e79c();
  FUN_106e5c204();
  piVar1 = param_1;
  piVar2 = param_1;
  if (param_1 != unaff_x23) {
    while( true ) {
      param_1 = piVar1;
      if ((piVar2 == unaff_x19) || (*piVar2 != 0x7c)) {
        return piVar2;
      }
      func_0x000106e5e820();
      FUN_106e5c204();
      if (param_1 == unaff_x24) break;
      piVar1 = param_1;
      func_0x000106e5e3e4();
      FUN_106e57bc4();
      piVar2 = param_1;
    }
  }
  FUN_10688ad94();
  return param_1;
}



/* Entry: 106e575d4; end: 106e575f3;  */

void FUN_106e575d4(void)

{
  return;
}



/* Entry: 106e575f4; end: 106e57607;  */

void FUN_106e575f4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e57608; end: 106e5761f;  */

void FUN_106e57608(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106e57618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


