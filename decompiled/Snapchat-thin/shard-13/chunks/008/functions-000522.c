/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acd3100; end: 10acd31cf;  */

undefined8 * FUN_10acd3100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bee0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acd31d0; end: 10acd3297;  */

void FUN_10acd31d0(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar4 = puVar3 + 1;
  *puVar4 = 0;
  *puVar3 = &PTR_FUN_110c6bee0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    uVar5 = lVar1 >> 3;
    if (uVar5 >> 0x3d != 0) {
      FUN_10a31f1a8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acd3274);
      (*pcVar2)();
    }
    FUN_10a31f1bc();
    puVar3[1] = puVar4;
    puVar3[3] = puVar4 + uVar5;
    _memmove();
    puVar3[2] = (long)puVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10acd3298; end: 10acd33db;  */

void FUN_10acd3298(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined8 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEx(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acd33dc; end: 10acd34ab;  */

undefined8 * FUN_10acd33dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bf30;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acd34ac; end: 10acd355b;  */

void FUN_10acd34ac(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110c6bf30;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10) - lVar1;
  if (lVar2 != 0) {
    FUN_10a7c2e14(puVar3 + 1,lVar2 >> 3);
    lVar4 = puVar3[2];
    _memmove(lVar4,lVar1,lVar2);
    puVar3[2] = lVar4 + lVar2;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10acd355c; end: 10acd369f;  */

void FUN_10acd355c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  puVar5 = *(undefined8 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (puVar5 != puVar2) {
    do {
      __ZNSt3__19to_stringEy(alStack_78,*puVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acd36a0; end: 10acd379b;  */

undefined1  [16] FUN_10acd36a0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6ae38;
  puVar1 = &UNK_10f6a0902;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6ae38;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10acd379c; end: 10acd37ef;  */

ulong FUN_10acd379c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10acd37f0,0);
  }
  return param_1;
}



/* Entry: 10acd37f0; end: 10acd390b;  */

void FUN_10acd37f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acd390c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0cf0cc(&stack0xffffffffffffffa0,plVar4[4],plVar4[5],
                (plVar4[5] - plVar4[4] >> 3) * -0x5555555555555555);
  func_0x00010989a420(param_1,param_2,0,0);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd390c; end: 10acd39c7;  */

undefined ** FUN_10acd390c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10acd39c8,0);
  }
  return ppuVar1;
}



/* Entry: 10acd39c8; end: 10acd3a93;  */

void FUN_10acd39c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acd390c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[7] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[7] + 0x10));
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd3a94; end: 10acd3b4f;  */

void FUN_10acd3a94(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a19f9,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acd3b50);
  (*pcVar4)();
}



/* Entry: 10acd3b50; end: 10acd3c03;  */

undefined8 * FUN_10acd3b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  func_0x00010acd3ba8(param_1,param_2,*puVar2,puVar2);
  if (puVar2 != param_1) {
    uVar1 = *param_2;
    FUN_10a003d5c(uVar1,param_2[1],param_1[4],param_1[5]);
    if (((uint)uVar1 >> 7 & 1) == 0) {
      return param_1;
    }
  }
  return puVar2;
}



/* Entry: 10acd3c04; end: 10acd3ce7;  */

long FUN_10acd3c04(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10acd3ce8; end: 10acd3de3;  */

undefined1  [16] FUN_10acd3ce8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6ae70;
  puVar1 = &UNK_10f6a0902;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6ae70;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10acd3de4; end: 10acd3e9f;  */

void FUN_10acd3de4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a1a05,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acd3ea0);
  (*pcVar4)();
}



/* Entry: 10acd3ea0; end: 10acd3f9b;  */

undefined1  [16] FUN_10acd3ea0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6af30;
  puVar1 = &UNK_10f6a0902;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6af30;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c6ae70;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10acd3f9c; end: 10acd4107;  */

void FUN_10acd3f9c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a1a18,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acd4058);
  (*pcVar4)();
}



/* Entry: 10acd4108; end: 10acd42d7;  */

void FUN_10acd4108(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010acd4094(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10acd42d8; end: 10acd431f;  */

void FUN_10acd42d8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010acd4094(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10acd4320; end: 10acd441b;  */

undefined1  [16] FUN_10acd4320(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6afa8;
  puVar1 = &UNK_10f6a0902;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6afa8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10acd441c; end: 10acd44d7;  */

void FUN_10acd441c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a1a29,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acd44d8);
  (*pcVar4)();
}



/* Entry: 10acd44d8; end: 10acd45d3;  */

undefined1  [16] FUN_10acd44d8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6b038;
  puVar1 = &UNK_10f6a0902;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6b038;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10acd45d4; end: 10acd468f;  */

void FUN_10acd45d4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a1a3f,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acd4690);
  (*pcVar4)();
}



/* Entry: 10acd4690; end: 10acd478b;  */

undefined1  [16] FUN_10acd4690(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6b228;
  puVar1 = &UNK_10f6a0902;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6b228;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10acd478c; end: 10acd491b;  */

void FUN_10acd478c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a1a59,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acd4848);
  (*pcVar4)();
}



/* Entry: 10acd491c; end: 10acd4957;  */

undefined8 * FUN_10acd491c(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 != 0) {
    FUN_10acd49cc(puVar2);
    puVar3 = (undefined1 *)puVar2[1];
    puVar1 = puVar3 + param_2 * 0x10;
    do {
      *puVar3 = 0;
      puVar3[0xc] = 0;
      puVar3 = puVar3 + 0x10;
    } while (puVar3 != puVar1);
    puVar2[1] = puVar1;
  }
  return puVar2;
}



/* Entry: 10acd4958; end: 10acd49cb;  */

undefined8 * FUN_10acd4958(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10acd49cc(param_1);
    puVar2 = (undefined1 *)param_1[1];
    puVar1 = puVar2 + param_2 * 0x10;
    do {
      *puVar2 = 0;
      puVar2[0xc] = 0;
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != puVar1);
    param_1[1] = puVar1;
  }
  return param_1;
}



/* Entry: 10acd49cc; end: 10acd4a03;  */

undefined1  [16] FUN_10acd49cc(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3c == 0) {
    plVar2 = param_1;
    FUN_10acd4a18();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2 * 2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar2;
    return auVar4;
  }
  FUN_10acd4a04();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    lVar3 = param_2 << 4;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 10acd4a04; end: 10acd4a17;  */

