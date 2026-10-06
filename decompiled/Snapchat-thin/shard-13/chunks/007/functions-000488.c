/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abca278; end: 10abca27b;  */

long FUN_10abca278(long param_1)

{
  long lVar1;
  
  func_0x00010a09dbbc(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_10a1944f0();
  }
  return param_1;
}



/* Entry: 10abca27c; end: 10abca28f;  */

void FUN_10abca27c(void)

{
  FUN_10abd81b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abca290; end: 10abca2bb;  */

undefined8 FUN_10abca290(void)

{
  return 0;
}



/* Entry: 10abca2bc; end: 10abca423;  */

long FUN_10abca2bc(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_3 * 0x68;
  lVar2 = *(long *)(param_1 + 0x140);
  lVar5 = *(long *)(param_1 + 0x130);
  if ((ulong)((lVar2 - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_3) {
    lVar1 = param_1;
    if (lVar5 != 0) {
      *(long *)(param_1 + 0x138) = lVar5;
      __ZdlPv(lVar5);
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      lVar1 = lVar5;
    }
    if (0x276276276276276 < param_3) {
      FUN_10a18d150();
      return lVar1 + 0x130;
    }
    uVar3 = (lVar2 >> 3) * -0x6276276276276276;
    if (uVar3 < param_3 || uVar3 - param_3 == 0) {
      uVar3 = param_3;
    }
    if (0x13b13b13b13b13a < (ulong)((lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      uVar3 = 0x276276276276276;
    }
    func_0x00010a1922c8(param_1 + 0x130,uVar3);
    lVar2 = *(long *)(param_1 + 0x138);
    lVar1 = lVar2;
    _memmove(lVar2,param_2,lVar4);
    lVar2 = lVar2 + lVar4;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x138);
    lVar6 = lVar2 - lVar5;
    lVar1 = param_1;
    if ((ulong)((lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_3) {
      if (lVar2 != lVar5) {
        _memmove(lVar5,param_2,lVar6);
        lVar2 = *(long *)(param_1 + 0x138);
        lVar1 = lVar5;
      }
      lVar4 = lVar4 - lVar6;
      if (lVar4 != 0) {
        lVar1 = lVar2;
        _memmove(lVar2,lVar6 + param_2,lVar4);
      }
      lVar2 = lVar2 + lVar4;
    }
    else {
      if (param_3 != 0) {
        lVar1 = lVar5;
        _memmove(lVar5,param_2,lVar4);
      }
      lVar2 = lVar5 + lVar4;
    }
  }
  *(long *)(param_1 + 0x138) = lVar2;
  return lVar1;
}



/* Entry: 10abca424; end: 10abca42b;  */

long FUN_10abca424(long param_1)

{
  return param_1 + 0x130;
}



/* Entry: 10abca42c; end: 10abca56b;  */

undefined * FUN_10abca42c(long param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x138) - (long)*(uint **)(param_1 + 0x130);
  if ((ulong)((lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5) < 2) {
    if (lVar3 == 0x68) {
      return (undefined *)(ulong)**(uint **)(param_1 + 0x130);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10abca468);
    (*pcVar1)();
  }
  puVar2 = &UNK_10f699991;
  FUN_10a00946c();
  lVar3 = *(long *)(puVar2 + 0x138) - (long)*(undefined4 **)(puVar2 + 0x130);
  if ((ulong)((lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5) < 2) {
    if (lVar3 == 0x68) {
      **(undefined4 **)(puVar2 + 0x130) = param_2;
      return puVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10abca4b8);
    (*pcVar1)();
  }
  puVar2 = &UNK_10f6999d0;
  FUN_10a00946c();
  lVar3 = *(long *)(puVar2 + 0x138) - *(long *)(puVar2 + 0x130);
  if ((ulong)((lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5) < 2) {
    if (lVar3 == 0x68) {
      return (undefined *)(ulong)*(uint *)(*(long *)(puVar2 + 0x130) + 4);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10abca508);
    (*pcVar1)();
  }
  puVar2 = &UNK_10f699a0f;
  FUN_10a00946c();
  lVar3 = *(long *)(puVar2 + 0x138) - *(long *)(puVar2 + 0x130);
  if (1 < (ulong)((lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    FUN_10a00946c(&UNK_10f699a4d);
    return (undefined *)0x0;
  }
  if (lVar3 == 0x68) {
    *(undefined4 *)(*(long *)(puVar2 + 0x130) + 4) = param_2;
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abca558);
  (*pcVar1)();
}



/* Entry: 10abca56c; end: 10abca577;  */

undefined8 FUN_10abca56c(void)

{
  return 0;
}



/* Entry: 10abca578; end: 10abca683;  */

undefined8 * FUN_10abca578(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c4fff0;
  param_1[9] = &PTR_DAT_110c52dd8;
  func_0x00010abd59bc(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110c4ffa0;
  puStack_28 = param_1 + 6;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_10abd5a04(&puStack_28);
  return param_1;
}



/* Entry: 10abca684; end: 10abca687;  */

undefined8 * FUN_10abca684(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c50088;
  FUN_10abd606c(param_1[0x21]);
  func_0x00010abda948(param_1 + 0x1e);
  func_0x00010abda948(param_1 + 0x1c);
  func_0x00010abda948(param_1 + 0x1a);
  if (param_1[0x13] != 0) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  param_1[9] = &PTR_FUN_110c52e18;
  func_0x00010abd59bc(param_1 + 0xe);
  FUN_10abd60b4(param_1 + 0xb);
  *param_1 = &PTR_DAT_110c4ffa0;
  puStack_28 = param_1 + 6;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_10abd5a04(&puStack_28);
  return param_1;
}



/* Entry: 10abca688; end: 10abca69b;  */

void FUN_10abca688(void)

{
  func_0x00010abd81ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abca69c; end: 10abca8e3;  */

undefined8 * FUN_10abca69c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c500d8;
  puStack_28 = param_1 + 0x1b;
  FUN_10a044868(&puStack_28);
  param_1[9] = &PTR_FUN_110c52ee8;
  func_0x00010abd59bc(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110c4ffa0;
  puStack_28 = param_1 + 6;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_10abd5a04(&puStack_28);
  return param_1;
}



/* Entry: 10abca8e4; end: 10abca8ef;  */

undefined8 FUN_10abca8e4(void)

{
  return 0;
}



/* Entry: 10abca8f0; end: 10abcaaf7;  */

undefined8 * FUN_10abca8f0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c501b0;
  param_1[9] = &PTR_FUN_110c52f68;
  func_0x00010abd59bc(param_1 + 0xe);
  FUN_10abd6cb4(param_1 + 0xb);
  *param_1 = &PTR_DAT_110c4ffa0;
  puStack_28 = param_1 + 6;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_10abd5a04(&puStack_28);
  return param_1;
}



/* Entry: 10abcaaf8; end: 10abcaafb;  */

undefined8 * FUN_10abcaaf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54488;
  func_0x00010a15805c(param_1 + 0xc);
  FUN_10a09a130(param_1 + 10);
  func_0x00010a09dbbc(param_1 + 7);
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10abcaafc; end: 10abcab0f;  */

void FUN_10abcaafc(void)

{
  FUN_10a180724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abcab10; end: 10abcab13;  */

undefined8 * FUN_10abcab10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54488;
  func_0x00010a15805c(param_1 + 0xc);
  FUN_10a09a130(param_1 + 10);
  func_0x00010a09dbbc(param_1 + 7);
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10abcab14; end: 10abcab27;  */

void FUN_10abcab14(void)

{
  FUN_10a180724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abcab28; end: 10abcab47;  */

undefined4 FUN_10abcab28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1280);
}



/* Entry: 10abcab48; end: 10abcaba3;  */

undefined8 * FUN_10abcab48(undefined8 *param_1)

{
  FUN_10a30206c(param_1 + 3);
  *param_1 = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10abcaba4; end: 10abcabc3;  */

void FUN_10abcaba4(void)

{
  return;
}



/* Entry: 10abcabc4; end: 10abcabff;  */

long FUN_10abcabc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  FUN_10abcac00((int)lVar1 == 0,param_1,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10)
               );
  return param_1;
}



/* Entry: 10abcac00; end: 10abcad87;  */

void FUN_10abcac00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar4 = param_1;
  FUN_10ad4bc5c();
  if ((uint)uVar4 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f697a53,0x22);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68,param_3,param_4,uVar4);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar3 = (int)ppuVar5;
    if (((int)param_1 != 0) && (__ZSt19uncaught_exceptionsv(), iVar3 == 0)) {
      if (((uint)uVar4 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10abcad54);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10abcad88; end: 10abcadf7;  */

void FUN_10abcad88(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[1];
  lVar1 = lVar3;
  if (lVar2 != lVar3) {
    do {
      lVar1 = lVar2 + -0x1298;
      func_0x00010a09ad20(lVar2 + -0xdb0);
      lVar2 = lVar1;
    } while (lVar1 != lVar3);
    lVar1 = *param_1;
  }
  param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10abcadf8; end: 10abcae77;  */

undefined8 * FUN_10abcadf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)0x1e08;
  __Znwm();
  *puVar1 = 0;
  puStack_28 = puVar1;
  FUN_10abcae78(param_1 + 1,&puStack_28);
  if (puStack_28 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abcae78; end: 10abcaf5b;  */

void FUN_10abcae78(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar12 = puVar3 + 1;
    *puVar3 = uVar5;
LAB_10abcaf38:
    param_1[1] = (long)puVar12;
    return;
  }
  lVar8 = *param_1;
  lVar11 = (long)puVar3 - lVar8;
  uVar1 = (lVar11 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar2 = uVar7 << 3;
      __Znwm();
      puVar3 = (undefined8 *)(lVar2 + lVar11);
      uVar5 = *param_2;
      *param_2 = 0;
      puVar12 = puVar3 + 1;
      *puVar3 = uVar5;
      _memcpy(puVar3 + -(lVar11 >> 3),lVar8,lVar11);
      *param_1 = (long)(puVar3 + -(lVar11 >> 3));
      param_1[1] = (long)puVar12;
      param_1[2] = lVar2 + uVar7 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_10abcaf38;
    }
  }
  else {
    FUN_10abcaf5c();
  }
  func_0x000109ffded8();
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar9 = (long *)*puVar3;
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)puVar3[1];
    plVar4 = plVar9;
    if (plVar10 != plVar9) {
      do {
        plVar10 = plVar10 + -1;
        lVar8 = *plVar10;
        *plVar10 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
      } while (plVar10 != plVar9);
      plVar4 = (long *)*puVar3;
    }
    puVar3[1] = plVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  return;
}



/* Entry: 10abcaf5c; end: 10abcaf6f;  */

void FUN_10abcaf5c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*puVar1;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)puVar1[1];
    plVar3 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        lVar2 = *plVar5;
        *plVar5 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
      } while (plVar5 != plVar4);
      plVar3 = (long *)*puVar1;
    }
    puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
  return;
}



/* Entry: 10abcaf70; end: 10abcafdb;  */

void FUN_10abcaf70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        lVar1 = *plVar4;
        *plVar4 = 0;
        if (lVar1 != 0) {
          __ZdlPv();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*param_1;
    }
    param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10abcafdc; end: 10abcb05f;  */

undefined8 * FUN_10abcafdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)0x35808;
  __Znwm();
  *puVar1 = 0;
  puStack_28 = puVar1;
  FUN_10abcb060(param_1 + 1,&puStack_28);
  if (puStack_28 != (undefined8 *)0x0) {
    FUN_10abcb158();
  }
  return param_1;
}



/* Entry: 10abcb060; end: 10abcb143;  */

void FUN_10abcb060(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar11 = puVar2 + 1;
    *puVar2 = uVar5;
LAB_10abcb120:
    param_1[1] = (long)puVar11;
    return;
  }
  lVar8 = *param_1;
  lVar10 = (long)puVar2 - lVar8;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar10);
      uVar5 = *param_2;
      *param_2 = 0;
      puVar11 = puVar2 + 1;
      *puVar2 = uVar5;
      _memcpy(puVar2 + -(lVar10 >> 3),lVar8,lVar10);
      *param_1 = (long)(puVar2 + -(lVar10 >> 3));
      param_1[1] = (long)puVar11;
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_10abcb120;
    }
  }
  else {
    FUN_10abcb144();
  }
  func_0x000109ffded8();
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar4 != 0) {
    lVar8 = *plVar4 * 0xd60;
    plVar9 = plVar4 + 1;
    do {
      func_0x00010abcb1a8(plVar9);
      plVar9 = plVar9 + 0x1ac;
      lVar8 = lVar8 + -0xd60;
    } while (lVar8 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar4);
  return;
}



/* Entry: 10abcb144; end: 10abcb157;  */

void FUN_10abcb144(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar1 != 0) {
    lVar3 = *plVar1 * 0xd60;
    plVar2 = plVar1 + 1;
    do {
      func_0x00010abcb1a8(plVar2);
      plVar2 = plVar2 + 0x1ac;
      lVar3 = lVar3 + -0xd60;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10abcb158; end: 10abcb483;  */

void FUN_10abcb158(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar2 = *param_1 * 0xd60;
    plVar1 = param_1 + 1;
    do {
      func_0x00010abcb1a8(plVar1);
      plVar1 = plVar1 + 0x1ac;
      lVar2 = lVar2 + -0xd60;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10abcb484; end: 10abcb5f3;  */

ulong * FUN_10abcb484(ulong *param_1,ulong **param_2,ulong *param_3,ulong *param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong **ppuVar6;
  ulong uVar7;
  ulong **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puStack_88;
  ulong *puStack_38;
  
  uVar3 = param_1[1];
  uVar9 = *param_1;
  uVar7 = (long)(param_1[2] - uVar3) >> 3;
  if (uVar9 < uVar7) {
    puVar2 = param_1;
    if (0x3f < **(ulong **)(uVar3 + uVar9 * 8)) {
      uVar9 = uVar9 + 1;
      if (uVar7 <= uVar9) {
        puVar2 = (ulong *)0x1e08;
        __Znwm();
        *puVar2 = 0;
        param_2 = &puStack_38;
        puStack_38 = puVar2;
        FUN_10abcae78(param_1 + 1);
        puVar2 = puStack_38;
        if (puStack_38 != (ulong *)0x0) {
          __ZdlPv();
        }
        uVar3 = param_1[1];
        uVar7 = (long)(param_1[2] - uVar3) >> 3;
      }
      *param_1 = uVar9;
    }
    if (uVar9 < uVar7) {
      puVar4 = *(ulong **)(uVar3 + uVar9 * 8);
      uVar9 = *puVar4;
      if (uVar9 < 0x40) {
        puVar4[uVar9 * 0xf + 4] = 0;
        puVar4[uVar9 * 0xf + 3] = 0;
        puVar4[uVar9 * 0xf + 6] = 0;
        puVar4[uVar9 * 0xf + 5] = 0;
        puVar4[uVar9 * 0xf + 8] = 0;
        puVar4[uVar9 * 0xf + 7] = 0x3f800000;
        puVar4[uVar9 * 0xf + 10] = 0;
        puVar4[uVar9 * 0xf + 9] = 0x3f80000000000000;
        puVar4[uVar9 * 0xf + 0xc] = 0x3f800000;
        puVar4[uVar9 * 0xf + 0xb] = 0;
        puVar4[uVar9 * 0xf + 0xf] = 0;
        puVar4[uVar9 * 0xf + 1] = 0xffffffffffffffff;
        puVar4[uVar9 * 0xf + 2] = 0xffffffff;
        *(undefined2 *)(puVar4 + uVar9 * 0xf + 3) = 0xffff;
        puVar4[uVar9 * 0xf + 4] = 0;
        puVar4[uVar9 * 0xf + 5] = 0;
        puVar4[uVar9 * 0xf + 6] = 0;
        puVar4[uVar9 * 0xf + 0xe] = 0x3f80000000000000;
        puVar4[uVar9 * 0xf + 0xd] = 0;
        *(undefined1 *)((long)puVar4 + uVar9 * 0x78 + 0x7a) = 1;
        *puVar4 = uVar9 + 1;
        if ((ulong)((long)(param_1[2] - param_1[1]) >> 3) <= *param_1) goto LAB_10abcb5d4;
        puVar4 = *(ulong **)(param_1[1] + *param_1 * 8);
        uVar9 = *puVar4;
        if (uVar9 != 0) {
          if (uVar9 < 0x41) {
            return puVar4 + uVar9 * 0xf + -0xe;
          }
          goto LAB_10abcb5d4;
        }
      }
      FUN_10a0a2358();
      if (puStack_38 != (ulong *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar3 = puVar2[1];
      uVar9 = *puVar2;
      uVar7 = (long)(puVar2[2] - uVar3) >> 3;
      if (uVar9 < uVar7) {
        puVar4 = puVar2;
        if (0x3f < **(ulong **)(uVar3 + uVar9 * 8)) {
          uVar9 = uVar9 + 1;
          if (uVar7 <= uVar9) {
            puVar4 = (ulong *)0x35808;
            __Znwm();
            *puVar4 = 0;
            param_2 = &puStack_88;
            puStack_88 = puVar4;
            FUN_10abcb060(puVar2 + 1);
            puVar4 = puStack_88;
            if (puStack_88 != (ulong *)0x0) {
              FUN_10abcb158();
            }
            uVar3 = puVar2[1];
            uVar7 = (long)(puVar2[2] - uVar3) >> 3;
          }
          *puVar2 = uVar9;
        }
        if (uVar9 < uVar7) {
          puVar10 = *(ulong **)(uVar3 + uVar9 * 8);
          uVar9 = *puVar10;
          if (0x3f < uVar9) {
LAB_10abcb7a0:
            FUN_10a0a2358();
            if (puStack_88 != (ulong *)0x0) {
              FUN_10abcb158();
            }
            __Unwind_Resume();
            uVar9 = puVar4[5];
            if (uVar9 == 0) {
              puVar2 = (ulong *)0x38;
              __Znwm();
              puVar2[2] = (ulong)param_3;
              puVar2[3] = (ulong)param_4;
              *(undefined4 *)(puVar2 + 4) = 0xffffffff;
              puVar2[5] = 0;
              *(undefined1 *)(puVar2 + 6) = 0;
              puVar10 = *param_2;
              puVar10[1] = (ulong)puVar2;
              *puVar2 = (ulong)puVar10;
              *param_2 = puVar2;
              puVar2[1] = (ulong)param_2;
              puVar4[2] = puVar4[2] + 1;
            }
            else {
              ppuVar6 = (ulong **)puVar4[4];
              if ((param_2 != ppuVar6) && (ppuVar8 = (ulong **)ppuVar6[1], ppuVar8 != param_2)) {
                puVar2 = *ppuVar6;
                puVar2[1] = (ulong)ppuVar8;
                *ppuVar8 = puVar2;
                puVar2 = *param_2;
                puVar2[1] = (ulong)ppuVar6;
                *ppuVar6 = puVar2;
                *param_2 = (ulong *)ppuVar6;
                ppuVar6[1] = (ulong *)param_2;
                puVar4[5] = uVar9 - 1;
                puVar4[2] = puVar4[2] + 1;
              }
              ppuVar6[2] = param_3;
              ppuVar6[3] = param_4;
              *(undefined1 *)(ppuVar6 + 6) = 0;
              puVar2 = puVar4;
            }
            return puVar2;
          }
          puVar4 = puVar10 + uVar9 * 0x1ac + 1;
          param_2 = (ulong **)0xd50;
          _bzero();
          *(undefined2 *)(puVar10 + uVar9 * 0x1ac + 1) = 0xffff;
          puVar10[uVar9 * 0x1ac + 3] = 0;
          puVar10[uVar9 * 0x1ac + 2] = 0;
          *(undefined2 *)(puVar10 + uVar9 * 0x1ac + 4) = 0;
          puVar10[uVar9 * 0x1ac + 7] = 0;
          puVar10[uVar9 * 0x1ac + 6] = 0;
          puVar10[uVar9 * 0x1ac + 9] = 0;
          puVar10[uVar9 * 0x1ac + 8] = 0;
          puVar10[uVar9 * 0x1ac + 0xb] = 0;
          puVar10[uVar9 * 0x1ac + 10] = 0;
          *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0x65) = 0;
          *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0x5d) = 0;
          puVar10[uVar9 * 0x1ac + 400] = 0;
          puVar10[uVar9 * 0x1ac + 399] = 0;
          puVar10[uVar9 * 0x1ac + 0x192] = 0;
          puVar10[uVar9 * 0x1ac + 0x191] = 0;
          puVar10[uVar9 * 0x1ac + 0x194] = 0;
          puVar10[uVar9 * 0x1ac + 0x193] = 0;
          *(undefined4 *)(puVar10 + uVar9 * 0x1ac + 0x195) = 0x3f800000;
          puVar10[uVar9 * 0x1ac + 0x197] = 0;
          puVar10[uVar9 * 0x1ac + 0x196] = 0;
          puVar10[uVar9 * 0x1ac + 0x199] = 0;
          puVar10[uVar9 * 0x1ac + 0x198] = 0;
          *(undefined4 *)(puVar10 + uVar9 * 0x1ac + 0x19a) = 0x3f800000;
          *(undefined1 *)((long)puVar10 + uVar9 * 0xd60 + 0xcdc) = 6;
          puVar10[uVar9 * 0x1ac + 0x1a1] = 0;
          puVar10[uVar9 * 0x1ac + 0x1a0] = 0;
          puVar10[uVar9 * 0x1ac + 0x19f] = 0;
          puVar10[uVar9 * 0x1ac + 0x19e] = 0;
          puVar10[uVar9 * 0x1ac + 0x19d] = 0;
          puVar10[uVar9 * 0x1ac + 0x19c] = 0;
          puVar10[uVar9 * 0x1ac + 0x1a2] = 0x70000000f;
          *(undefined4 *)(puVar10 + uVar9 * 0x1ac + 0x1a5) = 7;
          *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0xd34) = 0;
          *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0xd2c) = 0;
          *(undefined4 *)((long)puVar10 + uVar9 * 0xd60 + 0xd3c) = 0;
          puVar10[uVar9 * 0x1ac + 0x1a8] = 0x23f800000;
          *(undefined2 *)(puVar10 + uVar9 * 0x1ac + 0x1a9) = 0xffff;
          puVar10[uVar9 * 0x1ac + 0x1ac] = 0;
          puVar10[uVar9 * 0x1ac + 0x1ab] = 0;
          uVar3 = puVar2[1];
          uVar7 = puVar2[2];
          uVar5 = *puVar2;
          *(undefined4 *)((long)puVar10 + uVar9 * 0xd60 + 0xd4c) = 1;
          *puVar10 = uVar9 + 1;
          if (uVar5 < (ulong)((long)(uVar7 - uVar3) >> 3)) {
            puVar2 = *(ulong **)(uVar3 + uVar5 * 8);
            uVar9 = *puVar2;
            if (uVar9 == 0) goto LAB_10abcb7a0;
            if (uVar9 < 0x41) {
              return puVar2 + uVar9 * 0x1ac + -0x1ab;
            }
          }
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10abcb7a0);
      (*pcVar1)();
    }
  }
LAB_10abcb5d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abcb5d8);
  (*pcVar1)();
}



/* Entry: 10abcb5f4; end: 10abcb7bb;  */

ulong * FUN_10abcb5f4(ulong *param_1,ulong **param_2,ulong *param_3,ulong *param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puStack_48;
  
  uVar3 = param_1[1];
  uVar9 = *param_1;
  uVar7 = (long)(param_1[2] - uVar3) >> 3;
  if (uVar9 < uVar7) {
    puVar2 = param_1;
    if (0x3f < **(ulong **)(uVar3 + uVar9 * 8)) {
      uVar9 = uVar9 + 1;
      if (uVar7 <= uVar9) {
        puVar2 = (ulong *)0x35808;
        __Znwm();
        *puVar2 = 0;
        param_2 = &puStack_48;
        puStack_48 = puVar2;
        FUN_10abcb060(param_1 + 1);
        puVar2 = puStack_48;
        if (puStack_48 != (ulong *)0x0) {
          FUN_10abcb158();
        }
        uVar3 = param_1[1];
        uVar7 = (long)(param_1[2] - uVar3) >> 3;
      }
      *param_1 = uVar9;
    }
    if (uVar9 < uVar7) {
      puVar10 = *(ulong **)(uVar3 + uVar9 * 8);
      uVar9 = *puVar10;
      if (0x3f < uVar9) {
LAB_10abcb7a0:
        FUN_10a0a2358();
        if (puStack_48 != (ulong *)0x0) {
          FUN_10abcb158();
        }
        __Unwind_Resume();
        uVar9 = puVar2[5];
        if (uVar9 == 0) {
          puVar10 = (ulong *)0x38;
          __Znwm();
          puVar10[2] = (ulong)param_3;
          puVar10[3] = (ulong)param_4;
          *(undefined4 *)(puVar10 + 4) = 0xffffffff;
          puVar10[5] = 0;
          *(undefined1 *)(puVar10 + 6) = 0;
          puVar6 = *param_2;
          puVar6[1] = (ulong)puVar10;
          *puVar10 = (ulong)puVar6;
          *param_2 = puVar10;
          puVar10[1] = (ulong)param_2;
          puVar2[2] = puVar2[2] + 1;
        }
        else {
          ppuVar5 = (ulong **)puVar2[4];
          if ((param_2 != ppuVar5) && (ppuVar8 = (ulong **)ppuVar5[1], ppuVar8 != param_2)) {
            puVar10 = *ppuVar5;
            puVar10[1] = (ulong)ppuVar8;
            *ppuVar8 = puVar10;
            puVar10 = *param_2;
            puVar10[1] = (ulong)ppuVar5;
            *ppuVar5 = puVar10;
            *param_2 = (ulong *)ppuVar5;
            ppuVar5[1] = (ulong *)param_2;
            puVar2[5] = uVar9 - 1;
            puVar2[2] = puVar2[2] + 1;
          }
          ppuVar5[2] = param_3;
          ppuVar5[3] = param_4;
          *(undefined1 *)(ppuVar5 + 6) = 0;
          puVar10 = puVar2;
        }
        return puVar10;
      }
      puVar2 = puVar10 + uVar9 * 0x1ac + 1;
      param_2 = (ulong **)0xd50;
      _bzero();
      *(undefined2 *)(puVar10 + uVar9 * 0x1ac + 1) = 0xffff;
      puVar10[uVar9 * 0x1ac + 3] = 0;
      puVar10[uVar9 * 0x1ac + 2] = 0;
      *(undefined2 *)(puVar10 + uVar9 * 0x1ac + 4) = 0;
      puVar10[uVar9 * 0x1ac + 7] = 0;
      puVar10[uVar9 * 0x1ac + 6] = 0;
      puVar10[uVar9 * 0x1ac + 9] = 0;
      puVar10[uVar9 * 0x1ac + 8] = 0;
      puVar10[uVar9 * 0x1ac + 0xb] = 0;
      puVar10[uVar9 * 0x1ac + 10] = 0;
      *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0x65) = 0;
      *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0x5d) = 0;
      puVar10[uVar9 * 0x1ac + 400] = 0;
      puVar10[uVar9 * 0x1ac + 399] = 0;
      puVar10[uVar9 * 0x1ac + 0x192] = 0;
      puVar10[uVar9 * 0x1ac + 0x191] = 0;
      puVar10[uVar9 * 0x1ac + 0x194] = 0;
      puVar10[uVar9 * 0x1ac + 0x193] = 0;
      *(undefined4 *)(puVar10 + uVar9 * 0x1ac + 0x195) = 0x3f800000;
      puVar10[uVar9 * 0x1ac + 0x197] = 0;
      puVar10[uVar9 * 0x1ac + 0x196] = 0;
      puVar10[uVar9 * 0x1ac + 0x199] = 0;
      puVar10[uVar9 * 0x1ac + 0x198] = 0;
      *(undefined4 *)(puVar10 + uVar9 * 0x1ac + 0x19a) = 0x3f800000;
      *(undefined1 *)((long)puVar10 + uVar9 * 0xd60 + 0xcdc) = 6;
      puVar10[uVar9 * 0x1ac + 0x1a1] = 0;
      puVar10[uVar9 * 0x1ac + 0x1a0] = 0;
      puVar10[uVar9 * 0x1ac + 0x19f] = 0;
      puVar10[uVar9 * 0x1ac + 0x19e] = 0;
      puVar10[uVar9 * 0x1ac + 0x19d] = 0;
      puVar10[uVar9 * 0x1ac + 0x19c] = 0;
      puVar10[uVar9 * 0x1ac + 0x1a2] = 0x70000000f;
      *(undefined4 *)(puVar10 + uVar9 * 0x1ac + 0x1a5) = 7;
      *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0xd34) = 0;
      *(undefined8 *)((long)puVar10 + uVar9 * 0xd60 + 0xd2c) = 0;
      *(undefined4 *)((long)puVar10 + uVar9 * 0xd60 + 0xd3c) = 0;
      puVar10[uVar9 * 0x1ac + 0x1a8] = 0x23f800000;
      *(undefined2 *)(puVar10 + uVar9 * 0x1ac + 0x1a9) = 0xffff;
      puVar10[uVar9 * 0x1ac + 0x1ac] = 0;
      puVar10[uVar9 * 0x1ac + 0x1ab] = 0;
      uVar3 = param_1[1];
      uVar7 = param_1[2];
      uVar4 = *param_1;
      *(undefined4 *)((long)puVar10 + uVar9 * 0xd60 + 0xd4c) = 1;
      *puVar10 = uVar9 + 1;
      if (uVar4 < (ulong)((long)(uVar7 - uVar3) >> 3)) {
        puVar10 = *(ulong **)(uVar3 + uVar4 * 8);
        uVar9 = *puVar10;
        if (uVar9 == 0) goto LAB_10abcb7a0;
        if (uVar9 < 0x41) {
          return puVar10 + uVar9 * 0x1ac + -0x1ab;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abcb7a0);
  (*pcVar1)();
}



/* Entry: 10abcb7bc; end: 10abcb887;  */

void FUN_10abcb7bc(long param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    plVar1 = (long *)0x38;
    __Znwm();
    plVar1[2] = param_3;
    plVar1[3] = param_4;
    *(undefined4 *)(plVar1 + 4) = 0xffffffff;
    plVar1[5] = 0;
    *(undefined1 *)(plVar1 + 6) = 0;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *param_2 = (long)plVar1;
    plVar1[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x20);
    if ((param_2 != plVar1) && (plVar3 = (long *)plVar1[1], plVar3 != param_2)) {
      lVar4 = *plVar1;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar3 = lVar4;
      lVar4 = *param_2;
      *(long **)(lVar4 + 8) = plVar1;
      *plVar1 = lVar4;
      *param_2 = (long)plVar1;
      plVar1[1] = (long)param_2;
      *(long *)(param_1 + 0x28) = lVar2 + -1;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    }
    plVar1[2] = param_3;
    plVar1[3] = param_4;
    *(undefined1 *)(plVar1 + 6) = 0;
  }
  return;
}



/* Entry: 10abcb888; end: 10abcb99f;  */

void FUN_10abcb888(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar9 = *(long **)(param_1 + 8);
    *(undefined1 *)(plVar9 + 6) = 0;
    *(undefined4 *)(plVar9 + 4) = 0xffffffff;
    plVar5 = (long *)plVar9[5];
    plVar6 = plVar9;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar6 = *(long **)(param_1 + 8);
    }
    plVar9[5] = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    plVar5 = *(long **)(param_1 + 0x20);
    if ((plVar5 != plVar6) && (plVar9 = (long *)plVar6[1], plVar9 != plVar5)) {
      lVar8 = *plVar6;
      *(long **)(lVar8 + 8) = plVar9;
      *plVar9 = lVar8;
      lVar8 = *plVar5;
      *(long **)(lVar8 + 8) = plVar6;
      *plVar6 = lVar8;
      *plVar5 = (long)plVar6;
      plVar6[1] = (long)plVar5;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10abcb970);
  (*pcVar4)();
}



/* Entry: 10abcb9a0; end: 10abcbb6f;  */

void FUN_10abcb9a0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lStack_58;
  undefined4 auStack_50 [2];
  long *plStack_48;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abcbb40);
    (*pcVar4)();
  }
  lVar9 = param_1[8];
  param_1[8] = 0;
  ppuVar5 = &PTR___tlv_bootstrap_11340dee8;
  lStack_58 = lVar9;
  (*(code *)PTR___tlv_bootstrap_11340dee8)(*(undefined8 *)(*param_1 + 0x858));
  puVar10 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  FUN_10ab83498(auStack_50);
  if (plStack_48 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_48 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_48 + 8))();
      }
    }
  }
  *ppuVar5 = puVar10;
  plVar6 = (long *)(lVar9 + 0x10);
  do {
    lVar8 = *plVar6;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(undefined4 *)(lVar9 + 0x98) = auStack_50[0];
        *(undefined1 *)(lVar9 + 0x9c) = 1;
        *(undefined8 *)(lVar9 + 0x10) = 2;
        FUN_109d1b4dc(lVar9 + 0x18);
        goto LAB_10abcbaa8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10abcbaa8:
      if ((char)param_1[7] == '\x01') {
        plVar6 = (long *)param_1[4];
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      lVar9 = lStack_58;
      lStack_58 = 0;
      if ((lVar9 != 0) && (func_0x0001092b4274(&lStack_58), lStack_58 != 0)) {
        func_0x0001092b4274(&lStack_58);
      }
      return;
    }
  } while( true );
}



