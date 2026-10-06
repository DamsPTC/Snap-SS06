/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10563f054; end: 10563f0af;  */

undefined8 * FUN_10563f054(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a2b38;
  FUN_10563d174(param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  func_0x000105637860(param_1 + 9);
  func_0x000105634e74(param_1 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10563f0b0; end: 10563f0bf;  */

void FUN_10563f0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2ae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10563f0c0; end: 10563f0e7;  */

long FUN_10563f0c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10563f0e8; end: 10563f0fb;  */

void FUN_10563f0e8(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10563f0fc; end: 10563f14b;  */

long FUN_10563f0fc(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  
  puVar1 = param_1;
  func_0x00010563f2fc(*param_1);
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  FUN_10563f14c();
  func_0x00010563f2fc(*param_1);
  if (!(bool)in_ZR) {
    param_1 = extraout_x9_00;
  }
  return (long)param_1 + ((param_2 - (long)puVar1) * 0x20000000 >> 0x1d);
}



/* Entry: 10563f14c; end: 10563f1c7;  */

/* WARNING: Removing unreachable block (ram,0x00010563f1f0) */
/* WARNING: Removing unreachable block (ram,0x00010563f1f8) */

void FUN_10563f14c(ulong *param_1,int param_2,uint param_3)

{
  ulong *puVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulong *extraout_x9;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = param_1;
  iVar3 = param_2;
  uVar4 = param_3;
  func_0x00010563f2fc(*param_1);
  puVar1 = puVar2;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  puVar1 = puVar1 + iVar3;
  uVar8 = puVar2[2];
  for (uVar9 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1) {
    if ((uVar8 == 0) && (*puVar1 != 0)) {
      func_0x00010563f398();
    }
    puVar1 = puVar1 + 1;
  }
  if (0 < (int)param_3) {
    if ((*param_1 & 1) == 0) {
      if ((param_2 == 0) && (param_3 == 1)) {
        *param_1 = 0;
      }
    }
    else {
      piVar5 = (int *)(*param_1 - 1);
      iVar3 = *piVar5;
      lVar7 = (long)(int)(param_3 + param_2);
      while (lVar6 = lVar7 + 1, lVar7 < iVar3) {
        *(undefined8 *)(piVar5 + (long)(int)param_3 * -2 + lVar6 * 2) =
             *(undefined8 *)(piVar5 + lVar6 * 2);
        lVar7 = lVar6;
      }
      *piVar5 = iVar3 - param_3;
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] - param_3;
    return;
  }
  return;
}



/* Entry: 10563f1c8; end: 10563f22b;  */

void FUN_10563f1c8(ulong *param_1,int param_2,uint param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  ulong *extraout_x9;
  long lVar5;
  long lVar6;
  
  bVar3 = param_3 == 1;
  if (0 < (int)param_3) {
    if (param_4 != 0) {
      func_0x00010563f2fc(*param_1);
      puVar1 = param_1;
      if (!bVar3) {
        puVar1 = extraout_x9;
      }
      _memcpy(param_4,puVar1 + param_2,(ulong)param_3 << 3);
    }
    if ((*param_1 & 1) == 0) {
      if ((param_2 == 0) && (param_3 == 1)) {
        *param_1 = 0;
      }
    }
    else {
      piVar4 = (int *)(*param_1 - 1);
      iVar2 = *piVar4;
      lVar6 = (long)(int)(param_3 + param_2);
      while (lVar5 = lVar6 + 1, lVar6 < iVar2) {
        *(undefined8 *)(piVar4 + (long)(int)param_3 * -2 + lVar5 * 2) =
             *(undefined8 *)(piVar4 + lVar5 * 2);
        lVar6 = lVar5;
      }
      *piVar4 = iVar2 - param_3;
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] - param_3;
    return;
  }
  return;
}



/* Entry: 10563f22c; end: 10563f263;  */

/* WARNING: Possible PIC construction at 0x000100064628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006462c) */

undefined1  [16] FUN_10563f22c(ulong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int ****ppppiVar6;
  ulong *puVar7;
  int ***pppiVar8;
  uint *puVar9;
  ulong uVar10;
  int ****ppppiVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int ***apppiStack_58 [2];
  undefined8 uStack_48;
  
  puVar7 = param_1;
  func_0x0001053a91c8();
  if ((int)puVar7 == 0) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = puVar7;
    return auVar15;
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  uVar1 = iVar4 + 1;
  uVar2 = iVar4 + 2;
  puVar9 = (uint *)param_1[2];
  uVar12 = 1;
  if (0 < (int)uVar2) {
    if ((int)uVar2 < (int)(uVar1 * 2 | 1)) {
      uVar2 = uVar1 * 2 + 1;
    }
    uVar3 = 0x7fffffff;
    if (iVar4 < 0x3ffffffb) {
      uVar3 = uVar2;
    }
    uVar12 = (ulong)uVar3;
  }
  ppppiVar6 = (int ****)(uVar12 * 8 + 8);
  if (puVar9 != (uint *)0x0) {
    uStack_48 = 0xffffffffffffffff;
    ppppiVar11 = apppiStack_58;
    apppiStack_58[0] = (int ***)ppppiVar6;
    func_0x0001053abb00(ppppiVar11,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppppiVar11 == (int ****)0x0) {
      puVar5 = puVar9;
      func_0x0001053abb54(puVar9,ppppiVar6,1);
      uVar10 = *param_1;
      if ((uVar10 & 1) == 0) {
        *puVar5 = (uint)(uVar10 != 0);
        *(ulong *)(puVar5 + 2) = uVar10;
      }
      else {
        ppppiVar11 = (int ****)(uVar10 - 1);
        ppppiVar6 = ppppiVar11;
        func_0x000107c610b4(puVar5,ppppiVar11,(long)*(int *)ppppiVar11 * 8 + 8);
        if (puVar9 == (uint *)0x0) {
          func_0x000107c60e14(ppppiVar11);
        }
        else {
          func_0x0001053abbbc(puVar9,ppppiVar11,
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 8
                             );
          ppppiVar6 = ppppiVar11;
        }
      }
      *param_1 = (long)puVar5 + 1;
      *(int *)((long)param_1 + 0xc) = (int)uVar12 + -1;
      auVar13._8_8_ = ppppiVar6;
      auVar13._0_8_ = puVar5 + (long)(int)param_1[1] * 2 + 2;
      return auVar13;
    }
    pppiVar8 = (int ***)(long)*(char *)((long)ppppiVar11 + 0x17);
    ppppiVar6 = ppppiVar11;
    if ((long)pppiVar8 < 0) {
      ppppiVar6 = (int ****)*ppppiVar11;
      pppiVar8 = ppppiVar11[1];
    }
    func_0x000107c2b940(apppiStack_58,
                        "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                        ,0x10a,ppppiVar6,pppiVar8);
    func_0x0001053abb1c(apppiStack_58,"Requested size is too large to fit into size_t.");
    ppppiVar6 = apppiStack_58;
    func_0x000107c2b948(ppppiVar6);
  }
  ppppiVar11 = ppppiVar6;
  func_0x000107c60e20();
  auVar14._8_8_ = ppppiVar6;
  auVar14._0_8_ = ppppiVar11;
  return auVar14;
}



/* Entry: 10563f264; end: 10563f3db;  */

void FUN_10563f264(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10563f3dc; end: 10563f4cb;  */

void FUN_10563f3dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  uStack_58 = param_5;
  func_0x00010bcd2ce8(&puStack_50,puVar2,uVar1);
  uVar4 = 0;
  func_0x0001000e1048(auStack_70,&puStack_50,0,0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_50);
  puVar3 = auStack_70;
  func_0x0001005d466c();
  puStack_50 = &UNK_10f2e05df;
  uStack_48 = 0;
  puStack_40 = puVar3;
  uStack_38 = uVar4;
  func_0x0001003a91d4(&UNK_10f2e0563);
  func_0x0001003a9204(auStack_88);
  FUN_10563f4cc(param_1,param_2,&uStack_58,auStack_88,param_4);
  func_0x00010564050c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return;
}



/* Entry: 10563f4cc; end: 10563f52f;  */

void FUN_10563f4cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  FUN_10563f530();
  *param_1 = uVar1;
  return;
}



/* Entry: 10563f530; end: 10563f5d7;  */

undefined8 *
FUN_10563f530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_DAT_1108a2ba0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_10563f5d8(param_1 + 1);
  param_1[3] = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 4,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 7,param_5);
  return param_1;
}



/* Entry: 10563f5d8; end: 10563f62b;  */

undefined8 * FUN_10563f5d8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  func_0x0001005d1964(&uStack_30);
  return param_1;
}



/* Entry: 10563f62c; end: 10563faff;  */

long ** FUN_10563f62c(long param_1,ulong param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long **pplVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *extraout_x8;
  long **pplVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_690;
  long *plStack_688;
  long **pplStack_680;
  undefined1 **ppuStack_670;
  code *pcStack_668;
  undefined1 auStack_658 [24];
  undefined8 auStack_640 [3];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined8 auStack_598 [3];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined8 auStack_508 [3];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  long lStack_4a8;
  int iStack_4a0;
  undefined4 uStack_49c;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined8 auStack_460 [3];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [3];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  long *plStack_370;
  undefined8 uStack_368;
  long *plStack_358;
  undefined1 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  long **pplStack_338;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  long **applStack_148 [2];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  long lStack_88;
  undefined1 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 **ppuStack_68;
  
  lVar1 = param_1;
  func_0x000105640524();
  uStack_80 = 1;
  uVar5 = param_2;
  lStack_88 = lVar1;
  func_0x00010b214060(param_2);
  func_0x000100291d50(&lStack_a8,uVar5);
  func_0x00010b4d1758(param_2,lStack_a8,iStack_a0 - (int)lStack_a8);
  if ((param_2 & 1) == 0) {
    FUN_1056395d0();
    func_0x00010002b838(auStack_c0,&UNK_10f2e0569);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_d8);
    func_0x0001056404f8(auStack_f0);
    func_0x0001056405a4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    puVar2 = auStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    FUN_1056395d0();
    func_0x00010002b838(auStack_108,&UNK_10f2e0569);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_120);
    puVar3 = auStack_138;
    func_0x0001056404f8(puVar3);
    func_0x0001056404f0();
    FUN_10563905c(puVar2,auStack_108,auStack_120,auStack_138,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    pplVar9 = (long **)0x0;
  }
  else {
    func_0x00010b4912d0(applStack_148,*(undefined8 *)(param_1 + 8),param_1 + 0x20,0);
    if (applStack_148[0] == (long **)0x0) {
      FUN_1056395d0();
      func_0x00010002b838(auStack_160,&UNK_10f2e057c);
      func_0x0001056404e4();
      func_0x00010002b838(auStack_178);
      func_0x0001056404f8(auStack_190);
      func_0x0001056405a4();
      func_0x0001056405c8();
      puVar3 = auStack_178;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      func_0x0001056405d0();
      FUN_1056395d0();
      func_0x00010002b838(auStack_1a8,&UNK_10f2e057c);
      func_0x0001056404e4();
      func_0x00010002b838(auStack_1c0);
      puVar2 = auStack_1d8;
      func_0x0001056404f8(puVar2);
      func_0x0001056404f0();
      FUN_10563905c(puVar3,auStack_1a8,auStack_1c0,auStack_1d8,puVar2);
      func_0x00010564055c();
      func_0x0001056405c0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
      pplVar9 = (long **)0x0;
    }
    else {
      pcStack_78 = FUN_105640460;
      ppuStack_70 = &PTR_DAT_1108a2bf8;
      ppuStack_68 = applStack_148;
      pplVar9 = applStack_148[0];
      func_0x00010b4928b4(applStack_148[0],lStack_a8,CONCAT44(uStack_9c,iStack_a0) - lStack_a8);
      if (((ulong)pplVar9 & 1) == 0) {
        pplVar4 = pplVar9;
        FUN_1056395d0();
        func_0x00010002b838(auStack_1f0,&UNK_10f2e058d);
        func_0x0001056404e4();
        func_0x00010002b838(auStack_208);
        func_0x0001056404f8(auStack_220);
        FUN_105638fdc(pplVar4,auStack_1f0,auStack_208,auStack_220,1);
        func_0x00010564059c();
        puVar3 = auStack_208;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x0001056405b0();
        FUN_1056395d0();
        func_0x00010002b838(auStack_238,&UNK_10f2e058d);
        func_0x0001056404e4();
        func_0x00010002b838(auStack_250);
        puVar2 = auStack_268;
        func_0x0001056404f8(puVar2);
        func_0x0001056404f0();
        FUN_10563905c(puVar3,auStack_238,auStack_250,auStack_268,puVar2);
        func_0x00010564053c();
        puVar3 = auStack_238;
      }
      else {
        FUN_1056395d0();
        func_0x000105640514();
        func_0x00010002b838(auStack_280);
        func_0x0001056404f8(auStack_298);
        func_0x0001056405ec();
        FUN_1056390dc();
        func_0x00010564054c();
        func_0x000105640554();
        FUN_1056395d0();
        func_0x000105640514();
        func_0x0001056405d8();
        func_0x0001056404f8(auStack_2c8);
        func_0x0001056404f0();
        puVar3 = auStack_2b0;
        FUN_105639154();
      }
      func_0x0001056405b8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      func_0x000105640574();
    }
    func_0x000105640438(applStack_148);
  }
  func_0x000100100fec();
  func_0x00010564057c();
  if ((bool)in_ZR) {
    return pplVar9;
  }
  ___stack_chk_fail();
  func_0x000105640594();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
  func_0x000105640574();
  func_0x000105640438(applStack_148);
  plVar12 = &lStack_a8;
  func_0x000100100fec();
  func_0x000105640544();
  pcStack_2d8 = FUN_10563fb00;
  plVar11 = plVar12;
  puStack_2e0 = &stack0xfffffffffffffff0;
  func_0x000105640524();
  uStack_350 = 1;
  *extraout_x8 = &PTR_DAT_110cc7b78;
  extraout_x8[1] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 5) = 0;
  plStack_370 = (long *)0x0;
  uStack_368 = 0;
  uVar5 = plVar12[1];
  plStack_358 = plVar11;
  func_0x00010b491b9c(uVar5,plVar12 + 4);
  if ((uVar5 & 1) == 0) {
    FUN_1056395d0();
    func_0x00010002b838(auStack_388,&UNK_10f2e0598);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_3a0);
    func_0x0001056404d0(auStack_3b8);
    func_0x0001056404d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a0);
    puVar2 = auStack_388;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    FUN_1056395d0();
    func_0x00010002b838(auStack_3d0,&UNK_10f2e0598);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_3e8);
    puVar3 = auStack_400;
    func_0x0001056404d0(puVar3);
    func_0x0001056404f0();
    puVar6 = auStack_3d0;
    FUN_105638e64(puVar2,puVar6,auStack_3e8,auStack_400,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_400);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e8);
    puVar7 = auStack_3d0;
  }
  else {
    func_0x00010b4911fc(&uStack_348,plVar12[1],plVar12 + 4);
    FUN_105640184(&plStack_370,&uStack_348);
    FUN_105640484(&uStack_348);
    if (plStack_370 != (long *)0x0) {
      uStack_348 = 0x1056404ac;
      ppuStack_340 = &PTR_DAT_1108a2c10;
      pplStack_338 = &plStack_370;
      func_0x000100291d50(&lStack_4a8,*(undefined8 *)(*plStack_370 + 8));
      plVar11 = plStack_370;
      func_0x00010b4925bc(plStack_370,lStack_4a8,CONCAT44(uStack_49c,iStack_4a0) - lStack_4a8);
      if (((ulong)plVar11 & 1) == 0) {
        FUN_1056395d0();
        func_0x00010002b838(auStack_4c0,&UNK_10f2e05b5);
        func_0x0001056404e4();
        func_0x00010002b838(auStack_4d8);
        func_0x0001056404d0(auStack_4f0);
        func_0x0001056404d8();
        func_0x0001056405d0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d8);
        puVar2 = auStack_4c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
        FUN_1056395d0();
        func_0x00010002b838(auStack_508,&UNK_10f2e05b5);
        func_0x0001056404e4();
        func_0x00010002b838(auStack_520);
        puVar8 = auStack_538;
        func_0x0001056404d0(puVar8);
        func_0x0001056404f0();
        puVar7 = auStack_508;
        puVar3 = auStack_520;
        puVar10 = auStack_538;
        puVar6 = auStack_508;
        FUN_105638e64(puVar2,puVar6,auStack_520,auStack_538,puVar8);
LAB_10563ff54:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
      }
      else {
        puVar6 = extraout_x8;
        func_0x00010006369c(extraout_x8,lStack_4a8,iStack_4a0 - (int)lStack_4a8);
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1056395d0();
          func_0x00010002b838(auStack_550,&UNK_10f2e05bf);
          func_0x0001056404e4();
          func_0x00010002b838(auStack_568);
          puVar2 = auStack_580;
          func_0x0001056404d0(puVar2);
          func_0x0001056404d8();
          func_0x0001056405b0();
          func_0x00010564055c();
          func_0x0001056405c0();
          FUN_1056395d0();
          func_0x00010002b838(auStack_598,&UNK_10f2e05bf);
          func_0x0001056404e4();
          func_0x00010002b838(auStack_5b0);
          puVar8 = auStack_5c8;
          func_0x0001056404d0(puVar8);
          func_0x0001056404f0();
          puVar7 = auStack_598;
          puVar3 = auStack_5b0;
          puVar10 = auStack_5c8;
          puVar6 = auStack_598;
          FUN_105638e64(puVar2,puVar6,auStack_5b0,auStack_5c8,puVar8);
          goto LAB_10563ff54;
        }
        FUN_1056395d0();
        func_0x0001056404d0(auStack_5e0);
        FUN_1056392f4(puVar6,auStack_5e0,(long)*(int *)(extraout_x8 + 3));
        func_0x000105640594();
        FUN_1056395d0();
        func_0x0001056404d0(auStack_5f8);
        FUN_10563935c(puVar6,auStack_5f8,(long)*(int *)(extraout_x8 + 3));
        func_0x00010564053c();
        FUN_10564345c(extraout_x8,plVar12[3],plVar12 + 7);
        FUN_1056395d0();
        func_0x000105640514();
        func_0x00010002b838(auStack_610);
        puVar2 = auStack_628;
        func_0x0001056404d0(puVar2);
        func_0x0001056405ec();
        FUN_105638ee4();
        func_0x00010564054c();
        func_0x000105640554();
        FUN_1056395d0();
        func_0x0001056405d8();
        puVar8 = auStack_658;
        func_0x0001056404d0(puVar8);
        func_0x0001056404f0();
        puVar7 = auStack_640;
        puVar3 = auStack_658;
        puVar6 = auStack_640;
        FUN_105638f5c(puVar2,puVar6,auStack_658,puVar8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
      func_0x000100100fec(&lStack_4a8);
      func_0x000105640574();
      goto LAB_10563ff78;
    }
    FUN_1056395d0();
    func_0x00010002b838(auStack_418,&UNK_10f2e05a5);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_430);
    func_0x0001056404d0(auStack_448);
    func_0x0001056404d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_448);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_430);
    puVar3 = auStack_418;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    FUN_1056395d0();
    func_0x00010002b838(auStack_460,&UNK_10f2e05a5);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_478);
    puVar2 = auStack_490;
    func_0x0001056404d0(puVar2);
    func_0x0001056404f0();
    puVar6 = auStack_460;
    FUN_105638e64(puVar3,puVar6,auStack_478,auStack_490,puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_490);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_478);
    puVar7 = auStack_460;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