undefined1  [16] FUN_10acd4a04(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auVar3 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 10acd4a18; end: 10acd4a4b;  */

undefined1  [16] FUN_10acd4a18(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 10acd4a4c; end: 10acd4b27;  */

undefined8 FUN_10acd4a4c(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  return 0;
}



/* Entry: 10acd4b28; end: 10acd4b53;  */

undefined8 FUN_10acd4b28(void)

{
  return 0;
}



/* Entry: 10acd4b54; end: 10acd4bef;  */

void FUN_10acd4b54(long *param_1,undefined8 param_2,undefined8 param_3,short param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)0x1e0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110bc5b10;
  puVar2 = puVar6 + 3;
  FUN_10acd4bf0(puVar2,param_2,param_3,&UNK_10e4ac970,(int)param_4);
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  if ((puVar6 + 5 != (long *)0x0) &&
     ((lVar5 = puVar6[6], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = puVar6[6];
    }
    puVar6[5] = puVar2;
    puVar6[6] = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10acd4bf0; end: 10acd4df3;  */

undefined8 *
FUN_10acd4bf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined2 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [8];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_10e52b660;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xfe00;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[4] = &PTR_FUN_110bc81c0;
  param_1[0x19] = &UNK_10e52b660;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = &UNK_10e52b660;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(ushort *)((long)param_1 + 0x109) = *(ushort *)((long)param_1 + 0x109) & 0xfc00;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_110bc8118;
  param_1[1] = &PTR_FUN_110bc8170;
  param_1[0x15] = 0;
  param_1[0x16] = &PTR_FUN_110bc81f0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x2d,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[0x2f] = param_2[2];
    param_1[0x2e] = uVar7;
    param_1[0x2d] = uVar6;
  }
  param_1[0x30] = param_2[3];
  uVar6 = *param_3;
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x31] = uVar6;
  param_1[0x32] = lVar2;
  if (sRam0000000113301c26 == -1) {
    sRam0000000113301c26 = 0x188;
  }
  func_0x00010a34f824(param_1 + 0x31);
  sVar5 = sRam0000000113301c28;
  uVar6 = param_4[4];
  uVar9 = *param_4;
  uVar8 = param_4[3];
  uVar7 = param_4[2];
  param_1[0x34] = param_4[1];
  param_1[0x33] = uVar9;
  param_1[0x36] = uVar8;
  param_1[0x35] = uVar7;
  param_1[0x37] = uVar6;
  if (sVar5 == -1) {
    sRam0000000113301c28 = 0x198;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined2 *)(param_1 + 0x38) = param_5;
  return param_1;
}



/* Entry: 10acd4df4; end: 10acd5083;  */

long * FUN_10acd4df4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x1d0;
    if (cRam00000001137ec796 == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x109);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0xe0) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x100) != 0)))) || ((*(ushort *)(lVar4 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110c6bfe8;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x1d0;
        if (cRam00000001137ec796 == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x50);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x109) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x20;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x60) = uStack_a0;
            *(ushort *)(lVar4 + 0x50) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x60;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x1d0;
        if (cRam00000001137ec796 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x1d0;
        if (cRam00000001137ec796 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x109) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x1d0;
          if (cRam00000001137ec796 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x1d0;
            if (cRam00000001137ec796 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x109) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xc0) = *(long *)(lVar4 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x110);
      ppuVar7 = *(undefined ***)(lVar4 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110c6bfe8 || ppuVar7 != &PTR_DAT_110c6bfe8) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110c6bfe8) {
          FUN_10a1bd648(plVar3,lVar4 + 0xb0,&PTR_DAT_110c6bfe8);
          *(undefined ***)(lVar4 + 0x110) = &PTR_DAT_110c6bfe8;
        }
        if (ppuVar7 != &PTR_DAT_110c6bfe8) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x20,&PTR_DAT_110c6bfe8);
          *(undefined ***)(lVar4 + 0x58) = &PTR_DAT_110c6bfe8;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10acd5084; end: 10acd50b7;  */

long FUN_10acd5084(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10acd50b8(param_1);
  }
  return param_1;
}



/* Entry: 10acd50b8; end: 10acd532b;  */

void FUN_10acd50b8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar3 = -0x188;
    if (cRam00000001137ec790 == '\0') {
      lVar3 = -0xffff;
    }
    lVar3 = *param_1 + lVar3;
    uVar4 = *(ushort *)(lVar3 + 0x109);
    if ((((uVar4 >> 8 & 1) == 0) &&
        (((*(long *)(lVar3 + 0xe0) != 0 || ((uVar4 >> 9 & 1) != 0)) ||
         (*(long *)(lVar3 + 0x100) != 0)))) || ((*(ushort *)(lVar3 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110ba2010;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar3 = -0x188;
        if (cRam00000001137ec790 == '\0') {
          lVar3 = -0xffff;
        }
        lVar3 = *param_1 + lVar3;
        uVar4 = *(ushort *)(lVar3 + 0x50);
        if (((uVar4 & 0x7f) == 0) && ((*(ushort *)(lVar3 + 0x109) & 0x7f) == 0)) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar2 = lVar3 + 0x20;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x60) = uStack_a0;
            *(ushort *)(lVar3 + 0x50) = uVar4 | 0x80;
          }
          uVar2 = lVar3 + 0x60;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar3 = *param_1;
        uVar4 = 0x188;
        if (cRam00000001137ec790 == '\0') {
          uVar4 = 0xffff;
        }
        lVar1 = 0x188;
        if (cRam00000001137ec790 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar3 - lVar1) + 0x109) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar3 = *param_1;
          uVar4 = 0x188;
          if (cRam00000001137ec790 == '\0') {
            uVar4 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar3 = *param_1;
            uVar4 = 0x188;
            if (cRam00000001137ec790 == '\0') {
              uVar4 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar3 - (ulong)uVar4) + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar3 + 0x109) >> 8 & 1) == 0) {
        *(long *)(lVar3 + 0xc0) = *(long *)(lVar3 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar3 + 0x110);
      ppuVar5 = *(undefined ***)(lVar3 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110ba2010 || ppuVar5 != &PTR_DAT_110ba2010) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110ba2010) {
          FUN_10a1bd648(param_1,lVar3 + 0xb0,&PTR_DAT_110ba2010);
          *(undefined ***)(lVar3 + 0x110) = &PTR_DAT_110ba2010;
        }
        if (ppuVar5 != &PTR_DAT_110ba2010) {
          FUN_10a1bd7d8(param_1,lVar3 + 0x20,&PTR_DAT_110ba2010);
          *(undefined ***)(lVar3 + 0x58) = &PTR_DAT_110ba2010;
        }
      }
    }
  }
  return;
}



/* Entry: 10acd532c; end: 10acd541b;  */

void FUN_10acd532c(long *param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10acd5394:
      puVar1 = (undefined8 *)0x48;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar1 + 4,*param_3,param_3[1]);
      }
      else {
        uVar5 = *param_3;
        puVar1[5] = param_3[1];
        puVar1[4] = uVar5;
        puVar1[6] = param_3[2];
      }
      puVar1[7] = param_3[3];
      puVar1[8] = param_4;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar4 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar1 = (undefined8 *)*plVar4;
      }
      func_0x000107c2b058(param_1[1],puVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10acd5394;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10acd541c; end: 10acd54ff;  */

void FUN_10acd541c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10acd5500; end: 10acd5533;  */

long FUN_10acd5500(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10acd5534(param_1);
  }
  return param_1;
}



