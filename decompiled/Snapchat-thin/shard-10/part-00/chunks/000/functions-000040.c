/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10739f918; end: 10739f92b;  */

void FUN_10739f918(void)

{
  FUN_10732e68c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739f92c; end: 10739fa4f;  */

undefined * FUN_10739f92c(undefined *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  switch(param_3) {
  default:
    ppuVar2 = &PTR_DAT_1109a9968;
    break;
  case 2:
  case 3:
    ppuVar2 = &PTR_DAT_1109a9958;
    break;
  case 4:
  case 5:
    func_0x0001005d466c();
    puVar1 = &UNK_10f40b4b0;
    func_0x00010739fedc(&UNK_10f40b4b0);
    goto code_r0x00010739f9f4;
  case 6:
  case 7:
    ppuVar2 = &PTR_DAT_1109a9978;
    break;
  case 8:
    func_0x0001005d466c();
    puVar1 = &UNK_10f40b534;
    func_0x00010739fedc(&UNK_10f40b534);
    goto code_r0x00010739f9f4;
  case 9:
    func_0x0001005d466c();
    puVar1 = &UNK_10f40b544;
    func_0x00010739fedc(&UNK_10f40b544);
code_r0x00010739f9f4:
    func_0x0001003a9204();
    return puVar1;
  case 10:
    ppuVar2 = &PTR_DAT_1109a9988;
  }
  func_0x000107c60c50(param_1,*ppuVar2,ppuVar2[1]);
  return param_1;
}



/* Entry: 10739fa50; end: 10739fc33;  */

/* WARNING: Removing unreachable block (ram,0x00010739fbec) */
/* WARNING: Removing unreachable block (ram,0x00010739fbf0) */
/* WARNING: Removing unreachable block (ram,0x00010739fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010739fc08) */

undefined1 * FUN_10739fa50(undefined8 *param_1,undefined1 *param_2,int param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x20;
  long lVar3;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3 == 10;
  switch(param_3) {
  case 0:
  case 4:
  case 6:
  case 8:
  case 9:
    uVar1 = *(char *)(param_4 + 0x18) == '\x01';
    if (!(bool)uVar1) goto LAB_10739facc;
    func_0x0001072e787c(param_4);
    param_2 = auStack_98;
    FUN_10739fc34(param_2,&PTR_s_X_Snap_Route_Tag_1109a99a8,param_4);
    func_0x00010739fe14();
    break;
  case 1:
  case 5:
  case 7:
    func_0x00010739fee8();
    param_2 = auStack_98;
    FUN_10739fc68();
    func_0x00010739fe14();
    break;
  case 2:
    func_0x0001005d466c();
    func_0x00010739fec8();
    func_0x00010739fe78();
    func_0x00010739fe30();
    func_0x00010739fe14();
    func_0x00010739fe60();
    goto code_r0x00010739fb6c;
  case 3:
    func_0x0001005d466c();
    func_0x00010739fec8();
    func_0x00010739fe78();
    func_0x00010739fe30();
    unaff_x20 = auStack_68;
    func_0x00010739fee8();
    FUN_10739fc68(unaff_x20);
    func_0x000104bd4884(param_1,auStack_98,2);
    lVar3 = 0x30;
    do {
      param_2 = auStack_98 + lVar3;
      func_0x0001002aa0bc();
      lVar3 = lVar3 + -0x30;
      uVar1 = lVar3 == -0x30;
    } while (!(bool)uVar1);
code_r0x00010739fb6c:
    func_0x00010739feac();
    goto LAB_10739fb70;
  default:
LAB_10739facc:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    goto LAB_10739fb70;
  }
  func_0x00010739fe60();
LAB_10739fb70:
  func_0x00010739fefc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar3 = -0x60;
    puVar2 = unaff_x20;
    do {
      func_0x0001002aa0bc(puVar2);
      puVar2 = puVar2 + -0x30;
      lVar3 = lVar3 + 0x30;
    } while (lVar3 != 0);
    func_0x00010739feac();
    puVar2 = param_2;
    __Unwind_Resume(param_2);
    func_0x00010739fe68();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar2 + 0x18,unaff_x20);
    return param_2;
  }
  return param_2;
}



/* Entry: 10739fc34; end: 10739fc67;  */

void FUN_10739fc34(long param_1)

{
  func_0x00010739fe68();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x18);
  return;
}



/* Entry: 10739fc68; end: 10739fc9b;  */

void FUN_10739fc68(long param_1)

{
  func_0x00010739fe68();
  func_0x00010002b838(param_1 + 0x18);
  return;
}



/* Entry: 10739fc9c; end: 10739fccf;  */

void FUN_10739fc9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010002b838();
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10739fcd0; end: 10739fd5b;  */

undefined8 *
FUN_10739fcd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  uVar3 = uVar2;
  func_0x0001072bb3b4();
  uVar4 = uVar3;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar3;
  param_1[6] = param_5;
  param_1[7] = uVar4;
  return param_1;
}



/* Entry: 10739fd5c; end: 10739fe13;  */

void FUN_10739fd5c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar9 = param_1[4];
  lVar5 = param_2;
  func_0x0001005d466c();
  lVar6 = lVar5;
  func_0x0001005d466c();
  lVar7 = lVar6;
  func_0x0001072bb3b4();
  lVar8 = lVar7;
  func_0x0001005d466c();
  lStack_a0 = lVar2;
  lStack_98 = lVar5;
  lStack_90 = lVar3;
  lStack_88 = lVar6;
  lStack_80 = lVar4;
  lStack_78 = lVar7;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107268a34(param_2,param_3,*puVar1,puVar1[1],0xdddd,&lStack_a0);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 10739fe14; end: 10739ff0f;  */

void FUN_10739fe14(void)

{
  undefined8 *unaff_x19;
  
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0x3f800000;
  func_0x000104bd48cc();
  return;
}



/* Entry: 10739ff10; end: 1073a04bb;  */