/* Entry: 10abcbb70; end: 10abcbe07;  */

undefined8 * FUN_10abcbb70(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110c50788;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1b) == '\x01') &&
     (plVar4 = (long *)param_1[0x18], plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abcbe08; end: 10abcbe43;  */

undefined8 * FUN_10abcbe08(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_10a5bbed8(*param_1,0x3000);
  }
  return param_1;
}



/* Entry: 10abcbe44; end: 10abcc0a3;  */

undefined8 * FUN_10abcbe44(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  _bzero(param_1 + 2,0x220);
  lVar3 = 0x30;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar3);
    puVar2[5] = 0;
    puVar2[4] = 0xffffffff;
    puVar2[7] = 0;
    puVar2[6] = 0xffffffff;
    puVar2[1] = 0;
    *puVar2 = 0xffffffff;
    puVar2[3] = 0;
    puVar2[2] = 0xffffffff;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x230);
  lVar3 = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((long)param_1 + 0x2cd) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)((long)param_1 + 0x2ec) = 7;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4b] = 0x100000000;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4d] = 0x100000000;
  param_1[0x48] = 0xffffffff;
  param_1[0x47] = 0x100000000;
  param_1[0x4a] = 0xffffffff;
  param_1[0x49] = 0x100000000;
  param_1[0x54] = 0xffffffff;
  param_1[0x53] = 0x100000000;
  param_1[0x56] = 0xffffffff;
  param_1[0x55] = 0x100000000;
  param_1[0x50] = 0xffffffff;
  param_1[0x4f] = 0x100000000;
  param_1[0x52] = 0xffffffff;
  param_1[0x51] = 0x100000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  param_1[0x5b] = 0;
  *(undefined2 *)((long)param_1 + 0x2e4) = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0x700000000;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined4 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  param_1[99] = 7;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar3 + 0x328) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x334) = 0x100000000;
    *(undefined8 *)((long)param_1 + lVar3 + 0x32c) = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x33c) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x344) = 0;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x100);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x93] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xb8] = param_2;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xba) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x5d4) = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar3 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar3 + 0x698) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x690) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x688) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x69c) = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6a0) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6b0) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6a8) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6b6) = 0;
    *(undefined2 *)((long)param_1 + lVar3 + 0x6be) = 1000;
    *(undefined4 *)((long)param_1 + lVar3 + 0x6e0) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6c8) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6c0) = 0x3f800000;
    lVar1 = lVar3 + 0x60;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6d8) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x6d0) = 0x3f800000;
    lVar3 = lVar1;
  } while (lVar1 != 0xc00);
  param_1[0x251] = param_2;
  *(undefined4 *)(param_1 + 0x252) = 0;
  return param_1;
}



/* Entry: 10abcc0a4; end: 10abcc0b7;  */

void FUN_10abcc0a4(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar2 != param_2) {
    puVar3 = puVar2 + 8;
    param_3 = param_3 + 8;
    do {
      *(undefined8 *)(param_3 + -8) = *(undefined8 *)(puVar3 + -8);
      func_0x000109295560(param_3,puVar3);
      uVar5 = *(undefined8 *)(puVar3 + 0x538);
      uVar4 = *(undefined8 *)(puVar3 + 0x530);
      uVar6 = *(undefined8 *)(puVar3 + 0x540);
      *(undefined8 *)(param_3 + 0x548) = *(undefined8 *)(puVar3 + 0x548);
      *(undefined8 *)(param_3 + 0x540) = uVar6;
      *(undefined8 *)(param_3 + 0x538) = uVar5;
      *(undefined8 *)(param_3 + 0x530) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + 0x558);
      uVar4 = *(undefined8 *)(puVar3 + 0x550);
      uVar7 = *(undefined8 *)(puVar3 + 0x568);
      uVar6 = *(undefined8 *)(puVar3 + 0x560);
      uVar9 = *(undefined8 *)(puVar3 + 0x578);
      uVar8 = *(undefined8 *)(puVar3 + 0x570);
      uVar10 = *(undefined8 *)(puVar3 + 0x580);
      *(undefined8 *)(param_3 + 0x588) = *(undefined8 *)(puVar3 + 0x588);
      *(undefined8 *)(param_3 + 0x580) = uVar10;
      *(undefined8 *)(param_3 + 0x578) = uVar9;
      *(undefined8 *)(param_3 + 0x570) = uVar8;
      *(undefined8 *)(param_3 + 0x568) = uVar7;
      *(undefined8 *)(param_3 + 0x560) = uVar6;
      *(undefined8 *)(param_3 + 0x558) = uVar5;
      *(undefined8 *)(param_3 + 0x550) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + 0x598);
      uVar4 = *(undefined8 *)(puVar3 + 0x590);
      uVar7 = *(undefined8 *)(puVar3 + 0x5a8);
      uVar6 = *(undefined8 *)(puVar3 + 0x5a0);
      uVar9 = *(undefined8 *)(puVar3 + 0x5b8);
      uVar8 = *(undefined8 *)(puVar3 + 0x5b0);
      *(undefined *)(param_3 + 0x5c0) = puVar3[0x5c0];
      *(undefined8 *)(param_3 + 0x5b8) = uVar9;
      *(undefined8 *)(param_3 + 0x5b0) = uVar8;
      *(undefined8 *)(param_3 + 0x5a8) = uVar7;
      *(undefined8 *)(param_3 + 0x5a0) = uVar6;
      *(undefined8 *)(param_3 + 0x598) = uVar5;
      *(undefined8 *)(param_3 + 0x590) = uVar4;
      _memcpy(param_3 + 0x5c8,puVar3 + 0x5c8,0xcc4);
      puVar1 = puVar3 + 0x1290;
      puVar3 = puVar3 + 0x1298;
      param_3 = param_3 + 0x1298;
    } while (puVar1 != param_2);
    do {
      func_0x00010a09ad20(puVar2 + 0x4e8);
      puVar2 = puVar2 + 0x1298;
    } while (puVar2 != param_2);
  }
  return;
}



/* Entry: 10abcc0b8; end: 10abcc19f;  */

void FUN_10abcc0b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    lVar2 = param_1 + 8;
    param_3 = param_3 + 8;
    do {
      *(undefined8 *)(param_3 + -8) = *(undefined8 *)(lVar2 + -8);
      func_0x000109295560(param_3,lVar2);
      uVar4 = *(undefined8 *)(lVar2 + 0x538);
      uVar3 = *(undefined8 *)(lVar2 + 0x530);
      uVar5 = *(undefined8 *)(lVar2 + 0x540);
      *(undefined8 *)(param_3 + 0x548) = *(undefined8 *)(lVar2 + 0x548);
      *(undefined8 *)(param_3 + 0x540) = uVar5;
      *(undefined8 *)(param_3 + 0x538) = uVar4;
      *(undefined8 *)(param_3 + 0x530) = uVar3;
      uVar4 = *(undefined8 *)(lVar2 + 0x558);
      uVar3 = *(undefined8 *)(lVar2 + 0x550);
      uVar6 = *(undefined8 *)(lVar2 + 0x568);
      uVar5 = *(undefined8 *)(lVar2 + 0x560);
      uVar8 = *(undefined8 *)(lVar2 + 0x578);
      uVar7 = *(undefined8 *)(lVar2 + 0x570);
      uVar9 = *(undefined8 *)(lVar2 + 0x580);
      *(undefined8 *)(param_3 + 0x588) = *(undefined8 *)(lVar2 + 0x588);
      *(undefined8 *)(param_3 + 0x580) = uVar9;
      *(undefined8 *)(param_3 + 0x578) = uVar8;
      *(undefined8 *)(param_3 + 0x570) = uVar7;
      *(undefined8 *)(param_3 + 0x568) = uVar6;
      *(undefined8 *)(param_3 + 0x560) = uVar5;
      *(undefined8 *)(param_3 + 0x558) = uVar4;
      *(undefined8 *)(param_3 + 0x550) = uVar3;
      uVar4 = *(undefined8 *)(lVar2 + 0x598);
      uVar3 = *(undefined8 *)(lVar2 + 0x590);
      uVar6 = *(undefined8 *)(lVar2 + 0x5a8);
      uVar5 = *(undefined8 *)(lVar2 + 0x5a0);
      uVar8 = *(undefined8 *)(lVar2 + 0x5b8);
      uVar7 = *(undefined8 *)(lVar2 + 0x5b0);
      *(undefined1 *)(param_3 + 0x5c0) = *(undefined1 *)(lVar2 + 0x5c0);
      *(undefined8 *)(param_3 + 0x5b8) = uVar8;
      *(undefined8 *)(param_3 + 0x5b0) = uVar7;
      *(undefined8 *)(param_3 + 0x5a8) = uVar6;
      *(undefined8 *)(param_3 + 0x5a0) = uVar5;
      *(undefined8 *)(param_3 + 0x598) = uVar4;
      *(undefined8 *)(param_3 + 0x590) = uVar3;
      _memcpy(param_3 + 0x5c8,lVar2 + 0x5c8,0xcc4);
      lVar1 = lVar2 + 0x1290;
      lVar2 = lVar2 + 0x1298;
      param_3 = param_3 + 0x1298;
    } while (lVar1 != param_2);
    do {
      func_0x00010a09ad20(param_1 + 0x4e8);
      param_1 = param_1 + 0x1298;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10abcc1a0; end: 10abcc1ff;  */

long * FUN_10abcc1a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x1298;
    func_0x00010a09ad20(lVar2 + -0xdb0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abcc200; end: 10abcc213;  */

undefined1  [16] FUN_10abcc200(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)puVar1 * 0x18;
    __Znwm(lVar2);
    auVar6._8_8_ = puVar1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  *puVar1 = &PTR_FUN_110c4f108;
  puVar1[3] = &PTR_DAT_110c4f158;
  lVar2 = 1;
  FUN_10a303694();
  if (*(char *)(lVar2 + 0x270) == '\x01') {
    iVar4 = *(int *)(puVar1 + 7);
    if (iVar4 == *(int *)(lVar2 + 0xac)) {
      *(undefined4 *)(lVar2 + 0xac) = 0xffffffff;
      iVar4 = *(int *)(puVar1 + 7);
    }
    if (iVar4 == *(int *)(lVar2 + 0xa8)) {
      *(undefined4 *)(lVar2 + 0xa8) = 0xffffffff;
    }
  }
  puVar3 = puVar1 + 7;
  _glDeleteBuffers(1,puVar3);
  puVar1[3] = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(puVar1 + 4);
  *puVar1 = &PTR_DAT_110c50768;
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10abcc214; end: 10abcc257;  */

undefined1  [16] FUN_10abcc214(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar1 = (long)param_1 * 0x18;
    __Znwm(lVar1);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  *param_1 = &PTR_FUN_110c4f108;
  param_1[3] = &PTR_DAT_110c4f158;
  lVar1 = 1;
  FUN_10a303694();
  if (*(char *)(lVar1 + 0x270) == '\x01') {
    iVar3 = *(int *)(param_1 + 7);
    if (iVar3 == *(int *)(lVar1 + 0xac)) {
      *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
      iVar3 = *(int *)(param_1 + 7);
    }
    if (iVar3 == *(int *)(lVar1 + 0xa8)) {
      *(undefined4 *)(lVar1 + 0xa8) = 0xffffffff;
    }
  }
  puVar2 = param_1 + 7;
  _glDeleteBuffers(1,puVar2);
  param_1[3] = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_DAT_110c50768;
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10abcc258; end: 10abcc25b;  */

undefined8 * FUN_10abcc258(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_110c4f108;
  param_1[3] = &PTR_DAT_110c4f158;
  lVar1 = 1;
  FUN_10a303694();
  if (*(char *)(lVar1 + 0x270) == '\x01') {
    iVar2 = *(int *)(param_1 + 7);
    if (iVar2 == *(int *)(lVar1 + 0xac)) {
      *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
      iVar2 = *(int *)(param_1 + 7);
    }
    if (iVar2 == *(int *)(lVar1 + 0xa8)) {
      *(undefined4 *)(lVar1 + 0xa8) = 0xffffffff;
    }
  }
  _glDeleteBuffers(1,param_1 + 7);
  param_1[3] = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10abcc25c; end: 10abcc26f;  */

void FUN_10abcc25c(void)

{
  FUN_10ab79db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abcc270; end: 10abcc277;  */

undefined8 * FUN_10abcc270(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = param_1 + -3;
  *puVar2 = &PTR_FUN_110c4f108;
  *param_1 = &PTR_DAT_110c4f158;
  lVar1 = 1;
  FUN_10a303694();
  if (*(char *)(lVar1 + 0x270) == '\x01') {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == *(int *)(lVar1 + 0xac)) {
      *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
    }
    if (iVar3 == *(int *)(lVar1 + 0xa8)) {
      *(undefined4 *)(lVar1 + 0xa8) = 0xffffffff;
    }
  }
  _glDeleteBuffers(1,param_1 + 4);
  *param_1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  *puVar2 = &PTR_DAT_110c50768;
  return puVar2;
}



/* Entry: 10abcc278; end: 10abcc28f;  */

void FUN_10abcc278(long param_1)

{
  FUN_10ab79db8(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abcc290; end: 10abcc323;  */

void FUN_10abcc290(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  switch(param_3) {
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
  case 3:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
  case 8:
  case 0xb:
    uVar1 = *param_2;
    break;
  case 6:
  case 9:
  case 0xc:
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    break;
  case 7:
  case 10:
  case 0xd:
  case 0xe:
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    return;
  case 0xf:
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    goto code_r0x00010abcc310;
  case 0x10:
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    uVar5 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
code_r0x00010abcc310:
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  default:
    return;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10abcc324; end: 10abcc36b;  */

long FUN_10abcc324(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x000109f6d360(param_1);
  }
  else if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10abcc36c; end: 10abcc50f;  */

/* WARNING: Removing unreachable block (ram,0x00010abccb10) */
/* WARNING: Removing unreachable block (ram,0x00010abcc874) */
/* WARNING: Removing unreachable block (ram,0x00010abcc9a8) */
/* WARNING: Removing unreachable block (ram,0x00010abccc44) */

long * FUN_10abcc36c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long unaff_x23;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  
  plVar13 = (long *)*param_1;
  plVar11 = param_1;
  if (param_4 <= (ulong)((param_1[2] - (long)plVar13 >> 3) * -0x79435e50d79435e5)) {
    plVar15 = (long *)param_1[1];
    lVar7 = (long)plVar15 - (long)plVar13;
    if (param_4 <= (ulong)((lVar7 >> 3) * -0x79435e50d79435e5)) {
      if (param_2 != param_3) {
        do {
          plVar11 = plVar13;
          FUN_10abcc510(plVar13,param_2);
          param_2 = param_2 + 0x13;
          plVar13 = plVar13 + 0x13;
        } while (param_2 != param_3);
        plVar15 = (long *)param_1[1];
      }
      while (plVar15 != plVar13) {
        plVar15 = plVar15 + -0x13;
        plVar11 = plVar15;
        FUN_10a187fb0(plVar15);
      }
      param_1[1] = (long)plVar13;
      return plVar11;
    }
    plVar4 = param_2;
    lVar12 = lVar7;
    if (plVar15 != plVar13) {
      do {
        FUN_10abcc510(plVar13,plVar4);
        plVar13 = plVar13 + 0x13;
        lVar12 = lVar12 + -0x98;
        plVar4 = plVar4 + 0x13;
      } while (lVar12 != 0);
      plVar15 = (long *)param_1[1];
    }
    FUN_10a18975c(param_1,(long)param_2 + lVar7,param_3,plVar15);
LAB_10abcc498:
    param_1[1] = (long)plVar11;
    return plVar11;
  }
  plVar13 = param_1;
  plVar15 = param_2;
  FUN_109f6011c();
  if (param_4 < 0x1af286bca1af287) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar7 * 0xd79435e50d79436;
    if (uVar9 < param_4 || uVar9 - param_4 == 0) {
      uVar9 = param_4;
    }
    if (0xd79435e50d7942 < (ulong)(lVar7 * -0x79435e50d79435e5)) {
      uVar9 = 0x1af286bca1af286;
    }
    FUN_10a1896b4(param_1,uVar9);
    FUN_10a18975c(param_1,param_2,param_3,param_1[1]);
    goto LAB_10abcc498;
  }
  FUN_10a189700();
  param_1[1] = unaff_x23;
  __Unwind_Resume();
  param_1[1] = 0x1af286bca1af286;
  __Unwind_Resume();
  *(int *)plVar13 = (int)*plVar15;
  if (plVar13 == plVar15) {
    return plVar13;
  }
  plVar14 = plVar13 + 1;
  plVar6 = (long *)*plVar14;
  plVar11 = (long *)plVar15[1];
  plVar4 = (long *)plVar15[2];
  plVar8 = (long *)((long)plVar4 - (long)plVar11);
  if ((long *)(plVar13[3] - (long)plVar6) < plVar8) {
    plVar18 = (long *)(((long)plVar8 >> 3) * 0x6db6db6db6db6db7);
    plVar16 = (long *)0x492492492492492;
    plVar3 = plVar14;
    plVar5 = plVar15;
    FUN_109f5f278();
    if (plVar18 < (long *)0x492492492492493) {
      lVar7 = plVar13[3] - plVar13[1] >> 3;
      plVar6 = (long *)(lVar7 * -0x2492492492492492);
      if (plVar6 < plVar18 || (long)plVar6 + ((long)plVar8 >> 3) * -0x6db6db6db6db6db7 == 0) {
        plVar6 = plVar18;
      }
      if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
        plVar6 = plVar16;
      }
      FUN_10a1899f8(plVar14,plVar6);
      FUN_10a189aa0(plVar14,plVar11,plVar4,plVar13[2]);
      goto LAB_10abcc628;
    }
    FUN_10a189a44();
LAB_10abccc78:
    plVar11 = plVar6;
    FUN_10a189ee4();
LAB_10abccc7c:
    FUN_10a18a10c();
LAB_10abccc80:
    FUN_10a18a350();
LAB_10abccc84:
    FUN_10a18a5a4();
    goto LAB_10abccc88;
  }
  plVar18 = (long *)(plVar13[2] - (long)plVar6);
  if (plVar18 < plVar8) {
    FUN_10abccce4(plVar11,(long)plVar11 + (long)plVar18);
    plVar11 = (long *)((long)plVar11 + (long)plVar18);
    FUN_10a189aa0(plVar14,plVar11,plVar4,plVar13[2]);
LAB_10abcc628:
    plVar13[2] = (long)plVar14;
    plVar5 = plVar11;
  }
  else {
    FUN_10abccce4();
    plVar6 = (long *)plVar13[2];
    plVar5 = plVar4;
    while (plVar6 != plVar11) {
      plVar6 = plVar6 + -7;
      FUN_10a188414(plVar6);
    }
    plVar13[2] = (long)plVar11;
  }
  plVar14 = plVar13 + 4;
  plVar6 = (long *)*plVar14;
  plVar4 = (long *)plVar15[4];
  plVar11 = (long *)plVar15[5];
  plVar16 = (long *)((long)plVar11 - (long)plVar4);
  if ((long *)(plVar13[6] - (long)plVar6) < plVar16) {
    plVar16 = (long *)((long)plVar16 >> 6);
    plVar3 = plVar14;
    FUN_109f5f408();
    if ((ulong)plVar16 >> 0x3a != 0) goto LAB_10abccc78;
    plVar6 = (long *)(plVar13[6] - plVar13[4] >> 5);
    if (plVar6 <= plVar16) {
      plVar6 = plVar16;
    }
    if (0x7fffffffffffffbf < (ulong)(plVar13[6] - plVar13[4])) {
      plVar6 = (long *)0x3ffffffffffffff;
    }
    FUN_10a189eac(plVar14,plVar6);
    FUN_10a189f2c();
LAB_10abcc718:
    plVar13[5] = (long)plVar14;
    plVar5 = plVar4;
  }
  else {
    plVar18 = (long *)(plVar13[5] - (long)plVar6);
    if (plVar18 < plVar16) {
      FUN_10abccf18(plVar4,(long)plVar4 + (long)plVar18);
      plVar4 = (long *)((long)plVar4 + (long)plVar18);
      FUN_10a189f2c();
      goto LAB_10abcc718;
    }
    FUN_10abccf18();
    plVar14 = (long *)plVar13[5];
    plVar5 = plVar11;
    plVar11 = plVar6;
    while (plVar14 != plVar4) {
      plVar14 = plVar14 + -8;
      FUN_10a1882d4(plVar14);
    }
    plVar13[5] = (long)plVar4;
  }
  plVar16 = plVar13 + 7;
  plVar6 = (long *)*plVar16;
  plVar4 = (long *)plVar15[7];
  plVar14 = (long *)plVar15[8];
  uVar9 = (long)plVar14 - (long)plVar4;
  if ((ulong)(plVar13[9] - (long)plVar6) < uVar9) {
    uVar9 = (long)uVar9 >> 5;
    plVar3 = plVar16;
    func_0x000109f5f66c();
    if (uVar9 >> 0x3b != 0) goto LAB_10abccc7c;
    uVar10 = plVar13[9] - plVar13[7] >> 4;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar13[9] - plVar13[7])) {
      uVar10 = 0x7ffffffffffffff;
    }
    FUN_10a18a0d4(plVar16,uVar10);
    FUN_10a18a154();
    plVar5 = plVar4;
LAB_10abcc82c:
    plVar13[8] = (long)plVar16;
    plVar11 = plVar14;
  }
  else {
    plVar18 = (long *)plVar13[8];
    if ((ulong)((long)plVar18 - (long)plVar6) < uVar9) {
      plVar5 = (long *)((long)plVar4 + ((long)plVar18 - (long)plVar6));
      if (plVar18 != plVar6) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar4);
          plVar6[3] = plVar4[3];
          plVar4 = plVar4 + 4;
          plVar6 = plVar6 + 4;
        } while (plVar4 != plVar5);
        plVar18 = (long *)plVar13[8];
      }
      FUN_10a18a154();
      goto LAB_10abcc82c;
    }
    if (plVar4 != plVar14) {
      do {
        plVar5 = plVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6);
        plVar6[3] = plVar4[3];
        plVar4 = plVar4 + 4;
        plVar6 = plVar6 + 4;
      } while (plVar4 != plVar14);
      plVar18 = (long *)plVar13[8];
    }
    for (; plVar18 != plVar6; plVar18 = plVar18 + -4) {
    }
    plVar13[8] = (long)plVar6;
  }
  plVar16 = plVar13 + 10;
  lVar7 = *plVar16;
  plVar4 = (long *)plVar15[10];
  plVar6 = (long *)plVar15[0xb];
  uVar9 = (long)plVar6 - (long)plVar4;
  if ((ulong)(plVar13[0xc] - lVar7) < uVar9) {
    uVar9 = (long)uVar9 >> 5;
    plVar3 = plVar16;
    FUN_109f5fc5c();
    if (uVar9 >> 0x3b != 0) goto LAB_10abccc80;
    uVar10 = plVar13[0xc] - plVar13[10] >> 4;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar13[0xc] - plVar13[10])) {
      uVar10 = 0x7ffffffffffffff;
    }
    FUN_10a18a318(plVar16,uVar10);
    FUN_10a18a398();
    plVar5 = plVar4;
LAB_10abcc960:
    plVar13[0xb] = (long)plVar16;
    plVar11 = plVar6;
  }
  else {
    lVar12 = plVar13[0xb];
    if ((ulong)(lVar12 - lVar7) < uVar9) {
      plVar5 = (long *)((long)plVar4 + (lVar12 - lVar7));
      if (lVar12 != lVar7) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,plVar4);
          *(long *)(lVar7 + 0x18) = plVar4[3];
          plVar4 = plVar4 + 4;
          lVar7 = lVar7 + 0x20;
        } while (plVar4 != plVar5);
      }
      FUN_10a18a398();
      goto LAB_10abcc960;
    }
    if (plVar4 != plVar6) {
      do {
        plVar5 = plVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7);
        *(long *)(lVar7 + 0x18) = plVar4[3];
        plVar4 = plVar4 + 4;
        lVar7 = lVar7 + 0x20;
      } while (plVar4 != plVar6);
      lVar12 = plVar13[0xb];
    }
    for (; lVar12 != lVar7; lVar12 = lVar12 + -0x20) {
    }
    plVar13[0xb] = lVar7;
  }
  plVar16 = plVar13 + 0xd;
  plVar6 = (long *)*plVar16;
  plVar4 = (long *)plVar15[0xd];
  plVar14 = (long *)plVar15[0xe];
  uVar9 = (long)plVar14 - (long)plVar4;
  plVar8 = plVar16;
  if ((ulong)(plVar13[0xf] - (long)plVar6) < uVar9) {
    plVar18 = (long *)(((long)uVar9 >> 3) * -0x3333333333333333);
    plVar3 = plVar16;
    func_0x000109f5feac();
    if ((long *)0x666666666666666 < plVar18) goto LAB_10abccc84;
    lVar7 = plVar13[0xf] - plVar13[0xd] >> 3;
    plVar11 = (long *)(lVar7 * -0x6666666666666666);
    if (plVar11 < plVar18 || (long)plVar11 + ((long)uVar9 >> 3) * 0x3333333333333333 == 0) {
      plVar11 = plVar18;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      plVar11 = (long *)0x666666666666666;
    }
    FUN_10a18a55c(plVar16,plVar11);
    FUN_10a18a5fc();
    plVar5 = plVar4;
LAB_10abccac0:
    plVar13[0xe] = (long)plVar8;
    plVar11 = plVar14;
  }
  else {
    plVar18 = (long *)plVar13[0xe];
    if ((ulong)((long)plVar18 - (long)plVar6) < uVar9) {
      plVar5 = (long *)((long)plVar4 + ((long)plVar18 - (long)plVar6));
      if (plVar18 != plVar6) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar4);
          lVar7 = plVar4[4];
          plVar6[3] = plVar4[3];
          *(int *)(plVar6 + 4) = (int)lVar7;
          plVar4 = plVar4 + 5;
          plVar6 = plVar6 + 5;
        } while (plVar4 != plVar5);
        plVar18 = (long *)plVar13[0xe];
      }
      FUN_10a18a5fc();
      goto LAB_10abccac0;
    }
    if (plVar4 != plVar14) {
      do {
        plVar5 = plVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6);
        lVar7 = plVar4[4];
        plVar6[3] = plVar4[3];
        *(int *)(plVar6 + 4) = (int)lVar7;
        plVar4 = plVar4 + 5;
        plVar6 = plVar6 + 5;
      } while (plVar4 != plVar14);
      plVar18 = (long *)plVar13[0xe];
    }
    for (; plVar18 != plVar6; plVar18 = plVar18 + -5) {
    }
    plVar13[0xe] = (long)plVar6;
  }
  plVar4 = plVar13 + 0x10;
  lVar12 = *plVar4;
  lVar7 = plVar15[0x10];
  lVar2 = plVar15[0x11];
  uVar9 = lVar2 - lVar7;
  if ((ulong)(plVar13[0x12] - lVar12) < uVar9) {
    uVar9 = (long)uVar9 >> 5;
    plVar3 = plVar4;
    func_0x000109f600e4();
    if (uVar9 >> 0x3b != 0) {
LAB_10abccc88:
      FUN_10a18a800();
      plVar13[0x11] = (long)plVar16;
      __Unwind_Resume();
      plVar13[0xe] = (long)plVar18;
      __Unwind_Resume();
      plVar13[0xb] = (long)plVar18;
      __Unwind_Resume();
      plVar13[8] = (long)plVar18;
      __Unwind_Resume();
      plVar13[5] = (long)plVar16;
      __Unwind_Resume();
      plVar13[2] = (long)plVar16;
      __Unwind_Resume();
      for (; plVar3 != plVar5; plVar3 = plVar3 + 7) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11,plVar3);
        plVar11[3] = plVar3[3];
        if (plVar11 != plVar3) {
          FUN_10abccd68(plVar11 + 4,plVar3[4],plVar3[5],
                        (plVar3[5] - plVar3[4] >> 4) * -0x5555555555555555);
        }
        plVar11 = plVar11 + 7;
      }
      return plVar11;
    }
    uVar10 = plVar13[0x12] - plVar13[0x10] >> 4;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar13[0x12] - plVar13[0x10])) {
      uVar10 = 0x7ffffffffffffff;
    }
    FUN_10a18a7c8(plVar4,uVar10);
    FUN_10a18a848(plVar4,lVar7,lVar2,plVar13[0x11]);
  }
  else {
    lVar17 = plVar13[0x11];
    if (uVar9 <= (ulong)(lVar17 - lVar12)) {
      if (lVar7 != lVar2) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar12,lVar7);
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
          lVar7 = lVar7 + 0x20;
          lVar12 = lVar12 + 0x20;
        } while (lVar7 != lVar2);
        lVar17 = plVar13[0x11];
      }
      for (; lVar17 != lVar12; lVar17 = lVar17 + -0x20) {
      }
      plVar13[0x11] = lVar12;
      return plVar13;
    }
    lVar1 = lVar7 + (lVar17 - lVar12);
    if (lVar17 != lVar12) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar12,lVar7);
        *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
        lVar7 = lVar7 + 0x20;
        lVar12 = lVar12 + 0x20;
      } while (lVar7 != lVar1);
      lVar17 = plVar13[0x11];
    }
    FUN_10a18a848(plVar4,lVar1,lVar2,lVar17);
  }
  plVar13[0x11] = (long)plVar4;
  return plVar13;
}



/* Entry: 10abcc510; end: 10abccce3;  */

/* WARNING: Removing unreachable block (ram,0x00010abccb10) */
/* WARNING: Removing unreachable block (ram,0x00010abcc874) */
/* WARNING: Removing unreachable block (ram,0x00010abcc9a8) */
/* WARNING: Removing unreachable block (ram,0x00010abccc44) */

long * FUN_10abcc510(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  *(int *)param_1 = (int)*param_2;
  if (param_1 == param_2) {
    return param_1;
  }
  plVar13 = param_1 + 1;
  plVar6 = (long *)*plVar13;
  plVar11 = (long *)param_2[1];
  plVar4 = (long *)param_2[2];
  plVar7 = (long *)((long)plVar4 - (long)plVar11);
  if ((long *)(param_1[3] - (long)plVar6) < plVar7) {
    plVar16 = (long *)(((long)plVar7 >> 3) * 0x6db6db6db6db6db7);
    plVar14 = (long *)0x492492492492492;
    plVar3 = plVar13;
    plVar5 = param_2;
    FUN_109f5f278();
    if (plVar16 < (long *)0x492492492492493) {
      lVar8 = param_1[3] - param_1[1] >> 3;
      plVar6 = (long *)(lVar8 * -0x2492492492492492);
      if (plVar6 < plVar16 || (long)plVar6 + ((long)plVar7 >> 3) * -0x6db6db6db6db6db7 == 0) {
        plVar6 = plVar16;
      }
      if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
        plVar6 = plVar14;
      }
      FUN_10a1899f8(plVar13,plVar6);
      FUN_10a189aa0(plVar13,plVar11,plVar4,param_1[2]);
      goto LAB_10abcc628;
    }
    FUN_10a189a44();
LAB_10abccc78:
    plVar11 = plVar6;
    FUN_10a189ee4();
LAB_10abccc7c:
    FUN_10a18a10c();
LAB_10abccc80:
    FUN_10a18a350();
LAB_10abccc84:
    FUN_10a18a5a4();
    goto LAB_10abccc88;
  }
  plVar16 = (long *)(param_1[2] - (long)plVar6);
  if (plVar16 < plVar7) {
    FUN_10abccce4(plVar11,(long)plVar11 + (long)plVar16);
    plVar11 = (long *)((long)plVar11 + (long)plVar16);
    FUN_10a189aa0(plVar13,plVar11,plVar4,param_1[2]);
LAB_10abcc628:
    param_1[2] = (long)plVar13;
    plVar5 = plVar11;
  }
  else {
    FUN_10abccce4();
    plVar6 = (long *)param_1[2];
    plVar5 = plVar4;
    while (plVar6 != plVar11) {
      plVar6 = plVar6 + -7;
      FUN_10a188414(plVar6);
    }
    param_1[2] = (long)plVar11;
  }
  plVar13 = param_1 + 4;
  plVar6 = (long *)*plVar13;
  plVar4 = (long *)param_2[4];
  plVar11 = (long *)param_2[5];
  plVar14 = (long *)((long)plVar11 - (long)plVar4);
  if ((long *)(param_1[6] - (long)plVar6) < plVar14) {
    plVar14 = (long *)((long)plVar14 >> 6);
    plVar3 = plVar13;
    FUN_109f5f408();
    if ((ulong)plVar14 >> 0x3a != 0) goto LAB_10abccc78;
    plVar6 = (long *)(param_1[6] - param_1[4] >> 5);
    if (plVar6 <= plVar14) {
      plVar6 = plVar14;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[6] - param_1[4])) {
      plVar6 = (long *)0x3ffffffffffffff;
    }
    FUN_10a189eac(plVar13,plVar6);
    FUN_10a189f2c();
