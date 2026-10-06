/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107473be8; end: 107473c0b;  */

void FUN_107473be8(long *param_1)

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



/* Entry: 107473c0c; end: 107473c2b;  */

void FUN_107473c0c(void)

{
  func_0x00010747abd4();
  FUN_107469ed4();
  return;
}



/* Entry: 107473c2c; end: 107473c3f;  */

void FUN_107473c2c(void)

{
  FUN_107473c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107473c40; end: 107473c77;  */

undefined8 FUN_107473c40(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x280;
  __Znwm(0x280);
  FUN_1074743d4();
  return uVar1;
}



/* Entry: 107473c78; end: 107473c9b;  */

void FUN_107473c78(long param_1,undefined8 param_2)

{
  func_0x00010747abd4(param_2,param_1 + 8);
  FUN_107469e14();
  return;
}



/* Entry: 107473c9c; end: 10747439f;  */

void FUN_107473c9c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 in_x7;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 ***extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  undefined8 ***pppuVar10;
  undefined8 ***unaff_x21;
  undefined8 *puStack_5d0;
  undefined8 uStack_5c8;
  undefined2 uStack_5c0;
  undefined8 **ppuStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 **ppuStack_5a0;
  undefined8 **ppuStack_598;
  undefined8 **ppuStack_590;
  undefined8 **ppuStack_588;
  undefined1 auStack_580 [20];
  undefined1 auStack_56c [16];
  undefined1 uStack_55c;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 **ppuStack_540;
  long lStack_538;
  undefined1 auStack_530 [8];
  byte bStack_528;
  undefined8 auStack_338 [5];
  undefined8 **ppuStack_310;
  undefined8 **ppuStack_308;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [504];
  undefined8 auStack_e8 [4];
  undefined1 auStack_c8 [24];
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 **ppuStack_78;
  undefined8 uStack_58;
  
  puVar5 = param_1;
  func_0x000107479adc();
  pppuVar10 = (undefined8 ***)puVar5[1];
  uStack_58 = extraout_x8;
  FUN_107469c74(auStack_580,pppuVar10 + 0xd);
  iVar4 = (int)pppuVar10 + 0x68;
  func_0x000107469cd8();
  if (iVar4 == 0) goto LAB_107473f78;
  puStack_5d0 = (undefined8 **)0x0;
  uStack_5c8 = 0;
  uStack_5c0 = 1;
  in_ZR = *(char *)(param_1 + 5) == '\x01';
  if (((bool)in_ZR) && (in_ZR = *(char *)(param_1 + 9) == '\x01', (bool)in_ZR)) {
    puVar5 = param_1 + 2;
    func_0x00010549026c(puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_2f0,puVar5);
    puVar5 = param_1 + 6;
    func_0x00010549026c(puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_90,puVar5);
    puVar8 = (undefined8 *)param_1[10];
    lVar9 = (long)*(char *)((long)puVar8 + 0x17);
    puVar5 = puVar8;
    if (lVar9 < 0) {
      puVar5 = (undefined8 *)*puVar8;
      lVar9 = puVar8[1];
    }
    func_0x00010069648c(auStack_c8,puVar5,(long)puVar5 + lVar9);
    func_0x00010785e584(&ppuStack_540,pppuVar10 + 0x31,&uStack_2f0,&ppuStack_90,auStack_c8);
    func_0x000100100fec(auStack_c8);
    func_0x00010747a3c8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2f0);
    unaff_x21 = (undefined8 ***)(ulong)bStack_528;
    in_ZR = bStack_528 == 1;
    if ((bool)in_ZR) {
      pppuVar10 = &ppuStack_90;
      func_0x0001006ad92c(&ppuStack_90,ppuStack_540,lStack_538);
      in_ZR = bStack_79 == 0;
      uVar1 = uStack_88;
      pppuVar6 = (undefined8 ***)ppuStack_90;
      if (-1 < (char)bStack_79) {
        uVar1 = (ulong)bStack_79;
        pppuVar6 = pppuVar10;
      }
      func_0x0001078ba1ec(&uStack_2f0,pppuVar6,uVar1);
      func_0x00010747a8e0();
      func_0x00010724e5f4(&uStack_2f0);
      func_0x00010747a3c8();
    }
    else {
      pppuVar6 = &ppuStack_90;
      FUN_107474460(pppuVar6,&UNK_10f415900);
      func_0x00010747a790(&ppuStack_5b0);
      func_0x00010747a798();
      if ((int)pppuVar6 != 0) {
        func_0x00010747a788();
        lStack_2e8 = param_1[0x10];
        uStack_2f0 = param_1[0xf];
        if (param_1[0x10] != 0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001072d488c(auStack_2e0,param_1 + 0x11);
        puVar5 = auStack_e8;
        func_0x00010028af84(puVar5,&ppuStack_90);
        puStack_b0 = (undefined8 *)0x0;
        func_0x00010747a570();
        *puVar5 = &PTR_FUN_1109b2d28;
        uVar3 = uStack_2f0;
        puVar5[2] = lStack_2e8;
        puVar5[1] = uVar3;
        if (lStack_2e8 != 0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10_02 != 0);
        }
        func_0x0001072d488c(puVar5 + 3,auStack_2e0);
        func_0x00010028af84(puVar5 + 0x42,auStack_e8);
        puStack_b0 = puVar5;
        func_0x00010747ab70();
        func_0x00010747a540();
        func_0x0001006393ec(auStack_c8);
        func_0x0001074743f4(&uStack_2f0);
        pppuVar10 = pppuVar6;
      }
      func_0x000107270b00(&ppuStack_5b0);
      func_0x0001001148fc(&ppuStack_90);
    }
    func_0x0001002a2294(&ppuStack_540);
    if ((bStack_528 & 1) != 0) goto LAB_107473de8;
  }
  else {
    puVar8 = (undefined8 *)param_1[10];
    lVar9 = (long)*(char *)((long)puVar8 + 0x17);
    puVar5 = puVar8;
    if (lVar9 < 0) {
      puVar5 = (undefined8 *)*puVar8;
      lVar9 = puVar8[1];
    }
    func_0x0001078ba1ec(&uStack_2f0,puVar5,lVar9);
    func_0x00010747a8e0();
    func_0x00010724e5f4(&uStack_2f0);
LAB_107473de8:
    func_0x000104c2fe00(&ppuStack_540,param_1 + 0x12);
    func_0x000107273b60(auStack_a8,1);
    ppuVar2 = ppuStack_98;
    ppuStack_98[2] = (undefined8 **)0x0;
    *ppuStack_98 = &PTR_DAT_110996440;
    ppuStack_98[1] = (undefined8 **)0x0;
    func_0x000104c318bc(&ppuStack_90,&ppuStack_540);
    ppuStack_5b0 = (undefined8 ***)0x0;
    puStack_5a8 = (undefined8 **)0x0;
    ppuStack_5a0 = (undefined8 ***)0x0;
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_558 = 0;
    auStack_56c[0] = 0;
    uStack_55c = 0;
    func_0x0001077814e8(0x3f800000,ppuVar2 + 3,&ppuStack_90,&puStack_5d0,0,&ppuStack_5b0,&uStack_558
                        ,auStack_56c,in_x7,0,0);
    func_0x00010724e0ac(&uStack_558);
    func_0x00010724e0ac(&ppuStack_5b0);
    func_0x00010747a7f0();
    pppuVar10 = (undefined8 ***)ppuStack_98;
    ppuStack_98 = (undefined8 ***)0x0;
    unaff_x21 = pppuVar10 + 3;
    func_0x000107273c84(auStack_a8);
    ppuStack_588 = pppuVar10;
    ppuStack_90 = (undefined8 ***)0x0;
    uStack_88 = 0;
    ppuStack_590 = unaff_x21;
    func_0x000107272e90(&ppuStack_90);
    ppuStack_308 = ppuStack_588;
    ppuStack_310 = ppuStack_590;
    ppuStack_590 = (undefined8 **)0x0;
    ppuStack_588 = (undefined8 **)0x0;
    func_0x000107272e90(&ppuStack_590);
    pppuVar6 = &ppuStack_540;
    func_0x000104c2f714();
    func_0x00010747a790(&ppuStack_540);
    func_0x00010747a798();
    if ((int)pppuVar6 != 0) {
      func_0x00010747a788();
      unaff_x21 = (undefined8 ***)param_1[0xf];
      puStack_5a8 = (undefined8 *)param_1[0x10];
      pppuVar10 = pppuVar6;
      ppuStack_5b0 = unaff_x21;
      if ((undefined8 **)puStack_5a8 != (undefined8 **)0x0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10 != 0);
      }
      ppuStack_598 = ppuStack_308;
      ppuStack_5a0 = ppuStack_310;
      if ((undefined8 ***)ppuStack_308 != (undefined8 ***)0x0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10_00 != 0);
      }
      ppuStack_78 = (undefined8 **)0x0;
      func_0x00010747a070();
      pppuVar7 = &ppuStack_5b0;
      *pppuVar10 = (undefined8 **)&PTR_FUN_1109b2da8;
      pppuVar10[1] = unaff_x21;
      pppuVar10[2] = (undefined8 **)puStack_5a8;
      if ((undefined8 **)puStack_5a8 != (undefined8 **)0x0) {
        do {
          func_0x000107479c1c();
          pppuVar7 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      pppuVar10[4] = ppuStack_598;
      pppuVar10[3] = ppuStack_5a0;
      pppuVar7[2] = (undefined8 **)0x0;
      pppuVar7[3] = (undefined8 **)0x0;
      ppuStack_78 = pppuVar10;
      func_0x00010747ab70();
      func_0x00010747a540();
      func_0x0001006393ec(&ppuStack_90);
      func_0x000107474418(&ppuStack_5b0);
      pppuVar10 = pppuVar6;
    }
    func_0x000107270b00(&ppuStack_540);
    func_0x00010725af58(&ppuStack_310);
  }
  func_0x00010724e5f4(&puStack_5d0);
