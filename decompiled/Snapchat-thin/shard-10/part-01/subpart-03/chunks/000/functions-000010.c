/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107851798; end: 1078519f7;  */

void FUN_107851798(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5,undefined4 param_6)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined ***pppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  func_0x000107851cc4();
  puVar3 = (undefined8 *)0x3a0;
  uStack_68 = extraout_x8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_DAT_1109e2628;
  *puVar3 = &PTR_DAT_1109e28e0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  uVar5 = *param_3;
  lVar1 = param_3[1];
  puVar3[9] = uVar5;
  puVar3[10] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107851c94();
    } while (extraout_w10 != 0);
    uVar5 = *param_3;
  }
  func_0x000104c31604(puVar3 + 0xb,param_4,uVar5,param_2);
  puVar7 = puVar3 + 0x1f;
  *(undefined1 *)puVar7 = 0;
  *(undefined1 *)(puVar3 + 0x27) = 0;
  *(undefined4 *)(puVar3 + 0x28) = param_6;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar3 + 0x29);
  *(undefined1 *)(puVar3 + 0x3e) = 0;
  *(undefined1 *)(puVar3 + 0x41) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar3 + 0x42);
  func_0x000107269c1c(puVar3 + 0x57);
  *(undefined1 *)(puVar3 + 0x59) = 0;
  pppuVar4 = (undefined ***)(puVar3 + 0x5a);
  __ZNSt3__119__shared_mutex_baseC1Ev(pppuVar4);
  puVar3[0x70] = 0;
  puVar3[0x6f] = 0;
  puVar3[0x72] = 0;
  puVar3[0x71] = 0;
  *(undefined4 *)(puVar3 + 0x73) = 0x3f800000;
  uVar2 = *(char *)(param_5 + 0x20) == '\x01';
  if ((bool)uVar2) {
    ppuStack_c8 = &PTR_DAT_1109e2790;
    pppuStack_b0 = &ppuStack_c8;
    ppuStack_e8 = &PTR_DAT_1109e2810;
    pppuStack_d0 = &ppuStack_e8;
    puStack_e0 = puVar6;
    puStack_c0 = puVar6;
    func_0x00010786e144(auStack_a8,param_5,puVar3 + 0xe,&ppuStack_c8,&ppuStack_e8);
    func_0x00010737c0ec(puVar7,auStack_a8);
    func_0x000104c319e0(auStack_a8);
    func_0x000107324894(&ppuStack_e8);
    pppuVar4 = &ppuStack_c8;
    func_0x0001073248c8(pppuVar4);
  }
  puVar3[3] = &PTR_DAT_1109e2930;
  *param_1 = puVar6;
  param_1[1] = puVar3;
  func_0x000107851c80(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000104c319e0(auStack_a8);
    func_0x000107324894(&ppuStack_e8);
    func_0x0001073248c8(&ppuStack_c8);
    func_0x0001078512a0(puVar3 + 0x6f);
    func_0x000107276ba4(puVar3 + 0x5a);
    func_0x000104c335c0(puVar3 + 0x57);
    func_0x000107276ba4(puVar3 + 0x42);
    func_0x00010737c464(puVar3 + 0x3e);
    func_0x000107276ba4(puVar3 + 0x29);
    func_0x00010737c444(puVar7);
    func_0x000104c33700(puVar3 + 0xb);
    do {
      func_0x000107851278(puVar3 + 9);
      func_0x0001072978a8(puVar6);
      __ZNSt3__119__shared_weak_countD2Ev(puVar3);
      __ZdlPv();
      __Unwind_Resume(pppuVar4);
    } while( true );
  }
  return;
}



/* Entry: 107851a84; end: 107851b03;  */

/* WARNING: Possible PIC construction at 0x000107851aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107851aac) */
/* WARNING: Removing unreachable block (ram,0x000107851ae8) */
/* WARNING: Removing unreachable block (ram,0x000107851b00) */
/* WARNING: Removing unreachable block (ram,0x000107851ad8) */

undefined1 * FUN_107851a84(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x000107851cc4();
  uStack_38 = 1;
  func_0x000107851b2c();
  return auStack_40;
}



/* Entry: 107851be8; end: 107851c0f;  */

long FUN_107851be8(long param_1)

{
  long lVar1;
  
  _bzero(param_1,0xd0);
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined1 *)(lVar1 + 0xa8) = 0;
  func_0x0001073730ac(lVar1 + 0xb0);
  func_0x00010737e548(param_1 + 0xc0);
  return param_1;
}



/* Entry: 107852bb8; end: 107852feb;  */

