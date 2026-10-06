/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107304280; end: 107304543;  */

uint * FUN_107304280(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *unaff_x19;
  uint *unaff_x20;
  long lStack_48;
  undefined8 uStack_28;
  
  func_0x000107304358();
  func_0x00010730432c();
  bVar1 = lStack_48 == *(long *)(unaff_x20 + 2) + (ulong)*unaff_x20 * 0x30;
  if (bVar1) {
    puVar3 = (uint *)0x1136ca228;
    uRam00000001136ca228 = 0;
    uRam00000001136ca230 = 0;
    uRam00000001136ca238 = 0;
  }
  else {
    puVar3 = (uint *)(lStack_48 + 0x18);
  }
  func_0x0001073043d4(uStack_28,puVar3);
  if (bVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107304438();
  puVar3 = unaff_x20;
  FUN_1073021f0();
  if ((((int)puVar3 != 0) && (FUN_107304280(), *(short *)((long)puVar3 + 0x16) != 0)) &&
     (FUN_107304280(), (*(ushort *)((long)puVar3 + 0x16) >> 10 & 1) != 0)) {
    FUN_107304280();
    puVar2 = *(uint **)(puVar3 + 2);
    if ((*(ushort *)((long)puVar3 + 0x16) & 0x1000) != 0) {
      puVar2 = puVar3;
    }
    func_0x00010002b82c();
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return unaff_x19;
}



/* Entry: 107304544; end: 107304557;  */

void FUN_107304544(void)

{
  FUN_107303508();
  return;
}



/* Entry: 107304558; end: 10730463f;  */

void FUN_107304558(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  plVar2 = (long *)(unaff_x21 + 0x28);
  func_0x000107304438(plVar2,1);
  if (plVar2[2] == 0) {
    if (*unaff_x19 == 0) {
      func_0x0001073045a8();
      *unaff_x19 = (long)plVar2;
      unaff_x19[1] = (long)plVar2;
    }
    lVar4 = 0;
  }
  else {
    func_0x00010730460c();
    lVar4 = extraout_x8;
  }
  func_0x0001073045f8(unaff_x20 * 0x18 - lVar4);
  func_0x000107304460();
  lVar4 = plVar2[2];
  lVar1 = plVar2[3];
  lVar3 = *plVar2;
  FUN_1073038ac(lVar3,lVar4,*(long *)(unaff_x20 + 0x20) - lVar4,unaff_x19);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  *(long *)(unaff_x20 + 0x18) = lVar3 + (lVar1 - lVar4);
  *(long *)(unaff_x20 + 0x20) = lVar3 + (long)unaff_x19;
  return;
}



/* Entry: 107304640; end: 1073048e3;  */

long * FUN_107304640(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  char cStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  plVar7 = param_1 + 2;
  *(undefined1 *)plVar7 = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_d0);
  uStack_b8 = 0;
  uStack_b0 = 0;
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar5 = puVar2 + 3;
  *puVar2 = &PTR_FUN_11099e890;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5,&lStack_d0);
  puVar2[7] = uStack_b0;
  puVar2[6] = uStack_b8;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_e8 = param_1[1];
  lStack_f0 = *param_1;
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar2;
  FUN_107304b64(&lStack_f0);
  FUN_107304b64(&uStack_58);
  FUN_107304a9c(&lStack_d0);
  func_0x00010b218928(*param_1 + 0x18);
  puVar5 = (undefined8 *)*param_1;
  lVar4 = puVar5[3];
  lVar6 = (long)*(char *)((long)puVar5 + 0x17);
  puVar2 = puVar5;
  if (lVar6 < 0) {
    puVar2 = (undefined8 *)*puVar5;
    lVar6 = puVar5[1];
  }
  *(undefined8 **)(lVar4 + 0x18) = puVar2;
  *(int *)(lVar4 + 0x20) = (int)lVar6;
  *(int *)(lVar4 + 0x24) = (int)lVar6;
  func_0x00010b219134(*param_1 + 0x20);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  func_0x00010b21919c(uVar3,*(undefined8 *)(*param_1 + 0x18),1);
  if ((int)uVar3 == 0) {
    FUN_1073048e4(&uStack_58,*param_1,&UNK_10f409f29);
    if (cStack_48 == '\x01') {
      lStack_60 = (long)(int)uStack_50;
      uStack_68 = uStack_58;
      func_0x00010002b838(&lStack_108,"");
      uStack_e0 = uStack_f8;
      lStack_e8 = lStack_100;
      lStack_f0 = lStack_108;
      lStack_100 = 0;
      uStack_f8 = 0;
      lStack_108 = 0;
      uStack_d8 = 1;
      (**(code **)(*param_3 + 0x10))(&lStack_d0,param_3,&lStack_f0,&uStack_68);
      cVar1 = (char)param_1[0xd];
      if (cVar1 == cStack_78) {
        if (cVar1 != '\0') {
          if (*plVar7 != 0) {
            FUN_1073026fc(plVar7);
            __ZdlPv(*plVar7);
            *plVar7 = 0;
            param_1[3] = 0;
            param_1[4] = 0;
          }
          param_1[3] = lStack_c8;
          param_1[2] = lStack_d0;
          param_1[4] = lStack_c0;
          lStack_c8 = 0;
          lStack_c0 = 0;
          lStack_d0 = 0;
          func_0x000100066230(param_1 + 5,&uStack_b8);
          *(undefined4 *)(param_1 + 8) = uStack_a0;
          func_0x000100066230(param_1 + 9,auStack_98);
          *(undefined4 *)(param_1 + 0xc) = uStack_80;
        }
      }
      else if (cVar1 == '\0') {
        FUN_107302738(plVar7,&lStack_d0);
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      else {
        FUN_10730279c(plVar7);
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      FUN_107304ae0(&lStack_d0);
      FUN_107304b00(&lStack_f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_108);
    }
    FUN_1073049f8(&uStack_58);
  }
  return param_1;
}



/* Entry: 1073048e4; end: 1073049f7;  */

void FUN_1073048e4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  int iStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010b21b47c(uVar2,param_3,0);
  if ((int)uVar2 != -100) {
    func_0x00010b21b3b8(*(undefined8 *)(param_2 + 0x20),(long)(int)uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010b21b390(uVar2,&lStack_48);
    if (((int)uVar2 == 0) && (*(long *)(lStack_48 + 0x30) < 0x100000)) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010b219cac(uVar2,0,0);
      if ((int)uVar2 == 0) {
        uVar5 = *(undefined8 *)(lStack_48 + 0x30);
        uVar2 = uVar5;
        __Znam();
        _bzero();
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        uStack_50 = uVar2;
        func_0x00010b21acd4(uVar3,uVar2,uVar5);
        func_0x00010b219ca0(*(undefined8 *)(param_2 + 0x20));
        iVar4 = (int)uVar5;
        bVar1 = (int)uVar3 != iVar4;
        if (bVar1) {
          *(undefined1 *)param_1 = 0;
        }
        else {
          uStack_50 = 0;
          uStack_60 = 0;
          *param_1 = uVar2;
          *(int *)(param_1 + 1) = iVar4;
          iStack_58 = iVar4;
          FUN_10724e5b8(&uStack_60);
        }
        *(bool *)(param_1 + 2) = !bVar1;
        FUN_10724e5b8(&uStack_50);
        return;
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1073049f8; end: 107304a17;  */

void FUN_1073049f8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10724e5b8();
  }
  return;
}



/* Entry: 107304a18; end: 107304a9b;  */

void FUN_107304a18(undefined1 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  undefined1 auStack_38 [8];
  int iStack_30;
  char cStack_28;
  
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_1073048e4(auStack_38,*param_2,plVar1);
  if (cStack_28 == '\x01') {
    func_0x0001073c9cc8(param_1,auStack_38,(long)iStack_30);
  }
  else {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  FUN_1073049f8(auStack_38);
  return;
}



/* Entry: 107304a9c; end: 107304adf;  */

void FUN_107304a9c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b21999c();
  }
  func_0x00010b219170((long *)(param_1 + 0x20));
  func_0x00010b218970(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 107304ae0; end: 107304aff;  */

void FUN_107304ae0(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10730279c();
  }
  return;
}



/* Entry: 107304b00; end: 107304b53;  */

void FUN_107304b00(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_11099e870)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107304b54; end: 107304b63;  */

void FUN_107304b54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 107304b64; end: 107304b8f;  */

long FUN_107304b64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107304b90; end: 107304b93;  */

void FUN_107304b90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e890;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107304b94; end: 107304ba7;  */

void FUN_107304b94(void)

{
  func_0x000107304bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107304ba8; end: 107304bc3;  */

void FUN_107304ba8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010b21999c();
  }
  func_0x00010b219170((long *)(param_1 + 0x38));
  func_0x00010b218970(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 107304bc4; end: 107304beb;  */

undefined8 FUN_107304bc4(undefined8 param_1)

{
  FUN_107304bec(param_1,0);
  return param_1;
}



/* Entry: 107304bec; end: 107304c03;  */

void FUN_107304bec(long *param_1,long param_2)

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



/* Entry: 107304c04; end: 107304d53;  */

undefined8 *
FUN_107304c04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  
  *param_1 = &PTR_FUN_11099e8e0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[3] = uVar1;
  lVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10 != 0);
  }
  uVar1 = *param_5;
  param_1[7] = param_5[1];
  param_1[6] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  param_1[8] = param_6;
  func_0x0001073af260();
  FUN_10725b034(param_1 + 9);
  param_1[0xb] = param_1;
  puVar3 = (undefined8 *)param_1[9];
  uVar1 = *puVar3;
  param_1[0xd] = puVar3[1];
  param_1[0xc] = uVar1;
  if (puVar3[1] != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10_00 != 0);
  }
  FUN_107306764(param_1 + 0xe);
  param_1[0x28] = 0;
  param_1[0x29] = param_1 + 9;
  param_1[0x2a] = 0;
  FUN_10726ed14(param_1 + 0x2b);
  param_1[0x2d] = param_1;
  return param_1;
}