LAB_10563ff78:
  pplVar9 = &plStack_370;
  FUN_105640484();
  func_0x00010564057c();
  if ((bool)in_ZR) {
    return pplVar9;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_640);
  func_0x000100100fec(&lStack_4a8);
  func_0x000105640574();
  FUN_105640484(&plStack_370);
  func_0x00010b213f18(extraout_x8);
  pplVar4 = pplVar9;
  __Unwind_Resume();
  pcStack_668 = FUN_105640184;
  plVar12 = (long *)puVar6[1];
  plVar11 = (long *)*puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  plStack_688 = pplVar4[1];
  plStack_690 = *pplVar4;
  pplStack_680 = pplVar9;
  ppuStack_670 = &puStack_2e0;
  pplVar4[1] = plVar12;
  *pplVar4 = plVar11;
  FUN_105640484(&plStack_690);
  return pplVar4;
}



/* Entry: 10563fb00; end: 105640183;  */

long ** FUN_10563fb00(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long **pplVar8;
  long **pplVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_3c0;
  long *plStack_3b8;
  long **pplStack_3b0;
  undefined8 *puStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [3];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined8 auStack_2c8 [3];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined8 auStack_238 [3];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  long lStack_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [3];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long **pplStack_68;
  
  lVar1 = param_2;
  func_0x000105640524();
  uStack_80 = 1;
  *param_1 = &PTR_DAT_110cc7b78;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  plStack_a0 = (long *)0x0;
  uStack_98 = 0;
  uVar2 = *(ulong *)(param_2 + 8);
  lStack_88 = lVar1;
  func_0x00010b491b9c(uVar2,param_2 + 0x20);
  if ((uVar2 & 1) == 0) {
    FUN_1056395d0();
    func_0x00010002b838(auStack_b8,&UNK_10f2e0598);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_d0);
    func_0x0001056404d0(auStack_e8);
    func_0x0001056404d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    puVar4 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
    FUN_1056395d0();
    func_0x00010002b838(auStack_100,&UNK_10f2e0598);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_118);
    puVar5 = auStack_130;
    func_0x0001056404d0(puVar5);
    func_0x0001056404f0();
    puVar3 = auStack_100;
    FUN_105638e64(puVar4,puVar3,auStack_118,auStack_130,puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
    puVar6 = auStack_100;
  }
  else {
    func_0x00010b4911fc(&uStack_78,*(undefined8 *)(param_2 + 8),param_2 + 0x20);
    FUN_105640184(&plStack_a0,&uStack_78);
    FUN_105640484(&uStack_78);
    if (plStack_a0 != (long *)0x0) {
      uStack_78 = 0x1056404ac;
      ppuStack_70 = &PTR_DAT_1108a2c10;
      pplStack_68 = &plStack_a0;
      func_0x000100291d50(&lStack_1d8,*(undefined8 *)(*plStack_a0 + 8));
      plVar11 = plStack_a0;
      func_0x00010b4925bc(plStack_a0,lStack_1d8,CONCAT44(uStack_1cc,iStack_1d0) - lStack_1d8);
      if (((ulong)plVar11 & 1) == 0) {
        FUN_1056395d0();
        func_0x00010002b838(auStack_1f0,&UNK_10f2e05b5);
        func_0x0001056404e4();
        func_0x00010002b838(auStack_208);
        func_0x0001056404d0(auStack_220);
        func_0x0001056404d8();
        func_0x0001056405d0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
        puVar4 = auStack_1f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
        FUN_1056395d0();
        func_0x00010002b838(auStack_238,&UNK_10f2e05b5);
        func_0x0001056404e4();
        func_0x00010002b838(auStack_250);
        puVar7 = auStack_268;
        func_0x0001056404d0(puVar7);
        func_0x0001056404f0();
        puVar6 = auStack_238;
        puVar5 = auStack_250;
        puVar10 = auStack_268;
        puVar3 = auStack_238;
        FUN_105638e64(puVar4,puVar3,auStack_250,auStack_268,puVar7);
LAB_10563ff54:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
      }
      else {
        puVar3 = param_1;
        func_0x00010006369c(param_1,lStack_1d8,iStack_1d0 - (int)lStack_1d8);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_1056395d0();
          func_0x00010002b838(auStack_280,&UNK_10f2e05bf);
          func_0x0001056404e4();
          func_0x00010002b838(auStack_298);
          puVar4 = auStack_2b0;
          func_0x0001056404d0(puVar4);
          func_0x0001056404d8();
          func_0x0001056405b0();
          func_0x00010564055c();
          func_0x0001056405c0();
          FUN_1056395d0();
          func_0x00010002b838(auStack_2c8,&UNK_10f2e05bf);
          func_0x0001056404e4();
          func_0x00010002b838(auStack_2e0);
          puVar7 = auStack_2f8;
          func_0x0001056404d0(puVar7);
          func_0x0001056404f0();
          puVar6 = auStack_2c8;
          puVar5 = auStack_2e0;
          puVar10 = auStack_2f8;
          puVar3 = auStack_2c8;
          FUN_105638e64(puVar4,puVar3,auStack_2e0,auStack_2f8,puVar7);
          goto LAB_10563ff54;
        }
        FUN_1056395d0();
        func_0x0001056404d0(auStack_310);
        FUN_1056392f4(puVar3,auStack_310,(long)*(int *)(param_1 + 3));
        func_0x000105640594();
        FUN_1056395d0();
        func_0x0001056404d0(auStack_328);
        FUN_10563935c(puVar3,auStack_328,(long)*(int *)(param_1 + 3));
        func_0x00010564053c();
        FUN_10564345c(param_1,*(undefined8 *)(param_2 + 0x18),param_2 + 0x38);
        FUN_1056395d0();
        func_0x000105640514();
        func_0x00010002b838(auStack_340);
        puVar4 = auStack_358;
        func_0x0001056404d0(puVar4);
        func_0x0001056405ec();
        FUN_105638ee4();
        func_0x00010564054c();
        func_0x000105640554();
        FUN_1056395d0();
        func_0x0001056405d8();
        puVar7 = auStack_388;
        func_0x0001056404d0(puVar7);
        func_0x0001056404f0();
        puVar6 = auStack_370;
        puVar5 = auStack_388;
        puVar3 = auStack_370;
        FUN_105638f5c(puVar4,puVar3,auStack_388,puVar7);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
      func_0x000100100fec(&lStack_1d8);
      func_0x000105640574();
      goto LAB_10563ff78;
    }
    FUN_1056395d0();
    func_0x00010002b838(auStack_148,&UNK_10f2e05a5);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_160);
    func_0x0001056404d0(auStack_178);
    func_0x0001056404d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    puVar5 = auStack_148;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
    FUN_1056395d0();
    func_0x00010002b838(auStack_190,&UNK_10f2e05a5);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_1a8);
    puVar4 = auStack_1c0;
    func_0x0001056404d0(puVar4);
    func_0x0001056404f0();
    puVar3 = auStack_190;
    FUN_105638e64(puVar5,puVar3,auStack_1a8,auStack_1c0,puVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    puVar6 = auStack_190;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
LAB_10563ff78:
  pplVar8 = &plStack_a0;
  FUN_105640484();
  func_0x00010564057c();
  if ((bool)in_ZR) {
    return pplVar8;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
  func_0x000100100fec(&lStack_1d8);
  func_0x000105640574();
  FUN_105640484(&plStack_a0);
  func_0x00010b213f18(param_1);
  pplVar9 = pplVar8;
  __Unwind_Resume();
  pcStack_398 = FUN_105640184;
  plVar12 = (long *)puVar3[1];
  plVar11 = (long *)*puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  plStack_3b8 = pplVar9[1];
  plStack_3c0 = *pplVar9;
  pplStack_3b0 = pplVar8;
  puStack_3a8 = param_1;
  puStack_3a0 = &stack0xfffffffffffffff0;
  pplVar9[1] = plVar12;
  *pplVar9 = plVar11;
  FUN_105640484(&plStack_3c0);
  return pplVar9;
}



/* Entry: 105640184; end: 1056401bf;  */

undefined8 * FUN_105640184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_105640484(&uStack_30);
  return param_1;
}



