/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b49e820; end: 10b49e93b;  */

undefined8 * FUN_10b49e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0x32aaaba7;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0x32aaaba7;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b49f2cc(auStack_70,&uStack_40,0);
  FUN_10b49f304(auStack_88,&PTR_DAT_110ced6e8,0);
  FUN_10b49e93c(auStack_58,auStack_70,auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x15,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return param_1;
}



/* Entry: 10b49e93c; end: 10b49e973;  */

void FUN_10b49e93c(undefined8 param_1,undefined8 param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2);
  func_0x00010b49f3ac();
  FUN_10b49efb0();
  return;
}



/* Entry: 10b49e974; end: 10b49ec43;  */

void FUN_10b49e974(long param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  long lVar6;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  long ***ppplStack_310;
  ulong uStack_308;
  byte bStack_2f9;
  undefined1 auStack_2f8 [24];
  long **pplStack_2e0;
  long **pplStack_2d8;
  long **applStack_2d0 [2];
  long **applStack_2c0 [2];
  long lStack_2b0;
  long alStack_298 [2];
  long ***ppplStack_288;
  byte abStack_278 [8];
  long alStack_270 [68];
  
  func_0x00010b49f40c();
  func_0x00010b49f3e8();
  uVar2 = *(char *)(ppplStack_288 + 3) == '\x01';
  if ((bool)uVar2) {
    FUN_10b49f040();
    func_0x00010b49f394();
    pppplVar5 = (long ****)ppplStack_288;
  }
  else {
    func_0x00010b49f394();
    pplStack_2e0 = (long **)0x0;
    pplStack_2d8 = (long **)0x0;
    applStack_2d0[0] = (long **)0x0;
    func_0x00010b49ec64(auStack_2f8,param_1 + 0x60);
    pppplVar5 = (long ****)(param_1 + 0xa8);
    func_0x000107c28038(alStack_298,pppplVar5,0xc);
    uVar2 = 0;
    if ((abStack_278[*(long *)(alStack_298[0] + -0x18)] & 5) == 0) {
      pppplVar5 = *(long *****)((long)alStack_270 + *(long *)(alStack_298[0] + -0x18));
      func_0x000107c28088(&ppplStack_310,pppplVar5,0);
      func_0x000105344a58(alStack_298);
      uVar2 = bStack_2f9 == 0;
      if (-1 < (char)bStack_2f9) {
        uStack_308 = (ulong)bStack_2f9;
      }
      if (uStack_308 != 0) {
        ppuStack_348 = &PTR_FUN_110cfacd0;
        uStack_340 = 0;
        uStack_330 = 0;
        uStack_338 = 0;
        uStack_320 = 0;
        uStack_328 = 0;
        uStack_318 = 0;
        uVar2 = bStack_2f9 == 0;
        pppplVar5 = (long ****)ppplStack_310;
        if (-1 < (char)bStack_2f9) {
          pppplVar5 = &ppplStack_310;
        }
        uVar3 = 0;
        func_0x000107c30344();
        if ((uVar3 & 1) != 0) {
          pppplVar5 = (long ****)(long)(int)uStack_330;
          FUN_10b49dc20(&pplStack_2e0);
          uVar2 = (uStack_338 & 1) == 0;
          puVar1 = &uStack_338;
          if (!(bool)uVar2) {
            puVar1 = (ulong *)(uStack_338 + 7);
          }
          for (lVar6 = (long)(int)uStack_330 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
            pppplVar5 = (long ****)*puVar1;
            uVar2 = pplStack_2d8 == applStack_2d0[0];
            if (pplStack_2d8 < applStack_2d0[0]) {
              FUN_10b49e040();
              ppplVar4 = (long ***)(pplStack_2d8 + 6);
            }
            else {
              ppplVar4 = &pplStack_2e0;
              FUN_10b49e188(ppplVar4,((long)pplStack_2d8 - (long)pplStack_2e0) / 0x30 + 1);
              FUN_10b49dedc(applStack_2c0,ppplVar4,((long)pplStack_2d8 - (long)pplStack_2e0) / 0x30,
                            applStack_2d0);
              FUN_10b49e040(lStack_2b0,pppplVar5);
              lStack_2b0 = lStack_2b0 + 0x30;
              pppplVar5 = (long ****)applStack_2c0;
              FUN_10b49de5c(&pplStack_2e0);
              ppplVar4 = (long ***)pplStack_2d8;
              func_0x00010b49e114(applStack_2c0);
            }
            pplStack_2d8 = (long **)ppplVar4;
            puVar1 = puVar1 + 1;
          }
        }
        FUN_10b519e88(&ppuStack_348);
      }
      func_0x00010b49f3a4();
    }
    func_0x000107c2803c(alStack_298);
    func_0x00010b49f404();
    func_0x00010b49f3e8();
    ppplVar4 = ppplStack_288;
    if (((ulong)ppplStack_288[3] & 1) == 0) {
      func_0x00010b49f1e4(ppplStack_288);
      ppplVar4[1] = pplStack_2d8;
      *ppplVar4 = pplStack_2e0;
      ppplVar4[2] = applStack_2d0[0];
      pplStack_2e0 = (long **)0x0;
      pplStack_2d8 = (long **)0x0;
      applStack_2d0[0] = (long **)0x0;
      *(undefined1 *)(ppplStack_288 + 3) = 1;
    }
    func_0x00010b49f3ac();
    FUN_10b49f040();
    func_0x00010b49f394();
    FUN_10b49dd9c();
  }
  func_0x00010b49f3d0();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b519e88(&ppuStack_348);
  func_0x00010b49f3a4();
  func_0x000107c2803c(alStack_298);
  func_0x000107c2798c(auStack_2f8);
  ppplVar4 = &pplStack_2e0;
  FUN_10b49dd9c();
  func_0x00010b49f3f4();
  func_0x000107c27f4c();
  ppplVar4[2] = (long **)(pppplVar5 + 8);
  return;
}



/* Entry: 10b49ec44; end: 10b49ec83;  */

void FUN_10b49ec44(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b49ec84; end: 10b49efaf;  */

undefined *** FUN_10b49ec84(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_350 [24];
  int aiStack_338 [2];
  long *plStack_330;
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [16];
  int *piStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  long alStack_290 [2];
  long *plStack_280;
  byte abStack_270 [544];
  
  func_0x00010b49f40c();
  FUN_10b49ec44(alStack_290,param_1);
  plVar7 = plStack_280;
  if (plStack_280 != param_2) {
    lVar6 = *param_2;
    lVar1 = param_2[1];
    uVar11 = lVar1 - lVar6;
    if ((ulong)(plStack_280[2] - *plStack_280) < uVar11) {
      func_0x00010b49f1e4(plStack_280);
      plVar5 = plVar7;
      FUN_10b49e188(plVar7,(long)uVar11 / 0x30);
      FUN_10b49f0c0(plVar7,plVar5);
      lVar13 = lVar6;
    }
    else {
      uVar12 = plStack_280[1] - *plStack_280;
      if (uVar11 <= uVar12) {
        FUN_10b49f21c(lVar6,lVar1);
        FUN_10b49de14(plVar7,lVar6);
        goto LAB_10b49ed5c;
      }
      lVar13 = lVar6 + uVar12;
      FUN_10b49f21c(lVar6,lVar13);
    }
    FUN_10b49f108(plVar7,lVar13,lVar1);
  }
LAB_10b49ed5c:
  *(undefined1 *)(plStack_280 + 3) = 1;
  iVar2 = *(int *)((long)plStack_280 + 0x1c);
  *(int *)((long)plStack_280 + 0x1c) = iVar2 + 1;
  func_0x000107c2798c(alStack_290);
  ppuStack_2c8 = &PTR_FUN_110cfacd0;
  uStack_2c0 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_298 = 0;
  lVar1 = param_2[1];
  for (lVar6 = *param_2; uVar3 = lVar6 == lVar1, !(bool)uVar3; lVar6 = lVar6 + 0x30) {
    func_0x000107c303b0(&uStack_2b8,FUN_10b49f274);
    func_0x00010b519e30();
  }
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uVar11 = 0;
  iVar4 = (int)&uStack_2e0;
  func_0x000107c30364();
  if ((uVar11 & 1) == 0) goto LAB_10b49eeec;
  iVar4 = (int)param_1 + 0x60;
  func_0x00010b49ec64(auStack_2f8);
  uVar3 = *piStack_2e8 == iVar2;
  if (*piStack_2e8 <= iVar2) {
    func_0x000107c27d14(auStack_310,param_1 + 0xa8,&UNK_10f6a9148);
    puVar10 = auStack_310;
    func_0x000107c2800c(alStack_290,puVar10,4);
    iVar4 = (int)puVar10;
    uVar3 = (abStack_270[*(long *)(alStack_290[0] + -0x18)] & 5) == 0;
    if ((bool)uVar3) {
      iVar4 = (int)&uStack_2e0;
      func_0x000107c28084(alStack_290);
      plVar7 = alStack_290;
      func_0x000107c28014();
      if (*(int *)(abStack_270 + *(long *)(alStack_290[0] + -0x18)) == 0) {
        aiStack_338[0] = 0;
        __ZNSt3__115system_categoryEv();
        plStack_330 = plVar7;
        func_0x00010b49f35c();
        func_0x000107c27fe4(auStack_350,param_1 + 0xa8,0);
        iVar4 = (int)auStack_350;
        func_0x00010534487c(auStack_328,auStack_350,aiStack_338);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_350);
        func_0x00010b49f3fc();
        if (aiStack_338[0] == 0) {
          *piStack_2e8 = iVar2 + 1;
          goto LAB_10b49eedc;
        }
        func_0x00010b49f35c();
        iVar4 = (int)aiStack_338;
        __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(auStack_328);
      }
      else {
        func_0x00010b49f35c();
        func_0x000105344754(auStack_328);
      }
      func_0x00010b49f3fc();
    }
LAB_10b49eedc:
    func_0x000107c28010(alStack_290);
    func_0x00010b49f3a4();
  }
  func_0x00010b49f404();
LAB_10b49eeec:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e0);
  pppuVar8 = &ppuStack_2c8;
  FUN_10b519e88();
  func_0x00010b49f3d0();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    if (iVar4 != 0) {
      func_0x000104bd46a0();
      func_0x000107c28010(alStack_290);
      func_0x00010b49f3a4();
      func_0x00010b49f404();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e0);
      pppuVar8 = &ppuStack_2c8;
      FUN_10b519e88();
    }
    func_0x00010b49f3f4();
    func_0x00010b49f024();
    if (iVar4 == 0) {
      pppuVar9 = pppuVar8;
      func_0x00010b49f008();
      if ((int)pppuVar9 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(pppuVar8,0x2f);
      }
      func_0x00010b49f3ac();
      func_0x000107c27fc4();
    }
    else {
      func_0x00010b49f3ac();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    }
    return pppuVar8;
  }
  return pppuVar8;
}