/* Entry: 107304d54; end: 107304f3b;  */

undefined1 *
FUN_107304d54(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined4 uStack_394;
  undefined1 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [56];
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [24];
  undefined8 *puStack_298;
  undefined1 auStack_290 [72];
  undefined1 uStack_248;
  undefined1 auStack_240 [504];
  undefined8 uStack_48;
  
  func_0x00010730783c();
  auStack_290[0] = 0;
  uStack_248 = 0;
  auStack_2f0[0] = 0;
  uStack_2b8 = 0;
  uStack_48 = extraout_x8;
  func_0x00010730797c(auStack_240,0,param_2,auStack_290);
  FUN_10724b12c(auStack_2f0);
  FUN_10724b2ac(auStack_290);
  FUN_1072d6da0(&uStack_308,param_2);
  plVar4 = *(long **)(param_1 + 0x30);
  uStack_394 = (undefined4)param_4;
  uStack_390 = (undefined1)((ulong)param_4 >> 0x20);
  uStack_380 = param_5[1];
  uStack_388 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  uStack_370 = uStack_300;
  uStack_378 = uStack_308;
  uStack_368 = uStack_2f8;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  lStack_3a0 = param_1;
  uStack_398 = param_3;
  FUN_107306520(&uStack_360,param_1 + 0x158);
  puVar2 = &uStack_348;
  FUN_107306574(puVar2,&lStack_3a0);
  puStack_298 = (undefined8 *)0x0;
  func_0x0001073079b0();
  puVar2[2] = uStack_358;
  puVar2[1] = uStack_360;
  puVar2[5] = uStack_340;
  puVar2[4] = uStack_348;
  puVar2[8] = uStack_328;
  puVar2[7] = uStack_330;
  *puVar2 = &PTR_FUN_11099e940;
  uStack_360 = 0;
  uStack_358 = 0;
  puVar2[3] = uStack_350;
  *(undefined1 *)(puVar2 + 6) = uStack_338;
  uStack_330 = 0;
  uStack_328 = 0;
  puVar2[0xb] = uStack_310;
  puVar2[10] = uStack_318;
  puVar2[9] = uStack_320;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  puStack_298 = puVar2;
  func_0x00010730785c(*(undefined8 *)(*plVar4 + 0x10));
  func_0x0001072d52dc(auStack_2b0);
  FUN_107304f3c(&uStack_360);
  func_0x000107304f5c(&lStack_3a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_308);
  puVar3 = auStack_240;
  func_0x00010724b374();
  func_0x000107307784(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001072d52dc(auStack_2b0);
  FUN_107304f3c(&uStack_360);
  func_0x000107304f5c(&lStack_3a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_308);
  func_0x00010724b374(auStack_240);
  func_0x00010730777c();
  func_0x000107307970();
  func_0x000107304f5c();
  puVar1 = puVar3;
  func_0x00010725c0a0();
  if (puVar1 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar3;
}



/* Entry: 107304f3c; end: 107304f87;  */

long FUN_107304f3c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107307970();
  func_0x000107304f5c();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107304f88; end: 10730526f;  */

void FUN_107304f88(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined1 *puVar4;
  int extraout_w10;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  byte bStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char cStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [88];
  char cStack_78;
  
  puVar4 = auStack_e0;
  FUN_107304640(puVar4,param_2,*(undefined8 *)(param_1 + 0x18));
  if (cStack_78 == '\x01') {
    lVar6 = param_5[1];
    uVar5 = param_5[1];
    uVar8 = *param_5;
    func_0x000107307984();
    uStack_1c0 = uVar8;
    uStack_1b8 = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x000107307798();
      } while (extraout_w10 != 0);
    }
    FUN_107306ae0(puVar4,auStack_d0,&uStack_1c0);
    puStack_e8 = puVar4;
    func_0x0001072ba140(&uStack_1c0);
    puVar4 = puStack_e8;
    if ((param_4 >> 0x20 & 1) != 0) {
      *(float *)(puStack_e8 + 0x100) = (float)param_4 / 1000.0;
    }
    plVar2 = *(long **)(puVar4 + 0xd8);
    for (plVar7 = *(long **)(puVar4 + 0xd0); puStack_1c8 = puStack_e8, plVar7 != plVar2;
        plVar7 = plVar7 + 2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_100,*plVar7 + 0x48);
      uVar1 = *(ulong *)(param_6 + 8);
      if (-1 < (char)*(byte *)(param_6 + 0x17)) {
        uVar1 = (ulong)*(byte *)(param_6 + 0x17);
      }
      if (uVar1 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_118,auStack_100);
      }
      else {
        func_0x00010563bf9c(&uStack_1c0,param_6,auStack_100);
        func_0x0001003a91d4(&UNK_10f409b65);
        func_0x0001003a9204(auStack_118);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*plVar7 + 0x48,auStack_118);
      FUN_107305270(&uStack_1c0,puStack_e8,auStack_118);
      bVar3 = bStack_1a8;
      func_0x0001001148fc(&uStack_1c0);
      if ((bVar3 & 1) == 0) {
        FUN_1073052e8(puStack_e8,auStack_118,auStack_118);
        FUN_107304a18(&uStack_160,auStack_e0,auStack_100);
        uVar8 = uStack_140;
        if (cStack_120 == '\x01') {
          uVar5 = *(undefined8 *)(param_1 + 8);
          uStack_1c0 = uStack_160;
          uStack_1b8 = CONCAT71(uStack_1b8._1_7_,uStack_158);
          uStack_1b0 = uStack_150;
          bStack_1a8 = bStack_148;
          uStack_140 = 0;
          uStack_198 = uStack_138;
          uStack_1a0 = uVar8;
          uStack_188 = uStack_128;
          uStack_190 = uStack_130;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_138 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_180,auStack_118);
          FUN_10730a9c0(uVar5,&uStack_1c0);
          FUN_1073065dc(&uStack_1c0);
        }
        func_0x00010725b590(&uStack_160);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
    }
    puStack_e8 = (undefined1 *)0x0;
    func_0x00010730799c(*(undefined8 *)(**(long **)(param_1 + 8) + 0x38),*(long **)(param_1 + 8),
                        &puStack_1c8,param_3);
    func_0x00010730788c();
    func_0x000107306ba8(&puStack_e8);
  }
  func_0x000107306604(auStack_e0);
  return;
}