/* Entry: 1056401c0; end: 1056403cf;  */

undefined8 FUN_1056401c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_58 = 0;
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_48 = 1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  lStack_50 = lVar1;
  func_0x00010b491414(uVar2,param_1 + 0x20);
  uVar3 = uVar2;
  FUN_1056395d0();
  if ((int)uVar2 == 0) {
    func_0x00010002b838(auStack_d0,&UNK_10f2e05d4);
    func_0x0001056404e4();
    func_0x00010002b838(auStack_e8);
    func_0x0001056404d0(auStack_100);
    FUN_105638bec(uVar3,auStack_d0,auStack_e8,auStack_100,1);
    func_0x000105640554();
    func_0x00010564053c();
    func_0x000105640594();
    FUN_1056395d0();
    func_0x00010002b838(auStack_118,&UNK_10f2e05d4);
    func_0x0001056404e4();
    func_0x0001056405d8();
    func_0x0001056404d0(auStack_148);
    puVar4 = &uStack_58;
    func_0x0001002acb3c(puVar4);
    FUN_105638c6c(uVar3,auStack_118,auStack_130,auStack_148,puVar4);
    func_0x00010564050c();
    puVar5 = auStack_118;
  }
  else {
    func_0x00010002b838(auStack_70,"success");
    func_0x0001056404d0(auStack_88);
    FUN_105638cec(uVar3,auStack_70,auStack_88,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    FUN_1056395d0();
    func_0x000105640514();
    func_0x00010002b838(auStack_a0);
    func_0x0001056404d0(auStack_b8);
    puVar4 = &uStack_58;
    func_0x0001002acb3c(puVar4);
    puVar5 = auStack_a0;
    FUN_105638d64(uVar3,auStack_a0,auStack_b8,puVar4);
  }
  func_0x0001056405b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
  return uVar2;
}



/* Entry: 1056403d0; end: 1056403df;  */

void FUN_1056403d0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x20);
  return;
}



/* Entry: 1056403e0; end: 1056403f3;  */

void FUN_1056403e0(void)

{
  FUN_1056403f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056403f4; end: 10564045f;  */

undefined8 * FUN_1056403f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a2ba0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  func_0x0001005d1964(param_1 + 1);
  return param_1;
}



/* Entry: 105640460; end: 105640483;  */

void FUN_105640460(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)**(undefined8 **)(param_1 + 0x10);
  if (puVar1[1] != -1) {
    func_0x00010b490b24(puVar1[1],1,*puVar1);
    _close(puVar1[1]);
    puVar1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 105640484; end: 1056404ab;  */

long FUN_105640484(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056404ac; end: 1056405ff;  */

void FUN_1056404ac(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)**(undefined8 **)(param_1 + 0x10);
  if (puVar1[1] != -1) {
    func_0x00010b490b24(puVar1[1],0,*puVar1);
    _close(puVar1[1]);
    puVar1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 105640600; end: 105640657;  */

void FUN_105640600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  FUN_1056395d0();
  FUN_105640658(&uStack_40,param_2,param_3,param_4,uVar1);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000105642b40();
  return;
}



/* Entry: 105640658; end: 1056406d7;  */

void FUN_105640658(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar1 == 0) {
    uStack_38 = 0;
  }
  else {
    FUN_10563a788(&uStack_38,param_4);
  }
  FUN_105640784(param_1,param_2,param_3,&uStack_38,param_5);
  func_0x000105642ac0();
  return;
}



/* Entry: 1056406d8; end: 105640783;  */

void FUN_1056406d8(long *param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000105640720(&lStack_30);
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 8;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_28;
  lStack_30 = 0;
  lStack_28 = 0;
  func_0x000105642b40();
  return;
}



/* Entry: 105640784; end: 1056407b3;  */

void FUN_105640784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_105641bd8(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1056407b4; end: 1056412e7;  */

void FUN_1056407b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined *param_6,uint *param_7,long param_8,undefined8 *param_9)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  long lVar18;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auStack_5a0 [16];
  undefined1 uStack_590;
  ulong auStack_588 [5];
  undefined1 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined1 auStack_528 [24];
  undefined1 uStack_510;
  undefined1 auStack_508 [24];
  undefined1 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined1 auStack_4a8 [64];
  undefined1 uStack_468;
  ulong uStack_460;
  long lStack_458;
  ulong uStack_450;
  undefined8 uStack_448;
  uint *puStack_440;
  undefined1 *puStack_438;
  long *plStack_430;
  undefined1 *puStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined1 auStack_410 [8];
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [16];
  undefined1 auStack_3f0 [8];
  undefined4 uStack_3e8;
  undefined1 uStack_3e4;
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [16];
  undefined8 uStack_3b8;
  uint auStack_3b0 [2];
  undefined1 auStack_3a8 [16];
  undefined4 uStack_398;
  undefined1 auStack_390 [8];
  undefined8 uStack_388;
  undefined1 auStack_378 [272];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  long alStack_190 [3];
  long lStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  int iStack_140;
  char cStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  ulong auStack_70 [2];
  
  bVar5 = *(long *)(param_1 + 0x68) == 0;
  uVar7 = param_7[0x2c];
  uVar22 = *(undefined8 *)(param_1 + 0x78);
  uVar8 = 0x1c0;
  __Znwm();
  uStack_460 = CONCAT44(uStack_460._4_4_,*param_7);
  FUN_105641ef4(&lStack_458,param_7 + 2);
  func_0x00010028af84(auStack_408,param_7 + 0x16);
  func_0x00010028af84(&uStack_3e8,param_7 + 0x1e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_3c8,param_7 + 0x26);
  auStack_3b0[0] = param_7[0x2c];
  func_0x00010028af84(auStack_3a8,param_7 + 0x2e);
  uStack_388 = *(undefined8 *)(param_7 + 0x36);
  FUN_10563b81c(uVar8,&uStack_460,param_4,uVar22);
  auStack_70[0] = uVar8;
  FUN_105633bb0(&uStack_460);
  auStack_118[0] = 0;
  uStack_78 = 0;
  bVar6 = *(char *)(param_8 + 0xa0) == '\x01';
  if (bVar6) {
    FUN_1052a06f8(auStack_118,param_8);
    uStack_d0 = *(undefined8 *)(param_8 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c8,param_8 + 0x50);
    uStack_b0 = *(undefined4 *)(param_8 + 0x68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_a8,param_8 + 0x70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_90,param_8 + 0x88);
  }
  puVar10 = auStack_118;
  uStack_78 = bVar6;
  FUN_10563be2c(uVar8 + 0x108);
  FUN_1056319a4(auStack_118);
  if (bVar5 || uVar7 != 2) {
    bVar20 = 0;
  }
  else {
    bVar20 = (byte)param_7[0x36];
  }
  FUN_10564365c(alStack_190,param_5);
  uVar2 = param_7[0x2c];
  uVar3 = *param_7;
  puVar9 = param_7 + 0x26;
  func_0x0001005d466c();
  plVar19 = alStack_190;
  puVar16 = puVar10;
  func_0x0001005d466c();
  lStack_458 = 0;
  puStack_420 = &DAT_10f2df1a0;
  if ((bVar20 & 1) == 0) {
    puStack_420 = &UNK_10f2e0601;
  }
  uStack_448 = 0;
  uStack_418 = 0;
  uStack_460 = (ulong)uVar2;
  uStack_450 = (ulong)uVar3;
  puStack_440 = puVar9;
  puStack_438 = puVar10;
  plStack_430 = plVar19;
  puStack_428 = puVar16;
  func_0x0001003a91d4(&UNK_10f2e05f2);
  func_0x0001003a9204(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_190);
  if (bVar5 || uVar7 != 2) {
    alStack_190[0]._0_1_ = 0;
    cStack_138 = '\0';
  }
  else {
    FUN_10563998c(alStack_190,*(undefined8 *)(param_1 + 0x68),(long)(int)param_7[0x2c],
                  (long)(int)*param_7,param_7 + 0x26);
  }
  uVar22 = *(undefined8 *)(param_1 + 0x78);
  FUN_1056437e0(auStack_1a8,param_4);
  FUN_10563bb1c(auStack_1c0,uVar8);
  puVar1 = &UNK_10f2e060d;
  if ((bVar20 & 1) == 0) {
    puVar1 = &UNK_10f2e0617;
  }
  func_0x00010002b838(auStack_1d8,puVar1);
  func_0x000105642af0();
  func_0x00010002b838(auStack_1f0);
  FUN_1056393c4(uVar22,auStack_1a8,auStack_1c0,auStack_1d8,auStack_1f0,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  puVar10 = auStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (((cStack_138 == '\x01') && (iStack_140 == 0)) &&
     (__ZNSt3__16chrono12system_clock3nowEv(),
     lStack_178 * 1000 - (long)puVar10 != 0 && (long)puVar10 <= lStack_178 * 1000)) {
    uVar22 = *(undefined8 *)(param_1 + 0x78);
    FUN_1056437e0(auStack_208,param_4);
    FUN_10563bb1c(auStack_220,uVar8);
    func_0x00010002b838(auStack_238,"success");
    func_0x00010002b838(auStack_250,&UNK_10f2e062d);
    func_0x000105642af0();
    func_0x00010002b838(auStack_268);
    FUN_105639448(uVar22,auStack_208,auStack_220,auStack_238,auStack_250,auStack_268,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_250);
    func_0x000105642ae8();
    func_0x000105642ad0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    plVar19 = (long *)*param_9;
    FUN_1056412e8(auStack_588,auStack_158);
    auStack_4a8[0] = 0;
    uStack_468 = 0;
    FUN_10563bb90(&uStack_460,uVar8,auStack_4a8,0);
    (**(code **)(*plVar19 + 0x10))(plVar19,auStack_170,auStack_588,&uStack_460);
    FUN_105631940(&uStack_460);
    FUN_1052a038c(auStack_4a8);
    func_0x0001000ff1ac(auStack_588);
    goto LAB_105640fc8;
  }
  uVar17 = 1;
  if ((char)param_7[0x36] != '\0') {
    uVar17 = 2;
  }
  if ((bVar20 & 1) != 0) {
    uVar22 = *(undefined8 *)(param_1 + 0x68);
    uStack_460 = (ulong)(int)param_7[0x2c];
    lStack_458 = (long)(int)*param_7;
    func_0x000105642b2c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&puStack_438,auStack_130);
    puStack_420 = param_6;
    func_0x000105642b1c(&uStack_418);
    plVar19 = (long *)*param_5;
    if (plVar19 == (long *)0x0) {
      plVar11 = (long *)0x0;
      plVar19 = (long *)0x0;
LAB_105640c20:
      plVar12 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar19 + 0x10))();
      plVar11 = (long *)*param_5;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_105640c20;
      }
      (**(code **)(*plVar11 + 0x10))();
      plVar12 = (long *)*param_5;
      if (plVar12 == (long *)0x0) goto LAB_105640c20;
      (**(code **)(*plVar12 + 0x18))();
    }
    func_0x00010029a878(auStack_400,plVar19,(long)plVar11 + (long)plVar12);
    uStack_3e8 = 1;
    uStack_3e4 = 1;
    FUN_10563a188(uVar22,&uStack_460);
    puVar13 = &uStack_460;
    FUN_105641a80();
    __ZNSt3__16chrono12system_clock3nowEv();
    uVar22 = *(undefined8 *)(param_1 + 0x68);
    uStack_460 = (ulong)(int)param_7[0x2c];
    lStack_458 = (long)(int)*param_7;
    func_0x000105642b2c();
    puStack_438 = (undefined1 *)((long)puVar13 / 1000);
    if ((char)param_7[8] == '\x01') {
      plVar19 = *(long **)(param_7 + 4);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))();
      }
    }
    else {
      plVar19 = (long *)0x0;
    }
    uVar8 = auStack_70[0];
    plStack_430 = plVar19;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&puStack_428,auStack_70[0] + 0xa0);
    func_0x00010028af84(auStack_410,param_7 + 0x1e);
    func_0x00010028af84(auStack_3f0,param_7 + 0x16);
    func_0x000105642b1c(auStack_3d0);
    if (*(char *)(param_8 + 0xa0) == '\x01') {
      uStack_3b8 = *(undefined8 *)(param_8 + 0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_3b0,param_8 + 0x50);
    }
    else {
      uStack_3b8 = 0;
      func_0x00010002b838(auStack_3b0,"");
    }
    if (*(char *)(param_8 + 0xa0) == '\x01') {
      uStack_398 = *(undefined4 *)(param_8 + 0x68);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_390,param_8 + 0x70);
    }
    else {
      uStack_398 = 0;
      func_0x00010002b838(auStack_390,"");
    }
    if (*(char *)(param_8 + 0xa0) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_378,param_8 + 0x88);
    }
    else {
      func_0x00010002b838(auStack_378,"");
    }
    FUN_10563a270(uVar22,&uStack_460);
    FUN_10563ae80(&uStack_460);
  }
  puVar14 = (undefined8 *)0xd0;
  __Znwm();
  plVar11 = puVar14 + 1;
  *plVar11 = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_1108a2d90;
  puVar21 = puVar14 + 3;
  *puVar21 = &PTR_DAT_1108a2de0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar14 + 4,auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar14 + 7,param_2);
  func_0x00010028b0c8(puVar14 + 10,param_3);
  *(undefined4 *)(puVar14 + 0xf) = uVar17;
  FUN_105641ef4(puVar14 + 0x10,param_7 + 2);
  uVar7 = param_7[0x2c];
  puStack_4b8 = puVar21;
  puStack_4b0 = puVar14;
  FUN_105642ddc();
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  auStack_508[0] = 0;
  uStack_4f0 = 0;
  auStack_528[0] = 0;
  uStack_510 = 0;
  uStack_460._0_5_ = (uint5)uVar7;
  lStack_458 = CONCAT44(lStack_458._4_4_,4);
  uStack_448 = 0;
  uStack_450 = 0;
  puStack_438 = (undefined1 *)0x0;
  puStack_440 = (uint *)0x0;
  plStack_430 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  puStack_428 = (undefined1 *)((ulong)puStack_428 & 0xffffffffffffff00);
  auStack_410[0] = 0;
  auStack_408[0] = 0;
  auStack_3f0[0] = 0;
  func_0x0001001148fc(auStack_528);
  func_0x0001001148fc(auStack_508);
  func_0x0001000e30f4(&uStack_4d0);
  func_0x0001000e30f4(&uStack_4e8);
  plVar19 = *(long **)(param_1 + 0x20);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = *plVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar22 = *(undefined8 *)(param_1 + 0x78);
  puVar15 = (undefined8 *)0x80;
  puStack_538 = puVar21;
  puStack_530 = puVar14;
  __Znwm();
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &PTR_FUN_1108a2e90;
  puVar15[3] = &PTR_DAT_1108a2ee0;
  auStack_70[0] = 0;
  auStack_588[0] = uVar8;
  func_0x000105642b1c(puVar15 + 4);
  lVar18 = param_5[1];
  lVar23 = *param_5;
  puVar15[8] = param_5[1];
  puVar15[7] = lVar23;
  if (lVar18 != 0) {
    do {
      func_0x00010066a1bc();
    } while (extraout_w10 != 0);
  }
  lVar18 = param_9[1];
  uVar24 = *param_9;
  puVar15[10] = param_9[1];
  puVar15[9] = uVar24;
  if (lVar18 != 0) {
    do {
      func_0x00010066a1bc();
    } while (extraout_w10_00 != 0);
  }
  auStack_588[0] = 0;
  puVar15[0xb] = uVar8;
  puVar15[0xd] = 0;
  *(undefined1 *)(puVar15 + 0xe) = 0;
  puVar15[0xc] = 0;
  puVar15[0xf] = uVar22;
  func_0x00010028c284();
  func_0x000105641b44(auStack_588);
  uStack_558 = 0;
  uStack_550 = 0;
  auStack_588[0] = auStack_588[0] & 0xffffffffffffff00;
  uStack_560 = 0;
  auStack_5a0[0] = 0;
  uStack_590 = 0;
  puStack_548 = puVar15 + 3;
  puStack_540 = puVar15;
  (**(code **)(*plVar19 + 0x10))
            (plVar19,&puStack_538,auStack_130,&puStack_548,&uStack_460,auStack_588,1,auStack_5a0);
  FUN_1052b818c(auStack_5a0);
  func_0x00010062706c(auStack_588);
  FUN_1052b81ac(&puStack_548);
  FUN_1056429e8(&uStack_558);
  FUN_1052ac684(&puStack_538);
  func_0x00010529fe04(&uStack_460);
  FUN_105642294(&puStack_4b8);
