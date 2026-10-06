/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b15116c; end: 10b1511ab;  */

void FUN_10b15116c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)(unaff_x19 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    unaff_x19[2] = param_2[2];
    unaff_x19[1] = uVar2;
    *unaff_x19 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 1;
  }
  func_0x0001052a07e8(unaff_x19 + 4,param_3);
  return;
}



/* Entry: 10b1511ac; end: 10b151207;  */

void FUN_10b1511ac(undefined8 param_1)

{
  func_0x00010b20b440();
  func_0x000107c27e5c();
  func_0x000107c2793c(&UNK_10f315928);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10b151208; end: 10b1512a7;  */

void FUN_10b151208(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  FUN_10b1260ec(auStack_40);
  FUN_10b13d714(auStack_60,auStack_40,param_3);
  FUN_10b1512a8(&uStack_50,auStack_60,param_4);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b144eb4(&uStack_50);
  func_0x00010b1257f8(auStack_60);
  func_0x00010b125908(auStack_40);
  return;
}



/* Entry: 10b1512a8; end: 10b1512cf;  */

void FUN_10b1512a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b15195c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b1512d0; end: 10b151327;  */

void FUN_10b1512d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110cbf0c0;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
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
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
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



/* Entry: 10b151328; end: 10b15148b;  */

void FUN_10b151328(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 auStack_b8 [64];
  undefined8 auStack_78 [5];
  
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  FUN_10b1511ac(auStack_b8);
  FUN_10b17aa30(auStack_78,uVar4,param_4,auStack_b8);
  func_0x00010b151e78();
  cVar1 = param_5[0x10];
  uVar4 = *(undefined8 *)(param_5 + 8);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *param_5;
  FUN_10b13f754(auStack_b8,param_3);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  FUN_10b1f6ea8(uVar3,auStack_78,uVar2,uVar4,auStack_b8);
  func_0x00010b151e78();
  if ((int)uVar3 == 0) {
    func_0x00010b151df8(auStack_78[0]);
    func_0x00010b151e60();
    func_0x000107c3173c(auStack_f8);
    func_0x00010b151e2c();
    uStack_c8 = 1;
    FUN_10b17aae4(auStack_b8,2,auStack_e0);
    func_0x0001052b8c70(param_1,auStack_b8);
    func_0x0001052a03ac(auStack_b8);
    func_0x00010b151e50();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  }
  else {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  func_0x000107c278a8(auStack_78);
  return;
}



/* Entry: 10b15148c; end: 10b151673;  */

void FUN_10b15148c(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 uStack_308;
  undefined8 auStack_300 [3];
  undefined1 auStack_2e8 [72];
  long lStack_2a0;
  char cStack_290;
  undefined1 auStack_120 [176];
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  
  FUN_10b13f754(auStack_70,param_3);
  if (*param_4 == 0) {
    func_0x00010b151e6c(auStack_2e8,*(undefined8 *)(param_2 + 8),auStack_70);
    if (cStack_290 == '\x01' && lStack_2a0 < 1) {
      uStack_358 = 0;
      uStack_350 = 0;
      FUN_10b12157c(auStack_120,&uStack_358);
      func_0x00010b12186c(&uStack_358);
      FUN_10b1f7128(*(undefined8 *)(param_2 + 8),auStack_2e8,uStack_58,auStack_70,1);
    }
    *param_1 = 0;
    param_1[0x40] = 0;
    func_0x00010b151e58();
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    FUN_10b1511ac(auStack_2e8,param_3);
    FUN_10b17aa30(auStack_300,uVar1,param_4,auStack_2e8);
    func_0x00010b151e80();
    uVar1 = *(undefined8 *)(param_2 + 8);
    FUN_10b13f754(auStack_2e8,param_3);
    FUN_10b1f6f74(uVar1,auStack_300,auStack_2e8);
    func_0x00010b151e80();
    if ((int)uVar1 == 0) {
      func_0x00010b151df8(auStack_300[0]);
      func_0x00010b151e60();
      func_0x000107c3173c(auStack_338);
      func_0x00010b151e2c();
      uStack_308 = 1;
      FUN_10b17aae4(auStack_2e8,1,auStack_320);
      func_0x0001052b8c70(param_1,auStack_2e8);
      func_0x0001052a03ac(auStack_2e8);
      func_0x00010b151e50();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
    }
    else {
      *param_1 = 0;
      param_1[0x40] = 0;
    }
    func_0x000107c278a8(auStack_300);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return;
}



/* Entry: 10b151674; end: 10b151907;  */

undefined8 * FUN_10b151674(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  long *unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [24];
  undefined1 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [24];
  undefined1 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [128];
  long lStack_298;
  char cStack_290;
  undefined8 auStack_a0 [4];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010b151e9c();
  uStack_48 = extraout_x8;
  FUN_10b13f754(auStack_a0,param_2);
  func_0x00010b151e6c(auStack_318,*(undefined8 *)(param_1 + 8),auStack_a0);
  uVar3 = cStack_290 == '\x01' && lStack_298 == 1;
  if (cStack_290 == '\x01' && lStack_298 < 1) {
    uStack_358 = 0;
    uStack_350 = 0;
    auStack_378[0] = 0;
    uStack_360 = 0;
    func_0x0001052ab7a0();
    func_0x000107c279c4(auStack_378);
    func_0x00010529fde0(&uStack_358);
    puVar4 = auStack_318;
    FUN_10b1c4ae8();
    if ((puVar4 != (undefined1 *)0x0) && ((puVar4[0x10] & 1) != 0)) {
      puVar6 = (undefined8 *)(*(ulong *)(*(long *)(puVar4 + 0x18) + 0x10) & 0xfffffffffffffffc);
      lVar7 = (long)*(char *)((long)puVar6 + 0x17);
      if (lVar7 < 0) {
        lVar7 = puVar6[1];
        puVar6 = (undefined8 *)*puVar6;
      }
      func_0x0001052b2bac(unaff_x19 + 2);
      func_0x000107c28004(unaff_x19 + 2,puVar6,(long)puVar6 + lVar7);
      *(undefined1 *)(unaff_x19 + 5) = 1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&puStack_390,auStack_318);
    uStack_58 = 1;
    puVar5 = (undefined8 *)0x360;
    __Znwm();
    plVar8 = puVar5 + 1;
    *plVar8 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110cbf110;
    puVar6 = puVar5 + 3;
    puStack_78 = puStack_388;
    puStack_80 = puStack_390;
    uStack_70 = uStack_380;
    puStack_390 = (undefined8 *)0x0;
    puStack_388 = (undefined8 *)0x0;
    uStack_380 = 0;
    puStack_50 = puVar5;
    func_0x00010b151a74(puVar6,&puStack_80);
    puVar5[3] = &PTR_SUB_110cbf160;
    FUN_10b121c1c(puVar5 + 0x1d,auStack_318);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
    puStack_50 = (undefined8 *)0x0;
    if ((puVar5[0xf] == 0) || (uVar3 = *(long *)(puVar5[0xf] + 8) == -1, (bool)uVar3)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puStack_80 = puVar6;
      puStack_78 = puVar5;
      func_0x00010b151d7c(puVar5 + 0xe,&puStack_80);
      func_0x00010b1440f0(&puStack_80);
    }
    func_0x00010b151a18(auStack_60);
    puStack_78 = (undefined8 *)unaff_x19[1];
    puStack_80 = (undefined8 *)*unaff_x19;
    *unaff_x19 = (long)puVar6;
    unaff_x19[1] = (long)puVar5;
    func_0x00010529fde0(&puStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_390);
  }
  else {
    uStack_328 = 0;
    uStack_320 = 0;
    auStack_348[0] = 0;
    uStack_330 = 0;
    func_0x0001052ab7a0();
    func_0x000107c279c4(auStack_348);
    func_0x00010529fde0(&uStack_328);
  }
  func_0x00010b151e58();
  puVar6 = auStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b151e88(uStack_48);
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001052a8008();
  func_0x00010b151e58();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  __Unwind_Resume();
  *puVar6 = &PTR_FUN_110cbf0c0;
  func_0x0001052a1398(puVar6 + 3);
  func_0x00010b1257f8(puVar6 + 1);
  return puVar6;
}



/* Entry: 10b151908; end: 10b15190b;  */

undefined8 * FUN_10b151908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf0c0;
  func_0x0001052a1398(param_1 + 3);
  func_0x00010b1257f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b15190c; end: 10b15191f;  */

void FUN_10b15190c(void)

{
  FUN_10b151920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b151920; end: 10b15195b;  */

undefined8 * FUN_10b151920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf0c0;
  func_0x0001052a1398(param_1 + 3);
  func_0x00010b1257f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b15195c; end: 10b1519e3;  */

undefined8 * FUN_10b15195c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 auStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  func_0x00010b151e9c();
  uStack_38 = extraout_x8;
  FUN_10b144e3c(auStack_50,1);
  FUN_10b1519e4(lStack_40,param_2,param_3);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010b144ea4();
  func_0x00010b151e88(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b144ea4();
  func_0x00010b151e48();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cbed78;
  puVar3[1] = 0;
  FUN_10b1512d0(puVar3 + 3);
  return puVar3;
}



/* Entry: 10b1519e4; end: 10b151a3f;  */

undefined8 * FUN_10b1519e4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbed78;
  param_1[1] = 0;
  FUN_10b1512d0(param_1 + 3);
  return param_1;
}



/* Entry: 10b151a40; end: 10b151a4f;  */

void FUN_10b151a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf110;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b151a50; end: 10b151a63;  */

void FUN_10b151a50(void)

{
  FUN_10b151a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b151a64; end: 10b151ad7;  */

void FUN_10b151a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b151a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b151ad8; end: 10b151b5f;  */

undefined8 * FUN_10b151ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9038;
  func_0x000107c279a4(param_1 + 0x15);
  func_0x000107c279a4(param_1 + 0x11);
  func_0x000107c279a4(param_1 + 0xd);
  FUN_10b151c5c(param_1 + 0xb);
  FUN_10b151c84(param_1 + 1);
  return param_1;
}



/* Entry: 10b151b60; end: 10b151b73;  */

void FUN_10b151b60(void)

{
  func_0x00010b151b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b151b74; end: 10b151bb3;  */

void FUN_10b151b74(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c27b98(param_2 + 0x68);
  func_0x00010b151d40(&uStack_30,param_2 + 0x58);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  FUN_10b151dd8();
  return;
}



/* Entry: 10b151bb4; end: 10b151c13;  */

void FUN_10b151bb4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c27b98(param_2 + 0x88);
  func_0x000107c27b98(param_2 + 0xa8,param_4);
  func_0x00010b151d40(&uStack_40,param_2 + 0x58);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  FUN_10b151dd8();
  return;
}



/* Entry: 10b151c14; end: 10b151c53;  */

void FUN_10b151c14(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_2 + 200) = 1;
  func_0x00010b151d40(&uStack_30,param_2 + 0x58);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  FUN_10b151dd8();
  return;
}



/* Entry: 10b151c54; end: 10b151c5b;  */

void FUN_10b151c54(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b151c58);
  (*pcVar1)();
}



/* Entry: 10b151c5c; end: 10b151c83;  */

long FUN_10b151c5c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b151c84; end: 10b151ccf;  */

void FUN_10b151c84(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cbf1f8)[*(uint *)(param_1 + 0x48)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 10b151cd0; end: 10b151cef;  */

void FUN_10b151cd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 10b151cf0; end: 10b151dd7;  */

long FUN_10b151cf0(long param_1)

{
  func_0x0001052a92cc(param_1 + 0x30);
  func_0x000107c28090(param_1 + 8);
  FUN_10b4863a8(param_1);
  return param_1;
}



/* Entry: 10b151dd8; end: 10b151eaf;  */

void FUN_10b151dd8(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  func_0x00010b14f1cc();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b151eb0; end: 10b151eeb;  */

void FUN_10b151eb0(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b151eec(param_1,&uStack_38);
  func_0x0001052a92cc(&uStack_38);
  return;
}



/* Entry: 10b151eec; end: 10b151fd3;  */

void FUN_10b151eec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  undefined8 uStack_38;
  
  ppuStack_60 = &PTR_FUN_110ceb6d8;
  uStack_58 = 0;
  puStack_50 = &DAT_11383d918;
  uStack_38 = 0;
  uStack_48 = 0;
  pppuVar1 = &ppuStack_60;
  func_0x000107c3034c(pppuVar1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  if (((ulong)pppuVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10b151ff4(auStack_b8,&ppuStack_60);
    FUN_10b152370(auStack_88,param_3);
    FUN_10b151fd4(&uStack_70,auStack_b8);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x00010b1440f0(&uStack_70);
    FUN_10b151cf0(auStack_b8);
  }
  FUN_10b486378(&ppuStack_60);
  return;
}



/* Entry: 10b151fd4; end: 10b151ff3;  */

void FUN_10b151fd4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b15249c(&uStack_11,param_1);
  return;
}



/* Entry: 10b151ff4; end: 10b151fff;  */

undefined8 * FUN_10b151ff4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ceb6d8;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_10b15230c(param_1,param_2);
  return param_1;
}



/* Entry: 10b152000; end: 10b15211b;  */

void FUN_10b152000(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [48];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uVar1 = param_2;
  FUN_10b23b984();
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    FUN_10b23b9b8();
    if ((int)uVar1 != 0) {
      FUN_10b23e12c(auStack_88,param_2);
      goto LAB_10b15204c;
    }
    uVar1 = param_2;
    FUN_10b23b9ec();
    if ((int)uVar1 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_10b1520cc;
    }
  }
  else {
    FUN_10b23e0cc(auStack_88,param_2);
LAB_10b15204c:
    FUN_10b15211c(alStack_30,auStack_88);
    FUN_10b152714(auStack_88);
  }
  if (alStack_30[0] == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,param_2);
    FUN_10b15216c(auStack_40,auStack_88);
    func_0x00010b152924();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  }
  else {
    FUN_10b152160(auStack_88);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b151fd4(auStack_40,auStack_88);
    func_0x00010b152924();
    FUN_10b151cf0(auStack_88);
  }
LAB_10b1520cc:
  FUN_10b152714(alStack_30);
  return;
}



/* Entry: 10b15211c; end: 10b15215f;  */

undefined8 * FUN_10b15211c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10b152714(&uStack_30);
  return param_1;
}



/* Entry: 10b152160; end: 10b15216b;  */

undefined8 * FUN_10b152160(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110ceb6d8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,0);
  param_1[2] = lVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar1 = *(int *)(param_2 + 0x2c);
  *(int *)((long)param_1 + 0x2c) = iVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  if (iVar1 == 4) {
    uVar3 = 0;
    func_0x00010b4868a0(0,*(undefined8 *)(param_2 + 0x20));
  }
  else if (iVar1 == 3) {
    uVar3 = 0;
    func_0x00010b48685c(0,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar1 != 2) {
      return param_1;
    }
    uVar3 = 0;
    FUN_10b484ca4(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 10b15216c; end: 10b15218b;  */

void FUN_10b15216c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b15273c(&uStack_11,param_1);
  return;
}



/* Entry: 10b15218c; end: 10b15223f;  */

void FUN_10b15218c(undefined8 *param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 auStack_38 [24];
  
  func_0x00010b206f0c(&ppuStack_50);
  if (-1 < (char)bStack_39) {
    uStack_48 = (ulong)bStack_39;
    ppuStack_50 = &ppuStack_50;
  }
  FUN_10b205f70(auStack_38,ppuStack_50,uStack_48);
  func_0x00010b15294c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_50,auStack_38);
  FUN_10b152240(&uStack_60,&ppuStack_50);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010b1440f0(&uStack_60);
  func_0x00010b15294c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b152240; end: 10b15225f;  */

void FUN_10b152240(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b152820(&uStack_11,param_1);
  return;
}



/* Entry: 10b152260; end: 10b1522c3;  */

void FUN_10b152260(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48,param_2);
  FUN_10b152240(&uStack_30,auStack_48);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b1440f0(&uStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10b1522c4; end: 10b15230b;  */

undefined8 * FUN_10b1522c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110ceb6d8;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_10b15230c(param_1,param_3);
  return param_1;
}



/* Entry: 10b15230c; end: 10b15236f;  */

long FUN_10b15230c(long param_1,long param_2)

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
      FUN_10b4867b8(param_1);
    }
    else {
      FUN_10b486780(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b152370; end: 10b1523a7;  */

undefined8 * FUN_10b152370(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b1523a8(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  return param_1;
}



/* Entry: 10b1523a8; end: 10b152433;  */

void FUN_10b1523a8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  lStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10b152434(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  uStack_38 = 1;
  func_0x00010b152470(&lStack_40);
  return;
}



/* Entry: 10b152434; end: 10b15249b;  */

long * FUN_10b152434(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    func_0x0001052a9130();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    return plVar1;
  }
  func_0x0001052a9054();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x0001052a9300(param_1);
  }
  return param_1;
}



/* Entry: 10b15249c; end: 10b1524ff;  */

void FUN_10b15249c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  long *extraout_x8;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_30;
  
  FUN_10b1528a4();
  func_0x00010b152918();
  FUN_10b152574(lStack_30);
  lVar5 = lStack_30;
  lStack_30 = 0;
  lVar4 = lVar5 + 0x18;
  FUN_10b152500();
  func_0x00010b152910();
  func_0x00010b1528f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b152910();
  func_0x00010b152908();
  *extraout_x8 = lVar4;
  extraout_x8[1] = lVar5;
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = lVar4 + 0x58;
  }
  if ((lVar5 != 0) && ((*(long *)(lVar5 + 8) == 0 || (*(long *)(*(long *)(lVar5 + 8) + 8) == -1))))
  {
    pcStack_48 = FUN_10b152500;
    lStack_58 = extraout_x8[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_60 = lVar4;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010b151d7c(lVar5,&lStack_60);
    func_0x00010b1440f0(&lStack_60);
    return;
  }
  return;
}



/* Entry: 10b152500; end: 10b15251b;  */