undefined8 *
FUN_107852bb8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long lVar4;
  long lVar5;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [56];
  undefined1 auStack_390 [56];
  undefined1 auStack_358 [56];
  undefined1 auStack_320 [56];
  undefined1 auStack_2e8 [56];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  undefined8 uStack_268;
  undefined8 auStack_240 [7];
  undefined8 auStack_208 [7];
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined ***pppuStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 auStack_160 [256];
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001078544d8();
  uStack_58 = extraout_x8;
  if ((char)param_2[2] == '\x01') {
    func_0x000107392e34();
    lVar5 = *param_2;
    func_0x000104c2fe00(auStack_240,*(long *)(lVar5 + 0x30) + 0x60);
    func_0x0001072d78b4(auStack_208,param_4,auStack_240);
    func_0x000104c2fe00(&puStack_2b0,*(long *)(lVar5 + 0x30) + 0x98);
    func_0x0001072d78b4(&ppuStack_278,param_5,&puStack_2b0);
    lVar4 = *(long *)(lVar5 + 0x30);
    func_0x000100060964(auStack_320,"unknown");
    func_0x0001072d78b4(auStack_2e8,lVar4 + 0xe8,auStack_320);
    lVar4 = *(long *)(lVar5 + 0x30);
    func_0x000100060964(auStack_3c8,"unknown");
    func_0x0001072d78b4(auStack_390,lVar4 + 0x128,auStack_3c8);
    func_0x0001072d78b4(auStack_358,param_3,auStack_390);
    puStack_3f0 = &UNK_10f42b39a;
    uStack_3e8 = 0xe;
    func_0x0001078544e8(&puStack_1d0);
    func_0x000107854538(auStack_160,0);
    func_0x0001003a9984(&uStack_180,&UNK_10f42b39a,0xe,0xddddd,&puStack_1d0,0);
    uVar1 = lStack_170 + lStack_60;
    puStack_1c8 = auStack_208;
    pppuStack_1c0 = &ppuStack_278;
    puStack_1b8 = auStack_2e8;
    puStack_1b0 = auStack_358;
    uVar2 = uVar1 == 0x25;
    uStack_1a8 = param_6;
    if (uVar1 < 0x26) {
      puStack_1d0 = (undefined1 *)&puStack_3f0;
      func_0x0001078545b4();
      func_0x0001078534fc(&puStack_1d0);
      func_0x000107854500();
    }
    else {
      uVar2 = uVar1 == 0x51;
      if (uVar1 < 0x52) {
        puStack_1d0 = (undefined1 *)&puStack_3f0;
        func_0x00010785457c();
        func_0x00010785459c();
        func_0x0001078534fc(&puStack_1d0,extraout_x8_01 + 2,0x52);
        param_1[1] = lStack_178;
        *param_1 = uStack_180;
        if (lStack_178 != 0) {
          do {
            func_0x000107854460();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010785449c();
      }
      else {
        puStack_1d0 = (undefined1 *)&puStack_3f0;
        func_0x0001078544e8(&uStack_180);
        func_0x0001003a9204(auStack_3e0,puStack_3f0,uStack_3e8,0xddddd,&uStack_180);
        func_0x0001072625b4(param_1,auStack_3e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e0);
      }
    }
    func_0x000104c2f714(auStack_358);
    func_0x000104c2f714(auStack_390);
    func_0x000104c2f714(auStack_3c8);
    func_0x000104c2f714(auStack_2e8);
    func_0x000104c2f714(auStack_320);
    func_0x000104c2f714(&ppuStack_278);
    func_0x000104c2f714(&puStack_2b0);
    func_0x000104c2f714(auStack_208);
    puVar3 = auStack_240;
  }
  else {
    func_0x000100060964(auStack_208,"unknown");
    func_0x0001072d78b4(&puStack_1d0,param_3,auStack_208);
    puStack_2b0 = &UNK_10f42b3a9;
    uStack_2a8 = 5;
    func_0x0001078545e0(auStack_240);
    func_0x000107854538(auStack_160,0);
    func_0x0001003a9984(&uStack_180,&UNK_10f42b3a9,5,0xdd,auStack_240,0);
    uVar1 = lStack_170 + lStack_60;
    ppuStack_278 = &puStack_2b0;
    ppuStack_270 = &puStack_1d0;
    uVar2 = uVar1 == 0x25;
    uStack_268 = param_6;
    if (uVar1 < 0x26) {
      func_0x0001078545b4();
      func_0x000107853604(&ppuStack_278);
      func_0x000107854500();
    }
    else {
      uVar2 = uVar1 == 0x51;
      if (uVar1 < 0x52) {
        func_0x00010785457c();
        func_0x00010785459c();
        func_0x000107853604(&ppuStack_278,extraout_x8_00 + 2,0x52);
        param_1[1] = lStack_178;
        *param_1 = uStack_180;
        if (lStack_178 != 0) {
          do {
            func_0x000107854460();
          } while (extraout_w10 != 0);
        }
        func_0x00010785449c();
      }
      else {
        func_0x0001078545e0(&uStack_180);
        func_0x0001003a9204(auStack_240,puStack_2b0,uStack_2a8,0xdd,&uStack_180);
        func_0x0001072625b4(param_1,auStack_240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
      }
    }
    func_0x000104c2f714(&puStack_1d0);
    puVar3 = auStack_208;
  }
  func_0x000104c2f714(puVar3);
  func_0x000107854478(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107854624();
    func_0x000104c2f714(auStack_358);
    func_0x000104c2f714(auStack_390);
    func_0x000104c2f714(auStack_3c8);
    func_0x000104c2f714(auStack_2e8);
    func_0x000104c2f714(auStack_320);
    func_0x000104c2f714(&ppuStack_278);
    func_0x000104c2f714(&puStack_2b0);
    func_0x000104c2f714(auStack_208);
    puVar3 = auStack_240;
    func_0x000104c2f714();
    func_0x000107854560();
    func_0x000107853014(puVar3 + 3);
    func_0x00010725c0a0();
    if (puVar3 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  return puVar3;
}



/* Entry: 10785320c; end: 10785325f;  */

void FUN_10785320c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0xe0) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109e2a78)[*(uint *)(param_1 + 0xe0)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  return;
}



/* Entry: 107853430; end: 107853457;  */

long FUN_107853430(long param_1)

{
  func_0x000104c2f714(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107853738; end: 10785373f;  */

void FUN_107853738(void)

{
  return;
}



/* Entry: 1078540bc; end: 1078540d3;  */

void FUN_1078540bc(long *param_1,long param_2)

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



/* Entry: 107854274; end: 1078543cf;  */

void FUN_107854274(long param_1)

{
  int extraout_w10;
  long lVar1;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  
  func_0x00010726fc00(&plStack_38,param_1 + 8);
  if (plStack_38 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_68 = uStack_30;
    plStack_70 = plStack_38;
    if (*plStack_38 != -1) {
      plStack_38 = (long *)0x0;
      uStack_30 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x0001072508cc(&uStack_50);
      goto LAB_1078542e4;
    }
    func_0x00010726fc88();
  }
  func_0x0001078545f8();
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  plStack_38 = (long *)0x0;
  uStack_30 = 0;
LAB_1078542e4:
  func_0x0001072508cc();
  func_0x00010726fc00(&plStack_38,param_1 + 8);
  if (plStack_38 == (long *)0x0) {
    func_0x0001078545f8();
  }
  else {
    lVar1 = *plStack_38;
    func_0x0001078545f8();
    if (lVar1 != -1) {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010724ef84(&plStack_38,param_1 + 0x38);
      uStack_48 = *(undefined8 *)(param_1 + 0x30);
      uStack_50 = *(undefined8 *)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x30) != 0) {
        do {
          func_0x000107854460();
        } while (extraout_w10 != 0);
      }
      uStack_40 = 1;
      uStack_60 = 0;
      uStack_58 = 0;
      func_0x00010726acf0(&uStack_60);
      func_0x000107854174(lVar1 + 0x90,&plStack_38,&uStack_50,&uStack_60);
      func_0x00010726b264(&uStack_60);
      func_0x000107279298(&uStack_50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_38);
    }
  }
  func_0x000107270b00(&plStack_70);
  return;
}



/* Entry: 1078547e8; end: 1078547fb;  */

void FUN_1078547e8(void)

{
  func_0x0001078547fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107854cbc; end: 107854ceb;  */

void FUN_107854cbc(void)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x000107392e70();
  return;
}



/* Entry: 107855024; end: 10785504b;  */

long FUN_107855024(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078551b4; end: 107855547;  */

/* WARNING: Possible PIC construction at 0x0001078552bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010785535c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078552c0) */
/* WARNING: Removing unreachable block (ram,0x000107855360) */
/* WARNING: Removing unreachable block (ram,0x0001078553b4) */
/* WARNING: Removing unreachable block (ram,0x0001078553cc) */
/* WARNING: Removing unreachable block (ram,0x0001078553f0) */
/* WARNING: Removing unreachable block (ram,0x0001078553fc) */
/* WARNING: Removing unreachable block (ram,0x000107855420) */
/* WARNING: Removing unreachable block (ram,0x000107855444) */
/* WARNING: Removing unreachable block (ram,0x000107855460) */
/* WARNING: Removing unreachable block (ram,0x000107855464) */
/* WARNING: Removing unreachable block (ram,0x000107855470) */
/* WARNING: Removing unreachable block (ram,0x000107855474) */
/* WARNING: Removing unreachable block (ram,0x00010785540c) */

undefined8 * FUN_1078551b4(undefined8 *param_1,int param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar7;
  undefined1 auStack_530 [56];
  undefined1 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined1 auStack_4b8 [56];
  char cStack_480;
  undefined1 auStack_478 [56];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_378 [72];
  undefined1 uStack_330;
  undefined1 auStack_328 [504];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [64];
  undefined1 *puVar4;
  
  func_0x000107855da8();
  bVar2 = param_2 == 9;
  if (bVar2) {
    lVar7 = *param_4;
    func_0x000104c2fe00(auStack_c0,lVar7 + 8);
    cVar1 = *(char *)(lVar7 + 0x40);
    puVar4 = auStack_f8;
    func_0x000104c2fe00(puVar4,lVar7 + 0x48);
    iVar3 = (int)puVar4;
    func_0x000104c2d614();
    puVar4 = auStack_c0;
    if (iVar3 == 0) {
      puVar4 = auStack_f8;
    }
    func_0x000104c2fe00(auStack_130,puVar4);
    auStack_378[0] = 0;
    uStack_330 = 0;
    auStack_530[0] = 0;
    uVar6 = 7;
    if (cVar1 != '\x01') {
      uVar6 = 0;
    }
    uStack_4f8 = 0;
    func_0x00010724aea8(auStack_328,uVar6,auStack_c0,auStack_378,3,auStack_530);
    uStack_4c8 = 0;
    puStack_4c0 = param_1;
    func_0x000104c2fe00(auStack_4b8,auStack_c0);
    cStack_480 = cVar1;
    func_0x000104c2fe00(auStack_478,auStack_130);
    uStack_438 = param_1[0x25];
    uStack_440 = param_1[0x24];
    if (param_1[0x25] != 0) {
      do {
        func_0x000107855db8();
      } while (extraout_w10 != 0);
    }
    uStack_430 = param_1[0x26];
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    puVar5 = &uStack_4d8;
  }
  else {
    param_1 = (undefined8 *)0x0;
    func_0x000107855d88(extraout_x8);
    if (bVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    lVar7 = lStack_4f0;
    lStack_4f0 = 0;
    if (lVar7 != 0) {
      func_0x000107855d9c();
    }
    func_0x000104c2f714(auStack_130);
    func_0x000104c2f714(auStack_f8);
    func_0x000104c2f714(auStack_c0);
    puVar5 = param_1;
    __Unwind_Resume();
    func_0x000107855570(puVar5 + 3);
  }
  func_0x00010725c0a0();
  if (puVar5 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 107855ad8; end: 107855b0f;  */

long FUN_107855ad8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e2dd0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10785646c; end: 1078564e7;  */

long FUN_10785646c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078565a4; end: 1078565cf;  */

undefined8 * FUN_1078565a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2ea0;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 1078567b4; end: 1078567e3;  */

void FUN_1078567b4(undefined8 *param_1,undefined8 *param_2)

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
      func_0x000107856b60();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107856a64; end: 107856a9b;  */

long FUN_107856a64(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e2f90);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107856c70; end: 107856c9f;  */

undefined8 * FUN_107856c70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e2ff0;
  func_0x0001074fdf6c(param_1 + 1);
  return param_1;
}



/* Entry: 107857078; end: 1078570c3;  */

void FUN_107857078(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
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



/* Entry: 10785736c; end: 1078573d7;  */

undefined8 * FUN_10785736c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3080;
  func_0x000107276ba4(param_1 + 0x1e);
  func_0x000107858e68(param_1 + 0x1b);
  func_0x000107858ecc(param_1 + 0x18);
  func_0x0001074f55d0(param_1 + 0x14);
  func_0x000107858f30(param_1 + 0xb);
  func_0x0001078597ec(param_1 + 10);
  func_0x000107859728(param_1 + 5);
  func_0x0001074f5344(param_1 + 1);
  return param_1;
}



/* Entry: 1078576d0; end: 1078576f3;  */

bool FUN_1078576d0(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != *(long *)(param_1 + 200)) {
    return true;
  }
  return *(long *)(param_1 + 0xd8) != *(long *)(param_1 + 0xe0);
}



/* Entry: 107858954; end: 107858e67;  */

void FUN_107858954(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  uint unaff_w25;
  uint uVar20;
  long *plVar21;
  undefined1 auStack_248 [24];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  int iStack_1c8;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined2 uStack_f8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  int iStack_80;
  undefined8 uStack_78;
  
  puVar12 = param_1;
  func_0x0001078599bc();
  lVar2 = puVar12[1];
  lVar13 = *(long *)*puVar12;
  puVar16 = *(undefined1 **)(lVar13 + param_2 * 8);
  lVar17 = puVar12[2];
  uVar19 = puVar12[3];
  uVar3 = puVar12[5];
  plVar18 = *(long **)puVar12[4];
  lVar15 = *plVar18;
  uStack_f8 = (ushort)uStack_f8._1_1_ << 8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_78 = extraout_x8;
  func_0x000107859a8c(puVar16 + 8);
  func_0x000107859a80();
  uVar20 = 0;
  if (unaff_w25 != 0) {
    uStack_f8 = uStack_f8 & 0xff00;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x000107859a8c(puVar16 + 0x68);
    func_0x000107859a80();
    if ((unaff_w25 & 1) == 0) {
      uVar20 = 2;
    }
    else {
      if ((puVar16[0xe8] == '\x01') && (*(long *)(puVar16 + 200) != 0)) {
        uStack_140 = 0;
        uStack_158 = 0;
        ppuStack_160 = (undefined **)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        FUN_107753050(&uStack_f8,*(long *)(puVar16 + 200),uVar19,&uStack_180);
        func_0x00010724b3d8(&uStack_180);
        if (iStack_80 == 1) {
          puVar8 = &uStack_f8;
          func_0x0001073405dc();
          if (*(int *)(puVar8 + 0x34) == 3) {
            func_0x0001073405dc(&uStack_f8);
            func_0x000107573ddc();
            if (*(long *)(puVar16 + 0xd8) != 0) {
              uStack_1f0 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_228 = 0;
              uStack_230 = 0;
              uStack_218 = 0;
              uStack_220 = 0;
              FUN_107753050(&uStack_180,*(long *)(puVar16 + 0xd8),uVar19,&uStack_230);
              func_0x00010724b3d8(&uStack_230);
              puVar12 = &uStack_180;
              func_0x0001073405dc();
              if (*(int *)(puVar12 + 0xd) == 3) {
                puVar12 = &uStack_180;
                func_0x0001073405dc(puVar12);
                func_0x000107573ddc();
                func_0x000104c2fe00(auStack_1b8,puVar12);
                func_0x000107579a48(&uStack_230,auStack_1b8);
                if (iStack_1c8 == 3) {
                  uVar9 = 0;
                  func_0x00010732393c();
                  func_0x000107278484();
                  if (((((uVar9 & 1) == 0) && (func_0x000107859a2c(), (uVar9 & 1) == 0)) &&
                      (func_0x000107859a2c(), (uVar9 & 1) == 0)) &&
                     (func_0x000107859a2c(), (uVar9 & 1) == 0)) {
                    func_0x000107859a2c();
                  }
                }
                func_0x00010726af18(&uStack_228);
                func_0x000104c2f714(auStack_1b8);
              }
              func_0x000107859a54(&uStack_180);
            }
          }
        }
        func_0x000107859a54(&uStack_f8);
      }
      func_0x000107856f58(&uStack_180,puVar16,uVar19);
      uVar20 = 0;
      plVar21 = (long *)(lVar2 + 0x38);
      while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
        plVar10 = (long *)plVar21[3];
        (**(code **)(*plVar10 + 0x10))(plVar10,*puVar16,lVar17 + 0x18,uStack_180);
        plVar11 = plVar10;
        func_0x00010785f1f4();
        uStack_f8 = uStack_f8 & 0xff00;
        plVar11 = plVar11 + 0x5e;
        func_0x00010724e2c8(plVar11,&uStack_f8);
        if (((ulong)plVar11 & 1) == 0) {
          lVar5 = *plVar18;
          if (lVar15 != *plVar18) goto LAB_107858bb0;
        }
        else {
          lVar5 = lVar15;
          if (((uint)plVar10 >> 2 & 1) != 0) {
LAB_107858bb0:
            lVar15 = lVar5;
            func_0x00010745f750(&uStack_f8,plVar18);
            func_0x00010726c924(uVar3,&uStack_f8);
            func_0x00010726b264(&uStack_f8);
          }
        }
        uVar20 = (uint)plVar10 | uVar20;
      }
      func_0x000107859954(&uStack_180);
    }
  }
  plVar18 = (long *)param_1[6];
  uVar19 = *(undefined8 *)(lVar13 + param_2 * 8);
  puVar12 = (undefined8 *)plVar18[1];
  puVar4 = (undefined8 *)plVar18[2];
  uVar7 = puVar12 == puVar4;
  if (puVar12 < puVar4) {
    *puVar12 = uVar19;
    *(char *)(puVar12 + 1) = (char)uVar20;
    puVar12 = puVar12 + 2;
LAB_107858ca4:
    plVar18[1] = (long)puVar12;
    if ((uVar20 >> 1 & 1) != 0) {
      uStack_f8 = (ushort)param_2;
      func_0x0001073bc970(param_1[7],&uStack_f8);
    }
    uStack_180._0_4_ = 0xfd;
    uStack_168 = uStack_168 & 0xffffffff00000000;
    uStack_150 = 0;
    uStack_148 = 0;
    ppuStack_160 = &PTR_DAT_110996720;
    uStack_158 = 0;
    uStack_140 = CONCAT44(uStack_140._4_4_,0xfd);
    uStack_138 = 0;
    uStack_134 = 1;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_248,param_1[2])
    ;
    puVar12 = &uStack_180;
    func_0x00010726e300(puVar12,"trigger",auStack_248);
    func_0x0001072df7b4();
    func_0x00010726e6c0(&uStack_f8,puVar12);
    func_0x000107859a34();
    func_0x000107262330(&uStack_180);
    puVar12 = *(undefined8 **)(lVar2 + 0x198);
    uStack_180 = CONCAT44(uStack_180._4_4_,1);
    uStack_178 = uStack_178 & 0xffffffff00000000;
    uStack_230 = *puVar12;
    uStack_228 = CONCAT44(uStack_228._4_4_,3);
    func_0x00010743fa9c(puVar12,&uStack_f8,&uStack_180,&uStack_230,7);
    func_0x000107262330(&uStack_f8);
    func_0x00010785997c(uStack_78);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar17 = *plVar18;
    lVar13 = (long)puVar12 - lVar17;
    uVar9 = (lVar13 >> 4) + 1;
    if (uVar9 >> 0x3c == 0) {
      uVar14 = (long)puVar4 - lVar17;
      uVar1 = (long)uVar14 >> 3;
      if ((ulong)((long)uVar14 >> 3) <= uVar9) {
        uVar1 = uVar9;
      }
      uVar7 = uVar14 == 0x7ffffffffffffff0;
      if (0x7fffffffffffffef < uVar14) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_107858da4;
      }
      lVar15 = uVar1 << 4;
      __Znwm();
      puVar4 = (undefined8 *)(lVar15 + lVar13);
      *puVar4 = uVar19;
      *(char *)(puVar4 + 1) = (char)uVar20;
      puVar12 = puVar4 + 2;
      _memcpy(puVar4 + (lVar13 >> 4) * -2,lVar17,lVar13);
      *plVar18 = (long)(puVar4 + (lVar13 >> 4) * -2);
      plVar18[1] = (long)puVar12;
      plVar18[2] = lVar15 + uVar1 * 0x10;
      if (lVar17 != 0) {
        __ZdlPv(lVar17);
      }
      goto LAB_107858ca4;
    }
  }
  func_0x0001078595a0();
LAB_107858da4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x107858da8);
  (*pcVar6)();
}