LAB_105640fc8:
  FUN_10563abd0(alStack_190);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  func_0x000105641b44(auStack_70);
  return;
}



/* Entry: 1056412e8; end: 1056412f7;  */

undefined8 * FUN_1056412e8(undefined8 *param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *param_2;
  lStack_30 = param_2[1] - lStack_28;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010bd48048(auStack_40,&lStack_28,&lStack_30);
  func_0x000107c3a984();
  func_0x000107c3a9a4();
  return param_1;
}



/* Entry: 1056412f8; end: 105641353;  */

mach_header * FUN_1056412f8(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  mach_header *pmVar6;
  mach_header *pmVar7;
  uint uVar8;
  undefined8 extraout_x8;
  mach_header *extraout_x8_00;
  mach_header **ppmVar9;
  ulong uVar10;
  ulong extraout_x8_01;
  int extraout_w11;
  mach_header *pmVar11;
  mach_header *pmVar12;
  mach_header *pmVar13;
  long lVar14;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  code **ppcStack_1b0;
  mach_header *pmStack_1a8;
  code *pcStack_198;
  undefined **ppuStack_190;
  code ***pppcStack_188;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  mach_header *pmStack_150;
  mach_header *pmStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  mach_header amStack_128 [2];
  mach_header *pmStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  uint uStack_b8;
  byte bStack_b4;
  undefined1 auStack_b0 [8];
  mach_header *apmStack_a8 [11];
  int iStack_50;
  undefined8 uStack_48;
  
  lVar14 = *(long *)(param_1 + 0x68);
  if (lVar14 == 0) {
    return (mach_header *)0x3;
  }
  pmVar11 = (mach_header *)(long)*(int *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x1c);
  __ZNSt3__16chrono12system_clock3nowEv();
  func_0x00010563b6b8(lVar14,lVar14);
  uStack_48 = extraout_x8;
  func_0x00010bccbc98(amStack_128);
  pmVar13 = *(mach_header **)(amStack_128[0]._0_8_ + 8);
  lStack_d0 = *(long *)(amStack_128[0]._0_8_ + 0x10);
  pmStack_d8 = pmVar13;
  if (lStack_d0 != 0) {
    do {
      func_0x00010563b788();
      pmVar13 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uVar5._0_4_ = pmVar13->ncmds;
  uVar5._4_4_ = pmVar13->sizeofcmds;
  FUN_105644600(auStack_c8,uVar5,pmVar11,(long)iVar1,param_2);
  bVar2 = bStack_b4;
  lVar14 = lStack_c0;
  if (bStack_b4 == 0) {
    pmVar13 = &MACH_HEADER;
  }
  else {
    bStack_b4 = 0;
    pmVar13 = (mach_header *)((ulong)uStack_b8 | 0x100000000);
  }
  lStack_c0 = 0;
  FUN_10563b044(auStack_c8);
  FUN_10563aab8(&pmStack_d8);
  func_0x00010bccbe4c(amStack_128);
  apmStack_a8[0] = pmVar13;
  if ((bVar2 & lVar14 != 0) == 0) {
    apmStack_a8[0] = (mach_header *)0x0;
  }
  func_0x00010bccbdb4(amStack_128);
  iStack_50 = 0;
  uVar10 = (ulong)pmStack_d8 >> 0x28;
  pmStack_d8._0_4_ = (uint)pmStack_d8 & 0xffffff00;
  pmStack_d8._0_5_ = (uint5)(uint)pmStack_d8;
  pmStack_d8 = (mach_header *)CONCAT35((int3)uVar10,(uint5)pmStack_d8);
LAB_10563a094:
  ppmVar9 = apmStack_a8;
  pmVar12 = pmVar11;
  do {
    pmVar11 = *ppmVar9;
    FUN_10563b074(apmStack_a8);
    uVar4 = ((ulong)pmVar11 & 0x100000000) == 0;
    uVar8 = 3;
    if (!(bool)uVar4) {
      uVar8 = (uint)pmVar11;
    }
    pmVar6 = (mach_header *)(ulong)uVar8;
    func_0x00010563b674(uStack_48);
    if ((bool)uVar4) {
      return pmVar6;
    }
    ___stack_chk_fail();
    if ((int)pmVar12 == 0) {
      pmVar11 = pmVar6;
      func_0x00010563b724();
      pmVar7 = pmVar12;
LAB_10563a184:
      func_0x00010563b764();
      lStack_158 = lVar14;
      pcStack_138 = FUN_10563a188;
      lStack_160 = param_1;
      pmStack_150 = pmVar13;
      pmStack_148 = pmVar6;
      puStack_140 = &stack0xfffffffffffffff0;
      func_0x00010563b6a4();
      pcStack_1c0 = FUN_105644844;
      uStack_1b8 = 0;
      ppcStack_1b0 = &pcStack_1c0;
      pcStack_198 = FUN_10563b0c8;
      ppuStack_190 = &PTR_FUN_1108a2728;
      pppcStack_188 = &ppcStack_1b0;
      pmVar6 = (mach_header *)&pcStack_198;
      pmStack_1a8 = pmVar7;
      func_0x00010bccc554();
      func_0x00010563b664();
      uVar10 = 0;
      pmVar12 = (mach_header *)0x1;
      break;
    }
    pmVar11 = amStack_128;
    pmVar7 = pmVar12;
    func_0x00010bccbdb4();
    uVar4 = (int)pmVar12 == 2;
    pmVar13 = pmVar12;
    if (!(bool)uVar4) goto LAB_10563a184;
    func_0x00010563b76c();
    pmVar13 = (mach_header *)auStack_b0;
    FUN_10563ab1c(apmStack_a8);
    iStack_50 = 1;
    ___cxa_end_catch();
    uVar10 = (ulong)pmStack_d8 >> 0x28;
    pmStack_d8._0_4_ = (uint)pmStack_d8 & 0xffffff00;
    pmStack_d8._0_5_ = (uint5)(uint)pmStack_d8;
    pmStack_d8 = (mach_header *)CONCAT35((int3)uVar10,(uint5)pmStack_d8);
    if (iStack_50 == 0) goto LAB_10563a094;
    if (iStack_50 != 1) {
      FUN_10563ab98();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10563a168);
      (*pcVar3)();
    }
    ppmVar9 = &pmStack_d8;
    pmVar12 = pmVar11;
  } while( true );
LAB_10563a1f8:
  func_0x00010563b7ec((&PTR_DAT_1108a2740)[uVar10 & 0xffffffff]);
LAB_10563a208:
  func_0x00010563b674(uStack_168);
  if ((bool)uVar4) {
    return pmVar12;
  }
  ___stack_chk_fail();
  pmVar12 = pmVar11;
  do {
    pmVar11 = pmVar12;
    if ((int)pmVar6 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while ((int)pmVar13 == 0);
      func_0x00010563b664();
      uVar4 = (int)pmVar13 == 2;
      if ((bool)uVar4) break;
    }
    func_0x00010563b764();
    pmVar12 = pmVar11;
  } while( true );
  func_0x00010563b76c();
  pmVar6 = pmVar11;
  func_0x00010563b780();
  func_0x00010563b810();
  ___cxa_end_catch();
  func_0x00010563b714(0);
  uVar10 = extraout_x8_01;
  if (!(bool)uVar4) goto LAB_10563a1f8;
  goto LAB_10563a208;
}



/* Entry: 105641354; end: 1056419bf;  */

void FUN_105641354(undefined4 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  char cStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [64];
  undefined1 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  ulong uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 uStack_5b8;
  undefined1 auStack_548 [168];
  undefined1 auStack_4a0 [24];
  undefined1 uStack_488;
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined1 auStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [64];
  undefined1 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined4 auStack_388 [2];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [72];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  char cStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  char cStack_2d8;
  undefined1 auStack_2d0 [40];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  char cStack_248;
  undefined1 auStack_240 [168];
  undefined4 uStack_198;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  byte bStack_90;
  undefined1 auStack_88 [40];
  
  if (*(long *)(param_2 + 0x68) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x7e) = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010002b838(auStack_88,(&PTR_DAT_1108a2d10)[(int)param_4]);
    FUN_1056386e4(uVar6,auStack_88,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    uVar4 = *(ulong *)(param_2 + 0x68);
    FUN_10563a358(uVar4,param_4,(long)*(int *)(param_3 + 0x18),(long)*(int *)(param_3 + 0x1c),
                  param_3);
    auStack_190[0] = 0;
    bStack_90 = 0;
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x7e) = 0;
    }
    else {
      if ((bRam00000001136bd3e8 & 1) == 0) {
        iVar3 = 0x136bd3e8;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          puVar5 = (undefined8 *)0x40;
          __Znwm();
          *puVar5 = 0x32aaaba7;
          puVar5[2] = 0;
          puVar5[1] = 0;
          puVar5[4] = 0;
          puVar5[3] = 0;
          puVar5[6] = 0;
          puVar5[5] = 0;
          puVar5[7] = 0;
          puRam00000001136bd3e0 = puVar5;
          ___cxa_guard_release(0x1136bd3e8);
        }
      }
      __ZNSt3__15mutex4lockEv(puRam00000001136bd3e0);
      FUN_105639cbc(auStack_388,*(undefined8 *)(param_2 + 0x68),(long)*(int *)(param_3 + 0x18),
                    (long)*(int *)(param_3 + 0x1c),param_3);
      FUN_10563af4c(auStack_190,auStack_388);
      FUN_10563afd4(auStack_388);
      bVar2 = bStack_90;
      if ((bStack_90 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 0x7e) = 0;
      }
      else {
        FUN_10563a67c(*(undefined8 *)(param_2 + 0x68),(long)*(int *)(param_3 + 0x18),
                      (long)*(int *)(param_3 + 0x1c),param_3);
      }
      __ZNSt3__15mutex6unlockEv();
      if ((bVar2 & 1) != 0) {
        __ZNSt3__16chrono12system_clock3nowEv();
        uVar1 = *(undefined4 *)(param_3 + 0x1c);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_3a0,auStack_100);
        auStack_3e8[0] = 0;
        uStack_3a8 = 0;
        func_0x00010028af84(auStack_408,auStack_120);
        func_0x00010028af84(auStack_428,auStack_140);
        uStack_448 = 0;
        uStack_450 = 0;
        uStack_438 = 0;
        uStack_440 = 0;
        uStack_430 = 0x3f800000;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_468,param_3);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_480,auStack_158);
        auStack_4a0[0] = 0;
        uStack_488 = 0;
        auStack_638[0] = 0;
        uStack_5f8 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_650,auStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_668,auStack_c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_680,auStack_a8);
        FUN_1056351d0(&uStack_5f0,auStack_638,uStack_e8,auStack_650,uStack_c8,auStack_668,
                      auStack_680);
        FUN_105632d34(auStack_548,&uStack_5f0);
        FUN_105632aa4(auStack_388,uVar1,auStack_3a0,auStack_3e8,0,uStack_160,auStack_408,auStack_428
                      ,&uStack_450,0);
        FUN_1056319a4(auStack_548);
        FUN_1056319c4(&uStack_5f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_680);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_668);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_650);
        FUN_1052a038c(auStack_638);
        func_0x0001001148fc(auStack_4a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_480);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_468);
        func_0x00010028ad98(&uStack_450);
        func_0x0001001148fc(auStack_428);
        func_0x0001001148fc(auStack_408);
        FUN_1052a038c(auStack_3e8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a0);
        if ((int)param_4 != 0) {
          uStack_320 = 2;
          func_0x00010002b838(&uStack_698,&UNK_10f2e0172);
          FUN_105641abc(&uStack_6b8,&UNK_10f2e063b);
          uStack_5e0 = uStack_688;
          uStack_5e8 = uStack_690;
          uStack_5f0 = uStack_698;
          uStack_690 = 0;
          uStack_688 = 0;
          uStack_698 = 0;
          uStack_5d8 = 0x1e;
          uStack_5d0 = uStack_5d0 & 0xffffffffffffff00;
          uStack_5b8 = cStack_6a0 == '\x01';
          if ((bool)uStack_5b8) {
            uStack_5c8 = uStack_6b0;
            uStack_5d0 = uStack_6b8;
            uStack_5c0 = uStack_6a8;
            uStack_6b0 = 0;
            uStack_6a8 = 0;
            uStack_6b8 = 0;
          }
          FUN_1056419c0(auStack_368,&uStack_5f0);
          FUN_1052a03ac(&uStack_5f0);
          func_0x000105642ac8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_698);
        }
        *param_1 = auStack_388[0];
        *(undefined8 *)(param_1 + 4) = uStack_378;
        *(undefined8 *)(param_1 + 2) = uStack_380;
        *(undefined8 *)(param_1 + 6) = uStack_370;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_370 = 0;
        FUN_1052a07e8(param_1 + 8,auStack_368);
        *(undefined1 *)(param_1 + 0x1e) = 0;
        *(undefined8 *)(param_1 + 0x1c) = uStack_318;
        *(ulong *)(param_1 + 0x1a) = CONCAT44(uStack_31c,uStack_320);
        *(undefined1 *)(param_1 + 0x24) = 0;
        if (cStack_2f8 == '\x01') {
          *(undefined8 *)(param_1 + 0x20) = uStack_308;
          *(undefined8 *)(param_1 + 0x1e) = uStack_310;
          *(undefined8 *)(param_1 + 0x22) = uStack_300;
          uStack_300 = 0;
          uStack_310 = 0;
          uStack_308 = 0;
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        *(undefined1 *)(param_1 + 0x26) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        if (cStack_2d8 == '\x01') {
          *(undefined8 *)(param_1 + 0x28) = uStack_2e8;
          *(undefined8 *)(param_1 + 0x26) = uStack_2f0;
          *(undefined8 *)(param_1 + 0x2a) = uStack_2e0;
          uStack_2e0 = 0;
          uStack_2f0 = 0;
          uStack_2e8 = 0;
          *(undefined1 *)(param_1 + 0x2c) = 1;
        }
        func_0x00010028acf0(param_1 + 0x2e,auStack_2d0);
        *(undefined8 *)(param_1 + 0x3a) = uStack_2a0;
        *(undefined8 *)(param_1 + 0x38) = uStack_2a8;
        *(undefined8 *)(param_1 + 0x3e) = uStack_290;
        *(undefined8 *)(param_1 + 0x3c) = uStack_298;
        *(undefined8 *)(param_1 + 0x40) = uStack_288;
        uStack_298 = 0;
        uStack_290 = 0;
        *(undefined8 *)(param_1 + 0x44) = uStack_278;
        *(undefined8 *)(param_1 + 0x42) = uStack_280;
        *(undefined8 *)(param_1 + 0x46) = uStack_270;
        uStack_288 = 0;
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        param_1[0x48] = uStack_268;
        *(undefined1 *)(param_1 + 0x4a) = 0;
        *(undefined1 *)(param_1 + 0x50) = 0;
        if (cStack_248 == '\x01') {
          *(undefined8 *)(param_1 + 0x4e) = uStack_250;
          *(undefined8 *)(param_1 + 0x4c) = uStack_258;
          *(undefined8 *)(param_1 + 0x4a) = uStack_260;
          uStack_250 = 0;
          uStack_260 = 0;
          uStack_258 = 0;
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
        FUN_105632c48(param_1 + 0x52,auStack_240);
        param_1[0x7c] = uStack_198;
        *(undefined1 *)(param_1 + 0x7e) = 1;
        FUN_105631940(auStack_388);
      }
    }
    FUN_10563afd4(auStack_190);
  }
  return;
}