LAB_10abcc718:
    param_1[5] = (long)plVar13;
    plVar5 = plVar4;
  }
  else {
    plVar16 = (long *)(param_1[5] - (long)plVar6);
    if (plVar16 < plVar14) {
      FUN_10abccf18(plVar4,(long)plVar4 + (long)plVar16);
      plVar4 = (long *)((long)plVar4 + (long)plVar16);
      FUN_10a189f2c();
      goto LAB_10abcc718;
    }
    FUN_10abccf18();
    plVar13 = (long *)param_1[5];
    plVar5 = plVar11;
    plVar11 = plVar6;
    while (plVar13 != plVar4) {
      plVar13 = plVar13 + -8;
      FUN_10a1882d4(plVar13);
    }
    param_1[5] = (long)plVar4;
  }
  plVar14 = param_1 + 7;
  plVar6 = (long *)*plVar14;
  plVar4 = (long *)param_2[7];
  plVar13 = (long *)param_2[8];
  uVar9 = (long)plVar13 - (long)plVar4;
  if ((ulong)(param_1[9] - (long)plVar6) < uVar9) {
    uVar9 = (long)uVar9 >> 5;
    plVar3 = plVar14;
    func_0x000109f5f66c();
    if (uVar9 >> 0x3b != 0) goto LAB_10abccc7c;
    uVar10 = param_1[9] - param_1[7] >> 4;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[9] - param_1[7])) {
      uVar10 = 0x7ffffffffffffff;
    }
    FUN_10a18a0d4(plVar14,uVar10);
    FUN_10a18a154();
    plVar5 = plVar4;
LAB_10abcc82c:
    param_1[8] = (long)plVar14;
    plVar11 = plVar13;
  }
  else {
    plVar16 = (long *)param_1[8];
    if ((ulong)((long)plVar16 - (long)plVar6) < uVar9) {
      plVar5 = (long *)((long)plVar4 + ((long)plVar16 - (long)plVar6));
      if (plVar16 != plVar6) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar4);
          plVar6[3] = plVar4[3];
          plVar4 = plVar4 + 4;
          plVar6 = plVar6 + 4;
        } while (plVar4 != plVar5);
        plVar16 = (long *)param_1[8];
      }
      FUN_10a18a154();
      goto LAB_10abcc82c;
    }
    if (plVar4 != plVar13) {
      do {
        plVar5 = plVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6);
        plVar6[3] = plVar4[3];
        plVar4 = plVar4 + 4;
        plVar6 = plVar6 + 4;
      } while (plVar4 != plVar13);
      plVar16 = (long *)param_1[8];
    }
    for (; plVar16 != plVar6; plVar16 = plVar16 + -4) {
    }
    param_1[8] = (long)plVar6;
  }
  plVar14 = param_1 + 10;
  lVar8 = *plVar14;
  plVar4 = (long *)param_2[10];
  plVar6 = (long *)param_2[0xb];
  uVar9 = (long)plVar6 - (long)plVar4;
  if ((ulong)(param_1[0xc] - lVar8) < uVar9) {
    uVar9 = (long)uVar9 >> 5;
    plVar3 = plVar14;
    FUN_109f5fc5c();
    if (uVar9 >> 0x3b != 0) goto LAB_10abccc80;
    uVar10 = param_1[0xc] - param_1[10] >> 4;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[0xc] - param_1[10])) {
      uVar10 = 0x7ffffffffffffff;
    }
    FUN_10a18a318(plVar14,uVar10);
    FUN_10a18a398();
    plVar5 = plVar4;
LAB_10abcc960:
    param_1[0xb] = (long)plVar14;
    plVar11 = plVar6;
  }
  else {
    lVar12 = param_1[0xb];
    if ((ulong)(lVar12 - lVar8) < uVar9) {
      plVar5 = (long *)((long)plVar4 + (lVar12 - lVar8));
      if (lVar12 != lVar8) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar8,plVar4);
          *(long *)(lVar8 + 0x18) = plVar4[3];
          plVar4 = plVar4 + 4;
          lVar8 = lVar8 + 0x20;
        } while (plVar4 != plVar5);
      }
      FUN_10a18a398();
      goto LAB_10abcc960;
    }
    if (plVar4 != plVar6) {
      do {
        plVar5 = plVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar8);
        *(long *)(lVar8 + 0x18) = plVar4[3];
        plVar4 = plVar4 + 4;
        lVar8 = lVar8 + 0x20;
      } while (plVar4 != plVar6);
      lVar12 = param_1[0xb];
    }
    for (; lVar12 != lVar8; lVar12 = lVar12 + -0x20) {
    }
    param_1[0xb] = lVar8;
  }
  plVar14 = param_1 + 0xd;
  plVar6 = (long *)*plVar14;
  plVar4 = (long *)param_2[0xd];
  plVar13 = (long *)param_2[0xe];
  uVar9 = (long)plVar13 - (long)plVar4;
  plVar7 = plVar14;
  if ((ulong)(param_1[0xf] - (long)plVar6) < uVar9) {
    plVar16 = (long *)(((long)uVar9 >> 3) * -0x3333333333333333);
    plVar3 = plVar14;
    func_0x000109f5feac();
    if ((long *)0x666666666666666 < plVar16) goto LAB_10abccc84;
    lVar8 = param_1[0xf] - param_1[0xd] >> 3;
    plVar11 = (long *)(lVar8 * -0x6666666666666666);
    if (plVar11 < plVar16 || (long)plVar11 + ((long)uVar9 >> 3) * 0x3333333333333333 == 0) {
      plVar11 = plVar16;
    }
    if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
      plVar11 = (long *)0x666666666666666;
    }
    FUN_10a18a55c(plVar14,plVar11);
    FUN_10a18a5fc();
    plVar5 = plVar4;
LAB_10abccac0:
    param_1[0xe] = (long)plVar7;
    plVar11 = plVar13;
  }
  else {
    plVar16 = (long *)param_1[0xe];
    if ((ulong)((long)plVar16 - (long)plVar6) < uVar9) {
      plVar5 = (long *)((long)plVar4 + ((long)plVar16 - (long)plVar6));
      if (plVar16 != plVar6) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar4);
          lVar8 = plVar4[4];
          plVar6[3] = plVar4[3];
          *(int *)(plVar6 + 4) = (int)lVar8;
          plVar4 = plVar4 + 5;
          plVar6 = plVar6 + 5;
        } while (plVar4 != plVar5);
        plVar16 = (long *)param_1[0xe];
      }
      FUN_10a18a5fc();
      goto LAB_10abccac0;
    }
    if (plVar4 != plVar13) {
      do {
        plVar5 = plVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6);
        lVar8 = plVar4[4];
        plVar6[3] = plVar4[3];
        *(int *)(plVar6 + 4) = (int)lVar8;
        plVar4 = plVar4 + 5;
        plVar6 = plVar6 + 5;
      } while (plVar4 != plVar13);
      plVar16 = (long *)param_1[0xe];
    }
    for (; plVar16 != plVar6; plVar16 = plVar16 + -5) {
    }
    param_1[0xe] = (long)plVar6;
  }
  plVar4 = param_1 + 0x10;
  lVar12 = *plVar4;
  lVar8 = param_2[0x10];
  lVar2 = param_2[0x11];
  uVar9 = lVar2 - lVar8;
  if ((ulong)(param_1[0x12] - lVar12) < uVar9) {
    uVar9 = (long)uVar9 >> 5;
    plVar3 = plVar4;
    func_0x000109f600e4();
    if (uVar9 >> 0x3b != 0) {
LAB_10abccc88:
      FUN_10a18a800();
      param_1[0x11] = (long)plVar14;
      __Unwind_Resume();
      param_1[0xe] = (long)plVar16;
      __Unwind_Resume();
      param_1[0xb] = (long)plVar16;
      __Unwind_Resume();
      param_1[8] = (long)plVar16;
      __Unwind_Resume();
      param_1[5] = (long)plVar14;
      __Unwind_Resume();
      param_1[2] = (long)plVar14;
      __Unwind_Resume();
      for (; plVar3 != plVar5; plVar3 = plVar3 + 7) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11,plVar3);
        plVar11[3] = plVar3[3];
        if (plVar11 != plVar3) {
          FUN_10abccd68(plVar11 + 4,plVar3[4],plVar3[5],
                        (plVar3[5] - plVar3[4] >> 4) * -0x5555555555555555);
        }
        plVar11 = plVar11 + 7;
      }
      return plVar11;
    }
    uVar10 = param_1[0x12] - param_1[0x10] >> 4;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[0x12] - param_1[0x10])) {
      uVar10 = 0x7ffffffffffffff;
    }
    FUN_10a18a7c8(plVar4,uVar10);
    FUN_10a18a848(plVar4,lVar8,lVar2,param_1[0x11]);
  }
  else {
    lVar15 = param_1[0x11];
    if (uVar9 <= (ulong)(lVar15 - lVar12)) {
      if (lVar8 != lVar2) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar12,lVar8);
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
          lVar8 = lVar8 + 0x20;
          lVar12 = lVar12 + 0x20;
        } while (lVar8 != lVar2);
        lVar15 = param_1[0x11];
      }
      for (; lVar15 != lVar12; lVar15 = lVar15 + -0x20) {
      }
      param_1[0x11] = lVar12;
      return param_1;
    }
    lVar1 = lVar8 + (lVar15 - lVar12);
    if (lVar15 != lVar12) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar12,lVar8);
        *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        lVar8 = lVar8 + 0x20;
        lVar12 = lVar12 + 0x20;
      } while (lVar8 != lVar1);
      lVar15 = param_1[0x11];
    }
    FUN_10a18a848(plVar4,lVar1,lVar2,lVar15);
  }
  param_1[0x11] = (long)plVar4;
  return param_1;
}



/* Entry: 10abccce4; end: 10abccd67;  */

long FUN_10abccce4(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    if (param_3 != param_1) {
      FUN_10abccd68(param_3 + 0x20,*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x28),
                    (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 4) *
                    -0x5555555555555555);
    }
    param_3 = param_3 + 0x38;
  }
  return param_3;
}



/* Entry: 10abccd68; end: 10abccf17;  */

/* WARNING: Removing unreachable block (ram,0x00010abccedc) */

long * FUN_10abccd68(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x23;
  long *plVar6;
  long lVar7;
  
  plVar5 = (long *)*param_1;
  plVar1 = param_1;
  if ((ulong)((param_1[2] - (long)plVar5 >> 4) * -0x5555555555555555) < param_4) {
    plVar5 = param_1;
    plVar2 = param_2;
    plVar6 = param_3;
    FUN_109f5f240();
    if (0x555555555555555 < param_4) {
      FUN_10a189c88();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x555555555555555;
      __Unwind_Resume();
      for (; plVar5 != plVar2; plVar5 = plVar5 + 8) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar5);
        lVar3 = plVar5[4];
        plVar6[3] = plVar5[3];
        *(int *)(plVar6 + 4) = (int)lVar3;
        if (plVar6 != plVar5) {
          FUN_10abccd68(plVar6 + 5,plVar5[5],plVar5[6],
                        (plVar5[6] - plVar5[5] >> 4) * -0x5555555555555555);
        }
        plVar6 = plVar6 + 8;
      }
      return plVar6;
    }
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar3 * 0x5555555555555556;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar4 = 0x555555555555555;
    }
    FUN_10a189c40(param_1,uVar4);
    FUN_10a189ce0(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar6 = (long *)param_1[1];
    if (param_4 <= (ulong)(((long)plVar6 - (long)plVar5 >> 4) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          plVar1 = plVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
          lVar3 = param_2[5];
          lVar7 = param_2[3];
          plVar5[4] = param_2[4];
          plVar5[3] = lVar7;
          plVar5[5] = lVar3;
          param_2 = param_2 + 6;
          plVar5 = plVar5 + 6;
        } while (param_2 != param_3);
        plVar6 = (long *)param_1[1];
      }
      for (; plVar6 != plVar5; plVar6 = plVar6 + -6) {
      }
      param_1[1] = (long)plVar5;
      return plVar1;
    }
    plVar2 = (long *)((long)param_2 + ((long)plVar6 - (long)plVar5));
    if (plVar6 != plVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
        lVar3 = param_2[5];
        lVar7 = param_2[3];
        plVar5[4] = param_2[4];
        plVar5[3] = lVar7;
        plVar5[5] = lVar3;
        param_2 = param_2 + 6;
        plVar5 = plVar5 + 6;
      } while (param_2 != plVar2);
      plVar6 = (long *)param_1[1];
    }
    FUN_10a189ce0(param_1,plVar2,param_3,plVar6);
  }
  param_1[1] = (long)plVar1;
  return plVar1;
}



/* Entry: 10abccf18; end: 10abccfa3;  */

long FUN_10abccf18(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    if (param_3 != param_1) {
      FUN_10abccd68(param_3 + 0x28,*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x30),
                    (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) *
                    -0x5555555555555555);
    }
    param_3 = param_3 + 0x40;
  }
  return param_3;
}



/* Entry: 10abccfa4; end: 10abcd153;  */

/* WARNING: Removing unreachable block (ram,0x00010abcd288) */
/* WARNING: Removing unreachable block (ram,0x00010abcd118) */

long * FUN_10abccfa4(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x23;
  long *plVar12;
  
  plVar9 = (long *)*param_1;
  plVar10 = param_1;
  if ((ulong)((param_1[2] - (long)plVar9 >> 3) * -0x3333333333333333) < param_4) {
    plVar11 = param_1;
    plVar9 = param_2;
    plVar4 = param_3;
    uVar7 = param_4;
    func_0x000109f604e0();
    if (0x666666666666666 < param_4) {
      FUN_10a18aa54();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      plVar10 = (long *)*plVar11;
      plVar2 = plVar11;
      if ((ulong)(plVar11[2] - (long)plVar10 >> 5) < uVar7) {
        plVar1 = plVar11;
        plVar12 = plVar9;
        plVar3 = plVar4;
        uVar8 = uVar7;
        func_0x000109f6085c();
        if (uVar7 >> 0x3b != 0) {
          FUN_10a18acb0();
          plVar11[1] = unaff_x23;
          __Unwind_Resume();
          plVar11[1] = (long)plVar10;
          __Unwind_Resume();
          uVar7 = plVar1[2];
          plVar9 = (long *)*plVar1;
          if ((ulong)((long)(uVar7 - (long)plVar9) >> 4) < uVar8) {
            plVar10 = plVar12;
            plVar11 = plVar3;
            uVar5 = uVar8;
            if (plVar9 != (long *)0x0) {
              plVar1[1] = (long)plVar9;
              __ZdlPv();
              uVar7 = 0;
              *plVar1 = 0;
              plVar1[1] = 0;
              plVar1[2] = 0;
            }
            if (uVar8 >> 0x3c != 0) {
              FUN_10a18aee0();
              plVar4 = (long *)*plVar9;
              plVar2 = plVar9;
              if ((ulong)((plVar9[2] - (long)plVar4 >> 4) * -0x5555555555555555) < uVar5) {
                plVar12 = plVar9;
                plVar1 = plVar10;
                FUN_109f60dc0();
                if (0x555555555555555 < uVar5) {
                  FUN_10a18aff4();
                  plVar9[1] = uVar5;
                  __Unwind_Resume();
                  for (; plVar12 != plVar1; plVar12 = plVar12 + 6) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (plVar4,plVar12);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (plVar4 + 3,plVar12 + 3);
                    plVar4 = plVar4 + 6;
                  }
                  return plVar4;
                }
                lVar6 = plVar9[2] - *plVar9 >> 4;
                uVar7 = lVar6 * 0x5555555555555556;
                if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
                  uVar7 = uVar5;
                }
                if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
                  uVar7 = 0x555555555555555;
                }
                FUN_10a18afac(plVar9,uVar7);
                FUN_10a18b04c(plVar9,plVar10,plVar11,plVar9[1]);
              }
              else {
                lVar6 = plVar9[1] - (long)plVar4;
                if (uVar5 <= (ulong)((lVar6 >> 4) * -0x5555555555555555)) {
                  FUN_10abcd560(plVar10,plVar11);
                  plVar11 = (long *)plVar9[1];
                  plVar4 = plVar10;
                  while (plVar11 != plVar10) {
                    plVar11 = plVar11 + -6;
                    plVar4 = plVar11;
                    FUN_10a1884f0(plVar11);
                  }
                  plVar9[1] = (long)plVar10;
                  return plVar4;
                }
                FUN_10abcd560(plVar10,(long)plVar10 + lVar6);
                FUN_10a18b04c(plVar9,(long)plVar10 + lVar6,plVar11,plVar9[1]);
              }
              plVar9[1] = (long)plVar2;
              return plVar2;
            }
            uVar5 = (long)uVar7 >> 3;
            if ((ulong)((long)uVar7 >> 3) <= uVar8) {
              uVar5 = uVar8;
            }
            if (0x7fffffffffffffef < uVar7) {
              uVar5 = 0xfffffffffffffff;
            }
            plVar9 = plVar1;
            FUN_10a18aea8(plVar1,uVar5);
            plVar4 = (long *)plVar1[1];
            for (; plVar12 != plVar3; plVar12 = plVar12 + 2) {
              lVar6 = *plVar12;
              plVar4[1] = plVar12[1];
              *plVar4 = lVar6;
              plVar4 = plVar4 + 2;
            }
          }
          else {
            plVar10 = (long *)plVar1[1];
            if (uVar8 <= (ulong)((long)plVar10 - (long)plVar9 >> 4)) {
              for (; plVar12 != plVar3; plVar12 = plVar12 + 2) {
                *plVar9 = *plVar12;
                plVar9[1] = plVar12[1];
                plVar9 = plVar9 + 2;
              }
              plVar1[1] = (long)plVar9;
              return plVar9;
            }
            plVar11 = (long *)((long)plVar12 + ((long)plVar10 - (long)plVar9));
            plVar4 = plVar10;
            if (plVar10 != plVar9) {
              do {
                *plVar9 = *plVar12;
                plVar9[1] = plVar12[1];
                plVar12 = plVar12 + 2;
                plVar9 = plVar9 + 2;
              } while (plVar12 != plVar11);
              plVar10 = (long *)plVar1[1];
              plVar4 = plVar10;
            }
            for (; plVar11 != plVar3; plVar11 = plVar11 + 2) {
              lVar6 = *plVar11;
              plVar10[1] = plVar11[1];
              *plVar10 = lVar6;
              plVar10 = plVar10 + 2;
              plVar4 = plVar4 + 2;
            }
          }
          plVar1[1] = (long)plVar4;
          return plVar9;
        }
        uVar8 = plVar11[2] - *plVar11 >> 4;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffdf < (ulong)(plVar11[2] - *plVar11)) {
          uVar8 = 0x7ffffffffffffff;
        }
        FUN_10a18ac78(plVar11,uVar8);
        FUN_10a18acf8(plVar11,plVar9,plVar4,plVar11[1]);
      }
      else {
        plVar12 = (long *)plVar11[1];
        if (uVar7 <= (ulong)((long)plVar12 - (long)plVar10 >> 5)) {
          if (plVar9 != plVar4) {
            do {
              plVar2 = plVar10;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar10,plVar9);
              plVar10[3] = plVar9[3];
              plVar9 = plVar9 + 4;
              plVar10 = plVar10 + 4;
            } while (plVar9 != plVar4);
            plVar12 = (long *)plVar11[1];
          }
          for (; plVar12 != plVar10; plVar12 = plVar12 + -4) {
          }
          plVar11[1] = (long)plVar10;
          return plVar2;
        }
        plVar1 = (long *)((long)plVar9 + ((long)plVar12 - (long)plVar10));
        if (plVar12 != plVar10) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10,plVar9)
            ;
            plVar10[3] = plVar9[3];
            plVar9 = plVar9 + 4;
            plVar10 = plVar10 + 4;
          } while (plVar9 != plVar1);
          plVar12 = (long *)plVar11[1];
        }
        FUN_10a18acf8(plVar11,plVar1,plVar4,plVar12);
      }
      plVar11[1] = (long)plVar2;
      return plVar2;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    FUN_10a18aa0c(param_1,uVar7);
    FUN_10a18aaac(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar11 = (long *)param_1[1];
    if (param_4 <= (ulong)(((long)plVar11 - (long)plVar9 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          plVar10 = plVar9;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2);
          lVar6 = param_2[4];
          plVar9[3] = param_2[3];
          *(int *)(plVar9 + 4) = (int)lVar6;
          param_2 = param_2 + 5;
          plVar9 = plVar9 + 5;
        } while (param_2 != param_3);
        plVar11 = (long *)param_1[1];
      }
      for (; plVar11 != plVar9; plVar11 = plVar11 + -5) {
      }
      param_1[1] = (long)plVar9;
      return plVar10;
    }
    plVar4 = (long *)((long)param_2 + ((long)plVar11 - (long)plVar9));
    if (plVar11 != plVar9) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2);
        lVar6 = param_2[4];
        plVar9[3] = param_2[3];
        *(int *)(plVar9 + 4) = (int)lVar6;
        param_2 = param_2 + 5;
        plVar9 = plVar9 + 5;
      } while (param_2 != plVar4);
      plVar11 = (long *)param_1[1];
    }
    FUN_10a18aaac(param_1,plVar4,param_3,plVar11);
  }
  param_1[1] = (long)plVar10;
  return plVar10;
}



/* Entry: 10abcd154; end: 10abcd2c3;  */

/* WARNING: Removing unreachable block (ram,0x00010abcd288) */

long * FUN_10abcd154(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x23;
  
  plVar11 = (long *)*param_1;
  plVar10 = param_1;
  if ((ulong)(param_1[2] - (long)plVar11 >> 5) < param_4) {
    plVar1 = param_1;
    plVar5 = param_2;
    plVar2 = param_3;
    uVar9 = param_4;
    func_0x000109f6085c();
    if (param_4 >> 0x3b != 0) {
      FUN_10a18acb0();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = (long)plVar11;
      __Unwind_Resume();
      uVar7 = plVar1[2];
      plVar11 = (long *)*plVar1;
      if ((ulong)((long)(uVar7 - (long)plVar11) >> 4) < uVar9) {
        plVar10 = plVar5;
        plVar4 = plVar2;
        uVar6 = uVar9;
        if (plVar11 != (long *)0x0) {
          plVar1[1] = (long)plVar11;
          __ZdlPv();
          uVar7 = 0;
          *plVar1 = 0;
          plVar1[1] = 0;
          plVar1[2] = 0;
        }
        if (uVar9 >> 0x3c != 0) {
          FUN_10a18aee0();
          plVar5 = (long *)*plVar11;
          plVar1 = plVar11;
          if ((ulong)((plVar11[2] - (long)plVar5 >> 4) * -0x5555555555555555) < uVar6) {
            plVar2 = plVar11;
            plVar3 = plVar10;
            FUN_109f60dc0();
            if (0x555555555555555 < uVar6) {
              FUN_10a18aff4();
              plVar11[1] = uVar6;
              __Unwind_Resume();
              for (; plVar2 != plVar3; plVar2 = plVar2 + 6) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (plVar5,plVar2);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (plVar5 + 3,plVar2 + 3);
                plVar5 = plVar5 + 6;
              }
              return plVar5;
            }
            lVar8 = plVar11[2] - *plVar11 >> 4;
            uVar9 = lVar8 * 0x5555555555555556;
            if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
              uVar9 = uVar6;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
              uVar9 = 0x555555555555555;
            }
            FUN_10a18afac(plVar11,uVar9);
            FUN_10a18b04c(plVar11,plVar10,plVar4,plVar11[1]);
          }
          else {
            lVar8 = plVar11[1] - (long)plVar5;
            if (uVar6 <= (ulong)((lVar8 >> 4) * -0x5555555555555555)) {
              FUN_10abcd560(plVar10,plVar4);
              plVar5 = (long *)plVar11[1];
              plVar1 = plVar10;
              while (plVar5 != plVar10) {
                plVar5 = plVar5 + -6;
                plVar1 = plVar5;
                FUN_10a1884f0(plVar5);
              }
              plVar11[1] = (long)plVar10;
              return plVar1;
            }
            FUN_10abcd560(plVar10,(long)plVar10 + lVar8);
            FUN_10a18b04c(plVar11,(long)plVar10 + lVar8,plVar4,plVar11[1]);
          }
          plVar11[1] = (long)plVar1;
          return plVar1;
        }
        uVar6 = (long)uVar7 >> 3;
        if ((ulong)((long)uVar7 >> 3) <= uVar9) {
          uVar6 = uVar9;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar6 = 0xfffffffffffffff;
        }
        plVar11 = plVar1;
        FUN_10a18aea8(plVar1,uVar6);
        plVar3 = (long *)plVar1[1];
        for (; plVar5 != plVar2; plVar5 = plVar5 + 2) {
          lVar8 = *plVar5;
          plVar3[1] = plVar5[1];
          *plVar3 = lVar8;
          plVar3 = plVar3 + 2;
        }
      }
      else {
        plVar10 = (long *)plVar1[1];
        if (uVar9 <= (ulong)((long)plVar10 - (long)plVar11 >> 4)) {
          for (; plVar5 != plVar2; plVar5 = plVar5 + 2) {
            *plVar11 = *plVar5;
            plVar11[1] = plVar5[1];
            plVar11 = plVar11 + 2;
          }
          plVar1[1] = (long)plVar11;
          return plVar11;
        }
        plVar4 = (long *)((long)plVar5 + ((long)plVar10 - (long)plVar11));
        plVar3 = plVar10;
        if (plVar10 != plVar11) {
          do {
            *plVar11 = *plVar5;
            plVar11[1] = plVar5[1];
            plVar5 = plVar5 + 2;
            plVar11 = plVar11 + 2;
          } while (plVar5 != plVar4);
          plVar10 = (long *)plVar1[1];
          plVar3 = plVar10;
        }
        for (; plVar4 != plVar2; plVar4 = plVar4 + 2) {
          lVar8 = *plVar4;
          plVar10[1] = plVar4[1];
          *plVar10 = lVar8;
          plVar10 = plVar10 + 2;
          plVar3 = plVar3 + 2;
        }
      }
      plVar1[1] = (long)plVar3;
      return plVar11;
    }
    uVar9 = param_1[2] - *param_1 >> 4;
    if (uVar9 <= param_4) {
      uVar9 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar9 = 0x7ffffffffffffff;
    }
    FUN_10a18ac78(param_1,uVar9);
    FUN_10a18acf8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar5 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar5 - (long)plVar11 >> 5)) {
      if (param_2 != param_3) {
        do {
          plVar10 = plVar11;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11,param_2);
          plVar11[3] = param_2[3];
          param_2 = param_2 + 4;
          plVar11 = plVar11 + 4;
        } while (param_2 != param_3);
        plVar5 = (long *)param_1[1];
      }
      for (; plVar5 != plVar11; plVar5 = plVar5 + -4) {
      }
      param_1[1] = (long)plVar11;
      return plVar10;
    }
    plVar1 = (long *)((long)param_2 + ((long)plVar5 - (long)plVar11));
    if (plVar5 != plVar11) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11,param_2);
        plVar11[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar11 = plVar11 + 4;
      } while (param_2 != plVar1);
      plVar5 = (long *)param_1[1];
    }
    FUN_10a18acf8(param_1,plVar1,param_3,plVar5);
  }
  param_1[1] = (long)plVar10;
  return plVar10;
}



/* Entry: 10abcd2c4; end: 10abcd407;  */

long * FUN_10abcd2c4(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  uVar7 = param_1[2];
  plVar1 = (long *)*param_1;
  if ((ulong)((long)(uVar7 - (long)plVar1) >> 4) < param_4) {
    plVar9 = param_2;
    plVar10 = param_3;
    uVar6 = param_4;
    if (plVar1 != (long *)0x0) {
      param_1[1] = (long)plVar1;
      __ZdlPv();
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3c != 0) {
      FUN_10a18aee0();
      plVar5 = (long *)*plVar1;
      plVar3 = plVar1;
      if ((ulong)((plVar1[2] - (long)plVar5 >> 4) * -0x5555555555555555) < uVar6) {
        plVar2 = plVar1;
        plVar4 = plVar9;
        FUN_109f60dc0();
        if (0x555555555555555 < uVar6) {
          FUN_10a18aff4();
          plVar1[1] = uVar6;
          __Unwind_Resume();
          for (; plVar2 != plVar4; plVar2 = plVar2 + 6) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,plVar2);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (plVar5 + 3,plVar2 + 3);
            plVar5 = plVar5 + 6;
          }
          return plVar5;
        }
        lVar8 = plVar1[2] - *plVar1 >> 4;
        uVar7 = lVar8 * 0x5555555555555556;
        if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
          uVar7 = uVar6;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
          uVar7 = 0x555555555555555;
        }
        FUN_10a18afac(plVar1,uVar7);
        FUN_10a18b04c(plVar1,plVar9,plVar10,plVar1[1]);
      }
      else {
        lVar8 = plVar1[1] - (long)plVar5;
        if (uVar6 <= (ulong)((lVar8 >> 4) * -0x5555555555555555)) {
          FUN_10abcd560(plVar9,plVar10);
          plVar10 = (long *)plVar1[1];
          plVar5 = plVar9;
          while (plVar10 != plVar9) {
            plVar10 = plVar10 + -6;
            plVar5 = plVar10;
            FUN_10a1884f0(plVar10);
          }
          plVar1[1] = (long)plVar9;
          return plVar5;
        }
        FUN_10abcd560(plVar9,(long)plVar9 + lVar8);
        FUN_10a18b04c(plVar1,(long)plVar9 + lVar8,plVar10,plVar1[1]);
      }
      plVar1[1] = (long)plVar3;
      return plVar3;
    }
    uVar6 = (long)uVar7 >> 3;
    if ((ulong)((long)uVar7 >> 3) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar1 = param_1;
    FUN_10a18aea8(param_1,uVar6);
    plVar5 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar8 = *param_2;
      plVar5[1] = param_2[1];
      *plVar5 = lVar8;
      plVar5 = plVar5 + 2;
    }
  }
  else {
    plVar9 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar9 - (long)plVar1 >> 4)) {
      for (; param_2 != param_3; param_2 = param_2 + 2) {
        *plVar1 = *param_2;
        plVar1[1] = param_2[1];
        plVar1 = plVar1 + 2;
      }
      param_1[1] = (long)plVar1;
      return plVar1;
    }
    plVar10 = (long *)((long)param_2 + ((long)plVar9 - (long)plVar1));
    plVar5 = plVar9;
    if (plVar9 != plVar1) {
      do {
        *plVar1 = *param_2;
        plVar1[1] = param_2[1];
        param_2 = param_2 + 2;
        plVar1 = plVar1 + 2;
      } while (param_2 != plVar10);
      plVar9 = (long *)param_1[1];
      plVar5 = plVar9;
    }
    for (; plVar10 != param_3; plVar10 = plVar10 + 2) {
      lVar8 = *plVar10;
      plVar9[1] = plVar10[1];
      *plVar9 = lVar8;
      plVar9 = plVar9 + 2;
      plVar5 = plVar5 + 2;
    }
  }
  param_1[1] = (long)plVar5;
  return plVar1;
}



/* Entry: 10abcd408; end: 10abcd55f;  */

long * FUN_10abcd408(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  plVar4 = (long *)*param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - (long)plVar4 >> 4) * -0x5555555555555555) < param_4) {
    plVar1 = param_1;
    plVar3 = param_2;
    FUN_109f60dc0();
    if (0x555555555555555 < param_4) {
      FUN_10a18aff4();
      param_1[1] = param_4;
      __Unwind_Resume();
      for (; plVar1 != plVar3; plVar1 = plVar1 + 6) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4,plVar1);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 3,plVar1 + 3);
        plVar4 = plVar4 + 6;
      }
      return plVar4;
    }
    lVar5 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    FUN_10a18afac(param_1,uVar6);
    FUN_10a18b04c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar5 = param_1[1] - (long)plVar4;
    if (param_4 <= (ulong)((lVar5 >> 4) * -0x5555555555555555)) {
      FUN_10abcd560(param_2,param_3);
      plVar4 = (long *)param_1[1];
      plVar2 = param_2;
      while (plVar4 != param_2) {
        plVar4 = plVar4 + -6;
        plVar2 = plVar4;
        FUN_10a1884f0(plVar4);
      }
      param_1[1] = (long)param_2;
      return plVar2;
    }
    FUN_10abcd560(param_2,(long)param_2 + lVar5);
    FUN_10a18b04c(param_1,(long)param_2 + lVar5,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 10abcd560; end: 10abcd5bf;  */

long FUN_10abcd560(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 0x18,param_1 + 0x18);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}



/* Entry: 10abcd5c0; end: 10abcd7b7;  */