/* Entry: 107859244; end: 10785938b;  */

/* WARNING: Possible PIC construction at 0x0001078592e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078592e8) */

void FUN_107859244(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar3 = param_1 + 2;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)*plVar3) {
    *puVar6 = param_2;
    param_1[1] = (long)(puVar6 + 1);
    return;
  }
  lVar7 = (long)puVar6 - *param_1;
  uVar1 = (lVar7 >> 3) + 1;
  plVar2 = param_1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar3;
    if (uVar5 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_2;
      func_0x000107859398();
    }
    puStack_50 = (undefined8 *)(uVar5 + lVar7);
    lStack_40 = uVar5 + (long)plVar3 * 8;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = param_2;
    plVar3 = &lStack_58;
  }
  else {
    plVar3 = param_2;
    func_0x00010785938c();
  }
  func_0x000107859a74();
  lVar7 = plVar3[1] - (plVar2[1] - *plVar2);
  _memcpy(lVar7);
  param_1[1] = lVar7;
  lVar7 = *param_2;
  param_2[1] = lVar7;
  *param_2 = param_1[1];
  param_1[1] = lVar7;
  lVar7 = param_2[1];
  param_2[1] = param_1[2];
  param_1[2] = lVar7;
  lVar7 = param_2[2];
  param_2[2] = param_1[3];
  param_1[3] = lVar7;
  *param_1 = param_1[1];
  return;
}



/* Entry: 1078595f8; end: 107859603;  */

void FUN_1078595f8(long param_1)

{
  func_0x000107859998();
  func_0x000107858fcc(param_1 + 0x40);
  func_0x00010726b264(param_1 + 0x30);
  func_0x000107279298(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10785986c; end: 1078598c3;  */

void FUN_10785986c(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x60;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107859ca4; end: 107859d3f;  */

undefined *
FUN_107859ca4(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x00010785a7a0();
  uStack_38 = extraout_x8;
  func_0x00010688d7f0(auStack_70,param_3);
  func_0x00010688cbd4(auStack_58,auStack_70,param_4);
  func_0x00010785a824();
  func_0x000107859ddc();
  func_0x00010785a818();
  func_0x00010785a7e4();
  func_0x00010785a78c(uStack_38);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010785a818();
  func_0x00010785a7e4();
  func_0x00010785a7bc();
  puVar1 = &UNK_10f42b3c5;
  func_0x0001003a91d4(&UNK_10f42b3c5);
  func_0x0001003a9204(extraout_x8_00);
  return puVar1;
}



/* Entry: 10785a110; end: 10785a163;  */

void FUN_10785a110(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010785a474(param_1,lVar2,*(undefined8 *)(param_1 + 0x38));
  if ((*(long *)(param_1 + 0x38) == lVar1 && *(long *)(param_1 + 0x38) == lVar2) &&
     (*(long *)(param_1 + 0x28) == lVar2)) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}



/* Entry: 10785a424; end: 10785a473;  */

void FUN_10785a424(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm();
  func_0x00010688cca4();
  *param_3 = uVar1;
  return;
}



/* Entry: 10785a6bc; end: 10785a74f;  */

byte FUN_10785a6bc(long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  byte bVar3;
  
  if (*param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 8);
  }
  if (*param_2 == 0) {
    bVar3 = 1;
  }
  else {
    bVar3 = *(byte *)(param_2 + 8);
    if (((bVar1 | bVar3) & 1) == 0) {
      plVar2 = param_1 + 4;
      func_0x00010785a750(plVar2,param_2 + 4);
      if (((int)plVar2 == 0) || (param_1[6] != param_2[6])) {
        bVar1 = 0;
      }
      else {
        bVar1 = param_1[7] == param_2[7];
      }
      goto LAB_10785a72c;
    }
  }
  bVar1 = bVar1 ^ bVar3 ^ 1;
LAB_10785a72c:
  return bVar1 & 1;
}



/* Entry: 10785acb0; end: 10785ad8b;  */

void FUN_10785acb0(byte *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulong extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pbVar1 = param_1;
  func_0x00010785c07c(*param_1);
  if ((((extraout_x8 & 1) != 0) || ((*pbVar1 & 1) != 0)) || (param_1[1] == 1)) {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010785ad8c(&uStack_30);
    func_0x0001000df524(&uStack_30);
    return;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  pbVar1 = param_1 + 0x48;
  func_0x00010785b210(pbVar1,param_2);
  if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) < 0x270f1) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((long)pbVar1 - *(long *)(param_1 + 0x60) < 0x12a153440) goto LAB_10785ad64;
  }
  func_0x00010785adb8(param_1);
LAB_10785ad64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10785b138; end: 10785b14f;  */

uint FUN_10785b138(uint param_1)

{
  func_0x00010785bd5c();
  return param_1 ^ 1;
}



/* Entry: 10785b3c4; end: 10785b3df;  */

long * FUN_10785b3c4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  func_0x00010785b40c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10785b568; end: 10785b667;  */

void FUN_10785b568(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    uVar2 = *puVar1;
    puStack_28[1] = puVar1[1];
    *puStack_28 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_28[2] = puVar1[2];
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x00010725b1d4(param_2);
  }
  func_0x00010785b5f8(&uStack_50);
  return;
}



/* Entry: 10785b854; end: 10785b887;  */