/* Entry: 10b49efb0; end: 10b49f007;  */

undefined8 FUN_10b49efb0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  func_0x00010b49f024();
  if (param_2 == 0) {
    uVar1 = param_1;
    func_0x00010b49f008();
    if ((int)uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x2f);
    }
    func_0x00010b49f3ac();
    func_0x000107c27fc4();
  }
  else {
    func_0x00010b49f3ac();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  return param_1;
}



/* Entry: 10b49f008; end: 10b49f03f;  */

bool FUN_10b49f008(undefined8 param_1,long param_2)

{
  __ZNKSt3__14__fs10filesystem4path10__filenameEv();
  return param_2 != 0;
}



/* Entry: 10b49f040; end: 10b49f0bf;  */

void FUN_10b49f040(undefined8 param_1,long *param_2)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010b49f3c0();
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_2[1] != *param_2) {
    FUN_10b49f0c0();
    func_0x00010b49f3ac();
    FUN_10b49f108();
  }
  uStack_38 = 1;
  FUN_10b49f1b8(&uStack_40);
  return;
}



/* Entry: 10b49f0c0; end: 10b49f107;  */

void FUN_10b49f0c0(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 < 0x555555555555556) {
    plVar1 = param_1 + 2;
    func_0x00010b49df28();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 6);
    return;
  }
  FUN_10b49de48();
  lVar2 = param_1[1];
  plStack_90 = param_1 + 2;
  plStack_88 = &lStack_70;
  plStack_80 = &lStack_68;
  uStack_78 = 0;
  lStack_70 = lVar2;
  for (; lStack_68 = lVar2, param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10b49e17c(lVar2,param_2);
    lVar2 = lStack_68 + 0x30;
  }
  uStack_78 = 1;
  FUN_10b49e094(&plStack_90);
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b49f108; end: 10b49f1b7;  */

void FUN_10b49f108(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10b49e17c(lVar1,param_2);
    lVar1 = lStack_48 + 0x30;
  }
  uStack_58 = 1;
  FUN_10b49e094(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b49f1b8; end: 10b49f21b;  */

long FUN_10b49f1b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010b49ddd0(param_1);
  }
  return param_1;
}



/* Entry: 10b49f21c; end: 10b49f273;  */

long FUN_10b49f21c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    func_0x00010b519e30(lVar1,param_1);
    lVar1 = lVar1 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return param_3;
}



/* Entry: 10b49f274; end: 10b49f2cb;  */

void FUN_10b49f274(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cfac80;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b49f2cc; end: 10b49f2f3;  */

void FUN_10b49f2cc(void)

{
  func_0x00010b49f3c0();
  FUN_10b49f2f4();
  return;
}



/* Entry: 10b49f2f4; end: 10b49f303;  */

void FUN_10b49f2f4(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  lVar3 = lVar2 + param_2[1];
  func_0x0001000da72c();
  uVar6 = (ulong)*(char *)(param_1 + 0x17);
  uVar1 = lVar3 - lVar2;
  if ((long)uVar6 < 0) {
    if (uVar1 == 0) {
      return;
    }
    uVar7 = unaff_x19[1];
    lVar3 = (unaff_x19[2] & 0x7fffffffffffffff) - 1;
    puVar5 = (undefined8 *)*unaff_x19;
    uVar6 = (ulong)unaff_x19[2] >> 0x38;
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    lVar3 = 0x16;
    puVar5 = unaff_x19;
    uVar7 = uVar6;
  }
  uVar4 = (uint)uVar6;
  if (unaff_x20 < puVar5 || (undefined8 *)((long)puVar5 + uVar7 + 1) <= unaff_x20) {
    if (lVar3 - uVar7 < uVar1) {
      func_0x0001000644b8();
      uVar4 = (uint)*(byte *)((long)unaff_x19 + 0x17);
    }
    puVar5 = unaff_x19;
    if ((uVar4 >> 7 & 1) != 0) {
      puVar5 = (undefined8 *)*unaff_x19;
    }
    func_0x000107c610b8((long)puVar5 + uVar7);
    *(undefined1 *)((long)puVar5 + uVar7 + uVar1) = 0;
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      unaff_x19[1] = uVar7 + uVar1;
    }
    else {
      *(byte *)((long)unaff_x19 + 0x17) = (byte)(uVar7 + uVar1) & 0x7f;
    }
  }
  else {
    func_0x00010533b3bc(auStack_58);
    func_0x000107c60c5c();
    func_0x0001000e1074();
  }
  return;
}



/* Entry: 10b49f304; end: 10b49f32b;  */

void FUN_10b49f304(void)

{
  func_0x00010b49f3c0();
  FUN_10b49f32c();
  return;
}



/* Entry: 10b49f32c; end: 10b49f35b;  */

undefined8 * FUN_10b49f32c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  lVar5 = *param_2;
  lVar2 = lVar5;
  _strlen();
  lVar5 = lVar5 + lVar2;
  func_0x00010b49f3ac();
  func_0x0001000da72c();
  uVar6 = (ulong)*(char *)(lVar2 + 0x17);
  uVar1 = lVar5 - (long)param_2;
  if ((long)uVar6 < 0) {
    if (uVar1 == 0) {
      return unaff_x19;
    }
    uVar7 = unaff_x19[1];
    lVar5 = (unaff_x19[2] & 0x7fffffffffffffff) - 1;
    puVar4 = (undefined8 *)*unaff_x19;
    uVar6 = (ulong)unaff_x19[2] >> 0x38;
  }
  else {
    if (uVar1 == 0) {
      return unaff_x19;
    }
    lVar5 = 0x16;
    puVar4 = unaff_x19;
    uVar7 = uVar6;
  }
  uVar3 = (uint)uVar6;
  if (unaff_x20 < puVar4 || (undefined8 *)((long)puVar4 + uVar7 + 1) <= unaff_x20) {
    if (lVar5 - uVar7 < uVar1) {
      func_0x0001000644b8(unaff_x19,lVar5,(uVar7 + uVar1) - lVar5,uVar7,uVar7,0,0);
      uVar3 = (uint)*(byte *)((long)unaff_x19 + 0x17);
    }
    puVar4 = unaff_x19;
    if ((uVar3 >> 7 & 1) != 0) {
      puVar4 = (undefined8 *)*unaff_x19;
    }
    func_0x000107c610b8((long)puVar4 + uVar7,unaff_x20,uVar1);
    *(undefined1 *)((long)puVar4 + uVar7 + uVar1) = 0;
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      unaff_x19[1] = uVar7 + uVar1;
    }
    else {
      *(byte *)((long)unaff_x19 + 0x17) = (byte)(uVar7 + uVar1) & 0x7f;
    }
  }
  else {
    func_0x00010533b3bc(&pppuStack_58,unaff_x20);
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppuStack_58 = &pppuStack_58;
    }
    func_0x000107c60c5c(unaff_x19,pppuStack_58,uStack_50);
    func_0x0001000e1074();
  }
  return unaff_x19;
}



/* Entry: 10b49f35c; end: 10b49f46b;  */

void FUN_10b49f35c(void)