/* Entry: 107305270; end: 1073052e7;  */

void FUN_107305270(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 1;
  lStack_40 = param_2;
  FUN_10724e404();
  param_2 = param_2 + 0xa8;
  func_0x000100ab9b18(param_2,param_3);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x0001002a8308(param_1,param_2 + 0x28);
  }
  FUN_10724e49c(&lStack_40);
  return;
}



/* Entry: 1073052e8; end: 107305347;  */

void FUN_1073052e8(long param_1,undefined8 param_2)

{
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 1;
  lStack_40 = param_1;
  FUN_107279a5c();
  func_0x00010060413c(param_1 + 0xa8,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  FUN_107279ee0(&lStack_40);
  return;
}



/* Entry: 107305348; end: 107305393;  */

void FUN_107305348(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_107305394(&uStack_28,param_2,param_1);
  uVar1 = uStack_28;
  uStack_28 = 0;
  FUN_1073067cc(param_1 + 0x140,uVar1);
  func_0x0001073067a8(&uStack_28);
  return;
}



/* Entry: 107305394; end: 1073053d7;  */

void FUN_107305394(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1073053d8; end: 1073053ff;  */

void FUN_1073053d8(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107307798(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107305400; end: 10730573f;  */

void FUN_107305400(void)

{
  bool bVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_x4;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  undefined1 *puVar8;
  undefined1 auStack_4b0 [32];
  undefined1 auStack_490 [64];
  undefined1 auStack_450 [24];
  uint uStack_438;
  undefined1 auStack_420 [64];
  undefined1 auStack_3e0 [32];
  undefined1 auStack_3c0 [56];
  undefined1 uStack_388;
  undefined1 auStack_380 [24];
  int iStack_368;
  undefined1 auStack_360 [24];
  uint uStack_348;
  undefined1 *puStack_338;
  undefined1 auStack_330 [24];
  long lStack_318;
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [104];
  undefined1 auStack_290 [72];
  undefined1 uStack_248;
  undefined1 auStack_240 [504];
  undefined8 uStack_48;
  
  func_0x000107307878();
  func_0x00010730783c();
  uStack_48 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_240);
  uVar4 = 0;
  FUN_1073062c0();
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    func_0x0001073062e8();
    if ((uVar4 & 1) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_310,&DAT_10f3046e5,auStack_240);
      func_0x000100066230(auStack_240,auStack_310);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_310);
    }
  }
  bVar1 = *(long *)(unaff_x20 + 0x30) == 0;
  if (bVar1) {
    func_0x0001073079a4();
    func_0x0001073078fc();
  }
  else {
    func_0x0001073079a4();
    func_0x0001073078fc();
  }
  uStack_348 = (uint)bVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_310);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  FUN_107306c30(auStack_380,auStack_360);
  if (iStack_368 == 0) {
    FUN_107262e9c(auStack_310,auStack_380);
  }
  else {
    if (iStack_368 != 1) goto LAB_10730566c;
    func_0x000100456794(auStack_330,auStack_380,&UNK_10f409f36);
    FUN_1072625b4(auStack_310,auStack_330);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_330);
  }
  auStack_290[0] = 0;
  uStack_248 = 0;
  auStack_3c0[0] = 0;
  uStack_388 = 0;
  func_0x00010730797c(auStack_240,0,auStack_310,auStack_290,in_x4,auStack_3c0);
  FUN_10724b12c(auStack_3c0);
  FUN_10724b2ac(auStack_290);
  func_0x000104c2f714(auStack_310);
  FUN_107304b00(auStack_380);
  FUN_107306684(auStack_420);
  FUN_107306c30(auStack_3e0,auStack_360);
  FUN_107306520(auStack_310,unaff_x19 + 0x158);
  FUN_10730662c(auStack_2f8,&stack0xfffffffffffffbd8);
  FUN_107305740(&stack0xfffffffffffffbd8);
  plVar7 = *(long **)(unaff_x19 + 0x30);
  FUN_10730576c(auStack_4b0,auStack_310);
  lStack_318 = 0;
  lVar5 = 0x88;
  __Znwm();
  lVar6 = lVar5;
  func_0x000107307924(&PTR_FUN_11099e9d0);
  FUN_107306684(lVar6 + 0x28,auStack_490);
  puVar8 = (undefined1 *)(lVar5 + 0x68);
  *puVar8 = 0;
  *(undefined4 *)(lVar5 + 0x80) = 0xffffffff;
  FUN_107304b00(puVar8);
  uVar3 = uStack_438 == 0xffffffff;
  if (!(bool)uVar3) {
    puStack_338 = puVar8;
    (*(code *)(&PTR_DAT_11099ea30)[uStack_438])(&puStack_338,auStack_450);
    *(uint *)(lVar5 + 0x80) = uStack_438;
  }
  lStack_318 = lVar5;
  func_0x00010730785c(*(undefined8 *)(*plVar7 + 0x10));
  func_0x0001072d52dc(auStack_330);
  FUN_1073057a0(auStack_4b0);
  FUN_1073057a0(auStack_310);
  func_0x00010724b374(auStack_240);
  FUN_107304b00(auStack_360);
  func_0x000107307784(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10730566c:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107305674);
  (*pcVar2)();
}