void FUN_10785b854(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010725b1d4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10785be28; end: 10785be3b;  */

void FUN_10785be28(void)

{
  func_0x00010785bdfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10785c148; end: 10785c1db;  */

undefined1  [16]
FUN_10785c148(double param_1,double param_2,double param_3,long param_4,long param_5,
             undefined8 param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = 1.79769313486232e+308;
  dVar3 = -1.79769313486232e+308;
  for (param_5 = param_5 * 0x18; param_5 != 0; param_5 = param_5 + -0x18) {
    func_0x00010785c128(param_4,param_6);
    dVar1 = param_2 * param_7[1];
    param_2 = param_7[2];
    param_1 = dVar1 + *param_7 * param_1 + param_2 * param_3;
    if (param_1 <= dVar2) {
      dVar2 = param_1;
    }
    if (dVar3 <= param_1) {
      dVar3 = param_1;
    }
    param_4 = param_4 + 0x18;
  }
  auVar4._8_8_ = dVar3;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 10785c930; end: 10785c97f;  */

double FUN_10785c930(double param_1,double param_2,double param_3,double param_4)

{
  func_0x00010785c950();
  return param_1 + param_2 + param_3 + param_4;
}



/* Entry: 10785cc54; end: 10785cc83;  */

void FUN_10785cc54(undefined8 param_1)

{
  undefined1 auStack_a0 [128];
  
  func_0x00010785cc84(auStack_a0);
  func_0x0001078769cc(param_1,auStack_a0);
  return;
}



/* Entry: 10785cf48; end: 10785d06f;  */

void FUN_10785cf48(double *param_1,double *param_2,double *param_3)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  dStack_40 = param_3[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = 0.001;
  if ((0.001 < ABS(dVar2)) ||
     (dVar5 = ABS(dVar3), dStack_50 = *param_3, dStack_48 = param_3[1], 0.001 < dVar5)) {
    dVar5 = *param_3;
    dVar4 = 1.0 / SQRT(dVar3 * dVar3 + dVar2 * dVar2);
    dVar2 = dVar2 * dVar4;
    dVar3 = dVar3 * dVar4;
    dVar4 = dVar3 * param_3[1] + dVar2 * dVar5;
    dVar2 = dVar2 * dVar4;
    dVar3 = dVar3 * dVar4;
    dStack_50 = dVar2;
    dStack_48 = dVar3;
  }
  func_0x00010785d070(&dStack_50,param_2);
  dStack_68 = dVar2;
  dStack_60 = dVar3;
  dStack_58 = dVar4;
  func_0x00010785d09c(&dStack_68);
  if (1e-15 <= dVar2) {
    dVar2 = -dStack_60;
    _atan2(dVar2,dStack_68);
    dVar3 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2);
    _atan2(dVar3,-param_2[2]);
    dVar3 = (double)NEON_fminnm(dVar3,0x3ff0c152382d7365);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    func_0x00010785ce78();
    *param_1 = dVar3;
    param_1[1] = dVar2;
    param_1[2] = dVar4;
    param_1[3] = dVar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 10785d358; end: 10785d473;  */

long FUN_10785d358(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined1 auStack_148 [56];
  undefined1 *puStack_110;
  undefined1 auStack_106 [38];
  undefined1 auStack_88 [56];
  undefined1 *puStack_50;
  undefined1 auStack_48 [40];
  
  func_0x00010785d4bc();
  puVar1 = auStack_88;
  __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
            ();
  puStack_50 = puVar1;
  _gmtime_r(&puStack_50,auStack_88);
  _snprintf(auStack_48,0x20,&UNK_10f42b3d8);
  lVar2 = unaff_x19;
  func_0x00010002b838();
  func_0x00010785d4e0();
  if ((bool)in_ZR) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x00010785d4bc();
  puVar1 = auStack_148;
  __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
            ();
  puStack_110 = puVar1;
  _gmtime_r(&puStack_110,auStack_148);
  _strftime(auStack_106,0x1e,&UNK_10f42b3fb,auStack_148);
  func_0x00010002b838();
  func_0x00010785d4e0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001078d8da0();
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    return unaff_x19 / 1000000;
  }
  return unaff_x19;
}



/* Entry: 10785d6d4; end: 10785d72b;  */

double FUN_10785d6d4(double param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  func_0x00010785dc48();
  func_0x00010785dd0c(*(undefined8 *)(*plVar1 + 0x38));
  func_0x00010785dc70();
  if (((ulong)param_2 & 0x100000000) != 0) {
    param_1 = (double)SUB84(param_2,0);
  }
  return param_1;
}



/* Entry: 10785d9f8; end: 10785da2f;  */

void FUN_10785d9f8(void)

{
  func_0x00010785dc34();
  func_0x00010785dd5c();
  func_0x00010785dc70();
  return;
}



/* Entry: 10785e024; end: 10785e09f;  */

double FUN_10785e024(float *param_1)

{
  double dVar1;
  
  if (param_1[3] == 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)((*param_1 * 255.0) / param_1[3]);
  }
  return dVar1;
}



/* Entry: 10785e688; end: 10785e72f;  */

/* WARNING: Possible PIC construction at 0x00010785acfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785ad00) */
/* WARNING: Removing unreachable block (ram,0x00010785c0bc) */

void FUN_10785e688(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  ulong extraout_x8;
  undefined1 *extraout_x8_00;
  code *extraout_x9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar5;
  
  if ((bRam00000001131ada68 & 1) != 0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340dbe8;
    (*(code *)PTR___tlv_bootstrap_11340dbe8)();
    if (*(char *)ppuVar3 == '\0') {
      puVar4 = extraout_x8_00;
      (*extraout_x9)();
      *puVar4 = 1;
      func_0x00010785e730();
      func_0x00010785a830();
      ppuVar3 = (undefined **)&UNK_10785aa88;
      __tlv_atexit(&UNK_10785aa88,puVar4,0x100000000);
    }
    func_0x00010785e730();
    puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
    unaff_x29 = &stack0xfffffffffffffff0;
    ppuVar2 = ppuVar3;
    func_0x00010785c07c(*(undefined1 *)ppuVar3);
    if ((((extraout_x8 & 1) == 0) && (((ulong)*ppuVar2 & 1) == 0)) &&
       (*(char *)((long)ppuVar3 + 1) != '\x01')) {
      __ZNSt3__15mutex4lockEv(ppuVar3 + 1);
      ppuVar2 = ppuVar3 + 9;
      func_0x00010785b210(ppuVar2,param_1);
      if ((0x270f0 < (ulong)((long)ppuVar3[10] - (long)ppuVar3[9])) ||
         (__ZNSt3__16chrono12steady_clock3nowEv(), 0x12a15343f < (long)ppuVar2 - (long)ppuVar3[0xc])
         ) {
        func_0x00010785adb8(ppuVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuVar3 + 1);
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    unaff_x30 = 0x10785ad00;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    param_1 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar5 = *param_1;
  *(undefined8 *)((long)register0x00000008 + -0x18) = param_1[1];
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar5;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001000df524((undefined1 *)((long)register0x00000008 + -0x20));
  return;
}



/* Entry: 10785e940; end: 10785ea0f;  */

void FUN_10785e940(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 extraout_x11;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [72];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_60;
  
  func_0x000107868dcc();
  func_0x0001078692c8(&uStack_80,param_4);
  func_0x0001078680b8(&uStack_90,param_3,&uStack_80);
  lVar4 = param_3[1];
  uVar3 = *param_3;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  uStack_80 = uVar3;
  lStack_78 = lVar4;
  if (lStack_88 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  uStack_60 = 0xb;
  puVar2 = &uStack_80;
  func_0x00010785e7d8();
  func_0x000107869158();
  if (((ulong)param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    param_1[1] = lStack_88;
    *param_1 = uStack_90;
    uVar3 = uStack_90;
    lVar4 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x000107868df0();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x000107869424();
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107869144();
    func_0x000107869424();
    func_0x00010786906c();
    puStack_98 = &UNK_10785ea10;
    puStack_c0 = &uStack_80;
    uStack_b8 = param_2;
    puStack_b0 = param_3;
    puStack_a8 = param_1;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000107868dcc();
    func_0x000107268350(auStack_108,param_4);
    func_0x000107868240(auStack_120,puVar2,auStack_108);
    func_0x000104c3323c(auStack_108);
    func_0x000107868fd8();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107868df0();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107869448();
    func_0x000107868ff0();
    if (((ulong)puVar2 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
    }
    else {
      func_0x00010786921c();
      extraout_x8[1] = lVar4;
      *extraout_x8 = uVar3;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107868df0();
        } while (extraout_w10_02 != 0);
      }
    }
    func_0x0001078674f8(auStack_120);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868fcc();
      puVar1 = auStack_120;
      func_0x0001078674f8();
      func_0x00010786906c();
      func_0x000107868d20();
      uVar3 = extraout_x11;
      if (in_NG == in_OV) {
        uVar3 = extraout_x8_02;
      }
      func_0x00010786909c(uVar3);
      if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x30) == 0)) {
        puVar2 = (undefined8 *)(puVar1 + 0x20);
        func_0x0001078684d4();
        func_0x0001072890a8(*puVar2,param_4);
        func_0x0001078691fc();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10785ed48; end: 10785edd3;  */

void FUN_10785ed48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  
  func_0x000107868d20();
  func_0x000107868410();
  if ((param_1 != 0) && (*(int *)(param_1 + 0x30) == 0xc)) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    func_0x00010786855c();
    uVar2 = *puVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58,param_3);
    func_0x000107289d18(uVar2,auStack_58);
    func_0x0001078693fc();
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 10785f254; end: 10785f28b;  */

void FUN_10785f254(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xbe8;
  __Znwm();
  func_0x00010785f2c0();
  *param_1 = uVar1;
  return;
}



/* Entry: 107865050; end: 107865643;  */

undefined8 * FUN_107865050(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e33d8;
  func_0x00010786760c(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1078657a4; end: 107865807;  */

void FUN_1078657a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107868e88();
  ppuStack_48 = &PTR_DAT_1109e3760;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  uStack_28 = extraout_x8;
  func_0x0001078656f0();
  func_0x000107868714(&ppuStack_48);
  func_0x000107868d90(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_48;
  func_0x000107868714();
  func_0x00010786906c();
  if ((*(int *)((long)pppuVar1 + 0xbe4) == 0) && (*(char *)(pppuVar1 + 0x17c) == '\x01')) {
    *(undefined1 *)(pppuVar1 + 0x17c) = 0;
    func_0x000107865840();
    return;
  }
  return;
}



/* Entry: 1078660d8; end: 10786611f;  */

void FUN_1078660d8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    func_0x000107869404((&PTR_DAT_1109e32d8)[*(uint *)(param_1 + 0x48)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 107866b7c; end: 107866c0f;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866b7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined4 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  long unaff_x21;
  long lVar6;
  long unaff_x22;
  undefined1 auStack_788 [24];
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 ***pppuStack_760;
  undefined *puStack_758;
  long lStack_750;
  long lStack_748;
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [72];
  undefined4 uStack_6e0;
  undefined1 auStack_6d8 [72];
  undefined8 ***pppuStack_670;
  undefined *puStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long alStack_64a [8];
  undefined1 auStack_608 [72];
  undefined4 uStack_5c0;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined1 auStack_538 [16];
  undefined8 uStack_528;
  undefined4 uStack_4e0;
  undefined8 ***pppuStack_470;
  undefined *puStack_468;
  undefined1 auStack_458 [16];
  undefined4 uStack_448;
  undefined4 uStack_400;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined1 auStack_378 [16];
  long lStack_368;
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  long lStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined4 uStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x000107869368();
  uVar3 = (undefined4)param_2;
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
      uVar3 = (undefined4)param_2;
    } while (extraout_w11 != 0);
  }
  func_0x0001078693e8();
  func_0x0001072adc24();
  uStack_80 = 5;
  uStack_c8 = uVar3;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar4 = auStack_d8;
  func_0x000107289dd4(puVar4);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    puVar4 = auStack_d8;
    func_0x000107289dd4();
    func_0x00010786906c();
    puStack_e8 = &DAT_107866c10;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868d78();
    func_0x000107869368();
    uVar3 = SUB84(puVar4,0);
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
        uVar3 = SUB84(puVar4,0);
      } while (extraout_w11_00 != 0);
    }
    func_0x0001078693e8();
    func_0x0001072cd320();
    uStack_160 = 6;
    uStack_1a8 = uVar3;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar4 = auStack_1b8;
    func_0x000107289cc8(puVar4);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x000107289cc8(auStack_1b8);
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866ca4;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x0001078693dc();
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_01 != 0);
      }
      func_0x000107868fa4();
      func_0x0001078692b0();
      lVar6 = *(long *)(unaff_x21 + 0xa8);
      func_0x00010786933c();
      uStack_240 = 7;
      lStack_288 = lVar6;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar4 = auStack_298;
      func_0x00010786748c(puVar4);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        func_0x00010786748c(auStack_298);
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866d40;
        pppuStack_2b0 = &ppuStack_1d0;
        func_0x000107868d78();
        func_0x0001078693dc();
        if (extraout_x9_02 != 0) {
          do {
            func_0x000107868ef4();
          } while (extraout_w11_02 != 0);
        }
        func_0x000107868fa4();
        func_0x0001078692b0();
        lVar6 = *(long *)(lVar6 + 0xa8);
        func_0x00010786933c();
        uStack_320 = 8;
        lStack_368 = lVar6;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar4 = auStack_378;
        func_0x0001078674b0(puVar4);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          func_0x0001078674b0(auStack_378);
          func_0x00010786906c();
          puStack_388 = &DAT_107866ddc;
          pppuStack_390 = &pppuStack_2b0;
          func_0x000107868d78();
          func_0x000107869368();
          if (extraout_x9_03 != 0) {
            do {
              func_0x000107868ef4();
            } while (extraout_w11_03 != 0);
          }
          func_0x0001078693e8();
          func_0x00010750833c();
          uStack_448 = (undefined4)param_1;
          uStack_400 = 9;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(lVar6 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar4 = auStack_458;
          func_0x000107289e5c(puVar4);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            func_0x000107289e5c(auStack_458);
            func_0x00010786906c();
            puStack_468 = &DAT_107866e70;
            pppuStack_470 = &pppuStack_390;
            func_0x000107868d78();
            func_0x000107869368();
            if (extraout_x9_04 != 0) {
              do {
                func_0x000107868ef4();
              } while (extraout_w11_04 != 0);
            }
            func_0x0001078693e8();
            func_0x00010740f294();
            uStack_4e0 = 10;
            uStack_528 = param_1;
            func_0x000107868f10();
            func_0x000107868e1c(*(undefined8 *)(lVar6 + 0x18));
            func_0x0001078690ec();
            func_0x0001078690e4();
            puVar4 = auStack_538;
            func_0x00010740f2d0(puVar4);
            func_0x000107868d60();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107868f1c();
              func_0x0001078690e4();
              func_0x00010740f2d0(auStack_538);
              func_0x00010786906c();
              puStack_548 = &DAT_107866f04;
              pppuStack_550 = &pppuStack_470;
              func_0x000107868d78();
              uStack_660 = *param_3;
              lStack_658 = param_3[1];
              plVar5 = extraout_x8;
              if (lStack_658 != 0) {
                do {
                  func_0x000107868ef4();
                  plVar5 = extraout_x8_00;
                } while (extraout_w11_05 != 0);
              }
              lVar6 = *plVar5;
              func_0x00010785f084(alStack_64a);
              plVar5 = alStack_64a;
              func_0x0001078692c8(auStack_608);
              uStack_5c0 = 0xb;
              func_0x00010786954c();
              puVar4 = *(undefined1 **)(lVar6 + 0x18);
              func_0x000107868ecc();
              func_0x000107869290();
              func_0x0001078693cc();
              func_0x000107869424();
              func_0x000107868d60();
              if ((bool)in_ZR) {
                return puVar4;
              }
              ___stack_chk_fail();
              func_0x000107869290();
              func_0x0001078693cc();
              func_0x000107869424();
              func_0x00010786906c();
              puStack_668 = &DAT_107866fac;
              pppuStack_670 = &pppuStack_550;
              func_0x000107868d78();
              lVar6 = *plVar5;
              lStack_748 = plVar5[1];
              lStack_750 = lVar6;
              if (lStack_748 != 0) {
                do {
                  func_0x000107868ef4();
                } while (extraout_w11_06 != 0);
              }
              uVar1 = *(undefined8 *)(lVar6 + 0xc0);
              uVar2 = *(undefined8 *)(lVar6 + 200);
              func_0x000107328418(auStack_740);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_728,auStack_740);
              uStack_6e0 = 0xc;
              puVar4 = auStack_6d8;
              puStack_758 = &UNK_10786700c;
              uStack_770 = uVar2;
              uStack_768 = uVar1;
              pppuStack_760 = &pppuStack_670;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_788);
              func_0x000107268798(puVar4,auStack_788);
              func_0x0001078693fc();
              return puVar4;
            }
          }
        }
      }
    }
  }
  return puVar4;
}