void FUN_10b152500(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 0x58;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x00010b151d7c(lVar2,&lStack_20);
    func_0x00010b1440f0(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b15251c; end: 10b152543;  */

long FUN_10b15251c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b152544();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b152544; end: 10b152573;  */

void FUN_10b152544(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1528c0();
  FUN_10b1525d0();
  return;
}



/* Entry: 10b152574; end: 10b1525a7;  */

void FUN_10b152574(void)

{
  func_0x00010b1528c0();
  FUN_10b1525d0();
  return;
}



/* Entry: 10b1525a8; end: 10b1525ab;  */

void FUN_10b1525a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf228;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1525ac; end: 10b1525bf;  */

void FUN_10b1525ac(void)

{
  FUN_10b152688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1525c0; end: 10b1525cf;  */

void FUN_10b1525c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1525c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1525d0; end: 10b15262f;  */

undefined8 * FUN_10b1525d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf1c0;
  FUN_10b152630(param_1 + 1);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_110cc9038;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return param_1;
}



/* Entry: 10b152630; end: 10b15264b;  */

void FUN_10b152630(long param_1)

{
  FUN_10b15264c();
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10b15264c; end: 10b152687;  */

void FUN_10b15264c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10b152160();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 10b152688; end: 10b15269b;  */

void FUN_10b152688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf228;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b15269c; end: 10b152703;  */

void FUN_10b15269c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x00010b151d7c(param_2,&uStack_20);
    func_0x00010b1440f0(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b152704; end: 10b152713;  */

void FUN_10b152704(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b152714; end: 10b15273b;  */

long FUN_10b152714(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b15273c; end: 10b15279f;  */

long FUN_10b15273c(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uStack_30;
  
  FUN_10b1528a4();
  func_0x00010b152918();
  FUN_10b1527a0(uStack_30);
  lVar1 = uStack_30 + 0x18;
  FUN_10b152500();
  func_0x00010b152910();
  func_0x00010b1528f0();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010b152910();
  func_0x00010b152908();
  func_0x00010b1528c0();
  FUN_10b1527c0();
  return lVar1;
}



/* Entry: 10b1527a0; end: 10b1527bf;  */

void FUN_10b1527a0(void)

{
  func_0x00010b1528c0();
  FUN_10b1527c0();
  return;
}



/* Entry: 10b1527c0; end: 10b15281f;  */

void FUN_10b1527c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110cbf1c0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[3] = param_2[2];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_110cc9038;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



/* Entry: 10b152820; end: 10b152883;  */

long FUN_10b152820(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uStack_30;
  
  FUN_10b1528a4();
  func_0x00010b152918();
  FUN_10b152884(uStack_30);
  lVar1 = uStack_30 + 0x18;
  FUN_10b152500();
  func_0x00010b152910();
  func_0x00010b1528f0();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010b152910();
  func_0x00010b152908();
  func_0x00010b1528c0();
  func_0x00010b151a74();
  return lVar1;
}



/* Entry: 10b152884; end: 10b1528a3;  */

void FUN_10b152884(void)

{
  func_0x00010b1528c0();
  func_0x00010b151a74();
  return;
}



/* Entry: 10b1528a4; end: 10b152953;  */

void FUN_10b1528a4(void)

{
  return;
}



/* Entry: 10b152954; end: 10b1529eb;  */

void FUN_10b152954(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  FUN_10b1260ec(auStack_40,param_4);
  FUN_10b13d714(auStack_60,auStack_40,param_6);
  func_0x00010b1751d4();
  FUN_10b1529ec(param_3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b12878c(&uStack_50);
  func_0x00010b1257f8(auStack_60);
  func_0x00010b125908(auStack_40);
  return;
}



/* Entry: 10b1529ec; end: 10b152a5f;  */

void FUN_10b1529ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 extraout_x8_06;
  long lVar11;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  long extraout_x11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long lStack_1c0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_170 [16];
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 auStack_e0 [3];
  code *pcStack_c8;
  undefined8 auStack_c0 [5];
  undefined8 uStack_98;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *param_2;
  pcStack_58 = FUN_10b168448;
  ppuStack_50 = &PTR_FUN_110cbfe38;
  ppcVar10 = &pcStack_58;
  uStack_40 = param_1;
  puStack_38 = param_2;
  uStack_30 = param_3;
  FUN_10b152a60(uStack_48);
  func_0x00010b176ba4();
  func_0x000107c350b0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b175ce4();
  func_0x00010b174f0c();
  puVar5 = auStack_e0;
  func_0x000107c350b4();
  uStack_98 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0);
  pcStack_c8 = *ppcVar10;
  (**(code **)(ppcVar10[1] + 0x10))(auStack_c0,ppcVar10 + 1);
  FUN_10b167f68(&pcStack_58,auStack_e0,&pcStack_c8);
  func_0x00010b175368(auStack_c0[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107c350b0(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b175368(auStack_c0[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b174f0c();
  puVar6 = (undefined8 *)0x118;
  __Znwm();
  *puVar6 = FUN_10b1740f4;
  puVar6[1] = FUN_10b174650;
  puVar12 = puVar6 + 2;
  *puVar12 = &PTR_FUN_110cbf3a8;
  uVar15 = *puVar5;
  puVar6[0x18] = puVar5[1];
  puVar6[0x17] = uVar15;
  puVar6[0x19] = puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar7 = puVar6;
  func_0x00010b175850();
  func_0x00010b176ae0();
  puVar9 = puVar6 + 0x1c;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110cbf3c8;
  puVar7[4] = 0;
  puVar7[5] = 0;
  func_0x00010b17702c();
  puVar7[6] = extraout_x10;
  func_0x00010b177fc8();
  puVar7[0xb] = 0;
  puVar7[0xc] = 0x32aaaba7;
  func_0x00010b17508c();
  *(undefined8 **)(unaff_x22 + 8) = puVar7;
  *(undefined8 *)(unaff_x22 + 0x10) = extraout_x8_01;
  *(undefined8 **)(unaff_x22 + 0x18) = puVar7;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11 != 0);
  func_0x00010b177dc0();
  puVar5[-5] = &PTR_FUN_110cbf360;
  *(undefined1 *)(puVar5 + 3) = 0;
  lStack_1c0 = extraout_x8_02;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_01 != 0);
  *extraout_x8_00 = extraout_x8_03;
  extraout_x8_00[1] = puVar7;
  func_0x00010b1419a8(&lStack_1c0);
  FUN_10b1b9728(puVar9);
  puVar7 = puVar9;
  FUN_10b1270a8();
  if (((ulong)puVar7 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x22) = 0;
    puStack_160 = puVar6;
    puStack_158 = puVar9;
    FUN_10b12713c(&lStack_150,puVar9,&puStack_160);
    if (lStack_148 != 0) {
      do {
        func_0x00010b1748f0();
      } while (extraout_w11_04 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b174824();
        func_0x00010b174f98();
      }
    }
  }
  else {
    FUN_10b113e08(puVar6 + 0x1a,puVar9);
    FUN_10b120e24(puVar9);
    FUN_10b113eb4(puVar9,puVar6 + 0x1a,puVar6 + 0x17);
    FUN_10b1ab8c8(&lStack_150,puVar9);
    lVar11 = lStack_150;
    if (lStack_150 == 0) {
      lVar14 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(lStack_150 + 0x20);
      puStack_158 = *(undefined8 **)(lStack_150 + 0x28);
      puStack_160 = puVar9;
      if (puStack_158 != (undefined8 *)0x0) {
        do {
          func_0x00010b1749b8();
          puVar9 = extraout_x8_04;
        } while (extraout_w11_02 != 0);
      }
      lVar14 = puVar6[0x1c];
      lVar13 = puVar6[0x1d];
      lStack_1c0 = lVar14;
      if (lVar13 != 0) {
        do {
          func_0x00010b1749b8();
          puVar9 = extraout_x8_05;
        } while (extraout_w11_03 != 0);
      }
      if (puStack_158 != (undefined8 *)0x0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10 != 0);
      }
      if (lStack_148 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b177d88();
      puVar6[0xc] = extraout_x9;
      puVar6[0xb] = extraout_x8_06;
      plVar8 = (long *)0x30;
      __Znwm();
      *plVar8 = lVar14;
      plVar8[1] = lVar13;
      lStack_1c0 = 0;
      func_0x00010b177d60(&lStack_1c0,puVar9,lVar11);
      func_0x00010b177660(auStack_170);
      func_0x00010b177648();
      FUN_10b12878c(auStack_170);
      func_0x00010b175848(*(undefined8 *)puVar6[0xc]);
      FUN_10b1531f0(&lStack_1c0);
      func_0x00010b1257d4(&puStack_160);
      lVar14 = 3;
    }
    func_0x00010b125888(&lStack_150);
    if (lVar11 == 0) {
      func_0x00010b1775c4();
      puVar9 = puVar6 + 0x20;
      FUN_10b113ed8();
      if (((ulong)puVar9 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x22) = 1;
        func_0x00010b177610();
        lVar11 = puVar6[0x20];
        if ((*(byte *)(lVar11 + 0x58) & 1) != 0) {
          func_0x00010b175840();
          func_0x00010b174f14(*puVar6);
          return;
        }
        puVar5 = *(undefined8 **)(lVar11 + 0x68);
        uVar4 = *(undefined8 **)(lVar11 + 0x70) <= puVar5;
        if ((bool)uVar4) {
          lVar14 = *(long *)(lVar11 + 0x60);
          func_0x00010b177c2c();
          if (extraout_x10_00 != 0) {
            func_0x00010552fc6c();
LAB_10b153090:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10b153094);
            (*pcVar3)();
          }
          func_0x00010b174770(extraout_x8_08 - lVar14);
          uVar1 = extraout_x9_04;
          if ((bool)uVar4) {
            uVar1 = extraout_x8_09;
          }
          if (uVar1 == 0) {
            lVar13 = 0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b153090;
            }
            lVar13 = uVar1 << 3;
            __Znwm();
          }
          puVar9 = (undefined8 *)(lVar13 + ((long)puVar5 - lVar14));
          puVar7 = puVar9 + 1;
          *puVar9 = puVar6;
          _memcpy(puVar9 + -extraout_x11,lVar14,(long)puVar5 - lVar14);
          *(undefined8 **)(lVar11 + 0x60) = puVar9 + -extraout_x11;
          *(undefined8 **)(lVar11 + 0x68) = puVar7;
          *(ulong *)(lVar11 + 0x70) = lVar13 + uVar1 * 8;
          if (lVar14 != 0) {
            func_0x00010b175b30();
          }
        }
        else {
          puVar7 = puVar5 + 1;
          *puVar5 = puVar6;
        }
        *(undefined8 **)(lVar11 + 0x68) = puVar7;
        func_0x00010b175840();
        return;
      }
      puVar9 = puVar6 + 0x20;
      FUN_10b113f00();
      lVar11 = puVar9[1];
      uVar15 = *puVar9;
      puVar6[0x1f] = puVar9[1];
      puVar6[0x1e] = uVar15;
      if (lVar11 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1761f0();
      lVar11 = puVar6[0x1e];
      lStack_148 = *(long *)(lVar11 + 0x10);
      lStack_150 = *(long *)(lVar11 + 8);
      if (*(long *)(lVar11 + 0x10) != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010b175c14(&puStack_160);
      lVar11 = puVar6[0x1f];
      lStack_1c0 = puVar6[0x1e];
      if (puVar6[0x1f] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_03 != 0);
      }
      puVar7 = puStack_158;
      puVar9 = puStack_160;
      if (puStack_158 != (undefined8 *)0x0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_04 != 0);
      }
      lVar13 = lStack_148;
      lVar14 = lStack_150;
      if (lStack_148 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_05 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_190,puVar6 + 0x17);
      func_0x00010b177d00();
      puVar6[0x12] = extraout_x9_01;
      puVar6[0x11] = extraout_x8_07;
      plVar8 = (long *)0x48;
      __Znwm();
      lVar2 = lStack_1c0;
      lStack_1c0 = 0;
      plVar8[1] = lVar11;
      *plVar8 = lVar2;
      plVar8[3] = (long)puVar7;
      plVar8[2] = (long)puVar9;
      plVar8[5] = lVar13;
      plVar8[4] = lVar14;
      plVar8[7] = lStack_188;
      plVar8[6] = lStack_190;
      plVar8[8] = lStack_180;
      lStack_188 = 0;
      lStack_180 = 0;
      lStack_190 = 0;
      puVar6[0x13] = plVar8;
      func_0x00010b177654(auStack_170);
      func_0x00010b177648();
      FUN_10b12878c(auStack_170);
      func_0x00010b175848(*(undefined8 *)puVar6[0x12]);
      func_0x00010b15321c(&lStack_1c0);
      func_0x00010b1257f8(&puStack_160);
      func_0x000107c2bdf4(&lStack_150);
      func_0x00010b176a10();
      lVar14 = 3;
    }
    func_0x00010b1776d0();
    func_0x00010b176250();
    uVar4 = (int)lVar14 == 3;
    if ((bool)uVar4) {
      func_0x00010b175654();
      *(undefined1 *)(puVar6 + 0x22) = extraout_w8;
      func_0x00010b175904();
      if ((bool)uVar4) {
        func_0x00010b177588();
        func_0x00010b177570();
        func_0x00010b175304();
        lStack_1c0 = lVar14;
        __ZNSt3__15mutex4lockEv(lVar14 + 0x48);
        if (*(char *)(lVar14 + 0x10) == '\x01') {
          func_0x00010b177c84();
          lVar11 = lStack_1c0;
          if (puVar5 != (undefined8 *)0x0) {
            do {
              func_0x00010b1748f0();
            } while (extraout_w11_05 != 0);
            lVar11 = lStack_1c0;
            if (extraout_x9_02 == 0) {
              func_0x00010b174874();
              func_0x00010b1751c0();
              lVar11 = lStack_1c0;
            }
          }
        }
        else {
          func_0x00010b17693c(puVar6[7]);
          lVar11 = lVar14;
        }
        lVar13 = *(long *)(lVar11 + 0x90);
        *(undefined8 *)(lVar11 + 0x90) = 0;
        __ZNSt3__15mutex6unlockEv(lVar14 + 0x48);
        if (lVar13 == 0) {
          __ZNSt3__118condition_variable10notify_allEv(lVar11 + 0x18);
        }
        else {
          func_0x00010b175150();
          func_0x00010b17555c();
          func_0x00010b1748a8();
        }
        if (unaff_x22 != 0) {
          do {
            func_0x00010b1748f0();
          } while (extraout_w11_06 != 0);
          if (extraout_x9_03 == 0) {
            func_0x00010b174874();
            func_0x00010b1751c0();
          }
        }
      }
      else {
        func_0x00010b177568(&lStack_1c0);
        FUN_10b160494(puVar12,&lStack_1c0);
        func_0x00010b175d64();
      }
    }
    FUN_10b16052c(puVar12);
    func_0x00010b176a80();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b152a60; end: 10b152b0b;  */

void FUN_10b152a60(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 extraout_x8_06;
  long lVar10;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  long extraout_x11;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  long lStack_160;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_110 [16];
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  puVar5 = auStack_80;
  func_0x000107c350b4(param_1,param_1);
  uStack_38 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80);
  uStack_68 = *param_2;
  (**(code **)(param_2[1] + 0x10))(auStack_60,param_2 + 1);
  FUN_10b167f68(auStack_80,&uStack_68);
  func_0x00010b175368(auStack_60[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107c350b0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b175368(auStack_60[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b174f0c();
  puVar6 = (undefined8 *)0x118;
  __Znwm();
  *puVar6 = FUN_10b1740f4;
  puVar6[1] = FUN_10b174650;
  puVar11 = puVar6 + 2;
  *puVar11 = &PTR_FUN_110cbf3a8;
  uVar14 = *puVar5;
  puVar6[0x18] = puVar5[1];
  puVar6[0x17] = uVar14;
  puVar6[0x19] = puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar7 = puVar6;
  func_0x00010b175850();
  func_0x00010b176ae0();
  puVar9 = puVar6 + 0x1c;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110cbf3c8;
  puVar7[4] = 0;
  puVar7[5] = 0;
  func_0x00010b17702c();
  puVar7[6] = extraout_x10;
  func_0x00010b177fc8();
  puVar7[0xb] = 0;
  puVar7[0xc] = 0x32aaaba7;
  func_0x00010b17508c();
  *(undefined8 **)(unaff_x22 + 8) = puVar7;
  *(undefined8 *)(unaff_x22 + 0x10) = extraout_x8_01;
  *(undefined8 **)(unaff_x22 + 0x18) = puVar7;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11 != 0);
  func_0x00010b177dc0();
  puVar5[-5] = &PTR_FUN_110cbf360;
  *(undefined1 *)(puVar5 + 3) = 0;
  lStack_160 = extraout_x8_02;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_01 != 0);
  *extraout_x8_00 = extraout_x8_03;
  extraout_x8_00[1] = puVar7;
  func_0x00010b1419a8(&lStack_160);
  FUN_10b1b9728(puVar9);
  puVar7 = puVar9;
  FUN_10b1270a8();
  if (((ulong)puVar7 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x22) = 0;
    puStack_100 = puVar6;
    puStack_f8 = puVar9;
    FUN_10b12713c(&lStack_f0,puVar9,&puStack_100);
    if (lStack_e8 != 0) {
      do {
        func_0x00010b1748f0();
      } while (extraout_w11_04 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b174824();
        func_0x00010b174f98();
      }
    }
  }
  else {
    FUN_10b113e08(puVar6 + 0x1a,puVar9);
    FUN_10b120e24(puVar9);
    FUN_10b113eb4(puVar9,puVar6 + 0x1a,puVar6 + 0x17);
    FUN_10b1ab8c8(&lStack_f0,puVar9);
    lVar10 = lStack_f0;
    if (lStack_f0 == 0) {
      lVar13 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(lStack_f0 + 0x20);
      puStack_f8 = *(undefined8 **)(lStack_f0 + 0x28);
      puStack_100 = puVar9;
      if (puStack_f8 != (undefined8 *)0x0) {
        do {
          func_0x00010b1749b8();
          puVar9 = extraout_x8_04;
        } while (extraout_w11_02 != 0);
      }
      lVar13 = puVar6[0x1c];
      lVar12 = puVar6[0x1d];
      lStack_160 = lVar13;
      if (lVar12 != 0) {
        do {
          func_0x00010b1749b8();
          puVar9 = extraout_x8_05;
        } while (extraout_w11_03 != 0);
      }
      if (puStack_f8 != (undefined8 *)0x0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10 != 0);
      }
      if (lStack_e8 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b177d88();
      puVar6[0xc] = extraout_x9;
      puVar6[0xb] = extraout_x8_06;
      plVar8 = (long *)0x30;
      __Znwm();
      *plVar8 = lVar13;
      plVar8[1] = lVar12;
      lStack_160 = 0;
      func_0x00010b177d60(&lStack_160,puVar9,lVar10);
      func_0x00010b177660(auStack_110);
      func_0x00010b177648();
      FUN_10b12878c(auStack_110);
      func_0x00010b175848(*(undefined8 *)puVar6[0xc]);
      FUN_10b1531f0(&lStack_160);
      func_0x00010b1257d4(&puStack_100);
      lVar13 = 3;
    }
    func_0x00010b125888(&lStack_f0);
    if (lVar10 == 0) {
      func_0x00010b1775c4();
      puVar9 = puVar6 + 0x20;
      FUN_10b113ed8();
      if (((ulong)puVar9 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x22) = 1;
        func_0x00010b177610();
        lVar10 = puVar6[0x20];
        if ((*(byte *)(lVar10 + 0x58) & 1) != 0) {
          func_0x00010b175840();
          func_0x00010b174f14(*puVar6);
          return;
        }
        puVar5 = *(undefined8 **)(lVar10 + 0x68);
        uVar4 = *(undefined8 **)(lVar10 + 0x70) <= puVar5;
        if ((bool)uVar4) {
          lVar13 = *(long *)(lVar10 + 0x60);
          func_0x00010b177c2c();
          if (extraout_x10_00 != 0) {
            func_0x00010552fc6c();
LAB_10b153090:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10b153094);
            (*pcVar3)();
          }
          func_0x00010b174770(extraout_x8_08 - lVar13);
          uVar1 = extraout_x9_04;
          if ((bool)uVar4) {
            uVar1 = extraout_x8_09;
          }
          if (uVar1 == 0) {
            lVar12 = 0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b153090;
            }
            lVar12 = uVar1 << 3;
            __Znwm();
          }
          puVar9 = (undefined8 *)(lVar12 + ((long)puVar5 - lVar13));
          puVar7 = puVar9 + 1;
          *puVar9 = puVar6;
          _memcpy(puVar9 + -extraout_x11,lVar13,(long)puVar5 - lVar13);
          *(undefined8 **)(lVar10 + 0x60) = puVar9 + -extraout_x11;
          *(undefined8 **)(lVar10 + 0x68) = puVar7;
          *(ulong *)(lVar10 + 0x70) = lVar12 + uVar1 * 8;
          if (lVar13 != 0) {
            func_0x00010b175b30();
          }
        }
        else {
          puVar7 = puVar5 + 1;
          *puVar5 = puVar6;
        }
        *(undefined8 **)(lVar10 + 0x68) = puVar7;
        func_0x00010b175840();
        return;
      }
      puVar9 = puVar6 + 0x20;
      FUN_10b113f00();
      lVar10 = puVar9[1];
      uVar14 = *puVar9;
      puVar6[0x1f] = puVar9[1];
      puVar6[0x1e] = uVar14;
      if (lVar10 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1761f0();
      lVar10 = puVar6[0x1e];
      lStack_e8 = *(long *)(lVar10 + 0x10);
      lStack_f0 = *(long *)(lVar10 + 8);
      if (*(long *)(lVar10 + 0x10) != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010b175c14(&puStack_100);
      lVar10 = puVar6[0x1f];
      lStack_160 = puVar6[0x1e];
      if (puVar6[0x1f] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_03 != 0);
      }
      puVar7 = puStack_f8;
      puVar9 = puStack_100;
      if (puStack_f8 != (undefined8 *)0x0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_04 != 0);
      }
      lVar12 = lStack_e8;
      lVar13 = lStack_f0;
      if (lStack_e8 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_05 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_130,puVar6 + 0x17);
      func_0x00010b177d00();
      puVar6[0x12] = extraout_x9_01;
      puVar6[0x11] = extraout_x8_07;
      plVar8 = (long *)0x48;
      __Znwm();
      lVar2 = lStack_160;
      lStack_160 = 0;
      plVar8[1] = lVar10;
      *plVar8 = lVar2;
      plVar8[3] = (long)puVar7;
      plVar8[2] = (long)puVar9;
      plVar8[5] = lVar12;
      plVar8[4] = lVar13;
      plVar8[7] = lStack_128;
      plVar8[6] = lStack_130;
      plVar8[8] = lStack_120;
      lStack_128 = 0;
      lStack_120 = 0;
      lStack_130 = 0;
      puVar6[0x13] = plVar8;
      func_0x00010b177654(auStack_110);
      func_0x00010b177648();
      FUN_10b12878c(auStack_110);
      func_0x00010b175848(*(undefined8 *)puVar6[0x12]);
      func_0x00010b15321c(&lStack_160);
      func_0x00010b1257f8(&puStack_100);
      func_0x000107c2bdf4(&lStack_f0);
      func_0x00010b176a10();
      lVar13 = 3;
    }
    func_0x00010b1776d0();
    func_0x00010b176250();
    uVar4 = (int)lVar13 == 3;
    if ((bool)uVar4) {
      func_0x00010b175654();
      *(undefined1 *)(puVar6 + 0x22) = extraout_w8;
      func_0x00010b175904();
      if ((bool)uVar4) {
        func_0x00010b177588();
        func_0x00010b177570();
        func_0x00010b175304();
        lStack_160 = lVar13;
        __ZNSt3__15mutex4lockEv(lVar13 + 0x48);
        if (*(char *)(lVar13 + 0x10) == '\x01') {
          func_0x00010b177c84();
          lVar10 = lStack_160;
          if (puVar5 != (undefined8 *)0x0) {
            do {
              func_0x00010b1748f0();
            } while (extraout_w11_05 != 0);
            lVar10 = lStack_160;
            if (extraout_x9_02 == 0) {
              func_0x00010b174874();
              func_0x00010b1751c0();
              lVar10 = lStack_160;
            }
          }
        }
        else {
          func_0x00010b17693c(puVar6[7]);
          lVar10 = lVar13;
        }
        lVar12 = *(long *)(lVar10 + 0x90);
        *(undefined8 *)(lVar10 + 0x90) = 0;
        __ZNSt3__15mutex6unlockEv(lVar13 + 0x48);
        if (lVar12 == 0) {
          __ZNSt3__118condition_variable10notify_allEv(lVar10 + 0x18);
        }
        else {
          func_0x00010b175150();
          func_0x00010b17555c();
          func_0x00010b1748a8();
        }
        if (unaff_x22 != 0) {
          do {
            func_0x00010b1748f0();
          } while (extraout_w11_06 != 0);
          if (extraout_x9_03 == 0) {
            func_0x00010b174874();
            func_0x00010b1751c0();
          }
        }
      }
      else {
        func_0x00010b177568(&lStack_160);
        FUN_10b160494(puVar11,&lStack_160);
        func_0x00010b175d64();
      }
    }
    FUN_10b16052c(puVar11);
    func_0x00010b176a80();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b152b0c; end: 10b1531ef;  */

void FUN_10b152b0c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar9;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  long extraout_x11;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lStack_e0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar5 = (undefined8 *)0x118;
  __Znwm();
  *puVar5 = FUN_10b1740f4;
  puVar5[1] = FUN_10b174650;
  puVar12 = puVar5 + 2;
  *puVar12 = &PTR_FUN_110cbf3a8;
  uVar13 = *param_2;
  puVar5[0x18] = param_2[1];
  puVar5[0x17] = uVar13;
  puVar5[0x19] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar6 = puVar5;
  func_0x00010b175850();
  func_0x00010b176ae0();
  puVar8 = puVar5 + 0x1c;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cbf3c8;
  puVar6[4] = 0;
  puVar6[5] = 0;
  func_0x00010b17702c();
  puVar6[6] = extraout_x10;
  func_0x00010b177fc8();
  puVar6[0xb] = 0;
  puVar6[0xc] = 0x32aaaba7;
  func_0x00010b17508c();
  *(undefined8 **)(unaff_x22 + 8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x10) = extraout_x8;
  *(undefined8 **)(unaff_x22 + 0x18) = puVar6;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11 != 0);
  func_0x00010b177dc0();
  param_2[-5] = &PTR_FUN_110cbf360;
  *(undefined1 *)(param_2 + 3) = 0;
  lStack_e0 = extraout_x8_00;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8_01;
  param_1[1] = puVar6;
  func_0x00010b1419a8(&lStack_e0);
  FUN_10b1b9728(puVar8);
  puVar6 = puVar8;
  FUN_10b1270a8();
  if (((ulong)puVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x22) = 0;
    puStack_80 = puVar5;
    puStack_78 = puVar8;
    FUN_10b12713c(&lStack_70,puVar8,&puStack_80);
    if (lStack_68 != 0) {
      do {
        func_0x00010b1748f0();
      } while (extraout_w11_04 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b174824();
        func_0x00010b174f98();
      }
    }
  }
  else {
    FUN_10b113e08(puVar5 + 0x1a,puVar8);
    FUN_10b120e24(puVar8);
    FUN_10b113eb4(puVar8,puVar5 + 0x1a,puVar5 + 0x17);
    FUN_10b1ab8c8(&lStack_70,puVar8);
    lVar9 = lStack_70;
    if (lStack_70 == 0) {
      lVar11 = 0;
    }
    else {
      puVar8 = *(undefined8 **)(lStack_70 + 0x20);
      puStack_78 = *(undefined8 **)(lStack_70 + 0x28);
      puStack_80 = puVar8;
      if (puStack_78 != (undefined8 *)0x0) {
        do {
          func_0x00010b1749b8();
          puVar8 = extraout_x8_02;
        } while (extraout_w11_02 != 0);
      }
      lVar11 = puVar5[0x1c];
      lVar10 = puVar5[0x1d];
      lStack_e0 = lVar11;
      if (lVar10 != 0) {
        do {
          func_0x00010b1749b8();
          puVar8 = extraout_x8_03;
        } while (extraout_w11_03 != 0);
      }
      if (puStack_78 != (undefined8 *)0x0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10 != 0);
      }
      if (lStack_68 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b177d88();
      puVar5[0xc] = extraout_x9;
      puVar5[0xb] = extraout_x8_04;
      plVar7 = (long *)0x30;
      __Znwm();
      *plVar7 = lVar11;
      plVar7[1] = lVar10;
      lStack_e0 = 0;
      func_0x00010b177d60(&lStack_e0,puVar8,lVar9);
      func_0x00010b177660(auStack_90);
      func_0x00010b177648();
      FUN_10b12878c(auStack_90);
      func_0x00010b175848(*(undefined8 *)puVar5[0xc]);
      FUN_10b1531f0(&lStack_e0);
      func_0x00010b1257d4(&puStack_80);
      lVar11 = 3;
    }
    func_0x00010b125888(&lStack_70);
    if (lVar9 == 0) {
      func_0x00010b1775c4();
      puVar8 = puVar5 + 0x20;
      FUN_10b113ed8();
      if (((ulong)puVar8 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0x22) = 1;
        func_0x00010b177610();
        lVar9 = puVar5[0x20];
        if ((*(byte *)(lVar9 + 0x58) & 1) != 0) {
          func_0x00010b175840();
          func_0x00010b174f14(*puVar5);
          return;
        }
        puVar8 = *(undefined8 **)(lVar9 + 0x68);
        uVar4 = *(undefined8 **)(lVar9 + 0x70) <= puVar8;
        if ((bool)uVar4) {
          lVar11 = *(long *)(lVar9 + 0x60);
          func_0x00010b177c2c();
          if (extraout_x10_00 != 0) {
            func_0x00010552fc6c();
LAB_10b153090:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10b153094);
            (*pcVar3)();
          }
          func_0x00010b174770(extraout_x8_06 - lVar11);
          uVar1 = extraout_x9_04;
          if ((bool)uVar4) {
            uVar1 = extraout_x8_07;
          }
          if (uVar1 == 0) {
            lVar10 = 0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b153090;
            }
            lVar10 = uVar1 << 3;
            __Znwm();
          }
          puVar6 = (undefined8 *)(lVar10 + ((long)puVar8 - lVar11));
          puVar12 = puVar6 + 1;
          *puVar6 = puVar5;
          _memcpy(puVar6 + -extraout_x11,lVar11,(long)puVar8 - lVar11);
          *(undefined8 **)(lVar9 + 0x60) = puVar6 + -extraout_x11;
          *(undefined8 **)(lVar9 + 0x68) = puVar12;
          *(ulong *)(lVar9 + 0x70) = lVar10 + uVar1 * 8;
          if (lVar11 != 0) {
            func_0x00010b175b30();
          }
        }
        else {
          puVar12 = puVar8 + 1;
          *puVar8 = puVar5;
        }
        *(undefined8 **)(lVar9 + 0x68) = puVar12;
        func_0x00010b175840();
        return;
      }
      puVar8 = puVar5 + 0x20;
      FUN_10b113f00();
      lVar9 = puVar8[1];
      uVar13 = *puVar8;
      puVar5[0x1f] = puVar8[1];
      puVar5[0x1e] = uVar13;
      if (lVar9 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1761f0();
      lVar9 = puVar5[0x1e];
      lStack_68 = *(long *)(lVar9 + 0x10);
      lStack_70 = *(long *)(lVar9 + 8);
      if (*(long *)(lVar9 + 0x10) != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010b175c14(&puStack_80);
      lVar9 = puVar5[0x1f];
      lStack_e0 = puVar5[0x1e];
      if (puVar5[0x1f] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_03 != 0);
      }
      puVar6 = puStack_78;
      puVar8 = puStack_80;
      if (puStack_78 != (undefined8 *)0x0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_04 != 0);
      }
      lVar10 = lStack_68;
      lVar11 = lStack_70;
      if (lStack_68 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_05 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_b0,puVar5 + 0x17);
      func_0x00010b177d00();
      puVar5[0x12] = extraout_x9_01;
      puVar5[0x11] = extraout_x8_05;
      plVar7 = (long *)0x48;
      __Znwm();
      lVar2 = lStack_e0;
      lStack_e0 = 0;
      plVar7[1] = lVar9;
      *plVar7 = lVar2;
      plVar7[3] = (long)puVar6;
      plVar7[2] = (long)puVar8;
      plVar7[5] = lVar10;
      plVar7[4] = lVar11;
      plVar7[7] = lStack_a8;
      plVar7[6] = lStack_b0;
      plVar7[8] = lStack_a0;
      lStack_a8 = 0;
      lStack_a0 = 0;
      lStack_b0 = 0;
      puVar5[0x13] = plVar7;
      func_0x00010b177654(auStack_90);
      func_0x00010b177648();
      FUN_10b12878c(auStack_90);
      func_0x00010b175848(*(undefined8 *)puVar5[0x12]);
      func_0x00010b15321c(&lStack_e0);
      func_0x00010b1257f8(&puStack_80);
      func_0x000107c2bdf4(&lStack_70);
      func_0x00010b176a10();
      lVar11 = 3;
    }
    func_0x00010b1776d0();
    func_0x00010b176250();
    uVar4 = (int)lVar11 == 3;
    if ((bool)uVar4) {
      func_0x00010b175654();
      *(undefined1 *)(puVar5 + 0x22) = extraout_w8;
      func_0x00010b175904();
      if ((bool)uVar4) {
        func_0x00010b177588();
        func_0x00010b177570();
        func_0x00010b175304();
        lStack_e0 = lVar11;
        __ZNSt3__15mutex4lockEv(lVar11 + 0x48);
        if (*(char *)(lVar11 + 0x10) == '\x01') {
          func_0x00010b177c84();
          lVar9 = lStack_e0;
          if (param_2 != (undefined8 *)0x0) {
            do {
              func_0x00010b1748f0();
            } while (extraout_w11_05 != 0);
            lVar9 = lStack_e0;
            if (extraout_x9_02 == 0) {
              func_0x00010b174874();
              func_0x00010b1751c0();
              lVar9 = lStack_e0;
            }
          }
        }
        else {
          func_0x00010b17693c(puVar5[7]);
          lVar9 = lVar11;
        }
        lVar10 = *(long *)(lVar9 + 0x90);
        *(undefined8 *)(lVar9 + 0x90) = 0;
        __ZNSt3__15mutex6unlockEv(lVar11 + 0x48);
        if (lVar10 == 0) {
          __ZNSt3__118condition_variable10notify_allEv(lVar9 + 0x18);
        }
        else {
          func_0x00010b175150();
          func_0x00010b17555c();
          func_0x00010b1748a8();
        }
        if (unaff_x22 != 0) {
          do {
            func_0x00010b1748f0();
          } while (extraout_w11_06 != 0);
          if (extraout_x9_03 == 0) {
            func_0x00010b174874();
            func_0x00010b1751c0();
          }
        }
      }
      else {
        func_0x00010b177568(&lStack_e0);
        FUN_10b160494(puVar12,&lStack_e0);
        func_0x00010b175d64();
      }
    }
    FUN_10b16052c(puVar12);
    func_0x00010b176a80();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b1531f0; end: 10b153253;  */

long FUN_10b1531f0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4();
  func_0x00010b125888();
  func_0x00010b1257d4(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b153254; end: 10b153bb3;  */

void FUN_10b153254(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ****ppppuVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined ****ppppuVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar15;
  undefined **ppuVar16;
  undefined8 extraout_x9;
  undefined8 ***extraout_x9_00;
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
  int extraout_w11;
  undefined8 *puVar17;
  long unaff_x20;
  undefined ***pppuVar18;
  undefined8 ***pppuVar19;
  undefined ****ppppuVar20;
  undefined8 unaff_x30;
  undefined8 uVar21;
  undefined8 in_register_00005008;
  undefined8 uVar22;
  undefined1 uStack_171;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined ***pppuStack_160;
  undefined8 *puStack_158;
  undefined8 ***pppuStack_150;
  undefined ****ppppuStack_148;
  undefined ***pppuStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined8 uStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined ***pppuStack_e0;
  undefined8 *puStack_d8;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_98;
  undefined ****ppppuStack_90;
  undefined ***pppuStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  lVar8 = param_2;
  func_0x00010b1749f4();
  puVar17 = (undefined8 *)(lVar8 + 8);
  *puVar17 = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  uStack_70 = extraout_x8;
  func_0x00010b177bc8(&PTR_FUN_110cbf278);
  *(undefined8 *)(unaff_x20 + 0x20) = in_register_00005008;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  lVar15 = param_4[1];
  uVar21 = *param_4;
  *(undefined8 *)(param_2 + 0x30) = param_4[1];
  *(undefined8 *)(param_2 + 0x28) = uVar21;
  if (lVar15 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  lVar15 = param_5[1];
  uVar21 = *param_5;
  *(undefined8 *)(param_2 + 0x40) = param_5[1];
  *(undefined8 *)(param_2 + 0x38) = uVar21;
  if (lVar15 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b1fe814(param_2 + 0x48);
  pppuStack_150 = (undefined8 ***)CONCAT44(pppuStack_150._4_4_,3);
  func_0x000107c31444();
  func_0x000107c2be24(param_2 + 0x58,&UNK_10f730830,&pppuStack_150,lVar8);
  pppuStack_98 = (undefined ***)&UNK_10f7309cb;
  ppppuStack_90 = (undefined ****)0x25;
  pppuStack_88 = (undefined ***)0x0;
  puStack_78 = (undefined **)0x0;
  FUN_10b1421f8(&pppuStack_98);
  pppuStack_b0 = (undefined ***)0x0;
  pppuStack_a8 = (undefined ***)0x0;
  puStack_c0 = (undefined *)0x0;
  uStack_b8 = 0;
  FUN_10b1209bc(&pppuStack_150,param_7,&puStack_c0);
  FUN_10b1209e8(&pppuStack_b0,&pppuStack_150);
  func_0x00010b1762fc();
  ppuVar16 = &puStack_c0;
  FUN_10b120a3c();
  func_0x00010b1760ac();
  ppuVar16[4] = (undefined *)0x0;
  ppuVar16[1] = (undefined *)0x0;
  *ppuVar16 = (undefined *)0x0;
  ppuVar16[3] = (undefined *)0x0;
  ppuVar16[2] = (undefined *)0x0;
  *ppuVar16 = (undefined *)&PTR_FUN_110cbf460;
  puVar9 = (undefined8 *)0xd0;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110cbf480;
  uVar21 = 0;
  uVar22 = 0;
  pppuVar19 = (undefined8 ***)(puVar9 + 3);
  puVar9[4] = 0;
  *pppuVar19 = (undefined8 **)0x0;
  puVar10 = puVar9;
  func_0x00010b176418();
  func_0x00010b175e3c();
  puVar10[9] = 0;
  puVar10[10] = extraout_x9;
  puVar10[0xc] = uVar22;
  puVar10[0xb] = uVar21;
  puVar10[0xe] = uVar22;
  puVar10[0xd] = uVar21;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0x32aaaba7;
  func_0x00010b177008();
  ppuVar16[1] = (undefined *)pppuVar19;
  ppuVar16[2] = (undefined *)puVar10;
  ppuVar16[3] = (undefined *)pppuVar19;
  ppuVar16[4] = (undefined *)puVar10;
  do {
    func_0x00010b17493c();
  } while (extraout_w10_02 != 0);
  *ppuVar16 = (undefined *)&PTR_FUN_110cbf418;
  pppuStack_150 = pppuVar19;
  ppppuStack_148 = (undefined ****)puVar9;
  do {
    func_0x00010b17493c();
  } while (extraout_w10_03 != 0);
  do {
    func_0x00010b17493c();
  } while (extraout_w10_04 != 0);
  pppuStack_e0 = (undefined ***)pppuVar19;
  puStack_d8 = puVar9;
  func_0x00010b1777d0();
  puStack_138 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  ppppuStack_148 = ppppuStack_90;
  pppuStack_150 = (undefined8 ***)pppuStack_98;
  pppuStack_140 = pppuStack_88;
  puStack_130 = puStack_78;
  pppuStack_f0 = (undefined ***)0x0;
  lStack_e8 = 0;
  pppuStack_100 = pppuStack_b0 + 9;
  lStack_f8 = CONCAT71(lStack_f8._1_7_,1);
  ppuStack_128 = ppuVar16;
  __ZNSt3__15mutex4lockEv();
  pppuVar18 = pppuStack_b0;
  FUN_10b120a68();
  if ((int)pppuVar18 == 0) {
    func_0x00010b1773a8();
    *pppuVar18 = &PTR_SUB_110cbf4d0;
    pppuVar18[2] = (undefined **)ppppuStack_148;
    pppuVar18[1] = (undefined **)pppuStack_150;
    pppuVar18[4] = (undefined **)puStack_138;
    pppuVar18[3] = (undefined **)pppuStack_140;
    ppuStack_128 = (undefined **)0x0;
    pppuVar18[5] = (undefined **)puStack_130;
    pppuVar18[6] = ppuVar16;
    ppuVar16 = pppuStack_b0[0x12];
    pppuStack_b0[0x12] = (undefined **)pppuVar18;
    if (ppuVar16 != (undefined **)0x0) {
      func_0x00010b174834();
    }
  }
  else {
    FUN_10b1209e8(&pppuStack_f0,&pppuStack_b0);
  }
  func_0x000107c2798c(&pppuStack_100);
  if (pppuStack_f0 != (undefined ***)0x0) {
    pppuStack_100 = pppuStack_f0;
    lStack_f8 = lStack_e8;
    if (lStack_e8 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_05 != 0);
    }
    FUN_10b160588(&pppuStack_150);
    FUN_10b120a3c(&pppuStack_100);
  }
  pppuStack_e0 = (undefined ***)0x0;
  puStack_d8 = (undefined8 *)0x0;
  pppuStack_160 = (undefined ***)pppuVar19;
  puStack_158 = puVar9;
  FUN_10b120a3c(&pppuStack_f0);
  ppuVar16 = ppuStack_128;
  ppuStack_128 = (undefined **)0x0;
  if (ppuVar16 != (undefined **)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b1609f4(&pppuStack_e0);
  ppppuVar11 = &pppuStack_b0;
  FUN_10b120a3c();
  func_0x00010b175850();
  ppppuVar20 = ppppuVar11 + 1;
  *ppppuVar20 = (undefined ***)0x0;
  ppppuVar11[2] = (undefined ***)0x0;
  *ppppuVar11 = (undefined ***)&PTR_DAT_110cbfe90;
  ppppuVar14 = ppppuVar11 + 3;
  _bzero(ppppuVar14,0x98);
  __ZNSt3__115recursive_mutexC1Ev(ppppuVar14);
  *(undefined1 *)(ppppuVar11 + 0xb) = 0;
  *(undefined1 *)(ppppuVar11 + 0x12) = 0;
  ppppuVar11[0x14] = (undefined ***)0x0;
  ppppuVar11[0x15] = (undefined ***)0x0;
  ppppuVar11[0x13] = (undefined ***)0x0;
  *(undefined *****)(param_2 + 0x68) = ppppuVar14;
  *(undefined *****)(param_2 + 0x70) = ppppuVar11;
  pppuStack_120 = ppppuVar14;
  pppuStack_118 = ppppuVar11;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
    if (bVar3) {
      *ppppuVar20 = (undefined ***)((long)*ppppuVar20 + 1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pppuStack_b0 = (undefined ***)0x0;
  pppuStack_a8 = (undefined ***)0x0;
  puStack_c0 = (undefined *)0x0;
  uStack_b8 = 0;
  FUN_10b160b04(&pppuStack_150,&pppuStack_160,&puStack_c0);
  FUN_10b160b30(&pppuStack_b0,&pppuStack_150);
  func_0x00010b1777d0();
  func_0x00010b1609f4(&puStack_c0);
  func_0x000107c27b48(&ppuStack_c8);
  func_0x000107c27b4c(&pppuStack_e0,ppuStack_c8);
  pppuVar18 = pppuStack_b0;
  pppuStack_140 = (undefined ***)ppuStack_c8;
  pppuStack_120 = (undefined8 ***)0x0;
  pppuStack_118 = (undefined8 ***)0x0;
  ppuStack_c8 = (undefined **)0x0;
  pppuStack_f0 = (undefined ***)0x0;
  lStack_e8 = 0;
  pppuStack_100 = pppuStack_b0 + 0xd;
  lStack_f8 = CONCAT71(lStack_f8._1_7_,1);
  pppuStack_150 = ppppuVar14;
  ppppuStack_148 = ppppuVar11;
  __ZNSt3__15mutex4lockEv();
  pppuVar12 = pppuVar18;
  FUN_10b168888();
  if ((int)pppuVar12 == 0) {
    func_0x00010b1751e0();
    pppuVar4 = pppuStack_140;
    *pppuVar12 = &PTR_FUN_110cbfee0;
    pppuVar12[2] = (undefined **)ppppuStack_148;
    pppuVar12[1] = (undefined **)pppuStack_150;
    pppuStack_150 = (undefined ****)0x0;
    ppppuStack_148 = (undefined ****)0x0;
    pppuStack_140 = (undefined ***)0x0;
    pppuVar12[3] = (undefined **)pppuVar4;
    ppuVar16 = pppuVar18[0x16];
    pppuVar18[0x16] = (undefined **)pppuVar12;
    if (ppuVar16 != (undefined **)0x0) {
      func_0x00010b174834();
    }
    pppuVar18 = (undefined ***)0x0;
  }
  else {
    FUN_10b160b30(&pppuStack_f0,&pppuStack_b0);
    pppuVar18 = pppuStack_f0;
  }
  func_0x000107c2798c(&pppuStack_100);
  if (pppuVar18 != (undefined ***)0x0) {
    lStack_f8 = lStack_e8;
    pppuStack_100 = pppuVar18;
    if (lStack_e8 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_06 != 0);
    }
    FUN_10b1688c0(&pppuStack_150,pppuVar18);
    func_0x00010b1609f4(&pppuStack_100);
  }
  uStack_108 = puStack_d8;
  pppuStack_110 = pppuStack_e0;
  pppuStack_e0 = (undefined ***)0x0;
  puStack_d8 = (undefined8 *)0x0;
  func_0x00010b1609f4(&pppuStack_f0);
  func_0x00010b168c30(&pppuStack_150);
  func_0x000107c27b58(&pppuStack_e0);
  ppuVar16 = ppuStack_c8;
  ppuStack_c8 = (undefined **)0x0;
  if (ppuVar16 != (undefined **)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b1609f4(&pppuStack_b0);
  func_0x00010b175238();
  func_0x00010b1610c4(&pppuStack_120);
  func_0x00010b175878();
  FUN_10b126734(param_2 + 0x78,param_8);
  ppuVar16 = &PTR_DAT_110cbf528;
  func_0x000107c2be18();
  if ((long)ppuVar16 < 1) {
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  else {
    ppuVar13 = ppuVar16;
    func_0x000107c31450();
    func_0x000106e54980(&pppuStack_98,1);
    pppuVar18 = pppuStack_88;
    pppuStack_88[2] = (undefined **)0x0;
    *pppuStack_88 = &PTR_DAT_11097ffd8;
    pppuStack_88[1] = (undefined **)0x0;
    func_0x000107c278b8(&pppuStack_150,&UNK_10f7309f1);
    func_0x000107c31438(pppuVar18 + 3,&pppuStack_150,3,ppuVar13,0);
    func_0x00010b1777c8();
    pppuStack_a8 = pppuStack_88;
    pppuStack_88 = (undefined ***)0x0;
    pppuStack_b0 = pppuStack_a8 + 3;
    ppppuVar14 = &pppuStack_98;
    func_0x000106e54adc();
    pppuVar12 = pppuStack_a8;
    pppuVar18 = pppuStack_b0;
    func_0x00010b175850();
    func_0x00010b176d68();
    *ppppuVar14 = (undefined ***)&PTR_DAT_110cbf550;
    ppppuVar14[5] = pppuVar18;
    ppppuVar14[6] = pppuVar12;
    if (pppuVar12 != (undefined ***)0x0) {
      do {
        func_0x00010b1749b8();
      } while (extraout_w11 != 0);
    }
    *(int *)(ppppuVar14 + 7) = (int)ppuVar16;
    ppppuVar14[8] = (undefined ***)0x32aaaba7;
    ppppuVar14[10] = (undefined ***)0x0;
    ppppuVar14[9] = (undefined ***)0x0;
    ppppuVar14[0xc] = (undefined ***)0x0;
    ppppuVar14[0xb] = (undefined ***)0x0;
    func_0x00010b17508c();
    *(undefined1 *)(pppuVar18[3] + 0x22) = 0;
    *(undefined8 ****)(param_2 + 0x88) = extraout_x9_00;
    *(undefined *****)(param_2 + 0x90) = ppppuVar14;
    pppuStack_98 = (undefined ***)extraout_x9_00;
    ppppuStack_90 = ppppuVar14;
    do {
      func_0x00010b17493c();
    } while (extraout_w10_07 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_08 != 0);
    pppuStack_150 = (undefined ****)0x0;
    ppppuStack_148 = (undefined ****)0x0;
    ppppuVar14[3] = (undefined ***)(ppppuVar14 + 3);
    ppppuVar14[4] = (undefined ***)ppppuVar14;
    FUN_10b160de8(&pppuStack_150);
    func_0x00010b149c94(&pppuStack_98);
    func_0x000106e50c54(&pppuStack_b0);
  }
  uVar5 = 0x78;
  func_0x000107c2be10();
  *(undefined1 *)(param_2 + 0x98) = uVar5;
  bVar6 = 0;
  func_0x000107c2be10();
  *(byte *)(param_2 + 0x99) = bVar6 ^ 1;
  uVar5 = 0x90;
  func_0x000107c2be10();
  *(undefined8 *)(param_2 + 0xa0) = 0x32aaaba7;
  *(undefined1 *)(param_2 + 0x9a) = uVar5;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined4 *)(param_2 + 0x100) = 0x3f800000;
  ppuVar16 = &PTR_DAT_110cbf5a8;
  func_0x000107c2be18();
  *(undefined **)(param_2 + 0x108) = &UNK_10dd5b8b0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined ***)(param_2 + 0x148) = ppuVar16;
  FUN_10b153bb4(param_2 + 0x150);
  *(undefined1 *)(param_2 + 0x160) = 0;
  func_0x000107c30194(&pppuStack_b0,&UNK_10f730a99,0x1c,&UNK_10f730ab6,2);
  if (pppuStack_b0 == pppuStack_a8) {
    pppuStack_150 = (undefined8 ***)((ulong)pppuStack_150 & 0xffffffffffffff00);
    puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffffffffff00);
  }
  else {
    uStack_80 = 0;
    ppppuStack_90 = (undefined ****)0x0;
    pppuStack_88 = (undefined ***)0x0;
    pppuStack_98 = (undefined ***)&PTR_FUN_110ccb498;
    ppppuVar14 = &pppuStack_98;
    func_0x000107c3034c(ppppuVar14,pppuStack_b0,(int)pppuStack_a8 - (int)pppuStack_b0);
    bVar3 = ((ulong)ppppuVar14 & 1) == 0;
    if (bVar3) {
      pppuStack_150 = (undefined8 ***)((ulong)pppuStack_150 & 0xffffffffffffff00);
    }
    else {
      FUN_10b160e18(&pppuStack_150,&pppuStack_98);
    }
    puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,!bVar3);
    func_0x00010b1773fc();
  }
  func_0x000107c27914(&pppuStack_b0);
  uStack_80 = 0;
  ppppuStack_90 = (undefined ****)0x0;
  pppuStack_88 = (undefined ***)0x0;
  pppuStack_98 = (undefined ***)&PTR_FUN_110ccb498;
  uVar5 = (char)puStack_130 == '\0';
  ppppuVar1 = &pppuStack_150;
  if ((bool)uVar5) {
    ppppuVar1 = (undefined8 ****)&pppuStack_98;
  }
  FUN_10b160e18(param_2 + 0x168,ppppuVar1);
  func_0x00010b1773fc();
  FUN_10b160e84(&pppuStack_150);
  uVar7 = 0x20;
  func_0x000107c2be10();
  *(undefined1 *)(param_2 + 0x188) = uVar7;
  uVar7 = 0x38;
  func_0x000107c2be10();
  *(undefined1 *)(param_2 + 0x189) = uVar7;
  uVar7 = 0xc0;
  func_0x000107c2be10();
  *(undefined1 *)(param_2 + 0x18a) = uVar7;
  func_0x000107c350b0(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010b176464();
    func_0x000107c2798c();
    func_0x00010b1609f4(&pppuStack_f0);
    func_0x00010b168c30(&pppuStack_150);
    func_0x000107c27b58(&pppuStack_e0);
    ppuVar16 = ppuStack_c8;
    ppuStack_c8 = (undefined **)0x0;
    if (ppuVar16 != (undefined **)0x0) {
      func_0x00010b174910();
    }
    func_0x00010b1609f4(&pppuStack_b0);
    func_0x00010b1610c4(&pppuStack_120);
    func_0x00010b1610c4(param_2 + 0x68);
    func_0x00010b175878();
    func_0x000107c27c20(param_2 + 0x58);
    func_0x000106e50c54(param_2 + 0x48);
    func_0x00010b1776d0();
    func_0x0001052a1398((undefined8 *)(param_2 + 0x28));
    func_0x00010b12487c((undefined8 *)(unaff_x20 + 0x18));
    func_0x00010b129550(puVar17);
    __Unwind_Resume(&UNK_110ccb488);
    pcStack_168 = FUN_10b153bb4;
    puStack_170 = &stack0xfffffffffffffff0;
    FUN_10b168c50(&uStack_171);
    return;
  }
  func_0x00010b177f58(param_2,unaff_x30);
  return;
}



/* Entry: 10b153bb4; end: 10b153bcf;  */

void FUN_10b153bb4(void)

{
  undefined1 uStack_11;
  
  FUN_10b168c50(&uStack_11);
  return;
}



/* Entry: 10b153bd0; end: 10b153d83;  */

undefined8 * FUN_10b153bd0(undefined8 *param_1,code **param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 extraout_x8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_48;
  
  puVar3 = param_1;
  func_0x00010b1749f4();
  iVar6 = (int)param_2;
  *puVar3 = &PTR_FUN_110cbf278;
  uStack_48 = extraout_x8;
  if ((*(byte *)(puVar3 + 0x2c) & 1) == 0) {
    iVar2 = (int)param_1 + 0x68;
    FUN_10b153d84();
    iVar6 = (int)param_2;
    if (iVar2 != 0) {
      plVar4 = param_1 + 0xd;
      func_0x00010b153db0();
      while( true ) {
        iVar6 = (int)param_2;
        plVar5 = *(long **)(*plVar4 + 0x18);
        (**(code **)(*plVar5 + 0x58))();
        in_ZR = (int)plVar5 == 1;
        if ((int)plVar5 < 1) break;
        __ZNSt3__17promiseIvEC1Ev(&uStack_c0);
        func_0x00010b177774();
        uStack_98 = uStack_c0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        pcStack_a8 = FUN_10b168dd0;
        ppuStack_a0 = &PTR_DAT_110cbff20;
        func_0x00010b175150();
        param_2 = &pcStack_a8;
        func_0x00010b17555c();
        func_0x00010b174ed4(ppuStack_a0);
        func_0x00010b1766d8();
        __ZNSt3__117__assoc_sub_state4waitEv(uStack_c8);
        func_0x00010b1766b8();
        func_0x00010b176c30();
      }
    }
  }
  FUN_10b2520a8(param_1 + 0x2d);
  FUN_10b168d78(param_1 + 0x2a);
  FUN_10b160ea4(param_1 + 0x21);
  func_0x00010b168d9c(param_1 + 0x1c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x14);
  func_0x00010b149c94(param_1 + 0x11);
  func_0x00010b12046c(param_1 + 0xf);
  func_0x00010b1610c4(param_1 + 0xd);
  func_0x000107c27c20(param_1 + 0xb);
  func_0x000106e50c54(param_1 + 9);
  func_0x00010b1257f8(param_1 + 7);
  func_0x0001052a1398(param_1 + 5);
  func_0x00010b12487c(param_1 + 3);
  plVar4 = param_1 + 1;
  func_0x00010b129550();
  func_0x000107c350b0(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    func_0x00010b174f0c();
  }
  func_0x00010b1750e8();
  func_0x00010b176bec();
  func_0x00010b1751f0();
  bVar1 = *(byte *)(*plVar4 + 0x78);
  func_0x00010b175068();
  return (undefined8 *)(ulong)bVar1;
}



/* Entry: 10b153d84; end: 10b153dd3;  */

undefined1 FUN_10b153d84(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b176bec();
  func_0x00010b1751f0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x78);
  func_0x00010b175068();
  return uVar1;
}



/* Entry: 10b153dd4; end: 10b153dd7;  */

undefined8 * FUN_10b153dd4(undefined8 *param_1,code **param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 extraout_x8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_48;
  
  puVar3 = param_1;
  func_0x00010b1749f4();
  iVar6 = (int)param_2;
  *puVar3 = &PTR_FUN_110cbf278;
  uStack_48 = extraout_x8;
  if ((*(byte *)(puVar3 + 0x2c) & 1) == 0) {
    iVar2 = (int)param_1 + 0x68;
    FUN_10b153d84();
    iVar6 = (int)param_2;
    if (iVar2 != 0) {
      plVar4 = param_1 + 0xd;
      func_0x00010b153db0();
      while( true ) {
        iVar6 = (int)param_2;
        plVar5 = *(long **)(*plVar4 + 0x18);
        (**(code **)(*plVar5 + 0x58))();
        in_ZR = (int)plVar5 == 1;
        if ((int)plVar5 < 1) break;
        __ZNSt3__17promiseIvEC1Ev(&uStack_c0);
        func_0x00010b177774();
        uStack_98 = uStack_c0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        pcStack_a8 = FUN_10b168dd0;
        ppuStack_a0 = &PTR_DAT_110cbff20;
        func_0x00010b175150();
        param_2 = &pcStack_a8;
        func_0x00010b17555c();
        func_0x00010b174ed4(ppuStack_a0);
        func_0x00010b1766d8();
        __ZNSt3__117__assoc_sub_state4waitEv(uStack_c8);
        func_0x00010b1766b8();
        func_0x00010b176c30();
      }
    }
  }
  FUN_10b2520a8(param_1 + 0x2d);
  FUN_10b168d78(param_1 + 0x2a);
  FUN_10b160ea4(param_1 + 0x21);
  func_0x00010b168d9c(param_1 + 0x1c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x14);
  func_0x00010b149c94(param_1 + 0x11);
  func_0x00010b12046c(param_1 + 0xf);
  func_0x00010b1610c4(param_1 + 0xd);
  func_0x000107c27c20(param_1 + 0xb);
  func_0x000106e50c54(param_1 + 9);
  func_0x00010b1257f8(param_1 + 7);
  func_0x0001052a1398(param_1 + 5);
  func_0x00010b12487c(param_1 + 3);
  plVar4 = param_1 + 1;
  func_0x00010b129550();
  func_0x000107c350b0(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    func_0x00010b174f0c();
  }
  func_0x00010b1750e8();
  func_0x00010b176bec();
  func_0x00010b1751f0();
  bVar1 = *(byte *)(*plVar4 + 0x78);
  func_0x00010b175068();
  return (undefined8 *)(ulong)bVar1;
}



/* Entry: 10b153dd8; end: 10b153deb;  */

void FUN_10b153dd8(void)

{
  FUN_10b153bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b153dec; end: 10b154f23;  */

void FUN_10b153dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong **ppuVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long *plVar17;
  long *extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  undefined8 extraout_x8_14;
  long extraout_x8_15;
  ulong extraout_x8_16;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  ulong uVar18;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  long *plVar19;
  undefined8 extraout_x9_09;
  long extraout_x9_10;
  ulong extraout_x9_11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  long extraout_x10;
  long extraout_x10_00;
  long *extraout_x10_01;
  undefined8 extraout_x10_02;
  long extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long *plVar20;
  long *plVar21;
  long *extraout_x11;
  long *extraout_x11_00;
  ulong *extraout_x11_01;
  int extraout_w12;
  long *extraout_x12;
  long *plVar22;
  long *plVar23;
  ulong *puVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined4 uStack_1f0;
  ulong *puStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1b4;
  undefined1 uStack_1b0;
  char cStack_1a8;
  byte bStack_f8;
  undefined **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_28;
  undefined1 uStack_20;
  long lStack_18;
  long lStack_10;
  
  func_0x00010b176cc0();
  puVar10 = (undefined8 *)0x478;
  __Znwm();
  plVar1 = puVar10 + 0x4b;
  *puVar10 = FUN_10b16dec8;
  puVar10[1] = FUN_10b16ee60;
  puVar31 = puVar10 + 0x69;
  puVar10[0x8c] = param_1;
  func_0x00010b176f6c();
  FUN_10b141b30();
  FUN_10b0fafd4(puVar10 + 0x3c,param_3);
  *(undefined1 *)(puVar10 + 0x69) = 0;
  *(undefined1 *)(puVar10 + 0x6c) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar27 = *param_4;
    puVar10[0x6a] = param_4[1];
    *puVar31 = uVar27;
    puVar10[0x6b] = param_4[2];
    func_0x00010b175988();
    *(undefined1 *)(puVar10 + 0x6c) = 1;
  }
  *(undefined1 *)(puVar10 + 0x6d) = 0;
  *(undefined1 *)(puVar10 + 0x70) = 0;
  uVar7 = (int)(*(byte *)(param_5 + 3) - 1) < 0;
  uVar8 = *(byte *)(param_5 + 3) == 1;
  if ((bool)uVar8) {
    uVar27 = *param_5;
    puVar10[0x6e] = param_5[1];
    puVar10[0x6d] = uVar27;
    puVar10[0x6f] = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(puVar10 + 0x70) = 1;
  }
  FUN_10b1612a8(puVar10 + 2);
  FUN_10b154f24(extraout_x8,puVar10 + 2);
  func_0x000107c316c8(puVar10 + 0x75,&UNK_10f73084c);
  puVar24 = puVar10 + 0x81;
  FUN_10b168df0(puVar24,param_1 + 8);
  puVar32 = puVar10 + 0x58;
  lVar16 = *plVar1;
  if ((lVar16 == 0) && (lVar16 = 0, puVar10[0x54] != 0)) {
    uVar29 = param_1 + 0x68;
    FUN_10b153d84();
    if ((uVar29 & 1) == 0) {
      *(undefined1 *)((long)puVar10 + 0x474) = 0;
      lVar16 = puVar10[0x8c];
      uVar27 = *(undefined8 *)(lVar16 + 0x68);
      func_0x00010b176258();
      lVar16 = *(long *)(lVar16 + 0x68);
      if ((*(byte *)(lVar16 + 0x78) & 1) != 0) {
        func_0x00010b175504();
        func_0x00010b174f14(*puVar10);
        return;
      }
      puVar31 = *(undefined8 **)(lVar16 + 0x88);
      uVar7 = *(undefined8 **)(lVar16 + 0x90) <= puVar31;
      if ((bool)uVar7) {
        lVar15 = *(long *)(lVar16 + 0x80);
        func_0x00010b175cfc();
        if (extraout_x10_00 != 0) {
          func_0x00010552fc6c();
          goto LAB_10b154c70;
        }
        func_0x00010b174770(extraout_x8_05 - lVar15);
        uVar29 = extraout_x9_03;
        if ((bool)uVar7) {
          uVar29 = extraout_x8_06;
        }
        if (uVar29 != 0) {
          if (uVar29 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b154c70;
          }
          __Znwm(uVar29 << 3);
        }
        func_0x00010b174cc0();
        *(long **)(lVar16 + 0x80) = plVar1;
        *(undefined8 **)(lVar16 + 0x88) = puVar31;
        *(ulong *)(lVar16 + 0x90) = uVar29;
        if (lVar15 != 0) {
          func_0x00010b177618();
        }
      }
      else {
        *puVar31 = puVar10;
        puVar31 = puVar31 + 1;
      }
      *(undefined8 **)(lVar16 + 0x88) = puVar31;
LAB_10b154c0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar27);
      return;
    }
    func_0x00010b17527c(puVar10[0x8c]);
    func_0x00010b17791c();
    lVar16 = extraout_x8_00;
    if (extraout_x9 != 0) {
      do {
        func_0x00010b1749b8();
        lVar16 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    if (lVar16 != 0) {
      func_0x00010b1778e0();
      lVar16 = extraout_x9_00;
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010b174af4();
          lVar16 = extraout_x9_01;
        } while (extraout_w11_00 != 0);
      }
      puVar10[0x8d] = *(undefined8 *)(lVar16 + 0x10);
      func_0x00010b176cb8();
      if ((uVar29 & 1) == 0) {
        *(undefined1 *)((long)puVar10 + 0x474) = 1;
        lVar16 = puVar10[0x8d];
        uVar27 = *(undefined8 *)(lVar16 + 0x100);
        func_0x00010b176258();
        lVar16 = *(long *)(lVar16 + 0x100);
        if ((*(byte *)(lVar16 + 0x78) & 1) != 0) {
          func_0x00010b175504();
          func_0x00010b174f14(*puVar10);
          return;
        }
        puVar31 = *(undefined8 **)(lVar16 + 0x88);
        bVar9 = *(undefined8 **)(lVar16 + 0x90) <= puVar31;
        if (bVar9) {
          lVar15 = *(long *)(lVar16 + 0x80);
          lVar28 = (long)puVar31 - lVar15 >> 3;
          if (lVar28 + 1U >> 0x3d != 0) {
            func_0x00010552fc6c();
            goto LAB_10b154c70;
          }
          func_0x00010b174770((long)*(undefined8 **)(lVar16 + 0x90) - lVar15);
          uVar29 = extraout_x9_08;
          if (bVar9) {
            uVar29 = extraout_x8_11;
          }
          if (uVar29 == 0) {
            lVar13 = 0;
          }
          else {
            if (uVar29 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b154c70;
            }
            lVar13 = uVar29 << 3;
            __Znwm();
          }
          puVar31 = (undefined8 *)(lVar13 + ((long)puVar31 - lVar15));
          puVar32 = puVar31 + 1;
          *puVar31 = puVar10;
          func_0x00010b174e7c();
          *(undefined8 **)(lVar16 + 0x80) = puVar31 + -lVar28;
          *(undefined8 **)(lVar16 + 0x88) = puVar32;
          *(ulong *)(lVar16 + 0x90) = lVar13 + uVar29 * 8;
          if (lVar15 != 0) {
            func_0x00010b175b30();
          }
        }
        else {
          puVar32 = puVar31 + 1;
          *puVar31 = puVar10;
        }
        *(undefined8 **)(lVar16 + 0x88) = puVar32;
        goto LAB_10b154c0c;
      }
      func_0x00010b176cb0(puVar10[0x8d]);
      func_0x00010b1257d4(puVar32);
    }
    lVar16 = puVar10[0x8c];
    func_0x00010b175f94();
    plVar23 = *(long **)(lVar16 + 0x28);
    func_0x000107c278b8(&puStack_1e0,&UNK_10f730878);
    (**(code **)(*plVar23 + 0x28))(&uStack_200,plVar23,puVar10 + 0x54,&puStack_1e0);
    func_0x00010b176800();
    if (uStack_200 != 0) {
      func_0x00010b175428();
      func_0x00010b176314();
      func_0x00010b141ad4(plVar1,&puStack_1e0);
      func_0x0001052b41d0(&puStack_1e0);
      func_0x00010b176858(uStack_200);
      func_0x00010b176314();
      if (cStack_1a8 == '\x01') {
        *(undefined4 *)(puVar10 + 0x4d) = uStack_1b4;
        *(undefined1 *)((long)puVar10 + 0x26c) = uStack_1b0;
      }
      func_0x0001052b41f8(&puStack_1e0);
      func_0x00010b1763cc(uStack_200);
      func_0x00010b176314();
      uVar7 = (int)(bStack_f8 - 1) < 0;
      uVar8 = bStack_f8 == 1;
      if ((bool)uVar8) {
        *(undefined4 *)(puVar10 + 0x4e) = uStack_1d8._4_4_;
        *(undefined1 *)((long)puVar10 + 0x274) = 1;
      }
      func_0x0001052b4218(&puStack_1e0);
    }
    puVar24 = &uStack_200;
    func_0x0001052b4284();
    lVar16 = *plVar1;
    if (lVar16 != 0) goto LAB_10b153f00;
    func_0x00010b1759c8();
LAB_10b153fcc:
    func_0x00010b175794();
    func_0x00010b17579c();
  }
  else {
LAB_10b153f00:
    puVar10[0x83] = lVar16;
    puVar10[0x84] = puVar10[0x4c];
    if (puVar10[0x4c] != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b17716c();
    if ((*(byte *)(puVar10 + 0x74) & 1) == 0) {
      func_0x00010b1759c8();
LAB_10b153fc4:
      func_0x00010b175760();
      func_0x00010b175770();
      goto LAB_10b153fcc;
    }
    plVar23 = puVar10 + 0x78;
    *(undefined1 *)(puVar10 + 0x78) = 0;
    *(undefined1 *)(puVar10 + 0x7a) = 0;
    func_0x00010b175608(puVar10[0x8c]);
    if (((ulong)puVar24 & 1) == 0) {
      *(undefined1 *)((long)puVar10 + 0x474) = 2;
      lVar16 = puVar10[0x8c];
      func_0x00010b176258();
      lVar16 = *(long *)(lVar16 + 0x68);
      if ((*(byte *)(lVar16 + 0x78) & 1) != 0) {
        func_0x00010b175504();
        func_0x00010b174f14(*puVar10);
        return;
      }
      puVar31 = *(undefined8 **)(lVar16 + 0x88);
      uVar7 = *(undefined8 **)(lVar16 + 0x90) <= puVar31;
      if ((bool)uVar7) {
        lVar15 = *(long *)(lVar16 + 0x80);
        func_0x00010b175cfc();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
          goto LAB_10b154c70;
        }
        func_0x00010b174770(extraout_x8_03 - lVar15);
        uVar29 = extraout_x9_02;
        if ((bool)uVar7) {
          uVar29 = extraout_x8_04;
        }
        if (uVar29 != 0) {
          if (uVar29 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b154c70;
          }
          __Znwm(uVar29 << 3);
        }
        func_0x00010b174cc0();
        *(long **)(lVar16 + 0x80) = plVar1;
        *(undefined8 **)(lVar16 + 0x88) = puVar31;
        *(ulong *)(lVar16 + 0x90) = uVar29;
        if (lVar15 != 0) {
          func_0x00010b177618();
        }
      }
      else {
        *puVar31 = puVar10;
        puVar31 = puVar31 + 1;
      }
      *(undefined8 **)(lVar16 + 0x88) = puVar31;
      goto LAB_10b154388;
    }
    func_0x00010b17527c(puVar10[0x8c]);
    FUN_10b154f80(puVar10 + 0x85,puVar10[0x8c]);
    FUN_10b154ff8(&puStack_1e0,puVar10[0x8c],puVar10 + 0x71);
    uStack_200 = CONCAT44(uStack_200._4_4_,1);
    uStack_1f0 = 2;
    ppuVar11 = &puStack_1e0;
    FUN_10b155140(ppuVar11,&uStack_200);
    func_0x00010b176538();
    if ((int)ppuVar11 == 0) {
LAB_10b1542b8:
      plVar22 = (long *)0x0;
    }
    else {
      uStack_200 = uStack_200 & 0xffffffff00000000;
      uStack_1f0 = 2;
      uVar7 = (int)lStack_1d0 + -2 < 0;
      if ((int)lStack_1d0 == 2) {
        iVar4 = (int)puStack_1e0;
        func_0x00010b176538();
        if (iVar4 != 0) goto LAB_10b154248;
        func_0x00010b1759c8();
        plVar22 = (long *)0x3;
      }
      else {
        func_0x00010b176538();
LAB_10b154248:
        FUN_10b155198(&uStack_200,puVar10[0x8c],*(undefined4 *)(puVar10 + 0x3c),&puStack_1e0);
        uVar29 = uStack_200;
        if (uStack_200 == 0) {
          plVar22 = (long *)0x0;
        }
        else {
          FUN_10b168f60(puVar10 + 7,&uStack_200);
          plVar22 = (long *)0x3;
        }
        FUN_10b144044(&uStack_200);
        if (uVar29 == 0) goto LAB_10b1542b8;
      }
    }
    func_0x00010b1757b4();
    if ((int)plVar22 == 0) {
      lVar16 = puVar10[0x8c];
      plVar19 = (long *)(lVar16 + 0xf8);
      func_0x000107c278c4(plVar19,puVar10 + 0x71);
      plVar25 = *(long **)(lVar16 + 0xe8);
      plVar12 = plVar19;
      if (plVar25 != (long *)0x0) {
        uVar29 = (long)plVar25 - 1;
        if (((ulong)plVar25 & uVar29) == 0) {
          plVar22 = (long *)(uVar29 & (ulong)plVar19);
          uVar7 = false;
        }
        else {
          uVar7 = (long)plVar19 - (long)plVar25 < 0;
          plVar22 = plVar19;
          if (plVar25 <= plVar19) {
            uVar18 = 0;
            if (plVar25 != (long *)0x0) {
              uVar18 = (ulong)plVar19 / (ulong)plVar25;
            }
            plVar22 = (long *)((long)plVar19 - uVar18 * (long)plVar25);
          }
        }
        plVar26 = *(long **)(*(long *)(lVar16 + 0xe0) + (long)plVar22 * 8);
        if (plVar26 != (long *)0x0) {
          do {
            while( true ) {
              plVar26 = (long *)*plVar26;
              if (plVar26 == (long *)0x0) goto LAB_10b154408;
              plVar17 = (long *)plVar26[1];
              uVar7 = (long)plVar17 - (long)plVar19 < 0;
              if (plVar17 != plVar19) break;
              plVar12 = plVar26 + 2;
              func_0x000107c278d0(plVar12,puVar10 + 0x71);
              if (((ulong)plVar12 & 1) != 0) goto LAB_10b1546d4;
            }
            if (((ulong)plVar25 & uVar29) == 0) {
              plVar17 = (long *)((ulong)plVar17 & uVar29);
            }
            else if (plVar25 <= plVar17) {
              uVar18 = 0;
              if (plVar25 != (long *)0x0) {
                uVar18 = (ulong)plVar17 / (ulong)plVar25;
              }
              plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar25);
            }
            uVar7 = (long)plVar17 - (long)plVar22 < 0;
          } while (plVar17 == plVar22);
        }
      }
LAB_10b154408:
      lVar15 = puVar10[0x8c];
      func_0x00010b176b34();
      plVar26 = (long *)(lVar15 + 0xf0);
      puVar10[0xb] = plVar12;
      puVar10[0xc] = plVar26;
      puVar10[0xd] = 0;
      plVar17 = plVar12 + 2;
      *plVar12 = 0;
      plVar12[1] = (long)plVar19;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (plVar17,puVar10 + 0x71);
      lVar15 = puVar10[0x8c];
      *(undefined1 *)(plVar12 + 5) = 0;
      *(undefined1 *)(plVar12 + 7) = 0;
      *(undefined1 *)(puVar10 + 0xd) = 1;
      func_0x00010b177b10(*(undefined8 *)(lVar16 + 0xf8));
      if ((plVar25 == (long *)0x0) || (func_0x00010b177e98(), (bool)uVar7)) {
        bVar6 = (long *)0x2 < plVar25;
        bVar9 = plVar25 == (long *)0x3;
        func_0x00010b17519c((long)plVar25 << 1);
        plVar22 = extraout_x8_07;
        if (!bVar6 || bVar9) {
          plVar22 = extraout_x9_04;
        }
        if ((long)plVar22 - 1U == 0) {
          plVar22 = (long *)0x2;
        }
        else if (((ulong)plVar22 & (long)plVar22 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar17 = plVar22;
        }
        plVar25 = *(long **)(lVar16 + 0xe8);
        if (plVar25 < plVar22) {
LAB_10b1544b0:
          if ((ulong)plVar22 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b154c70;
          }
          lVar15 = (long)plVar22 << 3;
          __Znwm(lVar15);
          FUN_10b168f84(lVar16 + 0xe0,lVar15);
          plVar25 = (long *)0x0;
          *(long **)(lVar16 + 0xe8) = plVar22;
          lVar15 = *(long *)(lVar16 + 0xe0);
          while (plVar22 != plVar25) {
            func_0x00010b177e48();
            lVar15 = extraout_x8_08;
            plVar25 = extraout_x9_05;
          }
          plVar17 = (long *)*plVar26;
          plVar25 = plVar22;
          if (plVar17 != (long *)0x0) {
            plVar20 = (long *)plVar17[1];
            uVar18 = (long)plVar22 - 1;
            uVar29 = 0;
            if (plVar22 != (long *)0x0) {
              uVar29 = (ulong)plVar20 / (ulong)plVar22;
            }
            plVar21 = plVar20;
            if (plVar22 <= plVar20) {
              plVar21 = (long *)((long)plVar20 - uVar29 * (long)plVar22);
            }
            if (((ulong)plVar22 & uVar18) == 0) {
              plVar21 = (long *)((ulong)plVar20 & uVar18);
            }
            *(long **)(lVar15 + (long)plVar21 * 8) = plVar26;
            while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
              plVar20 = (long *)plVar17[1];
              if (((ulong)plVar22 & uVar18) == 0) {
                plVar20 = (long *)((ulong)plVar20 & uVar18);
              }
              else if (plVar22 <= plVar20) {
                uVar29 = 0;
                if (plVar22 != (long *)0x0) {
                  uVar29 = (ulong)plVar20 / (ulong)plVar22;
                }
                plVar20 = (long *)((long)plVar20 - uVar29 * (long)plVar22);
              }
              if (plVar20 != plVar21) {
                if (*(long *)(lVar15 + (long)plVar20 * 8) == 0) {
                  func_0x00010b177db4();
                  lVar15 = extraout_x8_10;
                  uVar18 = extraout_x9_07;
                  plVar17 = extraout_x12;
                  plVar21 = extraout_x11_00;
                }
                else {
                  func_0x00010b174b5c();
                  lVar15 = extraout_x8_09;
                  uVar18 = extraout_x9_06;
                  plVar17 = extraout_x10_01;
                  plVar21 = extraout_x11;
                }
              }
            }
          }
        }
        else if (plVar22 < plVar25) {
          func_0x00010b177e60((float)*(ulong *)(lVar16 + 0xf8),*(undefined4 *)(lVar15 + 0x100));
          if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x00010b174b3c();
          }
          if (plVar22 <= plVar17) {
            plVar22 = plVar17;
          }
          if (plVar22 < plVar25) {
            if (plVar22 != (long *)0x0) goto LAB_10b1544b0;
            FUN_10b168f84(lVar16 + 0xe0,0);
            *(undefined8 *)(lVar16 + 0xe8) = 0;
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = *(long **)(lVar16 + 0xe8);
          }
        }
        if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
          plVar22 = (long *)((long)plVar25 - 1U & (ulong)plVar19);
        }
        else {
          plVar22 = plVar19;
          if (plVar25 <= plVar19) {
            uVar29 = 0;
            if (plVar25 != (long *)0x0) {
              uVar29 = (ulong)plVar19 / (ulong)plVar25;
            }
            plVar22 = (long *)((long)plVar19 - uVar29 * (long)plVar25);
          }
        }
      }
      lVar15 = *(long *)(lVar16 + 0xe0);
      plVar19 = *(long **)(lVar15 + (long)plVar22 * 8);
      if (plVar19 == (long *)0x0) {
        *plVar12 = *plVar26;
        *plVar26 = (long)plVar12;
        *(long **)(lVar15 + (long)plVar22 * 8) = plVar26;
        if (*plVar12 != 0) {
          plVar22 = *(long **)(*plVar12 + 8);
          if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
            plVar22 = (long *)((ulong)plVar22 & (long)plVar25 - 1U);
          }
          else if (plVar25 <= plVar22) {
            uVar29 = 0;
            if (plVar25 != (long *)0x0) {
              uVar29 = (ulong)plVar22 / (ulong)plVar25;
            }
            plVar22 = (long *)((long)plVar22 - uVar29 * (long)plVar25);
          }
          *(long **)(lVar15 + (long)plVar22 * 8) = plVar12;
        }
      }
      else {
        *plVar12 = *plVar19;
        *plVar19 = (long)plVar12;
      }
      puVar10[0xb] = 0;
      *(long *)(lVar16 + 0xf8) = *(long *)(lVar16 + 0xf8) + 1;
      func_0x00010b176688();
      plVar26 = plVar12;
LAB_10b1546d4:
      if ((*(byte *)(plVar26 + 7) & 1) == 0) {
        uVar27 = *(undefined8 *)(puVar10[0x8c] + 0x48);
        puVar10[0xb] = puVar10[0x81];
        puVar10[0xc] = puVar10[0x82];
        if (puVar10[0x82] != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107c279a0(puVar10 + 0xd,puVar10 + 0x71);
        puVar10[0x12] = puVar10[0x4c];
        puVar10[0x11] = *plVar1;
        if (puVar10[0x4c] != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10_01 != 0);
        }
        func_0x00010b176fc0();
        func_0x00010b1775dc();
        func_0x00010b176fa8();
        if (extraout_x8_12 != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10_02 != 0);
        }
        puVar10[0x1d] = puVar10[0x57];
        puVar10[0x1c] = puVar10[0x56];
        if (puVar10[0x57] != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010b1775a0();
        func_0x000107c279a0(puVar10 + 0x2d,puVar31);
        func_0x000107c279a0(puVar10 + 0x31,puVar10 + 0x6d);
        puVar14 = puVar10 + 0x35;
        FUN_10b162edc(puVar14,puVar24);
        func_0x00010b177d14();
        func_0x00010b1775b4();
        func_0x00010b176d68();
        *puVar14 = &PTR_FUN_110cbf680;
        puVar14[4] = 0;
        puVar14[3] = 0;
        puVar2 = puVar10 + 100;
        puVar14[6] = 0;
        puVar14[5] = 0;
        puVar30 = puVar10 + 0x7f;
        func_0x00010b17702c();
        puVar14[7] = extraout_x10_02;
        plVar22 = puVar10 + 0x8b;
        func_0x00010b175700();
        do {
          func_0x00010b174af4();
        } while (extraout_w11_01 != 0);
        *puVar2 = &PTR_FUN_110cbf618;
        uStack_1d8 = puVar14;
        do {
          func_0x00010b174af4();
        } while (extraout_w11_02 != 0);
        do {
          func_0x00010b174af4();
        } while (extraout_w11_03 != 0);
        puVar10[0x89] = extraout_x9_09;
        puVar10[0x8a] = puVar14;
        func_0x00010b1767f0();
        FUN_10b16171c(&puStack_1e0,puVar10 + 0xb);
        uStack_48 = puVar10[0x66];
        uStack_50 = puVar10[0x65];
        uStack_38 = puVar10[0x68];
        uStack_40 = puVar10[0x67];
        puVar10[0x65] = 0;
        puVar10[0x66] = 0;
        puVar10[0x67] = 0;
        puVar10[0x68] = 0;
        ppuStack_58 = &PTR_FUN_110cbf618;
        func_0x00010b1769f4();
        lVar16 = 0x1b0;
        __Znwm();
        FUN_10b16171c();
        uVar33 = uStack_48;
        uVar29 = uStack_50;
        uStack_50 = 0;
        uStack_48 = 0;
        *(undefined8 *)(lVar16 + 0x198) = uVar33;
        *(ulong *)(lVar16 + 400) = uVar29;
        *(undefined8 *)(lVar16 + 0x1a8) = uStack_38;
        *(undefined8 *)(lVar16 + 0x1a0) = uStack_40;
        uStack_40 = 0;
        uStack_38 = 0;
        *(undefined ***)(lVar16 + 0x188) = &PTR_FUN_110cbf618;
        puVar10[0x5a] = lVar16;
        func_0x00010b175150();
        (*extraout_x8_13)(uVar27,puVar32);
        func_0x00010b174c34();
        func_0x00010b16180c(&puStack_1e0);
        FUN_10b161908(puVar2);
        lVar15 = 0x98;
        __Znwm();
        lVar16 = lVar15;
        func_0x00010b176d48();
        func_0x00010b176f48(&PTR_DAT_110cbff48);
        puVar24 = (ulong *)(lVar16 + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar33;
        *puVar24 = uVar29;
        func_0x00010b17511c();
        *(undefined8 *)(lVar16 + 0x90) = uVar33;
        *(ulong *)(lVar16 + 0x88) = uVar29;
        __ZNSt3__115recursive_mutexC1Ev(puVar24);
        *(undefined1 *)(lVar15 + 0x58) = 0;
        *(undefined1 *)(lVar15 + 0x78) = 0;
        *(undefined8 *)(lVar15 + 0x88) = 0;
        *(undefined8 *)(lVar15 + 0x90) = 0;
        *(undefined8 *)(lVar15 + 0x80) = 0;
        puVar10[0x87] = puVar24;
        puVar10[0x88] = lVar15;
        puVar10[0x58] = puVar24;
        puVar10[0x59] = lVar15;
        do {
          func_0x00010b176d58();
        } while (extraout_w9 != 0);
        *puVar2 = 0;
        puVar10[0x65] = 0;
        *puVar30 = 0;
        puVar10[0x80] = 0;
        FUN_10b161a04(&puStack_1e0,puVar10 + 0x89,puVar30);
        FUN_10b161a30(puVar2,&puStack_1e0);
        func_0x00010b1767f0();
        FUN_10b1618e4(puVar30);
        func_0x000107c27b48(plVar22);
        func_0x000107c27b4c(&uStack_200,*plVar22);
        *puVar32 = 0;
        puVar10[0x59] = 0;
        lStack_1d0 = *plVar22;
        *plVar22 = 0;
        lStack_18 = 0;
        lStack_10 = 0;
        puVar30 = (undefined8 *)*puVar2;
        puStack_28 = puVar30 + 10;
        uStack_20 = 1;
        puStack_1e0 = puVar24;
        uStack_1d8 = (undefined8 *)lVar15;
        __ZNSt3__15mutex4lockEv();
        puVar14 = puVar30;
        FUN_10b169010();
        if ((int)puVar14 == 0) {
          func_0x00010b1751e0();
          lVar16 = lStack_1d0;
          *puVar14 = &PTR_FUN_110cbff98;
          puVar14[2] = uStack_1d8;
          puVar14[1] = puStack_1e0;
          puStack_1e0 = (ulong *)0x0;
          uStack_1d8 = (undefined8 *)0x0;
          lStack_1d0 = 0;
          puVar14[3] = lVar16;
          lVar16 = puVar30[0x13];
          puVar30[0x13] = puVar14;
          if (lVar16 != 0) {
            func_0x00010b174834();
          }
          lVar16 = 0;
        }
        else {
          FUN_10b161a30(&lStack_18,puVar2);
          lVar16 = lStack_18;
        }
        func_0x000107c2798c(&puStack_28);
        if (lVar16 != 0) {
          puVar10[0x7d] = lVar16;
          puVar10[0x7e] = lStack_10;
          if (lStack_10 != 0) {
            do {
              func_0x00010b17493c();
            } while (extraout_w10_04 != 0);
          }
          FUN_10b169048(&puStack_1e0,lVar16);
          func_0x00010b17690c();
        }
        extraout_x11_01[1] = uStack_1f8;
        *extraout_x11_01 = uStack_200;
        uStack_200 = 0;
        uStack_1f8 = 0;
        FUN_10b1618e4(&lStack_18);
        func_0x00010b1693bc(&puStack_1e0);
        func_0x000107c27b58(&uStack_200);
        lVar16 = *plVar22;
        *plVar22 = 0;
        if (lVar16 != 0) {
          func_0x00010b174910();
        }
        FUN_10b1618e4(puVar2);
        func_0x000107c27b58(extraout_x11_01);
        FUN_10b162f50(puVar32);
        if ((char)plVar26[7] == '\x01') {
          func_0x00010b177c20();
          uStack_1d8 = (undefined8 *)plVar26[6];
          puStack_1e0 = (ulong *)plVar26[5];
          plVar26[5] = (long)puVar24;
          plVar26[6] = lVar15;
          FUN_10b162f50(&puStack_1e0);
        }
        else {
          plVar26[5] = (long)puVar24;
          plVar26[6] = lVar15;
          func_0x00010b177c20();
          *(undefined1 *)(plVar26 + 7) = 1;
        }
        func_0x00010b176c58();
        func_0x00010b175b38();
        func_0x00010b176690();
      }
      lVar16 = plVar26[5];
      lVar15 = plVar26[6];
      uVar8 = *(char *)(puVar10 + 0x7a) == '\x01';
      if ((bool)uVar8) {
        uVar27 = 0;
        if (lVar15 != 0) {
          do {
            func_0x00010b174a1c();
            uVar27 = extraout_x8_14;
            lVar16 = extraout_x9_10;
          } while (extraout_w12 != 0);
        }
        uStack_1d8 = (undefined8 *)puVar10[0x79];
        puStack_1e0 = (ulong *)puVar10[0x78];
        puVar10[0x78] = lVar16;
        puVar10[0x79] = uVar27;
        FUN_10b162f50(&puStack_1e0);
      }
      else {
        puVar10[0x78] = lVar16;
        puVar10[0x79] = lVar15;
        if (lVar15 != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10_05 != 0);
        }
        *(undefined1 *)(puVar10 + 0x7a) = 1;
      }
      func_0x00010b175958();
      *(undefined4 *)(puVar10 + 0x8e) = *(undefined4 *)(puVar10 + 0x3c);
      func_0x00010b176258();
      bVar3 = *(byte *)(*plVar23 + 0x60);
      func_0x00010b175504();
      if ((bVar3 & 1) == 0) {
        *(undefined1 *)((long)puVar10 + 0x474) = 3;
        func_0x00010b176258();
        lVar16 = *plVar23;
        if ((*(byte *)(lVar16 + 0x60) & 1) != 0) {
          func_0x00010b175504();
          func_0x00010b174f14(*puVar10);
          return;
        }
        puVar31 = *(undefined8 **)(lVar16 + 0x70);
        uVar7 = *(undefined8 **)(lVar16 + 0x78) <= puVar31;
        if ((bool)uVar7) {
          lVar15 = *(long *)(lVar16 + 0x68);
          func_0x00010b175cfc();
          if (extraout_x10_03 != 0) {
            func_0x00010552fc6c();
LAB_10b154c70:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10b154c74);
            (*pcVar5)();
          }
          func_0x00010b174770(extraout_x8_15 - lVar15);
          uVar29 = extraout_x9_11;
          if ((bool)uVar7) {
            uVar29 = extraout_x8_16;
          }
          if (uVar29 != 0) {
            if (uVar29 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b154c70;
            }
            __Znwm(uVar29 << 3);
          }
          func_0x00010b174cc0();
          *(long **)(lVar16 + 0x68) = plVar1;
          *(undefined8 **)(lVar16 + 0x70) = puVar31;
          *(ulong *)(lVar16 + 0x78) = uVar29;
          if (lVar15 != 0) {
            func_0x00010b177618();
          }
        }
        else {
          *puVar31 = puVar10;
          puVar31 = puVar31 + 1;
        }
        *(undefined8 **)(lVar16 + 0x70) = puVar31;
LAB_10b154388:
        func_0x00010b175504();
        return;
      }
      if ((*(byte *)(*plVar23 + 0x58) & 1) == 0) {
        func_0x00010b177148();
        __ZSt17rethrow_exceptionSt13exception_ptr(puVar10 + 0x85);
        goto LAB_10b154c70;
      }
      func_0x00010b177240();
      func_0x00010b177218();
      func_0x00010b176680();
      func_0x00010b177630();
      goto LAB_10b153fc4;
    }
    func_0x00010b175958();
    FUN_10b162f74(plVar23);
    func_0x00010b175760();
    func_0x00010b175770();
    func_0x00010b175794();
    func_0x00010b17579c();
    uVar8 = 1;
    if ((int)plVar22 != 3) goto LAB_10b15415c;
  }
  func_0x00010b175bc0();
  *(undefined1 *)((long)puVar10 + 0x474) = extraout_w8;
  puVar24 = puVar10 + 7;
  func_0x00010b175904();
  if ((bool)uVar8) {
    puStack_1e0 = puVar24;
    FUN_10b168e2c(puVar10 + 2,&puStack_1e0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_200);
    puStack_1e0 = &uStack_200;
    FUN_10b1615bc(puVar10 + 2,&puStack_1e0);
    func_0x00010b176540();
  }
LAB_10b15415c:
  func_0x00010b1768ac();
  func_0x00010b17564c();
  func_0x000107c279a4(puVar31);
  func_0x00010b176604();
  func_0x00010b17752c();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b154f24; end: 10b154f3b;  */

void FUN_10b154f24(void)

{
  FUN_10b1693dc();
  return;
}



/* Entry: 10b154f3c; end: 10b154f7f;  */

void FUN_10b154f3c(long *param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*param_1 + 0x70) & 1) == 0) {
    func_0x00010b175a08();
    func_0x00010b1757a4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b154f78);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x70) & 1) != 0) {
    return;
  }
  func_0x00010b177184();
  func_0x00010b176afc();
  func_0x00010b176bb4();
  func_0x00010552fc08();
  func_0x00010b1762c0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b161680);
  (*pcVar1)();
}