/* Entry: 1056419c0; end: 1056419f3;  */

long FUN_1056419c0(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10563bf40();
  }
  else {
    FUN_1052a0828();
  }
  return param_1;
}



/* Entry: 1056419f4; end: 1056419fb;  */

void FUN_1056419f4(undefined4 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  char cStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [64];
  undefined1 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  ulong uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 uStack_5b8;
  undefined1 auStack_548 [168];
  undefined1 auStack_4a0 [24];
  undefined1 uStack_488;
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined1 auStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [64];
  undefined1 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined4 auStack_388 [2];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [72];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  char cStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  char cStack_2d8;
  undefined1 auStack_2d0 [40];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  char cStack_248;
  undefined1 auStack_240 [168];
  undefined4 uStack_198;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  byte bStack_90;
  undefined1 auStack_88 [40];
  
  if (*(long *)(param_2 + 0x60) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x7e) = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010002b838(auStack_88,(&PTR_DAT_1108a2d10)[(int)param_4]);
    FUN_1056386e4(uVar6,auStack_88,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    uVar4 = *(ulong *)(param_2 + 0x60);
    FUN_10563a358(uVar4,param_4,(long)*(int *)(param_3 + 0x18),(long)*(int *)(param_3 + 0x1c),
                  param_3);
    auStack_190[0] = 0;
    bStack_90 = 0;
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x7e) = 0;
    }
    else {
      if ((bRam00000001136bd3e8 & 1) == 0) {
        iVar3 = 0x136bd3e8;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          puVar5 = (undefined8 *)0x40;
          __Znwm();
          *puVar5 = 0x32aaaba7;
          puVar5[2] = 0;
          puVar5[1] = 0;
          puVar5[4] = 0;
          puVar5[3] = 0;
          puVar5[6] = 0;
          puVar5[5] = 0;
          puVar5[7] = 0;
          puRam00000001136bd3e0 = puVar5;
          ___cxa_guard_release(0x1136bd3e8);
        }
      }
      __ZNSt3__15mutex4lockEv(puRam00000001136bd3e0);
      FUN_105639cbc(auStack_388,*(undefined8 *)(param_2 + 0x60),(long)*(int *)(param_3 + 0x18),
                    (long)*(int *)(param_3 + 0x1c),param_3);
      FUN_10563af4c(auStack_190,auStack_388);
      FUN_10563afd4(auStack_388);
      bVar2 = bStack_90;
      if ((bStack_90 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 0x7e) = 0;
      }
      else {
        FUN_10563a67c(*(undefined8 *)(param_2 + 0x60),(long)*(int *)(param_3 + 0x18),
                      (long)*(int *)(param_3 + 0x1c),param_3);
      }
      __ZNSt3__15mutex6unlockEv();
      if ((bVar2 & 1) != 0) {
        __ZNSt3__16chrono12system_clock3nowEv();
        uVar1 = *(undefined4 *)(param_3 + 0x1c);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_3a0,auStack_100);
        auStack_3e8[0] = 0;
        uStack_3a8 = 0;
        func_0x00010028af84(auStack_408,auStack_120);
        func_0x00010028af84(auStack_428,auStack_140);
        uStack_448 = 0;
        uStack_450 = 0;
        uStack_438 = 0;
        uStack_440 = 0;
        uStack_430 = 0x3f800000;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_468,param_3);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_480,auStack_158);
        auStack_4a0[0] = 0;
        uStack_488 = 0;
        auStack_638[0] = 0;
        uStack_5f8 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_650,auStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_668,auStack_c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_680,auStack_a8);
        FUN_1056351d0(&uStack_5f0,auStack_638,uStack_e8,auStack_650,uStack_c8,auStack_668,
                      auStack_680);
        FUN_105632d34(auStack_548,&uStack_5f0);
        FUN_105632aa4(auStack_388,uVar1,auStack_3a0,auStack_3e8,0,uStack_160,auStack_408,auStack_428
                      ,&uStack_450,0);
        FUN_1056319a4(auStack_548);
        FUN_1056319c4(&uStack_5f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_680);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_668);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_650);
        FUN_1052a038c(auStack_638);
        func_0x0001001148fc(auStack_4a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_480);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_468);
        func_0x00010028ad98(&uStack_450);
        func_0x0001001148fc(auStack_428);
        func_0x0001001148fc(auStack_408);
        FUN_1052a038c(auStack_3e8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a0);
        if ((int)param_4 != 0) {
          uStack_320 = 2;
          func_0x00010002b838(&uStack_698,&UNK_10f2e0172);
          FUN_105641abc(&uStack_6b8,&UNK_10f2e063b);
          uStack_5e0 = uStack_688;
          uStack_5e8 = uStack_690;
          uStack_5f0 = uStack_698;
          uStack_690 = 0;
          uStack_688 = 0;
          uStack_698 = 0;
          uStack_5d8 = 0x1e;
          uStack_5d0 = uStack_5d0 & 0xffffffffffffff00;
          uStack_5b8 = cStack_6a0 == '\x01';
          if ((bool)uStack_5b8) {
            uStack_5c8 = uStack_6b0;
            uStack_5d0 = uStack_6b8;
            uStack_5c0 = uStack_6a8;
            uStack_6b0 = 0;
            uStack_6a8 = 0;
            uStack_6b8 = 0;
          }
          FUN_1056419c0(auStack_368,&uStack_5f0);
          FUN_1052a03ac(&uStack_5f0);
          func_0x000105642ac8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_698);
        }
        *param_1 = auStack_388[0];
        *(undefined8 *)(param_1 + 4) = uStack_378;
        *(undefined8 *)(param_1 + 2) = uStack_380;
        *(undefined8 *)(param_1 + 6) = uStack_370;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_370 = 0;
        FUN_1052a07e8(param_1 + 8,auStack_368);
        *(undefined1 *)(param_1 + 0x1e) = 0;
        *(undefined8 *)(param_1 + 0x1c) = uStack_318;
        *(ulong *)(param_1 + 0x1a) = CONCAT44(uStack_31c,uStack_320);
        *(undefined1 *)(param_1 + 0x24) = 0;
        if (cStack_2f8 == '\x01') {
          *(undefined8 *)(param_1 + 0x20) = uStack_308;
          *(undefined8 *)(param_1 + 0x1e) = uStack_310;
          *(undefined8 *)(param_1 + 0x22) = uStack_300;
          uStack_300 = 0;
          uStack_310 = 0;
          uStack_308 = 0;
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        *(undefined1 *)(param_1 + 0x26) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        if (cStack_2d8 == '\x01') {
          *(undefined8 *)(param_1 + 0x28) = uStack_2e8;
          *(undefined8 *)(param_1 + 0x26) = uStack_2f0;
          *(undefined8 *)(param_1 + 0x2a) = uStack_2e0;
          uStack_2e0 = 0;
          uStack_2f0 = 0;
          uStack_2e8 = 0;
          *(undefined1 *)(param_1 + 0x2c) = 1;
        }
        func_0x00010028acf0(param_1 + 0x2e,auStack_2d0);
        *(undefined8 *)(param_1 + 0x3a) = uStack_2a0;
        *(undefined8 *)(param_1 + 0x38) = uStack_2a8;
        *(undefined8 *)(param_1 + 0x3e) = uStack_290;
        *(undefined8 *)(param_1 + 0x3c) = uStack_298;
        *(undefined8 *)(param_1 + 0x40) = uStack_288;
        uStack_298 = 0;
        uStack_290 = 0;
        *(undefined8 *)(param_1 + 0x44) = uStack_278;
        *(undefined8 *)(param_1 + 0x42) = uStack_280;
        *(undefined8 *)(param_1 + 0x46) = uStack_270;
        uStack_288 = 0;
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        param_1[0x48] = uStack_268;
        *(undefined1 *)(param_1 + 0x4a) = 0;
        *(undefined1 *)(param_1 + 0x50) = 0;
        if (cStack_248 == '\x01') {
          *(undefined8 *)(param_1 + 0x4e) = uStack_250;
          *(undefined8 *)(param_1 + 0x4c) = uStack_258;
          *(undefined8 *)(param_1 + 0x4a) = uStack_260;
          uStack_250 = 0;
          uStack_260 = 0;
          uStack_258 = 0;
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
        FUN_105632c48(param_1 + 0x52,auStack_240);
        param_1[0x7c] = uStack_198;
        *(undefined1 *)(param_1 + 0x7e) = 1;
        FUN_105631940(auStack_388);
      }
    }
    FUN_10563afd4(auStack_190);
  }
  return;
}