{
  func_0x00010002b898(&stack0x00000028,&stack0x00000040,0);
  func_0x0001000da70c();
  return;
}



/* Entry: 10b49f46c; end: 10b49f577;  */

undefined8 FUN_10b49f46c(undefined8 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = 0;
  dVar4 = (double)(*(long *)(param_2 + 8) -
                  *(long *)(param_2 + (ulong)*(byte *)(param_2 + 0x28) * 0x20)) / 1000000000.0;
  if ((0 < (long)*(ulong *)(param_2 + 0x10)) &&
     ((long)ABS(dVar4) + 0xfff0000000000000U >> 0x35 < 0x3ff && (ulong)dVar4 < 0x8000000000000000 ||
      (long)dVar4 - 1U < 0xfffffffffffff)) {
    dVar5 = (((double)*(ulong *)(param_2 + 0x10) / dVar4) * 8.0) / 1000.0;
    bVar2 = (long)ABS(dVar5) + 0xfff0000000000000U >> 0x35 < 0x3ff;
    if (((-1 >= (long)dVar5 || !bVar2) && 0xffffffffffffd < (long)dVar5 - 1U) &&
        (-1 < (long)dVar5 && bVar2 || (long)dVar5 - 1U != 0xffffffffffffe)) {
      uVar3 = 0;
    }
    else {
      lVar1 = param_1[1] + (long)(dVar4 * 1000000000.0);
      param_1[1] = lVar1;
      FUN_10b49f578(dVar4,*param_1,0);
      FUN_10b4b3568(dVar5,dVar4,param_1 + 2,lVar1);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 10b49f578; end: 10b49f5a3;  */

double FUN_10b49f578(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = -param_1 / param_2;
  _expm1(dVar1);
  return -(dVar1 * param_2);
}



/* Entry: 10b49f5a4; end: 10b49f687;  */

undefined8 * FUN_10b49f5a4(undefined8 *param_1,undefined8 param_2,uint param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  func_0x000107c2ffdc();
  *puVar2 = &PTR_FUN_110ced700;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  *(undefined1 *)(puVar2 + 0x26) = param_4;
  if (1 < param_3) {
    param_3 = 3;
  }
  *(uint *)((long)puVar2 + 0x134) = param_3;
  FUN_10b49f688();
  puStack_38 = puVar2;
  func_0x00010b49fda0();
  uVar1 = uStack_40;
  uStack_40 = 0;
  FUN_10b49fd3c(param_1 + 0x22,uVar1);
  func_0x00010b49fd18(&uStack_40);
  func_0x00010b49f6f0(&uStack_40);
  uVar1 = uStack_40;
  uStack_40 = 0;
  func_0x00010b49fd78(param_1 + 0x24,uVar1);
  FUN_10b49fd54(&uStack_40);
  return param_1;
}



/* Entry: 10b49f688; end: 10b49f693;  */

undefined8 FUN_10b49f688(void)

{
  int iVar1;
  undefined8 uStack_28;
  
  iVar1 = 0x10ced748;
  if ((bRam0000000113374c28 & 1) == 0) {
    func_0x000107c395ec(0x113374c28);
    if (iVar1 != 0) {
      func_0x000107c2be18();
      uRam0000000113374c20 = uStack_28;
      ___cxa_guard_release(0x113374c28);
    }
  }
  return uRam0000000113374c20;
}



/* Entry: 10b49f694; end: 10b49f71f;  */

void FUN_10b49f694(long *param_1,long *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)0x28;
  __Znwm();
  dVar2 = (double)*param_2;
  if ((double)*param_2 <= 1e-09) {
    dVar2 = 1e-09;
  }
  *pdVar1 = dVar2 / 0.6931471805599453;
  *(undefined1 *)(pdVar1 + 1) = 0;
  *(undefined1 *)(pdVar1 + 2) = 0;
  pdVar1[3] = 0.0;
  pdVar1[4] = 0.0;
  *param_1 = (long)pdVar1;
  return;
}



/* Entry: 10b49f720; end: 10b49f76f;  */

undefined1  [16] FUN_10b49f720(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((*(char *)(param_1 + 0x130) == '\x01') &&
     (lVar1 = *(long *)(param_1 + 0x120), (*(uint *)(lVar1 + 0x20) & 1) != 0)) {
    auVar2._0_8_ = (long)*(double *)(lVar1 + 0x18);
    auVar2._8_8_ = *(undefined8 *)(lVar1 + 0x28);
    return auVar2;
  }
  lVar1 = *(long *)(param_1 + 0x110);
  if ((*(uint *)(lVar1 + 0x10) & 1) != 0) {
    auVar3._8_8_ = *(undefined8 *)(lVar1 + 0x18);
    auVar3._0_8_ = (long)*(double *)(lVar1 + 8);
    return auVar3;
  }
  return ZEXT816(0xffffffffffffffff);
}



/* Entry: 10b49f770; end: 10b49f7d3;  */

long FUN_10b49f770(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = param_1;
  func_0x000107c2ffe4();
  if ((*(char *)(param_1 + 0x130) == '\x01') &&
     (lVar2 = param_1, func_0x000107c2ffe8(param_1,param_2), (int)lVar2 != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x120);
    lVar2 = 0;
    dVar4 = (double)(*(long *)(param_3 + 8) -
                    *(long *)(param_3 + (ulong)*(byte *)(param_3 + 0x28) * 0x20)) / 1000000000.0;
    if ((0 < (long)*(ulong *)(param_3 + 0x10)) &&
       ((long)ABS(dVar4) + 0xfff0000000000000U >> 0x35 < 0x3ff && (ulong)dVar4 < 0x8000000000000000
        || (long)dVar4 - 1U < 0xfffffffffffff)) {
      dVar5 = (((double)*(ulong *)(param_3 + 0x10) / dVar4) * 8.0) / 1000.0;
      bVar1 = (long)ABS(dVar5) + 0xfff0000000000000U >> 0x35 < 0x3ff;
      if (((-1 >= (long)dVar5 || !bVar1) && 0xffffffffffffd < (long)dVar5 - 1U) &&
          (-1 < (long)dVar5 && bVar1 || (long)dVar5 - 1U != 0xffffffffffffe)) {
        lVar2 = 0;
      }
      else {
        lVar2 = puVar3[1] + (long)(dVar4 * 1000000000.0);
        puVar3[1] = lVar2;
        FUN_10b49f578(dVar4,*puVar3,0);
        FUN_10b4b3568(dVar5,dVar4,puVar3 + 2,lVar2);
        lVar2 = 1;
      }
    }
    return lVar2;
  }
  return lVar2;
}



/* Entry: 10b49f7d4; end: 10b49f8a7;  */

void FUN_10b49f7d4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  func_0x00010b49f458((double)*param_2 / 1000.0);
  *param_1 = uVar1;
  return;
}



/* Entry: 10b49f8a8; end: 10b49f913;  */

double FUN_10b49f8a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = 0.0;
  lVar2 = param_2[-5];
  do {
    param_2 = param_2 + -6;
    lVar1 = *param_2;
    while( true ) {
      lVar3 = lVar1;
      if (param_2 == param_1) {
        return dVar4 + (double)(lVar2 - lVar3) / 1000000.0;
      }
      if (param_2[-5] < lVar3) break;
      param_2 = param_2 + -6;
      lVar1 = *param_2;
      if (lVar3 <= *param_2) {
        lVar1 = lVar3;
      }
    }
    dVar4 = dVar4 + (double)(lVar2 - lVar3) / 1000000.0;
    lVar2 = param_2[-5];
  } while( true );
}



/* Entry: 10b49f914; end: 10b49fab3;  */

void FUN_10b49f914(double param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  plVar7 = *(long **)(param_2 + 8);
  plVar1 = *(long **)(param_2 + 0x10);
  if (plVar7 != plVar1) {
    dVar9 = 0.0;
    for (plVar5 = plVar7; plVar5 != plVar1; plVar5 = plVar5 + 6) {
      param_1 = (double)plVar5[2];
      dVar9 = dVar9 + param_1;
    }
    plVar5 = plVar7;
    FUN_10b49f8a8(plVar7,plVar1);
    if ((0.0 < param_1) && (param_1 = (dVar9 * 8.0) / param_1, 0.0 < param_1)) {
      if ((bRam00000001137f64e0 & 1) == 0) {
        plVar5 = (long *)0x1137f64e0;
        ___cxa_guard_acquire();
        if ((int)plVar5 != 0) {
          bVar2 = 0x90;
          func_0x000107c2be10();
          bRam00000001137f64d8 = bVar2;
          plVar5 = (long *)0x1137f64e0;
          ___cxa_guard_release(0x1137f64e0);
        }
      }
      if ((bRam00000001137f64d8 & 1) != 0) {
        plVar5 = *(long **)(param_2 + 8);
        if (plVar5 == *(long **)(param_2 + 0x10)) {
          dVar9 = 0.0;
        }
        else {
          plVar3 = plVar5;
          dVar9 = 0.0;
          while (dVar10 = dVar9, plVar3 != *(long **)(param_2 + 0x10)) {
            plVar4 = plVar3 + 6;
            dVar8 = (double)(plVar3[1] - *plVar3) / 1000000.0;
            plVar3 = plVar4;
            dVar9 = dVar10 + dVar8;
            if (dVar8 <= 0.0) {
              dVar9 = dVar10;
            }
          }
          dVar8 = 0.0;
          dVar9 = dVar8;
          if (0.0 < dVar10) {
            FUN_10b49f8a8();
            dVar9 = dVar10 / dVar8;
            if (dVar8 <= 0.0) {
              dVar9 = 0.0;
            }
          }
        }
        if (dVar9 <= 0.0) {
          dVar9 = 1.0;
        }
        param_1 = param_1 / dVar9;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x110);
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_10b4b3568(param_1,(double)(ulong)(((long)plVar1 - (long)plVar7) / 0x30),uVar6,plVar5);
      plVar7 = *(long **)(param_2 + 8);
    }
  }
  *(long **)(param_2 + 0x10) = plVar7;
  return;
}