/* Entry: 107305740; end: 10730576b;  */

long FUN_107305740(long param_1)

{
  FUN_107304b00(param_1 + 0x48);
  func_0x0001072ba0f0(param_1 + 8);
  return param_1;
}



/* Entry: 10730576c; end: 10730579f;  */

void FUN_10730576c(long param_1)

{
  long unaff_x20;
  
  func_0x000107307878();
  FUN_1073066e0();
  FUN_10730662c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1073057a0; end: 1073057bf;  */

long FUN_1073057a0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107307970();
  FUN_107305740();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073057c0; end: 10730597f;  */

void FUN_1073057c0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_c0 [2];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010002b838(&puStack_70,&DAT_10f367b70);
    func_0x00010002b838(&puStack_b0,&UNK_10f409f50);
    FUN_107305980(uVar7,&puStack_70,&puStack_b0);
    func_0x000107307940();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_70);
    func_0x0001073078bc(*(undefined8 *)(**(long **)(param_1 + 8) + 0x40));
  }
  else {
    FUN_10724bb70(alStack_c0,param_1 + 0x60);
    if (alStack_c0[0] != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x58);
      ppuVar6 = &puStack_b0;
      FUN_107306684(ppuVar6,param_2);
      func_0x0001073079b0();
      puVar5 = uStack_78;
      puVar4 = uStack_80;
      puVar3 = uStack_88;
      puVar2 = uStack_90;
      uStack_68 = uStack_a8;
      puStack_70 = puStack_b0;
      uStack_60 = uStack_a0;
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = (undefined8 *)0x0;
      uStack_58 = uStack_98;
      uStack_a0 = (undefined8 *)0x0;
      uStack_90 = (undefined8 *)0x0;
      uStack_88 = (undefined8 *)0x0;
      uStack_80 = (undefined8 *)0x0;
      uStack_78 = (undefined8 *)0x0;
      *ppuVar6 = &PTR_DAT_11099ea60;
      ppuVar6[1] = puVar8;
      ppuVar6[2] = (undefined8 *)FUN_107305400;
      ppuVar6[3] = (undefined8 *)0x0;
      ppuVar6[6] = uStack_60;
      ppuVar6[5] = uStack_68;
      ppuVar6[4] = puStack_70;
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = (undefined8 *)0x0;
      uStack_60 = (undefined8 *)0x0;
      *(undefined1 *)(ppuVar6 + 7) = uStack_98;
      uStack_50 = 0;
      uStack_48 = 0;
      ppuVar6[9] = puVar3;
      ppuVar6[8] = puVar2;
      ppuVar6[0xb] = puVar5;
      ppuVar6[10] = puVar4;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072ba0f0(&puStack_70);
      puStack_70 = ppuVar6;
      func_0x0001072ba0f0(&puStack_b0);
      func_0x0001073ae140(alStack_c0[0],&puStack_70);
      puVar2 = puStack_70;
      puStack_70 = (undefined8 *)0x0;
      if ((undefined8 **)puVar2 != (undefined8 **)0x0) {
        func_0x000107307770();
      }
    }
    func_0x00010724bcd8(alStack_c0);
  }
  return;
}



/* Entry: 107305980; end: 107305a8b;  */

void FUN_107305980(undefined8 *param_1)

{
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 auStack_d0 [2];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  auStack_90[0] = 300;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_FUN_110996720;
  uStack_68 = 0;
  uStack_50 = 300;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8);
  FUN_10726e300(auStack_90,&DAT_10f305a7e,auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x0001073079b8(auStack_c0);
  FUN_10726e300(auStack_90,&DAT_10f409f44,auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  auStack_d0[0] = 1;
  uStack_c8 = 0;
  uStack_e0 = *param_1;
  uStack_d8 = 3;
  func_0x000107307868(param_1,auStack_90,auStack_d0,&uStack_e0);
  FUN_107262330(auStack_90);
  return;
}



/* Entry: 107305a8c; end: 107305aeb;  */

void FUN_107305a8c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined8 *puStack_c8;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar1 != 0) {
      puVar8 = (undefined8 *)(param_1 + 0x58);
      func_0x0001073079cc(puVar8,FUN_107305c50,0);
      FUN_10724bb70(alStack_c0,puVar8 + 1);
      if (alStack_c0[0] != 0) {
        uVar9 = *puVar8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,param_2)
        ;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,param_3)
        ;
        puVar8 = (undefined8 *)0x50;
        __Znwm();
        uVar7 = uStack_88;
        uVar6 = uStack_90;
        uVar5 = uStack_98;
        uVar4 = uStack_a0;
        uVar3 = uStack_a8;
        uVar2 = uStack_b0;
        uStack_78 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        *puVar8 = &PTR_FUN_11099eaa0;
        puVar8[1] = uVar9;
        puVar8[2] = unaff_x21;
        puVar8[3] = unaff_x20;
        puVar8[6] = uVar4;
        puVar8[5] = uVar3;
        puVar8[4] = uVar2;
        uStack_80 = 0;
        puVar8[9] = uVar7;
        puVar8[8] = uVar6;
        puVar8[7] = uVar5;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x0001073071f8(&uStack_80);
        puStack_c8 = puVar8;
        func_0x0001073071f8(&uStack_b0);
        func_0x0001073ae140(alStack_c0[0],&puStack_c8);
        puVar8 = puStack_c8;
        puStack_c8 = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          func_0x000107307770();
        }
      }
      func_0x00010724bcd8(alStack_c0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000107305ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),1);
  return;
}



/* Entry: 107305aec; end: 107305c4f;  */

void FUN_107305aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 *puStack_c8;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  func_0x0001073079cc();
  FUN_10724bb70(alStack_c0,param_1 + 1);
  if (alStack_c0[0] != 0) {
    uVar8 = *param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,param_5);
    puVar7 = (undefined8 *)0x50;
    __Znwm();
    uVar6 = uStack_88;
    uVar5 = uStack_90;
    uVar4 = uStack_98;
    uVar3 = uStack_a0;
    uVar2 = uStack_a8;
    uVar1 = uStack_b0;
    uStack_78 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    *puVar7 = &PTR_FUN_11099eaa0;
    puVar7[1] = uVar8;
    puVar7[2] = unaff_x21;
    puVar7[3] = unaff_x20;
    puVar7[6] = uVar3;
    puVar7[5] = uVar2;
    puVar7[4] = uVar1;
    uStack_80 = 0;
    puVar7[9] = uVar6;
    puVar7[8] = uVar5;
    puVar7[7] = uVar4;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x0001073071f8(&uStack_80);
    puStack_c8 = puVar7;
    func_0x0001073071f8(&uStack_b0);
    func_0x0001073ae140(alStack_c0[0],&puStack_c8);
    puVar7 = puStack_c8;
    puStack_c8 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000107307770();
    }
  }
  func_0x00010724bcd8(alStack_c0);
  return;
}



/* Entry: 107305c50; end: 107305ddb;  */