undefined8 * FUN_10abcd5c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 0x12) == '\x01') {
    puStack_28 = param_1 + 0xf;
    FUN_10a188534(&puStack_28);
    if (param_1[0xc] != 0) {
      param_1[0xd] = param_1[0xc];
      __ZdlPv();
    }
    puStack_28 = param_1 + 9;
    FUN_10a1885a4(&puStack_28);
    puStack_28 = param_1 + 6;
    func_0x00010a1885e4(&puStack_28);
    puStack_28 = param_1 + 3;
    FUN_10a188624(&puStack_28);
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      return param_1;
    }
    uVar1 = *param_1;
  }
  else {
    if (-1 < *(char *)((long)param_1 + 0x1f)) {
      return param_1;
    }
    uVar1 = param_1[1];
  }
  __ZdlPv(uVar1);
  return param_1;
}



/* Entry: 10abcd7b8; end: 10abcd8f7;  */

void FUN_10abcd7b8(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar6;
  int iVar7;
  
  plVar2 = param_1;
  FUN_10a0ee2b4();
  if (plVar2 == (long *)0xffffffffffffffff) {
    return;
  }
  uVar3 = (long)plVar2 + param_3;
  uVar6 = param_1[1];
  if (uVar3 < uVar6) {
    do {
      cVar1 = *(char *)(*param_1 + uVar3);
      if (cVar1 == ';') {
        FUN_10abcd7b8(param_1,param_2,param_3,uVar3 + 1);
        return;
      }
      if (cVar1 == '{') {
        iVar7 = 1;
        while (uVar3 + 1 < uVar6) {
          cVar1 = *(char *)(*param_1 + 1 + uVar3);
          if (cVar1 == '{') {
            iVar7 = iVar7 + 1;
          }
          iVar7 = iVar7 - (uint)(cVar1 == '}');
          uVar3 = uVar3 + 1;
          if (iVar7 == 0) {
            return;
          }
        }
        if ((bRam000000011330a9e8 & 1) == 0) {
          return;
        }
        puVar5 = &UNK_10f698270;
        uVar4 = 0xe0;
        goto LAB_10abcd84c;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  if ((bRam000000011330a9e8 & 1) == 0) {
    return;
  }
  puVar5 = &UNK_10f698240;
  uVar4 = 0xce;
LAB_10abcd84c:
  func_0x00010ae06f08(0,1,&UNK_10f69556d,&UNK_10f6981ac,uVar4,puVar5,in_x6,in_x7,param_2);
  return;
}



/* Entry: 10abcd8f8; end: 10abce63b;  */

/* WARNING: Removing unreachable block (ram,0x00010abcdf50) */
/* WARNING: Removing unreachable block (ram,0x00010abcddc0) */
/* WARNING: Removing unreachable block (ram,0x00010abce3bc) */

void FUN_10abcd8f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  byte bVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar22;
  undefined8 *unaff_x22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *unaff_x23;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 *unaff_x24;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  uint uStack_94;
  undefined8 *puStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar3 = &stack0xfffffffffffffff0;
  uStack_94 = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1;
  puVar17 = param_2;
  puVar22 = unaff_x21;
  puVar24 = unaff_x22;
  puVar26 = unaff_x23;
  puVar27 = unaff_x24;
  puVar28 = param_3;
LAB_10abcd938:
  puStack_a0 = puVar17 + -5;
  puStack_a8 = puVar17 + -10;
  puStack_b0 = puVar17 + -0xf;
  puVar14 = puVar15;
LAB_10abcd950:
  do {
    puVar15 = puVar14;
    uVar31 = (long)puVar17 - (long)puVar15;
    uVar30 = ((long)uVar31 >> 3) * -0x3333333333333333;
    puVar14 = puVar15;
    puVar16 = puVar17;
    if (uVar30 - 2 != 0 && 1 < (long)uVar30) {
      if (uVar30 == 3) {
        uVar30 = puVar15[8];
        if (uVar30 < (ulong)puVar15[3]) {
          if ((ulong)puVar17[-2] < uVar30) goto LAB_10abce060;
          param_2 = puVar15 + 5;
          param_1 = puVar15;
          FUN_10abce63c();
          if ((ulong)puVar15[8] <= (ulong)puVar17[-2]) goto LAB_10abce5fc;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10abce638;
          puVar14 = puVar15 + 5;
          puVar28 = puStack_a0;
          goto code_r0x00010abce63c;
        }
        puVar28 = puStack_a0;
        if (uVar30 <= (ulong)puVar17[-2]) goto LAB_10abce5fc;
      }
      else {
        if (uVar30 == 4) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            puVar24 = puVar15 + 5;
            puVar22 = puVar15 + 10;
            puVar27 = puStack_a0;
            goto code_r0x00010abce6f0;
          }
          goto LAB_10abce638;
        }
        if (uVar30 != 5) goto LAB_10abcd998;
        param_2 = puVar15 + 5;
        param_3 = puVar15 + 10;
        param_4 = puVar15 + 0xf;
        param_1 = puVar15;
        FUN_10abce6f0();
        if ((ulong)puVar15[0x12] <= (ulong)puVar17[-2]) goto LAB_10abce5fc;
        param_1 = puVar15 + 0xf;
        param_2 = puStack_a0;
        FUN_10abce63c();
        if ((ulong)puVar15[0xd] <= (ulong)puVar15[0x12]) goto LAB_10abce5fc;
        param_1 = puVar15 + 10;
        param_2 = puVar15 + 0xf;
        FUN_10abce63c();
        if ((ulong)puVar15[8] <= (ulong)puVar15[0xd]) goto LAB_10abce5fc;
        puVar28 = puVar15 + 10;
      }
      param_2 = puVar28;
      param_1 = puVar15 + 5;
      FUN_10abce63c();
      if ((ulong)puVar15[3] <= (ulong)puVar15[8]) goto LAB_10abce5fc;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10abce638;
      puVar28 = puVar15 + 5;
      goto code_r0x00010abce63c;
    }
    if (uVar30 < 2) goto LAB_10abce5fc;
    if (uVar30 == 2) {
      if ((ulong)puVar15[3] <= (ulong)puVar17[-2]) goto LAB_10abce5fc;
LAB_10abce060:
      puVar28 = puStack_a0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10abce638;
      goto code_r0x00010abce63c;
    }
LAB_10abcd998:
    if ((long)uVar31 < 0x3c0) {
      if ((uStack_94 & 1) == 0) {
        if ((puVar15 != puVar17) && (puVar28 = puVar15 + 5, puVar28 != puVar17)) {
          puVar13 = (undefined8 *)0x28;
          puVar27 = (undefined8 *)0x0;
          do {
            puVar24 = puVar13;
            puVar26 = (undefined8 *)puVar14[8];
            if (puVar26 < (undefined8 *)puVar14[3]) {
              uVar20 = *puVar28;
              uStack_78 = (undefined7)puVar14[6];
              uStack_71 = (undefined1)*(undefined8 *)((long)puVar14 + 0x37);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar14 + 0x37) >> 8);
              uVar9 = *(undefined1 *)((long)puVar14 + 0x3f);
              puVar28[1] = 0;
              puVar28[2] = 0;
              *puVar28 = 0;
              uVar8 = *(undefined4 *)(puVar14 + 9);
              do {
                puVar22 = (undefined8 *)((long)puVar15 + (long)puVar27);
                param_1 = puVar22 + 5;
                param_2 = puVar22;
                FUN_10abceb30();
                if (puVar27 == (undefined8 *)0xffffffffffffffd8) {
LAB_10abce634:
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10abce638);
                  (*pcVar12)();
                }
                puVar27 = puVar27 + -5;
              } while (puVar26 < (undefined8 *)puVar22[-2]);
              puVar22 = (undefined8 *)((long)puVar15 + (long)puVar27);
              if (*(char *)((long)puVar22 + 0x3f) < '\0') {
                param_1 = (undefined8 *)puVar22[5];
                __ZdlPv();
              }
              puVar22[5] = uVar20;
              *(ulong *)((long)puVar22 + 0x37) = CONCAT71(uStack_70,uStack_71);
              puVar22[6] = CONCAT17(uStack_71,uStack_78);
              *(undefined1 *)((long)puVar22 + 0x3f) = uVar9;
              puVar22[8] = puVar26;
              *(undefined4 *)(puVar22 + 9) = uVar8;
            }
            puVar14 = (undefined8 *)((long)puVar15 + (long)puVar24);
            puVar28 = (undefined8 *)((long)puVar15 + (long)(puVar24 + 5));
            puVar13 = puVar24 + 5;
            puVar27 = puVar24;
          } while (puVar28 != puVar17);
        }
        goto LAB_10abce5fc;
      }
      if ((puVar15 == puVar17) || (puVar15 + 5 == puVar17)) goto LAB_10abce5fc;
      puVar24 = (undefined8 *)0x0;
      puVar28 = puVar15;
      puVar14 = puVar15 + 5;
      break;
    }
    if (puVar28 == (undefined8 *)0x0) {
      if (puVar15 == puVar17) goto LAB_10abce5fc;
      uVar23 = uVar30 - 2 >> 1;
      uVar19 = uVar23;
      goto LAB_10abce1d8;
    }
    puVar24 = puVar15 + (uVar30 >> 1) * 5;
    uVar30 = puVar17[-2];
    if (uVar31 < 0x1401) {
      uVar31 = puVar15[3];
      if (uVar31 < (ulong)puVar24[3]) {
        puVar22 = puStack_a0;
        if ((uVar30 < uVar31) ||
           (param_2 = puVar15, FUN_10abce63c(), param_1 = puVar24, puVar24 = puVar15,
           puVar22 = puStack_a0, (ulong)puVar17[-2] < (ulong)puVar15[3])) {
LAB_10abcdae4:
          param_2 = puVar22;
          param_1 = puVar24;
          FUN_10abce63c();
        }
      }
      else if ((uVar30 < uVar31) &&
              (param_1 = puVar15, param_2 = puStack_a0, FUN_10abce63c(), puVar22 = puVar15,
              (ulong)puVar15[3] < (ulong)puVar24[3])) goto LAB_10abcdae4;
    }
    else {
      uVar31 = puVar24[3];
      puVar22 = puVar15;
      if (uVar31 < (ulong)puVar15[3]) {
        puVar27 = puStack_a0;
        if ((uVar30 < uVar31) ||
           (FUN_10abce63c(puVar15,puVar24), puVar22 = puVar24, puVar27 = puStack_a0,
           (ulong)puVar17[-2] < (ulong)puVar24[3])) {
LAB_10abcda6c:
          FUN_10abce63c(puVar22,puVar27);
        }
      }
      else if ((uVar30 < uVar31) &&
              (FUN_10abce63c(puVar24,puStack_a0), puVar27 = puVar24,
              (ulong)puVar24[3] < (ulong)puVar15[3])) goto LAB_10abcda6c;
      puVar22 = puVar24 + -5;
      uVar30 = puVar24[-2];
      if (uVar30 < (ulong)puVar15[8]) {
        puVar27 = puVar15 + 5;
        puVar26 = puStack_a8;
        if (((ulong)puVar17[-7] < uVar30) ||
           (FUN_10abce63c(puVar15 + 5,puVar22), puVar27 = puVar22, puVar26 = puStack_a8,
           (ulong)puVar17[-7] < (ulong)puVar24[-2])) {
LAB_10abcdb18:
          FUN_10abce63c(puVar27,puVar26);
        }
      }
      else if (((ulong)puVar17[-7] < uVar30) &&
              (FUN_10abce63c(puVar22,puStack_a8), (ulong)puVar24[-2] < (ulong)puVar15[8])) {
        puVar27 = puVar15 + 5;
        puVar26 = puVar22;
        goto LAB_10abcdb18;
      }
      uVar30 = puVar24[8];
      if (uVar30 < (ulong)puVar15[0xd]) {
        puVar27 = puVar15 + 10;
        puVar26 = puStack_b0;
        if (uVar30 <= (ulong)puVar17[-0xc]) {
          FUN_10abce63c(puVar27,puVar24 + 5);
          if ((ulong)puVar24[8] <= (ulong)puVar17[-0xc]) goto LAB_10abcdb90;
          puVar27 = puVar24 + 5;
          puVar26 = puStack_b0;
        }
LAB_10abcdb8c:
        FUN_10abce63c(puVar27,puVar26);
      }
      else if (((ulong)puVar17[-0xc] < uVar30) &&
              (FUN_10abce63c(puVar24 + 5,puStack_b0), (ulong)puVar24[8] < (ulong)puVar15[0xd])) {
        puVar27 = puVar15 + 10;
        puVar26 = puVar24 + 5;
        goto LAB_10abcdb8c;
      }
LAB_10abcdb90:
      uVar30 = puVar24[3];
      if (uVar30 < (ulong)puVar24[-2]) {
        if ((ulong)puVar24[8] < uVar30) {
          puVar27 = puVar24 + 5;
        }
        else {
          FUN_10abce63c(puVar22,puVar24);
          if ((ulong)puVar24[3] <= (ulong)puVar24[8]) goto LAB_10abcdc10;
          puVar22 = puVar24;
          puVar27 = puVar24 + 5;
        }
LAB_10abcdc0c:
        FUN_10abce63c(puVar22,puVar27);
      }
      else if (((ulong)puVar24[8] < uVar30) &&
              (FUN_10abce63c(puVar24,puVar24 + 5), puVar27 = puVar24,
              (ulong)puVar24[3] < (ulong)puVar24[-2])) goto LAB_10abcdc0c;
LAB_10abcdc10:
      uVar20 = *puVar15;
      uStack_78 = (undefined7)puVar15[1];
      uStack_71 = (undefined1)*(undefined8 *)((long)puVar15 + 0xf);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0xf) >> 8);
      uVar9 = *(undefined1 *)((long)puVar15 + 0x17);
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = 0;
      uVar25 = puVar15[3];
      uVar7 = *(uint *)(puVar15 + 4);
      puVar27 = (undefined8 *)(ulong)uVar7;
      param_1 = puVar15;
      param_2 = puVar24;
      FUN_10abceb30();
      if (*(char *)((long)puVar24 + 0x17) < '\0') {
        param_1 = (undefined8 *)*puVar24;
        __ZdlPv();
      }
      *puVar24 = uVar20;
      *(ulong *)((long)puVar24 + 0xf) = CONCAT71(uStack_70,uStack_71);
      puVar24[1] = CONCAT17(uStack_71,uStack_78);
      *(undefined1 *)((long)puVar24 + 0x17) = uVar9;
      puVar24[3] = uVar25;
      *(uint *)(puVar24 + 4) = uVar7;
    }
    puVar28 = (undefined8 *)((long)puVar28 + -1);
    if ((uStack_94 & 1) != 0) {
      uVar30 = puVar15[3];
LAB_10abcdc94:
      lVar18 = 0;
      puVar27 = (undefined8 *)*puVar15;
      uStack_78 = (undefined7)puVar15[1];
      uStack_71 = (undefined1)*(undefined8 *)((long)puVar15 + 0xf);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0xf) >> 8);
      bVar10 = *(byte *)((long)puVar15 + 0x17);
      puVar22 = (undefined8 *)(ulong)bVar10;
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = 0;
      uVar7 = *(uint *)(puVar15 + 4);
      puVar26 = (undefined8 *)(ulong)uVar7;
      do {
        if ((undefined8 *)((long)puVar15 + lVar18 + 0x28) == puVar17) goto LAB_10abce634;
        lVar11 = lVar18 + 0x40;
        lVar18 = lVar18 + 0x28;
      } while (*(ulong *)((long)puVar15 + lVar11) < uVar30);
      puVar13 = (undefined8 *)((long)puVar15 + lVar18);
      puVar14 = puVar17;
      puStack_90 = puVar28;
      if (lVar18 == 0x28) {
        do {
          puVar24 = puVar14;
          if (puVar14 <= puVar13) break;
          puVar24 = puVar14 + -5;
          puVar2 = puVar14 + -2;
          puVar14 = puVar24;
        } while (uVar30 <= *puVar2);
      }
      else {
        do {
          if (puVar14 == puVar15) goto LAB_10abce634;
          puVar24 = puVar14 + -5;
          puVar2 = puVar14 + -2;
          puVar14 = puVar24;
        } while (uVar30 <= *puVar2);
      }
      puVar14 = puVar13;
      puVar28 = puVar13;
      puVar16 = puVar24;
      if (puVar13 < puVar24) {
        do {
          FUN_10abce63c(puVar28,puVar16);
          do {
            puVar14 = puVar28 + 5;
            if (puVar14 == puVar17) goto LAB_10abce634;
            puVar2 = puVar28 + 8;
            puVar28 = puVar14;
          } while (*puVar2 < uVar30);
          do {
            if (puVar16 == puVar15) goto LAB_10abce634;
            puVar32 = puVar16 + -5;
            puVar2 = puVar16 + -2;
            puVar16 = puVar32;
          } while (uVar30 <= *puVar2);
        } while (puVar14 < puVar32);
      }
      puVar16 = puVar14 + -5;
      if (puVar16 != puVar15) {
        FUN_10abceb30(puVar15,puVar16);
      }
      puVar28 = puStack_90;
      puVar14[-5] = puVar27;
      *(ulong *)((long)puVar14 + -0x19) = CONCAT71(uStack_70,uStack_71);
      puVar14[-4] = CONCAT17(uStack_71,uStack_78);
      *(byte *)((long)puVar14 + -0x11) = bVar10;
      puVar14[-2] = uVar30;
      *(uint *)(puVar14 + -1) = uVar7;
      if (puVar24 <= puVar13) {
        puVar13 = puVar15;
        FUN_10abce7f4(puVar15,puVar16);
        param_1 = puVar14;
        param_2 = puVar17;
        FUN_10abce7f4();
        if ((int)param_1 != 0) goto LAB_10abcdf84;
        if (((ulong)puVar13 & 1) != 0) goto LAB_10abcd950;
      }
      param_4 = (undefined8 *)(ulong)(uStack_94 & 1);
      param_3 = puVar28;
      FUN_10abcd8f8();
      uStack_94 = 0;
      param_1 = puVar15;
      param_2 = puVar16;
      goto LAB_10abcd950;
    }
    uVar30 = puVar15[3];
    if ((ulong)puVar15[-2] < uVar30) goto LAB_10abcdc94;
    puVar24 = (undefined8 *)*puVar15;
    uStack_78 = (undefined7)puVar15[1];
    uStack_71 = (undefined1)*(undefined8 *)((long)puVar15 + 0xf);
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0xf) >> 8);
    bVar10 = *(byte *)((long)puVar15 + 0x17);
    puVar26 = (undefined8 *)(ulong)bVar10;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = 0;
    uVar8 = *(undefined4 *)(puVar15 + 4);
    puVar22 = puVar15;
    if (uVar30 < (ulong)puVar17[-2]) {
      do {
        puVar14 = puVar22 + 5;
        if (puVar14 == puVar17) goto LAB_10abce634;
        puVar2 = puVar22 + 8;
        puVar22 = puVar14;
      } while (*puVar2 <= uVar30);
    }
    else {
      do {
        puVar14 = puVar22 + 5;
        if (puVar17 <= puVar14) break;
        puVar2 = puVar22 + 8;
        puVar22 = puVar14;
      } while (*puVar2 <= uVar30);
    }
    puVar22 = puVar17;
    if (puVar14 < puVar17) {
      do {
        if (puVar16 == puVar15) goto LAB_10abce634;
        puVar22 = puVar16 + -5;
        puVar2 = puVar16 + -2;
        puVar16 = puVar22;
      } while (uVar30 < *puVar2);
    }
    while (puVar14 < puVar22) {
      param_1 = puVar14;
      param_2 = puVar22;
      FUN_10abce63c();
      puVar16 = puVar14;
      do {
        puVar14 = puVar16 + 5;
        if (puVar14 == puVar17) goto LAB_10abce634;
        puVar2 = puVar16 + 8;
        puVar16 = puVar14;
      } while (*puVar2 <= uVar30);
      do {
        if (puVar22 == puVar15) goto LAB_10abce634;
        puVar16 = puVar22 + -5;
        puVar2 = puVar22 + -2;
        puVar22 = puVar16;
      } while (uVar30 < *puVar2);
    }
    puVar22 = puVar14 + -5;
    if (puVar22 != puVar15) {
      FUN_10abceb30();
      param_1 = puVar15;
      param_2 = puVar22;
    }
    uStack_94 = 0;
    puVar14[-5] = puVar24;
    *(ulong *)((long)puVar14 + -0x19) = CONCAT71(uStack_70,uStack_71);
    puVar14[-4] = CONCAT17(uStack_71,uStack_78);
    *(byte *)((long)puVar14 + -0x11) = bVar10;
    puVar14[-2] = uVar30;
    *(undefined4 *)(puVar14 + -1) = uVar8;
    puVar22 = puVar28;
  } while( true );
  do {
    puVar26 = puVar14;
    puVar27 = (undefined8 *)puVar28[8];
    if (puVar27 < (undefined8 *)puVar28[3]) {
      uVar20 = *puVar26;
      uStack_78 = (undefined7)puVar28[6];
      uStack_71 = (undefined1)*(undefined8 *)((long)puVar28 + 0x37);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar28 + 0x37) >> 8);
      uVar9 = *(undefined1 *)((long)puVar28 + 0x3f);
      puVar26[1] = 0;
      puVar26[2] = 0;
      *puVar26 = 0;
      uVar8 = *(undefined4 *)(puVar28 + 9);
      puVar28 = puVar24;
      do {
        puVar14 = (undefined8 *)((long)puVar15 + (long)puVar28);
        param_1 = puVar14 + 5;
        param_2 = puVar14;
        FUN_10abceb30();
        puVar22 = puVar15;
        if (puVar28 == (undefined8 *)0x0) goto LAB_10abce17c;
        puVar28 = puVar28 + -5;
      } while (puVar27 < (undefined8 *)puVar14[-2]);
      puVar22 = (undefined8 *)((long)puVar15 + (long)puVar28 + 0x28);
LAB_10abce17c:
      if (*(char *)((long)puVar22 + 0x17) < '\0') {
        param_1 = (undefined8 *)*puVar22;
        __ZdlPv();
      }
      *puVar22 = uVar20;
      puVar22[1] = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar22 + 0xf) = CONCAT71(uStack_70,uStack_71);
      *(undefined1 *)((long)puVar22 + 0x17) = uVar9;
      puVar22[3] = puVar27;
      *(undefined4 *)(puVar22 + 4) = uVar8;
    }
    puVar24 = puVar24 + 5;
    puVar28 = puVar26;
    puVar14 = puVar26 + 5;
  } while (puVar26 + 5 != puVar17);
  goto LAB_10abce5fc;
LAB_10abce1d8:
  do {
    if ((long)uVar19 <= (long)uVar23) {
      uVar4 = uVar19 << 1 | 1;
      puVar24 = puVar15 + uVar4 * 5;
      uVar29 = uVar19 * 2 + 2;
      uVar21 = uVar4;
      if ((long)uVar29 < (long)uVar30) {
        puVar2 = puVar24 + 3;
        puVar1 = puVar24 + 8;
        lVar18 = 0x28;
        if (*puVar1 <= *puVar2) {
          lVar18 = 0;
        }
        puVar24 = (undefined8 *)((long)puVar24 + lVar18);
        uVar21 = uVar29;
        if (*puVar1 <= *puVar2) {
          uVar21 = uVar4;
        }
      }
      puVar22 = puVar15 + uVar19 * 5;
      uVar29 = puVar22[3];
      if (uVar29 <= (ulong)puVar24[3]) {
        puStack_90 = (undefined8 *)*puVar22;
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar22 + 0xf) >> 8);
        uStack_78 = (undefined7)puVar22[1];
        uStack_71 = (undefined1)((ulong)puVar22[1] >> 0x38);
        uStack_94 = (uint)*(byte *)((long)puVar22 + 0x17);
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,*(undefined4 *)(puVar22 + 4));
        do {
          puVar27 = puVar24;
          FUN_10abceb30(puVar22,puVar27);
          if ((long)uVar23 < (long)uVar21) break;
          uVar5 = uVar21 << 1 | 1;
          puVar24 = puVar15 + uVar5 * 5;
          uVar4 = uVar21 * 2 + 2;
          uVar21 = uVar5;
          if ((long)uVar4 < (long)uVar30) {
            puVar2 = puVar24 + 3;
            puVar1 = puVar24 + 8;
            lVar18 = 0x28;
            if (*puVar1 <= *puVar2) {
              lVar18 = 0;
            }
            puVar24 = (undefined8 *)((long)puVar24 + lVar18);
            uVar21 = uVar4;
            if (*puVar1 <= *puVar2) {
              uVar21 = uVar5;
            }
          }
          puVar22 = puVar27;
        } while (uVar29 <= (ulong)puVar24[3]);
        if (*(char *)((long)puVar27 + 0x17) < '\0') {
          __ZdlPv(*puVar27);
        }
        *puVar27 = puStack_90;
        puVar27[1] = CONCAT17(uStack_71,uStack_78);
        *(ulong *)((long)puVar27 + 0xf) = CONCAT71(uStack_70,uStack_71);
        *(char *)((long)puVar27 + 0x17) = (char)uStack_94;
        puVar27[3] = uVar29;
        *(undefined4 *)(puVar27 + 4) = puStack_a0._0_4_;
      }
    }
    bVar6 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar6);
  puVar27 = (undefined8 *)0x28;
  puVar28 = (undefined8 *)((uVar31 >> 3) * -0x3333333333333333);
  do {
    uVar20 = *puVar15;
    uStack_88 = (undefined7)puVar15[1];
    uStack_81 = (undefined1)*(undefined8 *)((long)puVar15 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0xf) >> 8);
    puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,(uint)*(byte *)((long)puVar15 + 0x17));
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = 0;
    uVar25 = puVar15[3];
    uVar7 = *(uint *)(puVar15 + 4);
    puVar24 = (undefined8 *)(ulong)uVar7;
    puVar22 = puVar15;
    uVar30 = 0;
    do {
      uVar19 = uVar30 << 1 | 1;
      uVar31 = uVar30 * 2 + 2;
      puVar26 = puVar22 + uVar30 * 5 + 5;
      uVar23 = uVar19;
      if (((long)uVar31 < (long)puVar28) &&
         (puVar26 = puVar22 + uVar30 * 5 + 10, uVar23 = uVar31,
         (ulong)puVar22[uVar30 * 5 + 0xd] <= (ulong)puVar22[uVar30 * 5 + 8])) {
        puVar26 = puVar22 + uVar30 * 5 + 5;
        uVar23 = uVar19;
      }
      puVar22 = puVar26;
      param_2 = puVar22;
      FUN_10abceb30();
      uVar30 = uVar23;
    } while ((long)uVar23 <= (long)((long)puVar28 - 2U >> 1));
    puVar16 = puVar17 + -5;
    param_1 = puVar22;
    if (puVar22 == puVar16) {
      if (*(char *)((long)puVar22 + 0x17) < '\0') {
        param_1 = (undefined8 *)*puVar22;
        __ZdlPv();
      }
      *puVar22 = uVar20;
      puVar22[1] = CONCAT17(uStack_81,uStack_88);
      *(ulong *)((long)puVar22 + 0xf) = CONCAT71(uStack_80,uStack_81);
      *(char *)((long)puVar22 + 0x17) = (char)puStack_90;
      puVar22[3] = uVar25;
      *(uint *)(puVar22 + 4) = uVar7;
    }
    else {
      param_2 = puVar16;
      FUN_10abceb30();
      puVar17[-5] = uVar20;
      *(ulong *)((long)puVar17 + -0x19) = CONCAT71(uStack_80,uStack_81);
      puVar17[-4] = CONCAT17(uStack_81,uStack_88);
      *(char *)((long)puVar17 + -0x11) = (char)puStack_90;
      puVar17[-2] = uVar25;
      *(uint *)(puVar17 + -1) = uVar7;
      uVar30 = (long)puVar22 + (0x28 - (long)puVar15);
      if (0x28 < (long)uVar30) {
        uVar30 = (uVar30 >> 3) * -0x3333333333333333 - 2 >> 1;
        puVar24 = (undefined8 *)puVar22[3];
        if ((undefined8 *)(puVar15 + uVar30 * 5)[3] < puVar24) {
          uVar20 = *puVar22;
          uStack_78 = (undefined7)puVar22[1];
          uStack_71 = (undefined1)*(undefined8 *)((long)puVar22 + 0xf);
          uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar22 + 0xf) >> 8);
          uVar9 = *(undefined1 *)((long)puVar22 + 0x17);
          puVar22[1] = 0;
          puVar22[2] = 0;
          *puVar22 = 0;
          uVar8 = *(undefined4 *)(puVar22 + 4);
          puVar17 = puVar15 + uVar30 * 5;
          do {
            param_1 = puVar22;
            puVar22 = puVar17;
            param_2 = puVar22;
            FUN_10abceb30();
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1 >> 1;
            puVar17 = puVar15 + uVar30 * 5;
          } while ((undefined8 *)(puVar15 + uVar30 * 5)[3] < puVar24);
          if (*(char *)((long)puVar22 + 0x17) < '\0') {
            param_1 = (undefined8 *)*puVar22;
            __ZdlPv();
          }
          *puVar22 = uVar20;
          puVar22[1] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar22 + 0xf) = CONCAT71(uStack_70,uStack_71);
          *(undefined1 *)((long)puVar22 + 0x17) = uVar9;
          puVar22[3] = puVar24;
          *(undefined4 *)(puVar22 + 4) = uVar8;
        }
      }
    }
    puVar26 = (undefined8 *)((long)puVar28 + -1);
    bVar6 = 2 < (long)puVar28;
    puVar17 = puVar16;
    puVar28 = puVar26;
  } while (bVar6);
LAB_10abce5fc:
  puVar17 = puVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10abce638:
  unaff_x24 = puVar27;
  unaff_x23 = puVar26;
  unaff_x22 = puVar24;
  unaff_x21 = puVar22;
  unaff_x20 = puVar17;
  unaff_x30 = FUN_10abce63c;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&puStack_b0;
  puVar14 = param_1;
  puVar28 = param_2;
  unaff_x19 = puVar15;
  unaff_x29 = puVar3;
code_r0x00010abce63c:
  do {
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = (undefined8 *)*puVar14;
    *(undefined8 *)((long)register0x00000008 + -0x58) = puVar14[1];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)puVar14 + 0xf);
    bVar10 = *(byte *)((long)puVar14 + 0x17);
    unaff_x21 = (undefined8 *)(ulong)bVar10;
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    unaff_x22 = (undefined8 *)puVar14[3];
    uVar7 = *(uint *)(puVar14 + 4);
    unaff_x23 = (undefined8 *)(ulong)uVar7;
    puVar24 = puVar28;
    FUN_10abceb30();
    puVar15 = puVar14;
    puVar22 = param_3;
    if (*(char *)((long)puVar28 + 0x17) < '\0') {
      puVar15 = (undefined8 *)*puVar28;
      __ZdlPv();
      puVar22 = param_3;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *puVar28 = unaff_x20;
    puVar28[1] = uVar20;
    *(undefined8 *)((long)puVar28 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)puVar28 + 0x17) = bVar10;
    puVar28[3] = unaff_x22;
    *(uint *)(puVar28 + 4) = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_10abce6f0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    puVar27 = param_4;
    unaff_x19 = puVar28;
code_r0x00010abce6f0:
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar30 = puVar24[3];
    puVar28 = puVar15;
    param_3 = puVar22;
    param_4 = puVar27;
    if (uVar30 < (ulong)puVar15[3]) {
      puVar17 = puVar22;
      if (((ulong)puVar22[3] < uVar30) ||
         (FUN_10abce63c(puVar15,puVar24), puVar28 = puVar24, (ulong)puVar22[3] < (ulong)puVar24[3]))
      {
LAB_10abce780:
        FUN_10abce63c(puVar28,puVar17);
      }
    }
    else if (((ulong)puVar22[3] < uVar30) &&
            (FUN_10abce63c(puVar24,puVar22), puVar17 = puVar24,
            (ulong)puVar24[3] < (ulong)puVar15[3])) goto LAB_10abce780;
    if ((((ulong)puVar22[3] <= (ulong)puVar27[3]) ||
        (FUN_10abce63c(puVar22,puVar27), (ulong)puVar24[3] <= (ulong)puVar22[3])) ||
       (FUN_10abce63c(puVar24,puVar22), (ulong)puVar15[3] <= (ulong)puVar24[3])) {
      return;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(code **)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x28);
    puVar14 = puVar15;
    puVar28 = puVar24;
  } while( true );
LAB_10abcdf84:
  puVar17 = puVar16;
  if (((ulong)puVar13 & 1) != 0) goto LAB_10abce5fc;
  goto LAB_10abcd938;
}



/* Entry: 10abce63c; end: 10abce6ef;  */