/* Entry: 10b49fab4; end: 10b49fb6b;  */

void FUN_10b49fab4(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  if (param_2 < 2) {
    if (*(uint *)(param_1 + 0x134) != 3 && param_2 != *(uint *)(param_1 + 0x134)) {
      ppuVar3 = &PTR_DAT_110ced7a8;
      func_0x000107c30028();
      if ((int)ppuVar3 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x110);
        lVar2 = *(long *)(param_1 + 0x118);
        *(long *)(param_1 + 0x110) = lVar2;
        *(undefined8 *)(param_1 + 0x118) = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x120);
        lVar4 = *(long *)(param_1 + 0x128);
        *(long *)(param_1 + 0x120) = lVar4;
        *(undefined8 *)(param_1 + 0x128) = uVar1;
        if (lVar2 == 0) {
          FUN_10b49f688();
          ppuStack_28 = ppuVar3;
          func_0x00010b49fda0();
          uVar1 = uStack_30;
          uStack_30 = 0;
          FUN_10b49fd3c(param_1 + 0x110,uVar1);
          func_0x00010b49fd18(&uStack_30);
          lVar4 = *(long *)(param_1 + 0x120);
        }
        if (lVar4 == 0) {
          func_0x00010b49f6f0(&ppuStack_28);
          ppuVar3 = ppuStack_28;
          ppuStack_28 = (undefined **)0x0;
          func_0x00010b49fd78(param_1 + 0x120,ppuVar3);
          FUN_10b49fd54(&ppuStack_28);
        }
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
      }
    }
    *(uint *)(param_1 + 0x134) = param_2;
  }
  *(uint *)(param_1 + 0xf8) = param_2;
  return;
}



/* Entry: 10b49fb6c; end: 10b49fb6f;  */

undefined8 * FUN_10b49fb6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced700;
  FUN_10b49fd54(param_1 + 0x25);
  FUN_10b49fd54(param_1 + 0x24);
  func_0x00010b49fd18(param_1 + 0x23);
  func_0x00010b49fd18(param_1 + 0x22);
  *param_1 = &PTR_FUN_110ced5a0;
  func_0x00010b49bec8(param_1 + 0x21);
  func_0x00010b49bec8(param_1 + 0x20);
  func_0x000107c30004(param_1 + 4);
  FUN_10b49be1c(param_1 + 1);
  return param_1;
}



/* Entry: 10b49fb70; end: 10b49fb83;  */

void FUN_10b49fb70(void)

{
  FUN_10b49fccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49fb84; end: 10b49fc03;  */

undefined8 FUN_10b49fb84(int param_1)

{
  undefined8 uStack_28;
  
  if ((bRam0000000113374c28 & 1) == 0) {
    func_0x000107c395ec(0x113374c28);
    if (param_1 != 0) {
      func_0x000107c2be18();
      uRam0000000113374c20 = uStack_28;
      ___cxa_guard_release(0x113374c28);
    }
  }
  return uRam0000000113374c20;
}



/* Entry: 10b49fc04; end: 10b49fc1f;  */

void FUN_10b49fc04(long param_1)

{
  FUN_10b49fc20();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b49fc20; end: 10b49fc2b;  */

undefined8 * FUN_10b49fc20(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfb000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10b49fc68(param_1,param_2);
  return param_1;
}



/* Entry: 10b49fc2c; end: 10b49fc67;  */

undefined8 * FUN_10b49fc2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cfb000;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10b49fc68(param_1,param_3);
  return param_1;
}



/* Entry: 10b49fc68; end: 10b49fccb;  */

long FUN_10b49fc68(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b51b2d4(param_1);
    }
    else {
      FUN_10b51b29c(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b49fccc; end: 10b49fd3b;  */

undefined8 * FUN_10b49fccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced700;
  FUN_10b49fd54(param_1 + 0x25);
  FUN_10b49fd54(param_1 + 0x24);
  func_0x00010b49fd18(param_1 + 0x23);
  func_0x00010b49fd18(param_1 + 0x22);
  *param_1 = &PTR_FUN_110ced5a0;
  func_0x00010b49bec8(param_1 + 0x21);
  func_0x00010b49bec8(param_1 + 0x20);
  func_0x000107c30004(param_1 + 4);
  FUN_10b49be1c(param_1 + 1);
  return param_1;
}



/* Entry: 10b49fd3c; end: 10b49fd53;  */

void FUN_10b49fd3c(long *param_1,long param_2)

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



/* Entry: 10b49fd54; end: 10b49fd77;  */

undefined8 FUN_10b49fd54(undefined8 param_1)

{
  FUN_10b49fd78(param_1,0);
  return param_1;
}



/* Entry: 10b49fd78; end: 10b49fdb7;  */

void FUN_10b49fd78(long *param_1,long param_2)

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



/* Entry: 10b49fdb8; end: 10b49fe73;  */

double FUN_10b49fdb8(long param_1)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double *pdStack_48;
  long lStack_40;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    dVar4 = 0.0;
  }
  else {
    FUN_10b49fffc(&pdStack_48,param_1,*(undefined8 *)(param_1 + 0x10),param_1,0);
    lVar3 = lStack_40 - (long)pdStack_48;
    uVar2 = (ulong)(lVar3 >> 3) >> 1;
    FUN_10b4a0230(pdStack_48,pdStack_48 + uVar2);
    if (((uint)lVar3 >> 3 & 1) == 0) {
      pdVar1 = pdStack_48;
      FUN_10b4a0598(pdStack_48,pdStack_48 + uVar2);
      dVar4 = (*pdVar1 + pdStack_48[uVar2]) * 0.5;
    }
    else {
      dVar4 = pdStack_48[uVar2];
    }
    func_0x000107466e2c(&pdStack_48);
  }
  return dVar4;
}



/* Entry: 10b49fe74; end: 10b49fec3;  */

void FUN_10b49fe74(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_28;
  
  plVar1 = param_2;
  uStack_28 = param_1;
  FUN_10b49fec4();
  if (param_2[5] != plVar1[1] - *plVar1 >> 3) {
    FUN_10b49fef8(plVar1);
  }
  func_0x00010b4a0dd8(plVar1,&uStack_28);
  return;
}



/* Entry: 10b49fec4; end: 10b49fef7;  */

long FUN_10b49fec4(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b4a0728(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b49fef8; end: 10b49ffbf;  */

void FUN_10b49fef8(long *param_1,ulong param_2)

{
  long *plVar1;
  long **pplVar2;
  ulong uVar3;
  undefined1 auStack_60 [16];
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  if (param_2 != param_1[1] - *param_1 >> 3) {
    plVar1 = param_1;
    FUN_10b4a0b58();
    uVar3 = param_1[4];
    if (uVar3 == 0) {
      lStack_48 = 0;
    }
    else {
      lStack_48 = param_1[2];
    }
    if (param_2 <= uVar3) {
      uVar3 = param_2;
    }
    plStack_50 = param_1;
    plStack_40 = param_1;
    lStack_38 = lStack_48;
    FUN_10b4a0c40(auStack_60,&plStack_40,uVar3);
    pplVar2 = &plStack_50;
    FUN_10b4a0c14(pplVar2,auStack_60,plVar1,param_1);
    FUN_10b4a0bc0(param_1,plVar1,pplVar2,param_2);
  }
  return;
}



/* Entry: 10b49ffc0; end: 10b49fffb;  */

void FUN_10b49ffc0(long param_1)

{
  FUN_10b4a0e30();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_10b49fdb8(param_1 + 0x28);
  }
  return;
}



/* Entry: 10b49fffc; end: 10b4a0067;  */

undefined8 *
FUN_10b49fffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2;
  FUN_10b4a0100(param_2,param_3,param_4,param_5);
  FUN_10b4a0068(param_1,param_2,param_3,param_4,param_5,uVar1);
  return param_1;
}



/* Entry: 10b4a0068; end: 10b4a00ff;  */