/* Entry: 1056419fc; end: 105641a4f;  */

void FUN_1056419fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (((*(byte *)(param_1 + 0x70) & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x68), lVar2 != 0)) {
    lVar1 = param_1;
    __ZNSt3__16chrono12system_clock3nowEv();
    FUN_10563a478(lVar2,lVar1);
    FUN_10563a584(*(undefined8 *)(param_1 + 0x68));
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



/* Entry: 105641a50; end: 105641a5b;  */

void FUN_105641a50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + -8;
  if (((*(byte *)(param_1 + 0x68) & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) {
    __ZNSt3__16chrono12system_clock3nowEv();
    FUN_10563a478(lVar2,lVar1);
    FUN_10563a584(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



/* Entry: 105641a5c; end: 105641a6f;  */

void FUN_105641a5c(void)

{
  FUN_105641ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105641a70; end: 105641a7f;  */

undefined8 * FUN_105641a70(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_1108a2c38;
  *param_1 = &PTR_FUN_1108a2c78;
  FUN_10563b34c(param_1 + 0xc);
  FUN_105633af4(param_1 + 5);
  func_0x0001052a9ef8(param_1 + 3);
  func_0x000105641b20(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 105641a80; end: 105641abb;  */

long FUN_105641a80(long param_1)

{
  func_0x000100100fec(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 105641abc; end: 105641ad7;  */

void FUN_105641abc(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105641ad8; end: 105641bd7;  */

undefined8 * FUN_105641ad8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a2c38;
  param_1[1] = &PTR_FUN_1108a2c78;
  FUN_10563b34c(param_1 + 0xd);
  FUN_105633af4(param_1 + 6);
  func_0x0001052a9ef8(param_1 + 4);
  func_0x000105641b20(param_1 + 2);
  return param_1;
}



/* Entry: 105641bd8; end: 105641c87;  */

void FUN_105641bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar5 = auStack_60;
  func_0x000105642b70();
  uStack_48 = extraout_x8;
  FUN_105641ca4(auStack_60,1);
  FUN_105641cfc(lStack_50,param_2,param_3,param_4,param_5);
  lVar6 = lStack_50;
  lStack_50 = 0;
  FUN_105641c88(lVar6 + 0x18);
  FUN_105641ee4(auStack_60);
  func_0x000105642b50(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_105641ee4();
  func_0x000105642a0c();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 0x10);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_68 = FUN_105641c88;
    lVar6 = extraout_x8_00[1];
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lVar6;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x000105641b20(&uStack_80);
    func_0x000105642b40();
    return;
  }
  return;
}



/* Entry: 105641c88; end: 105641ca3;  */

void FUN_105641c88(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 0x10);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lVar5 = param_1[1];
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lVar5 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lVar5;
    func_0x000105641b20(&lStack_20);
    func_0x000105642b40();
    return;
  }
  return;
}



/* Entry: 105641ca4; end: 105641ccb;  */

long FUN_105641ca4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105641ccc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105641ccc; end: 105641cfb;  */

undefined8 * FUN_105641ccc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1af286bca1af287) {
    puVar1 = (undefined8 *)(param_2 * 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a2d40;
  FUN_105641d5c(param_1 + 3);
  return param_1;
}



/* Entry: 105641cfc; end: 105641d3b;  */

undefined8 * FUN_105641cfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a2d40;
  FUN_105641d5c(param_1 + 3);
  return param_1;
}



/* Entry: 105641d3c; end: 105641d3f;  */

void FUN_105641d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2d40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105641d40; end: 105641d53;  */

void FUN_105641d40(void)

{
  FUN_105641e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105641d54; end: 105641d5b;  */

void FUN_105641d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105642a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105641d5c; end: 105641da7;  */

undefined8
FUN_105641d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = 0;
  FUN_105641da8();
  func_0x000105642ac0();
  return param_1;
}



/* Entry: 105641da8; end: 105641e57;  */

undefined8 *
FUN_105641da8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_1108a2c38;
  param_1[1] = &PTR_FUN_1108a2c78;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010066a1bc();
    } while (extraout_w10 != 0);
  }
  FUN_1056373ec(param_1 + 6,param_3);
  uVar2 = *param_4;
  *param_4 = 0;
  param_1[0xc] = 1;
  param_1[0xd] = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_5;
  return param_1;
}



/* Entry: 105641e58; end: 105641e63;  */

void FUN_105641e58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2d40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105641e64; end: 105641ee3;  */

void FUN_105641e64(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lVar4 = *(long *)(param_1 + 8);
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
      plVar1 = (long *)(lVar4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lVar4;
    func_0x000105641b20(&uStack_20);
    func_0x000105642b40();
    return;
  }
  return;
}



/* Entry: 105641ee4; end: 105641ef3;  */

void FUN_105641ee4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105641ef4; end: 105641f73;  */

undefined4 * FUN_105641ef4(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x00010066a208(param_1 + 2,param_2 + 2);
  func_0x00010028af84(param_1 + 8,param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x12);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010066a1bc();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 105641f74; end: 105641f77;  */

void FUN_105641f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2d90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105641f78; end: 105641f8b;  */

void FUN_105641f78(void)

{
  FUN_105642288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105641f8c; end: 105641f97;  */

void FUN_105641f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105642a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105641f98; end: 105641fab;  */

void FUN_105641f98(void)

{
  FUN_10564221c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105641fac; end: 105641fcb;  */

void FUN_105641fac(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x20);
  return;
}



/* Entry: 105641fcc; end: 1056420a7;  */

void FUN_105641fcc(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000105642b70();
  uStack_38 = extraout_x8;
  func_0x00010002b838(auStack_68,"Content-Type");
  func_0x00010002b838(auStack_50,"application/octet-stream");
  func_0x000104bd4884(auStack_90,auStack_68,1);
  func_0x0001002aa0bc(auStack_68);
  func_0x00010028b1fc(auStack_90,*(undefined8 *)(param_1 + 0x48),0);
  func_0x000100626ea4();
  func_0x00010028ad98(auStack_90);
  func_0x000105642b50(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010028ad98(auStack_90);
  func_0x000105642a0c();
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  return;
}



/* Entry: 1056420a8; end: 10564210b;  */

void FUN_1056420a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10564210c; end: 1056421eb;  */

void FUN_10564210c(undefined8 param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x0001002a82b4(auStack_88,&uStack_38);
  func_0x0001002a82b4(auStack_a8,&uStack_50);
  func_0x0001002a82b4(auStack_c8,&uStack_68);
  FUN_1052b933c(param_1,auStack_88,auStack_a8,auStack_c8,0,1,0);
  func_0x0001001148fc(auStack_c8);
  func_0x0001001148fc(auStack_a8);
  func_0x000105642ac8();
  func_0x000105642b38();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 1056421ec; end: 105642213;  */

void FUN_1056421ec(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_105642268(param_1,&uStack_18);
  return;
}



/* Entry: 105642214; end: 10564221b;  */

void FUN_105642214(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10564221c; end: 105642267;  */

undefined8 * FUN_10564221c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a2de0;
  func_0x000105633388(param_1 + 0xd);
  func_0x00010028ad98(param_1 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 105642268; end: 105642287;  */

void FUN_105642268(long param_1)

{
  func_0x00010002b838(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105642288; end: 105642293;  */

void FUN_105642288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2d90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105642294; end: 1056422b7;  */

void FUN_105642294(long param_1)

{
  func_0x000105642b84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1056422b8; end: 1056422bb;  */

void FUN_1056422b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2e90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056422bc; end: 1056422cf;  */

void FUN_1056422bc(void)

{
  FUN_1056429dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056422d0; end: 1056422db;  */

void FUN_1056422d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105642a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056422dc; end: 1056422ef;  */

void FUN_1056422dc(void)

{
  FUN_105642974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056422f0; end: 1056422f3;  */

undefined8 FUN_1056422f0(void)

{
  return 0;
}



/* Entry: 1056422f4; end: 105642553;  */

void FUN_1056422f4(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar4;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_3a8 [64];
  undefined1 uStack_368;
  undefined1 auStack_360 [504];
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_1056437e0(auStack_68,param_1 + 8);
  FUN_10563bb1c(auStack_80,*(undefined8 *)(param_1 + 0x40));
  func_0x00010002b838(auStack_98,"success");
  func_0x000105642a24();
  (*extraout_x8)();
  func_0x000105642a9c();
  func_0x00010002b838(auStack_b0);
  func_0x000105642af0();
  func_0x00010002b838(auStack_c8);
  func_0x000105642b10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000105642b38();
  func_0x000105642b24(auStack_e0);
  FUN_10563bb1c(auStack_f8,*(undefined8 *)(param_1 + 0x40));
  puVar3 = auStack_110;
  func_0x00010002b838(puVar3,"success");
  iVar1 = (int)puVar3;
  func_0x000105642a24();
  (*extraout_x8_00)();
  if (iVar1 != 2) {
    unaff_x24 = unaff_x23;
  }
  func_0x00010002b838(auStack_128,unaff_x24);
  func_0x000105642af0();
  func_0x00010002b838(auStack_140);
  func_0x0001002acb3c(param_1 + 0x48);
  func_0x000105642a74();
  func_0x000105642a84();
  func_0x000105642a8c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x000105642a14();
  (**(code **)(extraout_x8_01 + 0x20))(auStack_168);
  func_0x000105642afc();
  uVar2 = SUB84(auStack_168,0);
  func_0x00010028ad98();
  func_0x000105642a14();
  (**(code **)(extraout_x8_02 + 0x10))();
  *(undefined4 *)(param_2 + 0x100) = uVar2;
  plVar4 = *(long **)(param_1 + 0x30);
  auStack_3a8[0] = 0;
  uStack_368 = 0;
  FUN_10563bb90(auStack_360,*(undefined8 *)(param_1 + 0x40),auStack_3a8,0);
  (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 8,param_1 + 0x20,auStack_360);
  func_0x000105642a6c();
  func_0x000105642ab8();
  return;
}



/* Entry: 105642554; end: 105642973;  */

void FUN_105642554(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar3;
  long *plVar4;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_4f8 [72];
  undefined1 auStack_4b0 [64];
  char cStack_470;
  undefined1 auStack_2b8 [40];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [64];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char cStack_b0;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  (**(code **)(*(long *)*param_3 + 0x30))(auStack_4b0);
  if (cStack_470 == '\x01') {
    (**(code **)(*(long *)*param_3 + 0x30))(&uStack_e8);
    uStack_90 = uStack_d8;
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    uStack_88 = uStack_d0;
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    uStack_68 = cStack_b0 == '\x01';
    if ((bool)uStack_68) {
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      uStack_70 = uStack_b8;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_c8 = 0;
    }
    FUN_1052a038c(&uStack_e8);
  }
  else {
    func_0x00010002b838(&uStack_100,&UNK_10f2e0172);
    plVar4 = (long *)*param_3;
    (**(code **)(*plVar4 + 0x10))();
    uStack_60 = (ulong)plVar4 & 0xffffffff;
    uStack_58 = 0;
    func_0x0001003a91d4(&UNK_10f2e06ab);
    unaff_x23 = 1;
    func_0x0001003a9204(&uStack_e8);
    uStack_70 = uStack_d8;
    uStack_78 = uStack_e0;
    uStack_80 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_108 = 1;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_88 = 0x1e;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_68 = 1;
    func_0x0001001148fc(&uStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
  }
  FUN_1052a038c(auStack_4b0);
  func_0x000105642b24(auStack_138);
  FUN_10563bb1c(auStack_150,*(undefined8 *)(param_1 + 0x40));
  FUN_1052a0760(auStack_1a8,&uStack_a0);
  FUN_105642cb4(auStack_168,auStack_1a8);
  func_0x000105642a24();
  (*extraout_x8)();
  func_0x000105642a9c();
  func_0x00010002b838(auStack_1c0);
  func_0x000105642af0();
  func_0x00010002b838(auStack_1d8);
  func_0x000105642b10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  func_0x000105642ae8();
  FUN_1052a03ac(auStack_1a8);
  func_0x000105642ad0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  func_0x000105642b24(auStack_1f0);
  FUN_10563bb1c(auStack_208,*(undefined8 *)(param_1 + 0x40));
  FUN_1052a0760(auStack_260,&uStack_a0);
  iVar1 = (int)auStack_260;
  FUN_105642cb4(auStack_220);
  func_0x000105642a24();
  (*extraout_x8_00)();
  if (iVar1 != 2) {
    unaff_x24 = unaff_x23;
  }
  func_0x00010002b838(auStack_278,unaff_x24);
  func_0x000105642af0();
  func_0x00010002b838(auStack_290);
  func_0x0001002acb3c(param_1 + 0x48);
  func_0x000105642a74();
  func_0x000105642a84();
  func_0x000105642a8c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
  FUN_1052a03ac(auStack_260);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
  func_0x000105642a14();
  (**(code **)(extraout_x8_01 + 0x20))(auStack_2b8);
  func_0x000105642afc();
  uVar2 = SUB84(auStack_2b8,0);
  func_0x00010028ad98();
  func_0x000105642a14();
  (**(code **)(extraout_x8_02 + 0x10))();
  *(undefined4 *)(param_2 + 0x100) = uVar2;
  plVar4 = *(long **)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  FUN_1056429c0(auStack_4f8,&uStack_a0);
  FUN_10563bb90(auStack_4b0,uVar3,auStack_4f8,2);
  (**(code **)(*plVar4 + 0x18))(plVar4,&uStack_a0,auStack_4b0);
  func_0x000105642a6c();
  func_0x000105642ab8();
  FUN_1052a03ac(&uStack_a0);
  return;
}



/* Entry: 105642974; end: 1056429bf;  */

undefined8 * FUN_105642974(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a2ee0;
  func_0x000105641b44(param_1 + 8);
  func_0x000105632298(param_1 + 6);
  func_0x0001000ff1ac(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1056429c0; end: 1056429db;  */

void FUN_1056429c0(long param_1)

{
  FUN_1052a0760();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1056429dc; end: 1056429e7;  */

void FUN_1056429dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a2e90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056429e8; end: 105642a0b;  */

void FUN_1056429e8(long param_1)

{
  func_0x000105642b84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105642a0c; end: 105642ba7;  */

void FUN_105642a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 105642ba8; end: 105642bdf;  */

void FUN_105642ba8(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x000105642c10(param_1,&uStack_14);
  if (param_1 != 0) {
    func_0x000100152bb8(param_1 + 0x18,&UNK_10f2e06ba);
  }
  return;
}



/* Entry: 105642be0; end: 105642cb3;  */

long FUN_105642be0(long param_1)

{
  long lVar1;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uStack_14 = 1;
    func_0x000105642c10(param_1,&uStack_14);
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + 0x18;
      func_0x000100152bb8(lVar1,&UNK_10f2e06ba);
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 105642cb4; end: 105642d7f;  */

void FUN_105642cb4(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__16localeC1Ev(auStack_78);
  FUN_10530d514(auStack_70,param_2,auStack_78);
  ppuVar2 = &PTR_DAT_1108a2f30;
  FUN_105642d80(auStack_58,auStack_70);
  puVar1 = auStack_58;
  func_0x0001005d466c();
  uStack_30 = *(undefined8 *)(param_2 + 0x18);
  uStack_28 = 0;
  puStack_40 = puVar1;
  ppuStack_38 = ppuVar2;
  func_0x0001003a91d4(&UNK_10f2e06bf);
  func_0x0001003a9204(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__16localeD1Ev(auStack_78);
  return;
}



/* Entry: 105642d80; end: 105642ddb;  */

ulong FUN_105642d80(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x00010564339c();
  uVar1 = param_3;
  uStack_28 = extraout_x8;
  func_0x000105643358();
  uStack_40 = param_3;
  uStack_38 = uVar1;
  FUN_105642dfc(param_1,param_2,&uStack_40);
  func_0x000105643364(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  if ((uint)param_2 < 0xf) {
    return (ulong)*(uint *)(&UNK_10ddb6974 + (param_2 & 0xffffffff) * 4);
  }
  return 5;
}



/* Entry: 105642ddc; end: 105642dfb;  */

undefined4 FUN_105642ddc(uint param_1)

{
  if (param_1 < 0xf) {
    return *(undefined4 *)(&UNK_10ddb6974 + (ulong)param_1 * 4);
  }
  return 5;
}



/* Entry: 105642dfc; end: 105642e8f;  */

undefined1  [16] FUN_105642dfc(undefined8 param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x9;
  char *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar7 = &lStack_50;
  plVar5 = param_2;
  func_0x00010564339c();
  lStack_38 = param_3[1];
  lStack_40 = *param_3;
  lStack_30 = param_3[2];
  cVar2 = *(char *)((long)plVar5 + 0x17);
  lStack_48 = *plVar5;
  if (-1 < (long)cVar2) {
    lStack_48 = (long)plVar5;
  }
  uVar4 = cVar2 == '\0';
  lVar3 = plVar5[1];
  if (-1 < cVar2) {
    lVar3 = (long)cVar2;
  }
  uStack_28 = extraout_x8;
  FUN_105642f24(extraout_x9,lStack_48,lStack_48 + lVar3);
  plVar5 = &lStack_40;
  FUN_105642e90(param_1);
  func_0x000105643364(uStack_28);
  if ((bool)uVar4) {
    auVar12._8_8_ = plVar5;
    auVar12._0_8_ = param_2;
    return auVar12;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_58 = FUN_105642e90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *plVar7 == plVar7[1];
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bool)uVar4) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      uVar6 = extraout_x8_00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                (extraout_x8_00,param_2);
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = uVar6;
      return auVar15;
    }
  }
  else {
    lStack_78 = plVar5[1];
    lStack_80 = *plVar5;
    lStack_70 = plVar5[2];
    plVar5 = &lStack_80;
    FUN_105642f84();
    func_0x000105643364(lStack_68);
    if ((bool)uVar4) {
      auVar13._8_8_ = plVar5;
      auVar13._0_8_ = param_2;
      return auVar13;
    }
  }
  ___stack_chk_fail();
  for (; plVar8 = plVar7, plVar10 = plVar7, plVar5 != plVar7; plVar5 = (long *)((long)plVar5 + 1)) {
    pcVar1 = (char *)param_2[1];
    plVar9 = plVar5;
    pcVar11 = (char *)*param_2;
    if ((char *)*param_2 == pcVar1) break;
    do {
      if (plVar9 == plVar7 || pcVar11 == pcVar1) {
        plVar8 = plVar5;
        plVar10 = plVar9;
        if (pcVar11 == pcVar1) goto LAB_105642f70;
        break;
      }
      lVar3 = *plVar9;
      cVar2 = *pcVar11;
      plVar9 = (long *)((long)plVar9 + 1);
      pcVar11 = pcVar11 + 1;
    } while ((char)lVar3 == cVar2);
  }
LAB_105642f70:
  auVar14._8_8_ = plVar10;
  auVar14._0_8_ = plVar8;
  return auVar14;
}



/* Entry: 105642e90; end: 105642f23;  */

undefined1  [16] FUN_105642e90(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *param_4 == param_4[1];
  if ((bool)uVar4) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                (param_1,param_2);
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = param_1;
      return auVar11;
    }
  }
  else {
    lStack_28 = param_3[1];
    lStack_30 = *param_3;
    lStack_20 = param_3[2];
    param_3 = &lStack_30;
    FUN_105642f84();
    func_0x000105643364(lStack_18);
    if ((bool)uVar4) {
      auVar9._8_8_ = param_3;
      auVar9._0_8_ = param_2;
      return auVar9;
    }
  }
  ___stack_chk_fail();
  for (; plVar5 = param_4, plVar7 = param_4, param_3 != param_4;
      param_3 = (long *)((long)param_3 + 1)) {
    pcVar1 = (char *)param_2[1];
    plVar6 = param_3;
    pcVar8 = (char *)*param_2;
    if ((char *)*param_2 == pcVar1) break;
    do {
      if (plVar6 == param_4 || pcVar8 == pcVar1) {
        plVar5 = param_3;
        plVar7 = plVar6;
        if (pcVar8 == pcVar1) goto LAB_105642f70;
        break;
      }
      lVar3 = *plVar6;
      cVar2 = *pcVar8;
      plVar6 = (long *)((long)plVar6 + 1);
      pcVar8 = pcVar8 + 1;
    } while ((char)lVar3 == cVar2);
  }
LAB_105642f70:
  auVar10._8_8_ = plVar7;
  auVar10._0_8_ = plVar5;
  return auVar10;
}



/* Entry: 105642f24; end: 105642f83;  */

undefined1  [16] FUN_105642f24(long *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  for (; pcVar4 = param_3, pcVar6 = param_3, param_2 != param_3; param_2 = param_2 + 1) {
    pcVar1 = (char *)param_1[1];
    pcVar5 = param_2;
    pcVar7 = (char *)*param_1;
    if ((char *)*param_1 == pcVar1) break;
    do {
      if (pcVar5 == param_3 || pcVar7 == pcVar1) {
        pcVar4 = param_2;
        pcVar6 = pcVar5;
        if (pcVar7 == pcVar1) goto LAB_105642f70;
        break;
      }
      cVar2 = *pcVar5;
      cVar3 = *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 == cVar3);
  }
LAB_105642f70:
  auVar8._8_8_ = pcVar6;
  auVar8._0_8_ = pcVar4;
  return auVar8;
}



/* Entry: 105642f84; end: 1056430cb;  */

undefined8 *
FUN_105642f84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  long extraout_x9;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 uStack_71;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  undefined8 uStack_48;
  
  puVar11 = param_2;
  func_0x00010564339c();
  puStack_68 = (undefined8 *)param_4[1];
  puStack_70 = (undefined8 *)*param_4;
  puStack_58 = &uStack_71;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_48 = extraout_x8;
  while( true ) {
    uVar2 = param_1[1];
    puVar9 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar9 = param_1;
    }
    if (puStack_70 == puStack_68) break;
    func_0x0001056433e8();
    uVar2 = param_1[1];
    puVar11 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar11 = param_1;
    }
    FUN_1056430cc(param_1,(long)puVar11 + uVar2,auStack_60);
    uVar2 = param_2[1];
    puVar9 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar9 = param_2;
    }
    puVar11 = param_3;
    FUN_105642f24(param_3,puStack_68,(long)puVar9 + uVar2);
    puStack_70 = puVar11;
  }
  uVar1 = *(char *)((long)param_2 + 0x17) == '\0';
  uVar2 = (long)puVar9 + uVar2;
  func_0x0001056433e8();
  func_0x000105643364(uStack_48);
  if ((bool)uVar1) {
    return puVar11;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
  puVar9 = puVar11;
  __Unwind_Resume();
  lVar4 = 0;
  puVar5 = (undefined8 *)0x0;
  lVar6 = 0;
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    puVar7 = (undefined8 *)*param_3;
    puVar8 = (undefined8 *)(uVar2 - (long)puVar7);
    if (puVar11 == (undefined8 *)0x0) goto LAB_1056431d4;
    lVar10 = param_3[1];
    param_3 = puVar7;
  }
  else {
    puVar8 = (undefined8 *)(uVar2 - (long)param_3);
    puVar7 = param_3;
    lVar10 = extraout_x9;
    if (puVar11 == (undefined8 *)0x0) {
LAB_1056431d4:
      return (undefined8 *)((long)puVar8 + (long)puVar7);
    }
  }
  if (param_3 <= puVar5 && puVar5 < (undefined8 *)((long)param_3 + lVar10 + 1)) {
    func_0x0001056433f4();
    FUN_1056432f4();
    func_0x0001056433ac();
    func_0x000100602e84();
    func_0x000100602e94();
    func_0x000105643378();
    return puVar8;
  }
  func_0x000100602e84();
  lVar10 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar10 < 0) {
    lVar10 = puVar9[1];
    lVar3 = (puVar9[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar3 - lVar10) < uVar2) goto LAB_105643250;
    puVar11 = (undefined8 *)*puVar9;
  }
  else {
    lVar3 = 0x16;
    puVar11 = puVar9;
    if (0x16U - lVar10 < uVar2) {
LAB_105643250:
      func_0x0001000644b8(puVar9,lVar3,(uVar2 - lVar3) + lVar10,lVar10,lVar4,0,uVar2);
      puVar11 = (undefined8 *)*puVar9;
      lVar3 = lVar10;
      goto LAB_105643298;
    }
  }
  lVar3 = lVar4;
  if (lVar10 - lVar4 != 0) {
    _memmove((long)puVar11 + lVar4 + uVar2,(long)puVar11 + lVar4,lVar10 - lVar4);
    lVar3 = lVar10;
  }
LAB_105643298:
  lVar3 = lVar3 + uVar2;
  if (*(char *)((long)puVar9 + 0x17) < '\0') {
    puVar9[1] = lVar3;
  }
  else {
    *(byte *)((long)puVar9 + 0x17) = (byte)lVar3 & 0x7f;
  }
  *(undefined1 *)((long)puVar11 + lVar3) = 0;
  if (lVar6 - (long)puVar5 != 0) {
    _memmove((long)puVar11 + lVar4,puVar5,lVar6 - (long)puVar5);
  }
  if (*(char *)((long)puVar9 + 0x17) < '\0') {
    puVar9 = (undefined8 *)*puVar9;
  }
  return (undefined8 *)(lVar4 + (long)puVar9);
}



/* Entry: 1056430cc; end: 1056430d7;  */

long FUN_1056430cc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x9;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar7;
  
  lVar2 = 0;
  plVar3 = (long *)0x0;
  lVar4 = 0;
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar5 = (long *)*unaff_x21;
    lVar6 = param_2 - (long)plVar5;
    if (unaff_x20 == 0) goto LAB_1056431d4;
    lVar1 = unaff_x21[1];
    unaff_x21 = plVar5;
  }
  else {
    lVar6 = param_2 - (long)unaff_x21;
    plVar5 = unaff_x21;
    lVar1 = extraout_x9;
    if (unaff_x20 == 0) {
LAB_1056431d4:
      return lVar6 + (long)plVar5;
    }
  }
  if (unaff_x21 <= plVar3 && plVar3 < (long *)((long)unaff_x21 + lVar1 + 1)) {
    func_0x0001056433f4();
    FUN_1056432f4();
    func_0x0001056433ac();
    func_0x000100602e84();
    func_0x000100602e94();
    func_0x000105643378();
    return lVar6;
  }
  func_0x000100602e84();
  lVar6 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar6 < 0) {
    lVar6 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar6) < param_2) goto LAB_105643250;
    puVar7 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar7 = param_1;
    if (0x16U - lVar6 < param_2) {
LAB_105643250:
      func_0x0001000644b8(param_1,lVar1,(param_2 - lVar1) + lVar6,lVar6,lVar2,0,param_2);
      puVar7 = (undefined8 *)*param_1;
      lVar1 = lVar6;
      goto LAB_105643298;
    }
  }
  lVar1 = lVar2;
  if (lVar6 - lVar2 != 0) {
    _memmove((long)puVar7 + lVar2 + param_2,(long)puVar7 + lVar2,lVar6 - lVar2);
    lVar1 = lVar6;
  }
LAB_105643298:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar7 + lVar1) = 0;
  if (lVar4 - (long)plVar3 != 0) {
    _memmove((long)puVar7 + lVar2,plVar3,lVar4 - (long)plVar3);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return lVar2 + (long)param_1;
}



/* Entry: 1056430d8; end: 10564313b;  */

void FUN_1056430d8(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001056433c4();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
  }
  return;
}



/* Entry: 10564313c; end: 105643143;  */

long FUN_10564313c(undefined8 *param_1,ulong param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x9;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar5;
  
  lVar2 = (long)param_4 - param_3;
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar3 = (long *)*unaff_x21;
    lVar4 = param_2 - (long)plVar3;
    if (unaff_x20 == 0) goto LAB_1056431d4;
    lVar1 = unaff_x21[1];
    unaff_x21 = plVar3;
  }
  else {
    lVar4 = param_2 - (long)unaff_x21;
    plVar3 = unaff_x21;
    lVar1 = extraout_x9;
    if (unaff_x20 == 0) {
LAB_1056431d4:
      return lVar4 + (long)plVar3;
    }
  }
  if (unaff_x21 <= param_4 && param_4 < (long *)((long)unaff_x21 + lVar1 + 1)) {
    func_0x0001056433f4();
    FUN_1056432f4();
    func_0x0001056433ac();
    func_0x000100602e84();
    func_0x000100602e94();
    func_0x000105643378();
    return lVar4;
  }
  func_0x000100602e84();
  lVar4 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar4 < 0) {
    lVar4 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar4) < param_2) goto LAB_105643250;
    puVar5 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar5 = param_1;
    if (0x16U - lVar4 < param_2) {
LAB_105643250:
      func_0x0001000644b8(param_1,lVar1,(param_2 - lVar1) + lVar4,lVar4,param_3,0,param_2);
      puVar5 = (undefined8 *)*param_1;
      lVar1 = lVar4;
      goto LAB_105643298;
    }
  }
  lVar1 = param_3;
  if (lVar4 - param_3 != 0) {
    _memmove((long)puVar5 + param_3 + param_2,(long)puVar5 + param_3,lVar4 - param_3);
    lVar1 = lVar4;
  }
LAB_105643298:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar5 + lVar1) = 0;
  if (lVar2 - (long)param_4 != 0) {
    _memmove((long)puVar5 + param_3,param_4,lVar2 - (long)param_4);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return param_3 + (long)param_1;
}



/* Entry: 105643144; end: 1056431eb;  */

long FUN_105643144(undefined8 *param_1,ulong param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long extraout_x9;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar4;
  
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar2 = (long *)*unaff_x21;
    lVar3 = param_2 - (long)plVar2;
    if (unaff_x20 == 0) goto LAB_1056431d4;
    lVar1 = unaff_x21[1];
    unaff_x21 = plVar2;
  }
  else {
    lVar3 = param_2 - (long)unaff_x21;
    plVar2 = unaff_x21;
    lVar1 = extraout_x9;
    if (unaff_x20 == 0) {
LAB_1056431d4:
      return lVar3 + (long)plVar2;
    }
  }
  if (unaff_x21 <= param_4 && param_4 < (long *)((long)unaff_x21 + lVar1 + 1)) {
    func_0x0001056433f4();
    FUN_1056432f4();
    func_0x0001056433ac();
    func_0x000100602e84();
    func_0x000100602e94();
    func_0x000105643378();
    return lVar3;
  }
  func_0x000100602e84();
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar3) < param_2) goto LAB_105643250;
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar4 = param_1;
    if (0x16U - lVar3 < param_2) {
LAB_105643250:
      func_0x0001000644b8(param_1,lVar1,(param_2 - lVar1) + lVar3,lVar3,param_3,0,param_2);
      puVar4 = (undefined8 *)*param_1;
      lVar1 = lVar3;
      goto LAB_105643298;
    }
  }
  lVar1 = param_3;
  if (lVar3 - param_3 != 0) {
    _memmove((long)puVar4 + param_3 + param_2,(long)puVar4 + param_3,lVar3 - param_3);
    lVar1 = lVar3;
  }