void FUN_10abce63c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar11;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf);
    bVar3 = *(byte *)((long)param_1 + 0x17);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar11 = param_1[3];
    uVar2 = *(uint *)(param_1 + 4);
    unaff_x23 = (ulong)uVar2;
    puVar5 = param_2;
    FUN_10abceb30();
    puVar7 = param_3;
    lVar8 = param_4;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_2;
      __ZdlPv();
      puVar7 = param_3;
      lVar8 = param_4;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *param_2 = uVar1;
    param_2[1] = uVar9;
    *(undefined8 *)((long)param_2 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)param_2 + 0x17) = bVar3;
    param_2[3] = uVar11;
    *(uint *)(param_2 + 4) = uVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_10abce6f0;
    uVar10 = puVar5[3];
    puVar4 = param_1;
    param_3 = puVar7;
    param_4 = lVar8;
    if (uVar10 < (ulong)param_1[3]) {
      puVar6 = puVar7;
      if (((ulong)puVar7[3] < uVar10) ||
         (FUN_10abce63c(param_1,puVar5), puVar4 = puVar5, (ulong)puVar7[3] < (ulong)puVar5[3])) {
LAB_10abce780:
        FUN_10abce63c(puVar4,puVar6);
      }
    }
    else if (((ulong)puVar7[3] < uVar10) &&
            (FUN_10abce63c(puVar5,puVar7), puVar6 = puVar5, (ulong)puVar5[3] < (ulong)param_1[3]))
    goto LAB_10abce780;
    if ((((ulong)puVar7[3] <= *(ulong *)(lVar8 + 0x18)) ||
        (FUN_10abce63c(puVar7,lVar8), (ulong)puVar5[3] <= (ulong)puVar7[3])) ||
       (FUN_10abce63c(puVar5,puVar7), (ulong)param_1[3] <= (ulong)puVar5[3])) {
      return;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar5;
  } while( true );
}



/* Entry: 10abce6f0; end: 10abce7f3;  */

void FUN_10abce6f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar4 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar9 = puVar4[3];
    puVar3 = param_1;
    puVar6 = param_3;
    lVar7 = param_4;
    if (uVar9 < (ulong)param_1[3]) {
      puVar5 = param_3;
      if (((ulong)param_3[3] < uVar9) ||
         (FUN_10abce63c(param_1,puVar4), puVar3 = puVar4, (ulong)param_3[3] < (ulong)puVar4[3])) {
LAB_10abce780:
        FUN_10abce63c(puVar3,puVar5);
      }
    }
    else if (((ulong)param_3[3] < uVar9) &&
            (FUN_10abce63c(puVar4,param_3), puVar5 = puVar4, (ulong)puVar4[3] < (ulong)param_1[3]))
    goto LAB_10abce780;
    if ((((ulong)param_3[3] <= *(ulong *)(param_4 + 0x18)) ||
        (FUN_10abce63c(param_3,param_4), (ulong)puVar4[3] <= (ulong)param_3[3])) ||
       (FUN_10abce63c(puVar4,param_3), (ulong)param_1[3] <= (ulong)puVar4[3])) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf);
    bVar2 = *(byte *)((long)param_1 + 0x17);
    unaff_x21 = (ulong)bVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x22 = param_1[3];
    uVar1 = *(uint *)(param_1 + 4);
    unaff_x23 = (ulong)uVar1;
    param_2 = puVar4;
    FUN_10abceb30();
    param_3 = puVar6;
    param_4 = lVar7;
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      param_1 = (undefined8 *)*puVar4;
      __ZdlPv();
      param_3 = puVar6;
      param_4 = lVar7;
    }
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *puVar4 = unaff_x20;
    puVar4[1] = uVar8;
    *(undefined8 *)((long)puVar4 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)puVar4 + 0x17) = bVar2;
    puVar4[3] = unaff_x22;
    *(uint *)(puVar4 + 4) = uVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_10abce6f0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = puVar4;
  } while( true );
}



/* Entry: 10abce7f4; end: 10abceb2f;  */

undefined8 * FUN_10abce7f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined7 uStack_78;
  undefined1 uStack_71;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  puVar7 = param_2;
  if (2 < (long)uVar9) {
    if (uVar9 == 3) {
      puVar6 = param_2 + -5;
      uVar9 = param_1[8];
      if (uVar9 < (ulong)param_1[3]) {
        if (uVar9 <= (ulong)param_2[-2]) {
          puVar7 = param_1 + 5;
          FUN_10abce63c(param_1);
          if ((ulong)param_1[8] <= (ulong)param_2[-2]) goto LAB_10abceadc;
          param_1 = param_1 + 5;
        }
        goto LAB_10abce9d8;
      }
      if (uVar9 <= (ulong)param_2[-2]) goto LAB_10abceadc;
    }
    else {
      if (uVar9 == 4) {
        puVar7 = param_1 + 5;
        FUN_10abce6f0(param_1,puVar7,param_1 + 10,param_2 + -5);
        goto LAB_10abceadc;
      }
      if (uVar9 != 5) goto LAB_10abce914;
      puVar7 = param_1 + 5;
      FUN_10abce6f0(param_1,puVar7,param_1 + 10,param_1 + 0xf);
      if ((ulong)param_1[0x12] <= (ulong)param_2[-2]) goto LAB_10abceadc;
      puVar7 = param_2 + -5;
      FUN_10abce63c(param_1 + 0xf);
      if ((ulong)param_1[0xd] <= (ulong)param_1[0x12]) goto LAB_10abceadc;
      puVar7 = param_1 + 0xf;
      FUN_10abce63c(param_1 + 10);
      if ((ulong)param_1[8] <= (ulong)param_1[0xd]) goto LAB_10abceadc;
      puVar6 = param_1 + 10;
    }
    FUN_10abce63c(param_1 + 5);
    puVar7 = puVar6;
    if ((ulong)param_1[3] <= (ulong)param_1[8]) goto LAB_10abceadc;
    puVar6 = param_1 + 5;
LAB_10abce9d8:
    FUN_10abce63c(param_1);
    puVar7 = puVar6;
    goto LAB_10abceadc;
  }
  if (uVar9 < 2) goto LAB_10abceadc;
  if (uVar9 == 2) {
    if ((ulong)param_1[3] <= (ulong)param_2[-2]) goto LAB_10abceadc;
    puVar6 = param_2 + -5;
    goto LAB_10abce9d8;
  }
LAB_10abce914:
  puVar6 = param_1 + 10;
  uVar9 = param_1[8];
  puVar5 = param_1;
  if (uVar9 < (ulong)param_1[3]) {
    puVar7 = puVar6;
    if (uVar9 <= (ulong)param_1[0xd]) {
      puVar7 = param_1 + 5;
      FUN_10abce63c(param_1);
      if ((ulong)param_1[8] <= (ulong)param_1[0xd]) goto LAB_10abcea08;
      puVar5 = param_1 + 5;
      puVar7 = puVar6;
    }
LAB_10abcea04:
    FUN_10abce63c(puVar5);
  }
  else if (((ulong)param_1[0xd] < uVar9) &&
          (puVar7 = puVar6, FUN_10abce63c(param_1 + 5), (ulong)param_1[8] < (ulong)param_1[3])) {
    puVar7 = param_1 + 5;
    goto LAB_10abcea04;
  }
LAB_10abcea08:
  if (param_1 + 0xf != param_2) {
    lVar11 = 0;
    iVar12 = 0;
    puVar5 = param_1 + 0xf;
    do {
      uVar9 = puVar5[3];
      if (uVar9 < (ulong)puVar6[3]) {
        uVar14 = *puVar5;
        uStack_78 = (undefined7)puVar5[1];
        uVar10 = *(undefined8 *)((long)puVar5 + 0xf);
        uStack_71 = (undefined1)uVar10;
        uVar3 = *(undefined1 *)((long)puVar5 + 0x17);
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uVar2 = *(undefined4 *)(puVar5 + 4);
        lVar4 = lVar11;
        do {
          lVar13 = lVar4;
          puVar7 = (undefined8 *)((long)param_1 + lVar13 + 0x50);
          FUN_10abceb30((long)param_1 + lVar13 + 0x78);
          puVar6 = param_1;
          if (lVar13 == -0x50) goto LAB_10abcea8c;
          lVar4 = lVar13 + -0x28;
        } while (uVar9 < *(ulong *)((long)param_1 + lVar13 + 0x40));
        puVar6 = (undefined8 *)((long)param_1 + lVar13 + 0x50);
LAB_10abcea8c:
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          __ZdlPv(*puVar6);
        }
        *puVar6 = uVar14;
        puVar6[1] = CONCAT17(uStack_71,uStack_78);
        *(undefined8 *)((long)puVar6 + 0xf) = uVar10;
        *(undefined1 *)((long)puVar6 + 0x17) = uVar3;
        puVar6[3] = uVar9;
        *(undefined4 *)(puVar6 + 4) = uVar2;
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          puVar6 = (undefined8 *)(ulong)(puVar5 + 5 == param_2);
          goto LAB_10abceae0;
        }
      }
      puVar1 = puVar5 + 5;
      lVar11 = lVar11 + 0x28;
      puVar6 = puVar5;
      puVar5 = puVar1;
    } while (puVar1 != param_2);
  }
LAB_10abceadc:
  puVar6 = (undefined8 *)0x1;
LAB_10abceae0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (*(char *)((long)puVar6 + 0x17) < '\0') {
      __ZdlPv(*puVar6);
    }
    uVar10 = puVar7[1];
    uVar14 = *puVar7;
    puVar6[2] = puVar7[2];
    puVar6[1] = uVar10;
    *puVar6 = uVar14;
    *(undefined1 *)((long)puVar7 + 0x17) = 0;
    *(undefined1 *)puVar7 = 0;
    puVar6[3] = puVar7[3];
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar7 + 4);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 10abceb30; end: 10abceb8b;  */

undefined8 * FUN_10abceb30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10abceb8c; end: 10abcfacb;  */

/* WARNING: Removing unreachable block (ram,0x00010abcef04) */
/* WARNING: Removing unreachable block (ram,0x00010abcf168) */
/* WARNING: Removing unreachable block (ram,0x00010abcf7d0) */

void FUN_10abceb8c(ulong *param_1,ulong *param_2,ulong *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar19;
  ulong *puVar20;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *puVar21;
  ulong *unaff_x24;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  byte bVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong uVar26;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  ulong uStack_98;
  ulong *puStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_98 = CONCAT44(uStack_98._4_4_,param_4);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  puVar20 = unaff_x21;
  puVar19 = unaff_x22;
  puVar24 = param_3;
  puVar15 = param_1;
LAB_10abcebd8:
  do {
    puVar10 = puVar15;
    puVar22 = (ulong *)((long)param_2 - (long)puVar10);
    puVar21 = (ulong *)(((long)puVar22 >> 3) * -0x3333333333333333);
    puVar11 = param_2;
    if ((long)puVar21 - 2U == 0 || (long)puVar21 < 2) {
      if (puVar21 < (ulong *)0x2) break;
      if (puVar21 == (ulong *)0x2) {
        bVar7 = (byte)param_2[-1] < (byte)puVar10[4];
        if (puVar10[3] != param_2[-2]) {
          bVar7 = param_2[-2] < puVar10[3];
        }
        if (bVar7) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10abcfac8;
          puVar12 = param_2 + -5;
          param_1 = puVar10;
          goto code_r0x00010abcfacc;
        }
        break;
      }
    }
    else {
      if (puVar21 == (ulong *)0x3) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          puVar20 = puVar10 + 5;
          param_3 = param_2 + -5;
          goto code_r0x00010abcfba4;
        }
        goto LAB_10abcfac8;
      }
      if (puVar21 == (ulong *)0x4) {
        puVar12 = puVar10 + 5;
        param_3 = puVar10 + 10;
        param_1 = puVar10;
        FUN_10abcfba4();
        bVar7 = (byte)param_2[-1] < (byte)puVar10[0xe];
        if (puVar10[0xd] != param_2[-2]) {
          bVar7 = param_2[-2] < puVar10[0xd];
        }
        if (bVar7) {
          puVar12 = param_2 + -5;
          param_1 = puVar10 + 10;
          FUN_10abcfacc();
          bVar7 = (byte)puVar10[0xe] < (byte)puVar10[9];
          if (puVar10[8] != puVar10[0xd]) {
            bVar7 = puVar10[0xd] < puVar10[8];
          }
          if (bVar7) {
            param_1 = puVar10 + 5;
            puVar12 = puVar10 + 10;
            FUN_10abcfacc();
            bVar7 = (byte)puVar10[9] < (byte)puVar10[4];
            if (puVar10[3] != puVar10[8]) {
              bVar7 = puVar10[8] < puVar10[3];
            }
            if (bVar7) {
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10abcfac8;
              puVar12 = puVar10 + 5;
              param_1 = puVar10;
              goto code_r0x00010abcfacc;
            }
          }
        }
        break;
      }
      if (puVar21 == (ulong *)0x5) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10abcfac8;
        puVar12 = puVar10 + 5;
        puVar20 = puVar10 + 10;
        puVar19 = puVar10 + 0xf;
        param_3 = puVar20;
        FUN_10abcfba4();
        bVar7 = (byte)puVar10[0x13] < (byte)puVar10[0xe];
        if (puVar10[0xd] != puVar10[0x12]) {
          bVar7 = puVar10[0x12] < puVar10[0xd];
        }
        if (bVar7) {
          FUN_10abcfacc(puVar20,puVar19);
          bVar7 = (byte)puVar10[0xe] < (byte)puVar10[9];
          if (puVar10[8] != puVar10[0xd]) {
            bVar7 = puVar10[0xd] < puVar10[8];
          }
          if (bVar7) {
            FUN_10abcfacc(puVar12,puVar20);
            bVar7 = (byte)puVar10[9] < (byte)puVar10[4];
            if (puVar10[3] != puVar10[8]) {
              bVar7 = puVar10[8] < puVar10[3];
            }
            if (bVar7) {
              FUN_10abcfacc(puVar10,puVar12);
            }
          }
        }
        bVar7 = (byte)param_2[-1] < (byte)puVar10[0x13];
        if (puVar10[0x12] != param_2[-2]) {
          bVar7 = param_2[-2] < puVar10[0x12];
        }
        if (bVar7) {
          FUN_10abcfacc(puVar19,param_2 + -5);
          bVar7 = (byte)puVar10[0x13] < (byte)puVar10[0xe];
          if (puVar10[0xd] != puVar10[0x12]) {
            bVar7 = puVar10[0x12] < puVar10[0xd];
          }
          if (bVar7) {
            FUN_10abcfacc(puVar20,puVar19);
            bVar7 = (byte)puVar10[0xe] < (byte)puVar10[9];
            if (puVar10[8] != puVar10[0xd]) {
              bVar7 = puVar10[0xd] < puVar10[8];
            }
            if (bVar7) {
              FUN_10abcfacc(puVar12,puVar20);
              bVar7 = (byte)puVar10[9] < (byte)puVar10[4];
              if (puVar10[3] != puVar10[8]) {
                bVar7 = puVar10[8] < puVar10[3];
              }
              param_1 = puVar10;
              if (bVar7) goto code_r0x00010abcfacc;
            }
          }
        }
        return;
      }
    }
    if ((long)puVar22 < 0x3c0) {
      puVar24 = puVar10 + 5;
      if ((uStack_98 & 1) == 0) {
        if (puVar10 != param_2 && puVar24 != param_2) {
          puVar15 = puVar10;
          puVar9 = (ulong *)0x28;
          puVar22 = (ulong *)0x0;
          do {
            puVar20 = puVar9;
            puVar19 = (ulong *)puVar15[8];
            bVar25 = (byte)puVar15[9];
            puVar21 = (ulong *)(ulong)bVar25;
            bVar7 = bVar25 < (byte)puVar15[4];
            if ((ulong *)puVar15[3] != puVar19) {
              bVar7 = puVar19 < (ulong *)puVar15[3];
            }
            if (bVar7) {
              uVar23 = *puVar24;
              uStack_78 = (undefined7)puVar15[6];
              uStack_71 = (undefined1)*(undefined8 *)((long)puVar15 + 0x37);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x37) >> 8);
              uVar4 = *(undefined1 *)((long)puVar15 + 0x3f);
              puVar24[1] = 0;
              puVar24[2] = 0;
              *puVar24 = 0;
              do {
                puVar2 = (undefined8 *)((long)puVar10 + (long)puVar22);
                if (*(char *)((long)puVar2 + 0x3f) < '\0') {
                  param_1 = (ulong *)puVar2[5];
                  __ZdlPv();
                }
                puVar2[6] = puVar2[1];
                puVar2[5] = *puVar2;
                *(undefined1 *)((long)puVar2 + 0x17) = 0;
                *(undefined1 *)puVar2 = 0;
                puVar2[7] = puVar2[2];
                puVar2[8] = puVar2[3];
                *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(puVar2 + 4);
                if (puVar22 == (ulong *)0xffffffffffffffd8) goto LAB_10abcfac4;
                puVar24 = puVar22 + -5;
                puVar15 = *(ulong **)((undefined1 *)((long)puVar10 + (long)puVar22) + -0x10);
                bVar7 = bVar25 < (byte)((undefined1 *)((long)puVar10 + (long)puVar22))[-8];
                if (puVar15 != puVar19) {
                  bVar7 = puVar19 < puVar15;
                }
                puVar22 = puVar24;
              } while (bVar7);
              puVar3 = (undefined1 *)((long)puVar10 + (long)puVar24);
              if ((char)puVar3[0x3f] < '\0') {
                param_1 = *(ulong **)(puVar3 + 0x28);
                __ZdlPv();
              }
              *(ulong *)(puVar3 + 0x28) = uVar23;
              *(ulong *)(puVar3 + 0x37) = CONCAT71(uStack_70,uStack_71);
              *(ulong *)(puVar3 + 0x30) = CONCAT17(uStack_71,uStack_78);
              puVar3[0x3f] = uVar4;
              *(ulong **)(puVar3 + 0x40) = puVar19;
              puVar3[0x48] = bVar25;
            }
            puVar15 = (ulong *)((long)puVar10 + (long)puVar20);
            puVar24 = (ulong *)((long)puVar10 + (long)(puVar20 + 5));
            puVar9 = puVar20 + 5;
            puVar22 = puVar20;
          } while (puVar24 != param_2);
        }
      }
      else if (puVar10 != param_2 && puVar24 != param_2) {
        puVar20 = (ulong *)0x0;
        puVar15 = puVar10;
        do {
          puVar19 = puVar24;
          puVar21 = (ulong *)puVar15[8];
          bVar25 = (byte)puVar15[9];
          bVar7 = bVar25 < (byte)puVar15[4];
          if ((ulong *)puVar15[3] != puVar21) {
            bVar7 = puVar21 < (ulong *)puVar15[3];
          }
          if (bVar7) {
            uVar23 = *puVar19;
            uStack_78 = (undefined7)puVar15[6];
            uStack_71 = (undefined1)*(undefined8 *)((long)puVar15 + 0x37);
            uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x37) >> 8);
            uVar4 = *(undefined1 *)((long)puVar15 + 0x3f);
            puVar19[1] = 0;
            puVar19[2] = 0;
            *puVar19 = 0;
            puVar24 = puVar20;
            do {
              puVar2 = (undefined8 *)((long)puVar10 + (long)puVar24);
              if (*(char *)((long)puVar2 + 0x3f) < '\0') {
                param_1 = (ulong *)puVar2[5];
                __ZdlPv();
              }
              puVar2[6] = puVar2[1];
              puVar2[5] = *puVar2;
              *(undefined1 *)((long)puVar2 + 0x17) = 0;
              *(undefined1 *)puVar2 = 0;
              puVar2[7] = puVar2[2];
              puVar2[8] = puVar2[3];
              *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(puVar2 + 4);
              puVar15 = puVar10;
              if (puVar24 == (ulong *)0x0) goto LAB_10abcf460;
              puVar15 = *(ulong **)((long)puVar10 + (long)puVar24 + -0x10);
              bVar7 = bVar25 < *(byte *)((long)puVar10 + (long)puVar24 + -8);
              if (puVar15 != puVar21) {
                bVar7 = puVar21 < puVar15;
              }
              puVar24 = puVar24 + -5;
            } while (bVar7);
            puVar15 = (ulong *)((long)puVar10 + (long)puVar24 + 0x28);
LAB_10abcf460:
            if (*(char *)((long)puVar15 + 0x17) < '\0') {
              param_1 = (ulong *)*puVar15;
              __ZdlPv();
            }
            *puVar15 = uVar23;
            puVar15[1] = CONCAT17(uStack_71,uStack_78);
            *(ulong *)((long)puVar15 + 0xf) = CONCAT71(uStack_70,uStack_71);
            *(undefined1 *)((long)puVar15 + 0x17) = uVar4;
            puVar15[3] = (ulong)puVar21;
            *(byte *)(puVar15 + 4) = bVar25;
          }
          puVar20 = puVar20 + 5;
          puVar24 = puVar19 + 5;
          puVar15 = puVar19;
          puVar22 = (ulong *)(ulong)bVar25;
        } while (puVar19 + 5 != param_2);
      }
      break;
    }
    if (puVar24 == (ulong *)0x0) {
      if (puVar10 != param_2) {
        puVar24 = (ulong *)((long)puVar21 - 2U >> 1);
        puVar19 = puVar24;
        puStack_90 = puVar24;
        do {
          if ((long)puVar19 <= (long)puVar24) {
            uVar14 = (long)puVar19 << 1 | 1;
            puVar15 = puVar10 + uVar14 * 5;
            uVar23 = (long)puVar19 * 2 + 2;
            uVar17 = uVar14;
            if ((long)uVar23 < (long)puVar21) {
              bVar7 = (byte)puVar15[4] < (byte)puVar15[9];
              if (puVar15[8] != puVar15[3]) {
                bVar7 = puVar15[3] < puVar15[8];
              }
              lVar13 = 0x28;
              if (!bVar7) {
                lVar13 = 0;
              }
              puVar15 = (ulong *)((long)puVar15 + lVar13);
              uVar17 = uVar23;
              if (!bVar7) {
                uVar17 = uVar14;
              }
            }
            puVar9 = puVar10 + (long)puVar19 * 5;
            uVar23 = puVar9[3];
            bVar25 = (byte)puVar9[4];
            bVar7 = (byte)puVar15[4] < bVar25;
            if (uVar23 != puVar15[3]) {
              bVar7 = puVar15[3] < uVar23;
            }
            if (!bVar7) {
              uStack_98 = *puVar9;
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar9 + 0xf) >> 8);
              uStack_78 = (undefined7)puVar9[1];
              uStack_71 = (undefined1)(puVar9[1] >> 0x38);
              uStack_9c = (uint)*(byte *)((long)puVar9 + 0x17);
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              do {
                puVar20 = puVar15;
                if (*(char *)((long)puVar9 + 0x17) < '\0') {
                  param_1 = (ulong *)*puVar9;
                  __ZdlPv();
                  puVar24 = puStack_90;
                }
                uVar16 = puVar20[1];
                uVar14 = *puVar20;
                puVar9[2] = puVar20[2];
                puVar9[1] = uVar16;
                *puVar9 = uVar14;
                *(undefined1 *)((long)puVar20 + 0x17) = 0;
                *(undefined1 *)puVar20 = 0;
                puVar9[3] = puVar20[3];
                *(char *)(puVar9 + 4) = (char)puVar20[4];
                if ((long)puVar24 < (long)uVar17) break;
                uVar16 = uVar17 << 1 | 1;
                puVar15 = puVar10 + uVar16 * 5;
                uVar14 = uVar17 * 2 + 2;
                uVar17 = uVar16;
                if ((long)uVar14 < (long)puVar21) {
                  bVar7 = (byte)puVar15[4] < (byte)puVar15[9];
                  if (puVar15[8] != puVar15[3]) {
                    bVar7 = puVar15[3] < puVar15[8];
                  }
                  lVar13 = 0x28;
                  if (!bVar7) {
                    lVar13 = 0;
                  }
                  puVar15 = (ulong *)((long)puVar15 + lVar13);
                  uVar17 = uVar14;
                  if (!bVar7) {
                    uVar17 = uVar16;
                  }
                }
                bVar7 = (byte)puVar15[4] < bVar25;
                if (uVar23 != puVar15[3]) {
                  bVar7 = puVar15[3] < uVar23;
                }
                puVar9 = puVar20;
              } while (!bVar7);
              if (*(char *)((long)puVar20 + 0x17) < '\0') {
                param_1 = (ulong *)*puVar20;
                __ZdlPv();
                puVar24 = puStack_90;
              }
              *puVar20 = uStack_98;
              puVar20[1] = CONCAT17(uStack_71,uStack_78);
              *(ulong *)((long)puVar20 + 0xf) = CONCAT71(uStack_70,uStack_71);
              *(char *)((long)puVar20 + 0x17) = (char)uStack_9c;
              puVar20[3] = uVar23;
              *(byte *)(puVar20 + 4) = bVar25;
            }
          }
          bVar7 = puVar19 != (ulong *)0x0;
          puVar19 = (ulong *)((long)puVar19 + -1);
        } while (bVar7);
        puVar21 = (ulong *)0x28;
        puVar24 = (ulong *)(((ulong)puVar22 >> 3) * -0x3333333333333333);
        do {
          if (1 < (long)puVar24) {
            uVar23 = *puVar10;
            uStack_88 = (undefined7)puVar10[1];
            uStack_81 = (undefined1)*(undefined8 *)((long)puVar10 + 0xf);
            uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0xf) >> 8);
            puStack_90 = (ulong *)CONCAT44(puStack_90._4_4_,(uint)*(byte *)((long)puVar10 + 0x17));
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            uStack_98 = puVar10[3];
            bVar25 = (byte)puVar10[4];
            puVar22 = (ulong *)(ulong)bVar25;
            puVar20 = puVar10;
            uVar14 = 0;
            do {
              uVar16 = uVar14 << 1 | 1;
              uVar17 = uVar14 * 2 + 2;
              uVar18 = uVar16;
              puVar19 = puVar20 + uVar14 * 5 + 5;
              if ((long)uVar17 < (long)puVar24) {
                bVar7 = (byte)puVar20[uVar14 * 5 + 9] < (byte)puVar20[uVar14 * 5 + 0xe];
                if (puVar20[uVar14 * 5 + 0xd] != puVar20[uVar14 * 5 + 8]) {
                  bVar7 = puVar20[uVar14 * 5 + 8] < puVar20[uVar14 * 5 + 0xd];
                }
                uVar18 = uVar17;
                puVar19 = puVar20 + uVar14 * 5 + 10;
                if (!bVar7) {
                  uVar18 = uVar16;
                  puVar19 = puVar20 + uVar14 * 5 + 5;
                }
              }
              if (*(char *)((long)puVar20 + 0x17) < '\0') {
                param_1 = (ulong *)*puVar20;
                __ZdlPv();
              }
              uVar17 = puVar19[1];
              uVar14 = *puVar19;
              puVar20[2] = puVar19[2];
              puVar20[1] = uVar17;
              *puVar20 = uVar14;
              *(undefined1 *)((long)puVar19 + 0x17) = 0;
              *(undefined1 *)puVar19 = 0;
              puVar20[3] = puVar19[3];
              *(char *)(puVar20 + 4) = (char)puVar19[4];
              puVar20 = puVar19;
              uVar14 = uVar18;
            } while ((long)uVar18 <= (long)((long)puVar24 - 2U >> 1));
            puVar20 = puVar11 + -5;
            if (puVar19 == puVar20) {
              if (*(char *)((long)puVar19 + 0x17) < '\0') {
                param_1 = (ulong *)*puVar19;
                __ZdlPv();
              }
              *puVar19 = uVar23;
              puVar19[1] = CONCAT17(uStack_81,uStack_88);
              *(ulong *)((long)puVar19 + 0xf) = CONCAT71(uStack_80,uStack_81);
              *(char *)((long)puVar19 + 0x17) = (char)puStack_90;
              puVar19[3] = uStack_98;
              *(byte *)(puVar19 + 4) = bVar25;
            }
            else {
              if (*(char *)((long)puVar19 + 0x17) < '\0') {
                param_1 = (ulong *)*puVar19;
                __ZdlPv();
              }
              uVar17 = puVar11[-4];
              uVar14 = *puVar20;
              puVar19[2] = puVar11[-3];
              puVar19[1] = uVar17;
              *puVar19 = uVar14;
              *(undefined1 *)((long)puVar11 + -0x11) = 0;
              *(undefined1 *)(puVar11 + -5) = 0;
              puVar19[3] = puVar11[-2];
              *(char *)(puVar19 + 4) = (char)puVar11[-1];
              puVar11[-5] = uVar23;
              *(ulong *)((long)puVar11 + -0x19) = CONCAT71(uStack_80,uStack_81);
              puVar11[-4] = CONCAT17(uStack_81,uStack_88);
              *(char *)((long)puVar11 + -0x11) = (char)puStack_90;
              puVar11[-2] = uStack_98;
              *(byte *)(puVar11 + -1) = bVar25;
              uVar23 = (long)puVar19 + (0x28 - (long)puVar10);
              if (0x28 < (long)uVar23) {
                uVar23 = (uVar23 >> 3) * -0x3333333333333333 - 2 >> 1;
                puVar15 = puVar10 + uVar23 * 5;
                puVar22 = (ulong *)puVar19[3];
                bVar25 = (byte)puVar19[4];
                bVar7 = (byte)puVar15[4] < bVar25;
                if (puVar22 != (ulong *)puVar15[3]) {
                  bVar7 = (ulong *)puVar15[3] < puVar22;
                }
                if (bVar7) {
                  puStack_90 = (ulong *)*puVar19;
                  uStack_78 = (undefined7)puVar19[1];
                  uStack_71 = (undefined1)*(undefined8 *)((long)puVar19 + 0xf);
                  uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar19 + 0xf) >> 8);
                  bVar5 = *(byte *)((long)puVar19 + 0x17);
                  puVar20 = (ulong *)(ulong)bVar5;
                  puVar19[1] = 0;
                  puVar19[2] = 0;
                  *puVar19 = 0;
                  do {
                    puVar9 = puVar15;
                    if (*(char *)((long)puVar19 + 0x17) < '\0') {
                      param_1 = (ulong *)*puVar19;
                      __ZdlPv();
                    }
                    uVar17 = puVar9[1];
                    uVar14 = *puVar9;
                    puVar19[2] = puVar9[2];
                    puVar19[1] = uVar17;
                    *puVar19 = uVar14;
                    *(undefined1 *)((long)puVar9 + 0x17) = 0;
                    *(undefined1 *)puVar9 = 0;
                    puVar19[3] = puVar9[3];
                    *(char *)(puVar19 + 4) = (char)puVar9[4];
                    if (uVar23 == 0) break;
                    uVar23 = uVar23 - 1 >> 1;
                    puVar15 = puVar10 + uVar23 * 5;
                    bVar7 = (byte)puVar15[4] < bVar25;
                    if (puVar22 != (ulong *)puVar15[3]) {
                      bVar7 = (ulong *)puVar15[3] < puVar22;
                    }
                    puVar19 = puVar9;
                  } while (bVar7);
                  if (*(char *)((long)puVar9 + 0x17) < '\0') {
                    param_1 = (ulong *)*puVar9;
                    __ZdlPv();
                  }
                  *puVar9 = (ulong)puStack_90;
                  puVar9[1] = CONCAT17(uStack_71,uStack_78);
                  *(ulong *)((long)puVar9 + 0xf) = CONCAT71(uStack_70,uStack_71);
                  *(byte *)((long)puVar9 + 0x17) = bVar5;
                  puVar9[3] = (ulong)puVar22;
                  *(byte *)(puVar9 + 4) = bVar25;
                }
              }
            }
          }
          puVar11 = puVar11 + -5;
          puVar19 = (ulong *)((long)puVar24 + -1);
          bVar7 = (ulong *)0x2 < puVar24;
          puVar24 = puVar19;
        } while (bVar7);
      }
      break;
    }
    param_1 = puVar10 + ((ulong)puVar21 >> 1) * 5;
    param_3 = param_2 + -5;
    if (puVar22 < (ulong *)0x1401) {
      puVar12 = puVar10;
      FUN_10abcfba4();
    }
    else {
      FUN_10abcfba4(puVar10,param_1);
      puVar20 = param_1 + -5;
      FUN_10abcfba4(puVar10 + 5,puVar20,param_2 + -10);
      FUN_10abcfba4(puVar10 + 10,param_1 + 5,param_2 + -0xf);
      param_3 = param_1 + 5;
      puVar12 = param_1;
      FUN_10abcfba4();
      uVar23 = *puVar10;
      uVar14 = puVar10[1];
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0xf) >> 8);
      uStack_71 = (undefined1)(uVar14 >> 0x38);
      uVar4 = *(undefined1 *)((long)puVar10 + 0x17);
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      uVar16 = puVar10[3];
      uVar17 = puVar10[4];
      uVar18 = param_1[2];
      uVar26 = *param_1;
      puVar10[1] = param_1[1];
      *puVar10 = uVar26;
      puVar10[2] = uVar18;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      puVar10[3] = param_1[3];
      *(char *)(puVar10 + 4) = (char)param_1[4];
      *param_1 = uVar23;
      *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_70,uStack_71);
      param_1[1] = uVar14;
      *(undefined1 *)((long)param_1 + 0x17) = uVar4;
      param_1[3] = uVar16;
      *(char *)(param_1 + 4) = (char)uVar17;
      param_1 = puVar20;
    }
    puVar24 = (ulong *)((long)puVar24 + -1);
    puStack_90 = puVar24;
    if ((uStack_98 & 1) == 0) {
      uVar23 = puVar10[3];
      bVar25 = (byte)puVar10[4];
      bVar7 = (byte)puVar10[-1] < bVar25;
      if (uVar23 != puVar10[-2]) {
        bVar7 = puVar10[-2] < uVar23;
      }
      if (!bVar7) {
        uVar14 = *puVar10;
        uStack_78 = (undefined7)puVar10[1];
        uStack_71 = (undefined1)*(undefined8 *)((long)puVar10 + 0xf);
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0xf) >> 8);
        bVar5 = *(byte *)((long)puVar10 + 0x17);
        puVar19 = (ulong *)(ulong)bVar5;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        bVar7 = bVar25 < (byte)param_2[-1];
        if (param_2[-2] != uVar23) {
          bVar7 = uVar23 < param_2[-2];
        }
        puVar20 = puVar10;
        if (bVar7) {
          do {
            puVar15 = puVar20 + 5;
            if (puVar15 == param_2) goto LAB_10abcfac4;
            bVar7 = bVar25 < (byte)puVar20[9];
            if (puVar20[8] != uVar23) {
              bVar7 = uVar23 < puVar20[8];
            }
            puVar20 = puVar15;
          } while (!bVar7);
        }
        else {
          do {
            puVar15 = puVar20 + 5;
            if (param_2 <= puVar15) break;
            bVar7 = bVar25 < (byte)puVar20[9];
            if (puVar20[8] != uVar23) {
              bVar7 = uVar23 < puVar20[8];
            }
            puVar20 = puVar15;
          } while (!bVar7);
        }
        puVar20 = param_2;
        puVar21 = param_2;
        if (puVar15 < param_2) {
          do {
            if (puVar20 == puVar10) goto LAB_10abcfac4;
            puVar21 = puVar20 + -5;
            bVar7 = bVar25 < (byte)puVar20[-1];
            if (puVar20[-2] != uVar23) {
              bVar7 = uVar23 < puVar20[-2];
            }
            puVar20 = puVar21;
          } while (bVar7);
        }
        if (puVar15 < puVar21) {
          do {
            param_1 = puVar15;
            puVar12 = puVar21;
            FUN_10abcfacc();
            puVar20 = puVar15;
            do {
              puVar15 = puVar20 + 5;
              if (puVar15 == param_2) goto LAB_10abcfac4;
              bVar7 = bVar25 < (byte)puVar20[9];
              if (puVar20[8] != uVar23) {
                bVar7 = uVar23 < puVar20[8];
              }
              puVar22 = puVar21;
              puVar20 = puVar15;
            } while (!bVar7);
            do {
              if (puVar22 == puVar10) goto LAB_10abcfac4;
              puVar21 = puVar22 + -5;
              bVar7 = bVar25 < (byte)puVar22[-1];
              if (puVar22[-2] != uVar23) {
                bVar7 = uVar23 < puVar22[-2];
              }
              puVar22 = puVar21;
            } while (bVar7);
          } while (puVar15 < puVar21);
        }
        puVar20 = puVar15 + -5;
        if (puVar20 != puVar10) {
          if (*(char *)((long)puVar10 + 0x17) < '\0') {
            param_1 = (ulong *)*puVar10;
            __ZdlPv();
          }
          uVar16 = puVar15[-4];
          uVar17 = *puVar20;
          puVar10[2] = puVar15[-3];
          puVar10[1] = uVar16;
          *puVar10 = uVar17;
          *(undefined1 *)((long)puVar15 + -0x11) = 0;
          *(undefined1 *)(puVar15 + -5) = 0;
          puVar10[3] = puVar15[-2];
          *(char *)(puVar10 + 4) = (char)puVar15[-1];
        }
        uStack_98 = uStack_98 & 0xffffffff00000000;
        puVar15[-5] = uVar14;
        *(ulong *)((long)puVar15 + -0x19) = CONCAT71(uStack_70,uStack_71);
        puVar15[-4] = CONCAT17(uStack_71,uStack_78);
        *(byte *)((long)puVar15 + -0x11) = bVar5;
        puVar15[-2] = uVar23;
        *(byte *)(puVar15 + -1) = bVar25;
        goto LAB_10abcebd8;
      }
    }
    else {
      uVar23 = puVar10[3];
      bVar25 = (byte)puVar10[4];
    }
    lVar13 = 0;
    uVar14 = *puVar10;
    uStack_78 = (undefined7)puVar10[1];
    uStack_71 = (undefined1)*(undefined8 *)((long)puVar10 + 0xf);
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0xf) >> 8);
    uVar4 = *(undefined1 *)((long)puVar10 + 0x17);
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    do {
      if ((ulong *)((long)puVar10 + lVar13 + 0x28) == param_2) goto LAB_10abcfac4;
      uVar17 = *(ulong *)((long)puVar10 + lVar13 + 0x40);
      bVar7 = *(byte *)((long)puVar10 + lVar13 + 0x48) < bVar25;
      if (uVar23 != uVar17) {
        bVar7 = uVar17 < uVar23;
      }
      lVar13 = lVar13 + 0x28;
    } while (bVar7);
    puVar19 = (ulong *)((long)puVar10 + lVar13);
    puVar12 = param_2;
    if (lVar13 == 0x28) {
      do {
        puVar20 = puVar12;
        if (puVar12 <= puVar19) break;
        puVar20 = puVar12 + -5;
        bVar7 = (byte)puVar12[-1] < bVar25;
        if (uVar23 != puVar12[-2]) {
          bVar7 = puVar12[-2] < uVar23;
        }
        puVar12 = puVar20;
      } while (!bVar7);
    }
    else {
      do {
        if (puVar12 == puVar10) {
LAB_10abcfac4:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10abcfac8);
          (*pcVar6)();
        }
        puVar20 = puVar12 + -5;
        bVar7 = (byte)puVar12[-1] < bVar25;
        if (uVar23 != puVar12[-2]) {
          bVar7 = puVar12[-2] < uVar23;
        }
        puVar12 = puVar20;
      } while (!bVar7);
    }
    puVar21 = puVar19;
    puVar12 = puVar19;
    puVar24 = puVar20;
    if (puVar19 < puVar20) {
      do {
        FUN_10abcfacc(puVar12,puVar24);
        do {
          puVar21 = puVar12 + 5;
          if (puVar21 == param_2) goto LAB_10abcfac4;
          bVar7 = (byte)puVar12[9] < bVar25;
          if (uVar23 != puVar12[8]) {
            bVar7 = puVar12[8] < uVar23;
          }
          puVar12 = puVar21;
        } while (bVar7);
        do {
          if (puVar24 == puVar10) goto LAB_10abcfac4;
          puVar15 = puVar24 + -5;
          bVar7 = (byte)puVar24[-1] < bVar25;
          if (uVar23 != puVar24[-2]) {
            bVar7 = puVar24[-2] < uVar23;
          }
          puVar24 = puVar15;
        } while (!bVar7);
      } while (puVar21 < puVar15);
    }
    puVar11 = puVar21 + -5;
    if (puVar11 != puVar10) {
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        __ZdlPv(*puVar10);
      }
      uVar16 = puVar21[-4];
      uVar17 = *puVar11;
      puVar10[2] = puVar21[-3];
      puVar10[1] = uVar16;
      *puVar10 = uVar17;
      *(undefined1 *)((long)puVar21 + -0x11) = 0;
      *(undefined1 *)(puVar21 + -5) = 0;
      puVar10[3] = puVar21[-2];
      *(char *)(puVar10 + 4) = (char)puVar21[-1];
    }
    puVar24 = puStack_90;
    puVar21[-5] = uVar14;
    *(ulong *)((long)puVar21 + -0x19) = CONCAT71(uStack_70,uStack_71);
    puVar21[-4] = CONCAT17(uStack_71,uStack_78);
    *(undefined1 *)((long)puVar21 + -0x11) = uVar4;
    puVar21[-2] = uVar23;
    *(byte *)(puVar21 + -1) = bVar25;
    puVar15 = puVar21;
    if (puVar19 < puVar20) {
LAB_10abcef70:
      param_3 = puVar24;
      FUN_10abceb8c();
      uStack_98 = uStack_98 & 0xffffffff00000000;
      param_1 = puVar10;
      puVar12 = puVar11;
      goto LAB_10abcebd8;
    }
    puVar9 = puVar10;
    FUN_10abcfeb4(puVar10,puVar11);
    param_1 = puVar21;
    puVar12 = param_2;
    FUN_10abcfeb4();
    if ((int)param_1 == 0) {
      if (((ulong)puVar9 & 1) == 0) goto LAB_10abcef70;
      goto LAB_10abcebd8;
    }
    param_2 = puVar11;
    puVar22 = puVar11;
    puVar15 = puVar10;
  } while (((ulong)puVar9 & 1) == 0);
  param_2 = puVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10abcfac8:
  unaff_x24 = puVar22;
  unaff_x23 = puVar21;
  unaff_x22 = puVar19;
  unaff_x21 = puVar20;
  unaff_x19 = param_2;
  unaff_x30 = FUN_10abcfacc;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_a0;
  unaff_x20 = puVar10;
  unaff_x29 = puVar1;