void FUN_10b4a0068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  uStack_50 = param_1;
  if (param_6 != 0) {
    func_0x0001051888ac(param_1,param_6);
    FUN_10b4a01ac(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  uStack_48 = 1;
  func_0x000107884b38(&uStack_50);
  return;
}



/* Entry: 10b4a0100; end: 10b4a0127;  */

void FUN_10b4a0100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b4a0128(&uStack_30,&uStack_20);
  return;
}



/* Entry: 10b4a0128; end: 10b4a0167;  */

long FUN_10b4a0128(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b4a0168(param_1,param_1);
  FUN_10b4a0168(param_1,param_2);
  return lVar1 - param_1 >> 3;
}



/* Entry: 10b4a0168; end: 10b4a01ab;  */

long FUN_10b4a0168(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  param_1 = (long *)*param_1;
  if (uVar1 == 0) {
    return *param_1 + param_1[4] * 8;
  }
  uVar2 = param_1[2];
  if (uVar1 < uVar2) {
    return uVar1 + (param_1[1] - uVar2);
  }
  return *param_1 + (uVar1 - uVar2);
}



/* Entry: 10b4a01ac; end: 10b4a01df;  */

void FUN_10b4a01ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b4a01e0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b4a01e0; end: 10b4a01f3;  */

void FUN_10b4a01e0(void)

{
  FUN_10b4a01f4();
  return;
}



/* Entry: 10b4a01f4; end: 10b4a022f;  */

void FUN_10b4a01f4(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  
  while (param_3 != param_5) {
    puVar1 = param_3 + 1;
    *param_6 = *param_3;
    if (puVar1 == (undefined8 *)param_2[1]) {
      puVar1 = (undefined8 *)*param_2;
    }
    param_3 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)param_2[3]) {
      param_3 = puVar1;
    }
    param_6 = param_6 + 1;
  }
  return;
}



/* Entry: 10b4a0230; end: 10b4a024f;  */

void FUN_10b4a0230(void)

{
  FUN_10b4a0250();
  return;
}



/* Entry: 10b4a0250; end: 10b4a025f;  */

double * FUN_10b4a0250(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  ulong uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  pdVar10 = param_1;
  if (param_2 == param_3) {
    return param_1;
  }
  do {
    pdVar9 = param_3;
    pdVar6 = pdVar9 + -1;
    while( true ) {
      if (param_2 == pdVar9) {
        return param_1;
      }
      uVar4 = (long)pdVar9 - (long)pdVar10 >> 3;
      if (uVar4 < 2) {
        return param_1;
      }
      if (uVar4 == 3) {
        pdVar9 = pdVar10 + 1;
        dVar12 = *pdVar9;
        dVar13 = *pdVar6;
        dVar14 = dVar12;
        dVar11 = dVar13;
        if (dVar12 < dVar13) {
          dVar14 = dVar13;
          dVar11 = dVar12;
        }
        *pdVar6 = dVar14;
        *pdVar9 = dVar11;
        dVar15 = *pdVar6;
        dVar16 = *pdVar10;
        dVar14 = dVar15;
        dVar11 = dVar16;
        if (dVar15 < dVar16) {
          dVar14 = dVar16;
          dVar11 = dVar15;
        }
        *pdVar6 = dVar14;
        dVar17 = *pdVar9;
        dVar14 = dVar17;
        if (dVar17 <= dVar11) {
          *pdVar10 = dVar17;
          dVar14 = dVar11;
        }
        uVar1 = (uint)(dVar16 <= dVar15);
        if (dVar17 <= dVar11) {
          uVar1 = 1;
        }
        *pdVar9 = dVar14;
        if (dVar13 <= dVar12) {
          uVar1 = 1;
        }
        return (double *)(ulong)uVar1;
      }
      if (uVar4 == 2) {
        dVar11 = *pdVar10;
        if (dVar11 <= pdVar9[-1]) {
          return param_1;
        }
        *pdVar10 = pdVar9[-1];
        pdVar9[-1] = dVar11;
        return param_1;
      }
      pdVar3 = pdVar10;
      if ((long)uVar4 < 8) {
        for (; pdVar10 != pdVar6; pdVar10 = pdVar10 + 1) {
          pdVar2 = pdVar10;
          pdVar5 = pdVar10;
          pdVar7 = pdVar3 + 1;
          if (pdVar10 != pdVar9) {
            while (pdVar5 = pdVar2, pdVar7 != pdVar9) {
              pdVar8 = pdVar7 + 1;
              dVar11 = *pdVar7;
              pdVar2 = pdVar7;
              pdVar7 = pdVar8;
              if (*pdVar5 <= dVar11) {
                pdVar2 = pdVar5;
              }
            }
          }
          if (pdVar10 != pdVar5) {
            dVar11 = *pdVar10;
            *pdVar10 = *pdVar5;
            *pdVar5 = dVar11;
          }
          pdVar3 = pdVar3 + 1;
        }
        return param_1;
      }
      pdVar3 = pdVar10 + ((ulong)((long)pdVar9 - (long)pdVar10) >> 4);
      param_1 = pdVar10;
      FUN_10b4a052c(pdVar10,pdVar3,pdVar6);
      dVar11 = *pdVar10;
      pdVar2 = pdVar6;
      if (dVar11 < *pdVar3) break;
      while (pdVar2 = pdVar2 + -1, pdVar2 != pdVar10) {
        if (*pdVar2 < *pdVar3) {
          *pdVar10 = *pdVar2;
          *pdVar2 = dVar11;
          uVar1 = 1;
          if ((int)param_1 != 0) {
            uVar1 = 2;
          }
          param_1 = (double *)(ulong)uVar1;
          pdVar6 = pdVar2;
          goto LAB_10b4a0394;
        }
      }
      pdVar3 = pdVar10 + 1;
      pdVar2 = pdVar3;
      if (*pdVar6 <= dVar11) {
        while( true ) {
          if (pdVar2 == pdVar6) {
            return param_1;
          }
          dVar14 = *pdVar2;
          if (dVar11 < dVar14) break;
          pdVar2 = pdVar2 + 1;
        }
        pdVar3 = pdVar2 + 1;
        *pdVar2 = *pdVar6;
        *pdVar6 = dVar14;
      }
      pdVar2 = pdVar6;
      if (pdVar3 == pdVar6) {
        return param_1;
      }
      while( true ) {
        do {
          pdVar5 = pdVar3;
          pdVar3 = pdVar5 + 1;
          dVar11 = *pdVar5;
        } while (dVar11 <= *pdVar10);
        do {
          pdVar2 = pdVar2 + -1;
        } while (*pdVar10 < *pdVar2);
        if (pdVar2 <= pdVar5) break;
        *pdVar5 = *pdVar2;
        *pdVar2 = dVar11;
      }
      pdVar10 = pdVar5;
      if (param_2 < pdVar5) {
        return param_1;
      }
    }
LAB_10b4a0394:
    pdVar2 = pdVar10 + 1;
    pdVar5 = pdVar2;
    pdVar7 = pdVar2;
    pdVar8 = pdVar3;
    if (pdVar2 < pdVar6) {
      while( true ) {
        pdVar3 = pdVar8;
        do {
          pdVar5 = pdVar7;
          pdVar7 = pdVar5 + 1;
          dVar11 = *pdVar5;
        } while (dVar11 < *pdVar3);
        do {
          pdVar6 = pdVar6 + -1;
        } while (*pdVar3 <= *pdVar6);
        if (pdVar6 <= pdVar5) break;
        *pdVar5 = *pdVar6;
        *pdVar6 = dVar11;
        param_1 = (double *)(ulong)((int)param_1 + 1);
        pdVar8 = pdVar6;
        if (pdVar5 != pdVar3) {
          pdVar8 = pdVar3;
        }
      }
    }
    if (pdVar5 != pdVar3) {
      dVar11 = *pdVar5;
      if (*pdVar3 < dVar11) {
        *pdVar5 = *pdVar3;
        *pdVar3 = dVar11;
        param_1 = (double *)(ulong)((int)param_1 + 1);
      }
    }
    if (param_2 == pdVar5) {
      return param_1;
    }
    if ((int)param_1 == 0) {
      pdVar6 = pdVar5;
      if (param_2 < pdVar5) {
        do {
          if (pdVar2 == pdVar5) {
            return param_1;
          }
          pdVar6 = pdVar2 + -1;
          dVar11 = *pdVar2;
          pdVar2 = pdVar2 + 1;
        } while (*pdVar6 <= dVar11);
      }
      else {
        do {
          pdVar3 = pdVar6 + 1;
          if (pdVar3 == pdVar9) {
            return param_1;
          }
          dVar11 = *pdVar6;
          pdVar6 = pdVar3;
        } while (dVar11 <= *pdVar3);
      }
    }
    param_3 = pdVar5;
    if (pdVar5 <= param_2) {
      param_3 = pdVar9;
      pdVar10 = pdVar5 + 1;
    }
  } while( true );
}



/* Entry: 10b4a0260; end: 10b4a052b;  */