/* Entry: 10b154f80; end: 10b154ff7;  */

void FUN_10b154f80(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 auStack_38 [3];
  
  func_0x00010b17515c();
  auStack_38[0] = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b175ae0();
  func_0x000107c27f4c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puVar1 = auStack_38;
  func_0x00010563be04(puVar1);
  FUN_10b11ef50(uVar2,0xd2,&uStack_50,puVar1);
  FUN_10b120998(&uStack_50);
  return;
}



/* Entry: 10b154ff8; end: 10b15513f;  */

void FUN_10b154ff8(undefined4 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong extraout_x8;
  int extraout_w11;
  ulong auStack_50 [2];
  int iStack_40;
  long lStack_38;
  
  if (*(char *)(param_2 + 0x160) == '\x01') {
    *param_1 = 0;
  }
  else {
    lVar1 = param_2 + 0x108;
    lVar3 = param_3;
    FUN_10b169444();
    if (*(long *)(param_2 + 0x108) + *(long *)(param_2 + 0x120) == lVar1) {
      lStack_38 = 0;
    }
    else {
      auStack_50[0] = 0;
      if (*(long *)(lVar3 + 0x18) != 0) {
        do {
          func_0x00010b175450();
          auStack_50[0] = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_10b169528(&lStack_38,param_2 + 0x108,auStack_50);
      func_0x00010b176c00();
    }
    lVar1 = lStack_38;
    auStack_50[0] = 0;
    func_0x00010b176c00();
    if (lVar1 != 0) {
      FUN_10b162fb8(auStack_50,lVar1 + 0x38);
      if ((iStack_40 == 1) && (uVar2 = auStack_50[0], FUN_10b155690(), (uVar2 & 1) == 0)) {
        FUN_10b1556c8(param_2 + 0x108,param_3);
        *param_1 = 1;
        param_1[4] = 2;
      }
      else {
        func_0x00010b177f14();
        FUN_10b163074();
      }
      FUN_10b1616c4(auStack_50);
      FUN_10b160ffc(&lStack_38);
      return;
    }
    FUN_10b160ffc(&lStack_38);
    *param_1 = 1;
  }
  param_1[4] = 2;
  return;
}



/* Entry: 10b155140; end: 10b155197;  */

void FUN_10b155140(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 0x10) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_FUN_110cbf5d8)[uVar1])(&puStack_18,param_1);
  }
  return;
}