void FUN_107305c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  undefined8 *unaff_x21;
  long *plVar2;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [88];
  char cStack_38;
  
  func_0x0001073079cc();
  plVar2 = *(long **)(param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_c8,param_3);
  uStack_a8 = uStack_c0;
  puStack_b0 = puStack_c8;
  uStack_a0 = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 1;
  uStack_d0 = unaff_x21[1];
  puStack_d8 = (undefined8 *)*unaff_x21;
  if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
    uStack_d0 = (ulong)*(byte *)((long)unaff_x21 + 0x17);
    puStack_d8 = unaff_x21;
  }
  puStack_c8 = (undefined8 *)0x0;
  (**(code **)(*plVar2 + 0x10))(auStack_90,plVar2,&puStack_b0,&puStack_d8);
  ppuVar1 = &puStack_b0;
  FUN_107304b00();
  func_0x000107307894();
  if (cStack_38 == '\x01') {
    func_0x000107307984();
    puStack_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_107306ae0();
    puStack_c8 = ppuVar1;
    func_0x0001072ba140(&puStack_b0);
    puStack_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_107305dec(param_1,ppuVar1,&puStack_b0);
    func_0x0001072ba11c(&puStack_b0);
    puStack_e0 = puStack_c8;
    puStack_c8 = (undefined8 *)0x0;
    func_0x00010730799c(*(undefined8 *)(**(long **)(param_1 + 8) + 0x38),*(long **)(param_1 + 8),
                        &puStack_e0,0);
    func_0x000107306ba8(&puStack_e0);
    func_0x00010730788c();
  }
  else {
    func_0x000107307948();
    func_0x0001073078bc();
  }
  FUN_107304ae0(auStack_90);
  return;
}



/* Entry: 107305ddc; end: 107305deb;  */

void FUN_107305ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107305de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  return;
}



/* Entry: 107305dec; end: 107306087;  */

void FUN_107305dec(undefined1 *param_1,ulong param_2,undefined8 **param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar8;
  long *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auStack_510 [32];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 *puStack_4c0;
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [56];
  undefined1 auStack_438 [56];
  undefined1 uStack_400;
  undefined1 auStack_3f8 [24];
  long lStack_3e0;
  undefined1 auStack_3d8 [72];
  undefined1 uStack_390;
  undefined1 auStack_388 [504];
  undefined1 auStack_190 [56];
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 *apuStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long *plStack_78;
  undefined8 uStack_70;
  
  func_0x0001073079cc();
  puVar4 = param_1;
  func_0x00010730783c();
  plVar2 = *(long **)(param_2 + 0xd8);
  uStack_70 = extraout_x8;
  for (plVar8 = *(long **)(param_2 + 0xd0); uVar3 = plVar8 == plVar2, !(bool)uVar3;
      plVar8 = plVar8 + 2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_e8,*plVar8 + 0x48);
    uVar1 = *(ulong *)(param_4 + 8);
    if (-1 < (char)*(byte *)(param_4 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_4 + 0x17);
    }
    if (uVar1 == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (apuStack_100,&UNK_10f409f5b,auStack_e8);
    }
    else {
      func_0x00010563bf9c(auStack_90,param_4,auStack_e8);
      func_0x0001003a91d4(&UNK_10f409f6c);
      param_3 = (undefined8 **)0xdd;
      func_0x0001003a9204(apuStack_100);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*plVar8 + 0x48,apuStack_100);
    param_2 = 0;
    FUN_107305270(auStack_90);
    plVar5 = plStack_78;
    puVar4 = auStack_90;
    func_0x0001001148fc();
    if (((ulong)plVar5 & 1) == 0) {
      FUN_1073052e8();
      if (*unaff_x20 == 0) {
        param_2 = 0;
        param_3 = apuStack_100;
        puVar4 = param_1;
        FUN_107306088();
      }
      else {
        puStack_b0 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_a8,apuStack_100);
        plVar5 = (long *)0x28;
        __Znwm();
        *plVar5 = (long)&PTR_SUB_11099eb60;
        plVar5[1] = (long)puStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (plVar5 + 2,auStack_a8);
        plStack_78 = plVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
        plVar9 = (long *)*unaff_x20;
        unaff_x28 = (undefined8 *)0x40;
        __Znwm();
        unaff_x28[1] = 0;
        unaff_x28[2] = 0;
        *unaff_x28 = &PTR_FUN_11099ebe0;
        unaff_x27 = unaff_x28 + 3;
        *unaff_x27 = &PTR_DAT_11099ec30;
        (**(code **)(*plVar5 + 0x10))();
        unaff_x28[7] = plVar5;
        uStack_d0 = 0;
        uStack_c8 = 0;
        param_2 = 0;
        param_3 = &puStack_c0;
        puStack_c0 = unaff_x27;
        puStack_b8 = unaff_x28;
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x000107307740(&puStack_c0);
        func_0x000107307718(&uStack_d0);
        puVar4 = auStack_90;
        func_0x00010729f864();
      }
    }
    func_0x000107307940();
    func_0x000107307884();
  }
  func_0x000107307784(uStack_70);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x28);
  __ZdlPv();
  func_0x00010729f864(auStack_90);
  func_0x000107307940();
  func_0x000107307884();
  func_0x00010730777c();
  puStack_140 = &UNK_10f409f6c;
  puStack_150 = unaff_x28;
  puStack_148 = unaff_x27;
  func_0x000107307878();
  func_0x00010730783c();
  uStack_158 = extraout_x8_00;
  FUN_1073062c0();
  if (((param_2 & 1) == 0) && (func_0x0001073062e8(), (int)unaff_x20 == 0)) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_388,&DAT_10f3046e5);
    FUN_1072625b4(auStack_190,auStack_388);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
  }
  else {
    FUN_107262e9c(auStack_190);
  }
  auStack_3d8[0] = 0;
  uStack_390 = 0;
  auStack_438[0] = 0;
  uStack_400 = 0;
  func_0x00010730797c(auStack_388,7,auStack_190,auStack_3d8,param_5,auStack_438);
  FUN_10724b12c(auStack_438);
  FUN_10724b2ac(auStack_3d8);
  puStack_4c0 = puVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_4b8,param_3);
  func_0x0001073079b8(auStack_4a0);
  FUN_107306520(auStack_488,puVar4 + 0x158);
  FUN_107306710(auStack_470,&puStack_4c0);
  FUN_107306310(&puStack_4c0);
  plVar8 = *(long **)(puVar4 + 0x30);
  FUN_10730633c(auStack_510,auStack_488);
  lStack_3e0 = 0;
  lVar6 = 0x58;
  __Znwm();
  lVar7 = lVar6;
  func_0x000107307924(&PTR_SUB_11099eae0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar7 + 0x28,auStack_4f0)
  ;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar6 + 0x40,auStack_4d8)
  ;
  lStack_3e0 = lVar6;
  func_0x00010730785c(*(undefined8 *)(*plVar8 + 0x10));
  func_0x0001072d52dc(auStack_3f8);
  FUN_107306370(auStack_510);
  FUN_107306370(auStack_488);
  func_0x00010724b374(auStack_388);
  func_0x000104c2f714(auStack_190);
  func_0x000107307784(uStack_158);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072d52dc(auStack_3f8);
  FUN_107306370(auStack_510);
  FUN_107306370(auStack_488);
  do {
    func_0x00010724b374(auStack_388);
    func_0x000104c2f714(auStack_190);
    func_0x00010730777c();
    func_0x00010725b1d4(auStack_488);
    FUN_107306310(&puStack_4c0);
  } while( true );
}