/* Entry: 10acd5534; end: 10acd57a7;  */

void FUN_10acd5534(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar3 = -0x1a0;
    if (cRam00000001137ec792 == '\0') {
      lVar3 = -0xffff;
    }
    lVar3 = *param_1 + lVar3;
    uVar4 = *(ushort *)(lVar3 + 0x109);
    if ((((uVar4 >> 8 & 1) == 0) &&
        (((*(long *)(lVar3 + 0xe0) != 0 || ((uVar4 >> 9 & 1) != 0)) ||
         (*(long *)(lVar3 + 0x100) != 0)))) || ((*(ushort *)(lVar3 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6ab8;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar3 = -0x1a0;
        if (cRam00000001137ec792 == '\0') {
          lVar3 = -0xffff;
        }
        lVar3 = *param_1 + lVar3;
        uVar4 = *(ushort *)(lVar3 + 0x50);
        if (((uVar4 & 0x7f) == 0) && ((*(ushort *)(lVar3 + 0x109) & 0x7f) == 0)) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar2 = lVar3 + 0x20;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x60) = uStack_a0;
            *(ushort *)(lVar3 + 0x50) = uVar4 | 0x80;
          }
          uVar2 = lVar3 + 0x60;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar3 = *param_1;
        uVar4 = 0x1a0;
        if (cRam00000001137ec792 == '\0') {
          uVar4 = 0xffff;
        }
        lVar1 = 0x1a0;
        if (cRam00000001137ec792 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar3 - lVar1) + 0x109) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar3 = *param_1;
          uVar4 = 0x1a0;
          if (cRam00000001137ec792 == '\0') {
            uVar4 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar3 = *param_1;
            uVar4 = 0x1a0;
            if (cRam00000001137ec792 == '\0') {
              uVar4 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar3 - (ulong)uVar4) + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar3 + 0x109) >> 8 & 1) == 0) {
        *(long *)(lVar3 + 0xc0) = *(long *)(lVar3 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar3 + 0x110);
      ppuVar5 = *(undefined ***)(lVar3 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110bc6ab8 || ppuVar5 != &PTR_DAT_110bc6ab8) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd648(param_1,lVar3 + 0xb0,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar3 + 0x110) = &PTR_DAT_110bc6ab8;
        }
        if (ppuVar5 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd7d8(param_1,lVar3 + 0x20,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar3 + 0x58) = &PTR_DAT_110bc6ab8;
        }
      }
    }
  }
  return;
}



/* Entry: 10acd57a8; end: 10acd588b;  */

long FUN_10acd57a8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10acd588c; end: 10acd58bf;  */

long FUN_10acd588c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10acd58c0(param_1);
  }
  return param_1;
}



/* Entry: 10acd58c0; end: 10acd5b33;  */

void FUN_10acd58c0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar3 = -0x1b8;
    if (cRam00000001137ec794 == '\0') {
      lVar3 = -0xffff;
    }
    lVar3 = *param_1 + lVar3;
    uVar4 = *(ushort *)(lVar3 + 0x109);
    if ((((uVar4 >> 8 & 1) == 0) &&
        (((*(long *)(lVar3 + 0xe0) != 0 || ((uVar4 >> 9 & 1) != 0)) ||
         (*(long *)(lVar3 + 0x100) != 0)))) || ((*(ushort *)(lVar3 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110c6c000;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar3 = -0x1b8;
        if (cRam00000001137ec794 == '\0') {
          lVar3 = -0xffff;
        }
        lVar3 = *param_1 + lVar3;
        uVar4 = *(ushort *)(lVar3 + 0x50);
        if (((uVar4 & 0x7f) == 0) && ((*(ushort *)(lVar3 + 0x109) & 0x7f) == 0)) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar2 = lVar3 + 0x20;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x60) = uStack_a0;
            *(ushort *)(lVar3 + 0x50) = uVar4 | 0x80;
          }
          uVar2 = lVar3 + 0x60;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar3 = *param_1;
        uVar4 = 0x1b8;
        if (cRam00000001137ec794 == '\0') {
          uVar4 = 0xffff;
        }
        lVar1 = 0x1b8;
        if (cRam00000001137ec794 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar3 - lVar1) + 0x109) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar3 = *param_1;
          uVar4 = 0x1b8;
          if (cRam00000001137ec794 == '\0') {
            uVar4 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar3 = *param_1;
            uVar4 = 0x1b8;
            if (cRam00000001137ec794 == '\0') {
              uVar4 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar3 - (ulong)uVar4) + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar3 + 0x109) >> 8 & 1) == 0) {
        *(long *)(lVar3 + 0xc0) = *(long *)(lVar3 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar3 + 0x110);
      ppuVar5 = *(undefined ***)(lVar3 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110c6c000 || ppuVar5 != &PTR_DAT_110c6c000) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110c6c000) {
          FUN_10a1bd648(param_1,lVar3 + 0xb0,&PTR_DAT_110c6c000);
          *(undefined ***)(lVar3 + 0x110) = &PTR_DAT_110c6c000;
        }
        if (ppuVar5 != &PTR_DAT_110c6c000) {
          FUN_10a1bd7d8(param_1,lVar3 + 0x20,&PTR_DAT_110c6c000);
          *(undefined ***)(lVar3 + 0x58) = &PTR_DAT_110c6c000;
        }
      }
    }
  }
  return;
}



/* Entry: 10acd5b34; end: 10acd5df7;  */