/* Entry: 107867088; end: 107867143;  */

/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x0001078693bc) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x0001078672b8) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c0) */
/* WARNING: Removing unreachable block (ram,0x0001078672e8) */
/* WARNING: Removing unreachable block (ram,0x000107867304) */
/* WARNING: Removing unreachable block (ram,0x000107867314) */
/* WARNING: Removing unreachable block (ram,0x000107867324) */
/* WARNING: Removing unreachable block (ram,0x000107867334) */
/* WARNING: Removing unreachable block (ram,0x000107867344) */
/* WARNING: Removing unreachable block (ram,0x000107867354) */
/* WARNING: Removing unreachable block (ram,0x000107867364) */
/* WARNING: Removing unreachable block (ram,0x000107867378) */
/* WARNING: Removing unreachable block (ram,0x000107867394) */
/* WARNING: Removing unreachable block (ram,0x0001078673a4) */
/* WARNING: Removing unreachable block (ram,0x0001078673ec) */
/* WARNING: Removing unreachable block (ram,0x0001078673ac) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078673b4) */
/* WARNING: Removing unreachable block (ram,0x00010786940c) */
/* WARNING: Removing unreachable block (ram,0x00010786739c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x00010724cfec) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */

undefined8 FUN_107867088(long param_1)

{
  undefined8 uVar1;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [152];
  
  func_0x000107868d78();
  func_0x000107869368();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010785f150(auStack_108);
  func_0x00010727473c(auStack_c8,auStack_108);
  func_0x000107268370();
  return uVar1;
}



/* Entry: 1078675d8; end: 1078675ef;  */

void FUN_1078675d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010786963c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107867770; end: 107867773;  */

void FUN_107867770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107867bcc; end: 107867c2b;  */

void FUN_107867bcc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  func_0x0001000df1ac(&uStack_11,*param_2,param_2[1]);
  return;
}



/* Entry: 107867d60; end: 107867d73;  */

void FUN_107867d60(void)

{
  func_0x000107867db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107867e6c; end: 107867e93;  */

void FUN_107867e6c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e3520;
  func_0x000107867ee8(param_1 + 3);
  return;
}



/* Entry: 107867f3c; end: 107867fe3;  */

void FUN_107867f3c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  func_0x00010786943c();
  *puVar1 = &PTR_DAT_1109e3570;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar1 + 3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0xc0,param_3)
  ;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = unaff_x19;
  return;
}



/* Entry: 107868078; end: 10786808f;  */

void FUN_107868078(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1078681b8; end: 1078681bb;  */

void FUN_1078681b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e36b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078682dc; end: 10786830b;  */

void FUN_1078682dc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xe38e38e38e38e4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x120);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e3700;
  func_0x000107868384(param_1 + 3);
  return;
}



/* Entry: 1078683f4; end: 10786840f;  */

void FUN_1078683f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3700;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107868760; end: 10786878f;  */

void FUN_107868760(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e3760;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107868ccc; end: 107868ce7;  */

void FUN_107868ccc(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107869450();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001074115f8(unaff_x20 + 0x18);
    }
    func_0x000107869334();
  }
  return;
}



/* Entry: 10786970c; end: 10786972b;  */

long FUN_10786970c(long param_1)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return param_1 / 1000000;
}



/* Entry: 107869948; end: 1078699c3;  */

void FUN_107869948(long param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_2;
  func_0x000107348ee8();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  while (lStack_30 != 0) {
    func_0x00010786aa5c(param_2,lStack_28,lStack_28 + 0x38);
    func_0x0001072963cc(&lStack_30);
  }
  return;
}



/* Entry: 107869e84; end: 107869f3f;  */

void FUN_107869e84(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  func_0x00010786d78c();
  uStack_48 = extraout_x8;
  func_0x000107869d14();
  func_0x00010786dc98();
  ppuStack_68 = &PTR_DAT_1109e3a70;
  pppuStack_50 = &ppuStack_68;
  ppuStack_88 = &PTR_DAT_1109e3af0;
  pppuStack_70 = &ppuStack_88;
  plVar1 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_60 = param_4;
  uStack_58 = param_5;
  func_0x000107869a4c();
  func_0x00010786dbf8();
  func_0x00010786dca0();
  *(long *)(unaff_x19 + 0x10) = param_1[4];
  func_0x00010786d6e8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010786dbf8();
  func_0x00010786dca0();
  func_0x00010786d838();
  func_0x00010786dae8();
  func_0x00010786b5b8();
  lVar2 = *param_1;
  lVar3 = lVar2;
  func_0x00010786bdc4(lVar2,plVar1);
  if (lVar3 != 0) {
    func_0x00010786c5e0(lVar2,lVar3);
  }
  return;
}



/* Entry: 10786a194; end: 10786a203;  */

void FUN_10786a194(long param_1,long param_2)

{
  undefined1 auStack_40 [32];
  
  func_0x00010786a0b4();
  if (param_2 != 0) {
    func_0x00010786dccc();
    func_0x00010786967c();
    func_0x0001073dcf84(param_1,auStack_40,0x113822d58);
    func_0x00010786d954();
    return;
  }
  func_0x00010786967c();
  func_0x000107277f30();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Entry: 10786a3ec; end: 10786a4e3;  */

/* WARNING: Possible PIC construction at 0x00010786a410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786a414) */
/* WARNING: Removing unreachable block (ram,0x00010786a418) */
/* WARNING: Removing unreachable block (ram,0x00010786a490) */
/* WARNING: Removing unreachable block (ram,0x00010786a4b0) */
/* WARNING: Removing unreachable block (ram,0x00010786a4e0) */
/* WARNING: Removing unreachable block (ram,0x00010786a49c) */

void FUN_10786a3ec(void)

{
  func_0x00010786d78c();
  func_0x00010786a978();
  return;
}



/* Entry: 10786a864; end: 10786a89f;  */

void FUN_10786a864(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= *(ulong *)(*param_1 + 0x10)) {
    return;
  }
  func_0x00010786dae8();
  func_0x00010786c940();
  plVar1 = (long *)*unaff_x20;
  if (unaff_x19 <= (ulong)(*(long *)(*plVar1 + -8) + plVar1[3])) {
    return;
  }
  if (unaff_x19 == 7) {
    lVar2 = 8;
  }
  else {
    lVar2 = (long)(unaff_x19 - 1) / 7 + unaff_x19;
  }
  uVar3 = 0xffffffffffffffff >> (LZCOUNT(lVar2) & 0x3fU);
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  func_0x00010786db7c(plVar1,uVar3);
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x00010786ddd4();
      func_0x00010786d9e4();
      func_0x000100061de0();
      func_0x00010786d964();
      func_0x00010786cc3c();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 10786a980; end: 10786a99f;  */

void FUN_10786a980(void)

{
  func_0x00010786def8();
  func_0x00010786a9a0();
  return;
}



/* Entry: 10786aaec; end: 10786ab6f;  */

void FUN_10786aaec(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131adac8 & 1) == 0) {
    iVar1 = 0x131adac8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010786ab70(0x1131adab8);
      ___cxa_guard_release(0x1131adac8);
    }
  }
  func_0x00010786dce4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010786da24();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10786ac7c; end: 10786accf;  */