double * FUN_10b4a0260(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  ulong uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  pdVar10 = param_1;
  do {
    pdVar9 = param_3;
    pdVar6 = pdVar9 + -1;
    while( true ) {
      if (param_2 == pdVar9) {
        return param_1;
      }
      uVar4 = (long)pdVar9 - (long)pdVar10 >> 3;
      if (uVar4 < 2) {
        return param_1;
      }
      if (uVar4 == 3) {
        pdVar9 = pdVar10 + 1;
        dVar12 = *pdVar9;
        dVar13 = *pdVar6;
        dVar14 = dVar12;
        dVar11 = dVar13;
        if (dVar12 < dVar13) {
          dVar14 = dVar13;
          dVar11 = dVar12;
        }
        *pdVar6 = dVar14;
        *pdVar9 = dVar11;
        dVar15 = *pdVar6;
        dVar16 = *pdVar10;
        dVar14 = dVar15;
        dVar11 = dVar16;
        if (dVar15 < dVar16) {
          dVar14 = dVar16;
          dVar11 = dVar15;
        }
        *pdVar6 = dVar14;
        dVar17 = *pdVar9;
        dVar14 = dVar17;
        if (dVar17 <= dVar11) {
          *pdVar10 = dVar17;
          dVar14 = dVar11;
        }
        uVar1 = (uint)(dVar16 <= dVar15);
        if (dVar17 <= dVar11) {
          uVar1 = 1;
        }
        *pdVar9 = dVar14;
        if (dVar13 <= dVar12) {
          uVar1 = 1;
        }
        return (double *)(ulong)uVar1;
      }
      if (uVar4 == 2) {
        dVar11 = *pdVar10;
        if (dVar11 <= pdVar9[-1]) {
          return param_1;
        }
        *pdVar10 = pdVar9[-1];
        pdVar9[-1] = dVar11;
        return param_1;
      }
      pdVar3 = pdVar10;
      if ((long)uVar4 < 8) {
        for (; pdVar10 != pdVar6; pdVar10 = pdVar10 + 1) {
          pdVar2 = pdVar10;
          pdVar5 = pdVar10;
          pdVar7 = pdVar3 + 1;
          if (pdVar10 != pdVar9) {
            while (pdVar5 = pdVar2, pdVar7 != pdVar9) {
              pdVar8 = pdVar7 + 1;
              dVar11 = *pdVar7;
              pdVar2 = pdVar7;
              pdVar7 = pdVar8;
              if (*pdVar5 <= dVar11) {
                pdVar2 = pdVar5;
              }
            }
          }
          if (pdVar10 != pdVar5) {
            dVar11 = *pdVar10;
            *pdVar10 = *pdVar5;
            *pdVar5 = dVar11;
          }
          pdVar3 = pdVar3 + 1;
        }
        return param_1;
      }
      pdVar3 = pdVar10 + ((ulong)((long)pdVar9 - (long)pdVar10) >> 4);
      param_1 = pdVar10;
      FUN_10b4a052c(pdVar10,pdVar3,pdVar6);
      dVar11 = *pdVar10;
      pdVar2 = pdVar6;
      if (dVar11 < *pdVar3) break;
      while (pdVar2 = pdVar2 + -1, pdVar2 != pdVar10) {
        if (*pdVar2 < *pdVar3) {
          *pdVar10 = *pdVar2;
          *pdVar2 = dVar11;
          uVar1 = 1;
          if ((int)param_1 != 0) {
            uVar1 = 2;
          }
          param_1 = (double *)(ulong)uVar1;
          pdVar6 = pdVar2;
          goto LAB_10b4a0394;
        }
      }
      pdVar3 = pdVar10 + 1;
      pdVar2 = pdVar3;
      if (*pdVar6 <= dVar11) {
        while( true ) {
          if (pdVar2 == pdVar6) {
            return param_1;
          }
          dVar14 = *pdVar2;
          if (dVar11 < dVar14) break;
          pdVar2 = pdVar2 + 1;
        }
        pdVar3 = pdVar2 + 1;
        *pdVar2 = *pdVar6;
        *pdVar6 = dVar14;
      }
      pdVar2 = pdVar6;
      if (pdVar3 == pdVar6) {
        return param_1;
      }
      while( true ) {
        do {
          pdVar5 = pdVar3;
          pdVar3 = pdVar5 + 1;
          dVar11 = *pdVar5;
        } while (dVar11 <= *pdVar10);
        do {
          pdVar2 = pdVar2 + -1;
        } while (*pdVar10 < *pdVar2);
        if (pdVar2 <= pdVar5) break;
        *pdVar5 = *pdVar2;
        *pdVar2 = dVar11;
      }
      pdVar10 = pdVar5;
      if (param_2 < pdVar5) {
        return param_1;
      }
    }
LAB_10b4a0394:
    pdVar2 = pdVar10 + 1;
    pdVar5 = pdVar2;
    pdVar7 = pdVar2;
    pdVar8 = pdVar3;
    if (pdVar2 < pdVar6) {
      while( true ) {
        pdVar3 = pdVar8;
        do {
          pdVar5 = pdVar7;
          pdVar7 = pdVar5 + 1;
          dVar11 = *pdVar5;
        } while (dVar11 < *pdVar3);
        do {
          pdVar6 = pdVar6 + -1;
        } while (*pdVar3 <= *pdVar6);
        if (pdVar6 <= pdVar5) break;
        *pdVar5 = *pdVar6;
        *pdVar6 = dVar11;
        param_1 = (double *)(ulong)((int)param_1 + 1);
        pdVar8 = pdVar6;
        if (pdVar5 != pdVar3) {
          pdVar8 = pdVar3;
        }
      }
    }
    if (pdVar5 != pdVar3) {
      dVar11 = *pdVar5;
      if (*pdVar3 < dVar11) {
        *pdVar5 = *pdVar3;
        *pdVar3 = dVar11;
        param_1 = (double *)(ulong)((int)param_1 + 1);
      }
    }
    if (param_2 == pdVar5) {
      return param_1;
    }
    if ((int)param_1 == 0) {
      pdVar6 = pdVar5;
      if (param_2 < pdVar5) {
        do {
          if (pdVar2 == pdVar5) {
            return param_1;
          }
          pdVar6 = pdVar2 + -1;
          dVar11 = *pdVar2;
          pdVar2 = pdVar2 + 1;
        } while (*pdVar6 <= dVar11);
      }
      else {
        do {
          pdVar3 = pdVar6 + 1;
          if (pdVar3 == pdVar9) {
            return param_1;
          }
          dVar11 = *pdVar6;
          pdVar6 = pdVar3;
        } while (dVar11 <= *pdVar3);
      }
    }
    param_3 = pdVar5;
    if (pdVar5 <= param_2) {
      param_3 = pdVar9;
      pdVar10 = pdVar5 + 1;
    }
  } while( true );
}



/* Entry: 10b4a052c; end: 10b4a0597;  */

bool FUN_10b4a052c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = *param_2;
  dVar3 = *param_3;
  dVar5 = dVar2;
  dVar1 = dVar3;
  if (dVar2 < dVar3) {
    dVar5 = dVar3;
    dVar1 = dVar2;
  }
  *param_3 = dVar5;
  *param_2 = dVar1;
  dVar4 = *param_3;
  dVar6 = *param_1;
  dVar5 = dVar4;
  dVar1 = dVar6;
  if (dVar4 < dVar6) {
    dVar5 = dVar6;
    dVar1 = dVar4;
  }
  *param_3 = dVar5;
  dVar7 = *param_2;
  dVar5 = dVar7;
  if (dVar7 <= dVar1) {
    *param_1 = dVar7;
    dVar5 = dVar1;
  }
  *param_2 = dVar5;
  return dVar3 <= dVar2 || (dVar7 <= dVar1 || dVar6 <= dVar4);
}



/* Entry: 10b4a0598; end: 10b4a05b7;  */