LAB_105643298:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar4 + lVar1) = 0;
  if (param_5 - (long)param_4 != 0) {
    _memmove((long)puVar4 + param_3,param_4,param_5 - (long)param_4);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return param_3 + (long)param_1;
}



/* Entry: 1056431ec; end: 1056432f3;  */

long FUN_1056431ec(undefined8 *param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar2) < param_2) goto LAB_105643250;
    puVar3 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar3 = param_1;
    if (0x16U - lVar2 < param_2) {
LAB_105643250:
      func_0x0001000644b8(param_1,lVar1,(param_2 - lVar1) + lVar2,lVar2,param_3,0,param_2);
      puVar3 = (undefined8 *)*param_1;
      lVar1 = lVar2;
      goto LAB_105643298;
    }
  }
  lVar1 = param_3;
  if (lVar2 - param_3 != 0) {
    _memmove((long)puVar3 + param_3 + param_2,(long)puVar3 + param_3,lVar2 - param_3);
    lVar1 = lVar2;
  }
LAB_105643298:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar3 + lVar1) = 0;
  if (param_5 - param_4 != 0) {
    _memmove((long)puVar3 + param_3,param_4,param_5 - param_4);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return param_3 + (long)param_1;
}



/* Entry: 1056432f4; end: 105643357;  */