/* Entry: 10b155198; end: 10b15560f;  */

void FUN_10b155198(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 extraout_x8;
  long lVar13;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 auStack_3f8 [3];
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [120];
  undefined1 uStack_328;
  undefined1 auStack_320 [24];
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [100];
  int iStack_28c;
  long lStack_288;
  char cStack_268;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_18;
  
  func_0x00010b176cc0();
  plVar12 = param_4;
  func_0x00010b1749f4();
  uVar4 = (int)plVar12[2] == 1;
  uStack_18 = extraout_x8;
  if (!(bool)uVar4) {
    if ((int)plVar12[2] == 0) {
      lVar13 = param_4[1];
      lVar14 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = lVar14;
      if (lVar13 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10 != 0);
      }
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
    goto LAB_10b15554c;
  }
  FUN_10b1a23e0(auStack_2f0,*param_4);
  puVar9 = auStack_2f0;
  FUN_10b1c41c0();
  if (puVar9 == (undefined1 *)0x0) {
    bVar5 = true;
  }
  else {
    lVar13 = (long)*(char *)((*(ulong *)(puVar9 + 0x48) & 0xfffffffffffffffc) + 0x17);
    if (lVar13 < 0) {
      lVar13 = *(long *)((*(ulong *)(puVar9 + 0x48) & 0xfffffffffffffffc) + 8);
    }
    bVar5 = lVar13 == 0;
  }
  bVar6 = cStack_268 == '\x01';
  bVar7 = iStack_28c == 2;
  bVar8 = lStack_288 != 0;
  uVar4 = (bVar6 && bVar7) && lStack_288 == 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  if (puVar9 == (undefined1 *)0x0) {
LAB_10b155428:
    if ((bool)(bVar5 | ((bVar6 && bVar7) && bVar8))) goto LAB_10b155434;
    auStack_3a0[0] = 0;
    uStack_328 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_3f8,*(ulong *)(puVar9 + 0x48) & 0xfffffffffffffffc);
    puVar10 = &uStack_3e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar10,auStack_2f0);
    uStack_3c0 = *(undefined8 *)(param_2 + 0x40);
    uStack_3c8 = *(undefined8 *)(param_2 + 0x38);
    if (*(long *)(param_2 + 0x40) != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_01 != 0);
    }
    pcStack_78 = FUN_10b16981c;
    ppuStack_70 = &PTR_FUN_110cbfff0;
    func_0x00010b176b34();
    func_0x00010b176ec4(auStack_3f8,auStack_3f8[0]);
    puVar10[4] = uStack_3d8;
    puVar10[3] = uStack_3e0;
    puVar10[5] = uStack_3d0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    puVar10[7] = uStack_3c0;
    puVar10[6] = uStack_3c8;
    *(undefined8 *)(extraout_x8_01 + 0x30) = 0;
    *(undefined8 *)(extraout_x8_01 + 0x38) = 0;
    puStack_68 = puVar10;
    FUN_10b187b38(auStack_320,param_3,param_4,param_2 + 0x58,auStack_3a0,&pcStack_78,0);
    func_0x00010b175f68();
    func_0x00010b174ed4(ppuStack_70);
    func_0x00010b155870(auStack_3f8);