LAB_107473f78:
  while( true ) {
    func_0x000107270b00(auStack_580);
    func_0x000107479a9c(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001006ad934();
    func_0x0001006393ec(auStack_c8);
    func_0x0001074743f4(&uStack_2f0);
    func_0x000107270b00(&ppuStack_5b0);
    func_0x0001001148fc(&ppuStack_90);
    func_0x0001002a2294(&ppuStack_540);
    func_0x00010724e5f4(&puStack_5d0);
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) break;
    pppuVar7 = pppuVar10;
    ___cxa_begin_catch();
    func_0x000107479d28();
    pppuVar6 = (undefined8 ***)&puStack_5d0;
    ppuStack_540 = pppuVar7;
    func_0x000105c3d708(pppuVar6,&ppuStack_540);
    func_0x00010747a790(&ppuStack_590);
    func_0x00010747a798();
    if ((int)pppuVar6 != 0) {
      func_0x00010747a788();
      lStack_538 = param_1[0x10];
      ppuStack_540 = (undefined8 **)param_1[0xf];
      if (param_1[0x10] != 0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001072d488c(auStack_530,param_1 + 0x11);
      param_1 = auStack_338;
      func_0x00010028af84(param_1,&puStack_5d0);
      puStack_2f8 = (undefined8 *)0x0;
      func_0x00010747a570();
      *param_1 = &PTR_FUN_1109b2e28;
      ppuVar2 = ppuStack_540;
      unaff_x21 = (undefined8 ***)(param_1 + 1);
      param_1[2] = lStack_538;
      *unaff_x21 = ppuVar2;
      if (lStack_538 != 0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10_04 != 0);
      }
      func_0x0001072d488c(param_1 + 3,auStack_530);
      func_0x00010028af84(param_1 + 0x42,auStack_338);
      puStack_2f8 = param_1;
      func_0x00010747ab70();
      func_0x00010747a540();
      func_0x0001006393ec(&ppuStack_310);
      func_0x00010747443c(&ppuStack_540);
      pppuVar10 = pppuVar6;
    }
    func_0x00010747a550();
    func_0x0001001148fc(&puStack_5d0);
    ___cxa_end_catch();
  }
  func_0x000107270b00(auStack_580);
  func_0x000107479c9c();
  func_0x000104bd46a0(pppuVar10);
  func_0x000107479cd8();
  func_0x000107479ca4();
  func_0x000107479b00();
  return;
}



/* Entry: 1074743a0; end: 1074743c7;  */

void FUN_1074743a0(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2e98);
  func_0x000107479b00();
  return;
}



/* Entry: 1074743c8; end: 1074743d3;  */

undefined ** FUN_1074743c8(void)

{
  return &PTR_DAT_1109b2e98;
}



/* Entry: 1074743d4; end: 10747445f;  */

void FUN_1074743d4(void)