/* Entry: 107306088; end: 1073062bf;  */

void FUN_107306088(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar3;
  int unaff_w20;
  undefined1 auStack_400 [32];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [56];
  undefined1 auStack_328 [56];
  undefined1 uStack_2f0;
  undefined1 auStack_2e8 [24];
  long lStack_2d0;
  undefined1 auStack_2c8 [72];
  undefined1 uStack_280;
  undefined1 auStack_278 [504];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107307878();
  func_0x00010730783c();
  uStack_48 = extraout_x8;
  FUN_1073062c0();
  if (((param_2 & 1) == 0) && (func_0x0001073062e8(), unaff_w20 == 0)) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_278,&DAT_10f3046e5);
    FUN_1072625b4(auStack_80,auStack_278);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
  }
  else {
    FUN_107262e9c(auStack_80);
  }
  auStack_2c8[0] = 0;
  uStack_280 = 0;
  auStack_328[0] = 0;
  uStack_2f0 = 0;
  func_0x00010730797c(auStack_278,7,auStack_80,auStack_2c8,param_5,auStack_328);
  FUN_10724b12c(auStack_328);
  FUN_10724b2ac(auStack_2c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_3a8,param_3);
  func_0x0001073079b8(auStack_390);
  FUN_107306520(auStack_378,unaff_x19 + 0x158);
  FUN_107306710(auStack_360,&stack0xfffffffffffffc50);
  FUN_107306310(&stack0xfffffffffffffc50);
  plVar3 = *(long **)(unaff_x19 + 0x30);
  FUN_10730633c(auStack_400,auStack_378);
  lStack_2d0 = 0;
  lVar1 = 0x58;
  __Znwm();
  lVar2 = lVar1;
  func_0x000107307924(&PTR_SUB_11099eae0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar2 + 0x28,auStack_3e0)
  ;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1 + 0x40,auStack_3c8)
  ;
  lStack_2d0 = lVar1;
  func_0x00010730785c(*(undefined8 *)(*plVar3 + 0x10));
  func_0x0001072d52dc(auStack_2e8);
  FUN_107306370(auStack_400);
  FUN_107306370(auStack_378);
  func_0x00010724b374(auStack_278);
  func_0x000104c2f714(auStack_80);
  func_0x000107307784(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072d52dc(auStack_2e8);
  FUN_107306370(auStack_400);
  FUN_107306370(auStack_378);
  do {
    func_0x00010724b374(auStack_278);
    func_0x000104c2f714(auStack_80);
    func_0x00010730777c();
    func_0x00010725b1d4(auStack_378);
    FUN_107306310(&stack0xfffffffffffffc50);
  } while( true );
}



/* Entry: 1073062c0; end: 10730630f;  */

bool FUN_1073062c0(long param_1)

{
  func_0x0001005d480c(param_1,&DAT_10f405966,0);
  return param_1 != -1;
}



/* Entry: 107306310; end: 10730633b;  */