void FUN_10acd5b34(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_1[2] != 0) {
    puVar8 = (undefined8 *)*param_1;
    plVar12 = param_1 + 1;
    *param_1 = plVar12;
    *(undefined8 *)(*plVar12 + 0x10) = 0;
    *plVar12 = 0;
    param_1[2] = 0;
    puVar9 = (undefined8 *)puVar8[1];
    if (puVar9 != (undefined8 *)0x0) {
      puVar8 = puVar9;
    }
    puStack_58 = param_1;
    puStack_50 = puVar8;
    puStack_48 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = puVar8;
      FUN_10acd5e4c();
      puStack_50 = puVar9;
      do {
        if (param_2 == param_3) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (puVar8 + 4,param_2 + 4);
        puVar8[7] = param_2[7];
        lVar13 = param_2[9];
        lVar10 = param_2[8];
        if (param_2[9] != 0) {
          plVar11 = (long *)(param_2[9] + 8);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar11 = (long *)puVar8[9];
        puVar8[9] = lVar13;
        puVar8[8] = lVar10;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 1;
          do {
            lVar10 = *plVar6;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = plVar12;
        plVar6 = plVar12;
        if ((long *)*plVar12 != (long *)0x0) {
          plVar2 = (long *)*plVar12;
          do {
            while (plVar11 = plVar2, (ulong)plVar11[7] <= (ulong)puStack_48[7]) {
              plVar2 = (long *)plVar11[1];
              if ((long *)plVar11[1] == (long *)0x0) {
                plVar6 = plVar11 + 1;
                goto LAB_10acd5c60;
              }
            }
            plVar6 = plVar11;
            plVar2 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
LAB_10acd5c60:
        FUN_10acd5df8(param_1,plVar11,plVar6);
        puVar8 = puStack_50;
        puStack_48 = puStack_50;
        if (puStack_50 != (undefined8 *)0x0) {
          FUN_10acd5e4c();
        }
        plVar11 = (long *)param_2[1];
        plVar6 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar6[2];
            bVar4 = (long *)*param_2 != plVar6;
            plVar6 = param_2;
          } while (bVar4);
        }
        else {
          do {
            param_2 = plVar11;
            plVar11 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (puVar8 != (undefined8 *)0x0);
    }
    FUN_10acd5ea0(&puStack_58);
  }
  if (param_2 != param_3) {
    puVar8 = param_1 + 1;
    do {
      puVar9 = (undefined8 *)0x50;
      __Znwm();
      puStack_48 = (undefined8 *)0x0;
      puStack_58 = puVar9;
      puStack_50 = param_1;
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        func_0x000107c3192c(puVar9 + 4,param_2[4],param_2[5]);
      }
      else {
        lVar13 = param_2[5];
        lVar10 = param_2[4];
        puVar9[6] = param_2[6];
        puVar9[5] = lVar13;
        puVar9[4] = lVar10;
      }
      puVar9[7] = param_2[7];
      lVar10 = param_2[9];
      lVar13 = param_2[8];
      puVar9[9] = param_2[9];
      puVar9[8] = lVar13;
      if (lVar10 != 0) {
        plVar12 = (long *)(lVar10 + 8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar5 = puVar8;
      puVar7 = puVar8;
      if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar8;
        do {
          while (puVar5 = puVar3, (ulong)puVar5[7] <= (ulong)puVar9[7]) {
            puVar3 = (undefined8 *)puVar5[1];
            if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
              puVar7 = puVar5 + 1;
              goto LAB_10acd5d78;
            }
          }
          puVar7 = puVar5;
          puVar3 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
LAB_10acd5d78:
      FUN_10acd5df8(param_1,puVar5,puVar7,puVar9);
      plVar12 = (long *)param_2[1];
      plVar11 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar11[2];
          bVar4 = (long *)*param_2 != plVar11;
          plVar11 = param_2;
        } while (bVar4);
      }
      else {
        do {
          param_2 = plVar12;
          plVar12 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10acd5df8; end: 10acd5e4b;  */

void FUN_10acd5df8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10acd5e4c; end: 10acd5e9f;  */

void FUN_10acd5e4c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10acd5ea0; end: 10acd5f33;  */

long FUN_10acd5ea0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010acd4848(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      *(long *)(param_1 + 8) = lVar2;
    }
    func_0x00010acd4848();
  }
  return param_1;
}



/* Entry: 10acd5f34; end: 10acd616b;  */

void FUN_10acd5f34(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  lVar1 = -0x1d0;
  if (cRam00000001137ec796 == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0x109) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0xe0) != 0) || ((*(ushort *)(lVar1 + 0x109) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0x100) != 0)) || ((*(ushort *)(lVar1 + 0x50) >> 8 & 1) == 0)) {
LAB_10acd5fac:
      func_0x00010a1bd170();
      if ((uVar2 & 1) != 0) {
        return;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_48 = &PTR_DAT_110c6bfe8;
      uVar2 = (ulong)&uStack_a0 | 8;
      FUN_10a0dad0c(uVar2,&ppuStack_48);
      lVar1 = -0x1d0;
      if (cRam00000001137ec796 == '\0') {
        lVar1 = -0xffff;
      }
      lVar1 = param_1 + lVar1;
      uVar3 = *(ushort *)(lVar1 + 0x50);
      if (((uVar3 & 0x7f) == 0) && ((*(ushort *)(lVar1 + 0x109) & 0x7f) == 0)) {
        if ((uVar3 >> 8 & 1) == 0) {
          uVar2 = lVar1 + 0x20;
          FUN_10a1bfe94(uVar2,&uStack_a0);
        }
        else {
          FUN_10a1bd5e0();
          if (uVar2 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar3 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar1 + 0x60) = uStack_a0;
          *(ushort *)(lVar1 + 0x50) = uVar3 | 0x80;
        }
        uVar2 = lVar1 + 0x60;
        FUN_10a1bd398(uVar2,&uStack_a0);
      }
      uVar3 = 0x1d0;
      if (cRam00000001137ec796 == '\0') {
        uVar3 = 0xffff;
      }
      lVar1 = 0x1d0;
      if (cRam00000001137ec796 == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0x109) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = 0x1d0;
        if (cRam00000001137ec796 == '\0') {
          uVar3 = 0xffff;
        }
        if (uVar2 != 0) {
          FUN_10a1bd648();
          uVar3 = 0x1d0;
          if (cRam00000001137ec796 == '\0') {
            uVar3 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar3) + 0xb0,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xc0) = *(long *)(lVar1 + 0xc0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x50) >> 8 & 1) == 0) goto LAB_10acd5fac;
  ppuVar5 = *(undefined ***)(lVar1 + 0x110);
  ppuVar4 = *(undefined ***)(lVar1 + 0x58);
  if ((ppuVar5 != &PTR_DAT_110c6bfe8 || ppuVar4 != &PTR_DAT_110c6bfe8) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar5 != &PTR_DAT_110c6bfe8) {
      FUN_10a1bd648(param_1,lVar1 + 0xb0,&PTR_DAT_110c6bfe8);
      *(undefined ***)(lVar1 + 0x110) = &PTR_DAT_110c6bfe8;
    }
    if (ppuVar4 != &PTR_DAT_110c6bfe8) {
      FUN_10a1bd7d8(param_1,lVar1 + 0x20,&PTR_DAT_110c6bfe8);
      *(undefined ***)(lVar1 + 0x58) = &PTR_DAT_110c6bfe8;
    }
  }
  return;
}



/* Entry: 10acd616c; end: 10acd6383;  */