LAB_10b155534:
    FUN_10b0faf98(auStack_3a0);
  }
  else {
    puVar10 = (undefined8 *)(*(ulong *)(puVar9 + 0x38) & 0xfffffffffffffffc);
    lVar13 = (long)*(char *)((long)puVar10 + 0x17);
    if (lVar13 < 0) {
      if (puVar10[1] != 0) goto LAB_10b155298;
      goto LAB_10b155428;
    }
    if (lVar13 == 0) goto LAB_10b155428;
LAB_10b155298:
    cVar1 = *(char *)((*(ulong *)(puVar9 + 0x30) & 0xfffffffffffffffc) + 0x17);
    if (cVar1 < '\0') {
      if (*(long *)((*(ulong *)(puVar9 + 0x30) & 0xfffffffffffffffc) + 8) != 0) goto LAB_10b1552b8;
      goto LAB_10b155428;
    }
    if (cVar1 == '\0') goto LAB_10b155428;
LAB_10b1552b8:
    lVar14 = *param_4;
    uVar4 = *(long *)(lVar14 + 0x388) == *(long *)(lVar14 + 0x390);
    if (!(bool)uVar4) {
      uVar4 = *(long *)(lVar14 + 0x3a0) == *(long *)(lVar14 + 0x3a8);
      if ((bool)uVar4 && ((!bVar6 || !bVar7) || !bVar8)) goto LAB_10b1552f4;
      goto LAB_10b155428;
    }
    if ((!bVar6 || !bVar7) || !bVar8) {
LAB_10b1552f4:
      puVar11 = puVar10;
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        puVar11 = (undefined8 *)*puVar10;
        lVar13 = puVar10[1];
      }
      func_0x000107c31544(auStack_3a0,puVar11,lVar13);
      func_0x000107c3194c(&lStack_308,auStack_3a0);
      func_0x000107c27914(auStack_3a0);
      uVar4 = lStack_300 - lStack_308 == 0xc;
      if (!(bool)uVar4) {
        lStack_300 = lStack_308;
        goto LAB_10b155428;
      }
      uVar4 = lStack_308 == lStack_300;
      if ((bool)uVar4) goto LAB_10b155428;
      auStack_3a0[0] = 0;
      uStack_328 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_3f8,auStack_2f0);
      uStack_3d8 = *(undefined8 *)(param_2 + 0x40);
      uStack_3e0 = *(undefined8 *)(param_2 + 0x38);
      if (*(long *)(param_2 + 0x40) != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_00 != 0);
      }
      puVar11 = (undefined8 *)(*(ulong *)(puVar9 + 0x30) & 0xfffffffffffffffc);
      lVar13 = (long)*(char *)((long)puVar11 + 0x17);
      puVar10 = puVar11;
      if (lVar13 < 0) {
        puVar10 = (undefined8 *)*puVar11;
        lVar13 = puVar11[1];
      }
      func_0x000107c31544(&uStack_3d0,puVar10,lVar13);
      uVar3 = uStack_2f8;
      lVar14 = lStack_300;
      lVar13 = lStack_308;
      lStack_3b8 = lStack_308;
      lStack_3b0 = lStack_300;
      uStack_3a8 = uStack_2f8;
      lStack_308 = 0;
      lStack_300 = 0;
      uStack_2f8 = 0;
      pcStack_48 = FUN_10b169674;
      ppuStack_40 = &PTR_FUN_110cbffd8;
      func_0x00010b17607c();
      func_0x00010b176ec4(auStack_3f8,auStack_3f8[0]);
      uVar2 = uStack_3c0;
      puVar10[4] = uStack_3d8;
      puVar10[3] = uStack_3e0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      puVar10[6] = uStack_3c8;
      puVar10[5] = uStack_3d0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3d0 = 0;
      puVar10[7] = uVar2;
      puVar10[8] = lVar13;
      puVar10[9] = lVar14;
      puVar10[10] = uVar3;
      *(undefined8 *)(extraout_x8_00 + 0x40) = 0;
      *(undefined8 *)(extraout_x8_00 + 0x48) = 0;
      *(undefined8 *)(extraout_x8_00 + 0x50) = 0;
      puStack_38 = puVar10;
      FUN_10b187b38(auStack_320,param_3,param_4,param_2 + 0x58,auStack_3a0,&pcStack_48,0);
      func_0x00010b175f68();
      func_0x00010b176060();
      FUN_10b15583c(auStack_3f8);
      goto LAB_10b155534;
    }