long * FUN_10786ac7c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010786acd0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10786ae54; end: 10786ae6f;  */

void FUN_10786ae54(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e3830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10786afa4; end: 10786afbf;  */

void FUN_10786afa4(void)

{
  undefined1 uStack_11;
  
  func_0x00010786afc0(&uStack_11);
  return;
}



/* Entry: 10786b0e8; end: 10786b10f;  */

long FUN_10786b0e8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10786b314; end: 10786b32b;  */

long FUN_10786b314(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + param_2 * 0xa8;
  lVar1 = lVar2;
  func_0x000104c2fe00(lVar2,param_3);
  func_0x00010726cc04(lVar1 + 0x40,param_4 + 8);
  return lVar2;
}



/* Entry: 10786b4f4; end: 10786b563;  */

void FUN_10786b4f4(void)

{
  long lVar1;
  long *unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar2;
  undefined8 *unaff_x24;
  
  func_0x00010786d904();
  func_0x00010726d4a8();
  func_0x00010786dba4();
  if ((unaff_w20 & 1) != 0) {
    lVar2 = *unaff_x23;
    lVar1 = *(long *)(*unaff_x21 + 8) + unaff_x22 * 0x50;
    func_0x000104c318bc(lVar1,*unaff_x24);
    func_0x00010786dd04();
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x10);
  }
  lVar1 = ((long *)*unaff_x21)[1];
  *unaff_x19 = *(long *)*unaff_x21 + unaff_x22;
  unaff_x19[1] = lVar1 + unaff_x22 * 0x50;
  *(byte *)(unaff_x19 + 2) = unaff_w20;
  return;
}



/* Entry: 10786b6b0; end: 10786b6c7;  */

void FUN_10786b6b0(long param_1)

{
  func_0x00010786b6c8();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10786bb74; end: 10786bb87;  */

/* WARNING: Possible PIC construction at 0x00010786ba04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786bac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786ba08) */
/* WARNING: Removing unreachable block (ram,0x00010786ba14) */
/* WARNING: Removing unreachable block (ram,0x00010786ba28) */
/* WARNING: Removing unreachable block (ram,0x00010786ba30) */
/* WARNING: Removing unreachable block (ram,0x00010786ba3c) */
/* WARNING: Removing unreachable block (ram,0x00010786ba44) */
/* WARNING: Removing unreachable block (ram,0x00010786ba50) */
/* WARNING: Removing unreachable block (ram,0x00010786ba58) */
/* WARNING: Removing unreachable block (ram,0x00010786ba60) */
/* WARNING: Removing unreachable block (ram,0x00010786ba80) */
/* WARNING: Removing unreachable block (ram,0x00010786ba6c) */
/* WARNING: Removing unreachable block (ram,0x00010786ba74) */
/* WARNING: Removing unreachable block (ram,0x00010786ba84) */
/* WARNING: Removing unreachable block (ram,0x00010786ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010786bab4) */
/* WARNING: Removing unreachable block (ram,0x00010786babc) */
/* WARNING: Removing unreachable block (ram,0x00010786ba94) */
/* WARNING: Removing unreachable block (ram,0x00010786ba1c) */
/* WARNING: Removing unreachable block (ram,0x00010786bacc) */
/* WARNING: Removing unreachable block (ram,0x00010786bad0) */
/* WARNING: Removing unreachable block (ram,0x00010786d95c) */

void FUN_10786bb74(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(long)((float)param_2 / *(float *)(param_1 + 4));
  plVar1 = param_1;
  plVar2 = plVar4;
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar1 = plVar4;
  }
  plVar5 = (long *)param_1[1];
  if (plVar4 <= plVar5) {
    if (plVar4 < plVar5) {
      plVar1 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar5 < (long *)0x3) || (((ulong)plVar5 & (long)plVar5 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar1) {
        plVar1 = (long *)(1L << (-LZCOUNT((long)plVar1 - 1) & 0x3fU));
      }
      if (plVar4 <= plVar1) {
        plVar4 = plVar1;
      }
      if (plVar4 < plVar5) goto code_r0x00010786b958;
    }
    return;
  }
code_r0x00010786b958:
  func_0x00010786daa0();
  if (plVar2 != (long *)0x0) {
    if ((ulong)plVar2 >> 0x3d == 0) {
      plVar2 = (long *)((long)plVar2 << 3);
      __Znwm();
    }
    else {
      func_0x000104bd35f4();
    }
  }
  lVar3 = *plVar1;
  *plVar1 = (long)plVar2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786bf68; end: 10786c1d7;  */

undefined8 * FUN_10786bf68(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
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
  undefined8 uStack_58;
  
  puVar4 = &uStack_f0;
  uVar2 = param_1;
  func_0x00010786d7b0();
  puVar6 = *(undefined8 **)(uVar2 + 8);
  uStack_58 = extraout_x8;
  if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
    func_0x00010786a2a4(puVar6,param_2);
    if ((int)puVar6 == 0) goto LAB_10786c158;
    func_0x00010786d8ac();
    func_0x00010786bb88(*(undefined8 *)(param_1 + 0x10),param_2);
    func_0x00010786d6e8(uStack_58);
    if ((bool)in_ZR) {
      func_0x0001074b591c();
      func_0x0001074af4b8();
      unaff_x20[4] = *(undefined8 *)(unaff_x19 + 0x20);
      return unaff_x20;
    }
  }
  else {
    if ((*(byte *)(param_4 + 0x38) & 1) == 0) {
      uStack_f0 = *(undefined8 *)(param_1 + 0x10);
      uStack_e8 = param_2;
      lStack_e0 = param_3;
      func_0x00010786d994();
      func_0x00010786dc30();
      if ((int)uVar2 == 0) {
        puVar6 = &uStack_d0;
        func_0x0001078696e8(puVar6);
        func_0x00010786dde8();
        func_0x00010786dc68();
      }
      else {
        func_0x00010786d8ac();
        uVar5 = uVar2;
        func_0x00010786d994();
        func_0x000107869b38(&uStack_d0,uVar2,uVar5);
        if ((uStack_b8 & 1) == 0) goto LAB_10786c184;
        func_0x00010786dde8();
        puVar6 = &uStack_d0;
        func_0x0001073de9d8(puVar6);
      }
    }
    else {
      func_0x00010786d994();
      uVar5 = uVar2;
      func_0x00010786dc78();
      func_0x00010786a2c0(puVar6,param_2,uVar2);
      if ((int)puVar6 == 0) {
LAB_10786c100:
        func_0x00010786d994();
        func_0x00010786dc30();
        if ((int)puVar6 == 0) goto LAB_10786c158;
        func_0x00010786d994();
        func_0x00010786dc78();
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        func_0x00010786db2c();
        puVar6 = (undefined8 *)((ulong)&uStack_d0 | 8);
      }
      else {
        func_0x00010786d8ac();
        func_0x000107869b38(&uStack_d0);
        func_0x000107869920(&uStack_d0);
        puVar6 = &uStack_d0;
        func_0x0001073de9d8();
        if ((uVar5 & 1) == 0) goto LAB_10786c100;
        func_0x00010786d8ac();
        puVar3 = puVar6;
        func_0x00010786d994();
        func_0x000107869b38(&uStack_f0,puVar6,puVar3);
        func_0x00010786dc78();
        func_0x000107869920(&uStack_f0,puVar6);
        func_0x0001072786d8(&uStack_c8,(undefined1 *)((long)puVar4 + 8));
        func_0x00010786d954();
        func_0x00010786d994();
        func_0x00010786dc78();
        func_0x00010786db2c();
        puVar6 = &uStack_c8;
      }
      func_0x00010726af18(puVar6);
    }
LAB_10786c158:
    func_0x00010786d6e8(uStack_58);
    if ((bool)in_ZR) {
      return puVar6;
    }
  }
  ___stack_chk_fail();
LAB_10786c184:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10786c18c);
  (*pcVar1)();
}



/* Entry: 10786c340; end: 10786c353;  */

undefined ** FUN_10786c340(void)

{
  return &PTR_DAT_1109e39b0;
}



/* Entry: 10786c4f0; end: 10786c517;  */

void FUN_10786c4f0(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e3ad0);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c730; end: 10786c74b;  */

bool FUN_10786c730(long param_1)

{
  func_0x00010786c74c();
  return param_1 != 0;
}



/* Entry: 10786c8c4; end: 10786c8e7;  */

void FUN_10786c8c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e3bf0;
  return;
}



/* Entry: 10786ca38; end: 10786ca6b;  */

void FUN_10786ca38(long param_1)

{
  func_0x00010786ca50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10786cd14; end: 10786cd87;  */

undefined1  [16] FUN_10786cd14(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  ulong unaff_x28;
  undefined1 auVar2 [16];
  
  func_0x00010786d9f0();
  func_0x00010786d890();
  func_0x00010786d7c0();
  func_0x00010786d9b8();
  do {
    func_0x00010786dd2c();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x00010786d92c();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_10786cd68;
      }
    }
    func_0x00010786d85c();
  } while ((extraout_x8 & 1) == 0);
  func_0x00010786d9e4();
  func_0x00010786cda0();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_10786cd68:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 10786cf20; end: 10786cf3b;  */

void FUN_10786cf20(void)

{
  func_0x00010786d840();
  func_0x00010786cf3c();
  return;
}



/* Entry: 10786d1b8; end: 10786d1bb;  */