long FUN_107306310(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10730633c; end: 10730636f;  */

void FUN_10730633c(long param_1)

{
  long unaff_x20;
  
  func_0x000107307878();
  FUN_1073066e0();
  FUN_107306710(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 107306370; end: 10730641b;  */

long FUN_107306370(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107307970();
  FUN_107306310();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10730641c; end: 10730641f;  */

undefined8 * FUN_10730641c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e8e0;
  if (param_1[0x2b] != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(param_1 + 0x2b);
  FUN_1072508cc(param_1 + 0x2b);
  FUN_10725b238(param_1 + 0x29);
  func_0x0001073067a8(param_1 + 0x28);
  FUN_107306434(param_1 + 0xe);
  FUN_10724ae28(param_1 + 0xc);
  FUN_10724b54c(param_1 + 9);
  func_0x0001072aa2e8(param_1 + 6);
  func_0x00010724bd50(param_1 + 4);
  func_0x00010730677c(param_1 + 3);
  func_0x0001072bc34c(param_1 + 1);
  return param_1;
}



/* Entry: 107306420; end: 107306433;  */

void FUN_107306420(void)

{
  func_0x000107306390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107306434; end: 107306507;  */

void FUN_107306434(long param_1)

{
  func_0x00010730645c(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 107306508; end: 10730651f;  */

void FUN_107306508(long *param_1)

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



/* Entry: 107306520; end: 107306573;  */

void FUN_107306520(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 107306574; end: 1073065db;  */

undefined8 * FUN_107306574(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar3;
  *param_1 = uVar2;
  lVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 1073065dc; end: 10730662b;  */

long FUN_1073065dc(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  func_0x00010725b5dc(param_1 + 0x28);
  FUN_10724e5b8(param_1 + 0x20);
  return param_1;
}



/* Entry: 10730662c; end: 107306683;  */

undefined8 * FUN_10730662c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_107306684(param_1 + 1,param_2 + 1);
  FUN_107306c30(param_1 + 9,param_2 + 9);
  return param_1;
}



/* Entry: 107306684; end: 1073066df;  */

void FUN_107306684(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1073066e0; end: 10730670f;  */

void FUN_1073066e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107307798();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107306710; end: 107306763;  */

undefined8 * FUN_107306710(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  func_0x0001073079b8(param_1 + 4);
  return param_1;
}



/* Entry: 107306764; end: 10730677b;  */

void FUN_107306764(void)

{
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x000107307958();
  return;
}



/* Entry: 10730677c; end: 1073067cb;  */

long * FUN_10730677c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107307770();
  }
  return param_1;
}



/* Entry: 1073067cc; end: 1073067e3;  */

void FUN_1073067cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107304bc4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073067e4; end: 1073067ff;  */

void FUN_1073067e4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107304bc4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107306800; end: 10730682b;  */

undefined8 * FUN_107306800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e940;
  FUN_107304f3c(param_1 + 1);
  return param_1;
}



/* Entry: 10730682c; end: 10730683f;  */

void FUN_10730682c(void)

{
  FUN_107306800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107306840; end: 107306873;  */

undefined8 FUN_107306840(undefined8 param_1)

{
  func_0x0001073079b0();
  FUN_1073069b0();
  return param_1;
}



/* Entry: 107306874; end: 107306897;  */

void FUN_107306874(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x000107307878(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_11099e940;
  FUN_1073066e0(param_2 + 1);
  FUN_107306574(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107306898; end: 10730697b;  */

void FUN_107306898(undefined8 param_1,long param_2)

{
  int iVar1;
  int extraout_w10;
  long unaff_x19;
  long *plVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107307a18();
  FUN_107306a04();
  iVar1 = (int)unaff_x19 + 8;
  func_0x000107306a90();
  if ((((iVar1 != 0) && (*(long *)(param_2 + 0x10) == 0)) && ((*(byte *)(param_2 + 0x19) & 1) == 0))
     && ((*(byte *)(param_2 + 0x18) & 1) == 0)) {
    plVar2 = *(long **)(unaff_x19 + 0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_48,*(undefined8 *)(param_2 + 0x20));
    uStack_58 = *(undefined8 *)(unaff_x19 + 0x40);
    uStack_60 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      do {
        func_0x000107307798();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,auStack_48);
    func_0x0001072ba140(&uStack_60);
    func_0x000107307884();
  }
  func_0x000107270b00(auStack_70);
  return;
}



/* Entry: 10730697c; end: 1073069a3;  */

void FUN_10730697c(undefined8 param_1)

{
  func_0x0001073079d8();
  func_0x0001073078d4(param_1,&PTR_DAT_11099e9a0);
  func_0x00010730784c();
  return;
}



/* Entry: 1073069a4; end: 1073069af;  */

undefined ** FUN_1073069a4(void)

{
  return &PTR_DAT_11099e9a0;
}



/* Entry: 1073069b0; end: 107306a03;  */

void FUN_1073069b0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107307878();
  *param_1 = &PTR_FUN_11099e940;
  FUN_1073066e0(param_1 + 1);
  FUN_107306574(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107306a04; end: 107306adf;  */

void FUN_107306a04(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_1072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_107306a7c;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_107306a7c:
  FUN_1072508cc(pplVar3);
  return;
}



/* Entry: 107306ae0; end: 107306b7f;  */

long FUN_107306ae0(long param_1)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x0001073079cc();
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x000107307958();
  FUN_107302464(lVar1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xe8,unaff_x21 + 0x18);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(unaff_x21 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x108,unaff_x21 + 0x38);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(unaff_x21 + 0x50);
  uVar2 = *unaff_x20;
  *(undefined8 *)(param_1 + 0x130) = unaff_x20[1];
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  return param_1;
}



/* Entry: 107306b80; end: 107306bcb;  */

void FUN_107306b80(long param_1)

{
  func_0x00010028ad98(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 107306bcc; end: 107306be3;  */

void FUN_107306bcc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107306c00(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107306be4; end: 107306bff;  */

void FUN_107306be4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107306c00(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107306c00; end: 107306c2f;  */

void FUN_107306c00(long param_1)

{
  func_0x0001072ba140(param_1 + 0x128);
  FUN_10730279c(param_1 + 0xd0);
  func_0x00010028ad98(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 107306c30; end: 107306cab;  */

void FUN_107306c30(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107307878();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_107304b00();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_11099e9b0)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 107306cac; end: 107306cbb;  */

void FUN_107306cac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (*param_1);
  return;
}



/* Entry: 107306cbc; end: 107306cdb;  */

void FUN_107306cbc(void)

{
  func_0x0001073079e4();
  FUN_1073057a0();
  return;
}



/* Entry: 107306cdc; end: 107306cef;  */

void FUN_107306cdc(void)

{
  FUN_107306cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107306cf0; end: 107306d27;  */

undefined8 FUN_107306cf0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  __Znwm(0x88);
  FUN_1073070d0();
  return uVar1;
}



/* Entry: 107306d28; end: 107306d4b;  */

void FUN_107306d28(long param_1,undefined8 param_2)

{
  func_0x0001073079e4(param_2,param_1 + 8);
  FUN_10730576c();
  return;
}



/* Entry: 107306d4c; end: 107307093;  */

void FUN_107306d4c(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  int extraout_w10;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_150 [32];
  undefined4 auStack_130 [2];
  undefined4 uStack_128;
  byte bStack_d8;
  undefined8 *puStack_d0;
  undefined4 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_107306a04(auStack_150,param_1 + 8);
  iVar2 = (int)param_1 + 8;
  func_0x000107306a90();
  if (iVar2 == 0) goto LAB_107306fc8;
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_2 + 0x10) == 0) {
    if ((*(byte *)(param_2 + 0x19) & 1) != 0) goto LAB_107306fc8;
    uVar6 = *(undefined8 *)(lVar5 + 0x40);
    if (*(char *)(param_2 + 0x18) != '\x01') {
      puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,299);
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_FUN_110996720;
      uStack_98 = 0;
      uStack_80 = 299;
      uStack_78 = 0;
      uStack_74 = 1;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      ppuVar3 = &puStack_c0;
      FUN_10729d56c(ppuVar3,&DAT_10f305a7e,&DAT_10f367b70);
      auStack_130[0] = 1;
      uStack_128 = 0;
      puStack_d0 = (undefined8 *)**(undefined8 **)(lVar5 + 0x40);
      uStack_c8 = 3;
      func_0x000107307868(uVar6,ppuVar3,auStack_130,&puStack_d0);
      func_0x000107307870();
      puVar4 = *(undefined8 **)(param_2 + 0x20);
      if (puVar4 == (undefined8 *)0x0) {
        puStack_c0 = (undefined8 *)0x0;
        lStack_b8 = 0;
      }
      else {
        lStack_b8 = (long)*(char *)((long)puVar4 + 0x17);
        puStack_c0 = puVar4;
        if (lStack_b8 < 0) {
          puStack_c0 = (undefined8 *)*puVar4;
          lStack_b8 = puVar4[1];
        }
      }
      (**(code **)(**(long **)(lVar5 + 0x18) + 0x10))
                (auStack_130,*(long **)(lVar5 + 0x18),param_1 + 0x68,&puStack_c0);
      puVar4 = *(undefined8 **)(lVar5 + 0x40);
      if (bStack_d8 == 1) {
        func_0x0001073077cc(0x12d);
        func_0x000107307868();
        func_0x000107307870();
        if ((bStack_d8 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x107306ff4);
          (*pcVar1)();
        }
        lVar7 = *(long *)(param_1 + 0x50);
        lVar9 = *(long *)(param_1 + 0x50);
        puVar8 = *(undefined8 **)(param_1 + 0x48);
        func_0x000107307984();
        puStack_c0 = puVar8;
        lStack_b8 = lVar9;
        if (lVar7 != 0) {
          do {
            func_0x000107307798();
          } while (extraout_w10 != 0);
        }
        FUN_107306ae0(puVar4,auStack_130,&puStack_c0);
        puStack_d0 = puVar4;
        func_0x0001072ba140(&puStack_c0);
        FUN_107305dec(lVar5,puVar4,param_1 + 0x58,param_1 + 0x28);
        puStack_d0 = (undefined8 *)0x0;
        puStack_c0 = puVar4;
        func_0x00010730799c(*(undefined8 *)(**(long **)(lVar5 + 8) + 0x38),*(long **)(lVar5 + 8),
                            &puStack_c0,*(undefined1 *)(param_1 + 0x40));
        func_0x000107306ba8(&puStack_c0);
        func_0x000107306ba8(&puStack_d0);
      }
      else {
        func_0x0001073077cc(0x12e);
        func_0x000107307868();
        func_0x000107307870();
        func_0x000107307948();
        func_0x0001073078bc();
      }
      FUN_107304ae0(auStack_130);
      goto LAB_107306fc8;
    }
    func_0x0001073078c4();
    func_0x00010002b838(auStack_130,&DAT_10f3a40ce);
    FUN_107305980(uVar6,&puStack_c0,auStack_130);
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0x40);
    func_0x0001073078c4();
    FUN_1073070f0(auStack_130,**(undefined1 **)(param_2 + 0x10));
    FUN_107305980(uVar6,&puStack_c0,auStack_130);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_c0);
  func_0x000107307948();
  func_0x0001073078bc();
LAB_107306fc8:
  func_0x000107270b00(auStack_150);
  return;
}



/* Entry: 107307094; end: 1073070bb;  */

void FUN_107307094(undefined8 param_1)

{
  func_0x0001073079d8();
  func_0x0001073078d4(param_1,&PTR_DAT_11099ea40);
  func_0x00010730784c();
  return;
}



/* Entry: 1073070bc; end: 1073070cf;  */

undefined ** FUN_1073070bc(void)

{
  return &PTR_DAT_11099ea40;
}



/* Entry: 1073070d0; end: 1073070ef;  */

void FUN_1073070d0(void)

{
  func_0x0001073079e4();
  FUN_10730576c();
  return;
}



/* Entry: 1073070f0; end: 107307127;  */

void FUN_1073070f0(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 - 1U < 6) {
    puVar1 = (&PTR_s_success_11099ec80)[(ulong)(param_2 - 1U) & 0xff];
  }
  else {
    puVar1 = &DAT_10f318d99;
  }
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 107307128; end: 10730713b;  */

void FUN_107307128(void)

{
  FUN_107307160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730713c; end: 10730715f;  */

void FUN_10730713c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010730715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 107307160; end: 10730718b;  */

undefined8 * FUN_107307160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099ea60;
  func_0x0001072ba0f0(param_1 + 4);
  return param_1;
}



/* Entry: 10730718c; end: 10730718f;  */

undefined8 * FUN_10730718c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099eaa0;
  func_0x0001073071f8(param_1 + 4);
  return param_1;
}



/* Entry: 107307190; end: 1073071a3;  */

void FUN_107307190(void)

{
  FUN_1073071cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073071a4; end: 1073071cb;  */

void FUN_1073071a4(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001073071c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x38);
  return;
}



/* Entry: 1073071cc; end: 10730723b;  */

undefined8 * FUN_1073071cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099eaa0;
  func_0x0001073071f8(param_1 + 4);
  return param_1;
}



/* Entry: 10730723c; end: 10730724f;  */

void FUN_10730723c(void)

{
  func_0x00010730721c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107307250; end: 107307287;  */

undefined8 FUN_107307250(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_107307530();
  return uVar1;
}



/* Entry: 107307288; end: 1073072ab;  */

void FUN_107307288(long param_1,undefined8 param_2)

{
  func_0x000107307a04(param_2,param_1 + 8);
  FUN_10730633c();
  return;
}



/* Entry: 1073072ac; end: 1073074fb;  */

void FUN_1073072ac(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_118 [16];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char cStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107307878();
  FUN_107306a04(auStack_118,unaff_x19 + 8);
  iVar2 = (int)unaff_x19 + 8;
  func_0x000107306a90();
  if (iVar2 == 0) goto LAB_10730746c;
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    if ((*(byte *)(unaff_x20 + 0x19) & 1) != 0) goto LAB_10730746c;
    if (*(char *)(unaff_x20 + 0x18) != '\x01') {
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        uVar7 = *(undefined8 *)(lVar8 + 0x40);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,299);
        uStack_98 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        ppuStack_90 = &PTR_FUN_110996720;
        uStack_88 = 0;
        auStack_70[0] = 299;
        uStack_68 = 0;
        uStack_64 = 1;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
        puVar3 = &uStack_b0;
        FUN_10729d56c(puVar3,&DAT_10f305a7e,"image");
        uStack_108 = 1;
        uStack_100 = 0;
        uStack_c0 = **(undefined8 **)(lVar8 + 0x40);
        uStack_b8 = 3;
        func_0x000107307868(uVar7,puVar3,&uStack_108,&uStack_c0);
        FUN_107262330(&uStack_b0);
        puVar4 = *(undefined8 **)(unaff_x20 + 0x20);
        lVar5 = (long)*(char *)((long)puVar4 + 0x17);
        puVar3 = puVar4;
        if (lVar5 < 0) {
          puVar3 = (undefined8 *)*puVar4;
          lVar5 = puVar4[1];
        }
        func_0x0001073c97c8(&uStack_108,puVar3,lVar5);
        uVar7 = uStack_e0;
        ppuVar1 = ppuStack_e8;
        if (cStack_c8 == '\x01') {
          uVar6 = *(undefined8 *)(lVar8 + 8);
          uStack_b0 = CONCAT44(uStack_104,uStack_108);
          uStack_a8 = (undefined1)uStack_100;
          uStack_a0 = uStack_f8;
          uStack_98 = CONCAT31(uStack_98._1_3_,uStack_f0);
          ppuStack_e8 = (undefined **)0x0;
          uStack_e0 = 0;
          uStack_88 = uVar7;
          ppuStack_90 = ppuVar1;
          uStack_78 = uStack_d0;
          uStack_80 = uStack_d8;
          uStack_d8 = 0;
          uStack_d0 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_70,unaff_x19 + 0x28);
          FUN_10730a9c0(uVar6,&uStack_b0);
          FUN_1073065dc(&uStack_b0);
        }
        func_0x00010725b590(&uStack_108);
      }
      goto LAB_10730746c;
    }
    func_0x0001073078ec();
    func_0x00010002b838(&uStack_108,&DAT_10f3a40ce);
    func_0x0001073078dc();
  }
  else {
    func_0x0001073078ec();
    FUN_1073070f0(&uStack_108,**(undefined1 **)(unaff_x20 + 0x10));
    func_0x0001073078dc();
  }
  func_0x000107307894();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
LAB_10730746c:
  func_0x000107270b00(auStack_118);
  return;
}



/* Entry: 1073074fc; end: 107307523;  */

void FUN_1073074fc(undefined8 param_1)

{
  func_0x0001073079d8();
  func_0x0001073078d4(param_1,&PTR_DAT_11099eb40);
  func_0x00010730784c();
  return;
}



/* Entry: 107307524; end: 10730752f;  */

undefined ** FUN_107307524(void)

{
  return &PTR_DAT_11099eb40;
}



/* Entry: 107307530; end: 10730757b;  */

void FUN_107307530(void)

{
  func_0x000107307a04();
  FUN_10730633c();
  return;
}



/* Entry: 10730757c; end: 10730758f;  */

void FUN_10730757c(void)

{
  func_0x000107307550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107307590; end: 1073075c7;  */

undefined8 FUN_107307590(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm(0x28);
  FUN_107307644();
  return uVar1;
}



/* Entry: 1073075c8; end: 10730760f;  */

undefined8 * FUN_1073075c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_11099eb60;
  param_2[1] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 2,param_1 + 0x10);
  return param_2;
}



/* Entry: 107307610; end: 107307637;  */

void FUN_107307610(undefined8 param_1)

{
  func_0x0001073079d8();
  func_0x0001073078d4(param_1,&PTR_DAT_11099ebc0);
  func_0x00010730784c();
  return;
}