LAB_10b155434:
    puVar10 = (undefined8 *)0x50;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar11 = puVar10 + 3;
    *puVar10 = &PTR_DAT_110cc0018;
    FUN_10b177fec(puVar11,param_3,param_4,param_2 + 0x58,1);
    *param_1 = (long)puVar11;
    param_1[1] = (long)puVar10;
  }
  func_0x000107c27914(&lStack_308);
  func_0x00010b121af0(auStack_2f0);
LAB_10b15554c:
  func_0x000107c350b0(uStack_18);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b176060();
  FUN_10b15583c(auStack_3f8);
  FUN_10b0faf98(auStack_3a0);
  func_0x000107c27914(&lStack_308);
  func_0x00010b121af0(auStack_2f0);
  do {
    func_0x00010b174f0c();
  } while( true );
}



/* Entry: 10b155610; end: 10b15565b;  */

undefined8 FUN_10b155610(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b1609c8(param_1 + 0x150);
  func_0x000107c279a4(param_1 + 0x130);
  func_0x000107c279a4(param_1 + 0x110);
  func_0x00010529fe04(param_1 + 0x98);
  func_0x00010b141af8(param_1 + 0x30);
  func_0x000107c279a4(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b15565c; end: 10b15568f;  */

void FUN_10b15565c(void)

{
  func_0x00010b1751b0();
  func_0x00010b177a74();
  FUN_10b169418();
  func_0x00010b174f2c();
  return;
}



/* Entry: 10b155690; end: 10b1556c7;  */

byte FUN_10b155690(long param_1)

{
  byte bVar1;
  undefined1 auStack_30 [16];
  
  FUN_10b19af84(auStack_30);
  bVar1 = *(byte *)(param_1 + 0x589);
  FUN_10b122f98(auStack_30);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 10b1556c8; end: 10b15583b;  */

void FUN_10b1556c8(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lStack_48;
  
  puVar3 = param_1;
  FUN_10b169444();
  if ((ulong *)(*param_1 + param_1[3]) != puVar3) {
    lVar10 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    for (plVar11 = (long *)((long)puVar3 + 1); (char)*plVar11 < -1;
        plVar11 = (long *)((long)plVar11 + ((ulong)plVar4 & 0xffffffff))) {
      lStack_48 = *plVar11;
      plVar4 = &lStack_48;
      func_0x000107c27e58();
    }
    FUN_10b1610a0(param_2);
    uVar5 = 0;
    param_1[2] = param_1[2] - 1;
    uVar6 = (long)puVar3 + (-8 - *param_1);
    uVar8 = *(ulong *)(*param_1 + (uVar6 & param_1[3]));
    uVar7 = 0xfe;
    uVar8 = uVar8 & ~uVar8 << 6 & 0x8080808080808080;
    if ((uVar8 != 0) && (uVar9 = *puVar3 & ~*puVar3 << 6 & 0x8080808080808080, uVar9 != 0)) {
      uVar9 = uVar9 >> 7;
      uVar5 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      bVar2 = (int)((ulong)LZCOUNT(uVar8) >> 3) +
              ((uint)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) < 8;
      uVar5 = (ulong)bVar2;
      uVar7 = 0x80;
      if (!bVar2) {
        uVar7 = 0xfe;
      }
    }
    *(undefined1 *)puVar3 = uVar7;
    *(undefined1 *)(*param_1 + (param_1[3] & 7) + (param_1[3] & uVar6) + 1) = uVar7;
    param_1[5] = param_1[5] + uVar5;
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_48 = lVar10;
    FUN_10b160f34(param_1 + 6,&lStack_48);
    func_0x00010b1759ec();
    func_0x00010b176c00();
  }
  return;
}



/* Entry: 10b15583c; end: 10b15589b;  */

void FUN_10b15583c(long param_1)

{
  func_0x000107c27914(param_1 + 0x40);
  func_0x000107c27914(param_1 + 0x28);
  func_0x00010b1257f8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b15589c; end: 10b1559a3;  */

void FUN_10b15589c(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  char cStack_60;
  
  FUN_10b155e30();
  if (*param_1 != 0) {
    return;
  }
  func_0x00010b129c40(param_1);
  puVar2 = auStack_90;
  FUN_10b202630(puVar2,param_3);
  iVar1 = (int)puVar2;
  func_0x00010b1758b4(param_4[0x17]);
  if (extraout_x8 != 0) {
    func_0x00010b176490();
    func_0x000107c278d0();
    if (iVar1 == 0) {
      if (cStack_60 == '\x01') {
        func_0x00010b1772c0(auStack_90,auStack_f8);
        FUN_10b2026a0(auStack_e0,param_4,auStack_f8);
        param_4 = auStack_a8;
      }
      FUN_10b155e30(param_1,param_2,param_4);
      if (cStack_60 != '\0') {
        func_0x00010b121e00(auStack_e0);
        func_0x000107c350e0();
      }
      goto LAB_10b155908;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10b155908:
  func_0x00010b176a40();
  return;
}



/* Entry: 10b1559a4; end: 10b1559db;  */

void FUN_10b1559a4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b175110();
  func_0x000107c27b9c();
  func_0x000107c27c54(unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x000107c27b9c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 10b1559dc; end: 10b155ca3;  */

void FUN_10b1559dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  int extraout_w11;
  undefined8 unaff_x19;
  long *unaff_x20;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 unaff_x30;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  
  func_0x00010b177f3c();
  func_0x00010b17515c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&stack0x00000010,param_3)
  ;
  FUN_10b162fb8(&stack0x00000028,param_4);
  puVar6 = &stack0x00000010;
  plVar4 = unaff_x20;
  FUN_10b169444();
  if ((long *)(*unaff_x20 + unaff_x20[3]) == plVar4) {
    puVar5 = (undefined8 *)0x50;
    __Znwm();
    plVar4 = puVar5 + 1;
    *plVar4 = 1;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &PTR_FUN_110cc0068;
    puVar5[5] = in_stack_00000018;
    puVar5[4] = in_stack_00000010;
    puVar5[6] = in_stack_00000020;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000010 = 0;
    FUN_10b163074(puVar5 + 7,&stack0x00000028);
    puVar6 = puVar5 + 4;
    in_stack_00000040 = puVar5;
    FUN_10b1695d4();
    lVar13 = 0;
    uVar8 = (ulong)puVar6 >> 7;
    uVar11 = unaff_x20[3];
    while( true ) {
      uVar8 = uVar8 & uVar11;
      uVar12 = *(ulong *)(*unaff_x20 + uVar8);
      uVar9 = uVar12 ^ ((ulong)puVar6 & 0x7f) * 0x101010101010101;
      for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
          uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        plVar10 = (long *)(uVar8 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar11);
        puVar7 = puVar5 + 4;
        FUN_10b169604(puVar7,unaff_x20[1] + (long)plVar10 * 0x20);
        if (((ulong)puVar7 & 1) != 0) goto LAB_10b155bc0;
      }
      if ((uVar12 & ~uVar12 << 6 & 0x8080808080808080) != 0) break;
      lVar13 = lVar13 + 8;
      uVar8 = lVar13 + uVar8;
    }
    plVar10 = unaff_x20;
    FUN_10b169a84();
    lVar13 = unaff_x20[1] + (long)plVar10 * 0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar13,puVar5 + 4);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(byte *)(*unaff_x20 + (long)plVar10) = (byte)puVar6 & 0x7f;
    func_0x00010b176df8();
LAB_10b155bc0:
    FUN_10b169630(unaff_x20[1] + (long)plVar10 * 0x20 + 0x18,&stack0x00000040);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    in_stack_00000048 = puVar5;
    FUN_10b169528(unaff_x19);
    FUN_10b160ffc(&stack0x00000048);
    while ((ulong)unaff_x20[8] < (ulong)unaff_x20[2]) {
      FUN_10b1556c8();
    }
    puVar6 = &stack0x00000040;
  }
  else {
    FUN_10b162d30(puVar6[3] + 0x38,&stack0x00000028);
    puVar5 = (undefined8 *)0x0;
    if (puVar6[3] != 0) {
      do {
        func_0x00010b175450();
        puVar5 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    in_stack_00000048 = puVar5;
    func_0x00010b1764c8();
    FUN_10b169528();
    puVar6 = &stack0x00000048;
  }
  FUN_10b160ffc(puVar6);
  FUN_10b169e98(&stack0x00000010);
  func_0x00010b177fd8(unaff_x30);
  return;
}



/* Entry: 10b155ca4; end: 10b155d07;  */

ulong FUN_10b155ca4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_10b1630d8();
  if (*param_1 != 0) {
    return param_2;
  }
  func_0x00010b167f44();
  func_0x00010b177184();
  func_0x0001074668c4();
  ___cxa_throw(param_1,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
  func_0x00010b1754a4();
  ___cxa_free_exception();
  func_0x00010b174f1c();
  func_0x00010b175970();
  if ((param_1 == (long *)0x0) || ((int)param_1[0x17] != 1)) {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_1[0x16];
    uVar1 = uVar4 & 0xffffff0000000000;
    uVar3 = uVar4 & 0xff00000000;
    uVar2 = uVar4 & 0xffffff00;
    uVar4 = uVar4 & 0xff;
  }
  return uVar1 | uVar2 | uVar3 | uVar4;
}



/* Entry: 10b155d08; end: 10b155d5f;  */

ulong FUN_10b155d08(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010b175970();
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb8) != 1)) {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0xb0);
    uVar1 = uVar4 & 0xffffff0000000000;
    uVar3 = uVar4 & 0xff00000000;
    uVar2 = uVar4 & 0xffffff00;
    uVar4 = uVar4 & 0xff;
  }
  return uVar1 | uVar2 | uVar3 | uVar4;
}



/* Entry: 10b155d60; end: 10b155db3;  */

undefined8 FUN_10b155d60(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_40 [24];
  byte bStack_28;
  
  func_0x00010b175f50(auStack_40);
  if ((bStack_28 & 1) != 0) {
    func_0x00010b177f14();
    FUN_10b155db4();
    func_0x00010b175870();
    return param_1;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b155da8);
  (*pcVar1)();
}



/* Entry: 10b155db4; end: 10b155e17;  */

bool FUN_10b155db4(long param_1,undefined8 param_2)

{
  long alStack_30 [2];
  
  param_1 = param_1 + 0x68;
  func_0x00010b153db0();
  FUN_10b155e18(alStack_30,param_2,*(undefined8 *)(param_1 + 0x20));
  if (alStack_30[0] != 0) {
    FUN_10b1a21fc(alStack_30[0]);
  }
  func_0x00010b129c40(alStack_30);
  return alStack_30[0] != 0;
}



/* Entry: 10b155e18; end: 10b155e2f;  */

void FUN_10b155e18(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_10b1ab540(auStack_38,param_3 + 0xe0);
  lVar1 = lStack_28;
  FUN_10b1ac644(lStack_28,param_2);
  if (lVar1 != 0) {
    func_0x00010b1ad9a4(lVar1 + 0x28);
    if (*param_1 != 0) goto LAB_10b1ab5c4;
    func_0x00010b1ad99c();
    FUN_10b1ac718(lStack_28,lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10b1ab5c4:
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b155e30; end: 10b155e9f;  */

void FUN_10b155e30(ulong *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)param_2 + 0x68;
  FUN_10b153d84();
  if (iVar1 != 0) {
    param_2 = param_2 + 0x68;
    func_0x00010b153db0();
    FUN_10b155e18(param_1,param_3,*(undefined8 *)(param_2 + 0x20));
    uVar2 = *param_1;
    if ((uVar2 != 0) && (FUN_10b155690(), (uVar2 & 1) != 0)) {
      return;
    }
    func_0x00010b129c40(param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b155ea0; end: 10b1560cb;  */

ulong FUN_10b155ea0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_5b8 [4];
  undefined1 uStack_5b4;
  long alStack_5b0 [79];
  long alStack_338 [2];
  undefined1 auStack_328 [112];
  long lStack_2b8;
  long lStack_2a8;
  char cStack_2a0;
  byte bStack_166;
  byte bStack_b0;
  undefined1 auStack_a8 [48];
  char cStack_78;
  undefined1 auStack_58 [24];
  char cStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010b175f50(auStack_58);
  if (cStack_40 != '\x01') {
    uVar4 = 0;
    goto LAB_10b155f80;
  }
  FUN_10b202630(auStack_a8,auStack_58);
  auStack_328[0] = 0;
  bStack_b0 = 0;
  FUN_10b155e30(alStack_338,param_1,auStack_58);
  lVar2 = alStack_338[0];
  if (alStack_338[0] == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    FUN_10b11d754();
    if (iVar1 != 0) {
      func_0x00010b175270(alStack_5b0,*(undefined8 *)(param_1 + 0x38),auStack_a8);
      FUN_10b11bfb0(auStack_328,alStack_5b0);
      func_0x00010b121af0(alStack_5b0);
      FUN_10b15589c(alStack_5b0,param_1,auStack_58,auStack_328);
      func_0x00010b138874(alStack_338,alStack_5b0);
      func_0x00010b129c40(alStack_5b0);
    }
    lVar2 = alStack_338[0];
    if (alStack_338[0] != 0) goto LAB_10b155f54;
    if ((bStack_b0 & 1) == 0) {
LAB_10b15603c:
      uVar4 = *(ulong *)(param_1 + 0x38);
      auStack_5b8[0] = 0;
      uStack_5b4 = 0;
      FUN_10b1f6888(uVar4,auStack_a8,auStack_5b8);
    }
    else {
      FUN_10b1f72cc(*(undefined8 *)(param_1 + 0x38),auStack_328);
      if ((bStack_166 & 1) == 0) {
        if (bStack_b0 != 1) goto LAB_10b15603c;
        if (cStack_2a0 != '\x01') goto LAB_10b155fb4;
        uVar4 = 0;
        if ((lStack_2a8 < 1) && (lStack_2b8 != 0)) {
          if (cStack_78 == '\x01') {
            puVar3 = auStack_328;
            FUN_10b1c4c88();
            uVar4 = 0;
            if (puVar3 != (undefined1 *)0x0) {
              func_0x00010b1772c0(auStack_a8,auStack_38);
              func_0x00010b1631b0(alStack_5b0,puVar3 + 0x10,auStack_38);
              uVar4 = (ulong)(alStack_5b0[0] != 0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
            }
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
LAB_10b155fb4:
        uVar4 = 0;
      }
    }
  }
  else {
LAB_10b155f54:
    FUN_10b1a2354();
    uVar4 = (ulong)(0 < lVar2);
  }
  func_0x00010b129c40(alStack_338);
  FUN_10b124588(auStack_328);
  func_0x00010b121e00(auStack_a8);
LAB_10b155f80:
  func_0x000107c279a4(auStack_58);
  return uVar4;
}



/* Entry: 10b1560cc; end: 10b1562cf;  */

uint FUN_10b1560cc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long alStack_5a8 [2];
  undefined1 auStack_598 [450];
  byte bStack_3d6;
  byte bStack_320;
  undefined1 auStack_318 [24];
  char cStack_300;
  undefined1 auStack_2f8 [80];
  undefined1 auStack_2a8 [100];
  int iStack_244;
  ulong uStack_238;
  ulong uStack_230;
  byte bStack_220;
  
  func_0x00010b175f50(auStack_318);
  if (cStack_300 != '\x01') {
    uVar4 = 0;
    goto LAB_10b15625c;
  }
  auStack_598[0] = 0;
  bStack_320 = 0;
  puVar3 = auStack_318;
  FUN_10b155e30(alStack_5a8,param_1,puVar3);
  uVar4 = (uint)puVar3;
  if (alStack_5a8[0] == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    FUN_10b11d754();
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010b177838();
      func_0x00010b175270(auStack_2a8,uVar5,auStack_2f8);
      FUN_10b11bfb0(auStack_598,auStack_2a8);
      func_0x00010b1777d8();
      func_0x00010b177844();
      FUN_10b15589c(auStack_2a8,param_1,auStack_318,auStack_598);
      puVar3 = auStack_2a8;
      func_0x00010b138874(alStack_5a8,puVar3);
      uVar4 = (uint)puVar3;
      func_0x00010b129c40(auStack_2a8);
    }
    if (alStack_5a8[0] != 0) goto LAB_10b156180;
    if ((bStack_320 & 1) != 0) {
      FUN_10b1f72cc(*(undefined8 *)(param_1 + 0x38),auStack_598);
      if ((bStack_3d6 & 1) == 0) {
        if (bStack_320 != 1) goto LAB_10b1561f0;
        FUN_10b121c1c(auStack_2a8,auStack_598);
        goto LAB_10b15620c;
      }
      goto LAB_10b1561cc;
    }
LAB_10b1561f0:
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010b177838();
    func_0x00010b175940(auStack_2a8,uVar5,auStack_2f8);
    func_0x00010b177844();
LAB_10b15620c:
    if ((bStack_220 & 1) == 0) {
LAB_10b156238:
      uVar4 = 0;
    }
    else if (iStack_244 == 2) {
      if (uStack_230 == 0) goto LAB_10b156238;
      uVar4 = (uint)(uStack_230 <= uStack_238);
    }
    else {
      uVar4 = (uint)(uStack_238 != 0);
    }
    func_0x00010b1777d8();
  }
  else {
LAB_10b156180:
    lVar2 = alStack_5a8[0];
    FUN_10b1a2354();
    if (lVar2 < 1) {
LAB_10b1561cc:
      uVar4 = 0;
    }
    else {
      FUN_10b19cdec(alStack_5a8[0]);
      uVar4 = uVar4 & alStack_5a8[0] == lVar2;
    }
  }
  func_0x00010b1766b0();
  FUN_10b124588(auStack_598);
LAB_10b15625c:
  func_0x000107c279a4(auStack_318);
  return uVar4;
}



/* Entry: 10b1562d0; end: 10b1564af;  */

void FUN_10b1562d0(char *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_5a8 [80];
  undefined1 auStack_558 [112];
  long lStack_4e8;
  undefined8 uStack_4e0;
  char cStack_4d0;
  long alStack_2e0 [2];
  undefined1 auStack_2d0 [450];
  char cStack_10e;
  byte bStack_58;
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  func_0x00010b175f50(auStack_50);
  if ((bStack_38 & 1) == 0) {
    *param_1 = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    goto LAB_10b1563bc;
  }
  auStack_2d0[0] = 0;
  bStack_58 = 0;
  func_0x00010b177794(alStack_2e0);
  if (alStack_2e0[0] == 0) {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x38);
    FUN_10b11d754();
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010b17728c();
      func_0x00010b175270(auStack_558,uVar4,auStack_5a8);
      FUN_10b11bfb0(auStack_2d0,auStack_558);
      func_0x00010b17778c();
      func_0x00010b175fac();
      func_0x00010b177534(auStack_558);
      param_3 = 0;
      func_0x00010b138874(alStack_2e0);
      func_0x00010b129c40(auStack_558);
    }
    if (alStack_2e0[0] != 0) goto LAB_10b156378;
    if ((bStack_58 & 1) == 0) {
LAB_10b156414:
      func_0x00010b17728c();
      func_0x00010b176bb4(auStack_558);
      func_0x00010b175940();
      func_0x00010b175fac();
LAB_10b15642c:
      cVar1 = '\0';
      if (lStack_4e8 != 0) {
        cVar1 = cStack_4d0;
      }
      if (cStack_4d0 == '\0') {
        lStack_4e8 = 0;
        uStack_4e0 = 0;
      }
      *param_1 = cVar1;
      *(long *)(param_1 + 8) = lStack_4e8;
      *(undefined8 *)(param_1 + 0x10) = uStack_4e0;
      func_0x00010b17778c();
    }
    else {
      FUN_10b1f72cc(*(undefined8 *)(param_2 + 0x38),auStack_2d0);
      if (cStack_10e != '\x01') {
        if (bStack_58 != 1) goto LAB_10b156414;
        FUN_10b121c1c(auStack_558,auStack_2d0);
        goto LAB_10b15642c;
      }
      *param_1 = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
    }
  }
  else {
LAB_10b156378:
    lVar3 = alStack_2e0[0];
    FUN_10b1a2354();
    FUN_10b19cdec();
    *param_1 = 0 < lVar3;
    if ((param_3 & 1) == 0) {
      alStack_2e0[0] = 0;
    }
    *(long *)(param_1 + 8) = lVar3;
    *(long *)(param_1 + 0x10) = alStack_2e0[0];
  }
  func_0x00010b129c40(alStack_2e0);
  FUN_10b124588(auStack_2d0);
LAB_10b1563bc:
  func_0x00010b176b9c();
  return;
}



/* Entry: 10b1564b0; end: 10b15655b;  */

void FUN_10b1564b0(int param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_2f8 [8];
  ulong uStack_2f0;
  byte bStack_2e1;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b1758b4(*(undefined1 *)(param_2 + 0x17));
  if (extraout_x8 != 0) {
    func_0x00010b175110();
    param_1 = param_1 + 0x68;
    FUN_10b153d84();
    if (param_1 != 0) {
      plVar1 = unaff_x20 + 0xd;
      func_0x00010b153db0();
      if (plVar1[4] != 0) {
        puVar2 = unaff_x19;
        func_0x00010b174be8();
        FUN_10b202630(auStack_80,puVar2);
        func_0x00010b175940(auStack_2f8,*(undefined8 *)(unaff_x21 + 0x38),auStack_80);
        if (-1 < (char)bStack_2e1) {
          uStack_2f0 = (ulong)bStack_2e1;
        }
        if (uStack_2f0 != 0) {
          unaff_x19 = auStack_2f8;
        }
        FUN_10b1ae664(*unaff_x20 + 0x30,unaff_x19);
        func_0x00010b121af0(auStack_2f8);
        func_0x00010b121e00(auStack_80);
      }
      return;
    }
    func_0x00010b177748(auStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58);
    FUN_10b1565fc(&stack0xffffffffffffffd0);
    func_0x000107c27b58(&stack0xffffffffffffffd0);
    func_0x000107c350e0();
    func_0x00010b176c70();
  }
  return;
}