void FUN_10b4a0598(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b4a05b8(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10b4a05b8; end: 10b4a05eb;  */

void FUN_10b4a05b8(double *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = param_1;
  if (param_1 != param_2) {
    while (pdVar2 = pdVar1, param_1 = param_1 + 1, param_1 != param_2) {
      pdVar1 = param_1;
      if (*param_1 <= *pdVar2) {
        pdVar1 = pdVar2;
      }
    }
  }
  return;
}



/* Entry: 10b4a05ec; end: 10b4a066b;  */

void FUN_10b4a05ec(void)

{
  func_0x00010b4a0f30();
  FUN_10b4a0710();
  return;
}



/* Entry: 10b4a066c; end: 10b4a069f;  */

void FUN_10b4a066c(long *param_1)

{
  FUN_10b4a06a0();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4a06a0; end: 10b4a06bf;  */

void FUN_10b4a06a0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b4a06c0(param_1,&uStack_11);
  return;
}



/* Entry: 10b4a06c0; end: 10b4a06eb;  */

void FUN_10b4a06c0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[4];
  if (param_1[1] - param_1[2] >> 3 <= lVar1) {
    lVar1 = lVar1 - (param_1[1] - *param_1 >> 3);
  }
  param_1[2] = param_1[2] + lVar1 * 8;
  return;
}



/* Entry: 10b4a06ec; end: 10b4a070f;  */

undefined8 FUN_10b4a06ec(undefined8 param_1)

{
  FUN_10b4a0710(param_1,0);
  return param_1;
}



/* Entry: 10b4a0710; end: 10b4a0727;  */

void FUN_10b4a0710(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4a0728; end: 10b4a0afb;  */

undefined1  [16]
FUN_10b4a0728(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 3;
  func_0x000107c278c4();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar6 = 0;
        if (plVar13 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b4a07ec;
          plVar4 = (long *)plVar12[1];
          if (plVar4 != plVar7) break;
          plVar4 = plVar12 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10b4a0ac0;
          }
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar14);
        }
        else if (plVar13 <= plVar4) {
          uVar6 = 0;
          if (plVar13 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar13;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar13);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_10b4a07ec:
  uVar3 = *param_4;
  plVar4 = param_1 + 2;
  plVar12 = (long *)0x50;
  __Znwm();
  uStack_58 = 0;
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  plStack_68 = plVar12;
  plStack_60 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,uVar3);
  plVar12[9] = 0;
  plVar12[8] = 0;
  plVar12[7] = 0;
  plVar12[6] = 0;
  plVar12[5] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10b4a0a44;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar13) {
    plVar5 = plVar13;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar5) {
LAB_10b4a08b0:
    if ((ulong)plVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4a0ae8);
      (*pcVar1)();
    }
    lVar2 = (long)plVar5 << 3;
    __Znwm(lVar2);
    FUN_10b4a0afc(param_1,lVar2);
    param_1[1] = (long)plVar5;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    plVar13 = plVar5;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar5 - 1;
      uVar14 = 0;
      if (plVar5 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar5;
      }
      plVar10 = plVar9;
      if (plVar5 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar5);
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar5 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar5 <= plVar11) {
          uVar14 = 0;
          if (plVar5 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar5;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar5);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar2 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar11 * 8);
            **(long **)(lVar2 + (long)plVar11 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar8) {
      plVar5 = plVar8;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_10b4a08b0;
      FUN_10b4a0afc(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
  }
LAB_10b4a0a44:
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b4a0b14(&plStack_68);
  uVar3 = 1;
LAB_10b4a0ac0:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10b4a0afc; end: 10b4a0b13;  */

void FUN_10b4a0afc(long *param_1,long param_2)

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



/* Entry: 10b4a0b14; end: 10b4a0b57;  */

long * FUN_10b4a0b14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b4a0644(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b4a0b58; end: 10b4a0bbf;  */

long * FUN_10b4a0b58(long *param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd4838(auStack_30,&UNK_10f77071c);
    func_0x000108988920(auStack_30);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4a0bb0);
    (*pcVar1)();
  }
  if (param_2 != 0) {
    if (param_2 >> 0x3d == 0) {
      plVar2 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Znwm_110352280)(plVar2);
      return plVar2;
    }
    func_0x000104bd35f4();
    func_0x000107466b80();
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 10b4a0bc0; end: 10b4a0c13;  */

void FUN_10b4a0bc0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  FUN_10b4a066c();
  lVar1 = param_2 + param_4 * 8;
  *param_1 = param_2;
  param_1[1] = lVar1;
  lVar2 = param_2;
  if (param_3 != lVar1) {
    lVar2 = param_3;
  }
  param_1[2] = param_2;
  param_1[3] = lVar2;
  param_1[4] = param_3 - param_2 >> 3;
  return;
}



/* Entry: 10b4a0c14; end: 10b4a0c3f;  */

void FUN_10b4a0c14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  FUN_10b4a0c74(&uStack_20,&uStack_30);
  return;
}



/* Entry: 10b4a0c40; end: 10b4a0c73;  */

void FUN_10b4a0c40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  FUN_10b4a0cf8();
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  return;
}



/* Entry: 10b4a0c74; end: 10b4a0cbf;  */

undefined8 * FUN_10b4a0c74(long param_1,long param_2,undefined8 *param_3)

{
  while (*(undefined8 **)(param_1 + 8) != *(undefined8 **)(param_2 + 8)) {
    *param_3 = **(undefined8 **)(param_1 + 8);
    FUN_10b4a0cc0(param_1);
    param_3 = param_3 + 1;
  }
  return param_3;
}



/* Entry: 10b4a0cc0; end: 10b4a0cf7;  */

void FUN_10b4a0cc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  lVar2 = param_1[1] + 8;
  param_1[1] = lVar2;
  if (lVar2 == plVar1[1]) {
    lVar2 = *plVar1;
    param_1[1] = lVar2;
  }
  if (lVar2 != plVar1[3]) {
    return;
  }
  param_1[1] = 0;
  return;
}



/* Entry: 10b4a0cf8; end: 10b4a0db3;  */

long * FUN_10b4a0cf8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < 0) {
      func_0x00010b4a0d64(param_1,-param_2);
    }
  }
  else {
    plVar3 = (long *)*param_1;
    if (plVar3[1] - param_1[1] >> 3 <= param_2) {
      param_2 = param_2 - (plVar3[1] - *plVar3 >> 3);
    }
    lVar1 = param_1[1] + param_2 * 8;
    lVar2 = 0;
    if (lVar1 != plVar3[3]) {
      lVar2 = lVar1;
    }
    param_1[1] = lVar2;
  }
  return param_1;
}



/* Entry: 10b4a0db4; end: 10b4a0e2f;  */

long FUN_10b4a0db4(long *param_1,long param_2,long param_3)

{
  if (param_2 - *param_1 >> 3 < param_3) {
    param_3 = param_3 - (param_1[1] - *param_1 >> 3);
  }
  return param_2 + param_3 * -8;
}



/* Entry: 10b4a0e30; end: 10b4a0ef7;  */

long FUN_10b4a0e30(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b4a0ef8; end: 10b4a0f73;  */

void FUN_10b4a0ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b4a0f74; end: 10b4a108f;  */

void FUN_10b4a0f74(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    *(double *)(param_2 + 0x20) = param_1;
    *(double *)(param_2 + 0x28) = param_1 * 0.5;
  }
  else {
    dVar3 = *(double *)(param_2 + 0x60);
    dVar2 = param_1;
    if ((((dVar3 < param_1) && (0.0 < dVar3)) &&
        ((ulong)ABS(*(double *)(param_2 + 0x50)) < 0x7ff0000000000000)) &&
       (dVar2 = dVar3 * *(double *)(param_2 + 0x50), param_1 <= dVar2)) {
      dVar2 = param_1;
    }
    dVar3 = *(double *)(param_2 + 0x20);
    if ((dVar3 <= dVar2) || (dVar4 = *(double *)(param_2 + 0x58), dVar4 <= 0.0)) {
      dVar4 = *(double *)(param_2 + 0x38);
    }
    *(double *)(param_2 + 0x20) = dVar2 * dVar4 + dVar3 * (1.0 - dVar4);
    *(double *)(param_2 + 0x28) =
         ABS(dVar2 - dVar3) * *(double *)(param_2 + 0x40) +
         *(double *)(param_2 + 0x28) * (1.0 - *(double *)(param_2 + 0x40));
  }
  *(double *)(param_2 + 0x60) = param_1;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  lVar1 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_2 + 0x48) = lVar1;
  return;
}



/* Entry: 10b4a1090; end: 10b4a11a7;  */

void FUN_10b4a1090(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double unaff_d8;
  double unaff_d9;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x00010b4a1048();
    dVar3 = *(double *)(param_2 + 8);
    bVar2 = dVar3 <= param_1;
    bVar1 = param_1 == dVar3;
    if (bVar2 && !bVar1) {
      func_0x00010b4a11c0();
      if ((bVar2 && !bVar1) && (dVar3 = unaff_d8, 0.0 < *(double *)(param_2 + 0x10))) {
        func_0x00010b4a11a8();
        dVar3 = unaff_d8 + param_1 * unaff_d9;
      }
      *(double *)(param_2 + 0x20) = dVar3;
    }
  }
  return;
}



/* Entry: 10b4a11a8; end: 10b4a11d3;  */

void FUN_10b4a11a8(double param_1,double param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exp_11034c230)(param_1 * (param_3 / param_2));
  return;
}



/* Entry: 10b4a11d4; end: 10b4a1297;  */

undefined8 FUN_10b4a11d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_10b4a1298();
  if ((cRam000000011383d644 != '\x01') || (*(int *)(param_1 + 8) == 1)) {
    FUN_10b4a1298();
    if (iRam000000011383d640 == 1) {
      return 1;
    }
    FUN_10b4a1298();
    if (iRam000000011383d640 == 2) {
      FUN_10b4a1298();
      lVar2 = 0x11383d628;
      if ((uRam000000011383d628 & 1) != 0) {
        lVar2 = uRam000000011383d628 + 7;
      }
      FUN_10b4a13a4(lVar2,lVar2 + (long)iRam000000011383d630 * 8,param_2);
      lVar1 = 0x11383d628;
      if ((uRam000000011383d628 & 1) != 0) {
        lVar1 = uRam000000011383d628 + 7;
      }
      if (lVar1 + (long)iRam000000011383d630 * 8 != lVar2) {
        return 2;
      }
    }
  }
  return 0;
}