void FUN_10786d1b8(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10786d394; end: 10786d467;  */

long * FUN_10786d394(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long lVar4;
  long extraout_x9;
  ulong uVar5;
  long *unaff_x19;
  long *plVar6;
  
  plVar3 = param_2;
  func_0x00010786d78c();
  func_0x000100061de0();
  func_0x00010786dea4();
  lVar4 = extraout_x8_00;
  if ((extraout_x9 == 0) && (*(char *)(extraout_x8_00 + (long)param_1) != -2)) {
    uVar5 = unaff_x19[2];
    bVar2 = 8 < uVar5;
    if ((bVar2) && (func_0x00010786de78(), uVar5 = extraout_x8_01, bVar2)) {
      plVar3 = (long *)&UNK_1109e3c80;
      func_0x00010786dd8c();
    }
    else {
      plVar3 = (long *)(uVar5 << 1 | 1);
      param_1 = unaff_x19;
      func_0x00010786d1bc();
    }
    func_0x00010786daa0();
    func_0x000100061de0();
    lVar4 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar2 = *(char *)(lVar4 + (long)param_1) == -0x80;
  *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) - (ulong)bVar2;
  bVar1 = (byte)param_2 & 0x7f;
  uVar5 = unaff_x19[2];
  *(byte *)(lVar4 + (long)param_1) = bVar1;
  *(byte *)(lVar4 + (uVar5 & (long)param_1 - 7U) + (uVar5 & 7)) = bVar1;
  func_0x00010786d6e8(extraout_x8);
  if (bVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = (long *)plVar3[6];
  if (plVar6 == (long *)0xffffffffffffffff) {
    plVar6 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar6,(undefined *)((long)plVar6 + (long)plVar3));
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar6;
}



/* Entry: 10786d5e8; end: 10786d60b;  */

void FUN_10786d5e8(undefined8 param_1)

{
  uint extraout_w8;
  long unaff_x27;
  
  func_0x00010786dae8();
  func_0x00010786d7c0();
  func_0x00010786d8e4();
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000104c32db4();
      if ((int)param_1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786e214; end: 10786e277;  */

undefined1  [16] FUN_10786e214(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  while ((lVar4 = lVar1, lVar3 != lVar1 &&
         (uVar2 = param_2, func_0x000104c32db4(param_2,lVar3), lVar4 = lVar3, (uVar2 & 1) == 0))) {
    lVar3 = lVar3 + 0x58;
  }
  lVar3 = lVar4 + 0x38;
  if (lVar4 == param_1[1]) {
    lVar3 = 0;
  }
  auVar5[8] = lVar4 != param_1[1];
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 10786e938; end: 10786e99f;  */

void FUN_10786e938(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  puVar1 = (undefined8 *)param_2[1];
  for (param_2 = (undefined8 *)*param_2; param_2 != puVar1; param_2 = param_2 + 2) {
    (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,param_1);
  }
  return;
}



/* Entry: 10786ed1c; end: 10786ed73;  */

undefined1  [16] FUN_10786ed1c(double *param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1[1] + (((double)param_2 - param_1[1]) - param_1[3]) * 0.5;
  auVar1._8_8_ = *param_1 + (((double)param_3 - *param_1) - param_1[2]) * 0.5;
  return auVar1;
}



/* Entry: 10786f838; end: 10786f98b;  */

/* WARNING: Possible PIC construction at 0x00010786f8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786fa3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786f8c4) */
/* WARNING: Removing unreachable block (ram,0x00010786fa40) */

void FUN_10786f838(undefined8 param_1,undefined4 *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *unaff_x19;
  uint *unaff_x20;
  uint *puVar11;
  long unaff_x21;
  ulong uVar12;
  undefined8 unaff_x22;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar13 = &stack0xfffffffffffffff0;
  func_0x000107871298();
  uVar7 = *(short *)((long)param_3 + 0x16) == 3;
  if ((bool)uVar7) {
    func_0x000107871428();
    func_0x000107269c1c();
    piVar8 = *(int **)(unaff_x20 + 2);
    puVar11 = (uint *)(piVar8 + 6);
    unaff_x21 = (ulong)*unaff_x20 * 0x30;
    unaff_x22 = 0x15;
    param_2 = unaff_x19;
    if ((ulong)*unaff_x20 * 3 != 0) {
      if ((*(ushort *)((long)piVar8 + 0x16) >> 0xc & 1) == 0) {
        iVar3 = *piVar8;
        piVar8 = *(int **)(piVar8 + 2);
      }
      else {
        iVar3 = 0x15 - (uint)*(byte *)((long)piVar8 + 0x15);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                (auStack_d0,piVar8,iVar3);
      func_0x0001072625b4(auStack_70,auStack_d0);
      puVar14 = (undefined *)0x10786f8c4;
      puVar6 = auStack_f0;
      unaff_x20 = puVar11;
      goto code_r0x00010786f98c;
    }
    func_0x000107871270(uStack_38);
    unaff_x20 = puVar11;
    if ((bool)uVar7) {
      return;
    }
  }
  else {
    func_0x000107871318();
    param_3 = (uint *)&UNK_10f4304cf;
    __ZNSt13runtime_errorC1EPKc();
    func_0x000107871284();
    func_0x0001078713b4();
  }
  puVar11 = param_3;
  ___stack_chk_fail();
  func_0x000107871320();
  puVar14 = &SUB_10786f98c;
  func_0x000107871338();
  puVar6 = auStack_f0;
code_r0x00010786f98c:
  do {
    *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
    *(long *)(puVar6 + -0x28) = unaff_x21;
    *(uint **)(puVar6 + -0x20) = unaff_x20;
    *(undefined4 **)(puVar6 + -0x18) = param_2;
    *(undefined1 **)(puVar6 + -0x10) = puVar13;
    *(undefined **)(puVar6 + -8) = puVar14;
    puVar13 = puVar6 + -0x10;
    func_0x000107871428();
    func_0x000107871298();
    uVar4 = *(ushort *)((long)puVar11 + 0x16);
    uVar7 = (uVar4 & 7) == 5;
    switch(uVar4 & 7) {
    case 0:
      *param_2 = 7;
code_r0x00010786fb40:
      func_0x000107871270(*(undefined8 *)(puVar6 + -0x38));
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
code_r0x00010786fb58:
      func_0x000107871318();
      func_0x0001078712e0();
      func_0x000107871258();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10786fb6c);
      (*pcVar5)();
    case 1:
      *param_2 = 6;
      *(undefined1 *)(param_2 + 2) = 0;
      goto code_r0x00010786fb40;
    case 2:
      *param_2 = 6;
      *(undefined1 *)(param_2 + 2) = 1;
      goto code_r0x00010786fb40;
    case 3:
      FUN_10786f838(puVar6 + -0x90,unaff_x20);
      *param_2 = 1;
      uVar9 = *(undefined8 *)(puVar6 + -0x90);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar6 + -0x88);
      *(undefined8 *)(param_2 + 2) = uVar9;
      *(undefined8 *)(puVar6 + -0x90) = 0;
      *(undefined8 *)(puVar6 + -0x88) = 0;
      func_0x000104c335c0(puVar6 + -0x90);
      goto code_r0x00010786fb40;
    case 4:
      func_0x000107289330(puVar6 + -0xa0);
      if (*(short *)((long)unaff_x20 + 0x16) != 4) goto code_r0x00010786fb58;
      uVar12 = (ulong)*unaff_x20;
      uVar1 = (*(long **)(puVar6 + -0xa0))[2] - **(long **)(puVar6 + -0xa0) >> 6;
      uVar7 = uVar12 == uVar1;
      if (uVar1 < uVar12) {
        func_0x000107289354(puVar6 + -0xa0);
        func_0x0001072ac134(*(undefined8 *)(puVar6 + -0xa0),uVar12);
        uVar12 = (ulong)*unaff_x20;
      }
      puVar11 = *(uint **)(unaff_x20 + 2);
      unaff_x21 = uVar12 * 0x18;
      if (uVar12 * 3 == 0) {
        *param_2 = 0;
        uVar9 = *(undefined8 *)(puVar6 + -0xa0);
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar6 + -0x98);
        *(undefined8 *)(param_2 + 2) = uVar9;
        *(undefined8 *)(puVar6 + -0xa0) = 0;
        *(undefined8 *)(puVar6 + -0x98) = 0;
        func_0x000104c33108(puVar6 + -0xa0);
        goto code_r0x00010786fb40;
      }
      puVar14 = &UNK_10786fa40;
      puVar6 = puVar6 + -0xc0;
      unaff_x20 = puVar11;
      break;
    case 5:
      uVar7 = (uVar4 & 0x1000) == 0;
      uVar2 = *unaff_x20;
      puVar11 = *(uint **)(unaff_x20 + 2);
      if (!(bool)uVar7) {
        uVar2 = 0x15 - (int)*(char *)((long)unaff_x20 + 0x15);
        puVar11 = unaff_x20;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                (puVar6 + -0xb8,puVar11,uVar2);
      func_0x00010787155c();
      func_0x000107268798();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + -0xb8);
      goto code_r0x00010786fb40;
    default:
      if ((uVar4 >> 8 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          func_0x0001073274d0(unaff_x20);
          *param_2 = 3;
          *(undefined8 *)(param_2 + 2) = param_1;
          goto code_r0x00010786fb40;
        }
        uVar9 = *(undefined8 *)unaff_x20;
        uVar10 = 4;
      }
      else {
        uVar9 = *(undefined8 *)unaff_x20;
        uVar10 = 5;
      }
      *param_2 = uVar10;
      *(undefined8 *)(param_2 + 2) = uVar9;
      goto code_r0x00010786fb40;
    }
  } while( true );
}



/* Entry: 10787030c; end: 10787047f;  */

/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_10787030c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  
code_r0x00010787030c:
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x000107871298();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  func_0x000107871364();
  *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
  *(undefined **)((long)register0x00000008 + -0x60) = &DAT_10f35070a;
  *(undefined4 *)((long)register0x00000008 + -0x58) = 7;
  piVar5 = (int *)((long)register0x00000008 + -0x60);
  func_0x0001078713a8();
  iVar1 = param_2[0xc];
  if (iVar1 != 4) {
    *(int **)((long)register0x00000008 + -0x68) = param_3;
    *(char **)((long)register0x00000008 + -0x60) = "id";
    *(undefined4 *)((long)register0x00000008 + -0x58) = 2;
    if (iVar1 == 3) {
      func_0x000107871308();
      func_0x0001078707c8();
    }
    else if (iVar1 == 2) {
      func_0x000107871308();
      func_0x0001078707ec();
    }
    else if (iVar1 == 1) {
      func_0x000107871308(*(undefined8 *)(param_2 + 0xe));
      func_0x000107870810();
    }
    else {
      piVar5 = param_2 + 0xe;
      FUN_107870840((undefined1 *)((long)register0x00000008 + -0x50),
                    (undefined1 *)((long)register0x00000008 + -0x68));
    }
    func_0x0001078712cc();
    func_0x000107871354();
  }
  *(undefined **)((long)register0x00000008 + -0x60) = &DAT_10f3005c3;
  *(undefined4 *)((long)register0x00000008 + -0x58) = 8;
  piVar8 = (int *)((long)register0x00000008 + -0x50);
  unaff_x30 = (undefined *)0x107870408;
  unaff_x19 = param_1;
  unaff_x20 = param_3;
  unaff_x21 = param_2;
  do {
    *(int **)(puVar2 + -0x30) = unaff_x22;
    *(int **)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x000107871298();
    iVar1 = *param_2;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    uVar4 = iVar1 == 7;
    unaff_x20 = param_2;
    if (!(bool)uVar4) {
      piVar5 = param_2;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)(puVar2 + -0x60) = piVar5;
      _strlen();
      *(int *)(puVar2 + -0x58) = (int)piVar5;
      piVar5 = (int *)(puVar2 + -0x60);
      func_0x0001078713a8();
      uVar4 = *param_2 == 0;
      puVar10 = &UNK_10f4303a6;
      if (!(bool)uVar4) {
        puVar10 = &UNK_10f43041c;
      }
      *(int **)(puVar2 + -0x68) = param_3;
      *(undefined **)(puVar2 + -0x60) = puVar10;
      uVar7 = 10;
      if (!(bool)uVar4) {
        uVar7 = 0xb;
      }
      *(undefined4 *)(puVar2 + -0x58) = uVar7;
      param_3 = (int *)(puVar2 + -0x68);
      func_0x000107870f70(puVar2 + -0x50);
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = param_2;
    }
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)uVar4) {
      return unaff_x20;
    }
    ___stack_chk_fail();
    piVar6 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    puVar3 = puVar2 + -0xc0;
    *(int **)(puVar2 + -0x90) = unaff_x20;
    *(int **)(puVar2 + -0x88) = piVar8;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
    puVar9 = puVar2 + -0x80;
    func_0x0001078712ac();
    *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
    iVar1 = piVar5[2];
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar5;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined2 *)(puVar2 + -0x9a) = 0x405;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(int *)(puVar2 + -0xb0) = iVar1;
    *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)param_3;
    *(int *)(puVar2 + -0xb8) = param_3[2];
    piVar5 = (int *)(puVar2 + -0xb0);
    puVar10 = &UNK_107870294;
    unaff_x19 = piVar8;
    while( true ) {
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x40);
      puVar2 = puVar3 + -0x40;
      param_3 = (int *)(puVar3 + -0x40);
      *(int **)(puVar3 + -0x20) = unaff_x20;
      *(int **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = puVar9;
      *(undefined **)(puVar3 + -8) = puVar10;
      unaff_x29 = puVar3 + -0x10;
      func_0x0001078712ac();
      func_0x000107871404();
      func_0x000107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar3 + -0x28));
      if ((bool)uVar4) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      unaff_x30 = &UNK_10787075c;
      func_0x00010787135c();
      param_2 = piVar6 + 2;
      piVar8 = extraout_x8_00;
      if (*piVar6 == 2) break;
      param_1 = extraout_x8_00;
      if (*piVar6 == 1) goto code_r0x00010787030c;
      *(int **)(puVar3 + -0x70) = unaff_x22;
      *(int **)(puVar3 + -0x68) = unaff_x21;
      *(int **)(puVar3 + -0x60) = unaff_x20;
      *(int **)(puVar3 + -0x58) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x50) = unaff_x29;
      *(undefined **)(puVar3 + -0x48) = &UNK_10787075c;
      puVar9 = puVar3 + -0x50;
      func_0x000107871298();
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[0] = 0;
      extraout_x8_00[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar3 + -0x88) = 4;
      *(undefined **)(puVar3 + -0xa8) = &UNK_10f4305cd;
      *(undefined4 *)(puVar3 + -0xa0) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar3 + -0x88) = 0;
      *(undefined8 *)(puVar3 + -0x80) = 0;
      *(undefined8 *)(puVar3 + -0x90) = 0;
      *(undefined2 *)(puVar3 + -0x7a) = 4;
      unaff_x22 = (int *)(*(undefined8 **)param_2)[1];
      for (unaff_x21 = (int *)**(undefined8 **)param_2; uVar4 = unaff_x21 == unaff_x22, !(bool)uVar4
          ; unaff_x21 = unaff_x21 + 0x1c) {
        FUN_10787030c(puVar3 + -0xa8,unaff_x21,param_3);
        func_0x000107870d3c(puVar3 + -0x90,puVar3 + -0xa8,param_3);
        func_0x000107326ddc(puVar3 + -0xa8);
      }
      *(undefined **)(puVar3 + -0xa8) = &UNK_10f4305df;
      *(undefined4 *)(puVar3 + -0xa0) = 8;
      piVar5 = (int *)(puVar3 + -0x90);
      puVar10 = &UNK_1078706cc;
      puVar3 = puVar3 + -0xb0;
      piVar6 = extraout_x8_00;
      unaff_x19 = extraout_x8_00;
      unaff_x20 = param_3;
    }
  } while( true );
}