void FUN_10acd616c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1[2] != 0) {
    lVar5 = *param_1;
    plVar7 = param_1 + 1;
    *param_1 = (long)plVar7;
    *(undefined8 *)(*plVar7 + 0x10) = 0;
    *plVar7 = 0;
    param_1[2] = 0;
    lVar6 = *(long *)(lVar5 + 8);
    if (lVar6 != 0) {
      lVar5 = lVar6;
    }
    plStack_58 = param_1;
    lStack_50 = lVar5;
    lStack_48 = lVar5;
    if (lVar5 != 0) {
      lVar6 = lVar5;
      FUN_10acd6384();
      lStack_50 = lVar6;
      do {
        if (param_2 == param_3) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar5 + 0x20,param_2 + 4);
        lVar6 = param_2[7];
        *(long *)(lVar5 + 0x40) = param_2[8];
        *(long *)(lVar5 + 0x38) = lVar6;
        plVar3 = plVar7;
        plVar4 = plVar7;
        if ((long *)*plVar7 != (long *)0x0) {
          plVar1 = (long *)*plVar7;
          do {
            while (plVar3 = plVar1, (ulong)plVar3[7] <= *(ulong *)(lStack_48 + 0x38)) {
              plVar1 = (long *)plVar3[1];
              if ((long *)plVar3[1] == (long *)0x0) {
                plVar4 = plVar3 + 1;
                goto LAB_10acd623c;
              }
            }
            plVar4 = plVar3;
            plVar1 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
LAB_10acd623c:
        FUN_10acd541c(param_1,plVar3,plVar4);
        lVar5 = lStack_50;
        lStack_48 = lStack_50;
        if (lStack_50 != 0) {
          FUN_10acd6384();
        }
        plVar3 = (long *)param_2[1];
        plVar4 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar4[2];
            bVar2 = (long *)*param_2 != plVar4;
            plVar4 = param_2;
          } while (bVar2);
        }
        else {
          do {
            param_2 = plVar3;
            plVar3 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (lVar5 != 0);
    }
    FUN_10acd63d8(&plStack_58);
  }
  if (param_2 != param_3) {
    plVar7 = param_1 + 1;
    do {
      lVar5 = 0x48;
      __Znwm();
      FUN_10a0487f8(lVar5 + 0x20,param_2 + 4);
      plVar3 = plVar7;
      plVar4 = plVar7;
      if ((long *)*plVar7 != (long *)0x0) {
        plVar1 = (long *)*plVar7;
        do {
          while (plVar3 = plVar1, (ulong)plVar3[7] <= *(ulong *)(lVar5 + 0x38)) {
            plVar1 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              plVar4 = plVar3 + 1;
              goto LAB_10acd6304;
            }
          }
          plVar4 = plVar3;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
LAB_10acd6304:
      FUN_10acd541c(param_1,plVar3,plVar4,lVar5);
      plVar3 = (long *)param_2[1];
      plVar4 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar4[2];
          bVar2 = (long *)*param_2 != plVar4;
          plVar4 = param_2;
        } while (bVar2);
      }
      else {
        do {
          param_2 = plVar3;
          plVar3 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10acd6384; end: 10acd63d7;  */

void FUN_10acd6384(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10acd63d8; end: 10acd6423;  */

long FUN_10acd63d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010acb6a64(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      *(long *)(param_1 + 8) = lVar2;
    }
    func_0x00010acb6a64();
  }
  return param_1;
}



/* Entry: 10acd6424; end: 10acd6433;  */

void FUN_10acd6424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acd6434; end: 10acd6453;  */

void FUN_10acd6434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c028;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acd6454; end: 10acd6497;  */

void FUN_10acd6454(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10acd6498; end: 10acd649b;  */

void FUN_10acd6498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acd649c; end: 10acd64ff;  */

void FUN_10acd649c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar5 = (undefined8 *)0x200;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c6c0c8;
  puVar1 = puVar5 + 3;
  func_0x00010aca3b50(puVar1,param_3);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  if ((puVar5 + 0x30 != (long *)0x0) &&
     ((lVar6 = puVar5[0x31], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = puVar5[0x31];
    }
    puVar5[0x30] = puVar1;
    puVar5[0x31] = plVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10acd6500; end: 10acd650f;  */

void FUN_10acd6500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c0c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acd6510; end: 10acd652f;  */

void FUN_10acd6510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c0c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acd6530; end: 10acd65b3;  */

long FUN_10acd6530(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010acb6a64(*(undefined8 *)(param_1 + 0x1f0));
  func_0x00010acd4848(*(undefined8 *)(param_1 + 0x1d8));
  func_0x00010a363354(param_1 + 0x1b8,*(undefined8 *)(param_1 + 0x1c0));
  func_0x00010a36330c(param_1 + 0x1a0,*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010acd48c4(param_1 + 400);
  if (*(long *)(param_1 + 0x188) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x38) = &PTR_DAT_110c6bf80;
  *(undefined ***)(param_1 + 200) = &PTR_DAT_110c6bfb0;
  FUN_10a1c0a9c((undefined8 *)(param_1 + 0x38));
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x20;
}



/* Entry: 10acd65b4; end: 10acd65b7;  */

void FUN_10acd65b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acd65b8; end: 10acd6667;  */

void FUN_10acd65b8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10acd6668; end: 10acd669b;  */

long FUN_10acd6668(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10acd669c(param_1);
  }
  return param_1;
}



/* Entry: 10acd669c; end: 10acd69ef;  */

void FUN_10acd669c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar3 = -0x188;
    if (cRam00000001137ec780 == '\0') {
      lVar3 = -0xffff;
    }
    lVar3 = *param_1 + lVar3;
    uVar4 = *(ushort *)(lVar3 + 0x109);
    if ((((uVar4 >> 8 & 1) == 0) &&
        (((*(long *)(lVar3 + 0xe0) != 0 || ((uVar4 >> 9 & 1) != 0)) ||
         (*(long *)(lVar3 + 0x100) != 0)))) || ((*(ushort *)(lVar3 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bd9f60;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar3 = -0x188;
        if (cRam00000001137ec780 == '\0') {
          lVar3 = -0xffff;
        }
        lVar3 = *param_1 + lVar3;
        uVar4 = *(ushort *)(lVar3 + 0x50);
        if (((uVar4 & 0x7f) == 0) && ((*(ushort *)(lVar3 + 0x109) & 0x7f) == 0)) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar2 = lVar3 + 0x20;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x60) = uStack_a0;
            *(ushort *)(lVar3 + 0x50) = uVar4 | 0x80;
          }
          uVar2 = lVar3 + 0x60;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar3 = *param_1;
        uVar4 = 0x188;
        if (cRam00000001137ec780 == '\0') {
          uVar4 = 0xffff;
        }
        lVar1 = 0x188;
        if (cRam00000001137ec780 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar3 - lVar1) + 0x109) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar3 = *param_1;
          uVar4 = 0x188;
          if (cRam00000001137ec780 == '\0') {
            uVar4 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar3 = *param_1;
            uVar4 = 0x188;
            if (cRam00000001137ec780 == '\0') {
              uVar4 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar3 - (ulong)uVar4) + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar3 + 0x109) >> 8 & 1) == 0) {
        *(long *)(lVar3 + 0xc0) = *(long *)(lVar3 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar3 + 0x110);
      ppuVar5 = *(undefined ***)(lVar3 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110bd9f60 || ppuVar5 != &PTR_DAT_110bd9f60) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bd9f60) {
          FUN_10a1bd648(param_1,lVar3 + 0xb0,&PTR_DAT_110bd9f60);
          *(undefined ***)(lVar3 + 0x110) = &PTR_DAT_110bd9f60;
        }
        if (ppuVar5 != &PTR_DAT_110bd9f60) {
          FUN_10a1bd7d8(param_1,lVar3 + 0x20,&PTR_DAT_110bd9f60);
          *(undefined ***)(lVar3 + 0x58) = &PTR_DAT_110bd9f60;
        }
      }
    }
  }
  return;
}



/* Entry: 10acd69f0; end: 10acd6a43;  */

void FUN_10acd69f0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10acd6a44; end: 10acd6a63;  */

void FUN_10acd6a44(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar11 = *(long **)(param_2 + 0x10);
  puVar8 = *(ulong **)(*plVar11 + 0x188);
  plVar1 = plVar11 + 3;
  plStack_88 = (long *)(plVar11[1] + 0x1a0);
  uStack_80 = 0;
  plVar9 = (long *)(plVar11[1] + 0x1a8);
  plVar10 = (long *)*plVar9;
  plVar7 = param_1;
  if (plVar10 == (long *)0x0) {
LAB_10aca7ee8:
    FUN_10aca355c();
    plVar9 = plStack_88;
    FUN_10acd4b54(&uStack_a0,plVar1,param_1,plVar7);
    uVar14 = plVar11[6];
    plVar12 = plVar9 + 1;
    plVar10 = (long *)*plVar12;
    plVar13 = plVar12;
    if ((long *)*plVar12 != (long *)0x0) {
      do {
        while (plVar12 = plVar10, uVar14 < (ulong)plVar12[7]) {
          plVar10 = (long *)*plVar12;
          plVar13 = plVar12;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_10aca7f5c;
        }
        if (uVar14 <= (ulong)plVar12[7]) goto LAB_10aca7fc0;
        plVar10 = (long *)plVar12[1];
      } while ((long *)plVar12[1] != (long *)0x0);
      plVar13 = plVar12 + 1;
    }
LAB_10aca7f5c:
    lVar6 = 0x50;
    __Znwm();
    plStack_70 = plVar9;
    uStack_68 = 0;
    lStack_78 = lVar6;
    if (*(char *)((long)plVar11 + 0x2f) < '\0') {
      func_0x000107c3192c(lVar6 + 0x20,*plVar1,plVar11[4]);
      uVar14 = plVar11[6];
    }
    else {
      lVar15 = *plVar1;
      *(long *)(lVar6 + 0x28) = plVar11[4];
      *(long *)(lVar6 + 0x20) = lVar15;
      *(long *)(lVar6 + 0x30) = plVar11[5];
    }
    *(ulong *)(lVar6 + 0x38) = uVar14;
    *(long **)(lVar6 + 0x48) = plStack_98;
    *(undefined8 *)(lVar6 + 0x40) = uStack_a0;
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    FUN_10a365abc(plVar9,plVar12,plVar13,lVar6);
LAB_10aca7fc0:
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar9 = plStack_98;
      } while (cVar2 != '\0');
LAB_10aca7fdc:
      if (lVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  else {
    plVar13 = plVar9;
    do {
      lVar6 = 8;
      if ((ulong)plVar11[6] <= (ulong)plVar10[7]) {
        lVar6 = 0;
        plVar13 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar6);
    } while (plVar10 != (long *)0x0);
    if ((plVar13 == plVar9) || ((ulong)plVar11[6] < (ulong)plVar13[7])) goto LAB_10aca7ee8;
    plVar13 = plVar13 + 8;
    plVar9 = *(long **)(*(long *)(*plVar13 + 0x188) + 0x268);
    if (plVar9 == (long *)0x0) {
      iVar4 = 4;
    }
    else {
      (**(code **)(*plVar9 + 0xe0))();
      iVar4 = (int)plVar9;
    }
    plVar9 = *(long **)(*param_1 + 0x268);
    if (plVar9 == (long *)0x0) {
      iVar5 = 4;
    }
    else {
      (**(code **)(*plVar9 + 0xe0))();
      iVar5 = (int)plVar9;
    }
    if (iVar4 == iVar5) {
      FUN_10a32f140(*plVar13,param_1);
      goto LAB_10aca8044;
    }
    FUN_10aca355c();
    FUN_10acd4b54(&lStack_78,plVar1,param_1,plVar7);
    FUN_10a32efa8(plVar13,&lStack_78);
    if (plStack_70 != (long *)0x0) {
      plVar1 = plStack_70 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar9 = plStack_70;
      } while (cVar2 != '\0');
      goto LAB_10aca7fdc;
    }
  }
  uVar14 = *puVar8 + 0x9e3779b9;
  uVar14 = uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
  uVar14 = plVar11[6] + uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
  *puVar8 = uVar14 * 0x40 + (long)(int)plVar7 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
LAB_10aca8044:
  FUN_10acd5500(&plStack_88);
  return;
}



/* Entry: 10acd6a64; end: 10acd6aab;  */

void FUN_10acd6a64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x18));
    }
    func_0x00010a2f5728(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10acd6aac; end: 10acd6ac3;  */

void FUN_10acd6aac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10acd6ac4; end: 10acd6b27;  */

void FUN_10acd6ac4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c6c130;
  puVar1 = puVar5 + 3;
  FUN_10acab528(puVar1,param_3);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  if ((puVar5 + 0x30 != (long *)0x0) &&
     ((lVar6 = puVar5[0x31], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = puVar5[0x31];
    }
    puVar5[0x30] = puVar1;
    puVar5[0x31] = plVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10acd6b28; end: 10acd6b37;  */

void FUN_10acd6b28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c130;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acd6b38; end: 10acd6b57;  */

void FUN_10acd6b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c130;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acd6b58; end: 10acd6bbb;  */

long FUN_10acd6b58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010acb6aac(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010acd48c4(param_1 + 400);
  if (*(long *)(param_1 + 0x188) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x38) = &PTR_DAT_110c6c078;
  *(undefined ***)(param_1 + 200) = &PTR_DAT_110c6c0a8;
  FUN_10a1c0a9c((undefined8 *)(param_1 + 0x38));
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x20;
}



/* Entry: 10acd6bbc; end: 10acd6bbf;  */

void FUN_10acd6bbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acd6bc0; end: 10acd6cc7;  */

void FUN_10acd6bc0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10acd6cc8; end: 10acd6d67;  */

void FUN_10acd6cc8(long *param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1 - (ulong)uRam00000001133020d8;
  if (param_5 != 0) {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = lVar2 + 0x30;
    }
    param_5 = param_5 << 4;
    do {
      if (*param_4 != 0) {
        func_0x00010a1bf190(*param_4 + 0xb0,lVar1);
      }
      param_4 = param_4 + 2;
      param_5 = param_5 + -0x10;
    } while (param_5 != 0);
  }
  if (param_3 != 0) {
    param_3 = param_3 << 4;
    do {
      if (*param_2 != 0) {
        func_0x00010a1bf34c(*param_2 + 0xb0,lVar2 + 0x30);
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -0x10;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10acd6d68; end: 10acd6d9b;  */

long FUN_10acd6d68(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10acd6d9c(param_1);
  }
  return param_1;
}



/* Entry: 10acd6d9c; end: 10acd705f;  */

void FUN_10acd6d9c(long *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long alStack_a0 [11];
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar3 = 0;
    plVar6 = (long *)(*param_1 - (ulong)uRam00000001133020d8);
    puVar1 = (ushort *)((long)plVar6 + 0x119);
    if ((((*puVar1 >> 8 & 1) == 0) &&
        (((plVar6[0x1e] != 0 || ((*puVar1 >> 9 & 1) != 0)) || (plVar6[0x22] != 0)))) ||
       ((*(ushort *)(plVar6 + 0xc) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        alStack_a0[7] = 0;
        alStack_a0[6] = 0;
        alStack_a0[9] = 0;
        alStack_a0[8] = 0;
        alStack_a0[3] = 0;
        alStack_a0[2] = 0;
        alStack_a0[5] = 0;
        alStack_a0[4] = 0;
        alStack_a0[1] = 0;
        alStack_a0[0] = 0;
        ppuStack_48 = &PTR_DAT_110bda018;
        FUN_10a0dad0c((ulong)alStack_a0 | 8,&ppuStack_48);
        plVar5 = plVar6 + 6;
        plVar4 = plVar5;
        (**(code **)(*plVar5 + 0x18))();
        uVar2 = *(ushort *)(plVar6 + 0xc);
        if ((int)plVar4 == 0) {
          if ((uVar2 >> 8 & 1) == 0) {
            FUN_10a1bfe94(plVar5,alStack_a0);
            plVar4 = plVar5;
            if (((ulong)plVar5 & 1) == 0) {
              plVar4 = plVar6;
              (**(code **)(*plVar6 + 0x88))(plVar6,alStack_a0);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (plVar4 != (long *)0x0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar2 >> 7 & 1) == 0) {
            plVar6[0xe] = alStack_a0[0];
            *(ushort *)(plVar6 + 0xc) = uVar2 | 0x80;
          }
          plVar4 = plVar6 + 0xe;
          FUN_10a1bd398(plVar4,alStack_a0);
        }
        if (((*puVar1 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), plVar4 != (long *)0x0)) {
          FUN_10a1bd648();
        }
        FUN_10a1c054c(plVar6 + 0x18,alStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*puVar1 >> 8 & 1) == 0) {
        plVar6[0x1a] = plVar6[0x1a] + 1;
      }
      ppuVar8 = (undefined **)plVar6[0x24];
      ppuVar7 = (undefined **)plVar6[0xd];
      if ((ppuVar8 != &PTR_DAT_110bda018 || ppuVar7 != &PTR_DAT_110bda018) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar8 != &PTR_DAT_110bda018) {
          FUN_10a1bd648(param_1,plVar6 + 0x18,&PTR_DAT_110bda018);
          plVar6[0x24] = (long)&PTR_DAT_110bda018;
        }
        if (ppuVar7 != &PTR_DAT_110bda018) {
          FUN_10a1bd7d8(param_1,plVar6 + 6,&PTR_DAT_110bda018);
          plVar6[0xd] = (long)&PTR_DAT_110bda018;
        }
      }
    }
  }
  return;
}



/* Entry: 10acd7060; end: 10acd70b3;  */

void FUN_10acd7060(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10acd70b4; end: 10acd71b3;  */

void FUN_10acd70b4(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10acd7120:
      lVar1 = 0x50;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(lVar1 + 0x20,*param_3,param_3[1]);
      }
      else {
        uVar5 = *param_3;
        *(undefined8 *)(lVar1 + 0x28) = param_3[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
        *(undefined8 *)(lVar1 + 0x30) = param_3[2];
      }
      *(undefined8 *)(lVar1 + 0x38) = param_3[3];
      uVar5 = *param_4;
      *(undefined8 *)(lVar1 + 0x48) = param_4[1];
      *(undefined8 *)(lVar1 + 0x40) = uVar5;
      *param_4 = 0;
      param_4[1] = 0;
      FUN_10a0da7d4(param_1,plVar3,plVar4,lVar1);
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10acd7120;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10acd71b4; end: 10acd73a3;  */

long * FUN_10acd71b4(long *param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar4 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar2 = -0x1a0;
    if (cRam00000001137ec792 == '\0') {
      lVar2 = -0xffff;
    }
    lVar2 = *param_1 + lVar2;
    puVar1 = (ushort *)(lVar2 + 0x109);
    if ((((*puVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar2 + 0xe0) != 0 || ((*puVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar2 + 0x100) != 0)))) || ((*(ushort *)(lVar2 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6ab8;
        uVar4 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar4,&ppuStack_48);
        uVar3 = *(ushort *)(lVar2 + 0x50);
        if (((uVar3 & 0x7f) == 0) && ((*puVar1 & 0x7f) == 0)) {
          if ((uVar3 >> 8 & 1) == 0) {
            uVar4 = lVar2 + 0x20;
            FUN_10a1bfe94(uVar4,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar4 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar3 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar2 + 0x60) = uStack_a0;
            *(ushort *)(lVar2 + 0x50) = uVar3 | 0x80;
          }
          uVar4 = lVar2 + 0x60;
          FUN_10a1bd398(uVar4,&uStack_a0);
        }
        if (((*puVar1 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), uVar4 != 0)) {
          FUN_10a1bd648();
        }
        FUN_10a1c054c(lVar2 + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*puVar1 >> 8 & 1) == 0) {
        *(long *)(lVar2 + 0xc0) = *(long *)(lVar2 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar2 + 0x110);
      ppuVar7 = *(undefined ***)(lVar2 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110bc6ab8 || ppuVar7 != &PTR_DAT_110bc6ab8) &&
         (plVar5 = param_1, FUN_10a1bd5e0(), plVar5 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd648(plVar5,lVar2 + 0xb0,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar2 + 0x110) = &PTR_DAT_110bc6ab8;
        }
        if (ppuVar7 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd7d8(plVar5,lVar2 + 0x20,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar2 + 0x58) = &PTR_DAT_110bc6ab8;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10acd73a4; end: 10acd74bb;  */

void FUN_10acd73a4(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10acd7410:
      lVar1 = 0x50;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(lVar1 + 0x20,*param_3,param_3[1]);
      }
      else {
        uVar5 = *param_3;
        *(undefined8 *)(lVar1 + 0x28) = param_3[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
        *(undefined8 *)(lVar1 + 0x30) = param_3[2];
      }
      *(undefined8 *)(lVar1 + 0x38) = param_3[3];
      FUN_10a3500ac(lVar1 + 0x40,param_4);
      FUN_10a365abc(param_1,plVar3,plVar4,lVar1);
      return;
    }
    while (plVar3 = plVar2, (ulong)plVar3[7] <= param_2) {
      if (param_2 <= (ulong)plVar3[7]) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10acd7410;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10acd74bc; end: 10acd75e7;  */

void FUN_10acd74bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar5 + 0x30))(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acd75e8; end: 10acd76bb;  */

void FUN_10acd75e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10acd76bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar2 + 0x2c) >> 0x20) -
                       (float)((ulong)*(undefined8 *)((long)plVar2 + 0x24) >> 0x20),
                       (float)*(undefined8 *)((long)plVar2 + 0x2c) -
                       (float)*(undefined8 *)((long)plVar2 + 0x24));
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10acd76bc; end: 10acd7723;  */

void FUN_10acd76bc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uStack_68;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar1);
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar2 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = plVar2;
  FUN_10acd76bc(plVar2,param_2);
  FUN_10a052e3c(param_4);
  uStack_68 = CONCAT44(((float)((ulong)*(undefined8 *)((long)plVar4 + 0x2c) >> 0x20) +
                       (float)((ulong)*(undefined8 *)((long)plVar4 + 0x24) >> 0x20)) * 0.5,
                       ((float)*(undefined8 *)((long)plVar4 + 0x2c) +
                       (float)*(undefined8 *)((long)plVar4 + 0x24)) * 0.5);
  FUN_10a07ff64(extraout_x8,plVar2,&uStack_68);
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10acd7724; end: 10acd77ff;  */

void FUN_10acd7724(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10acd76bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = CONCAT44(((float)((ulong)*(undefined8 *)((long)plVar2 + 0x2c) >> 0x20) +
                       (float)((ulong)*(undefined8 *)((long)plVar2 + 0x24) >> 0x20)) * 0.5,
                       ((float)*(undefined8 *)((long)plVar2 + 0x2c) +
                       (float)*(undefined8 *)((long)plVar2 + 0x24)) * 0.5);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10acd7800; end: 10acd78eb;  */

void FUN_10acd7800(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  pauVar1 = (undefined1 (*) [12])((long)plVar6 + 0x24);
  fVar20 = (float)((ulong)*(undefined8 *)((long)plVar6 + 0x2c) >> 0x20);
  fVar18 = (float)*(undefined8 *)*pauVar1;
  fVar19 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar21._12_4_ = fVar20;
  auVar21._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar20;
  auVar2._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar21,auVar2,8,1);
  fVar16 = ((float)*param_2 - (auVar21._0_4_ - fVar18)) * 0.5;
  fVar17 = ((float)((ulong)*param_2 >> 0x20) - (auVar21._4_4_ - fVar19)) * 0.5;
  *(ulong *)((long)plVar6 + 0x2c) =
       CONCAT44(fVar20 + fVar17,(float)*(undefined8 *)((long)plVar6 + 0x2c) + fVar16);
  *(ulong *)((long)plVar6 + 0x24) = CONCAT44(fVar19 - fVar17,fVar18 - fVar16);
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(CONCAT44(fVar19 + fVar17,fVar18 + fVar16),lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10acd78ec; end: 10acd79cf;  */

void FUN_10acd78ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  pauVar1 = (undefined1 (*) [12])((long)plVar6 + 0x24);
  fVar20 = (float)((ulong)*(undefined8 *)((long)plVar6 + 0x2c) >> 0x20);
  fVar18 = (float)*(undefined8 *)*pauVar1;
  fVar19 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar21._12_4_ = fVar20;
  auVar21._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar20;
  auVar2._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar21,auVar2,8,1);
  fVar16 = (float)*param_2 + (auVar21._0_4_ + fVar18) * -0.5;
  fVar17 = (float)((ulong)*param_2 >> 0x20) + (auVar21._4_4_ + fVar19) * -0.5;
  *(ulong *)((long)plVar6 + 0x2c) =
       CONCAT44(fVar20 + fVar17,(float)*(undefined8 *)((long)plVar6 + 0x2c) + fVar16);
  *(ulong *)((long)plVar6 + 0x24) = CONCAT44(fVar19 + fVar17,fVar18 + fVar16);
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10acd79d0; end: 10acd7a8b;  */

void FUN_10acd79d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acd76bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x24);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd7a8c; end: 10acd7b7b;  */

void FUN_10acd7a8c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acd7b68);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x24) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acd7b7c; end: 10acd7c37;  */

void FUN_10acd7b7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acd76bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x2c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd7c38; end: 10acd7d27;  */

void FUN_10acd7c38(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acd7d14);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x2c) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acd7d28; end: 10acd7de3;  */

void FUN_10acd7d28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acd76bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 6);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd7de4; end: 10acd7ed3;  */

void FUN_10acd7de4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acd7ec0);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 6) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acd7ed4; end: 10acd7f8f;  */

void FUN_10acd7ed4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acd76bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 5);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd7f90; end: 10acd807f;  */