void FUN_1056432f4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001056433c4();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
  }
  return;
}



/* Entry: 105643358; end: 105643407;  */

undefined1  [16] FUN_105643358(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = *param_1;
  lVar1 = auVar2._0_8_;
  func_0x000107c613d0(auVar2._0_8_,1);
  auVar2._8_8_ = auVar2._0_8_ + lVar1;
  return auVar2;
}



/* Entry: 105643408; end: 10564345b;  */

bool FUN_105643408(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  ppuVar1 = &PTR_PTR_1134046c0;
  if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x68);
  }
  return lVar2 / 1000000 + param_2 < (long)ppuVar1[2];
}



/* Entry: 10564345c; end: 105643577;  */

void FUN_10564345c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  iVar7 = 0;
  puVar5 = param_1 + 2;
  uVar4 = *puVar5;
  puVar2 = param_1;
  puVar6 = puVar5;
  if ((uVar4 & 1) != 0) {
    puVar6 = (ulong *)(uVar4 + 7);
  }
  while( true ) {
    puVar1 = puVar5;
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + 7);
    }
    if (puVar6 == puVar1 + (int)param_1[3]) break;
    puVar2 = (ulong *)*puVar6;
    FUN_105643408(puVar2,param_2);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar5;
      FUN_10563e36c(puVar5,puVar6);
      iVar7 = iVar7 + 1;
      puVar6 = puVar2;
    }
    else {
      puVar6 = puVar6 + 1;
    }
    uVar4 = *puVar5;
  }
  FUN_1056395d0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58,param_3);
  FUN_1056391d4(puVar2,auStack_58,(long)iVar7);
  puVar3 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
  FUN_1056395d0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,param_3);
  FUN_10563926c(puVar3,auStack_70,(long)iVar7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return;
}



/* Entry: 105643578; end: 10564365b;  */

void FUN_105643578(undefined8 *param_1)

{
  ulong uVar1;
  long lStack_48;
  long lStack_40;
  
  *param_1 = &PTR_DAT_110cea258;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  func_0x000100651b10(&lStack_48,&UNK_10f2e06d5,0x10);
  FUN_10539283c(param_1 + 2,lStack_48,lStack_40 - lStack_48,0);
  param_1[4] = 0xa00000003;
  *(undefined4 *)(param_1 + 5) = 1;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  FUN_1056439e0(param_1 + 3,&UNK_10f2e06e6,uVar1);
  func_0x000100100fec(&lStack_48);
  return;
}



/* Entry: 10564365c; end: 1056437df;  */

void FUN_10564365c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  int iVar7;
  undefined1 auStack_240 [112];
  undefined1 auStack_1d0 [88];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [64];
  undefined4 uStack_94;
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  ppuStack_78 = &PTR_DAT_110ceb6d8;
  uStack_70 = 0;
  param_1[2] = 0;
  puStack_68 = &DAT_11383d918;
  uStack_50 = 0;
  uStack_60 = 0;
  plVar2 = (long *)*param_2;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    plVar3 = (long *)*param_2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
      goto LAB_1056436f0;
    }
  }
  plVar3 = (long *)0x0;
LAB_1056436f0:
  pppuVar4 = &ppuStack_78;
  func_0x00010006369c(pppuVar4,plVar2,plVar3);
  if ((int)pppuVar4 != 0) {
    if (uStack_50._4_4_ != 2) {
      ppuStack_58 = &PTR_PTR_113373148;
    }
    plVar2 = (long *)((ulong)ppuStack_58[0xc] & 0xfffffffffffffffc);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1);
  }
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    uStack_94 = 0;
    FUN_105300f7c(&uStack_94);
    puVar5 = &uStack_94;
    func_0x0001052ff4ac();
    puStack_48 = puVar5;
    plStack_40 = plVar2;
    func_0x0001002a2640(auStack_90,&puStack_48);
    func_0x000100066230(param_1,auStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    FUN_105301534(&uStack_94);
  }
  func_0x00010b486378();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pppuVar4 = &ppuStack_78;
  func_0x00010b486378(pppuVar4);
  func_0x00010564400c();
  func_0x000105643fe0();
  FUN_105643a24(auStack_110,&UNK_10f2e06f5,0,0);
  FUN_105643a94(auStack_160,pppuVar4,auStack_110);
  FUN_1056438fc(auStack_1d0);
  iVar7 = 2;
  do {
    FUN_105643950(auStack_240,auStack_160);
    puVar6 = auStack_1d0;
    FUN_105643938(puVar6,auStack_240);
    FUN_105643990(auStack_240);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000105644014();
      func_0x00010002b838(extraout_x8,&UNK_10f2e06f7);
LAB_105643898:
      func_0x000105644000();
      func_0x0001056439b8(auStack_110);
      return;
    }
    if (iVar7 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (extraout_x8,auStack_178);
      func_0x000105644014();
      goto LAB_105643898;
    }
    FUN_105643f6c(auStack_1d0);
    iVar7 = iVar7 + -1;
  } while( true );
}