/* Entry: 10b4a1298; end: 10b4a13a3;  */

undefined8 FUN_10b4a1298(void)

{
  int iVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  func_0x000107c278b8(auStack_48,&UNK_10f77072c);
  if ((bRam000000011383d650 & 1) == 0) {
    iVar1 = 0x1383d650;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam000000011383d618 = &PTR_FUN_110cfb530;
      uRam000000011383d620 = 0;
      uRam000000011383d648 = 0;
      uRam000000011383d630 = 0;
      uRam000000011383d638 = 0;
      uRam000000011383d628 = 0;
      uRam000000011383d63d = 0;
      uRam000000011383d640 = 0;
      ___cxa_guard_release(0x11383d650);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,auStack_48);
  if (lRam000000011383d610 != -1) {
    ppuStack_30 = &puStack_28;
    puStack_28 = auStack_60;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x11383d610,&ppuStack_30,FUN_10b4a140c);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return 0x11383d618;
}



/* Entry: 10b4a13a4; end: 10b4a13c3;  */

void FUN_10b4a13a4(void)

{
  func_0x000107c2bbfc();
  return;
}



/* Entry: 10b4a13c4; end: 10b4a13d7;  */

void FUN_10b4a13c4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b4a13d8; end: 10b4a13eb;  */

void FUN_10b4a13d8(void)

{
  func_0x00010b4a13fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a13ec; end: 10b4a140b;  */

void FUN_10b4a13ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a13f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a140c; end: 10b4a148b;  */

void FUN_10b4a140c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lStack_38;
  long lStack_30;
  
  puVar3 = *(undefined8 **)*param_1;
  uVar1 = puVar3[1];
  puVar2 = (undefined8 *)*puVar3;
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    puVar2 = puVar3;
  }
  func_0x000107c30194(&lStack_38,puVar2,uVar1,0,0);
  if (lStack_38 != lStack_30) {
    func_0x000107c3034c(0x11383d618,lStack_38,(int)lStack_30 - (int)lStack_38);
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b4a148c; end: 10b4a156f;  */

long FUN_10b4a148c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x60);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  func_0x00010b4a14e0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b4a1570; end: 10b4a15ab;  */

void FUN_10b4a1570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b4a15ac; end: 10b4a16b7;  */

ulong FUN_10b4a15ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 *extraout_x8_00;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int extraout_w11;
  int extraout_w11_00;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_80 [2];
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 < *(undefined8 **)(param_1 + 0x68)) {
    *puVar7 = uVar1;
    puVar7[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000107c3963c();
        puVar7 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar7 = puVar7 + 2;
LAB_10b4a1690:
    *(undefined8 **)(param_1 + 0x60) = puVar7;
    return (ulong)*(uint *)(param_1 + 0x90);
  }
  lVar11 = *(long *)(param_1 + 0x58);
  lVar12 = (long)puVar7 - lVar11;
  lVar13 = lVar12 >> 4;
  uVar4 = lVar13 + 1;
  lVar3 = param_1;
  if (uVar4 >> 0x3c == 0) {
    uVar9 = (long)*(undefined8 **)(param_1 + 0x68) - lVar11;
    uVar10 = (long)uVar9 >> 3;
    if (uVar10 <= uVar4) {
      uVar10 = uVar4;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 >> 0x3c == 0) {
      lVar3 = uVar10 << 4;
      __Znwm();
      puVar8 = (undefined8 *)(lVar3 + lVar12);
      *puVar8 = uVar1;
      puVar8[1] = lVar2;
      if (lVar2 != 0) {
        do {
          func_0x000107c3963c();
        } while (extraout_w11_00 != 0);
        lVar11 = *(long *)(param_1 + 0x58);
        lVar12 = *(long *)(param_1 + 0x60) - lVar11;
        lVar13 = lVar12 >> 4;
        puVar8 = extraout_x8_00;
      }
      puVar7 = puVar8 + 2;
      _memcpy(puVar8 + lVar13 * -2,lVar11,lVar12);
      *(undefined8 **)(param_1 + 0x58) = puVar8 + lVar13 * -2;
      *(undefined8 **)(param_1 + 0x60) = puVar7;
      *(ulong *)(param_1 + 0x68) = lVar3 + uVar10 * 0x10;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_10b4a1690;
    }
  }
  else {
    FUN_10b4a1a70();
  }
  iVar5 = (int)param_2;
  func_0x000104bd35f4();
  uVar4 = lVar3 - 0x10;
  pcStack_58 = FUN_10b4a16b8;
  if (*(int *)(lVar3 + 0x44) != iVar5) {
    lStack_70 = lVar11;
    lStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000100610538(*(undefined8 *)(lVar3 + 0x90));
    *(int *)(lVar3 + 0x44) = iVar5;
    func_0x000100610858(alStack_80,lVar3 + 0xa8);
    if (alStack_80[0] != 0) {
      uVar6 = 4;
      if (iVar5 != 1) {
        uVar6 = 0;
      }
      if (iVar5 == 0) {
        uVar6 = 1;
      }
      func_0x000100670158(alStack_80[0],uVar6);
    }
    func_0x0001006108b0();
    func_0x00010060fdc4(uVar4);
  }
  return uVar4;
}



/* Entry: 10b4a16b8; end: 10b4a16bf;  */

void FUN_10b4a16b8(long param_1,int param_2)

{
  undefined4 uVar1;
  long alStack_30 [2];
  
  if (*(int *)(param_1 + 0x44) != param_2) {
    func_0x000100610538(*(undefined8 *)(param_1 + 0x90));
    *(int *)(param_1 + 0x44) = param_2;
    func_0x000100610858(alStack_30,param_1 + 0xa8);
    if (alStack_30[0] != 0) {
      uVar1 = 4;
      if (param_2 != 1) {
        uVar1 = 0;
      }
      if (param_2 == 0) {
        uVar1 = 1;
      }
      func_0x000100670158(alStack_30[0],uVar1);
    }
    func_0x0001006108b0();
    func_0x00010060fdc4(param_1 + -0x10);
  }
  return;
}



/* Entry: 10b4a16c0; end: 10b4a170f;  */

void FUN_10b4a16c0(long param_1,uint param_2)

{
  long alStack_30 [2];
  
  if (param_2 != 0) {
    func_0x000107c30044(alStack_30,param_1 + 0xb8);
    if (alStack_30[0] != 0) {
      if (4 < param_2) {
        param_2 = 0;
      }
      func_0x000107c3011c(alStack_30[0],param_2);
    }
    func_0x000107c39630();
  }
  return;
}



/* Entry: 10b4a1710; end: 10b4a17c7;  */

void FUN_10b4a1710(long param_1,uint param_2)

{
  long alStack_30 [2];
  
  if (param_2 != 0) {
    func_0x000107c30044(alStack_30,param_1 + 0xa0);
    if (alStack_30[0] != 0) {
      if (4 < param_2) {
        param_2 = 0;
      }
      func_0x000107c3011c(alStack_30[0],param_2);
    }
    func_0x000107c39630();
  }
  return;
}



/* Entry: 10b4a17c8; end: 10b4a183f;  */

undefined8 FUN_10b4a17c8(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010b4a3c60(uVar1);
  if (param_2 != 0) {
    FUN_10b4a3d98(*(undefined8 *)(param_1 + 0xa0));
  }
  return uVar1;
}



/* Entry: 10b4a1840; end: 10b4a188b;  */

void FUN_10b4a1840(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  undefined8 *puStack_28;
  
  func_0x000107c39610(auStack_38);
  lVar1 = puStack_28[1];
  uVar2 = *puStack_28;
  param_1[1] = puStack_28[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c39614();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b4a188c; end: 10b4a1893;  */

void FUN_10b4a188c(void)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  uStack_24 = 0;
  func_0x00010b4a20d8();
  FUN_10b4a18e4(auStack_40,auStack_50,&uStack_24);
  func_0x00010b4a20f8();
  FUN_10b4a1e84();
  func_0x000107c3962c();
  return;
}



/* Entry: 10b4a1894; end: 10b4a18e3;  */

void FUN_10b4a1894(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  func_0x00010b4a20d8();
  FUN_10b4a18e4(auStack_40,auStack_50,&uStack_24);
  func_0x00010b4a20f8();
  FUN_10b4a1e84();
  func_0x000107c3962c();
  return;
}



/* Entry: 10b4a18e4; end: 10b4a1907;  */

void FUN_10b4a18e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b4a1b9c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b4a1908; end: 10b4a194f;  */

void FUN_10b4a1908(void)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010b4a20d8();
  FUN_10b4a1950(auStack_30,auStack_40);
  func_0x00010b4a20f8();
  FUN_10b4a2054();
  func_0x000107c3962c();
  return;
}