{
  func_0x00010747abd4();
  FUN_107469e14();
  return;
}



/* Entry: 107474460; end: 10747447b;  */

void FUN_107474460(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10747447c; end: 1074744a7;  */

undefined8 * FUN_10747447c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2d28;
  func_0x0001074743f4(param_1 + 1);
  return param_1;
}



/* Entry: 1074744a8; end: 1074744bb;  */

void FUN_1074744a8(void)

{
  FUN_10747447c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074744bc; end: 1074744ef;  */

undefined8 FUN_1074744bc(undefined8 param_1)

{
  func_0x00010747a570();
  FUN_107474594();
  return param_1;
}



/* Entry: 1074744f0; end: 107474513;  */

void FUN_1074744f0(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001006ad934(param_2,param_1 + 8);
  func_0x00010747a720(&PTR_FUN_1109b2d28);
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x00010747a888();
  func_0x00010747a9b0();
  return;
}



/* Entry: 107474514; end: 10747455f;  */

void FUN_107474514(void)

{
  undefined1 in_ZR;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x000107479e58();
  func_0x00010747a1b4();
  func_0x000104c2f714(auStack_60);
  func_0x000107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107479dac();
  func_0x000104c2f714();
  func_0x000107479c68();
  func_0x000107479cd8();
  func_0x000107479ca4();
  func_0x000107479b00();
  return;
}



/* Entry: 107474560; end: 107474587;  */

void FUN_107474560(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2d88);
  func_0x000107479b00();
  return;
}



/* Entry: 107474588; end: 107474593;  */

undefined ** FUN_107474588(void)

{
  return &PTR_DAT_1109b2d88;
}



/* Entry: 107474594; end: 1074745ef;  */

void FUN_107474594(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001006ad934();
  func_0x00010747a720(&PTR_FUN_1109b2d28);
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x00010747a888();
  func_0x00010747a9b0();
  return;
}



/* Entry: 1074745f0; end: 10747461b;  */

undefined8 * FUN_1074745f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2da8;
  func_0x000107474418(param_1 + 1);
  return param_1;
}



/* Entry: 10747461c; end: 10747462f;  */

void FUN_10747461c(void)

{
  FUN_1074745f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107474630; end: 107474653;  */

void FUN_107474630(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x00010747a070();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_1109b2da8;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 107474654; end: 107474677;  */

void FUN_107474654(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b2da8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 107474678; end: 107474abf;  */

void FUN_107474678(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  long *plVar14;
  uint *puStack_110;
  long lStack_108;
  uint *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  uint *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107479adc();
  lVar11 = *(long *)(param_1 + 8);
  lStack_108 = *(long *)(param_1 + 0x20);
  puStack_110 = *(uint **)(param_1 + 0x18);
  uStack_58 = extraout_x8;
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x000107469f18(auStack_c0,lVar11 + 0x40);
  uVar10 = lVar11 + 0x40;
  FUN_107469f78();
  if ((uVar10 & 1) == 0) goto LAB_107474a04;
  puVar4 = puStack_110;
  func_0x00010778196c();
  uVar2 = *puVar4;
  uVar3 = (int)(uVar2 - 0x400) < 0;
  in_ZR = uVar2 == 0x400;
  if (uVar2 < 0x401) {
    uVar2 = puVar4[1];
    uVar3 = (int)(uVar2 - 0x401) < 0;
    in_ZR = uVar2 == 0x401;
    if (0x400 < uVar2) goto LAB_1074746f8;
  }
  else {
LAB_1074746f8:
    func_0x00010724ef84(auStack_d8,puStack_110);
    uVar2 = *puVar4;
    uVar1 = puVar4[1];
    puVar5 = auStack_d8;
    func_0x0001005d466c();
    plStack_a8 = (long *)0x0;
    uStack_98 = 0;
    puVar6 = &UNK_10f41586b;
    plStack_b0 = (long *)(ulong)uVar2;
    uStack_a0 = (ulong)uVar1;
    puStack_90 = puVar5;
    uStack_88 = param_2;
    func_0x0001003a91d4();
    func_0x0001003a9204(&puStack_100);
    func_0x00010747a2e0();
    func_0x00010785f1f4();
    plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffffffffff00);
    puVar6 = puVar6 + 0xb00;
    func_0x00010724e2c8(puVar6,&plStack_b0);
    if ((int)puVar6 != 0) {
      func_0x00010786df04(0x14,&puStack_100,0,0);
    }
    func_0x00010747a8d8();
  }
  puVar4 = puStack_110;
  uVar10 = lVar11 + 0x158;
  func_0x00010726364c(uVar10,puStack_110);
  uVar13 = *(ulong *)(lVar11 + 0x148);
  if (uVar13 != 0) {
    uVar12 = uVar13 - 1;
    if ((uVar13 & uVar12) == 0) {
      unaff_x24 = uVar12 & uVar10;
      in_ZR = true;
      uVar3 = false;
    }
    else {
      uVar3 = (long)(uVar10 - uVar13) < 0;
      in_ZR = uVar10 == uVar13;
      unaff_x24 = uVar10;
      if (uVar13 <= uVar10) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar10 / uVar13;
        }
        unaff_x24 = uVar10 - uVar9 * uVar13;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar11 + 0x140) + unaff_x24 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10747480c;
          uVar9 = plVar14[1];
          uVar3 = (long)(uVar9 - uVar10) < 0;
          in_ZR = uVar9 == uVar10;
          if (!(bool)in_ZR) break;
          uVar9 = (ulong)(plVar14 + 2);
          func_0x000104c32db4(uVar9,puVar4);
          if ((uVar9 & 1) != 0) goto LAB_10747493c;
        }
        if ((uVar13 & uVar12) == 0) {
          uVar9 = uVar9 & uVar12;
        }
        else if (uVar13 <= uVar9) {
          func_0x00010747ab90();
          uVar9 = extraout_x8_00;
        }
        uVar3 = (long)(uVar9 - unaff_x24) < 0;
        in_ZR = uVar9 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_10747480c:
  plVar7 = (long *)0x58;
  __Znwm();
  plVar14 = (long *)(lVar11 + 0x150);
  uStack_a0 = 1;
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plStack_b0 = plVar7;
  plStack_a8 = plVar14;
  func_0x00010747a8a4(plVar7 + 2);
  plVar7[10] = lStack_108;
  plVar7[9] = (long)puStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010747a138(*(undefined8 *)(lVar11 + 0x158));
  if ((uVar13 == 0) || (func_0x00010747a1a8(), (bool)uVar3)) {
    func_0x000100168528(uVar13 << 1);
    FUN_107474d00(lVar11 + 0x140);
    uVar13 = *(ulong *)(lVar11 + 0x148);
    if ((uVar13 & uVar13 - 1) == 0) {
      in_ZR = 1;
      unaff_x24 = uVar13 - 1 & uVar10;
    }
    else {
      in_ZR = uVar10 == uVar13;
      unaff_x24 = uVar10;
      if (uVar13 <= uVar10) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar10 / uVar13;
        }
        unaff_x24 = uVar10 - uVar12 * uVar13;
      }
    }
  }
  lVar8 = *(long *)(lVar11 + 0x140);
  plVar7 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_b0 = *plVar14;
    *plVar14 = (long)plStack_b0;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar14;
    if (*plStack_b0 != 0) {
      uVar10 = *(ulong *)(*plStack_b0 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar10 = uVar10 & uVar13 - 1;
        in_ZR = true;
      }
      else {
        in_ZR = uVar10 == uVar13;
        if (uVar13 <= uVar10) {
          uVar12 = 0;
          if (uVar13 != 0) {
            uVar12 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar12 * uVar13;
        }
      }
      *(long **)(lVar8 + uVar10 * 8) = plStack_b0;
    }
  }
  else {
    *plStack_b0 = *plVar7;
    *plVar7 = (long)plStack_b0;
  }
  plStack_b0 = (long *)0x0;
  *(long *)(lVar11 + 0x158) = *(long *)(lVar11 + 0x158) + 1;
  FUN_107474e94(&plStack_b0);