code_r0x00010abcfacc:
  do {
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = (ulong *)*param_1;
    *(ulong *)((long)register0x00000008 + -0x58) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf);
    bVar25 = *(byte *)((long)param_1 + 0x17);
    unaff_x21 = (ulong *)(ulong)bVar25;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x22 = (ulong *)param_1[3];
    uVar23 = param_1[4];
    unaff_x23 = (ulong *)(ulong)(byte)uVar23;
    uVar14 = puVar12[2];
    uVar17 = *puVar12;
    param_1[1] = puVar12[1];
    *param_1 = uVar17;
    param_1[2] = uVar14;
    *(undefined1 *)((long)puVar12 + 0x17) = 0;
    *(undefined1 *)puVar12 = 0;
    param_1[3] = puVar12[3];
    *(char *)(param_1 + 4) = (char)puVar12[4];
    puVar10 = param_1;
    puVar20 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      puVar10 = (ulong *)*puVar12;
      __ZdlPv();
    }
    uVar14 = *(ulong *)((long)register0x00000008 + -0x58);
    *puVar12 = (ulong)unaff_x20;
    puVar12[1] = uVar14;
    *(undefined8 *)((long)puVar12 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)puVar12 + 0x17) = bVar25;
    puVar12[3] = (ulong)unaff_x22;
    *(byte *)(puVar12 + 4) = (byte)uVar23;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_10abcfba4;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = puVar12;
code_r0x00010abcfba4:
    puVar12 = param_3;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar23 = puVar20[3];
    bVar7 = (byte)puVar20[4] < (byte)puVar10[4];
    if (puVar10[3] != uVar23) {
      bVar7 = uVar23 < puVar10[3];
    }
    bVar8 = (byte)puVar12[4] < (byte)puVar20[4];
    if (uVar23 != puVar12[3]) {
      bVar8 = puVar12[3] < uVar23;
    }
    if (bVar7) {
      param_3 = puVar12;
      if (!bVar8) {
        FUN_10abcfacc(puVar10,puVar20);
        puVar10 = puVar20;
        puVar19 = puVar12;
        bVar7 = (byte)puVar12[4] < (byte)puVar20[4];
        if (puVar20[3] != puVar12[3]) {
          bVar7 = puVar12[3] < puVar20[3];
        }
        goto joined_r0x00010abcfc94;
      }
    }
    else {
      if (!bVar8) {
        return;
      }
      FUN_10abcfacc(puVar20,puVar12);
      puVar19 = puVar20;
      param_3 = puVar12;
      bVar7 = (byte)puVar20[4] < (byte)puVar10[4];
      if (puVar10[3] != puVar20[3]) {
        bVar7 = puVar20[3] < puVar10[3];
      }
joined_r0x00010abcfc94:
      puVar12 = puVar19;
      if (!bVar7) {
        return;
      }
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(code **)((long)register0x00000008 + -8);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    param_1 = puVar10;
  } while( true );
}



/* Entry: 10abcfacc; end: 10abcfba3;  */

void FUN_10abcfacc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar11;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar12;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf);
    bVar2 = *(byte *)((long)param_1 + 0x17);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar11 = param_1[3];
    bVar3 = *(byte *)(param_1 + 4);
    unaff_x23 = (ulong)bVar3;
    uVar9 = param_2[2];
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[2] = uVar9;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    puVar7 = param_2;
    puVar8 = param_3;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_2;
      __ZdlPv();
      puVar8 = param_3;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *param_2 = uVar1;
    param_2[1] = uVar9;
    *(undefined8 *)((long)param_2 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)param_2 + 0x17) = bVar2;
    param_2[3] = uVar11;
    *(byte *)(param_2 + 4) = bVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar2;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_10abcfba4;
    uVar10 = puVar7[3];
    bVar5 = *(byte *)(puVar7 + 4) < *(byte *)(param_1 + 4);
    if (param_1[3] != uVar10) {
      bVar5 = uVar10 < (ulong)param_1[3];
    }
    bVar6 = *(byte *)(puVar8 + 4) < *(byte *)(puVar7 + 4);
    if (uVar10 != puVar8[3]) {
      bVar6 = (ulong)puVar8[3] < uVar10;
    }
    if (bVar5) {
      param_3 = puVar8;
      if (!bVar6) {
        FUN_10abcfacc(param_1,puVar7);
        param_1 = puVar7;
        puVar4 = puVar8;
        bVar5 = *(byte *)(puVar8 + 4) < *(byte *)(puVar7 + 4);
        if (puVar7[3] != puVar8[3]) {
          bVar5 = (ulong)puVar8[3] < (ulong)puVar7[3];
        }
        goto joined_r0x00010abcfc94;
      }
    }
    else {
      if (!bVar6) {
        return;
      }
      FUN_10abcfacc(puVar7,puVar8);
      puVar4 = puVar7;
      param_3 = puVar8;
      bVar5 = *(byte *)(puVar7 + 4) < *(byte *)(param_1 + 4);
      if (param_1[3] != puVar7[3]) {
        bVar5 = (ulong)puVar7[3] < (ulong)param_1[3];
      }
joined_r0x00010abcfc94:
      puVar8 = puVar4;
      if (!bVar5) {
        return;
      }
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar8;
  } while( true );
}



/* Entry: 10abcfba4; end: 10abcfcbf;  */

void FUN_10abcfba4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  
  do {
    puVar6 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar8 = param_2[3];
    bVar4 = *(byte *)(param_2 + 4) < *(byte *)(param_1 + 4);
    if (param_1[3] != uVar8) {
      bVar4 = uVar8 < (ulong)param_1[3];
    }
    bVar5 = *(byte *)(puVar6 + 4) < *(byte *)(param_2 + 4);
    if (uVar8 != puVar6[3]) {
      bVar5 = (ulong)puVar6[3] < uVar8;
    }
    if (bVar4) {
      param_3 = puVar6;
      if (!bVar5) {
        FUN_10abcfacc(param_1,param_2);
        param_1 = param_2;
        puVar3 = puVar6;
        bVar4 = *(byte *)(puVar6 + 4) < *(byte *)(param_2 + 4);
        if (param_2[3] != puVar6[3]) {
          bVar4 = (ulong)puVar6[3] < (ulong)param_2[3];
        }
        goto joined_r0x00010abcfc94;
      }
    }
    else {
      if (!bVar5) {
        return;
      }
      FUN_10abcfacc(param_2,puVar6);
      puVar3 = param_2;
      param_3 = puVar6;
      bVar4 = *(byte *)(param_2 + 4) < *(byte *)(param_1 + 4);
      if (param_1[3] != param_2[3]) {
        bVar4 = (ulong)param_2[3] < (ulong)param_1[3];
      }
joined_r0x00010abcfc94:
      puVar6 = puVar3;
      if (!bVar4) {
        return;
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf);
    bVar1 = *(byte *)((long)param_1 + 0x17);
    unaff_x21 = (ulong)bVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x22 = param_1[3];
    bVar2 = *(byte *)(param_1 + 4);
    unaff_x23 = (ulong)bVar2;
    uVar7 = puVar6[2];
    uVar9 = *puVar6;
    param_1[1] = puVar6[1];
    *param_1 = uVar9;
    param_1[2] = uVar7;
    *(undefined1 *)((long)puVar6 + 0x17) = 0;
    *(undefined1 *)puVar6 = 0;
    param_1[3] = puVar6[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(puVar6 + 4);
    param_2 = puVar6;
    if (*(char *)((long)puVar6 + 0x17) < '\0') {
      param_1 = (undefined8 *)*puVar6;
      __ZdlPv();
    }
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *puVar6 = unaff_x20;
    puVar6[1] = uVar7;
    *(undefined8 *)((long)puVar6 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)puVar6 + 0x17) = bVar1;
    puVar6[3] = unaff_x22;
    *(byte *)(puVar6 + 4) = bVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_10abcfba4;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = puVar6;
  } while( true );
}



/* Entry: 10abcfcc0; end: 10abcfeb3;  */

void FUN_10abcfcc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  
  puVar9 = param_3;
  FUN_10abcfba4();
  bVar5 = *(byte *)(param_4 + 0x20) < *(byte *)(param_3 + 4);
  if (param_3[3] != *(ulong *)(param_4 + 0x18)) {
    bVar5 = *(ulong *)(param_4 + 0x18) < (ulong)param_3[3];
  }
  if (bVar5) {
    FUN_10abcfacc(param_3,param_4);
    bVar5 = *(byte *)(param_3 + 4) < *(byte *)(param_2 + 4);
    if (param_2[3] != param_3[3]) {
      bVar5 = (ulong)param_3[3] < (ulong)param_2[3];
    }
    if (bVar5) {
      FUN_10abcfacc(param_2,param_3);
      bVar5 = *(byte *)(param_2 + 4) < *(byte *)(param_1 + 4);
      if (param_1[3] != param_2[3]) {
        bVar5 = (ulong)param_2[3] < (ulong)param_1[3];
      }
      if (bVar5) {
        FUN_10abcfacc(param_1,param_2);
      }
    }
  }
  bVar5 = *(byte *)(param_5 + 0x20) < *(byte *)(param_4 + 0x20);
  if (*(ulong *)(param_4 + 0x18) != *(ulong *)(param_5 + 0x18)) {
    bVar5 = *(ulong *)(param_5 + 0x18) < *(ulong *)(param_4 + 0x18);
  }
  if (bVar5) {
    FUN_10abcfacc(param_4,param_5);
    bVar5 = *(byte *)(param_4 + 0x20) < *(byte *)(param_3 + 4);
    if (param_3[3] != *(ulong *)(param_4 + 0x18)) {
      bVar5 = *(ulong *)(param_4 + 0x18) < (ulong)param_3[3];
    }
    if (bVar5) {
      FUN_10abcfacc(param_3,param_4);
      bVar5 = *(byte *)(param_3 + 4) < *(byte *)(param_2 + 4);
      if (param_2[3] != param_3[3]) {
        bVar5 = (ulong)param_3[3] < (ulong)param_2[3];
      }
      if (bVar5) {
        FUN_10abcfacc(param_2,param_3);
        bVar5 = *(byte *)(param_2 + 4) < *(byte *)(param_1 + 4);
        if (param_1[3] != param_2[3]) {
          bVar5 = (ulong)param_2[3] < (ulong)param_1[3];
        }
        if (bVar5) {
          do {
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar1 = *param_1;
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[1];
            *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0xf)
            ;
            bVar2 = *(byte *)((long)param_1 + 0x17);
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            uVar12 = param_1[3];
            bVar3 = *(byte *)(param_1 + 4);
            unaff_x23 = (ulong)bVar3;
            uVar10 = param_2[2];
            uVar13 = *param_2;
            param_1[1] = param_2[1];
            *param_1 = uVar13;
            param_1[2] = uVar10;
            *(undefined1 *)((long)param_2 + 0x17) = 0;
            *(undefined1 *)param_2 = 0;
            param_1[3] = param_2[3];
            *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
            puVar7 = param_2;
            puVar8 = puVar9;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              param_1 = (undefined8 *)*param_2;
              __ZdlPv();
              puVar8 = puVar9;
            }
            uVar10 = *(undefined8 *)((long)register0x00000008 + -0x58);
            *param_2 = uVar1;
            param_2[1] = uVar10;
            *(undefined8 *)((long)param_2 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x51)
            ;
            *(byte *)((long)param_2 + 0x17) = bVar2;
            param_2[3] = uVar12;
            *(byte *)(param_2 + 4) = bVar3;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x48)) {
              return;
            }
            ___stack_chk_fail();
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar12;
            *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar2;
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
            *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(code **)((long)register0x00000008 + -0x68) = FUN_10abcfba4;
            uVar11 = puVar7[3];
            bVar5 = *(byte *)(puVar7 + 4) < *(byte *)(param_1 + 4);
            if (param_1[3] != uVar11) {
              bVar5 = uVar11 < (ulong)param_1[3];
            }
            bVar6 = *(byte *)(puVar8 + 4) < *(byte *)(puVar7 + 4);
            if (uVar11 != puVar8[3]) {
              bVar6 = (ulong)puVar8[3] < uVar11;
            }
            if (bVar5) {
              puVar9 = puVar8;
              if (!bVar6) {
                FUN_10abcfacc(param_1,puVar7);
                param_1 = puVar7;
                puVar4 = puVar8;
                bVar5 = *(byte *)(puVar8 + 4) < *(byte *)(puVar7 + 4);
                if (puVar7[3] != puVar8[3]) {
                  bVar5 = (ulong)puVar8[3] < (ulong)puVar7[3];
                }
                goto joined_r0x00010abcfc94;
              }
            }
            else {
              if (!bVar6) {
                return;
              }
              FUN_10abcfacc(puVar7,puVar8);
              puVar4 = puVar7;
              puVar9 = puVar8;
              bVar5 = *(byte *)(puVar7 + 4) < *(byte *)(param_1 + 4);
              if (param_1[3] != puVar7[3]) {
                bVar5 = (ulong)puVar7[3] < (ulong)param_1[3];
              }
joined_r0x00010abcfc94:
              puVar8 = puVar4;
              if (!bVar5) {
                return;
              }
            }
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
            unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
            unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
            param_2 = puVar8;
          } while( true );
        }
      }
    }
  }
  return;
}



/* Entry: 10abcfeb4; end: 10abd01eb;  */

void FUN_10abcfeb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) goto LAB_10abd019c;
    if (uVar7 != 2) {
LAB_10abcff9c:
      FUN_10abcfba4(param_1,param_1 + 5,param_1 + 10);
      if (param_1 + 0xf != param_2) {
        lVar10 = 0;
        iVar11 = 0;
        puVar6 = param_1 + 10;
        puVar9 = param_1 + 0xf;
        do {
          uVar7 = puVar9[3];
          bVar2 = *(byte *)(puVar9 + 4);
          bVar5 = bVar2 < *(byte *)(puVar6 + 4);
          if (puVar6[3] != uVar7) {
            bVar5 = uVar7 < (ulong)puVar6[3];
          }
          if (bVar5) {
            uStack_80 = *puVar9;
            uStack_78 = (undefined7)puVar9[1];
            uStack_71 = (undefined1)*(undefined8 *)((long)puVar9 + 0xf);
            uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar9 + 0xf) >> 8);
            uVar3 = *(undefined1 *)((long)puVar9 + 0x17);
            puVar9[1] = 0;
            puVar9[2] = 0;
            *puVar9 = 0;
            lVar4 = lVar10;
            do {
              lVar12 = lVar4;
              if (*(char *)((long)param_1 + lVar12 + 0x8f) < '\0') {
                __ZdlPv(*(undefined8 *)((long)param_1 + lVar12 + 0x78));
              }
              *(undefined8 *)((long)param_1 + lVar12 + 0x80) =
                   *(undefined8 *)((long)param_1 + lVar12 + 0x58);
              *(undefined8 *)((long)param_1 + lVar12 + 0x78) =
                   *(undefined8 *)((long)param_1 + lVar12 + 0x50);
              *(undefined1 *)((long)param_1 + lVar12 + 0x67) = 0;
              *(undefined1 *)((long)param_1 + lVar12 + 0x50) = 0;
              *(undefined8 *)((long)param_1 + lVar12 + 0x88) =
                   *(undefined8 *)((long)param_1 + lVar12 + 0x60);
              *(undefined8 *)((long)param_1 + lVar12 + 0x90) =
                   *(undefined8 *)((long)param_1 + lVar12 + 0x68);
              *(undefined1 *)((long)param_1 + lVar12 + 0x98) =
                   *(undefined1 *)((long)param_1 + lVar12 + 0x70);
              puVar6 = param_1;
              if (lVar12 == -0x50) goto LAB_10abd008c;
              uVar8 = *(ulong *)((long)param_1 + lVar12 + 0x40);
              bVar5 = bVar2 < *(byte *)((long)param_1 + lVar12 + 0x48);
              if (uVar8 != uVar7) {
                bVar5 = uVar7 < uVar8;
              }
              lVar4 = lVar12 + -0x28;
            } while (bVar5);
            puVar6 = (undefined8 *)((long)param_1 + lVar12 + 0x50);
LAB_10abd008c:
            if (*(char *)((long)puVar6 + 0x17) < '\0') {
              __ZdlPv(*puVar6);
            }
            *puVar6 = uStack_80;
            puVar6[1] = CONCAT17(uStack_71,uStack_78);
            *(ulong *)((long)puVar6 + 0xf) = CONCAT71(uStack_70,uStack_71);
            *(undefined1 *)((long)puVar6 + 0x17) = uVar3;
            puVar6[3] = uVar7;
            *(byte *)(puVar6 + 4) = bVar2;
            iVar11 = iVar11 + 1;
            if (iVar11 == 8) {
              puVar6 = (undefined8 *)(ulong)(puVar9 + 5 == param_2);
              goto LAB_10abd01a0;
            }
          }
          puVar1 = puVar9 + 5;
          lVar10 = lVar10 + 0x28;
          puVar6 = puVar9;
          puVar9 = puVar1;
        } while (puVar1 != param_2);
      }
      goto LAB_10abd019c;
    }
    bVar5 = *(byte *)(param_2 + -1) < *(byte *)(param_1 + 4);
    if (param_1[3] != param_2[-2]) {
      bVar5 = (ulong)param_2[-2] < (ulong)param_1[3];
    }
    if (!bVar5) goto LAB_10abd019c;
    puVar6 = param_2 + -5;
  }
  else {
    if (uVar7 == 3) {
      FUN_10abcfba4(param_1,param_1 + 5,param_2 + -5);
      goto LAB_10abd019c;
    }
    if (uVar7 != 4) {
      if (uVar7 == 5) {
        FUN_10abcfcc0(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,param_2 + -5);
        goto LAB_10abd019c;
      }
      goto LAB_10abcff9c;
    }
    FUN_10abcfba4(param_1,param_1 + 5,param_1 + 10);
    bVar5 = *(byte *)(param_2 + -1) < *(byte *)(param_1 + 0xe);
    if (param_1[0xd] != param_2[-2]) {
      bVar5 = (ulong)param_2[-2] < (ulong)param_1[0xd];
    }
    if (!bVar5) goto LAB_10abd019c;
    FUN_10abcfacc(param_1 + 10,param_2 + -5);
    bVar5 = *(byte *)(param_1 + 0xe) < *(byte *)(param_1 + 9);
    if (param_1[8] != param_1[0xd]) {
      bVar5 = (ulong)param_1[0xd] < (ulong)param_1[8];
    }
    if (!bVar5) goto LAB_10abd019c;
    FUN_10abcfacc(param_1 + 5,param_1 + 10);
    bVar5 = *(byte *)(param_1 + 9) < *(byte *)(param_1 + 4);
    if (param_1[3] != param_1[8]) {
      bVar5 = (ulong)param_1[8] < (ulong)param_1[3];
    }
    if (!bVar5) goto LAB_10abd019c;
    puVar6 = param_1 + 5;
  }
  FUN_10abcfacc(param_1,puVar6);
LAB_10abd019c:
  puVar6 = (undefined8 *)0x1;
LAB_10abd01a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_88 = FUN_10abd01ec;
    puVar6 = *(undefined8 **)*puVar6;
    puStack_a0 = param_2;
    puStack_98 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    FUN_10a185264(&uStack_b8,0x400);
    FUN_10ab96d04(&uStack_b8,*puVar6);
    if (lRam00000001137ec588 < 0) {
      __ZdlPv(uRam00000001137ec578);
    }
    uRam00000001137ec580 = uStack_b0;
    uRam00000001137ec578 = uStack_b8;
    lRam00000001137ec588 = uStack_a8;
    return;
  }
  return;
}



/* Entry: 10abd01ec; end: 10abd0277;  */

void FUN_10abd01ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  FUN_10a185264(&uStack_38,0x400);
  FUN_10ab96d04(&uStack_38,*puVar1);
  if (lRam00000001137ec588 < 0) {
    __ZdlPv(uRam00000001137ec578);
  }
  uRam00000001137ec580 = uStack_30;
  uRam00000001137ec578 = uStack_38;
  lRam00000001137ec588 = uStack_28;
  return;
}



/* Entry: 10abd0278; end: 10abd02b3;  */