undefined8 *
FUN_10739ff10(long param_1,undefined1 *param_2,long param_3,undefined8 ****param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 **ppuStack_600;
  undefined8 **ppuStack_5f8;
  undefined1 auStack_5e8 [336];
  undefined8 auStack_498 [3];
  undefined1 auStack_480 [24];
  undefined8 *puStack_468;
  undefined1 auStack_460 [336];
  undefined8 **ppuStack_310;
  undefined8 **ppuStack_308;
  undefined8 **ppuStack_300;
  undefined1 auStack_2f8 [24];
  undefined8 ***pppuStack_2e0;
  undefined1 auStack_2d8 [32];
  undefined8 uStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 ***pppuStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 auStack_270 [5];
  undefined **ppuStack_248;
  long lStack_240;
  undefined1 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [32];
  undefined8 ***pppuStack_200;
  undefined8 *puStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [56];
  undefined8 uStack_190;
  undefined8 *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [192];
  long lStack_70;
  undefined8 uStack_68;
  
  puVar6 = auStack_270;
  puVar7 = auStack_270;
  puVar8 = param_2;
  ppppuVar12 = param_4;
  func_0x0001073a1088();
  uStack_68 = extraout_x8;
  __ZNSt3__19to_stringEj(auStack_1c8,*(undefined4 *)(puVar8 + 4));
  FUN_1073a0884(&uStack_190,&DAT_10f62b0e2,auStack_1c8);
  __ZNSt3__19to_stringEj(&pppuStack_200,*(undefined4 *)(param_2 + 8));
  FUN_1073a0884(auStack_160,"y",&pppuStack_200);
  __ZNSt3__19to_stringEi(auStack_220,*param_2);
  FUN_1073a0884(auStack_130,"z",auStack_220);
  ppppuVar16 = (undefined8 ****)&uStack_190;
  func_0x000104bd4884(auStack_270,&uStack_190,3);
  lVar15 = 0x60;
  do {
    func_0x0001002aa0bc((long)ppppuVar16 + lVar15);
    lVar15 = lVar15 + -0x30;
  } while (lVar15 != -0x30);
  func_0x0001073a113c();
  func_0x0001073a10dc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  func_0x000107264c5c(param_3);
  func_0x000107879290(&pppuStack_200);
  puVar1 = puStack_1f8;
  ppppuVar5 = (undefined8 ****)pppuStack_200;
  if (-1 < (long)uStack_1f0) {
    puVar1 = (undefined8 *)(uStack_1f0 >> 0x38);
    ppppuVar5 = &pppuStack_200;
  }
  ppppuVar10 = (undefined8 ****)(param_3 + 0x98);
  func_0x000107879290(&uStack_190,ppppuVar5,puVar1);
  func_0x0001072625b4(auStack_1c8,&uStack_190);
  func_0x0001073a1128();
  func_0x0001073a10dc();
  func_0x000107526c60(param_1,auStack_1c8);
  ppppuVar5 = (undefined8 ****)(param_3 + 0x58);
  func_0x00010726594c(param_1 + 0x170);
  ppppuVar9 = (undefined8 ****)*param_4;
  ppppuVar11 = (undefined8 ****)param_4[1];
  if (ppppuVar9 != ppppuVar11) {
    *(undefined2 *)(param_1 + 0x1b0) = 0x101;
    ppppuVar16 = (undefined8 ****)(param_1 + 0x1b8);
    if (ppppuVar16 != param_4) {
      param_4 = (undefined8 ****)((long)ppppuVar11 - (long)ppppuVar9);
      ppppuVar17 = *(undefined8 *****)(param_1 + 0x1b8);
      if ((undefined8 ****)(*(long *)(param_1 + 0x1c8) - (long)ppppuVar17) < param_4) {
        func_0x000100a2b9c0(ppppuVar16);
        ppppuVar5 = ppppuVar16;
        func_0x0001068896a8(ppppuVar16,param_4);
        func_0x0001072d527c(ppppuVar16);
        ppppuVar16 = *(undefined8 *****)(param_1 + 0x1c0);
        func_0x0001073a10fc(ppppuVar16);
        lVar15 = (long)ppppuVar16 + (long)param_4;
      }
      else {
        ppppuVar16 = *(undefined8 *****)(param_1 + 0x1c0);
        ppppuVar10 = (undefined8 ****)((long)ppppuVar16 - (long)ppppuVar17);
        if (ppppuVar10 < param_4) {
          param_4 = (undefined8 ****)((long)ppppuVar9 + (long)ppppuVar10);
          if (ppppuVar16 != ppppuVar17) {
            _memmove(ppppuVar17);
            ppppuVar16 = *(undefined8 *****)(param_1 + 0x1c0);
            ppppuVar5 = ppppuVar9;
          }
          ppppuVar9 = (undefined8 ****)((long)ppppuVar11 - (long)param_4);
          if (ppppuVar9 != (undefined8 ****)0x0) {
            ppppuVar5 = param_4;
            ppppuVar10 = ppppuVar9;
            _memmove(ppppuVar16);
          }
          lVar15 = (long)ppppuVar16 + (long)ppppuVar9;
        }
        else {
          func_0x0001073a10fc(ppppuVar17);
          lVar15 = (long)ppppuVar17 + (long)param_4;
        }
      }
      *(long *)(param_1 + 0x1c0) = lVar15;
    }
  }
  uVar2 = *(ulong *)(param_5 + 8);
  if (-1 < (char)*(byte *)(param_5 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_5 + 0x17);
  }
  if (uVar2 != 0) {
    puStack_230 = &UNK_10f406dcf;
    uStack_228 = 4;
    func_0x0001073a111c(auStack_220);
    puStack_188 = auStack_170;
    uStack_178 = 0x100;
    uStack_180 = 0;
    uStack_190 = &PTR_DAT_1109965d0;
    lStack_70 = 0;
    ppppuVar12 = (undefined8 ****)0xdd;
    func_0x0001003a9984(&uStack_190,&UNK_10f406dcf,4,0xdd,auStack_220,0);
    param_4 = (undefined8 ****)(uStack_180 + lStack_70);
    ppuStack_248 = &puStack_230;
    puStack_238 = auStack_1c8;
    lStack_240 = param_5;
    if (param_4 < (undefined8 ****)0x26) {
      uStack_190 = (undefined **)
                   (CONCAT62((int6)((ulong)uStack_190 >> 0x10),(short)param_4) & 0xffffffffff00ffff)
      ;
      *(undefined1 *)((long)&uStack_190 + 2 + (long)param_4) = 0;
      ppppuVar10 = (undefined8 ****)0x26;
      FUN_1073a0a00(&ppuStack_248);
      puStack_1f8 = puStack_188;
      pppuStack_200 = (undefined8 ***)uStack_190;
      uStack_1e8 = uStack_178;
      uStack_1f0 = uStack_180;
      uStack_1e0 = auStack_170[0];
      uStack_1d8 = 1;
      uStack_1d0 = 0xffffffffffffffff;
    }
    else if (param_4 < (undefined8 ****)0x52) {
      func_0x000104c302d8(&uStack_190,0,0);
      *(short *)uStack_190 = (short)param_4;
      *(undefined1 *)((long)uStack_190 + (long)param_4 + 2) = 0;
      ppppuVar10 = (undefined8 ****)0x52;
      FUN_1073a0a00(&ppuStack_248,(undefined2 *)((long)uStack_190 + 2));
      puStack_1f8 = puStack_188;
      pppuStack_200 = (undefined8 ***)uStack_190;
      if (puStack_188 != (undefined8 *)0x0) {
        do {
          func_0x0001073a10ac();
        } while (extraout_w10 != 0);
      }
      uStack_1d8 = 2;
      uStack_1d0 = 0xffffffffffffffff;
      func_0x000104c2f784(&uStack_190);
    }
    else {
      func_0x0001073a111c(&uStack_190);
      ppppuVar12 = (undefined8 ****)&uStack_190;
      ppppuVar10 = (undefined8 ****)0xdd;
      func_0x0001003a9204(auStack_220,puStack_230,uStack_228,0xdd,ppppuVar12);
      func_0x0001072625b4(&pppuStack_200,auStack_220);
      func_0x0001073a113c();
    }
    ppppuVar5 = &pppuStack_200;
    func_0x00010729515c(param_1 + 0x40);
    func_0x000104c2f714(&pppuStack_200);
  }
  uVar4 = *(char *)(param_3 + 0x50) == '\x01';
  if ((bool)uVar4) {
    ppppuVar5 = (undefined8 ****)(param_3 + 0x38);
    func_0x00010549026c();
    func_0x00010002b838(&uStack_190,"Accept-Language");
    func_0x000100608100(param_1 + 0x1d0,&uStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x0001073a1128();
  }
  plVar14 = (long *)(param_3 + 0xd0);
  while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
    func_0x00010060413c(param_1 + 0x1d0,plVar14 + 2);
    ppppuVar5 = (undefined8 ****)(plVar14 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  if (*(long **)(param_3 + 0x100) == (long *)0x0) {
    func_0x000104bfeb48();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1073a03a8);
    (*pcVar3)();
  }
  (**(code **)(**(long **)(param_3 + 0x100) + 0x30))(&uStack_190);
  for (plVar13 = (long *)uStack_180; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    func_0x00010060413c(param_1 + 0x1d0,plVar13 + 2);
    ppppuVar5 = (undefined8 ****)(plVar13 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x00010028ad98(&uStack_190);
  func_0x000104c2f714(auStack_1c8);
  func_0x00010028ad98();
  func_0x0001073a1054(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000104c2f784(&uStack_190);
    func_0x00010724b374(param_1);
    func_0x000104c2f714(auStack_1c8);
    func_0x00010028ad98();
    func_0x0001073a10a4();
    pcStack_278 = FUN_1073a04bc;
    ppppuVar11 = ppppuVar10;
    pppuStack_2b0 = ppppuVar16;
    pppuStack_2a8 = ppppuVar9;
    pppuStack_2a0 = param_4;
    lStack_298 = (long)plVar14;
    puStack_290 = puVar6;
    lStack_288 = param_1;
    puStack_280 = &stack0xfffffffffffffff0;
    func_0x0001073a1088();
    ppuStack_5f8 = ppppuVar5[1];
    ppuStack_600 = *ppppuVar5;
    *ppppuVar5 = (undefined8 ***)0x0;
    ppppuVar5[1] = (undefined8 ***)0x0;
    uStack_2b8 = extraout_x8_00;
    FUN_1073a08b8(auStack_460,ppppuVar11);
    ppppuVar16 = ppppuVar10 + 0x18;
    FUN_1073a06dc(&ppuStack_310,ppppuVar16,ppppuVar10 + 0x21);
    pppuStack_2e0 = (undefined8 ***)0x0;
    func_0x0001073a10bc();
    *ppppuVar16 = (undefined8 ***)&PTR_SUB_1109a9a18;
    FUN_1073a08b8(ppppuVar16 + 1,auStack_460);
    ppppuVar16[0x2c] = (undefined8 ***)ppuStack_308;
    ppppuVar16[0x2b] = (undefined8 ***)ppuStack_310;
    ppppuVar16[0x2d] = (undefined8 ***)ppuStack_300;
    ppuStack_308 = (undefined8 **)0x0;
    ppuStack_300 = (undefined8 **)0x0;
    ppuStack_310 = (undefined8 **)0x0;
    pppuStack_2e0 = ppppuVar16;
    func_0x00010028af84(auStack_2d8,ppppuVar10 + 0x24);
    FUN_1073a08b8(auStack_5e8,ppppuVar10);
    puVar6 = auStack_498;
    FUN_107332298(puVar6,ppppuVar12);
    puStack_468 = (undefined8 *)0x0;
    func_0x0001073a10bc();
    *puVar6 = &PTR_FUN_1109a9a98;
    FUN_1073a08b8(puVar6 + 1,auStack_5e8);
    FUN_107332298(puVar6 + 0x2b,auStack_498);
    puStack_468 = puVar6;
    FUN_10732b18c(puVar7,&ppuStack_600,auStack_2f8,auStack_480);
    FUN_10732c10c(auStack_480);
    FUN_1073a081c(auStack_5e8);
    func_0x00010732c140(auStack_2f8);
    func_0x0001073a0844(auStack_460);
    func_0x0001072aa2e8(&ppuStack_600);
    *puVar7 = &PTR_FUN_1109a99c0;
    func_0x0001073a1054(uStack_2b8);
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      FUN_10732c10c(auStack_480);
      FUN_1073a081c(auStack_5e8);
      func_0x00010732c140(auStack_2f8);
      do {
        func_0x0001073a0844(auStack_460);
        func_0x0001072aa2e8(&ppuStack_600);
        func_0x0001073a10d4();
        func_0x00010732c168(auStack_2f8);
      } while( true );
    }
    return puVar7;
  }
  return puVar6;
}



/* Entry: 1073a04bc; end: 1073a06db;  */

undefined8 * FUN_1073a04bc(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_378 [336];
  undefined8 auStack_228 [3];
  undefined1 auStack_210 [24];
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [336];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar2 = param_3;
  func_0x0001073a1088();
  uStack_388 = param_2[1];
  uStack_390 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_48 = extraout_x8;
  FUN_1073a08b8(auStack_1f0,lVar2);
  puVar1 = (undefined8 *)(param_3 + 0xc0);
  FUN_1073a06dc(&uStack_a0,puVar1,param_3 + 0x108);
  puStack_70 = (undefined8 *)0x0;
  func_0x0001073a10bc();
  *puVar1 = &PTR_SUB_1109a9a18;
  FUN_1073a08b8(puVar1 + 1,auStack_1f0);
  puVar1[0x2c] = uStack_98;
  puVar1[0x2b] = uStack_a0;
  puVar1[0x2d] = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  puStack_70 = puVar1;
  func_0x00010028af84(auStack_68,param_3 + 0x120);
  FUN_1073a08b8(auStack_378,param_3);
  puVar1 = auStack_228;
  FUN_107332298(puVar1,param_4);
  puStack_1f8 = (undefined8 *)0x0;
  func_0x0001073a10bc();
  *puVar1 = &PTR_FUN_1109a9a98;
  FUN_1073a08b8(puVar1 + 1,auStack_378);
  FUN_107332298(puVar1 + 0x2b,auStack_228);
  puStack_1f8 = puVar1;
  FUN_10732b18c(param_1,&uStack_390,auStack_88,auStack_210);
  FUN_10732c10c(auStack_210);
  FUN_1073a081c(auStack_378);
  func_0x00010732c140(auStack_88);
  func_0x0001073a0844(auStack_1f0);
  func_0x0001072aa2e8(&uStack_390);
  *param_1 = &PTR_FUN_1109a99c0;
  func_0x0001073a1054(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10732c10c(auStack_210);
  FUN_1073a081c(auStack_378);
  func_0x00010732c140(auStack_88);
  do {
    func_0x0001073a0844(auStack_1f0);
    func_0x0001072aa2e8(&uStack_390);
    func_0x0001073a10d4();
    func_0x00010732c168(auStack_88);
  } while( true );
}



/* Entry: 1073a06dc; end: 1073a081b;  */

void FUN_1073a06dc(undefined8 param_1,long param_2,long *param_3)

{
  char *pcVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x00010002b838(auStack_58,"X-Snap-Route-Tag");
  func_0x000100ab9b18(param_2,auStack_58);
  func_0x0001073a115c();
  if (param_2 == 0) {
    func_0x00010002b838(auStack_70,"");
  }
  else {
    func_0x000100456794(auStack_70,param_2 + 0x28,":");
  }
  pcVar1 = (char *)*param_3;
  if (pcVar1 == (char *)param_3[1]) {
    func_0x00010002b838(auStack_58,"");
  }
  else {
    uStack_40 = 0;
    for (; pcVar1 != (char *)param_3[1]; pcVar1 = pcVar1 + 1) {
      uStack_40 = uStack_40 * 0x1000 + (uStack_40 >> 4) + -0x61c8864680b583eb + (long)*pcVar1 ^
                  uStack_40;
    }
    uStack_38 = 0;
    func_0x0001003a91d4(&UNK_10f40b5a1);
    func_0x0001003a9204(auStack_58);
  }
  func_0x00010533a9c0(param_1,auStack_70,auStack_58);
  func_0x0001073a115c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return;
}



/* Entry: 1073a081c; end: 1073a086b;  */

long FUN_1073a081c(long param_1)

{
  func_0x0001072c9240(param_1 + 0x150);
  func_0x0001072c91e8(param_1 + 0x140);
  func_0x0001001148fc(param_1 + 0x120);
  func_0x00010015b8c8(param_1 + 0x108);
  func_0x0001073288c0(param_1 + 0xe8);
  func_0x00010028ad98(param_1 + 0xc0);
  func_0x00010028ad98(param_1 + 0x98);
  func_0x00010724b3d8(param_1 + 0x58);
  func_0x0001001148fc(param_1 + 0x38);
  func_0x000107345ab0();
  return param_1;
}



/* Entry: 1073a086c; end: 1073a086f;  */

long FUN_1073a086c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3ab8);
  func_0x00010732e640(lVar1 + 0x148);
  FUN_10732c054(param_1 + 0x78);
  FUN_10732c10c(param_1 + 0x58);
  func_0x000107346dd4();
  func_0x000107346c60();
  return param_1;
}



/* Entry: 1073a0870; end: 1073a0883;  */

void FUN_1073a0870(void)

{
  FUN_10732b264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a0884; end: 1073a08b7;  */

void FUN_1073a0884(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010002b838();
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 1073a08b8; end: 1073a09bb;  */

long FUN_1073a08b8(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  func_0x00010028af84(lVar1 + 0x38,param_2 + 0x38);
  func_0x000107263b58(param_1 + 0x58,param_2 + 0x58);
  func_0x00010028b0c8(param_1 + 0x98,param_2 + 0x98);
  func_0x00010028b0c8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_10732ae14(param_1 + 0xe8,param_2 + 0xe8);
  func_0x0001072d51d0(param_1 + 0x108,param_2 + 0x108);
  func_0x00010028af84(param_1 + 0x120,param_2 + 0x120);
  lVar1 = *(long *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073a10ac();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 1073a09bc; end: 1073a09ff;  */

undefined8 * FUN_1073a09bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001072bb3b4();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1073a0a00; end: 1073a0a63;  */

void FUN_1073a0a00(undefined8 *param_1,long param_2,long param_3)

{
  func_0x0001072bb714(param_2,param_3,*param_1,param_1[1],param_1[2]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1073a0a64; end: 1073a0a77;  */

void FUN_1073a0a64(void)

{
  func_0x0001073a0a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a0a78; end: 1073a0aab;  */

undefined8 FUN_1073a0a78(undefined8 param_1)

{
  func_0x0001073a10bc();
  FUN_1073a0c44();
  return param_1;
}



/* Entry: 1073a0aac; end: 1073a0acf;  */

long FUN_1073a0aac(long param_1,long param_2)

{
  func_0x0001073a10c4(&PTR_SUB_1109a9a18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 0x158,param_1 + 0x158);
  return param_2;
}



/* Entry: 1073a0ad0; end: 1073a0bff;  */

undefined1 * FUN_1073a0ad0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar6;
  undefined1 auStack_278 [24];
  long lStack_260;
  long lStack_258;
  undefined1 auStack_250 [504];
  undefined8 uStack_58;
  
  lVar2 = param_2;
  func_0x0001073a1088();
  plVar6 = *(long **)(lVar2 + 0x148);
  uStack_58 = extraout_x8;
  if (plVar6 == (long *)0x0) {
    FUN_10739ff10(auStack_250,param_3,param_2 + 8,param_2 + 0x110,param_2 + 0x158);
  }
  else {
    plVar3 = plVar6;
    __ZNSt3__112__get_sp_mutEPKv(plVar6);
    __ZNSt3__18__sp_mut4lockEv();
    lVar2 = *plVar6;
    lStack_258 = plVar6[1];
    lStack_260 = lVar2;
    if (lStack_258 != 0) {
      do {
        func_0x0001073a10ac();
      } while (extraout_w10 != 0);
    }
    __ZNSt3__18__sp_mut6unlockEv(plVar3);
    in_ZR = lVar2 == 0;
    lVar1 = param_2 + 0x110;
    if (!(bool)in_ZR) {
      lVar1 = lVar2;
    }
    FUN_1073a06dc(auStack_278,param_2 + 200,lVar1);
    FUN_10739ff10(auStack_250,param_3,param_2 + 8,lVar1,auStack_278);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    FUN_107327e28(&lStack_260);
  }
  puVar5 = auStack_250;
  func_0x00010732b980(param_1);
  puVar4 = auStack_250;
  func_0x00010724b374();
  func_0x0001073a1054(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073a10d4();
    func_0x0001004a5364(puVar5,&PTR_DAT_1109a9a78);
    puVar4 = puVar4 + 8;
    if ((int)puVar5 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1073a0c00; end: 1073a0c37;  */

long FUN_1073a0c00(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a9a78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073a0c38; end: 1073a0c43;  */

undefined ** FUN_1073a0c38(void)

{
  return &PTR_DAT_1109a9a78;
}



/* Entry: 1073a0c44; end: 1073a0c87;  */

long FUN_1073a0c44(long param_1,long param_2)

{
  func_0x0001073a10c4(&PTR_SUB_1109a9a18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x158,param_2 + 0x150);
  return param_1;
}



/* Entry: 1073a0c88; end: 1073a0cb3;  */

undefined8 * FUN_1073a0c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9a98;
  FUN_1073a081c(param_1 + 1);
  return param_1;
}



/* Entry: 1073a0cb4; end: 1073a0cc7;  */

void FUN_1073a0cb4(void)

{
  FUN_1073a0c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a0cc8; end: 1073a0cfb;  */

undefined8 FUN_1073a0cc8(undefined8 param_1)

{
  func_0x0001073a10bc();
  FUN_1073a1010();
  return param_1;
}



/* Entry: 1073a0cfc; end: 1073a0d1f;  */

long FUN_1073a0cfc(long param_1,long param_2)

{
  func_0x0001073a10c4(&PTR_FUN_1109a9a98);
  FUN_107332298(param_2 + 0x158,param_1 + 0x158);
  return param_2;
}



/* Entry: 1073a0d20; end: 1073a0fcb;  */

undefined8 ** FUN_1073a0d20(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  int extraout_w10;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_c0;
  ppuVar4 = &puStack_c0;
  lVar7 = param_3;
  func_0x0001073a1088();
  puVar6 = *(undefined1 **)(lVar7 + 0x10);
  uStack_48 = extraout_x8;
  if (puVar6 == (undefined1 *)0x0) {
    if (*(long *)(param_3 + 0x20) == 0) {
      func_0x000104c307ec(&puStack_60,1);
      puStack_50[2] = 0;
      *puStack_50 = &PTR_DAT_1107eb210;
      puStack_50[1] = 0;
      func_0x00010002b838(puStack_50 + 3,"");
      puStack_b8 = puStack_50;
      puStack_50 = (undefined8 *)0x0;
      puVar1 = puStack_b8 + 3;
      puStack_c0 = puVar1;
      func_0x000104c308b0(&puStack_60);
      FUN_10732bdb0(&puStack_60,1);
      puStack_50[2] = 0;
      *puStack_50 = &PTR_FUN_1109a3b08;
      puStack_50[1] = 0;
      puStack_98 = puStack_b8;
      puStack_c0 = (undefined8 *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      ppuVar5 = &puStack_a0;
      puStack_a0 = puVar1;
      func_0x0001073a1130(puStack_50 + 3);
      func_0x000104c33970(&puStack_a0);
      puVar1 = puStack_50;
      puStack_50 = (undefined8 *)0x0;
      func_0x00010732be80(&puStack_60);
      uStack_b0 = 0;
      uStack_a8 = 0;
      puStack_88 = (undefined8 *)0x0;
      puStack_80 = (undefined8 *)0x0;
      func_0x0001073a10e4();
      *param_1 = (long)(puVar1 + 3);
      param_1[1] = (long)puVar1;
      puStack_90 = (undefined8 *)0x0;
      param_1[2] = 0;
      func_0x0001073a1070();
      FUN_10732bea8(&uStack_b0);
      func_0x000104c33970();
    }
    else {
      FUN_10732bdb0(&puStack_90,1);
      puVar1 = puStack_80;
      lVar7 = *(long *)(param_3 + 0x28);
      lStack_58 = *(undefined8 *)(param_3 + 0x28);
      puStack_60 = *(undefined8 **)(param_3 + 0x20);
      puStack_80[2] = 0;
      *puStack_80 = &PTR_FUN_1109a3b08;
      puStack_80[1] = 0;
      if (lVar7 != 0) {
        do {
          func_0x0001073a10ac();
        } while (extraout_w10 != 0);
      }
      ppuVar5 = &puStack_60;
      func_0x0001073a1130(puVar1 + 3);
      func_0x000104c33970(&puStack_60);
      puVar1 = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      func_0x00010732be80(&puStack_90);
      puStack_60 = (undefined8 *)0x0;
      lStack_58 = 0;
      puStack_80 = (undefined8 *)(long)*(char *)(*(long *)(param_3 + 0x20) + 0x17);
      if ((long)puStack_80 < 0) {
        puStack_80 = *(undefined8 **)(*(long *)(param_3 + 0x20) + 8);
      }
      puStack_88 = (undefined8 *)0x0;
      func_0x0001073a10e4();
      *param_1 = (long)(puVar1 + 3);
      param_1[1] = (long)puVar1;
      puStack_90 = (undefined8 *)0x0;
      param_1[2] = (long)puStack_80;
      func_0x0001073a1070((ulong)puStack_78 & 0xff);
      ppuVar3 = &puStack_60;
      FUN_10732bea8();
    }
  }
  else {
    uVar2 = *puVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_60,puVar6 + 8)
    ;
    puStack_78 = puStack_50;
    puStack_90 = (undefined8 *)CONCAT71(puStack_90._1_7_,uVar2);
    puStack_80 = (undefined8 *)lStack_58;
    puStack_88 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
    lStack_58 = 0;
    puStack_50 = (undefined8 *)0x0;
    uStack_70 = 0;
    uStack_68 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    ppuVar5 = &puStack_90;
    FUN_107371e6c(param_1);
    *(undefined4 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    ppuVar3 = &puStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x0001073a1054(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c33970(&puStack_a0);
    func_0x0001073a1108();
    func_0x00010732be80(&puStack_60);
    func_0x000104c33970(&puStack_c0);
    func_0x0001073a10d4();
    func_0x0001004a5364(ppuVar5,&PTR_DAT_1109a9af8);
    ppuVar4 = (undefined8 **)((long)ppuVar4 + 8);
    if ((int)ppuVar5 == 0) {
      ppuVar4 = (undefined8 **)0x0;
    }
    return ppuVar4;
  }
  return ppuVar3;
}



/* Entry: 1073a0fcc; end: 1073a1003;  */

long FUN_1073a0fcc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a9af8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073a1004; end: 1073a100f;  */

undefined ** FUN_1073a1004(void)

{
  return &PTR_DAT_1109a9af8;
}



/* Entry: 1073a1010; end: 1073a1053;  */

long FUN_1073a1010(long param_1,long param_2)

{
  func_0x0001073a10c4(&PTR_FUN_1109a9a98);
  FUN_107332298(param_1 + 0x158,param_2 + 0x150);
  return param_1;
}



/* Entry: 1073a1054; end: 1073a116f;  */

void FUN_1073a1054(void)

{
  return;
}



/* Entry: 1073a1170; end: 1073a13df;  */

undefined8 * FUN_1073a1170(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  uint uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_d0[0] = 0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  uStack_98 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 1;
  switch(*param_2) {
  case 0:
  case 1:
    func_0x0001073a19d4(param_1,&PTR_s_aws_api_snapchat_com_443_1109a9b50);
    func_0x0001073a19c0();
    break;
  case 2:
  case 3:
    func_0x0001073a19d4(param_1,&PTR_s_ingress_us_east1_aws_api_snapcha_1109a9b70);
    func_0x0001073a19c0();
    break;
  case 4:
  case 5:
    func_0x0001073a19d4(param_1,&PTR_DAT_1109a9b60);
    func_0x0001073a19c0();
    break;
  case 6:
  case 7:
    func_0x0001073a19d4(param_1,&PTR_s_web_snapchat_com_443_1109a9b80);
    func_0x0001073a19c0();
    break;
  case 8:
    func_0x0001073a19d4(param_1,&PTR_DAT_1109a9ba0);
    func_0x0001073a19c0();
    goto code_r0x0001073a126c;
  case 9:
    func_0x0001073a19d4(param_1,&PTR_DAT_1109a9b90);
    func_0x0001073a19c0();
    goto code_r0x0001073a126c;
  case 10:
    func_0x0001073a19d4(param_1,&PTR_s_localhost_8080_1109a9bb0);
    func_0x0001073a19c0();
code_r0x0001073a126c:
    func_0x0001073a1a04();
    uStack_90 = 1;
    uStack_8c = 1;
  default:
    goto LAB_1073a127c;
  }
  func_0x0001073a1a04();
LAB_1073a127c:
  func_0x0001002a8234(auStack_b0,param_2 + 8);
  *param_1 = &PTR_FUN_1109a9bd0;
  func_0x000104bfeccc(&uStack_40,param_3,param_4,auStack_d0);
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109a9bf0;
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1073a8b20(puVar1 + 3,&uStack_60);
  func_0x000100561f40(&uStack_60);
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  func_0x000100561f40(&uStack_40);
  func_0x000104bfe868(auStack_d0);
  *param_1 = &PTR_FUN_1109a9b18;
  func_0x00010002b838(auStack_d0,"[MapCommon]");
  func_0x00010002b838(&uStack_60,(&PTR_s_prod_1109a9d10)[*param_2]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  return param_1;
}



/* Entry: 1073a13e0; end: 1073a1413;  */

undefined8 * FUN_1073a13e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9bd0;
  if (param_1[2] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073a1414; end: 1073a14e7;  */

void FUN_1073a1414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [176];
  undefined1 auStack_f8 [176];
  undefined1 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  cVar1 = *(char *)(param_4 + 0x28);
  if (cVar1 == '\x01') {
    FUN_1073a14e8(auStack_1a8,param_4);
    func_0x0001006271e0(auStack_f8,auStack_1a8);
  }
  else {
    auStack_f8[0] = 0;
    uStack_48 = 0;
  }
  func_0x0001073a157c(auStack_1b8,param_3);
  FUN_1073a8b54(uVar2,param_2,auStack_f8,auStack_1b8);
  func_0x0001073a1998(auStack_1b8);
  func_0x000100609698(auStack_f8);
  if (cVar1 != '\0') {
    func_0x000100627b64(auStack_1a8);
  }
  return;
}



/* Entry: 1073a14e8; end: 1073a15b3;  */

void FUN_1073a14e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined1 auStack_50 [48];
  
  func_0x00010527d568(auStack_50,param_2);
  auStack_70[0] = 0;
  uStack_58 = 0;
  auStack_90[0] = 0;
  uStack_78 = 0;
  auStack_b0[0] = 0;
  uStack_98 = 0;
  func_0x000100626f38(param_1,0,0,auStack_50,0,auStack_70,auStack_90,0,auStack_b0);
  func_0x0001001148fc(auStack_b0);
  func_0x0001001148fc(auStack_90);
  func_0x0001001148fc(auStack_70);
  func_0x00010062706c(auStack_50);
  return;
}



/* Entry: 1073a15b4; end: 1073a15b7;  */

undefined8 * FUN_1073a15b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9bd0;
  if (param_1[2] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073a15b8; end: 1073a15cb;  */

void FUN_1073a15b8(void)

{
  FUN_1073a13e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a15cc; end: 1073a15cf;  */

undefined8 * FUN_1073a15cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9bd0;
  if (param_1[2] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073a15d0; end: 1073a15e3;  */

void FUN_1073a15d0(void)

{
  FUN_1073a13e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a15e4; end: 1073a15e7;  */

void FUN_1073a15e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9bf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073a15e8; end: 1073a15fb;  */

void FUN_1073a15e8(void)

{
  func_0x0001073a1608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a15fc; end: 1073a1617;  */

void FUN_1073a15fc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073a1618; end: 1073a163b;  */

void FUN_1073a1618(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1073a163c(&uStack_11,param_1);
  return;
}



/* Entry: 1073a163c; end: 1073a16d7;  */

undefined1 * FUN_1073a163c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1073a16d8(auStack_40,1);
  FUN_1073a171c(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001073a1960();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073a1960();
  func_0x0001073a19e4();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_1073a1700();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1073a16d8; end: 1073a16ff;  */

long FUN_1073a16d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1073a1700();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1073a1700; end: 1073a171b;  */

undefined8 * FUN_1073a1700(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3a == 0) {
    puVar1 = (undefined8 *)(param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109a9c40;
  FUN_1073a1788(param_1 + 3);
  return param_1;
}



/* Entry: 1073a171c; end: 1073a175f;  */

undefined8 * FUN_1073a171c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109a9c40;
  FUN_1073a1788(param_1 + 3);
  return param_1;
}



/* Entry: 1073a1760; end: 1073a1763;  */

void FUN_1073a1760(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9c40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073a1764; end: 1073a1777;  */

void FUN_1073a1764(void)

{
  func_0x0001073a1950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a1778; end: 1073a1787;  */

void FUN_1073a1778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073a1780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073a1788; end: 1073a17a7;  */

void FUN_1073a1788(void)

{
  func_0x0001073a1a0c();
  FUN_1073a185c();
  return;
}



/* Entry: 1073a17a8; end: 1073a17ab;  */

void FUN_1073a17a8(void)

{
  func_0x0001073a1a0c();
  FUN_10734b96c();
  return;
}



/* Entry: 1073a17ac; end: 1073a17bf;  */

void FUN_1073a17ac(void)

{
  func_0x0001073a18bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a17c0; end: 1073a17cf;  */

void FUN_1073a17c0(void)

{
  return;
}



/* Entry: 1073a17d0; end: 1073a1813;  */

void FUN_1073a17d0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 auStack_a8 [32];
  undefined4 uStack_28;
  
  auStack_a8[0] = *param_3;
  uStack_28 = 1;
  FUN_1073a18dc(*(undefined8 *)(param_1 + 0x20),auStack_a8);
  func_0x0001073a19dc();
  return;
}



/* Entry: 1073a1814; end: 1073a185b;  */

void FUN_1073a1814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [128];
  undefined4 uStack_28;
  
  FUN_10734b600(auStack_a8,param_3);
  uStack_28 = 0;
  FUN_1073a18dc(*(undefined8 *)(param_1 + 0x20),auStack_a8);
  func_0x0001073a19dc();
  return;
}



/* Entry: 1073a185c; end: 1073a18db;  */

long FUN_1073a185c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1073a18dc; end: 1073a18f7;  */

void FUN_1073a18dc(long *param_1)

{
  undefined1 uStack_31;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073a18e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a9d00)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 1073a18f8; end: 1073a1943;  */

void FUN_1073a18f8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x80) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a9d00)[*(uint *)(param_1 + 0x80)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  return;
}



/* Entry: 1073a1944; end: 1073a196f;  */

undefined8 FUN_1073a1944(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b589930();
  func_0x00010b588c54(param_2);
  return param_2;
}



/* Entry: 1073a1970; end: 1073a19bf;  */

long FUN_1073a1970(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073a19c0; end: 1073a1a1f;  */

void FUN_1073a19c0(void)

{
  long unaff_x29;
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000100066230();
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x48) = 0;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
  }
  return;
}



/* Entry: 1073a1a20; end: 1073a1ed7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1073a1a20(long param_1,long param_2,ulong *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  long *plVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  undefined8 ******ppppppuVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  uint uVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  undefined1 auStack_1d0 [12];
  undefined1 uStack_1c4;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *******apppppppuStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_140 [24];
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  char cStack_d9;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [80];
  undefined8 uStack_68;
  
  func_0x0001073a2dac();
  uStack_68 = extraout_x8;
  func_0x000100060b18(apppppppuStack_188,&PTR_DAT_1109a9dc0);
  ppuStack_110 = &PTR_FUN_1109a9e90;
  pcStack_108 = FUN_1073a2678;
  pppuStack_f8 = &ppuStack_110;
  if ((byte)param_4[0x20] - 1 < 10) {
    ppuVar16 = (undefined **)(&PTR_PTR_1109aa030)[(ulong)((byte)param_4[0x20] - 1) & 0xff];
  }
  else {
    ppuVar16 = &PTR_DAT_1109a9de0;
  }
  func_0x000100060b18(&pppppppuStack_128,ppuVar16);
  func_0x000100060b18(auStack_140,&PTR_DAT_1109a9dd0);
  func_0x00010533a9c0(&uStack_170,&pppppppuStack_128,auStack_140);
  func_0x000100610910(&uStack_f0,&uStack_170,apppppppuStack_188);
  func_0x0001072625b4(auStack_b8,&uStack_f0);
  func_0x000107526c60(param_1);
  func_0x000104c2f714(auStack_b8);
  func_0x0001073a2dec();
  func_0x0001073a2e58();
  func_0x0001073a2dd0();
  func_0x0001073a2dd8();
  *(undefined2 *)(param_1 + 0x1b0) = 0x101;
  if (pppuStack_f8 == (undefined ***)0x0) {
    func_0x000104bfeb48();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1073a1e00);
    (*pcVar8)();
  }
  (*(code *)(*pppuStack_f8)[6])(auStack_b8,pppuStack_f8,param_2,param_3);
  pppppppuStack_128 = (undefined8 *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x0001001a556c(auStack_b8,&pppppppuStack_128);
  uVar13 = uStack_120;
  pppppppuVar2 = pppppppuStack_128;
  if (-1 < (long)uStack_118) {
    uVar13 = uStack_118 >> 0x38;
    pppppppuVar2 = &pppppppuStack_128;
  }
  FUN_1073a27a8(pppppppuVar2,(long)pppppppuVar2 + uVar13,param_1 + 0x1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(auStack_140,0x80,0);
  uVar17 = (uint)*(byte *)(param_2 + 0xc);
  cVar9 = SBORROW4(uVar17,1);
  cVar10 = (int)(uVar17 - 1) < 0;
  if (uVar17 == 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_f0,apppppppuStack_188);
    ppppppuVar12 = (undefined8 ******)&uStack_f0;
    func_0x0001001548a8(ppppppuVar12,0x32);
    func_0x0001073a2e68();
    uVar1 = extraout_x9;
    if (cVar10 == cVar9) {
      uVar1 = extraout_x8_00;
    }
    cVar10 = cStack_d9 < '\0';
    cVar9 = '\0';
    pppppppuVar2 = (undefined8 *******)CONCAT71(uStack_ef,uStack_f0);
    if (!(bool)cVar10) {
      pppppppuVar2 = (undefined8 *******)&uStack_f0;
    }
    func_0x0001073a2e2c();
    bVar5 = *(byte *)ppppppuVar12;
    func_0x0001073a2e2c();
    uVar17 = *(uint *)((long)ppppppuVar12 + 4);
    func_0x0001073a2e2c();
    uVar13 = *param_3;
    uVar4 = *(uint *)(ppppppuVar12 + 1);
    FUN_1073a2780(uVar13,param_3[1]);
    pppppppuStack_1b0 = pppppppuVar2;
    uStack_1a8 = (ulong)bVar5;
    uStack_1a0 = (ulong)uVar17;
    uStack_198 = (ulong)uVar4;
    uStack_190 = uVar13;
    _snprintf(uVar1,0x7f,&UNK_10f40b5ea);
    func_0x0001073a2dec();
  }
  else {
    func_0x0001073a2e68();
    uVar1 = extraout_x9_00;
    if (cVar10 == cVar9) {
      uVar1 = extraout_x8_01;
    }
    cVar10 = cStack_171 < '\0';
    cVar9 = '\0';
    pppppppuVar2 = apppppppuStack_188[0];
    if (!(bool)cVar10) {
      pppppppuVar2 = apppppppuStack_188;
    }
    uVar13 = *param_3;
    FUN_1073a2780(uVar13,param_3[1]);
    pppppppuStack_1b0 = pppppppuVar2;
    uStack_1a8 = uVar13;
    _snprintf(uVar1,0x7f,&UNK_10f40b5f9);
  }
  func_0x0001073a2e7c();
  lVar3 = extraout_x11;
  puVar6 = extraout_x10;
  if (cVar10 == cVar9) {
    lVar3 = extraout_x8_02;
    puVar6 = auStack_140;
  }
  uStack_f0 = 0;
  func_0x000100651c14(puVar6,puVar6 + lVar3,&uStack_f0);
  func_0x0001073a2e7c();
  func_0x00010015bbdc(auStack_140);
  func_0x0001072625b4(&uStack_f0,auStack_140);
  func_0x00010729515c(param_1 + 0x40,&uStack_f0);
  func_0x000104c2f714(&uStack_f0);
  puVar14 = param_4 + 0x28;
  func_0x00010726594c(param_1 + 0x170,puVar14);
  if (param_4[0x18] == '\x01') {
    puVar14 = param_4;
    func_0x00010549026c(param_4);
    func_0x00010002b838(&uStack_f0,"Accept-Language");
    func_0x000100608100(param_1 + 0x1d0,&uStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x0001073a2dec();
  }
  bVar5 = param_4[0x20];
  uVar11 = bVar5 == 10;
  if (bVar5 < 0xb) {
    uVar11 = false;
    if ((1 << (ulong)(bVar5 & 0x1f) & 0x7f3U) == 0) {
      uVar11 = bVar5 == 2;
      if ((bool)uVar11) {
        func_0x00010002b838(&uStack_f0,&UNK_10f40b594);
        puVar14 = &UNK_10f40b795;
        func_0x00010002b838(auStack_d8,&UNK_10f40b795);
        func_0x0001073a2df4();
      }
      else {
        puVar14 = &UNK_10f40b594;
        FUN_1073a2824(&uStack_f0,&UNK_10f40b594,&UNK_10f40b7ae);
        func_0x0001073a2df4();
      }
      func_0x0001002aa0bc(&uStack_f0);
      plVar7 = plStack_160;
      goto joined_r0x0001073a1d2c;
    }
  }
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_150 = 0x3f800000;
  plVar7 = plStack_160;
joined_r0x0001073a1d2c:
  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    func_0x00010060413c(param_1 + 0x1d0,plVar7 + 2);
    puVar14 = (undefined *)(plVar7 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x00010028ad98(&uStack_170);
  func_0x0001073a2dd0();
  func_0x0001073a2dd8();
  func_0x00010b583730(auStack_b8);
  FUN_1073a2994(&ppuStack_110);
  func_0x0001073a2e50();
  func_0x0001073a2d68(uStack_68);
  if ((bool)uVar11) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001002aa0bc(&uStack_f0);
  func_0x0001073a2dd0();
  func_0x0001073a2dd8();
  func_0x00010b583730(auStack_b8);
  func_0x00010724b374(param_1);
  pppuVar15 = &ppuStack_110;
  FUN_1073a2994(pppuVar15);
  func_0x0001073a2e50();
  func_0x0001073a2da4();
  pcStack_1b8 = FUN_1073a1ed8;
  auStack_1d0[0] = 0;
  uStack_1c4 = 0;
  puStack_1c0 = &stack0xfffffffffffffff0;
  FUN_1073a1a20(auStack_1d0,pppuVar15,puVar14);
  return;
}



/* Entry: 1073a1ed8; end: 1073a1f07;  */

void FUN_1073a1ed8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [12];
  undefined1 uStack_14;
  
  auStack_20[0] = 0;
  uStack_14 = 0;
  FUN_1073a1a20(auStack_20,param_1,param_2);
  return;
}



/* Entry: 1073a1f08; end: 1073a2473;  */

undefined ***
FUN_1073a1f08(long *param_1,byte *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  byte *unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [104];
  undefined1 auStack_378 [24];
  undefined8 uStack_360;
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [104];
  undefined1 auStack_2d8 [24];
  undefined8 *puStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  byte *pbStack_270;
  undefined ***pppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  byte *pbStack_250;
  long *plStack_248;
  ulong *puStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined1 auStack_178 [56];
  undefined1 auStack_140 [16];
  undefined8 *puStack_130;
  undefined4 auStack_100 [2];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  double dStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_70;
  
  func_0x0001073a2dac();
  ppuStack_1a8 = &PTR_DAT_110d0e5d0;
  uStack_1a0 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_198 = 0;
  uStack_180 = 0;
  uStack_70 = extraout_x8;
  if ((*(long *)(param_2 + 0x10) == 0) &&
     (param_3 = *(undefined8 **)(param_2 + 0x20), unaff_x20 = param_2, param_3 != (undefined8 *)0x0)
     ) {
    param_4 = (undefined1 *)(long)*(char *)((long)param_3 + 0x17);
    if ((long)param_4 < 0) {
      param_4 = (undefined1 *)param_3[1];
      param_3 = (undefined8 *)*param_3;
    }
    pppuVar3 = &ppuStack_1a8;
    func_0x0001001a3c94(pppuVar3,param_3,param_4);
    if ((int)pppuVar3 != 0) {
      puStack_240 = &uStack_198;
      pbStack_250 = param_2;
      plStack_248 = param_1;
      FUN_107330040(&uStack_1c0);
      unaff_x22 = 6;
      unaff_x21 = &UNK_10f40b81e;
      for (unaff_x23 = 0; unaff_x23 < (int)uStack_190; unaff_x23 = unaff_x23 + 1) {
        puVar1 = puStack_240;
        if ((uStack_198 & 1) != 0) {
          puVar1 = (ulong *)(uStack_198 + unaff_x23 * 8 + 7);
        }
        unaff_x24 = *puVar1;
        puStack_1e0 = &UNK_10e52b660;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1d8 = 0;
        func_0x0001073a2e24(*(undefined8 *)(unaff_x24 + 0x78),auStack_1f8);
        func_0x000107268798(&uStack_e0,auStack_1f8);
        func_0x000100060964(auStack_140,"kind");
        func_0x0001073a2d5c();
        func_0x0001073a2dc8();
        func_0x0001073a2d88();
        func_0x0001073a2d90();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
        func_0x0001073a2e24(*(undefined8 *)(unaff_x24 + 0x70),auStack_210);
        func_0x000107268798(&uStack_e0,auStack_210);
        func_0x000100060964(auStack_140,&DAT_10f68f148);
        func_0x0001073a2d5c();
        func_0x0001073a2dc8();
        func_0x0001073a2d88();
        func_0x0001073a2d90();
        func_0x0001073a2e58();
        func_0x0001073a2e24(*(undefined8 *)(unaff_x24 + 0x68),auStack_228);
        func_0x000107268798(&uStack_e0,auStack_228);
        func_0x000100060964(auStack_140,"place_id");
        func_0x0001073a2d5c();
        func_0x0001073a2dc8();
        func_0x0001073a2d88();
        func_0x0001073a2d90();
        func_0x0001073a2e50();
        if ((*(byte *)(unaff_x24 + 0x10) >> 1 & 1) != 0) {
          dStack_d8 = (double)*(float *)(*(long *)(unaff_x24 + 0x90) + 0x10);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,3);
          func_0x000100060964(auStack_140,&DAT_10f391d31);
          func_0x0001073a2d5c();
          func_0x0001073a2dc8();
          func_0x0001073a2d88();
          func_0x0001073a2d90();
        }
        for (lVar7 = 0; lVar7 < *(int *)(unaff_x24 + 0x18); lVar7 = lVar7 + 1) {
          switch(*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + lVar7 * 4)) {
          case 1:
            func_0x0001073a2de0();
            func_0x000100060964(auStack_140,&DAT_10f391c9a);
            func_0x0001073a2d5c();
            break;
          case 2:
            func_0x0001073a2de0();
            func_0x000100060964(auStack_140,&UNK_10f40b7fd);
            func_0x0001073a2d5c();
            break;
          case 3:
            func_0x0001073a2de0();
            func_0x000100060964(auStack_140,&DAT_10f40b7e5);
            func_0x0001073a2d5c();
            break;
          case 4:
            func_0x0001073a2de0();
            func_0x000100060964(auStack_140,&DAT_10f40b7d9);
            func_0x0001073a2d5c();
            break;
          case 5:
            func_0x0001073a2de0();
            func_0x000100060964(auStack_140,&UNK_10f40b808);
            func_0x0001073a2d5c();
            break;
          case 6:
            func_0x0001073a2de0();
            func_0x000100060964(auStack_140,&UNK_10f40b81e);
            func_0x0001073a2d5c();
            break;
          default:
            goto LAB_1073a2210;
          }
          func_0x0001073a2dc8();
          func_0x0001073a2d88();
          func_0x0001073a2d90();
LAB_1073a2210:
        }
        ppuVar2 = &PTR_PTR_11339d000;
        if (*(undefined ***)(unaff_x24 + 0x88) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(unaff_x24 + 0x88);
        }
        auStack_100[0] = 6;
        auVar8 = NEON_ext(*(undefined1 (*) [16])(ppuVar2 + 2),*(undefined1 (*) [16])(ppuVar2 + 2),8,
                          1);
        uStack_f0 = auVar8._8_8_;
        uStack_f8 = auVar8._0_8_;
        func_0x000104c33260(auStack_238,&puStack_1e0);
        func_0x000107262e9c(auStack_178,*(ulong *)(unaff_x24 + 0x68) & 0xfffffffffffffffc);
        func_0x0001072d8a90(auStack_140,auStack_178);
        param_4 = auStack_238;
        param_5 = auStack_140;
        func_0x00010726924c(&uStack_e0,auStack_100,param_4,param_5);
        func_0x00010735c8bc(&uStack_1c0,&uStack_e0);
        func_0x000107269394(&uStack_e0);
        func_0x000104c319e0(auStack_140);
        func_0x000104c2f714(auStack_178);
        func_0x000104c335c0(auStack_238);
        func_0x000104c3365c(auStack_100);
        func_0x000104c33548(&puStack_1e0);
      }
      param_3 = (undefined8 *)0x1;
      FUN_10732c6dc(auStack_140);
      puVar5 = puStack_130;
      puStack_130[1] = 0;
      puStack_130[2] = 0;
      *puStack_130 = &PTR_FUN_1109a3ea8;
      *(undefined4 *)(puStack_130 + 3) = 0;
      puStack_130[5] = uStack_1b8;
      puStack_130[4] = uStack_1c0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      puStack_130 = (undefined8 *)0x0;
      unaff_x20 = (byte *)(puVar5 + 3);
      func_0x00010732c788(auStack_140);
      lStack_d0 = (long)*(char *)(*(long *)(pbStack_250 + 0x20) + 0x17);
      if (lStack_d0 < 0) {
        lStack_d0 = *(long *)(*(long *)(pbStack_250 + 0x20) + 8);
      }
      dStack_d8 = 0.0;
      in_ZR = (*pbStack_250 & 0xfe) == 2;
      *plStack_248 = (long)unaff_x20;
      plStack_248[1] = (long)puVar5;
      uStack_e0 = 0;
      plStack_248[2] = lStack_d0;
      *(undefined1 *)(plStack_248 + 3) = in_ZR;
      *(undefined4 *)(plStack_248 + 6) = 0;
      *(undefined1 *)(plStack_248 + 7) = 1;
      uStack_c8 = in_ZR;
      FUN_107325fe0(&uStack_e0);
      func_0x00010726dd08(&uStack_1c0);
      goto LAB_1073a1f60;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
LAB_1073a1f60:
  pppuVar3 = &ppuStack_1a8;
  func_0x00010b583b4c();
  func_0x0001073a2d68(uStack_70);
  if ((bool)in_ZR) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  func_0x00010726dd08(&uStack_1c0);
  pppuVar4 = &ppuStack_1a8;
  func_0x00010b583b4c();
  func_0x0001073a2e3c();
  pcStack_258 = FUN_1073a2474;
  uStack_290 = unaff_x24;
  lStack_288 = unaff_x23;
  uStack_280 = unaff_x22;
  puStack_278 = unaff_x21;
  pbStack_270 = unaff_x20;
  pppuStack_268 = pppuVar3;
  puStack_260 = &stack0xfffffffffffffff0;
  func_0x0001073a2dac();
  uStack_3f0 = *param_3;
  uStack_3e8 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  uStack_298 = extraout_x8_00;
  FUN_1073a29d8(auStack_358,param_4);
  FUN_107325d70(auStack_340,param_5);
  puStack_2c0 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  *puVar5 = &PTR_SUB_1109a9f40;
  FUN_1073a29d8(puVar5 + 1,auStack_358);
  FUN_107325d70(puVar5 + 4,auStack_340);
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  puStack_2c0 = puVar5;
  FUN_107325d70(auStack_3e0,param_5);
  uStack_360 = 0;
  uVar6 = 0x70;
  __Znwm();
  func_0x0001073a2e04();
  FUN_107325d70();
  uStack_360 = uVar6;
  FUN_10732c798(pppuVar4,&uStack_3f0,auStack_2d8,auStack_378);
  FUN_10732e454(auStack_378);
  func_0x000107326460(auStack_3e0);
  func_0x00010732c140(auStack_2d8);
  FUN_1073a2638(auStack_358);
  func_0x0001072aa2e8(&uStack_3f0);
  *pppuVar4 = &PTR_FUN_1109a9d78;
  func_0x0001073a2d68(uStack_298);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10732e454(auStack_378);
    func_0x000107326460(auStack_3e0);
    func_0x00010732c140(auStack_2d8);
    FUN_1073a2638(auStack_358);
    do {
      func_0x0001072aa2e8(&uStack_3f0);
      func_0x0001073a2e3c();
      func_0x000107325d34(auStack_358);
    } while( true );
  }
  return pppuVar4;
}



/* Entry: 1073a2474; end: 1073a2637;  */

undefined8 *
FUN_1073a2474(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [104];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [104];
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001073a2dac();
  uStack_198 = param_2[1];
  uStack_1a0 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_48 = extraout_x8;
  FUN_1073a29d8(auStack_108,param_3);
  FUN_107325d70(auStack_f0,param_4);
  puStack_70 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a9f40;
  FUN_1073a29d8(puVar1 + 1,auStack_108);
  FUN_107325d70(puVar1 + 4,auStack_f0);
  uStack_68 = 0;
  uStack_50 = 0;
  puStack_70 = puVar1;
  FUN_107325d70(auStack_190,param_4);
  uStack_110 = 0;
  uVar2 = 0x70;
  __Znwm();
  func_0x0001073a2e04();
  FUN_107325d70();
  uStack_110 = uVar2;
  FUN_10732c798(param_1,&uStack_1a0,auStack_88,auStack_128);
  FUN_10732e454(auStack_128);
  func_0x000107326460(auStack_190);
  func_0x00010732c140(auStack_88);
  FUN_1073a2638(auStack_108);
  func_0x0001072aa2e8(&uStack_1a0);
  *param_1 = &PTR_FUN_1109a9d78;
  func_0x0001073a2d68(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10732e454(auStack_128);
  func_0x000107326460(auStack_190);
  func_0x00010732c140(auStack_88);
  FUN_1073a2638(auStack_108);
  do {
    func_0x0001072aa2e8(&uStack_1a0);
    func_0x0001073a2e3c();
    func_0x000107325d34(auStack_108);
  } while( true );
}



/* Entry: 1073a2638; end: 1073a265f;  */

undefined8 FUN_1073a2638(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107326460(param_1 + 0x18);
  func_0x0001073469d0(param_1);
  FUN_107325d58();
  return unaff_x19;
}



/* Entry: 1073a2660; end: 1073a2663;  */

long FUN_1073a2660(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3f08);
  FUN_10732e5f0(lVar1 + 0x148);
  FUN_10732caac(param_1 + 0x78);
  FUN_10732e454(param_1 + 0x58);
  func_0x000107346dd4();
  func_0x000107346c60();
  return param_1;
}



/* Entry: 1073a2664; end: 1073a2677;  */

void FUN_1073a2664(void)

{
  func_0x00010732e5a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a2678; end: 1073a2767;  */

void FUN_1073a2678(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d0e530;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  pbVar4 = (byte *)(param_1 + 3);
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  pbVar4[4] = 0;
  pbVar4[5] = 0;
  pbVar4[6] = 0;
  pbVar4[7] = 0;
  pbVar1 = (byte *)param_3[1];
  pbVar2 = param_2;
  for (pbVar5 = (byte *)*param_3; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
    if (*pbVar5 - 2 < 5) {
      uVar3 = *(undefined4 *)(&UNK_10de61e24 + ((ulong)(*pbVar5 - 2) & 0xff) * 4);
    }
    else {
      uVar3 = 0;
    }
    pbVar2 = pbVar4;
    func_0x00010056a150(pbVar4,uVar3);
  }
  if ((param_2[0xc] & 1) != 0) {
    func_0x0001073a2e34();
    func_0x0001073a2d98();
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(pbVar2 + 4);
    func_0x0001073a2e34();
    func_0x0001073a2d98();
    *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(pbVar2 + 8);
    func_0x0001073a2e34();
    func_0x0001073a2d98();
    *(uint *)(param_1 + 6) = (uint)*pbVar2;
  }
  return;
}



/* Entry: 1073a2768; end: 1073a277f;  */

byte * FUN_1073a2768(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if ((param_1[0xc] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  pbVar1 = (byte *)0x0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pbVar1 = (byte *)(ulong)(1 << (ulong)(*param_1 & 0x1f) | (uint)pbVar1);
  }
  return pbVar1;
}



/* Entry: 1073a2780; end: 1073a27a7;  */

uint FUN_1073a2780(byte *param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = 1 << (ulong)(*param_1 & 0x1f) | uVar1;
  }
  return uVar1;
}



/* Entry: 1073a27a8; end: 1073a27d3;  */

void FUN_1073a27a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1073a27d4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1073a27d4; end: 1073a2823;  */

undefined1  [16] FUN_1073a27d4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x00010688977c(param_4,param_2);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 1073a2824; end: 1073a2863;  */

long FUN_1073a2824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x00010002b838(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1073a2864; end: 1073a28ef;  */

void FUN_1073a2864(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001073a28a8();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1073a28f0; end: 1073a28f7;  */

void FUN_1073a28f0(void)

{
  return;
}



/* Entry: 1073a28f8; end: 1073a2927;  */

void FUN_1073a28f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109a9e90;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073a2928; end: 1073a295b;  */

void FUN_1073a2928(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a9e90;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073a295c; end: 1073a2987;  */

void FUN_1073a295c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073a2e60(param_2,param_1,&PTR_DAT_1109a9f00);
  func_0x0001073a2e14();
  return;
}



/* Entry: 1073a2988; end: 1073a2993;  */

undefined ** FUN_1073a2988(void)

{
  return &PTR_DAT_1109a9f00;
}



/* Entry: 1073a2994; end: 1073a29d7;  */

long * FUN_1073a2994(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1073a29d8; end: 1073a2a7f;  */

undefined8 * FUN_1073a29d8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  lVar1 = param_2[1] - *param_2;
  puStack_40 = param_1;
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      func_0x000107325d04();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1073a2a70);
      (*pcVar2)();
    }
    puVar3 = param_1 + 2;
    lVar4 = lVar1;
    FUN_107325d10();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = (long)puVar3 + lVar4;
    _memmove();
    param_1[1] = (long)puVar3 + lVar1;
  }
  uStack_38 = 1;
  FUN_1073a2a80(&puStack_40);
  return param_1;
}



/* Entry: 1073a2a80; end: 1073a2ad7;  */

long FUN_1073a2a80(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_107325d58(param_1);
  }
  return param_1;
}



/* Entry: 1073a2ad8; end: 1073a2aeb;  */

void FUN_1073a2ad8(void)

{
  func_0x0001073a2aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a2aec; end: 1073a2b23;  */

undefined8 FUN_1073a2aec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  __Znwm(0x88);
  FUN_1073a2c04();
  return uVar1;
}



/* Entry: 1073a2b24; end: 1073a2b47;  */

undefined8 * FUN_1073a2b24(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_1109a9f40;
  FUN_1073a29d8(param_2 + 1);
  FUN_107325d70(param_2 + 4,param_1 + 0x20);
  return param_2;
}



/* Entry: 1073a2b48; end: 1073a2bcb;  */

void FUN_1073a2b48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 uStack_224;
  undefined1 auStack_220 [504];
  undefined8 uStack_28;
  
  func_0x0001073a2dac();
  uStack_230 = *param_3;
  uStack_228 = *(undefined4 *)(param_3 + 1);
  uStack_224 = 1;
  uStack_28 = extraout_x8;
  FUN_1073a1a20(auStack_220,&uStack_230,extraout_x9 + 8,extraout_x9 + 0x20);
  puVar1 = auStack_220;
  func_0x00010732b980(param_1,puVar1);
  func_0x00010724b374(auStack_220);
  func_0x0001073a2d68(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001073a2e60(puVar1);
  func_0x0001073a2e14();
  return;
}



/* Entry: 1073a2bcc; end: 1073a2bf7;  */

void FUN_1073a2bcc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073a2e60(param_2,param_1,&PTR_DAT_1109a9fa0);
  func_0x0001073a2e14();
  return;
}



/* Entry: 1073a2bf8; end: 1073a2c03;  */

undefined ** FUN_1073a2bf8(void)

{
  return &PTR_DAT_1109a9fa0;
}



/* Entry: 1073a2c04; end: 1073a2c63;  */

undefined8 * FUN_1073a2c04(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_SUB_1109a9f40;
  FUN_1073a29d8(param_1 + 1);
  FUN_107325d70(param_1 + 4,param_2 + 0x18);
  return param_1;
}



/* Entry: 1073a2c64; end: 1073a2c87;  */

undefined8 FUN_1073a2c64(undefined8 param_1)

{
  func_0x0001073a2e04();
  func_0x000107326460();
  return param_1;
}



/* Entry: 1073a2c88; end: 1073a2c9b;  */

void FUN_1073a2c88(void)

{
  FUN_1073a2c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a2c9c; end: 1073a2cd3;  */

undefined8 FUN_1073a2c9c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1073a2d38();
  return uVar1;
}



/* Entry: 1073a2cd4; end: 1073a2cff;  */

undefined8 FUN_1073a2cd4(long param_1,undefined8 param_2)

{
  func_0x0001073a2e04(param_2,param_1 + 8);
  FUN_107325d70();
  return param_2;
}



/* Entry: 1073a2d00; end: 1073a2d2b;  */

void FUN_1073a2d00(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073a2e60(param_2,param_1,&PTR_DAT_1109aa020);
  func_0x0001073a2e14();
  return;
}