LAB_10747493c:
  lVar8 = lVar11 + 0x98;
  FUN_107469f90(lVar8,puStack_110);
  puVar4 = puStack_110;
  if (lVar8 == 0) {
    puStack_100 = puStack_110;
    lStack_f8 = lStack_108;
    if (lStack_108 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001074737c4(lVar11 + 0x68);
    FUN_107469fbc(&uStack_f0);
    func_0x000104c2fe00(&plStack_b0,puVar4);
    lStack_70 = lStack_f8;
    puStack_78 = puStack_100;
    puStack_100 = (uint *)0x0;
    lStack_f8 = 0;
    uStack_60 = uStack_e8;
    uStack_68 = uStack_f0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lVar8 = lVar11 + 0x98;
    uVar10 = 0;
    FUN_10747380c();
    if ((uVar10 & 1) != 0) {
      lVar8 = *(long *)(lVar11 + 0xa0) + lVar8 * 0x58;
      func_0x000104c318bc(lVar8,&plStack_b0);
      *(long *)(lVar8 + 0x40) = lStack_70;
      *(uint **)(lVar8 + 0x38) = puStack_78;
      puStack_78 = (uint *)0x0;
      lStack_70 = 0;
      *(undefined8 *)(lVar8 + 0x50) = uStack_60;
      *(undefined8 *)(lVar8 + 0x48) = uStack_68;
      uStack_68 = 0;
      uStack_60 = 0;
    }
    FUN_1074704e4(&plStack_b0);
    func_0x000107470508(&puStack_100);
    func_0x000107470530(lVar11 + 0xb8,&puStack_110);
  }
  func_0x00010747a1b4();
LAB_107474a04:
  func_0x00010747a550();
  func_0x00010725af58();
  func_0x000107479a9c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074704e4(&plStack_b0);
  func_0x000107470508(&puStack_100);
  func_0x00010747a550();
  func_0x00010725af58(&puStack_110);
  func_0x000107479c68();
  func_0x000107479cd8();
  func_0x000107479ca4();
  func_0x000107479b00();
  return;
}



/* Entry: 107474ac0; end: 107474ae7;  */

void FUN_107474ac0(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2e08);
  func_0x000107479b00();
  return;
}



/* Entry: 107474ae8; end: 107474b4b;  */

undefined ** FUN_107474ae8(void)

{
  return &PTR_DAT_1109b2e08;
}



/* Entry: 107474b4c; end: 107474b77;  */

undefined8 * FUN_107474b4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2e28;
  func_0x00010747443c(param_1 + 1);
  return param_1;
}



/* Entry: 107474b78; end: 107474b8b;  */

void FUN_107474b78(void)

{
  FUN_107474b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107474b8c; end: 107474bbf;  */

undefined8 FUN_107474b8c(undefined8 param_1)

{
  func_0x00010747a570();
  FUN_107474c64();
  return param_1;
}



/* Entry: 107474bc0; end: 107474be3;  */

void FUN_107474bc0(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001006ad934(param_2,param_1 + 8);
  func_0x00010747a720(&PTR_FUN_1109b2e28);
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x00010747a888();
  func_0x00010747a9b0();
  return;
}



/* Entry: 107474be4; end: 107474c2f;  */

void FUN_107474be4(void)

{
  undefined1 in_ZR;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x000107479e58();
  func_0x00010747a1b4();
  func_0x000104c2f714(auStack_60);
  func_0x000107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107479dac();
  func_0x000104c2f714();
  func_0x000107479c68();
  func_0x000107479cd8();
  func_0x000107479ca4();
  func_0x000107479b00();
  return;
}



/* Entry: 107474c30; end: 107474c57;  */

void FUN_107474c30(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2e88);
  func_0x000107479b00();
  return;
}



/* Entry: 107474c58; end: 107474c63;  */

undefined ** FUN_107474c58(void)

{
  return &PTR_DAT_1109b2e88;
}



/* Entry: 107474c64; end: 107474cbf;  */

void FUN_107474c64(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001006ad934();
  func_0x00010747a720(&PTR_FUN_1109b2e28);
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x00010747a888();
  func_0x00010747a9b0();
  return;
}



/* Entry: 107474cc0; end: 107474cff;  */

bool FUN_107474cc0(void)

{
  bool bVar1;
  undefined8 uStack_30;
  
  func_0x00010747a8b8();
  if (uStack_30 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *uStack_30 == -1;
  }
  func_0x00010747a934();
  return bVar1;
}



/* Entry: 107474d00; end: 107474d97;  */