/* Entry: 107870840; end: 1078708a7;  */

void FUN_107870840(void)

{
  func_0x000107871428();
  func_0x00010787145c();
  func_0x000107264c5c();
  func_0x000107871384();
  func_0x000107327ccc();
  return;
}



/* Entry: 107870e84; end: 107870ecb;  */

long FUN_107870e84(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 4) < param_2) {
    lVar1 = param_1;
    func_0x000107871478((ulong)*(uint *)(param_1 + 4) * 0x30,param_1,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
    *(uint *)(param_1 + 4) = param_2;
  }
  return param_1;
}



/* Entry: 10787111c; end: 10787112b;  */

/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_10787111c(int *param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *puVar7;
  undefined1 *unaff_x29;
  undefined *puVar8;
  undefined *unaff_x30;
  
  piVar5 = (int *)*param_2;
code_r0x000107870168:
  do {
    *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107871298();
    iVar1 = *param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    uVar3 = iVar1 == 7;
    unaff_x20 = param_3;
    if (!(bool)uVar3) {
      piVar4 = param_3;
      func_0x000107871364();
      *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)((long)register0x00000008 + -0x60) = piVar4;
      _strlen();
      *(int *)((long)register0x00000008 + -0x58) = (int)piVar4;
      param_4 = (int *)((long)register0x00000008 + -0x60);
      func_0x0001078713a8();
      uVar3 = *param_3 == 0;
      puVar8 = &UNK_10f4303a6;
      if (!(bool)uVar3) {
        puVar8 = &UNK_10f43041c;
      }
      *(int **)((long)register0x00000008 + -0x68) = piVar5;
      *(undefined **)((long)register0x00000008 + -0x60) = puVar8;
      uVar6 = 10;
      if (!(bool)uVar3) {
        uVar6 = 0xb;
      }
      *(undefined4 *)((long)register0x00000008 + -0x58) = uVar6;
      piVar5 = (int *)((long)register0x00000008 + -0x68);
      func_0x000107870f70((undefined1 *)((long)register0x00000008 + -0x50));
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = param_3;
    }
    func_0x000107871270(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)uVar3) {
      return unaff_x20;
    }
    ___stack_chk_fail();
    piVar4 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    *(int **)((long)register0x00000008 + -0x90) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x88) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107870244;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x0001078712ac();
    *(undefined8 *)((long)register0x00000008 + -0x98) = extraout_x8;
    iVar1 = param_4[2];
    *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)param_4;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined2 *)((long)register0x00000008 + -0x9a) = 0x405;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(int *)((long)register0x00000008 + -0xb0) = iVar1;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = *(undefined8 *)piVar5;
    *(int *)((long)register0x00000008 + -0xb8) = piVar5[2];
    param_4 = (int *)((long)register0x00000008 + -0xb0);
    puVar8 = &UNK_107870294;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
    unaff_x19 = param_1;
    while( true ) {
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x40);
      piVar5 = (int *)(puVar2 + -0x40);
      *(int **)(puVar2 + -0x20) = unaff_x20;
      *(int **)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar7;
      *(undefined **)(puVar2 + -8) = puVar8;
      unaff_x29 = puVar2 + -0x10;
      func_0x0001078712ac();
      func_0x000107871404();
      func_0x000107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar2 + -0x28));
      if ((bool)uVar3) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      unaff_x30 = &UNK_10787075c;
      func_0x00010787135c();
      param_3 = piVar4 + 2;
      param_1 = extraout_x8_00;
      if (*piVar4 == 2) goto code_r0x000107870168;
      if (*piVar4 == 1) break;
      *(int **)(puVar2 + -0x70) = unaff_x22;
      *(int **)(puVar2 + -0x68) = unaff_x21;
      *(int **)(puVar2 + -0x60) = unaff_x20;
      *(int **)(puVar2 + -0x58) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x50) = unaff_x29;
      *(undefined **)(puVar2 + -0x48) = &UNK_10787075c;
      puVar7 = puVar2 + -0x50;
      func_0x000107871298();
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[0] = 0;
      extraout_x8_00[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x88) = 4;
      *(undefined **)(puVar2 + -0xa8) = &UNK_10f4305cd;
      *(undefined4 *)(puVar2 + -0xa0) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar2 + -0x88) = 0;
      *(undefined8 *)(puVar2 + -0x80) = 0;
      *(undefined8 *)(puVar2 + -0x90) = 0;
      *(undefined2 *)(puVar2 + -0x7a) = 4;
      unaff_x22 = (int *)(*(undefined8 **)param_3)[1];
      for (unaff_x21 = (int *)**(undefined8 **)param_3; uVar3 = unaff_x21 == unaff_x22, !(bool)uVar3
          ; unaff_x21 = unaff_x21 + 0x1c) {
        FUN_10787030c(puVar2 + -0xa8,unaff_x21,piVar5);
        func_0x000107870d3c(puVar2 + -0x90,puVar2 + -0xa8,piVar5);
        func_0x000107326ddc(puVar2 + -0xa8);
      }
      *(undefined **)(puVar2 + -0xa8) = &UNK_10f4305df;
      *(undefined4 *)(puVar2 + -0xa0) = 8;
      param_4 = (int *)(puVar2 + -0x90);
      puVar8 = &UNK_1078706cc;
      puVar2 = puVar2 + -0xb0;
      piVar4 = extraout_x8_00;
      unaff_x19 = extraout_x8_00;
      unaff_x20 = piVar5;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xb0);
    *(int **)(puVar2 + -0x70) = unaff_x22;
    *(int **)(puVar2 + -0x68) = unaff_x21;
    *(int **)(puVar2 + -0x60) = unaff_x20;
    *(int **)(puVar2 + -0x58) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x50) = unaff_x29;
    *(undefined **)(puVar2 + -0x48) = &UNK_10787075c;
    unaff_x29 = puVar2 + -0x50;
    func_0x000107871298();
    extraout_x8_00[2] = 0;
    extraout_x8_00[3] = 0;
    extraout_x8_00[4] = 0;
    extraout_x8_00[5] = 0;
    extraout_x8_00[0] = 0;
    extraout_x8_00[1] = 0;
    func_0x000107871364();
    *(undefined4 *)(puVar2 + -0x88) = 4;
    *(undefined **)(puVar2 + -0xa0) = &DAT_10f35070a;
    *(undefined4 *)(puVar2 + -0x98) = 7;
    param_4 = (int *)(puVar2 + -0xa0);
    func_0x0001078713a8();
    iVar1 = piVar4[0xe];
    if (iVar1 != 4) {
      *(int **)(puVar2 + -0xa8) = piVar5;
      *(char **)(puVar2 + -0xa0) = "id";
      *(undefined4 *)(puVar2 + -0x98) = 2;
      if (iVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (iVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (iVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(piVar4 + 0x10));
        func_0x000107870810();
      }
      else {
        param_4 = piVar4 + 0x10;
        FUN_107870840(puVar2 + -0x90,puVar2 + -0xa8);
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)(puVar2 + -0xa0) = &DAT_10f3005c3;
    *(undefined4 *)(puVar2 + -0x98) = 8;
    param_1 = (int *)(puVar2 + -0x90);
    unaff_x30 = (undefined *)0x107870408;
    unaff_x19 = extraout_x8_00;
    unaff_x20 = piVar5;
    unaff_x21 = param_3;
  } while( true );
}