void FUN_10acd7f90(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b7c24(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acd806c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 5) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acd8080; end: 10acd826f;  */

void FUN_10acd8080(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  long *plStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a48cd98(param_5);
  if (*param_4 == 3) {
    fVar10 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar10 = 0.0;
    }
    if (param_4[4] == 3) {
      fVar11 = (float)*(double *)(param_4 + 6);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 6))) {
        fVar11 = 0.0;
      }
      if ((param_4[8] == 3) && (param_4[0xc] == 3)) {
        dVar12 = *(double *)(param_4 + 10);
        dVar13 = *(double *)(param_4 + 0xe);
        plVar8 = (long *)0x50;
        __Znwm();
        fVar4 = (float)dVar13;
        if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
          fVar4 = 0.0;
        }
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = (long)&PTR_FUN_110bcfba8;
        plVar8[4] = 0;
        plVar8[5] = 0;
        *(undefined1 *)(plVar8 + 7) = 0;
        plStack_70 = plVar8 + 3;
        *plStack_70 = (long)&PTR_FUN_110c6a8d8;
        plVar8[6] = (long)&PTR_FUN_110c6a940;
        fVar5 = (float)dVar12;
        if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
          fVar5 = 0.0;
        }
        *(float *)((long)plVar8 + 0x3c) = fVar10;
        *(float *)(plVar8 + 8) = fVar5;
        *(float *)((long)plVar8 + 0x44) = fVar11;
        *(float *)(plVar8 + 9) = fVar4;
        plStack_68 = plVar8;
        func_0x00010a20fa88(param_1,param_2,&plStack_70);
        plVar8 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        func_0x00010988c170(plVar7 + 0x4b);
        return;
      }
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acd825c);
  (*pcVar6)();
}



/* Entry: 10acd8270; end: 10acd839b;  */

void FUN_10acd8270(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10acd839c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar5 + 0x30))(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acd839c; end: 10acd8403;  */

void FUN_10acd839c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lStack_68;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar1);
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar2 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = plVar2;
  FUN_10acd8594(plVar2,param_2);
  FUN_10a052e3c(param_4);
  lStack_68 = plVar4[3];
  FUN_10a07ff64(extraout_x8,plVar2,&lStack_68);
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10acd8404; end: 10acd84cf;  */

void FUN_10acd8404(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10acd8594(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = plVar2[3];
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}