void FUN_107474d00(ulong param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar6;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = param_1;
  uVar5 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar3 = param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  bVar2 = uVar9 <= param_2;
  if (uVar9 < param_2) {
LAB_107474d48:
    func_0x00010747a290();
    if (uVar5 == 0) {
      FUN_107474e60(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_107474e78(lVar4);
      FUN_107474e60(uVar3,lVar4);
      func_0x00010747a5f4();
      uVar9 = extraout_x9;
      while (uVar5 != uVar9) {
        func_0x00010747a6cc();
        uVar9 = extraout_x9_00;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x00010747a0a8();
        func_0x00010747a08c();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9_01;
        uVar3 = extraout_x10;
        uVar9 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((uVar5 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (uVar5 <= uVar8) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar8 / uVar5;
            }
            uVar8 = uVar8 - uVar1 * uVar5;
          }
          if (uVar8 != uVar9) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar9 = uVar8;
            }
            else {
              *plVar6 = *plVar7;
              func_0x000107479ba4();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_02;
              uVar3 = extraout_x10_00;
              uVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x00010747a4fc();
    if ((bVar2) && ((uVar9 & uVar9 - 1) == 0)) {
      func_0x000107479ab0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    if (param_2 < uVar9) goto LAB_107474d48;
  }
  return;
}



/* Entry: 107474d98; end: 107474e5f;  */

void FUN_107474d98(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107474e60(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_107474e78(lVar2);
    FUN_107474e60(param_1,lVar2);
    func_0x00010747a5f4();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x00010747a6cc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010747a0a8();
      func_0x00010747a08c();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
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
            *plVar4 = *plVar6;
            func_0x000107479ba4();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107474e60; end: 107474e77;  */

void FUN_107474e60(long *param_1,long param_2)

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



/* Entry: 107474e78; end: 107474e93;  */

void FUN_107474e78(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010747a3a8();
  FUN_107474eb4();
  return;
}



/* Entry: 107474e94; end: 107474eb3;  */

void FUN_107474e94(void)

{
  func_0x00010747a3a8();
  FUN_107474eb4();
  return;
}



/* Entry: 107474eb4; end: 107474ecb;  */

void FUN_107474eb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107473ba4(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107474ecc; end: 107474f0b;  */

void FUN_107474ecc(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107473ba4(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107474f0c; end: 107474fbf;  */

long FUN_107474f0c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = (undefined4)((ulong)param_3 >> 0x20);
  uVar4 = (undefined4)param_3;
  func_0x00010747a738();
  func_0x000107479cac();
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  func_0x00010747ab64(*param_1 >> 0xc ^ CONCAT44(uVar5,uVar4) >> 7);
  uVar7 = extraout_x8;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    func_0x00010747ab9c();
    for (uVar8 = extraout_x8_00 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar3 = (int)&stack0xffffffffffffff70;
      FUN_1074738d0(&stack0xffffffffffffff70,uVar1 + uVar9 * 0x58);
      if (iVar3 != 0) {
        return *unaff_x19 + uVar9;
      }
    }
    func_0x00010747a1bc();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  return 0;
}



/* Entry: 107474fc0; end: 107474ffb;  */

void FUN_107474fc0(void)

{
  long unaff_x20;
  
  func_0x000107479e20();
  if (unaff_x20 != 0) {
    __ZNSt3__15mutexD1Ev(unaff_x20 + 0x40);
    func_0x0001072db8c4(unaff_x20 + 0x20);
    FUN_107474ffc();
    __ZdlPv();
  }
  return;
}



/* Entry: 107474ffc; end: 10747502f;  */

long FUN_107474ffc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_107475030(param_1);
    func_0x00010747a0d4();
  }
  return param_1;
}



/* Entry: 107475030; end: 107475093;  */

void FUN_107475030(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010747506c(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 107475094; end: 1074750af;  */

void FUN_107475094(void)

{
  undefined1 uStack_11;
  
  FUN_1074750b0(&uStack_11);
  return;
}



/* Entry: 1074750b0; end: 107475127;  */

undefined1 * FUN_1074750b0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107479adc();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_107475128();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109b2eb8;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0x3f800000;
  func_0x000107479dd0();
  func_0x00010747524c();
  func_0x000107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_107475150();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 107475128; end: 10747514f;  */

long FUN_107475128(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107475150();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107475150; end: 10747516b;  */

void FUN_107475150(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109b2eb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10747516c; end: 10747516f;  */

void FUN_10747516c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2eb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107475170; end: 107475183;  */

void FUN_107475170(void)

{
  func_0x000107475190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107475184; end: 10747519f;  */

undefined8 FUN_107475184(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010747ac14(param_1 + 0x18);
  func_0x0001074751c4();
  func_0x00010747a3a8();
  FUN_107475234();
  return unaff_x19;
}



/* Entry: 1074751a0; end: 107475233;  */

undefined8 FUN_1074751a0(void)

{
  undefined8 unaff_x19;
  
  func_0x00010747ac14();
  func_0x0001074751c4();
  func_0x00010747a3a8();
  FUN_107475234();
  return unaff_x19;
}



/* Entry: 107475234; end: 10747525b;  */

void FUN_107475234(long *param_1)

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



/* Entry: 10747525c; end: 1074752bf;  */

void FUN_10747525c(void)

{
  func_0x00010747a3a8();
  func_0x00010747527c();
  return;
}



/* Entry: 1074752c0; end: 1074752e7;  */

long FUN_1074752c0(long param_1)

{
  FUN_1074752e8();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074752e8; end: 10747530f;  */

void FUN_1074752e8(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107479eb4();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107475310; end: 107475333;  */

void FUN_107475310(void)

{
  func_0x000107479eb4();
  FUN_107475334();
  return;
}



/* Entry: 107475334; end: 107475357;  */

void FUN_107475334(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000107479ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 107475358; end: 10747540b;  */

void FUN_107475358(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107479bd0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107479b8c(uVar1);
  return;
}



/* Entry: 10747540c; end: 10747541f;  */

void FUN_10747540c(void)

{
  func_0x0001074753e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107475420; end: 107475443;  */

long FUN_107475420(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010747a520();
  func_0x000107479cac();
  *param_1 = &PTR_SUB_1109b2f08;
  func_0x00010747226c(param_1 + 1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  return unaff_x19;
}



/* Entry: 107475444; end: 107475467;  */

void FUN_107475444(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107479cac(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109b2f08;
  func_0x00010747226c(param_2 + 1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  return;
}



/* Entry: 107475468; end: 107475563;  */

void FUN_107475468(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [8];
  
  func_0x000107479e4c();
  FUN_107469c74();
  iVar1 = (int)unaff_x19 + 8;
  func_0x000107469cd8();
  if (iVar1 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    lStack_98 = 0;
    lStack_90 = 0;
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_90 = lVar2;
      if (lVar2 != 0) {
        lStack_98 = *(long *)(unaff_x19 + 0x28);
        if (lStack_98 != 0) {
          FUN_1073ada24(lStack_98,*(undefined8 *)(unaff_x19 + 0x38));
        }
      }
    }
    func_0x00010724b54c(&lStack_98);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000107479dc0(*(undefined8 *)(unaff_x19 + 0x40));
    lStack_98 = CONCAT44(lStack_98._4_4_,0xce);
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107479cb8();
    uStack_70 = 0;
    uStack_50 = 0;
    uStack_4c = 1;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    puVar3 = *(undefined8 **)(lVar4 + 0x248);
    uStack_a8 = *puVar3;
    uStack_a0 = 3;
    func_0x00010747a0f0(puVar3,&lStack_98,auStack_28,&uStack_a8);
    func_0x000107262330(&lStack_98);
  }
  func_0x00010747a18c();
  return;
}



/* Entry: 107475564; end: 10747558b;  */

void FUN_107475564(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2f68);
  func_0x000107479b00();
  return;
}



/* Entry: 10747558c; end: 107475597;  */

undefined ** FUN_10747558c(void)

{
  return &PTR_DAT_1109b2f68;
}



/* Entry: 107475598; end: 1074755f3;  */

void FUN_107475598(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107479cac();
  *param_1 = &PTR_SUB_1109b2f08;
  func_0x00010747226c(param_1 + 1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  return;
}



/* Entry: 1074755f4; end: 107475617;  */

void FUN_1074755f4(void)

{
  func_0x000107479eb4();
  FUN_107475618();
  return;
}



/* Entry: 107475618; end: 107475623;  */

void FUN_107475618(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 107475624; end: 1074756c7;  */

long FUN_107475624(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010747a6c0(), extraout_x8 != 0)) {
    func_0x00010726364c();
    func_0x000107479de8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010747a5a8();
      if ((bool)in_CY) {
        func_0x00010747a3b4();
      }
    }
    func_0x00010747a654();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x00010747a7c8();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x00010747a39c();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1074756c8; end: 1074756e3;  */

void FUN_1074756c8(long param_1)

{
  FUN_107472e90();
  *(undefined1 *)(param_1 + 0x170) = 1;
  return;
}



/* Entry: 1074756e4; end: 1074756eb;  */

void FUN_1074756e4(void)

{
  return;
}



/* Entry: 1074756ec; end: 107475717;  */

void FUN_1074756ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010747a0a0();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_1109b2f88;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107475718; end: 10747573b;  */

void FUN_107475718(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b2f88;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10747573c; end: 107475d03;  */

void FUN_10747573c(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long *plVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong extraout_x9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_320 [24];
  long lStack_308;
  undefined1 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined1 uStack_2e8;
  undefined4 uStack_2e7;
  undefined3 uStack_2e3;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  uint *puStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined1 uStack_240;
  uint *puStack_238;
  uint auStack_230 [6];
  undefined4 uStack_218;
  undefined4 uStack_214;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [88];
  char cStack_c0;
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  undefined ***pppuStack_a0;
  undefined8 uStack_80;
  undefined ***pppuVar8;
  
  plVar9 = param_2;
  func_0x000107479adc();
  lVar19 = *(long *)(param_1 + 8);
  puVar6 = *(undefined8 **)(lVar19 + 0x248);
  auStack_230[0] = 0xd1;
  uStack_218 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_80 = extraout_x8;
  func_0x000107479cb8();
  uStack_208 = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 1;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e0 = 0;
  uStack_2e0._0_4_ = (undefined4)((plVar9[1] - *plVar9) / 0x58);
  uStack_2d8 = 1;
  ppuStack_b8 = (undefined **)*puVar6;
  uStack_b0 = 3;
  uStack_210 = extraout_x9;
  FUN_10743fa44();
  func_0x000107262330(auStack_230);
  piVar16 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
LAB_107475808:
  bVar4 = piVar16 == piVar1;
  if (bVar4) {
    func_0x000107479a9c(uStack_80);
    if (bVar4) {
      return;
    }
    ___stack_chk_fail();
    FUN_1074713d4(auStack_230);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x107475c30);
    (*pcVar3)();
  }
  iVar5 = *piVar16;
  if (1 < iVar5 - 1U) {
    if (iVar5 == 3) {
      func_0x00010724ef84(auStack_320,piVar16 + 2);
      ppuStack_b8 = &PTR_FUN_1109b2ff8;
      pppuStack_a0 = &ppuStack_b8;
      uStack_300 = 1;
      lVar10 = lVar19 + 0x58;
      lStack_308 = lVar19 + 0x58;
      func_0x000107279a5c();
      func_0x00010747a7a8();
      if (lVar10 == 0) {
LAB_1074759f4:
        auStack_230[0] = auStack_230[0] & 0xffffff00;
        uStack_210 = uStack_210 & 0xffffffffffffff00;
      }
      else {
        if (pppuStack_a0 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_107475c1c;
        }
        pppuVar8 = pppuStack_a0;
        func_0x00010747a260();
        iVar5 = (int)pppuVar8;
        (*extraout_x8_01)();
        if (iVar5 == 0) goto LAB_1074759f4;
        plVar9 = &uStack_2e0;
        FUN_107475dd4(plVar9,lVar10 + 0x28);
        func_0x00010747a7a8();
        if (plVar9 != (long *)0x0) {
          uVar17 = *(ulong *)(lVar19 + 0x108);
          uVar18 = plVar9[1];
          uVar11 = uVar17 - 1;
          if ((uVar17 & uVar11) == 0) {
            uVar18 = uVar11 & uVar18;
          }
          else if (uVar17 <= uVar18) {
            uVar14 = 0;
            if (uVar17 != 0) {
              uVar14 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar14 * uVar17;
          }
          lVar10 = *plVar9;
          lVar12 = *(long *)(lVar19 + 0x100);
          plVar2 = *(long **)(lVar12 + uVar18 * 8);
          do {
            plVar13 = plVar2;
            plVar2 = (long *)*plVar13;
          } while ((long *)*plVar13 != plVar9);
          if (plVar13 == (long *)(lVar19 + 0x110)) {
LAB_107475ac0:
            if (lVar10 == 0) {
LAB_107475af4:
              *(undefined8 *)(lVar12 + uVar18 * 8) = 0;
              lVar10 = *plVar9;
              goto LAB_107475afc;
            }
            uVar14 = *(ulong *)(lVar10 + 8);
            if ((uVar17 & uVar11) == 0) {
              uVar15 = uVar14 & uVar11;
            }
            else {
              uVar15 = uVar14;
              if (uVar17 <= uVar14) {
                uVar15 = 0;
                if (uVar17 != 0) {
                  uVar15 = uVar14 / uVar17;
                }
                uVar15 = uVar14 - uVar15 * uVar17;
              }
            }
            if (uVar15 != uVar18) goto LAB_107475af4;
LAB_107475b04:
            if ((uVar17 & uVar11) == 0) {
              uVar14 = uVar14 & uVar11;
            }
            else if (uVar17 <= uVar14) {
              uVar11 = 0;
              if (uVar17 != 0) {
                uVar11 = uVar14 / uVar17;
              }
              uVar14 = uVar14 - uVar11 * uVar17;
            }
            if (uVar14 != uVar18) {
              *(long **)(lVar12 + uVar14 * 8) = plVar13;
              lVar10 = *plVar9;
            }
          }
          else {
            uVar14 = plVar13[1];
            if ((uVar17 & uVar11) == 0) {
              uVar14 = uVar14 & uVar11;
            }
            else if (uVar17 <= uVar14) {
              uVar15 = 0;
              if (uVar17 != 0) {
                uVar15 = uVar14 / uVar17;
              }
              uVar14 = uVar14 - uVar15 * uVar17;
            }
            if (uVar14 != uVar18) goto LAB_107475ac0;
LAB_107475afc:
            if (lVar10 != 0) {
              uVar14 = *(ulong *)(lVar10 + 8);
              goto LAB_107475b04;
            }
          }
          *plVar13 = lVar10;
          *plVar9 = 0;
          *(long *)(lVar19 + 0x118) = *(long *)(lVar19 + 0x118) + -1;
          uStack_2e8 = 1;
          uStack_2e7 = 0;
          uStack_2e3 = 0;
          plStack_2f8 = plVar9;
          plStack_2f0 = (long *)(lVar19 + 0x110);
          FUN_107475e20(&plStack_2f8);
        }
        FUN_107475dd4(auStack_230,&uStack_2e0);
        uStack_210 = CONCAT71(uStack_210._1_7_,1);
        func_0x000107470ac4(&uStack_2e0);
      }
      func_0x000107279ee0(&lStack_308);
      FUN_107475ed4(&ppuStack_b8);
      func_0x00010747a8d8();
      if ((char)uStack_210 == '\x01') {
        if (CONCAT44(uStack_214,uStack_218) == 0) {
          func_0x000104bfeb48();
LAB_107475c1c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x107475c20);
          (*pcVar3)();
        }
        func_0x00010747a260();
        func_0x00010747a80c();
      }
      FUN_107475f08(auStack_230);
      goto LAB_107475bc0;
    }
    if (iVar5 != 4) goto LAB_107475bc0;
    func_0x0001072ab574(lVar19 + 0x2e8);
    uVar17 = *(ulong *)(lVar19 + 0x330);
    for (uVar18 = *(ulong *)(lVar19 + 0x328); uVar11 = uVar17, uVar18 != uVar17;
        uVar18 = uVar18 + 0xb0) {
      uVar14 = uVar18;
      func_0x000104c32db4(uVar18,piVar16 + 2);
      uVar11 = uVar18;
      if ((int)uVar14 != 0) goto LAB_107475a08;
    }
    goto LAB_107475a3c;
  }
  func_0x000104c2fe00(&ppuStack_b8,piVar16 + 2);
  FUN_10746bcac(auStack_230,lVar19 + 0x178,&ppuStack_b8);
  if (cStack_c0 == '\x01') {
    dVar20 = *(double *)(piVar16 + 0x14);
    FUN_10746bb6c(&uStack_2e0,auStack_230);
    *(float *)(CONCAT44(uStack_2e0._4_4_,(undefined4)uStack_2e0) + 800) = (float)dVar20;
    func_0x0001074737a0(&uStack_2e0);
    func_0x0001072ab574(lVar19 + 0x2e8);
    func_0x000104c2fe00(&uStack_2e0,&ppuStack_b8);
    uStack_2a8 = 2;
    uStack_2a4 = uStack_138;
    FUN_1073658bc(auStack_2a0,auStack_130);
    FUN_1073ae3fc(auStack_288,auStack_118);
    puVar7 = auStack_230;
    FUN_10746bb6c(&plStack_2f8);
    func_0x000107479cc8(plStack_2f8[0x56]);
    (*extraout_x8_00)();
    uStack_268 = 1;
    uStack_240 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    puStack_270 = puVar7;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_238 = puVar7;
    func_0x00010747a894();
    FUN_10746b934(*(undefined8 *)(lVar19 + 0x248),&uStack_2e0);
    FUN_107470bbc(lVar19 + 0x328,&uStack_2e0);
    func_0x000107470ee8(&uStack_2e0);
    func_0x00010747a3e0();
  }
  func_0x000107470f48(auStack_230);
  func_0x000104c2f714(&ppuStack_b8);
  goto LAB_107475bc0;
LAB_107475a08:
  while (uVar18 = uVar18 + 0xb0, uVar18 != uVar17) {
    uVar14 = uVar18;
    func_0x000104c32db4(uVar18,piVar16 + 2);
    if ((uVar14 & 1) == 0) {
      FUN_1074713d4(uVar11,uVar18);
      uVar11 = uVar11 + 0xb0;
    }
  }
LAB_107475a3c:
  if (uVar11 != *(ulong *)(lVar19 + 0x330)) {
    FUN_107470f68(lVar19 + 0x328,uVar11);
  }
  func_0x00010747a3e0();
LAB_107475bc0:
  if (*param_2 != param_2[1]) {
    FUN_10746f318(*(undefined8 *)(lVar19 + 0x270),&UNK_10de70e5a);
  }
  piVar16 = piVar16 + 0x16;
  goto LAB_107475808;
}



/* Entry: 107475d04; end: 107475d2b;  */

void FUN_107475d04(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3078);
  func_0x000107479b00();
  return;
}



/* Entry: 107475d2c; end: 107475d37;  */

undefined ** FUN_107475d2c(void)

{
  return &PTR_DAT_1109b3078;
}



/* Entry: 107475d38; end: 107475dd3;  */

long FUN_107475d38(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010747a6c0(), extraout_x8 != 0)) {
    func_0x00010747a854();
    func_0x000107479de8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010747a5a8();
      if ((bool)in_CY) {
        func_0x00010747a3b4();
      }
    }
    func_0x00010747a654();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x00010747a678();
        if (!(bool)in_ZR) break;
        func_0x00010747a018();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x00010747a39c();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107475dd4; end: 107475e1f;  */

long FUN_107475dd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010747a078();
    func_0x00010747a0e0();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 107475e20; end: 107475e53;  */

void FUN_107475e20(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107479e20();
  if (unaff_x20 != 0) {
    func_0x00010747ab20();
    if ((bool)in_ZR) {
      FUN_107470aa4(unaff_x20 + 0x10);
    }
    func_0x000107479f40();
  }
  return;
}



/* Entry: 107475e54; end: 107475e5b;  */

void FUN_107475e54(void)

{
  return;
}



/* Entry: 107475e5c; end: 107475e7b;  */

void FUN_107475e5c(undefined8 *param_1)

{
  func_0x00010747a0a0();
  *param_1 = &PTR_FUN_1109b2ff8;
  return;
}



/* Entry: 107475e7c; end: 107475e9f;  */

void FUN_107475e7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b2ff8;
  return;
}



/* Entry: 107475ea0; end: 107475ec7;  */

void FUN_107475ea0(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3068);
  func_0x000107479b00();
  return;
}



/* Entry: 107475ec8; end: 107475ed3;  */

undefined ** FUN_107475ec8(void)

{
  return &PTR_DAT_1109b3068;
}



/* Entry: 107475ed4; end: 107475f07;  */

void FUN_107475ed4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107479bd0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107479b8c(uVar1);
  return;
}



/* Entry: 107475f08; end: 107475f27;  */

void FUN_107475f08(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107470ac4();
  }
  return;
}



/* Entry: 107475f28; end: 107476107;  */

long FUN_107475f28(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010747a6c0(), extraout_x8 != 0)) {
    func_0x00010747a854();
    func_0x000107479de8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010747a5a8();
      if ((bool)in_CY) {
        func_0x00010747a3b4();
      }
    }
    func_0x00010747a654();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x00010747a018();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x00010747a39c();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107476108; end: 10747611f;  */

void FUN_107476108(long *param_1,long param_2)

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



/* Entry: 107476120; end: 107476153;  */

void FUN_107476120(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107479e20();
  if (unaff_x20 != 0) {
    func_0x00010747ab20();
    if ((bool)in_ZR) {
      func_0x000107470a04(unaff_x20 + 0x10);
    }
    func_0x000107479f40();
  }
  return;
}



/* Entry: 107476154; end: 1074761a3;  */

void FUN_107476154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_107473260(param_1,&uStack_20);
    FUN_1073c5fb4(&uStack_20);
  }
  return;
}



/* Entry: 1074761a4; end: 1074761ab;  */

void FUN_1074761a4(void)

{
  return;
}



/* Entry: 1074761ac; end: 1074761d7;  */

void FUN_1074761ac(void)

{
  func_0x00010747a33c();
  func_0x000107479c38(&PTR_FUN_1109b3098);
  func_0x00010747aab0();
  return;
}



/* Entry: 1074761d8; end: 10747620b;  */

void FUN_1074761d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_1109b3098;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10747620c; end: 1074763db;  */

void FUN_10747620c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar7;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [56];
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  lVar5 = param_2;
  func_0x000107479adc();
  uStack_48 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_110,*(undefined8 *)(lVar5 + 8));
  func_0x0001077805c4(auStack_f8,**(undefined8 **)(param_2 + 0x10));
  puVar6 = *(undefined8 **)(param_2 + 0x18);
  uStack_c0 = *(undefined4 *)(**(long **)(param_2 + 0x10) + 0x80);
  if (*(char *)(puVar6 + 2) == '\x01') {
    func_0x000107280b2c();
    uStack_118 = puVar6[1];
    uStack_120 = *puVar6;
    FUN_10740eff4(&uStack_b8,&uStack_120,1);
  }
  else {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *(char *)(puVar2 + 1) == '\x01';
  if ((bool)uVar1) {
    func_0x00010726a954();
    uStack_124 = *puVar2;
    func_0x0001072f8f08(&uStack_a0,&uStack_124,1);
  }
  else {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  puVar4 = auStack_110;
  lVar5 = **(long **)(param_2 + 0x28);
  uStack_80 = *(undefined8 *)(lVar5 + 0x30);
  uStack_88 = *(undefined8 *)(lVar5 + 0x28);
  if (*(long *)(lVar5 + 0x30) != 0) {
    do {
      func_0x000107479c1c();
      puVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x30);
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  *(undefined8 *)(puVar4 + 0xa0) = puVar6[1];
  *(undefined8 *)(puVar4 + 0x98) = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x000107479c1c();
      puVar4 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  *(undefined8 *)(puVar4 + 0xa8) = 0;
  uStack_60 = 0;
  func_0x000107473514(auStack_58);
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1);
  iVar3 = (int)auStack_110;
  FUN_107476410(param_1 + 0xa8);
  func_0x000107472fe4();
  func_0x000107479a9c(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar3 != 0) {
      func_0x00010747aa24();
      func_0x0001074737a0(auStack_78);
      func_0x00010747377c(&uStack_88);
      func_0x0001056d1ce4(&uStack_a0);
      func_0x00010725aef4(&uStack_b8);
      func_0x000104c2f714(auStack_f8);
      func_0x00010747a334();
    }
    func_0x000107479c68();
    func_0x000107479cd8();
    func_0x000107479ca4();
    func_0x000107479b00();
    return;
  }
  return;
}



/* Entry: 1074763dc; end: 107476403;  */

void FUN_1074763dc(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3108);
  func_0x000107479b00();
  return;
}



/* Entry: 107476404; end: 10747640f;  */

undefined ** FUN_107476404(void)

{
  return &PTR_DAT_1109b3108;
}



/* Entry: 107476410; end: 1074764eb;  */

void FUN_107476410(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4();
  func_0x00010747abc0();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x50) = *(undefined4 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined1 *)(unaff_x20 + 0xb0) = *(undefined1 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  return;
}



/* Entry: 1074764ec; end: 1074764f3;  */

void FUN_1074764ec(void)

{
  return;
}



/* Entry: 1074764f4; end: 107476523;  */

void FUN_1074764f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010747a2c4();
  func_0x000107479c38(&PTR_FUN_1109b3128);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}