long FUN_10abd0278(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  FUN_10abd02b4((int)lVar1 == 0,param_1,*(undefined8 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 10abd02b4; end: 10abd0443;  */

void FUN_10abd02b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar4 = param_1;
  FUN_10ad4bc5c();
  if ((uint)uVar4 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f698396,0x45);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68,param_3,param_4,uVar4);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar3 = (int)ppuVar5;
    if (((int)param_1 != 0) && (__ZSt19uncaught_exceptionsv(), iVar3 == 0)) {
      if (((uint)uVar4 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10abd0410);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10abd0444; end: 10abd047f;  */

long FUN_10abd0444(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  FUN_10abd0480((int)lVar1 == 0,param_1,*(undefined8 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 10abd0480; end: 10abd060f;  */

void FUN_10abd0480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar4 = param_1;
  FUN_10ad4bc5c();
  if ((uint)uVar4 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    FUN_10a0ee900(&pppuStack_80,&UNK_10f6983dc,0x35);
    uStack_60 = uStack_78;
    pppuStack_68 = pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_60 = (ulong)bStack_69;
      pppuStack_68 = &pppuStack_80;
    }
    FUN_10a304b28(&pppuStack_58,&pppuStack_68,param_3,param_4,uVar4);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar3 = (int)ppuVar5;
    if (((int)param_1 != 0) && (__ZSt19uncaught_exceptionsv(), iVar3 == 0)) {
      if (((uint)uVar4 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10abd05dc);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10abd0610; end: 10abd063f;  */

void FUN_10abd0610(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  FUN_10abd0640();
                    /* WARNING: Could not recover jumptable at 0x00010abd063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10abd0640; end: 10abd072f;  */

void FUN_10abd0640(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abd0704);
    (*pcVar4)();
  }
  lVar6 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  lStack_28 = lVar6;
  FUN_10abd08e8();
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10abd06ac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10abd06ac:
      if (*(char *)(param_1 + 0x50) == '\x01') {
        (*(code *)**(undefined8 **)(param_1 + 0x10))((undefined8 *)(param_1 + 0x10));
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10abd0730; end: 10abd08e7;  */

undefined8 * FUN_10abd0730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c50918;
  if (param_1[0x1f] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    (**(code **)param_1[0x16])();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd08e8; end: 10abd09df;  */

void FUN_10abd08e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  (*(code *)param_1[1])();
  _glFlush();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar3 = param_1 + 2;
  param_1[1] = &UNK_1053a6a3c;
  (**(code **)*puVar3)(puVar3);
  *puVar3 = &PTR_DAT_110ae9180;
  return;
}



/* Entry: 10abd09e0; end: 10abd0a2f;  */

undefined1  [16] FUN_10abd09e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)puVar1 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = puVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  *puVar1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(puVar1 + 1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10abd0a30; end: 10abd0ad3;  */

undefined1  [16] FUN_10abd0a30(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar1 = (long)param_1 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  *param_1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10abd0ad4; end: 10abd0b1b;  */

void FUN_10abd0ad4(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (*(ulong *)(param_1 + 0x20) <= param_3 + (ulong)param_4) {
    uVar1 = param_3 + (ulong)param_4;
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10abd0b1c; end: 10abd0b6b;  */

long FUN_10abd0b1c(long param_1)

{
  if (*(long *)(param_1 + 0x7f0) != 0) {
    *(long *)(param_1 + 0x7f8) = *(long *)(param_1 + 0x7f0);
    __ZdlPv();
  }
  FUN_10a5bcdcc(param_1 + 0x7c8);
  func_0x00010a5bcd0c(param_1 + 0x7a0);
  FUN_10abd0b6c(param_1 + 0x5c0);
  FUN_10a5e8b68(param_1 + 8);
  return param_1;
}



/* Entry: 10abd0b6c; end: 10abd0c6f;  */

long FUN_10abd0b6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x00010a5dfbd8();
  FUN_10abd0c70(param_1 + 0x1c0);
  lStack_38 = param_1 + 0x1a8;
  FUN_10a5e7e5c(&lStack_38);
  func_0x00010abd0cd8(param_1 + 400);
  lStack_38 = param_1 + 0x178;
  func_0x00010a5e8ab8(&lStack_38);
  if (*(long *)(param_1 + 0x160) != 0) {
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
    __ZdlPv();
  }
  lVar2 = 0xa8;
  do {
    if (*(long *)(param_1 + lVar2) != 0) {
      *(undefined8 *)(param_1 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x160);
  FUN_10a5e8ccc(param_1 + 0x80);
  lStack_38 = param_1 + 0x60;
  func_0x00010a5e8a48(&lStack_38);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x78;
        func_0x00010a5e815c(lVar3);
      } while (lVar3 != lVar2);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar2;
    __ZdlPv(lVar1);
  }
  FUN_10abd0c70(param_1 + 0x18);
  func_0x00010abd0cd8(param_1);
  return param_1;
}



/* Entry: 10abd0c70; end: 10abd0d3f;  */

void FUN_10abd0c70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0xf0;
        FUN_10a5e59f4(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10abd0d40; end: 10abd0d67;  */

void FUN_10abd0d40(void)

{
  undefined *puVar1;
  long *plVar2;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar2 = *(long **)(puVar1 + 0x40);
  FUN_10abd0d98();
                    /* WARNING: Could not recover jumptable at 0x00010abd0d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10abd0d68; end: 10abd0d97;  */

void FUN_10abd0d68(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  FUN_10abd0d98();
                    /* WARNING: Could not recover jumptable at 0x00010abd0d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10abd0d98; end: 10abd0f9b;  */

void FUN_10abd0d98(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10abd0f58);
    (*pcVar3)();
  }
  lVar6 = param_1[7];
  param_1[7] = 0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)param_1[1];
  lStack_58 = lVar6;
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 == (long *)0x0)) ||
     (lVar7 = *param_1, lStack_40 = lVar7, lVar7 == 0)) {
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    plVar4 = plStack_38;
  }
  else {
    plVar5 = (long *)param_1[3];
    if ((plVar5 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar5, plVar5 == (long *)0x0)) {
      uStack_68 = 0;
      plStack_60 = (long *)0x0;
      plVar4 = plStack_38;
    }
    else {
      plStack_50 = (long *)param_1[2];
      if (plStack_50 == (long *)0x0) {
        uStack_68 = 0;
        plStack_60 = (long *)0x0;
      }
      else {
        (**(code **)(*plStack_50 + 0x10))(&uStack_68,plStack_50,lVar7 + 0x20,(char)param_1[4]);
      }
      plVar4 = plVar5 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plStack_38;
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar4 = plStack_38;
      }
    }
  }
  plStack_38 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x00010abd12a8(lVar6,&uStack_68);
  plVar4 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar5 = plStack_60 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if ((char)param_1[6] == '\x01') {
    if (param_1[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  lVar6 = lStack_58;
  lStack_58 = 0;
  if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_58), lStack_58 != 0)) {
    func_0x0001092b4274(&lStack_58);
  }
  return;
}



/* Entry: 10abd0f9c; end: 10abd13a3;  */

undefined8 * FUN_10abd0f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c50a10;
  if (param_1[0x1d] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (param_1[0x19] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1[0x17] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = &PTR_DAT_110c50a60;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10abd89cc(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd13a4; end: 10abd186f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10abd13a4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar6 = (undefined8 *)0x120;
  __Znwm();
  *puVar6 = FUN_10abe09e8;
  puVar6[1] = FUN_10abe0cec;
  FUN_10abd3578(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  puVar6[10] = param_3[1];
  puVar6[9] = uVar11;
  *param_3 = 0;
  param_3[1] = 0;
  puVar6[0xc] = uVar13;
  puVar6[0xb] = uVar12;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)(puVar6 + 0xd) = *(undefined1 *)(param_3 + 4);
  uVar12 = param_3[6];
  uVar11 = param_3[5];
  param_3[5] = 0;
  param_3[6] = 0;
  puVar6[0x12] = param_3[9];
  uVar14 = param_3[8];
  uVar13 = param_3[7];
  puVar6[0xf] = uVar12;
  puVar6[0xe] = uVar11;
  puVar6[0x11] = uVar14;
  puVar6[0x10] = uVar13;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  FUN_10a195718(puVar6 + 0x13,param_3 + 10);
  puVar6[0x17] = param_3[0xe];
  if (*(char *)((long)param_3 + 0x8f) < '\0') {
    func_0x000107c3192c(puVar6 + 0x18,param_3[0xf],param_3[0x10]);
  }
  else {
    uVar11 = param_3[0xf];
    puVar6[0x19] = param_3[0x10];
    puVar6[0x18] = uVar11;
    puVar6[0x1a] = param_3[0x11];
  }
  uVar11 = param_3[0x12];
  uVar13 = param_3[0x15];
  uVar12 = param_3[0x14];
  puVar6[0x1c] = param_3[0x13];
  puVar6[0x1b] = uVar11;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  puVar6[0x1e] = uVar13;
  puVar6[0x1d] = uVar12;
  *(undefined4 *)(puVar6 + 0x1f) = *(undefined4 *)(param_3 + 0x16);
  puVar6[0x20] = param_2;
  *(undefined1 *)(puVar6 + 0x21) = 0;
  *(undefined1 *)(puVar6 + 0x23) = 0;
  alStack_50[0] = 0;
  FUN_109d18960(puVar6 + 2,param_2,alStack_50);
  if (alStack_50[0] != 0) {
    func_0x0001092af97c(alStack_50);
LAB_10abd1728:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10abd172c);
    (*pcVar5)();
  }
  puStack_40 = puVar6;
  if ((*(byte *)(puVar6 + 0x21) & 1) == 0) {
    puStack_38 = (undefined8 *)puVar6[0x20];
    alStack_50[1] = 0;
    (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
    __ZNSt13exception_ptrD1Ev(alStack_50);
    return;
  }
  __ZNSt13exception_ptrD1Ev(alStack_50);
  FUN_10abd18b0(puVar6 + 0x22,puVar6 + 9);
  puVar6[0x20] = puVar6[0x22];
  plVar7 = (long *)(puVar6[0x22] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x20] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x23) = 1;
    lVar8 = puVar6[0x20];
    plVar7 = (long *)(lVar8 + 0x10);
    puStack_38 = (undefined8 *)puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          alStack_50[1] = 0;
          func_0x000109d1b588(lVar8 + 0x18,alStack_50 + 1);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar8 = puVar6[0x20];
  if (((uint)*(undefined8 *)(puVar6[0x20] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar8 + 0x90);
    goto LAB_10abd1728;
  }
  if ((*(byte *)(lVar8 + 0xa8) & 1) == 0) goto LAB_10abd1728;
  FUN_10abd1870(puVar6 + 2,lVar8 + 0x98);
  plVar7 = (long *)puVar6[0x20];
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar7 = (long *)puVar6[0x22];
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar7 = (long *)puVar6[0x1c];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(char *)((long)puVar6 + 0xd7) < '\0') {
    __ZdlPv(puVar6[0x18]);
  }
  plVar7 = (long *)puVar6[0x16];
  if (plVar7 == puVar6 + 0x13) {
    lVar8 = 0x20;
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_10abd169c;
    lVar8 = 0x28;
  }
  (**(code **)(*plVar7 + lVar8))();
LAB_10abd169c:
  if (*(char *)((long)puVar6 + 0x97) < '\0') {
    __ZdlPv(puVar6[0x10]);
  }
  if (puVar6[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar6[0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar6[10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(puVar6 + 2);
  __ZdlPv(puVar6);
  return;
}



/* Entry: 10abd1870; end: 10abd18af;  */

void FUN_10abd1870(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  func_0x00010abd12a8(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10abd18b0; end: 10abd3577;  */

void FUN_10abd18b0(long *param_1,long *****param_2)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  undefined1 uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long ******pppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  long lVar12;
  long ******pppppplVar13;
  long *****extraout_x8;
  long ****pppplVar14;
  long *****ppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long ******pppppplStack_130;
  long ******pppppplStack_128;
  long ****pppplStack_120;
  long ******pppppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long *****ppppplStack_f0;
  long ******pppppplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  undefined4 uStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar8 = (long ******)0x208;
  __Znwm();
  *pppppplVar8 = (long *****)FUN_10abdfb5c;
  pppppplVar8[1] = (long *****)FUN_10abe062c;
  pppppplVar8[0x3f] = param_2;
  FUN_10abd3578(pppppplVar8 + 2);
  ppppplVar9 = pppppplVar8[7];
  if (ppppplVar9 != (long *****)0x0) {
    ppppplVar10 = ppppplVar9 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar7) {
        *ppppplVar10 = (long ****)((long)*ppppplVar10 + 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = (long)ppppplVar9;
  ppppplVar9 = (long *****)param_2[1];
  if (ppppplVar9 == (long *****)0x0) {
LAB_10abd1a58:
    FUN_10abd3618(pppppplVar8 + 2);
LAB_10abd1ac8:
    func_0x000109d1a1d0(pppppplVar8 + 2);
    __ZdlPv(pppppplVar8);
    goto LAB_10abd1ad8;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  pppppplVar8[0x34] = ppppplVar9;
  if (ppppplVar9 == (long *****)0x0) goto LAB_10abd1a58;
  ppppplVar10 = (long *****)*param_2;
  pppppplVar8[0x33] = ppppplVar10;
  if (ppppplVar10 == (long *****)0x0) {
    FUN_10abd3618(pppppplVar8 + 2);
    ppppplVar10 = ppppplVar9 + 1;
    do {
      pppplVar11 = *ppppplVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar7) {
        *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10abd1aac:
    if (pppplVar11 == (long ****)0x0) {
      (*(code *)(*ppppplVar9)[2])(ppppplVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
    }
    goto LAB_10abd1ac8;
  }
  ppppplVar9 = (long *****)param_2[3];
  if (ppppplVar9 == (long *****)0x0) {
LAB_10abd1a64:
    FUN_10abd3618(pppppplVar8 + 2);
LAB_10abd1a6c:
    ppppplVar9 = pppppplVar8[0x34];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_10abd1aac;
    }
    goto LAB_10abd1ac8;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  pppppplVar8[0x36] = ppppplVar9;
  if (ppppplVar9 == (long *****)0x0) goto LAB_10abd1a64;
  ppppplVar10 = (long *****)param_2[2];
  pppppplVar8[0x35] = ppppplVar10;
  if (ppppplVar10 == (long *****)0x0) {
    FUN_10abd3618(pppppplVar8 + 2);
    ppppplVar10 = ppppplVar9 + 1;
    do {
      pppplVar11 = *ppppplVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar7) {
        *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppplVar11 == (long ****)0x0) {
      (*(code *)(*ppppplVar9)[2])(ppppplVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
    }
    goto LAB_10abd1a6c;
  }
  ppppplVar9 = (long *****)param_2[6];
  if (ppppplVar9 == (long *****)0x0) {
LAB_10abd1b10:
    FUN_10abd3618(pppppplVar8 + 2);
LAB_10abd1b18:
    ppppplVar9 = pppppplVar8[0x36];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar9 = pppppplVar8[0x34];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_10abd1aac;
    }
    goto LAB_10abd1ac8;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  pppppplVar8[0x38] = ppppplVar9;
  if (ppppplVar9 == (long *****)0x0) goto LAB_10abd1b10;
  ppppplVar18 = (long *****)param_2[5];
  pppppplVar8[0x37] = ppppplVar18;
  if (ppppplVar18 == (long *****)0x0) {
    FUN_10abd3618(pppppplVar8 + 2);
    ppppplVar10 = ppppplVar9 + 1;
    do {
      pppplVar11 = *ppppplVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar7) {
        *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppplVar11 == (long ****)0x0) {
      (*(code *)(*ppppplVar9)[2])(ppppplVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
    }
    goto LAB_10abd1b18;
  }
  (*(code *)(*ppppplVar10)[4])
            (pppppplVar8 + 0x39,ppppplVar10,param_2 + 7,*(undefined4 *)(param_2 + 0x16));
  ppppplVar9 = pppppplVar8[0x39];
  (*(code *)(*ppppplVar9)[2])();
  pppppplVar1 = pppppplVar8 + 9;
  pppppplVar2 = pppppplVar8 + 0x19;
  pppppplVar13 = pppppplVar8 + 0x21;
  if (((ulong)ppppplVar9 & 1) == 0) {
    ppppplVar9 = (long *****)0x30;
    __Znwm();
    ppppplVar10 = ppppplVar9 + 1;
    *ppppplVar10 = (long ****)0x0;
    ppppplVar9[2] = (long ****)0x0;
    *ppppplVar9 = (long ****)&PTR_DAT_110995158;
    pppplVar11 = param_2[7];
    ppppplVar9[4] = param_2[8];
    ppppplVar9[3] = pppplVar11;
    ppppplVar9[5] = param_2[9];
    param_2[7] = (long ****)0x0;
    param_2[8] = (long ****)0x0;
    param_2[9] = (long ****)0x0;
    pppppplVar8[0x3b] = ppppplVar9 + 3;
    pppppplVar8[0x3c] = ppppplVar9;
    ppppplVar18 = (long *****)param_2[0x12];
    func_0x00010abd1340(pppppplVar2,param_2 + 10);
    pppppplVar8[0x1d] = (long *****)param_2[0xe];
    if (*(char *)((long)param_2 + 0x8f) < '\0') {
      func_0x000107c3192c(pppppplVar8 + 0x1e,param_2[0xf],param_2[0x10]);
    }
    else {
      ppppplVar15 = (long *****)param_2[0xf];
      pppppplVar8[0x1f] = (long *****)param_2[0x10];
      pppppplVar8[0x1e] = ppppplVar15;
      pppppplVar8[0x20] = (long *****)param_2[0x11];
    }
    pppplVar11 = param_2[0x13];
    ppppplVar15 = (long *****)param_2[0x12];
    pppppplVar8[0x22] = (long *****)param_2[0x13];
    *pppppplVar13 = ppppplVar15;
    if (pppplVar11 != (long ****)0x0) {
      pppplVar11 = pppplVar11 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar11,0x10);
        if (bVar7) {
          *pppplVar11 = (long ***)((long)*pppplVar11 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppplVar17 = pppppplVar8 + 0x23;
    ppppplVar15 = (long *****)param_2[0x14];
    pppppplVar8[0x24] = (long *****)param_2[0x15];
    *pppppplVar17 = ppppplVar15;
    *(undefined4 *)(pppppplVar8 + 0x25) = *(undefined4 *)(param_2 + 0x16);
    pppppplVar8[0x26] = ppppplVar9 + 3;
    pppppplVar8[0x27] = ppppplVar9;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar7) {
        *ppppplVar10 = (long ****)((long)*ppppplVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    pppplVar11 = ppppplVar18[2];
    pppppplVar8[0x30] = (long *****)0x0;
    pppppplVar8[0x31] = (long *****)0x0;
    if (pppplVar11 == (long ****)0x0) {
      FUN_10a195718(pppppplVar1,pppppplVar2);
      pppppplVar8[0xd] = pppppplVar8[0x1d];
      if (*(char *)((long)pppppplVar8 + 0x107) < '\0') {
        func_0x000107c3192c(pppppplVar8 + 0xe,pppppplVar8[0x1e],pppppplVar8[0x1f]);
      }
      else {
        pppppplVar8[0xf] = pppppplVar8[0x1f];
        pppppplVar8[0xe] = pppppplVar8[0x1e];
        pppppplVar8[0x10] = pppppplVar8[0x20];
      }
      pppppplVar8[0x12] = pppppplVar8[0x22];
      pppppplVar8[0x11] = *pppppplVar13;
      *pppppplVar13 = (long *****)0x0;
      pppppplVar8[0x22] = (long *****)0x0;
      pppppplVar8[0x14] = pppppplVar8[0x24];
      pppppplVar8[0x13] = *pppppplVar17;
      *(undefined4 *)(pppppplVar8 + 0x15) = *(undefined4 *)(pppppplVar8 + 0x25);
      pppppplVar8[0x17] = pppppplVar8[0x27];
      pppppplVar8[0x16] = pppppplVar8[0x26];
      pppppplVar8[0x26] = (long *****)0x0;
      pppppplVar8[0x27] = (long *****)0x0;
      ppppplVar9 = (long *****)0x148;
      __Znwm();
      ppppplVar9[2] = (long ****)0x0;
      ppppplVar9[1] = (long ****)0x200000006;
      *(undefined2 *)(ppppplVar9 + 3) = 4;
      ppppplVar9[5] = (long ****)0x0;
      ppppplVar9[4] = (long ****)0x0;
      ppppplVar9[7] = (long ****)0x0;
      ppppplVar9[6] = (long ****)0x0;
      ppppplVar9[9] = (long ****)0x0;
      ppppplVar9[8] = (long ****)0x0;
      ppppplVar9[0xb] = (long ****)0x0;
      ppppplVar9[10] = (long ****)0x0;
      ppppplVar9[0xd] = (long ****)0x0;
      ppppplVar9[0xc] = (long ****)0x0;
      ppppplVar9[0xf] = (long ****)0x0;
      ppppplVar9[0xe] = (long ****)0x0;
      ppppplVar9[0x10] = (long ****)0x0;
      ppppplVar9[0x11] = (long ****)(ppppplVar9 + 3);
      ppppplVar9[0x12] = (long ****)0x0;
      *(undefined1 *)(ppppplVar9 + 0x13) = 0;
      *(undefined1 *)(ppppplVar9 + 0x16) = 0;
      *ppppplVar9 = (long ****)&PTR_FUN_110c50af0;
      FUN_10abd3df4(ppppplVar9 + 0x17,pppppplVar1);
      ppppplVar9[0x28] = (long ****)0x0;
      ppppplVar10 = pppppplVar8[0x30];
      if (ppppplVar10 != (long *****)0x0) {
        ppppplVar15 = ppppplVar10 + 1;
        do {
          pppplVar11 = *ppppplVar15;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
          if (bVar7) {
            *ppppplVar15 = (long ****)((long)pppplVar11 - 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
          do {
            pppplVar11 = *ppppplVar15;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
            if (bVar7) {
              *ppppplVar15 = (long ****)((long)pppplVar11 - 1U);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
            (*(code *)(*ppppplVar10)[1])();
          }
        }
      }
      pppppplVar8[0x30] = ppppplVar9;
      if (pppppplVar8[0x31] != (long *****)0x0) {
        func_0x0001092b4274(pppppplVar8 + 0x31);
      }
      pppppplVar8[0x31] = ppppplVar9;
      pppppplVar8[0x2f] = ppppplVar9 + 0x17;
      ppppplVar9 = pppppplVar8[0x17];
      if (ppppplVar9 != (long *****)0x0) {
        ppppplVar10 = ppppplVar9 + 1;
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[2])(ppppplVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
        }
      }
      ppppplVar9 = pppppplVar8[0x12];
      if (ppppplVar9 != (long *****)0x0) {
        ppppplVar10 = ppppplVar9 + 1;
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[2])(ppppplVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
        }
      }
      if (*(char *)((long)pppppplVar8 + 0x87) < '\0') {
        __ZdlPv(pppppplVar8[0xe]);
      }
      pppppplVar16 = (long ******)pppppplVar8[0xc];
      if (pppppplVar16 == pppppplVar1) {
        lVar12 = 0x20;
LAB_10abd2044:
        (**(code **)((long)*pppppplVar16 + lVar12))();
      }
      else if (pppppplVar16 != (long ******)0x0) {
        lVar12 = 0x28;
        goto LAB_10abd2044;
      }
      pppppplVar8[0x32] = (long *****)FUN_10abd39f8;
    }
    else {
      *pppppplVar1 = (long *****)0x0;
      (*(code *)(*pppplVar11)[5])(pppplVar11,0,pppppplVar1);
      if (*pppppplVar1 != (long *****)0x0) {
        func_0x0001092af97c(pppppplVar1);
        goto LAB_10abd30f4;
      }
      FUN_10a195718(&pppppplStack_100,pppppplVar2);
      pppplStack_e0 = (long ****)pppppplVar8[0x1d];
      if (*(char *)((long)pppppplVar8 + 0x107) < '\0') {
        func_0x000107c3192c(&pppplStack_d8,pppppplVar8[0x1e],pppppplVar8[0x1f]);
      }
      else {
        pppplStack_d0 = (long ****)pppppplVar8[0x1f];
        pppplStack_d8 = (long ****)pppppplVar8[0x1e];
        pppplStack_c8 = (long ****)pppppplVar8[0x20];
      }
      pppplStack_b8 = (long ****)pppppplVar8[0x22];
      pppplStack_c0 = (long ****)*pppppplVar13;
      *pppppplVar13 = (long *****)0x0;
      pppppplVar8[0x22] = (long *****)0x0;
      pppplStack_a8 = (long ****)pppppplVar8[0x24];
      pppplStack_b0 = (long ****)*pppppplVar17;
      uStack_a0 = *(undefined4 *)(pppppplVar8 + 0x25);
      pppplStack_90 = (long ****)pppppplVar8[0x27];
      pppplStack_98 = (long ****)pppppplVar8[0x26];
      pppppplVar8[0x26] = (long *****)0x0;
      pppppplVar8[0x27] = (long *****)0x0;
      ppppplVar9 = (long *****)0x150;
      __Znwm();
      ppppplVar9[2] = (long ****)0x0;
      ppppplVar9[1] = (long ****)0x200000006;
      *(undefined2 *)(ppppplVar9 + 3) = 4;
      ppppplVar9[5] = (long ****)0x0;
      ppppplVar9[4] = (long ****)0x0;
      ppppplVar9[7] = (long ****)0x0;
      ppppplVar9[6] = (long ****)0x0;
      ppppplVar9[9] = (long ****)0x0;
      ppppplVar9[8] = (long ****)0x0;
      ppppplVar9[0xb] = (long ****)0x0;
      ppppplVar9[10] = (long ****)0x0;
      ppppplVar9[0xd] = (long ****)0x0;
      ppppplVar9[0xc] = (long ****)0x0;
      ppppplVar9[0xf] = (long ****)0x0;
      ppppplVar9[0xe] = (long ****)0x0;
      ppppplVar9[0x10] = (long ****)0x0;
      ppppplVar9[0x11] = (long ****)(ppppplVar9 + 3);
      ppppplVar9[0x12] = (long ****)0x0;
      *(undefined1 *)(ppppplVar9 + 0x13) = 0;
      *(undefined1 *)(ppppplVar9 + 0x16) = 0;
      *ppppplVar9 = (long ****)&PTR_FUN_110c50ab8;
      FUN_10abd3df4(ppppplVar9 + 0x17,&pppppplStack_100);
      ppppplVar9[0x28] = (long ****)0x0;
      ppppplVar9[0x29] = pppplVar11;
      ppppplVar10 = pppppplVar8[0x30];
      if (ppppplVar10 != (long *****)0x0) {
        ppppplVar15 = ppppplVar10 + 1;
        do {
          pppplVar11 = *ppppplVar15;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
          if (bVar7) {
            *ppppplVar15 = (long ****)((long)pppplVar11 - 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
          do {
            pppplVar11 = *ppppplVar15;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
            if (bVar7) {
              *ppppplVar15 = (long ****)((long)pppplVar11 - 1U);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
            (*(code *)(*ppppplVar10)[1])();
          }
        }
      }
      pppppplVar8[0x30] = ppppplVar9;
      if (pppppplVar8[0x31] != (long *****)0x0) {
        func_0x0001092b4274(pppppplVar8 + 0x31);
      }
      pppplVar11 = pppplStack_90;
      pppppplVar8[0x31] = ppppplVar9;
      pppppplVar8[0x2f] = ppppplVar9 + 0x17;
      if ((long *****)pppplStack_90 != (long *****)0x0) {
        ppppplVar9 = (long *****)(pppplStack_90 + 1);
        do {
          pppplVar14 = *ppppplVar9;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
          if (bVar7) {
            *ppppplVar9 = (long ****)((long)pppplVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar14 == (long ****)0x0) {
          (*(code *)(*pppplStack_90)[2])(pppplStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
        }
      }
      pppplVar11 = pppplStack_b8;
      if ((long *****)pppplStack_b8 != (long *****)0x0) {
        ppppplVar9 = (long *****)(pppplStack_b8 + 1);
        do {
          pppplVar14 = *ppppplVar9;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
          if (bVar7) {
            *ppppplVar9 = (long ****)((long)pppplVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar14 == (long ****)0x0) {
          (*(code *)(*pppplStack_b8)[2])(pppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
        }
      }
      if ((long)pppplStack_c8 < 0) {
        __ZdlPv(pppplStack_d8);
      }
      if ((long *******)pppppplStack_e8 == &pppppplStack_100) {
        lVar12 = 0x20;
LAB_10abd1e84:
        (**(code **)((long)*pppppplStack_e8 + lVar12))();
      }
      else if ((long *******)pppppplStack_e8 != (long *******)0x0) {
        lVar12 = 0x28;
        goto LAB_10abd1e84;
      }
      pppppplVar8[0x32] = (long *****)0x10abd39c8;
      __ZNSt13exception_ptrD1Ev(pppppplVar1);
    }
    pppppplVar16 = (long ******)pppppplVar8[0x2f];
    pppppplStack_f8 = pppppplVar16;
    if (pppppplVar16[0x11] != (long *****)0x0) {
      func_0x0001092b4274();
      pppppplStack_f8 = (long ******)pppppplVar8[0x2f];
    }
    pppppplVar16[0x11] = pppppplVar8[0x31];
    pppppplVar8[0x31] = (long *****)0x0;
    pppppplStack_100 = (long ******)pppppplVar8[0x32];
    ppppplStack_f0 = ppppplVar18;
    (*(code *)**ppppplVar18)(ppppplVar18,&pppppplStack_100);
    pppppplVar8[0x3d] = pppppplVar8[0x30];
    pppppplVar8[0x30] = (long *****)0x0;
    if (pppppplVar8[0x31] != (long *****)0x0) {
      func_0x0001092b4274(pppppplVar8 + 0x31);
      ppppplVar9 = pppppplVar8[0x30];
      if (ppppplVar9 != (long *****)0x0) {
        ppppplVar10 = ppppplVar9 + 1;
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
          do {
            pppplVar11 = *ppppplVar10;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
            if (bVar7) {
              *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
            (*(code *)(*ppppplVar9)[1])();
          }
        }
      }
    }
    ppppplVar9 = pppppplVar8[0x27];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar9 = pppppplVar8[0x22];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    if (*(char *)((long)pppppplVar8 + 0x107) < '\0') {
      __ZdlPv(pppppplVar8[0x1e]);
    }
    pppppplVar16 = (long ******)pppppplVar8[0x1c];
    if (pppppplVar16 == pppppplVar2) {
      lVar12 = 0x20;
LAB_10abd21a0:
      (**(code **)((long)*pppppplVar16 + lVar12))();
    }
    else if (pppppplVar16 != (long ******)0x0) {
      lVar12 = 0x28;
      goto LAB_10abd21a0;
    }
    ppppplVar9 = (long *****)param_2[0x12];
    func_0x00010abd1340(pppppplVar2,param_2 + 10);
    pppppplVar8[0x1d] = (long *****)param_2[0xe];
    if (*(char *)((long)param_2 + 0x8f) < '\0') {
      func_0x000107c3192c(pppppplVar8 + 0x1e,param_2[0xf],param_2[0x10]);
    }
    else {
      ppppplVar10 = (long *****)param_2[0xf];
      pppppplVar8[0x1f] = (long *****)param_2[0x10];
      pppppplVar8[0x1e] = ppppplVar10;
      pppppplVar8[0x20] = (long *****)param_2[0x11];
    }
    pppplVar11 = param_2[0x13];
    ppppplVar10 = (long *****)param_2[0x12];
    pppppplVar8[0x22] = (long *****)param_2[0x13];
    *pppppplVar13 = ppppplVar10;
    if (pppplVar11 != (long ****)0x0) {
      pppplVar11 = pppplVar11 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar11,0x10);
        if (bVar7) {
          *pppplVar11 = (long ***)((long)*pppplVar11 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppplVar10 = (long *****)param_2[0x14];
    pppppplVar8[0x24] = (long *****)param_2[0x15];
    *pppppplVar17 = ppppplVar10;
    *(undefined4 *)(pppppplVar8 + 0x25) = *(undefined4 *)(param_2 + 0x16);
    pppppplVar8[0x27] = pppppplVar8[0x3c];
    pppppplVar8[0x26] = pppppplVar8[0x3b];
    if (pppppplVar8[0x3c] != (long *****)0x0) {
      ppppplVar10 = pppppplVar8[0x3c] + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)*ppppplVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppplVar11 = ppppplVar9[2];
    pppppplVar8[0x30] = (long *****)0x0;
    pppppplVar8[0x31] = (long *****)0x0;
    if (pppplVar11 == (long ****)0x0) {
      FUN_10a195718(pppppplVar1,pppppplVar2);
      pppppplVar8[0xd] = pppppplVar8[0x1d];
      if (*(char *)((long)pppppplVar8 + 0x107) < '\0') {
        func_0x000107c3192c(pppppplVar8 + 0xe,pppppplVar8[0x1e],pppppplVar8[0x1f]);
      }
      else {
        pppppplVar8[0xf] = pppppplVar8[0x1f];
        pppppplVar8[0xe] = pppppplVar8[0x1e];
        pppppplVar8[0x10] = pppppplVar8[0x20];
      }
      pppppplVar8[0x12] = pppppplVar8[0x22];
      pppppplVar8[0x11] = *pppppplVar13;
      *pppppplVar13 = (long *****)0x0;
      pppppplVar8[0x22] = (long *****)0x0;
      pppppplVar8[0x14] = pppppplVar8[0x24];
      pppppplVar8[0x13] = *pppppplVar17;
      *(undefined4 *)(pppppplVar8 + 0x15) = *(undefined4 *)(pppppplVar8 + 0x25);
      pppppplVar8[0x17] = pppppplVar8[0x27];
      pppppplVar8[0x16] = pppppplVar8[0x26];
      pppppplVar8[0x26] = (long *****)0x0;
      pppppplVar8[0x27] = (long *****)0x0;
      ppppplVar10 = (long *****)0x148;
      __Znwm();
      ppppplVar10[2] = (long ****)0x0;
      ppppplVar10[1] = (long ****)0x200000006;
      *(undefined2 *)(ppppplVar10 + 3) = 4;
      ppppplVar10[5] = (long ****)0x0;
      ppppplVar10[4] = (long ****)0x0;
      ppppplVar10[7] = (long ****)0x0;
      ppppplVar10[6] = (long ****)0x0;
      ppppplVar10[9] = (long ****)0x0;
      ppppplVar10[8] = (long ****)0x0;
      ppppplVar10[0xb] = (long ****)0x0;
      ppppplVar10[10] = (long ****)0x0;
      ppppplVar10[0xd] = (long ****)0x0;
      ppppplVar10[0xc] = (long ****)0x0;
      ppppplVar10[0xf] = (long ****)0x0;
      ppppplVar10[0xe] = (long ****)0x0;
      ppppplVar10[0x10] = (long ****)0x0;
      ppppplVar10[0x11] = (long ****)(ppppplVar10 + 3);
      ppppplVar10[0x12] = (long ****)0x0;
      *(undefined1 *)(ppppplVar10 + 0x13) = 0;
      *(undefined1 *)(ppppplVar10 + 0x16) = 0;
      *ppppplVar10 = (long ****)&PTR_FUN_110c50b60;
      FUN_10abd4420(ppppplVar10 + 0x17,pppppplVar1);
      ppppplVar10[0x28] = (long ****)0x0;
      ppppplVar18 = pppppplVar8[0x30];
      if (ppppplVar18 != (long *****)0x0) {
        ppppplVar15 = ppppplVar18 + 1;
        do {
          pppplVar11 = *ppppplVar15;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
          if (bVar7) {
            *ppppplVar15 = (long ****)((long)pppplVar11 - 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
          do {
            pppplVar11 = *ppppplVar15;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
            if (bVar7) {
              *ppppplVar15 = (long ****)((long)pppplVar11 - 1U);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
            (*(code *)(*ppppplVar18)[1])();
          }
        }
      }
      pppppplVar8[0x30] = ppppplVar10;
      if (pppppplVar8[0x31] != (long *****)0x0) {
        func_0x0001092b4274(pppppplVar8 + 0x31);
      }
      pppppplVar8[0x31] = ppppplVar10;
      pppppplVar8[0x2f] = ppppplVar10 + 0x17;
      ppppplVar10 = pppppplVar8[0x17];
      if (ppppplVar10 != (long *****)0x0) {
        ppppplVar18 = ppppplVar10 + 1;
        do {
          pppplVar11 = *ppppplVar18;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
          if (bVar7) {
            *ppppplVar18 = (long ****)((long)pppplVar11 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*ppppplVar10)[2])(ppppplVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar10);
        }
      }
      ppppplVar10 = pppppplVar8[0x12];
      if (ppppplVar10 != (long *****)0x0) {
        ppppplVar18 = ppppplVar10 + 1;
        do {
          pppplVar11 = *ppppplVar18;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
          if (bVar7) {
            *ppppplVar18 = (long ****)((long)pppplVar11 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*ppppplVar10)[2])(ppppplVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar10);
        }
      }
      if (*(char *)((long)pppppplVar8 + 0x87) < '\0') {
        __ZdlPv(pppppplVar8[0xe]);
      }
      pppppplVar13 = (long ******)pppppplVar8[0xc];
      if (pppppplVar13 == pppppplVar1) {
        lVar12 = 0x20;
LAB_10abd2638:
        (**(code **)((long)*pppppplVar13 + lVar12))();
      }
      else if (pppppplVar13 != (long ******)0x0) {
        lVar12 = 0x28;
        goto LAB_10abd2638;
      }
      pppppplVar8[0x32] = (long *****)FUN_10abd408c;
    }
    else {
      *pppppplVar1 = (long *****)0x0;
      (*(code *)(*pppplVar11)[5])(pppplVar11,0,pppppplVar1);
      if (*pppppplVar1 != (long *****)0x0) {
        func_0x0001092af97c(pppppplVar1);
        goto LAB_10abd30f4;
      }
      FUN_10a195718(&pppppplStack_100,pppppplVar2);
      pppplStack_e0 = (long ****)pppppplVar8[0x1d];
      if (*(char *)((long)pppppplVar8 + 0x107) < '\0') {
        func_0x000107c3192c(&pppplStack_d8,pppppplVar8[0x1e],pppppplVar8[0x1f]);
      }
      else {
        pppplStack_d0 = (long ****)pppppplVar8[0x1f];
        pppplStack_d8 = (long ****)pppppplVar8[0x1e];
        pppplStack_c8 = (long ****)pppppplVar8[0x20];
      }
      pppplStack_b8 = (long ****)pppppplVar8[0x22];
      pppplStack_c0 = (long ****)*pppppplVar13;
      *pppppplVar13 = (long *****)0x0;
      pppppplVar8[0x22] = (long *****)0x0;
      pppplStack_a8 = (long ****)pppppplVar8[0x24];
      pppplStack_b0 = (long ****)*pppppplVar17;
      uStack_a0 = *(undefined4 *)(pppppplVar8 + 0x25);
      pppplStack_90 = (long ****)pppppplVar8[0x27];
      pppplStack_98 = (long ****)pppppplVar8[0x26];
      pppppplVar8[0x26] = (long *****)0x0;
      pppppplVar8[0x27] = (long *****)0x0;
      ppppplVar10 = (long *****)0x150;
      __Znwm();
      ppppplVar10[2] = (long ****)0x0;
      ppppplVar10[1] = (long ****)0x200000006;
      *(undefined2 *)(ppppplVar10 + 3) = 4;
      ppppplVar10[5] = (long ****)0x0;
      ppppplVar10[4] = (long ****)0x0;
      ppppplVar10[7] = (long ****)0x0;
      ppppplVar10[6] = (long ****)0x0;
      ppppplVar10[9] = (long ****)0x0;
      ppppplVar10[8] = (long ****)0x0;
      ppppplVar10[0xb] = (long ****)0x0;
      ppppplVar10[10] = (long ****)0x0;
      ppppplVar10[0xd] = (long ****)0x0;
      ppppplVar10[0xc] = (long ****)0x0;
      ppppplVar10[0xf] = (long ****)0x0;
      ppppplVar10[0xe] = (long ****)0x0;
      ppppplVar10[0x10] = (long ****)0x0;
      ppppplVar10[0x11] = (long ****)(ppppplVar10 + 3);
      ppppplVar10[0x12] = (long ****)0x0;
      *(undefined1 *)(ppppplVar10 + 0x13) = 0;
      *(undefined1 *)(ppppplVar10 + 0x16) = 0;
      *ppppplVar10 = (long ****)&PTR_FUN_110c50b28;
      FUN_10abd4420(ppppplVar10 + 0x17,&pppppplStack_100);
      ppppplVar10[0x28] = (long ****)0x0;
      ppppplVar10[0x29] = pppplVar11;
      ppppplVar18 = pppppplVar8[0x30];
      if (ppppplVar18 != (long *****)0x0) {
        ppppplVar15 = ppppplVar18 + 1;
        do {
          pppplVar11 = *ppppplVar15;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
          if (bVar7) {
            *ppppplVar15 = (long ****)((long)pppplVar11 - 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
          do {
            pppplVar11 = *ppppplVar15;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
            if (bVar7) {
              *ppppplVar15 = (long ****)((long)pppplVar11 - 1U);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
            (*(code *)(*ppppplVar18)[1])();
          }
        }
      }
      pppppplVar8[0x30] = ppppplVar10;
      if (pppppplVar8[0x31] != (long *****)0x0) {
        func_0x0001092b4274(pppppplVar8 + 0x31);
      }
      pppplVar11 = pppplStack_90;
      pppppplVar8[0x31] = ppppplVar10;
      pppppplVar8[0x2f] = ppppplVar10 + 0x17;
      if ((long *****)pppplStack_90 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_90 + 1);
        do {
          pppplVar14 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar14 == (long ****)0x0) {
          (*(code *)(*pppplStack_90)[2])(pppplStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
        }
      }
      pppplVar11 = pppplStack_b8;
      if ((long *****)pppplStack_b8 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_b8 + 1);
        do {
          pppplVar14 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar14 == (long ****)0x0) {
          (*(code *)(*pppplStack_b8)[2])(pppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar11);
        }
      }
      if ((long)pppplStack_c8 < 0) {
        __ZdlPv(pppplStack_d8);
      }
      if ((long *******)pppppplStack_e8 == &pppppplStack_100) {
        lVar12 = 0x20;
LAB_10abd247c:
        (**(code **)((long)*pppppplStack_e8 + lVar12))();
      }
      else if ((long *******)pppppplStack_e8 != (long *******)0x0) {
        lVar12 = 0x28;
        goto LAB_10abd247c;
      }
      pppppplVar8[0x32] = (long *****)0x10abd405c;
      __ZNSt13exception_ptrD1Ev(pppppplVar1);
    }
    pppppplVar17 = (long ******)pppppplVar8[0x2f];
    pppppplVar13 = pppppplVar17;
    if (pppppplVar17[0x11] != (long *****)0x0) {
      func_0x0001092b4274();
      pppppplVar13 = (long ******)pppppplVar8[0x2f];
    }
    pppppplVar17[0x11] = pppppplVar8[0x31];
    pppppplVar8[0x31] = (long *****)0x0;
    pppppplStack_100 = (long ******)pppppplVar8[0x32];
    pppppplStack_f8 = pppppplVar13;
    ppppplStack_f0 = ppppplVar9;
    (*(code *)**ppppplVar9)(ppppplVar9,&pppppplStack_100);
    pppppplVar8[0x3e] = pppppplVar8[0x30];
    pppppplVar8[0x30] = (long *****)0x0;
    if (pppppplVar8[0x31] != (long *****)0x0) {
      func_0x0001092b4274(pppppplVar8 + 0x31);
      ppppplVar9 = pppppplVar8[0x30];
      if (ppppplVar9 != (long *****)0x0) {
        ppppplVar10 = ppppplVar9 + 1;
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
          do {
            pppplVar11 = *ppppplVar10;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
            if (bVar7) {
              *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
            (*(code *)(*ppppplVar9)[1])();
          }
        }
      }
    }
    ppppplVar9 = pppppplVar8[0x27];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar9 = pppppplVar8[0x22];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    if (*(char *)((long)pppppplVar8 + 0x107) < '\0') {
      __ZdlPv(pppppplVar8[0x1e]);
    }
    pppppplVar13 = (long ******)pppppplVar8[0x1c];
    if (pppppplVar13 == pppppplVar2) {
      lVar12 = 0x20;
LAB_10abd2794:
      (**(code **)((long)*pppppplVar13 + lVar12))();
    }
    else if (pppppplVar13 != (long ******)0x0) {
      lVar12 = 0x28;
      goto LAB_10abd2794;
    }
    pppppplStack_130 = (long ******)0x2;
    FUN_10a235b1c(&pppppplStack_100,&pppppplStack_130);
    ppppplVar9 = ppppplStack_f0 + 1;
    if (*ppppplVar9 != (long ****)0x0) {
      func_0x0001092b4274(ppppplVar9);
    }
    ppppplVar10 = ppppplStack_f0;
    *ppppplVar9 = (long ****)pppppplStack_f8;
    pppppplStack_f8 = (long ******)0x0;
    FUN_10abd4688(ppppplStack_f0,0,pppppplVar8 + 0x3d);
    FUN_10abd4688(ppppplVar10,1,pppppplVar8 + 0x3e);
    pppppplVar13 = pppppplStack_100;
    *pppppplVar2 = (long *****)pppppplStack_100;
    pppppplStack_100 = (long ******)0x0;
    if (pppppplStack_f8 != (long ******)0x0) {
      func_0x0001092b4274(&pppppplStack_f8);
      if ((long *******)pppppplStack_100 != (long *******)0x0) {
        ppppppplVar3 = (long *******)(pppppplStack_100 + 1);
        do {
          pppppplVar13 = *ppppppplVar3;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar3,0x10);
          if (bVar7) {
            *ppppppplVar3 = (long ******)((long)pppppplVar13 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppppplVar13 & 0x1fffffffc) == 4) {
          do {
            pppppplVar13 = *ppppppplVar3;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar3,0x10);
            if (bVar7) {
              *ppppppplVar3 = (long ******)((long)pppppplVar13 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((long ******)((long)pppppplVar13 + -1) == (long ******)0x0) {
            (*(code *)(*pppppplStack_100)[1])();
          }
        }
      }
      pppppplVar13 = (long ******)*pppppplVar2;
    }
    *pppppplVar1 = (long *****)pppppplVar13;
    pppppplVar13 = pppppplVar13 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
      if (bVar7) {
        *pppppplVar13 = (long *****)((long)*pppppplVar13 + 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)(*pppppplVar1)[2] >> 1 & 1) == 0) {
      *(undefined1 *)(pppppplVar8 + 0x40) = 0;
      ppppplVar18 = pppppplVar8[9];
      ppppplVar9 = ppppplVar18 + 2;
      ppppplVar10 = pppppplVar8[3];
      do {
        pppplVar11 = *ppppplVar9;
        if (pppplVar11 == (long ****)0x0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
          if (bVar7) {
            *ppppplVar9 = (long ****)0x1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar5 == '\0';
        }
        else {
          bVar7 = false;
          ClearExclusiveLocal();
        }
        if (bVar7) goto LAB_10abd30a0;
      } while (((uint)pppplVar11 >> 1 & 1) == 0);
    }
    ppppplVar9 = *pppppplVar1;
    if (((uint)(*pppppplVar1)[2] >> 5 & 1) != 0) {
      func_0x0001092af97c(ppppplVar9 + 0x12);
      goto LAB_10abd30f4;
    }
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[1])();
        }
      }
    }
    ppppplVar9 = *pppppplVar2;
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[1])();
        }
      }
    }
    FUN_10abd3728(&pppppplStack_130,pppppplVar8 + 0x3d);
    FUN_10abd3728(&pppppplStack_118,pppppplVar8 + 0x3e);
    ppppplVar9 = pppppplVar8[0x3f];
    pppppplStack_f8 = pppppplStack_128;
    pppppplStack_100 = pppppplStack_130;
    ppppplStack_f0 = (long *****)pppplStack_120;
    pppppplStack_130 = (long ******)0x0;
    pppppplStack_128 = (long ******)0x0;
    pppplStack_120 = (long ****)0x0;
    pppplStack_e0 = pppplStack_110;
    pppppplStack_e8 = pppppplStack_118;
    pppplStack_d8 = pppplStack_108;
    pppppplStack_118 = (long ******)0x0;
    pppplStack_110 = (long ****)0x0;
    pppplStack_108 = (long ****)0x0;
    pppplStack_d0 = (long ****)CONCAT71(pppplStack_d0._1_7_,1);
    FUN_10abd3818(&pppppplStack_130);
    func_0x00010a225c4c(ppppplVar9 + 0x12);
    *(undefined1 *)(pppppplVar8 + 0x28) = 0;
    *(undefined1 *)(pppppplVar8 + 0x2e) = 0;
    if (((ulong)pppplStack_d0 & 1) != 0) {
      pppppplVar8[0x29] = (long *****)pppppplStack_f8;
      pppppplVar8[0x28] = (long *****)pppppplStack_100;
      pppppplVar8[0x2a] = ppppplStack_f0;
      pppppplStack_f8 = (long ******)0x0;
      ppppplStack_f0 = (long *****)0x0;
      pppppplStack_100 = (long ******)0x0;
      pppppplVar8[0x2c] = (long *****)pppplStack_e0;
      pppppplVar8[0x2b] = (long *****)pppppplStack_e8;
      pppppplVar8[0x2d] = (long *****)pppplStack_d8;
      pppppplStack_e8 = (long ******)0x0;
      pppplStack_e0 = (long ****)0x0;
      pppplStack_d8 = (long ****)0x0;
      *(undefined1 *)(pppppplVar8 + 0x2e) = 1;
    }
    (*(code *)(*pppppplVar8[0x35])[5])
              (&pppppplStack_130,pppppplVar8[0x35],pppppplVar8[0x33] + 4,pppppplVar8[0x3f] + 10,
               pppppplVar8[0x3b],pppppplVar8 + 0x28);
    func_0x00010abd3858(pppppplVar8 + 0x39,&pppppplStack_130);
    FUN_10abd4748(&pppppplStack_130);
    FUN_10a186da0(pppppplVar8 + 0x28);
    FUN_10a186da0(&pppppplStack_100);
    ppppplVar9 = pppppplVar8[0x3e];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[1])();
        }
      }
    }
    ppppplVar9 = pppppplVar8[0x3d];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[1])();
        }
      }
    }
    ppppplVar9 = pppppplVar8[0x3c];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar18 = pppppplVar8[0x37];
  }
  ppppplVar9 = pppppplVar8[0x3f];
  pppppplVar13 = (long ******)*ppppplVar9;
  pppppplVar8[9] = (long *****)pppppplVar13;
  ppppplVar10 = (long *****)ppppplVar9[1];
  pppppplVar8[10] = ppppplVar10;
  if (ppppplVar10 != (long *****)0x0) {
    ppppplVar9 = ppppplVar10 + 2;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
      if (bVar7) {
        *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppppplVar9 = pppppplVar8[0x3f];
  }
  ppppplVar15 = (long *****)ppppplVar9[2];
  pppppplVar8[0xb] = ppppplVar15;
  ppppplVar21 = (long *****)ppppplVar9[3];
  pppppplVar8[0xc] = ppppplVar21;
  if (ppppplVar21 != (long *****)0x0) {
    ppppplVar9 = ppppplVar21 + 2;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
      if (bVar7) {
        *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppppplVar9 = pppppplVar8[0x3f];
  }
  uVar4 = *(undefined1 *)(ppppplVar9 + 4);
  ppppplVar9 = pppppplVar8[0x39];
  pppppplVar17 = pppppplVar8 + 0xe;
  *pppppplVar17 = ppppplVar9;
  *(undefined1 *)(pppppplVar8 + 0xd) = uVar4;
  ppppplVar20 = pppppplVar8[0x3a];
  pppppplVar8[0xf] = ppppplVar20;
  if (ppppplVar20 != (long *****)0x0) {
    ppppplVar19 = ppppplVar20 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar19,0x10);
      if (bVar7) {
        *ppppplVar19 = (long ****)((long)*ppppplVar19 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppplVar19 = (long *****)ppppplVar18[2];
  pppppplStack_f8 = (long ******)0x0;
  ppppplStack_f0 = (long *****)0x0;
  if (ppppplVar19 == (long *****)0x0) {
    *pppppplVar17 = (long *****)0x0;
    pppppplVar8[0xf] = (long *****)0x0;
    pppppplVar8[10] = (long *****)0x0;
    *pppppplVar1 = (long *****)0x0;
    pppppplVar8[0xc] = (long *****)0x0;
    pppppplVar8[0xb] = (long *****)0x0;
    pppppplVar17 = (long ******)0x100;
    __Znwm();
    pppppplVar17[2] = (long *****)0x0;
    pppppplVar17[1] = (long *****)0x200000006;
    *(undefined2 *)(pppppplVar17 + 3) = 4;
    pppppplVar17[5] = (long *****)0x0;
    pppppplVar17[4] = (long *****)0x0;
    pppppplVar17[7] = (long *****)0x0;
    pppppplVar17[6] = (long *****)0x0;
    pppppplVar17[9] = (long *****)0x0;
    pppppplVar17[8] = (long *****)0x0;
    pppppplVar17[0xb] = (long *****)0x0;
    pppppplVar17[10] = (long *****)0x0;
    pppppplVar17[0xd] = (long *****)0x0;
    pppppplVar17[0xc] = (long *****)0x0;
    pppppplVar17[0xf] = (long *****)0x0;
    pppppplVar17[0xe] = (long *****)0x0;
    pppppplVar17[0x10] = (long *****)0x0;
    pppppplVar17[0x11] = (long *****)(pppppplVar17 + 3);
    pppppplVar17[0x12] = (long *****)0x0;
    *(undefined1 *)(pppppplVar17 + 0x13) = 0;
    *(undefined1 *)(pppppplVar17 + 0x15) = 0;
    *pppppplVar17 = (long *****)&PTR_DAT_110c50bd0;
    pppppplStack_100 = pppppplVar17 + 0x16;
    *pppppplStack_100 = (long *****)pppppplVar13;
    pppppplVar17[0x17] = ppppplVar10;
    pppppplVar17[0x18] = ppppplVar15;
    pppppplVar17[0x19] = ppppplVar21;
    *(undefined1 *)(pppppplVar17 + 0x1a) = uVar4;
    pppppplVar17[0x1b] = ppppplVar9;
    pppppplVar17[0x1c] = ppppplVar20;
    *(undefined1 *)(pppppplVar17 + 0x1e) = 1;
    pppppplVar17[0x1f] = (long *****)0x0;
    pppppplStack_e8 = (long ******)FUN_10abd47d0;
    pppppplStack_f8 = pppppplVar17;
    ppppplStack_f0 = (long *****)pppppplVar17;
  }
  else {
    pppppplStack_130 = (long ******)0x0;
    (*(code *)(*ppppplVar19)[5])(ppppplVar19,0,&pppppplStack_130);
    if ((long *******)pppppplStack_130 != (long *******)0x0) {
      func_0x0001092af97c(&pppppplStack_130);
      goto LAB_10abd30f4;
    }
    *pppppplVar17 = (long *****)0x0;
    pppppplVar8[0xf] = (long *****)0x0;
    pppppplVar8[10] = (long *****)0x0;
    *pppppplVar1 = (long *****)0x0;
    pppppplVar8[0xc] = (long *****)0x0;
    pppppplVar8[0xb] = (long *****)0x0;
    pppppplVar17 = (long ******)0x108;
    __Znwm();
    pppppplVar17[2] = (long *****)0x0;
    pppppplVar17[1] = (long *****)0x200000006;
    *(undefined2 *)(pppppplVar17 + 3) = 4;
    pppppplVar17[5] = (long *****)0x0;
    pppppplVar17[4] = (long *****)0x0;
    pppppplVar17[7] = (long *****)0x0;
    pppppplVar17[6] = (long *****)0x0;
    pppppplVar17[9] = (long *****)0x0;
    pppppplVar17[8] = (long *****)0x0;
    pppppplVar17[0xb] = (long *****)0x0;
    pppppplVar17[10] = (long *****)0x0;
    pppppplVar17[0xd] = (long *****)0x0;
    pppppplVar17[0xc] = (long *****)0x0;
    pppppplVar17[0xf] = (long *****)0x0;
    pppppplVar17[0xe] = (long *****)0x0;
    pppppplVar17[0x10] = (long *****)0x0;
    pppppplVar17[0x11] = (long *****)(pppppplVar17 + 3);
    pppppplVar17[0x12] = (long *****)0x0;
    *(undefined1 *)(pppppplVar17 + 0x13) = 0;
    *(undefined1 *)(pppppplVar17 + 0x15) = 0;
    pppppplVar17[0x16] = (long *****)pppppplVar13;
    *pppppplVar17 = (long *****)&PTR_FUN_110c50b98;
    pppppplVar17[0x17] = ppppplVar10;
    pppppplVar17[0x18] = ppppplVar15;
    pppppplVar17[0x19] = ppppplVar21;
    *(undefined1 *)(pppppplVar17 + 0x1a) = uVar4;
    pppppplVar17[0x1b] = ppppplVar9;
    pppppplVar17[0x1c] = ppppplVar20;
    *(undefined1 *)(pppppplVar17 + 0x1e) = 1;
    pppppplVar17[0x1f] = (long *****)0x0;
    pppppplVar17[0x20] = ppppplVar19;
    if (pppppplStack_f8 != (long ******)0x0) {
      pppppplVar13 = pppppplStack_f8 + 1;
      do {
        ppppplVar9 = *pppppplVar13;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
        if (bVar7) {
          *pppppplVar13 = (long *****)((long)ppppplVar9 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)ppppplVar9 & 0x1fffffffc) == 4) {
        do {
          ppppplVar9 = *pppppplVar13;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
          if (bVar7) {
            *pppppplVar13 = (long *****)((long)ppppplVar9 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long *****)((long)ppppplVar9 - 1U) == (long *****)0x0) {
          (*(code *)(*pppppplStack_f8)[1])();
        }
      }
    }
    pppppplStack_f8 = pppppplVar17;
    if (ppppplStack_f0 != (long *****)0x0) {
      func_0x0001092b4274(&ppppplStack_f0);
    }
    pppppplStack_e8 = (long ******)0x10abd47a0;
    pppppplStack_100 = pppppplVar17 + 0x16;
    ppppplStack_f0 = (long *****)pppppplVar17;
    __ZNSt13exception_ptrD1Ev(&pppppplStack_130);
  }
  pppppplVar13 = pppppplStack_100;
  if ((long ******)pppppplStack_100[9] != (long ******)0x0) {
    func_0x0001092b4274();
  }
  pppppplVar13[9] = ppppplStack_f0;
  ppppplStack_f0 = (long *****)0x0;
  pppppplStack_130 = pppppplStack_e8;
  pppppplStack_128 = pppppplStack_100;
  pppplStack_120 = (long ****)ppppplVar18;
  (*(code *)**ppppplVar18)(ppppplVar18,&pppppplStack_130);
  *pppppplVar2 = (long *****)pppppplStack_f8;
  pppppplStack_f8 = (long ******)0x0;
  if ((ppppplStack_f0 != (long *****)0x0) &&
     (func_0x0001092b4274(&ppppplStack_f0), pppppplStack_f8 != (long ******)0x0)) {
    pppppplVar13 = pppppplStack_f8 + 1;
    do {
      ppppplVar9 = *pppppplVar13;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
      if (bVar7) {
        *pppppplVar13 = (long *****)((long)ppppplVar9 - 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)ppppplVar9 & 0x1fffffffc) == 4) {
      do {
        ppppplVar9 = *pppppplVar13;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
        if (bVar7) {
          *pppppplVar13 = (long *****)((long)ppppplVar9 - 1U);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((long *****)((long)ppppplVar9 - 1U) == (long *****)0x0) {
        (*(code *)(*pppppplStack_f8)[1])();
      }
    }
  }
  ppppplVar9 = pppppplVar8[0xf];
  if (ppppplVar9 != (long *****)0x0) {
    ppppplVar10 = ppppplVar9 + 1;
    do {
      pppplVar11 = *ppppplVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar7) {
        *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppplVar11 == (long ****)0x0) {
      (*(code *)(*ppppplVar9)[2])(ppppplVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
    }
  }
  if (pppppplVar8[0xc] != (long *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppppplVar8[10] != (long *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *pppppplVar1 = *pppppplVar2;
  ppppplVar9 = *pppppplVar2 + 1;
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
    if (bVar7) {
      *ppppplVar9 = (long ****)((long)*ppppplVar9 + 4);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((uint)(*pppppplVar1)[2] >> 1 & 1) == 0) {
    *(undefined1 *)(pppppplVar8 + 0x40) = 1;
    ppppplVar18 = pppppplVar8[9];
    ppppplVar9 = ppppplVar18 + 2;
    ppppplVar10 = pppppplVar8[3];
    do {
      pppplVar11 = *ppppplVar9;
      if (pppplVar11 == (long ****)0x0) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar7) {
          *ppppplVar9 = (long ****)0x1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_10abd30a0;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)pppplVar11 >> 1 & 1) == 0);
  }
  ppppplVar9 = *pppppplVar1;
  if (((uint)(*pppppplVar1)[2] >> 5 & 1) == 0) {
    if (((ulong)ppppplVar9[0x15] & 1) == 0) goto LAB_10abd30f4;
    func_0x00010abd38fc(pppppplVar8 + 2,ppppplVar9 + 0x13);
    ppppplVar9 = *pppppplVar1;
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[1])();
        }
      }
    }
    ppppplVar9 = *pppppplVar2;
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppplVar11 & 0x1fffffffc) == 4) {
        do {
          pppplVar11 = *ppppplVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar7) {
            *ppppplVar10 = (long ****)((long)pppplVar11 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ****)((long)pppplVar11 - 1U) == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[1])();
        }
      }
    }
    ppppplVar9 = pppppplVar8[0x3a];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar9 = pppppplVar8[0x38];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar9 = pppppplVar8[0x36];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*ppppplVar9)[2])(ppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar9);
      }
    }
    ppppplVar9 = pppppplVar8[0x34];
    if (ppppplVar9 != (long *****)0x0) {
      ppppplVar10 = ppppplVar9 + 1;
      do {
        pppplVar11 = *ppppplVar10;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar7) {
          *ppppplVar10 = (long ****)((long)pppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_10abd1aac;
    }
    goto LAB_10abd1ac8;
  }
LAB_10abd30bc:
  func_0x0001092af97c(ppppplVar9 + 0x12);
LAB_10abd30f4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abd30f8);
  (*pcVar6)();
LAB_10abd30a0:
  ppppplStack_f0 = ppppplVar10;
  pppppplStack_100 = (long ******)0x0;
  pppppplStack_f8 = pppppplVar8;
  func_0x000109d1b588(ppppplVar18 + 3,&pppppplStack_100);
  ppppplVar18[2] = (long ****)0x0;
LAB_10abd1ad8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar9 = extraout_x8;
  goto LAB_10abd30bc;
}



/* Entry: 10abd3578; end: 10abd3617;  */

undefined8 * FUN_10abd3578(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110c50a60;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10abd3618; end: 10abd3727;  */

void FUN_10abd3618(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  func_0x00010abd393c(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10abd3728; end: 10abd3817;  */

long * FUN_10abd3728(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001092af8bc(param_2);
  lVar9 = *param_2;
  if ((*(byte *)(lVar9 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10abd3814);
    (*pcVar6)();
  }
  uVar2 = *(undefined8 *)(lVar9 + 0x98);
  uStack_48 = (undefined7)*(undefined8 *)(lVar9 + 0xa0);
  uVar10 = *(undefined8 *)(lVar9 + 0xa7);
  uStack_41 = (undefined1)uVar10;
  uVar3 = *(undefined1 *)(lVar9 + 0xaf);
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  plVar7 = (long *)*param_2;
  *param_2 = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar11 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  *param_1 = uVar2;
  param_1[1] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_1 + 0xf) = uVar10;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (*(char *)((long)plVar7 + 0x2f) < '\0') {
    __ZdlPv(plVar7[3]);
  }
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    __ZdlPv(*plVar7);
  }
  return plVar7;
}



/* Entry: 10abd3818; end: 10abd39f7;  */

undefined8 * FUN_10abd3818(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10abd39f8; end: 10abd3bdf;  */

long ***** FUN_10abd39f8(long *****param_1)

{
  code *pcVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  int iVar4;
  long *****ppppplVar5;
  long lVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****apppplStack_a8 [2];
  char cStack_91;
  long ****pppplStack_90;
  undefined1 auStack_88 [40];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[0x10] & 1) != 0) {
    ppppplVar7 = (long *****)param_1[0x11];
    param_1[0x11] = (long ****)0x0;
    pppplVar2 = param_1[3];
    pppplStack_90 = (long ****)ppppplVar7;
    if (pppplVar2 != (long ****)0x0) {
      (*(code *)(*pppplVar2)[6])();
      pppplVar8 = param_1[4];
      pppplVar9 = param_1[0xd];
      uStack_58 = 0xd;
      puStack_60 = &DAT_10f695714;
      uStack_50 = 1;
      FUN_10abd9130(auStack_88,&puStack_60,1);
      FUN_10a30da10(apppplStack_a8,pppplVar2,pppplVar8,pppplVar9,auStack_88,param_1 + 5,0,0);
      func_0x00010a1954dc(auStack_88);
      ppppplVar5 = apppplStack_a8;
      ppppplVar3 = ppppplVar7;
      FUN_10a7258a4();
      if (cStack_91 < '\0') {
        __ZdlPv();
        ppppplVar3 = (long *****)apppplStack_a8[0];
      }
      do {
        if (*(char *)(param_1 + 0x10) == '\x01') {
          func_0x00010a23037c(param_1 + 0xd);
          func_0x00010a061620(param_1 + 8);
          if (*(char *)((long)param_1 + 0x3f) < '\0') {
            __ZdlPv(param_1[5]);
          }
          ppppplVar3 = (long *****)param_1[3];
          if (ppppplVar3 == param_1) {
            lVar6 = 0x20;
LAB_10abd3b10:
            (**(code **)((long)*ppppplVar3 + lVar6))();
          }
          else if (ppppplVar3 != (long *****)0x0) {
            lVar6 = 0x28;
            goto LAB_10abd3b10;
          }
          *(undefined1 *)(param_1 + 0x10) = 0;
        }
        pppplStack_90 = (long ****)0x0;
        if (ppppplVar7 != (long *****)0x0) {
          ppppplVar3 = &pppplStack_90;
          func_0x0001092b4274(ppppplVar3,ppppplVar7);
          ppppplVar5 = (long *****)pppplStack_90;
          if ((long *****)pppplStack_90 != (long *****)0x0) {
            ppppplVar3 = &pppplStack_90;
            func_0x0001092b4274();
          }
        }
        iVar4 = (int)ppppplVar5;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return ppppplVar3;
        }
        ___stack_chk_fail();
        if (iVar4 == 0) goto LAB_10abd3bd0;
        func_0x00010a1954dc(auStack_88);
        ___cxa_begin_catch(ppppplVar3);
        __ZSt17current_exceptionv(apppplStack_a8);
        ppppplVar5 = apppplStack_a8;
        func_0x000109d1b350(ppppplVar7);
        ppppplVar3 = apppplStack_a8;
        __ZNSt13exception_ptrD1Ev();
        ___cxa_end_catch();
      } while( true );
    }
    FUN_10a06186c();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abd3b7c);
  (*pcVar1)();
LAB_10abd3bd0:
  __Unwind_Resume(ppppplVar3);
  func_0x000104bd46a0();
  *ppppplVar3 = (long ****)&PTR_FUN_110c50ab8;
  if (ppppplVar3[0x28] != (long ****)0x0) {
    func_0x0001092b4274(ppppplVar3 + 0x28);
  }
  if (*(char *)(ppppplVar3 + 0x27) == '\x01') {
    func_0x00010a23037c(ppppplVar3 + 0x24);
    func_0x00010a061620(ppppplVar3 + 0x1f);
    if (*(char *)((long)ppppplVar3 + 0xf7) < '\0') {
      __ZdlPv(ppppplVar3[0x1c]);
    }
    ppppplVar7 = (long *****)ppppplVar3[0x1a];
    if (ppppplVar7 == ppppplVar3 + 0x17) {
      lVar6 = 0x20;
    }
    else {
      if (ppppplVar7 == (long *****)0x0) goto LAB_10abd3c64;
      lVar6 = 0x28;
    }
    (**(code **)((long)*ppppplVar7 + lVar6))();
  }
LAB_10abd3c64:
  *ppppplVar3 = (long ****)&PTR_DAT_110be8e80;
  if ((*(char *)(ppppplVar3 + 0x16) == '\x01') && (*(char *)((long)ppppplVar3 + 0xaf) < '\0')) {
    __ZdlPv(ppppplVar3[0x13]);
  }
  *ppppplVar3 = (long ****)&PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(ppppplVar3 + 0x12);
  *ppppplVar3 = (long ****)&PTR_DAT_110ae8c08;
  return ppppplVar3;
}



/* Entry: 10abd3be0; end: 10abd3df3;  */

undefined8 * FUN_10abd3be0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c50ab8;
  if (param_1[0x28] != 0) {
    func_0x0001092b4274(param_1 + 0x28);
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a23037c(param_1 + 0x24);
    func_0x00010a061620(param_1 + 0x1f);
    if (*(char *)((long)param_1 + 0xf7) < '\0') {
      __ZdlPv(param_1[0x1c]);
    }
    plVar1 = (long *)param_1[0x1a];
    if (plVar1 == param_1 + 0x17) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_10abd3c64;
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
LAB_10abd3c64:
  *param_1 = &PTR_DAT_110be8e80;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}


