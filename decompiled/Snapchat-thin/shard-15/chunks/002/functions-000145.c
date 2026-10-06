/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b914474; end: 10b914477;  */

void FUN_10b914474(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b914478; end: 10b914597;  */

void FUN_10b914478(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b914ddc();
  *param_1 = &PTR_FUN_110d75c88;
  lVar1 = 0x18;
  __Znwm();
  func_0x00010b914e30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b914e20();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *(long *)(lVar1 + 0x10) = lVar2;
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10b914598; end: 10b91459f;  */

void FUN_10b914598(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x00010b9145d8();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b9145a0; end: 10b9145ff;  */

void FUN_10b9145a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x38;
    func_0x00010b9145d8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b914600; end: 10b91461f;  */

void FUN_10b914600(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b913bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b914620; end: 10b914623;  */

void FUN_10b914620(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b914624; end: 10b914683;  */

void FUN_10b914624(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b914ddc();
  *param_1 = &PTR_FUN_110d75ca8;
  func_0x00010b914e00();
  func_0x00010b914e30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  param_1[2] = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010b914d20(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18),param_1 + 3);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b914684; end: 10b914783;  */

void FUN_10b914684(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  code *pcVar5;
  undefined8 uStack_88;
  undefined1 *apuStack_80 [3];
  char cStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010b914c10();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar4 + 8) + 0x18;
  uStack_28 = extraout_x8;
  FUN_10b931fe4(apuStack_80,lVar2,lVar4);
  if (cStack_68 == '\x01') {
    pcVar5 = *(code **)(lVar4 + 0x18);
    func_0x0001080e6ccc(auStack_48,apuStack_80);
    (*pcVar5)();
    puVar3 = auStack_48;
    func_0x0001080c5c8c();
  }
  else {
    func_0x000107c31084();
    puStack_58 = &UNK_1003ab990;
    lStack_60 = lVar4;
    func_0x00010b914e78();
    func_0x000107c3173c(auStack_48);
    func_0x000107c31080(&uStack_88,lVar2,auStack_48);
    FUN_10b99f560(&lStack_60,&uStack_88);
    func_0x000108107250(lVar4 + 0x18,&lStack_60);
    func_0x000104bda960(lStack_60);
    func_0x000107c278f8(uStack_88);
    puVar3 = auStack_48;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  uVar1 = cStack_68 == '\x01';
  if (((bool)uVar1) && (puVar3 = apuStack_80[0], apuStack_80[0] != (undefined1 *)0x0)) {
    func_0x00010b914d8c();
    puVar3 = apuStack_80[0];
  }
  func_0x00010b914be8(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar3 + 8) != 0) {
    FUN_10b913ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b914784; end: 10b9147a3;  */

void FUN_10b914784(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b913ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9147a4; end: 10b9147a7;  */

void FUN_10b9147a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9147a8; end: 10b9147ff;  */

void FUN_10b9147a8(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x00010b914ddc();
  func_0x00010b914d80(&PTR_FUN_110d75cc8);
  func_0x00010b914e84();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11 != 0);
  }
  func_0x00010b914d6c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b914c78();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  return;
}



/* Entry: 10b914800; end: 10b914827;  */

void FUN_10b914800(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010b914e9c();
  FUN_10b932584();
                    /* WARNING: Could not recover jumptable at 0x00010b914824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x19 + 0x18))(param_1,(undefined8 *)(unaff_x19 + 0x18));
  return;
}



/* Entry: 10b914828; end: 10b914847;  */

void FUN_10b914828(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b913d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b914848; end: 10b91484b;  */

void FUN_10b914848(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b91484c; end: 10b91499f;  */

void FUN_10b91484c(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x00010b914ddc();
  func_0x00010b914d80(&PTR_FUN_110d75ce8);
  func_0x00010b914e84();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11 != 0);
  }
  func_0x00010b914d6c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b914c78();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  return;
}



/* Entry: 10b9149a0; end: 10b9149bf;  */

void FUN_10b9149a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b913e18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9149c0; end: 10b9149c3;  */

void FUN_10b9149c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9149c4; end: 10b914a7f;  */

void FUN_10b9149c4(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x00010b914ddc();
  func_0x00010b914d80(&PTR_FUN_110d75d08);
  func_0x00010b914e84();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11 != 0);
  }
  func_0x00010b914d6c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b914c78();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  return;
}



/* Entry: 10b914a80; end: 10b914a9f;  */

void FUN_10b914a80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b913eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b914aa0; end: 10b914aa3;  */

void FUN_10b914aa0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b914aa4; end: 10b914b03;  */

void FUN_10b914aa4(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b914ddc();
  *param_1 = &PTR_FUN_110d75d28;
  func_0x00010b914e00();
  func_0x00010b914e30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  param_1[2] = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010b914d20(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18),param_1 + 3);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b914b04; end: 10b914f87;  */

long * FUN_10b914b04(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long alStack_d8 [2];
  long lStack_c8;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar8 = *(long *)(param_1 + 0x10);
  lVar7 = lVar8;
  func_0x00010b914c10();
  lStack_48 = 0;
  uStack_28 = extraout_x8;
  FUN_10b932764(&lStack_68,lVar7 + 0x18);
  if (lStack_68 == 1) {
    (**(code **)(**(long **)(lVar8 + 0x80) + 0x38))
              (&puStack_80,*(long **)(lVar8 + 0x80),lVar8 + 0x60,auStack_60);
  }
  else {
    puStack_80 = (undefined8 *)0x2;
    puStack_78 = (undefined8 *)auStack_60[0];
    auStack_60[0] = 0;
  }
  func_0x0001080c6694(&lStack_48,&puStack_80);
  func_0x0001080c6234(&puStack_80);
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  uStack_70 = *(undefined8 *)(lVar8 + 200);
  puVar11 = *(undefined8 **)(lVar8 + 0xc0);
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined8 *)(lVar8 + 200) = 0;
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  puStack_80 = puVar10;
  puStack_78 = puVar11;
  for (; uVar3 = puVar10 == puVar11, !(bool)uVar3; puVar10 = puVar10 + 6) {
    uVar9 = *puVar10;
    lStack_38 = lStack_48;
    if (lStack_48 == 2) {
      if (lStack_40 != 0) {
        plVar4 = (long *)(lStack_40 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_30 = lStack_40;
    }
    func_0x00010b914d20(uVar9,&lStack_38);
    func_0x0001080c6234(&lStack_38);
  }
  FUN_10b914214(&puStack_80);
  func_0x0001080c5c8c(&lStack_68);
  plVar4 = &lStack_48;
  func_0x0001080c6234();
  func_0x00010b914be8(uStack_28);
  if ((bool)uVar3) {
    return plVar4;
  }
  ___stack_chk_fail();
  uStack_88 = 0x10b913a94;
  plVar5 = plVar4;
  puStack_a0 = puVar10;
  puStack_98 = puVar11;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010b914c10();
  plVar6 = (long *)plVar5[0x10];
  plVar5 = plVar4 + 0xc;
  uStack_a8 = extraout_x8_00;
  (**(code **)(*plVar6 + 0x20))();
  if ((int)plVar6 != 0) {
    plVar5 = plVar4 + 0xc;
    (**(code **)(*(long *)plVar4[0x10] + 0x28))(&lStack_c8);
    uVar3 = lStack_c8 == 1;
    if ((bool)uVar3) {
      plVar5 = alStack_c0;
      func_0x00010b932acc(alStack_d8,plVar4 + 3);
      uVar3 = alStack_d8[0] == 1;
      if (!(bool)uVar3) {
        func_0x00010b914e70();
      }
      func_0x0001080c6234(alStack_d8);
    }
    else {
      func_0x00010b914e70();
    }
    plVar6 = &lStack_c8;
    func_0x0001080c5c8c();
  }
  func_0x00010b914be8(uStack_a8);
  if ((bool)uVar3) {
    return plVar6;
  }
  ___stack_chk_fail();
  if (plVar6 != plVar5) {
    lVar8 = *plVar5;
    *plVar5 = 0;
    lVar7 = *plVar6;
    *plVar6 = lVar8;
    func_0x0001080d8654(lVar7);
  }
  return plVar6;
}



/* Entry: 10b914f88; end: 10b9150eb;  */

undefined8 * FUN_10b914f88(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  int extraout_w10;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  func_0x00010b916d04();
  uStack_48 = extraout_x8;
  func_0x000104bd4df4(&puStack_80);
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar8 = *(long *)(param_2 + 0x10);
  uStack_90 = uVar2;
  if ((lVar8 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_88 = lVar8, lVar8 == 0)) {
    puVar7 = (undefined8 *)0x0;
    FUN_10b91275c();
  }
  else {
    do {
      func_0x00010b916e2c();
    } while (extraout_w10 != 0);
    lVar6 = 0x40;
    __Znwm();
    pcStack_78 = FUN_10b9156ec;
    ppuStack_70 = &PTR_FUN_110d75f40;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_68 = uVar2;
    lStack_60 = lVar8;
    FUN_10b9ac22c();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_98 = lVar6;
    FUN_10b9a8ef8(&pcStack_78,&lStack_98);
    puVar7 = puStack_80;
    func_0x000107c31088(auStack_b0,&UNK_10f7cd6bc);
    FUN_10b8b510c(puVar7 + 2,auStack_b0);
    FUN_10b9a9020();
    func_0x00010b916f00();
    FUN_10b9a8d98(&pcStack_78);
    func_0x000104bda3ac(lVar6);
    do {
      uVar5 = *plVar1 + -1 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bool)uVar5) {
      func_0x00010b916e60();
    }
    FUN_10b9156c4(&uStack_a8);
    FUN_10b9a8f54(param_1,&puStack_80);
    FUN_10b9156c4(&uStack_90);
    func_0x000104bd4e64();
    func_0x00010b916cd4(uStack_48);
    puVar7 = puStack_80;
    if ((bool)uVar5) {
      return puStack_80;
    }
  }
  ___stack_chk_fail();
  *puVar7 = &PTR_FUN_110d75d98;
  FUN_10b9a1f08(puVar7 + 0xf);
  lVar8 = puVar7[0xc];
  if (lVar8 != 0) {
    lVar9 = 0;
    for (lVar6 = 0; lVar6 != lVar8; lVar6 = lVar6 + 1) {
      if (-1 < *(char *)(puVar7[9] + lVar6)) {
        FUN_10b9151b4(puVar7[10] + lVar9);
        lVar8 = puVar7[0xc];
      }
      lVar9 = lVar9 + 0x18;
    }
    __ZdlPv();
    puVar7[0xe] = 0;
    puVar7[9] = &UNK_10dd5b8b0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
  }
  func_0x0001080d8598(puVar7 + 6);
  func_0x0001052750b0(puVar7 + 5);
  func_0x000104bd5214(puVar7 + 4);
  func_0x0001080e6aa4(puVar7 + 3);
  func_0x00010b9151dc(puVar7 + 1);
  return puVar7;
}



/* Entry: 10b9150ec; end: 10b9150ef;  */

undefined8 * FUN_10b9150ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d75d98;
  FUN_10b9a1f08(param_1 + 0xf);
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[9] + lVar3)) {
        FUN_10b9151b4(param_1[10] + lVar2);
        lVar1 = param_1[0xc];
      }
      lVar2 = lVar2 + 0x18;
    }
    __ZdlPv();
    param_1[0xe] = 0;
    param_1[9] = &UNK_10dd5b8b0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  func_0x0001080d8598(param_1 + 6);
  func_0x0001052750b0(param_1 + 5);
  func_0x000104bd5214(param_1 + 4);
  func_0x0001080e6aa4(param_1 + 3);
  func_0x00010b9151dc(param_1 + 1);
  return param_1;
}



/* Entry: 10b9150f0; end: 10b915103;  */

void FUN_10b9150f0(void)

{
  FUN_10b915104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b915104; end: 10b9151b3;  */

undefined8 * FUN_10b915104(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d75d98;
  FUN_10b9a1f08(param_1 + 0xf);
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[9] + lVar3)) {
        FUN_10b9151b4(param_1[10] + lVar2);
        lVar1 = param_1[0xc];
      }
      lVar2 = lVar2 + 0x18;
    }
    __ZdlPv();
    param_1[0xe] = 0;
    param_1[9] = &UNK_10dd5b8b0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  func_0x0001080d8598(param_1 + 6);
  func_0x0001052750b0(param_1 + 5);
  func_0x000104bd5214(param_1 + 4);
  func_0x0001080e6aa4(param_1 + 3);
  func_0x00010b9151dc(param_1 + 1);
  return param_1;
}



/* Entry: 10b9151b4; end: 10b915203;  */

undefined8 FUN_10b9151b4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b915234(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b915204; end: 10b91520f;  */

void FUN_10b915204(long param_1)

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



/* Entry: 10b915210; end: 10b915233;  */

void FUN_10b915210(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,param_1);
  return;
}



/* Entry: 10b915234; end: 10b91525b;  */

long FUN_10b915234(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b91525c; end: 10b91525f;  */

void FUN_10b91525c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b915260; end: 10b915273;  */

void FUN_10b915260(void)

{
  func_0x00010b915284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b915274; end: 10b915293;  */

void FUN_10b915274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b91527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b915294; end: 10b91535b;  */

void FUN_10b915294(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b91535c(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b9152dc;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b9152dc;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b915330:
    FUN_10b91539c(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b915330;
    }
    func_0x00010b9154c8(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b91535c(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b9152dc:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b91535c; end: 10b91539b;  */

ulong FUN_10b91535c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b91539c; end: 10b91567f;  */

void FUN_10b91539c(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x18;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b915680();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b91535c(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b9156a4(param_1[1] + lVar4 * 0x18,lVar5);
    }
    lVar5 = lVar5 + 0x18;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b915680; end: 10b9156a3;  */

void FUN_10b915680(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b9156a4; end: 10b9156c3;  */

undefined8 FUN_10b9156a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10b915234(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b9156c4; end: 10b9156eb;  */

long FUN_10b9156c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b9156ec; end: 10b915e8f;  */

void FUN_10b9156ec(undefined8 *param_1,undefined8 ******param_2,long param_3)

{
  undefined8 ***pppuVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ***pppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  undefined8 ******ppppppuVar22;
  long *plVar23;
  undefined8 *****pppppuVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *****pppppuStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *puStack_98;
  byte bStack_89;
  undefined8 *****pppppuStack_80;
  undefined8 *puStack_78;
  
  func_0x00010b9abfe4(&lStack_c8,param_2,0);
  if (((ulong)param_2[3][1] & 1) == 0) {
    func_0x00010b916d14();
    goto LAB_10b915874;
  }
  FUN_10b9a2108(auStack_e0,&PTR_DAT_110d75e50);
  if (lStack_c8 == 0) {
    pppppuStack_a0 = (undefined8 *****)&UNK_10f7d0ef0;
    puStack_98 = (undefined8 *)0x0;
  }
  else {
    pppppuStack_a0 = (undefined8 *****)(lStack_c8 + 0x18);
    puStack_98 = (undefined8 *)(ulong)*(uint *)(lStack_c8 + 0xc);
  }
  FUN_10b9a2434(auStack_f8,auStack_e0,&pppppuStack_a0);
  puVar6 = auStack_f8;
  FUN_10b9a2734(puVar6,auStack_e0);
  if (((ulong)puVar6 & 1) == 0) {
    pppppuVar24 = param_2[3];
    plStack_120 = &lStack_c8;
    puStack_118 = &UNK_1003ab990;
    func_0x000107c2793c(&UNK_10f7cd6cf);
    func_0x000107c3173c(&pppppuStack_a0);
    puVar12 = puStack_98;
    ppppppuVar7 = (undefined8 ******)pppppuStack_a0;
    if (-1 < (char)bStack_89) {
      puVar12 = (undefined8 *)(ulong)bStack_89;
      ppppppuVar7 = &pppppuStack_a0;
    }
    FUN_10b99ffd4(pppppuVar24,ppppppuVar7,puVar12);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_a0);
LAB_10b915850:
    *(undefined2 *)(param_1 + 1) = 1;
  }
  else {
    ppppppuVar7 = param_2;
    func_0x00010b9abfc0(param_2,1);
    if (((ulong)param_2[3][1] & 1) != 0) {
      ppppppuVar22 = param_2;
      func_0x00010b9abfc0(param_2,2);
      if (((ulong)param_2[3][1] & 1) == 0) goto LAB_10b915850;
      ppppppuVar8 = param_2;
      FUN_10b9abfa4(param_2,3);
      FUN_10b9a9588();
      ppppppuVar9 = ppppppuVar8;
      func_0x00010b916f1c();
      bVar2 = *(byte *)(ppppppuVar9 + 1);
      if (bVar2 < 2) {
        uVar28 = 0;
        uVar26 = 0;
      }
      else {
        func_0x00010b916f1c();
        FUN_10b9a9608();
        uVar28 = (ulong)ppppppuVar9 & 0xffffffff;
        uVar26 = 0x100;
      }
      lStack_100 = 0;
      if ((int)ppppppuVar22 == 0) {
LAB_10b915958:
        func_0x00010b916f10();
        if (*(byte *)(ppppppuVar9 + 1) < 2) {
          pppppuVar24 = (undefined8 *****)0x0;
        }
        else {
          func_0x00010b916f10();
          FUN_10b9a9518();
          pppppuVar24 = (undefined8 *****)(long)(int)ppppppuVar9;
        }
        lVar27 = *(long *)(param_3 + 0x10);
        func_0x000107c31084();
        FUN_10b9a2460(&plStack_120,auStack_f8);
        func_0x000107c31080(&pppuStack_108,ppppppuVar9,&plStack_120);
        if (bVar2 < 2) {
          func_0x000107c31084();
          puStack_78 = (undefined8 *)&UNK_1003ab990;
          pppppuStack_80 = (undefined8 *****)&pppuStack_108;
          func_0x000107c2793c(&UNK_10f7cd6b6);
          func_0x000107c3173c(&pppppuStack_a0);
          func_0x000107c31080(&ppuStack_a8,ppppppuVar9,&pppppuStack_a0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_a0);
        }
        else {
          if (pppuStack_108 != (undefined8 ***)0x0) {
            pppuVar10 = pppuStack_108 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
              if (bVar5) {
                *(int *)pppuVar10 = *(int *)pppuVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_a8 = pppuStack_108;
        }
        __ZNSt3__15mutex4lockEv(lVar27 + 0x78);
        pppuVar10 = (undefined8 ***)ppuStack_a8;
        FUN_10b915210();
        lVar15 = 0;
        plVar23 = (long *)(lVar27 + 0x48);
        uVar17 = (ulong)pppuVar10 >> 7;
        uVar16 = *(ulong *)(lVar27 + 0x60);
        while( true ) {
          uVar17 = uVar17 & uVar16;
          uVar18 = *(ulong *)(*plVar23 + uVar17);
          uVar19 = uVar18 ^ ((ulong)pppuVar10 & 0x7f) * 0x101010101010101;
          for (uVar19 = uVar19 + 0xfefefefefefefeff & (uVar19 ^ 0xffffffffffffffff) &
                        0x8080808080808080; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
            uVar11 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = uVar17 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar16;
            puVar21 = (ulong *)(*(long *)(lVar27 + 0x50) + uVar11 * 0x18);
            if ((undefined8 ***)*puVar21 == (undefined8 ***)ppuStack_a8) {
              if (uVar16 == uVar11) goto LAB_10b915b84;
              ppppppuVar22 = (undefined8 ******)puVar21[1];
              puVar12 = (undefined8 *)puVar21[2];
              pppppuStack_a0 = ppppppuVar22;
              puStack_98 = puVar12;
              if (puVar12 != (undefined8 *)0x0) goto LAB_10b915ae4;
              pppppuStack_80 = (undefined8 ******)0x0;
              puStack_78 = (undefined8 *)0x0;
              goto LAB_10b915b78;
            }
          }
          if ((uVar18 & ~uVar18 << 6 & 0x8080808080808080) != 0) break;
          lVar15 = lVar15 + 8;
          uVar17 = lVar15 + uVar17;
        }
        goto LAB_10b915b84;
      }
      ppppppuVar22 = param_2;
      FUN_10b9abfa4(param_2,5);
      if (*(byte *)(ppppppuVar22 + 1) < 2) {
        func_0x000105273668(&pppppuStack_a0,*(long *)(param_3 + 0x10) + 0x28);
        func_0x000105278568(&lStack_100,&pppppuStack_a0);
        ppppppuVar9 = (undefined8 ******)pppppuStack_a0;
        func_0x000105275bf4();
LAB_10b915944:
        if (lStack_100 == 0) {
          pppppuVar24 = param_2[3];
          puVar14 = &UNK_10f7cd6e5;
        }
        else {
          if (*(long *)(*(long *)(param_3 + 0x10) + 0x30) != 0) goto LAB_10b915958;
          pppppuVar24 = param_2[3];
          puVar14 = &UNK_10f7cd71d;
        }
        FUN_10b99f5f8(&pppppuStack_a0,puVar14);
        FUN_10b99ff08(pppppuVar24,&pppppuStack_a0);
        func_0x000104bda960(pppppuStack_a0);
        func_0x00010b916d14();
      }
      else {
        func_0x00010b9abfe4(&pppppuStack_a0,param_2,5);
        bVar3 = *(byte *)(param_2[3] + 1);
        if ((bVar3 & 1) == 0) {
          func_0x00010b916d14();
        }
        else {
          func_0x0001052784a0(&plStack_120,&pppppuStack_a0);
          func_0x000105278568(&lStack_100,&plStack_120);
          func_0x000105275bf4(plStack_120);
        }
        ppppppuVar9 = (undefined8 ******)pppppuStack_a0;
        func_0x000107c278f8();
        if (bVar3 != 0) goto LAB_10b915944;
      }
      goto LAB_10b915e84;
    }
    *(undefined2 *)(param_1 + 1) = 1;
  }
  *param_1 = 0;
  goto LAB_10b915864;
LAB_10b915ae4:
  do {
    func_0x00010b916e2c();
  } while (extraout_w10 != 0);
  pppppuStack_80 = (undefined8 ******)0x0;
  __ZNSt3__119__shared_weak_count4lockEv();
  puStack_78 = puVar12;
  if ((puVar12 == (undefined8 *)0x0) ||
     (pppppuStack_80 = ppppppuVar22, ppppppuVar22 == (undefined8 ******)0x0)) {
LAB_10b915b78:
    FUN_10b914394(&pppppuStack_80);
    func_0x00010b916f28();
LAB_10b915b84:
    if ((uVar26 | uVar28) == 0x101) {
      puStack_78 = *(undefined8 **)(lVar27 + 0x38);
      pppppuStack_80 = *(undefined8 ******)(lVar27 + 0x30);
      if (*(long *)(lVar27 + 0x38) != 0) {
        do {
          func_0x00010b916e2c();
        } while (extraout_w10_00 != 0);
      }
    }
    else {
      pppppuStack_80 = (undefined8 *****)0x0;
      puStack_78 = (undefined8 *)0x0;
    }
    uVar25 = *(undefined8 *)(lVar27 + 0x40);
    puVar12 = (undefined8 *)0xe8;
    __Znwm();
    plVar13 = puVar12 + 1;
    *plVar13 = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110d75e10;
    ppppppuVar22 = (undefined8 ******)(puVar12 + 3);
    FUN_10b913380(ppppppuVar22,&ppuStack_a8,lVar27 + 0x18,&lStack_100,&pppppuStack_80,lVar27 + 0x20,
                  uVar25,ppppppuVar8,(char)ppppppuVar7);
    if ((puVar12[5] == 0) || (*(long *)(puVar12[5] + 8) == -1)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      pppppuStack_a0 = ppppppuVar22;
      puStack_98 = puVar12;
      func_0x000107c278e4(puVar12 + 4,&pppppuStack_a0);
      func_0x000107c284e8(&pppppuStack_a0);
    }
    FUN_10b9137ac(&pppppuStack_a0,ppppppuVar22);
    puStack_128 = puStack_98;
    pppppuStack_130 = pppppuStack_a0;
    puStack_b8 = puStack_98;
    pppppuStack_c0 = pppppuStack_a0;
    if (puStack_98 != (undefined8 *)0x0) {
      do {
        func_0x00010b916e2c();
      } while (extraout_w10_01 != 0);
    }
    FUN_10b914394(&pppppuStack_a0);
    pppuVar10 = (undefined8 ***)ppuStack_a8;
    FUN_10b915210();
    lVar15 = 0;
    uVar26 = (ulong)pppuVar10 >> 7;
    while( true ) {
      uVar26 = uVar26 & *(ulong *)(lVar27 + 0x60);
      uVar17 = *(ulong *)(*(long *)(lVar27 + 0x48) + uVar26);
      uVar28 = uVar17 ^ ((ulong)pppuVar10 & 0x7f) * 0x101010101010101;
      for (uVar28 = uVar28 + 0xfefefefefefefeff & (uVar28 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar28 != 0; uVar28 = uVar28 - 1 & uVar28) {
        uVar16 = (uVar28 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar28 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        lVar20 = *(long *)(lVar27 + 0x50);
        plVar13 = (long *)(uVar26 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                          *(ulong *)(lVar27 + 0x60));
        if (*(undefined8 ****)(lVar20 + (long)plVar13 * 0x18) == (undefined8 ***)ppuStack_a8)
        goto LAB_10b915d78;
      }
      if ((uVar17 & ~uVar17 << 6 & 0x8080808080808080) != 0) break;
      lVar15 = lVar15 + 8;
      uVar26 = lVar15 + uVar26;
    }
    FUN_10b915294(plVar23,pppuVar10);
    puVar21 = (ulong *)(*(long *)(lVar27 + 0x50) + (long)plVar23 * 0x18);
    if ((undefined8 ***)ppuStack_a8 != (undefined8 ***)0x0) {
      pppuVar1 = (undefined8 ***)(ppuStack_a8 + 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar5) {
          *(int *)pppuVar1 = *(int *)pppuVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puStack_128 = puStack_b8;
      pppppuStack_130 = pppppuStack_c0;
    }
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = (ulong)ppuStack_a8;
    *(byte *)(*(long *)(lVar27 + 0x48) + (long)plVar23) = (byte)pppuVar10 & 0x7f;
    func_0x00010b916ec0();
    lVar20 = *(long *)(lVar27 + 0x50);
    plVar13 = plVar23;
LAB_10b915d78:
    lVar20 = lVar20 + (long)plVar13 * 0x18;
    pppppuStack_c0 = (undefined8 *****)0x0;
    puStack_b8 = (undefined8 *)0x0;
    puStack_98 = *(undefined8 **)(lVar20 + 0x10);
    pppppuStack_a0 = *(undefined8 ******)(lVar20 + 8);
    *(undefined8 **)(lVar20 + 0x10) = puStack_128;
    *(undefined8 ******)(lVar20 + 8) = pppppuStack_130;
    func_0x00010b916f28();
    FUN_10b915234(&pppppuStack_c0);
    FUN_10b914128(ppppppuVar22);
    func_0x0001080d8598(&pppppuStack_80);
  }
  else {
    ppppppuVar22[5] = ppppppuVar8;
    *(char *)(ppppppuVar22 + 0x16) = (char)ppppppuVar7;
    FUN_10b913878(ppppppuVar22,&lStack_100);
    ppppppuVar22 = (undefined8 ******)pppppuStack_80;
    pppppuStack_80 = (undefined8 *****)0x0;
    puStack_78 = (undefined8 *)0x0;
    FUN_10b914394(&pppppuStack_80);
    func_0x00010b916f28();
  }
  __ZNSt3__15mutex6unlockEv(lVar27 + 0x78);
  func_0x000107c278f8(ppuStack_a8);
  func_0x000107c278f8(pppuStack_108);
  func_0x00010b916ea0();
  if (pppppuVar24 != (undefined8 *****)0x0) {
    ppppppuVar22[3] = pppppuVar24;
  }
  func_0x000104bd4df4(&pppppuStack_a0);
  func_0x00010b916d24(&DAT_10f368b64);
  func_0x00010b916d24("fetch");
  func_0x00010b916d24(&DAT_10f2d3cea);
  func_0x00010b916d24(&DAT_10f685720);
  func_0x00010b916d24(&DAT_10f2ef50f);
  func_0x00010b916d24(&UNK_10f7cd757);
  func_0x00010b916d24(&UNK_10f7cd760);
  FUN_10b9a8f54(param_1,&pppppuStack_a0);
  func_0x000104bd4e64(pppppuStack_a0);
  FUN_10b915204(ppppppuVar22);
LAB_10b915e84:
  func_0x000105275bf4(lStack_100);
LAB_10b915864:
  func_0x0001080c9d44(auStack_f8);
  func_0x0001080c9d44(auStack_e0);
LAB_10b915874:
  func_0x000107c278f8(lStack_c8);
  return;
}



/* Entry: 10b915e90; end: 10b915fe7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b915e90(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  long alStack_80 [2];
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  lVar4 = param_3;
  func_0x00010b916d04();
  uStack_48 = extraout_x8;
  if ((lVar4 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x00010b916e2c();
    } while (extraout_w10 != 0);
  }
  lVar4 = 0x40;
  __Znwm();
  alStack_80[1] = 0x10b9160d8;
  ppuStack_70 = &PTR_FUN_110d75e60;
  plVar5 = (long *)0x10;
  __Znwm();
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x00010b916e2c();
    } while (extraout_w10_00 != 0);
  }
  *plVar5 = param_3;
  plVar5[1] = param_4;
  plStack_68 = plVar5;
  FUN_10b9ac22c(lVar4,alStack_80 + 1);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar5 = (long *)(lVar4 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  alStack_80[0] = lVar4;
  FUN_10b9a8ef8(alStack_80 + 1,alStack_80);
  lVar7 = *param_2;
  func_0x000107c31088(&uStack_88,param_1);
  FUN_10b8b510c(lVar7 + 0x10,&uStack_88);
  plVar6 = alStack_80 + 1;
  FUN_10b9a9020();
  func_0x000107c278f8(uStack_88);
  FUN_10b9a8d98(alStack_80 + 1);
  func_0x000104bda3ac(lVar4);
  do {
    uVar3 = *plVar5 + -1 == 0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)uVar3) {
    func_0x00010b916e60();
  }
  FUN_10b915204();
  func_0x00010b916cd4(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    *extraout_x8_00 = param_3;
    extraout_x8_00[1] = (long)plVar6;
    lVar4 = 0;
    if (param_3 != 0) {
      lVar4 = param_3 + 8;
    }
    if ((lVar4 != 0) && ((*(long *)(lVar4 + 8) == 0 || (*(long *)(*(long *)(lVar4 + 8) + 8) == -1)))
       ) {
      pcStack_98 = FUN_10b915fe8;
      lStack_a8 = extraout_x8_00[1];
      if (lStack_a8 != 0) {
        plVar5 = (long *)(lStack_a8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_b0 = param_3;
      puStack_a0 = &stack0xfffffffffffffff0;
      func_0x000107c278e4(lVar4,&lStack_b0);
      func_0x000107c284e8(&lStack_b0);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b915fe8; end: 10b916003;  */

void FUN_10b915fe8(long *param_1,long param_2,long param_3)

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
    lVar2 = param_2 + 8;
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
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b916004; end: 10b91602b;  */

long FUN_10b916004(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b91602c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b91602c; end: 10b9160c7;  */

void FUN_10b91602c(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bfe188();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    uStack_18 = 0x10b91605c;
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_30 = param_3;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(param_2,&uStack_30);
    func_0x000107c284e8(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10b9160c8; end: 10b9160eb;  */

void FUN_10b9160c8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9160ec; end: 10b91611f;  */

void FUN_10b9160ec(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b915204(*puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b916120; end: 10b916137;  */

void FUN_10b916120(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b916138; end: 10b916197;  */

void FUN_10b916138(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d75e60;
  plVar4 = (long *)0x10;
  __Znwm();
  lVar5 = *plVar7;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = plVar7[1];
  *plVar4 = lVar5;
  plVar4[1] = lVar6;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10b916198; end: 10b9163af;  */

code ***** FUN_10b916198(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  code ****ppppcVar4;
  code *****pppppcVar5;
  code *****pppppcVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  int extraout_w11;
  long lVar8;
  long *unaff_x21;
  undefined8 uStack_c8;
  code ***pppcStack_a0;
  code **ppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code ****ppppcStack_80;
  code ***pppcStack_78;
  code ***pppcStack_70;
  ulong uStack_68;
  undefined8 uStack_48;
  
  func_0x00010b916ce8();
  pppppcVar6 = (code *****)0x0;
  uStack_48 = extraout_x8;
  func_0x00010b9abfe4(&ppppcStack_80,param_2);
  func_0x00010b916de8();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b916d14();
    goto LAB_10b916380;
  }
  ppcStack_98 = (code **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar3 = unaff_x21;
  FUN_10b9abfa4();
  if ((*(byte *)(plVar3 + 1) & 0xfe) == 2) {
    FUN_10b9a9358(&pppcStack_a0);
    if ((code ****)pppcStack_a0 == (code ****)0x0) {
LAB_10b916284:
      uStack_68 = 0;
      pppcStack_70 = (code ***)&UNK_10f7d0ef0;
    }
    else {
      ppppcVar4 = (code ****)(pppcStack_a0 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppcVar4,0x10);
        if (bVar2) {
          *(int *)ppppcVar4 = *(int *)ppppcVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((code ****)pppcStack_a0 == (code ****)0x0) goto LAB_10b916284;
      pppcStack_70 = pppcStack_a0 + 3;
      uStack_68 = (ulong)*(uint *)((long)pppcStack_a0 + 0xc);
    }
    pppcStack_78 = pppcStack_a0;
    func_0x000104c625c4(&ppcStack_98,&pppcStack_78);
    ppppcVar4 = (code ****)pppcStack_78;
    if ((code ****)pppcStack_78 != (code ****)0x0) {
      func_0x00010b916ef4();
    }
    func_0x00010b916f00();
LAB_10b9162b0:
    func_0x00010b916f38();
    if (((ulong)ppppcVar4[1] & 0xfc) == 4) {
      FUN_10b9a9518();
    }
    FUN_10b9abfa4();
    in_ZR = (*(byte *)(unaff_x21 + 1) & 0xfc) == 4;
    if ((bool)in_ZR) {
      FUN_10b9a9588();
    }
    pppppcVar6 = (code *****)0x4;
    func_0x00010b9ac080(&pppcStack_a0);
    func_0x00010b916d84();
    if ((bool)in_ZR) {
      uVar7 = 0;
      if ((code ****)pppcStack_a0 != (code ****)0x0) {
        do {
          func_0x00010b916ed8();
          uVar7 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      pppcStack_78 = (code ***)FUN_10b9163b0;
      pppcStack_70 = (code ***)&PTR_FUN_110d75e80;
      pppppcVar6 = &ppppcStack_80;
      uStack_68 = uVar7;
      FUN_10b913630();
      func_0x00010b916d30(pppcStack_70);
    }
    func_0x00010b916d14();
    func_0x00010b916f08();
  }
  else {
    in_ZR = *(byte *)(plVar3 + 1) == 10;
    if ((bool)in_ZR) {
      ppppcVar4 = (code ****)&ppcStack_98;
      func_0x000105c3d468(ppppcVar4,*plVar3 + 0x18);
      goto LAB_10b9162b0;
    }
    lVar8 = unaff_x21[3];
    FUN_10b99f5f8(&pppcStack_78,&UNK_10f7cd780);
    pppppcVar6 = (code *****)&pppcStack_78;
    FUN_10b99ff08(lVar8);
    func_0x000104bda960(pppcStack_78);
    func_0x00010b916d14();
  }
  if (ppcStack_98 != (code **)0x0) {
    func_0x00010b916ef4();
  }
LAB_10b916380:
  func_0x000107c278f8(ppppcStack_80);
  func_0x00010b916cd4(uStack_48);
  if ((bool)in_ZR) {
    return (code *****)ppppcStack_80;
  }
  ___stack_chk_fail();
  func_0x00010b916d04();
  func_0x00010b916d94();
  pppppcVar5 = (code *****)ppppcStack_80;
  if (!(bool)in_ZR) {
    func_0x00010b916e20();
    func_0x00010b916dd0();
    func_0x00010b916e90();
    func_0x00010b916e08();
    func_0x00010b916e58();
    func_0x00010b916ea0();
    pppppcVar5 = (code *****)ppppcStack_80;
  }
  func_0x00010b916d3c();
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x00010b916cd4(uStack_c8);
  if ((bool)in_ZR) {
    return pppppcVar5;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(pppppcVar5 + 1);
  func_0x000104bda3ac();
  return pppppcVar6;
}



/* Entry: 10b9163b0; end: 10b91640f;  */

long FUN_10b9163b0(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x00010b916d04();
  func_0x00010b916d94();
  if (!(bool)in_ZR) {
    func_0x00010b916e20();
    func_0x00010b916dd0();
    func_0x00010b916e90();
    func_0x00010b916e08();
    func_0x00010b916e58();
    func_0x00010b916ea0();
  }
  func_0x00010b916d3c();
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x00010b916cd4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return param_2;
}



/* Entry: 10b916410; end: 10b91644f;  */

void FUN_10b916410(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b916450; end: 10b916683;  */

long * FUN_10b916450(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  char cStack_b9;
  undefined8 uStack_b8;
  long lStack_78;
  undefined8 uStack_38;
  
  func_0x00010b916ce8();
  func_0x00010b916d64();
  func_0x00010b916de8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b916d14();
  }
  else {
    func_0x00010b916d50();
    func_0x00010b916d84();
    if ((bool)in_ZR) {
      func_0x00010b916f38();
      FUN_10b9a9608();
      if (lStack_78 != 0) {
        do {
          func_0x00010b916ed8();
        } while (extraout_w11 != 0);
      }
      func_0x00010b916eb0();
      FUN_10b913c10();
      func_0x00010b916d30(&PTR_FUN_110d75ea0);
    }
    func_0x00010b916dc0();
  }
  func_0x00010b916f30();
  func_0x00010b916cd4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b916d04();
    lStack_f0 = *param_1;
    lStack_e0 = param_1[2];
    lStack_e8 = param_1[1];
    lStack_d8 = param_1[3];
    *param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_b8 = extraout_x8_00;
    if (lStack_f0 == 1) {
      uVar1 = (char)param_2[3] == '\x01';
      if ((bool)uVar1) {
        func_0x000107c31084();
        func_0x000107c3107c(auStack_120);
        FUN_10b9a8e18(&uStack_d0,auStack_120);
        func_0x00010b916e14();
        func_0x00010b916e78();
        func_0x00010b916f00();
      }
      else {
        uStack_d0 = CONCAT44(uStack_d0._4_4_,9);
        func_0x000104bd909c(auStack_120,&uStack_d0,&lStack_e8);
        func_0x00010b9a8f90(&uStack_d0,auStack_120);
        func_0x00010b916e14();
        func_0x00010b916e78();
        func_0x000104bdb3b0(auStack_120[0]);
      }
      uStack_c8 = 1;
      uStack_d0 = 0;
      FUN_10b9a9020(&uStack_100,&uStack_d0);
      func_0x00010b916e78();
    }
    else {
      uStack_c8 = 1;
      uStack_d0 = 0;
      func_0x00010b916e14();
      func_0x00010b916e78();
      FUN_10b99f8ac(&uStack_d0,&lStack_e8);
      uVar1 = cStack_b9 == '\0';
      func_0x00010b916e90();
      FUN_10b9a9020(&uStack_100,auStack_120);
      func_0x00010b916e58();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    }
    func_0x00010b9ac0a8(&uStack_d0,param_2[2],&uStack_110,2);
    func_0x000104bda914(&uStack_d0);
    func_0x000104c6289c(&uStack_110);
    plVar2 = &lStack_f0;
    func_0x0001080c5c8c(plVar2);
    func_0x00010b916cd4(uStack_b8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001003adc0c(plVar2 + 1);
      func_0x000104bda3ac();
      return param_2;
    }
    return plVar2;
  }
  return param_1;
}



/* Entry: 10b916684; end: 10b9166cf;  */

void FUN_10b916684(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b9166d0; end: 10b916767;  */

void FUN_10b9166d0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  undefined1 auStack_c0 [8];
  undefined2 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  func_0x00010b916ce8();
  func_0x00010b916d64();
  func_0x00010b916de8();
  auStack_c0[0] = (undefined1)param_1;
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b916d14();
  }
  else {
    func_0x00010b916d50();
    func_0x00010b916d84();
    auStack_c0[0] = (undefined1)param_1;
    if ((bool)in_ZR) {
      uStack_58 = 0;
      if (lStack_78 != 0) {
        do {
          func_0x00010b916ed8();
          auStack_c0[0] = (undefined1)param_1;
          uStack_58 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      pcStack_68 = FUN_10b916768;
      ppuStack_60 = &PTR_FUN_110d75ec0;
      func_0x00010b916eb0();
      FUN_10b913cc8();
      func_0x00010b916d30(ppuStack_60);
    }
    func_0x00010b916dc0();
  }
  func_0x00010b916f30();
  func_0x00010b916cd4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_88 = FUN_10b916768;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010b916d04();
    uStack_b8 = 7;
    uStack_98 = extraout_x8_01;
    func_0x000105275910(auStack_b0,*(undefined8 *)(param_2 + 0x10),auStack_c0,1);
    puVar1 = auStack_b0;
    func_0x000104bda914(puVar1);
    func_0x00010b916e58();
    func_0x00010b916cd4(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001003adc0c(puVar1 + 8);
      func_0x000104bda3ac();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b916768; end: 10b9167c7;  */

void FUN_10b916768(undefined1 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_40 [8];
  undefined2 uStack_38;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  auStack_40[0] = param_1;
  func_0x00010b916d04();
  uStack_38 = 7;
  uStack_18 = extraout_x8;
  func_0x000105275910(auStack_30,*(undefined8 *)(param_2 + 0x10),auStack_40,1);
  puVar1 = auStack_30;
  func_0x000104bda914(puVar1);
  func_0x00010b916e58();
  func_0x00010b916cd4(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(puVar1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b9167c8; end: 10b916807;  */

void FUN_10b9167c8(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b916808; end: 10b91689f;  */

long FUN_10b916808(long param_1,long param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  int extraout_w11;
  undefined8 uStack_a8;
  long lStack_78;
  undefined8 uStack_38;
  
  func_0x00010b916ce8();
  func_0x00010b916d64();
  func_0x00010b916de8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b916d14();
  }
  else {
    func_0x00010b916d50();
    func_0x00010b916d84();
    if ((bool)in_ZR) {
      if (lStack_78 != 0) {
        do {
          func_0x00010b916ed8();
        } while (extraout_w11 != 0);
      }
      func_0x00010b916eb0();
      FUN_10b913d80();
      func_0x00010b916d30(&PTR_FUN_110d75ee0);
    }
    func_0x00010b916dc0();
  }
  func_0x00010b916f30();
  func_0x00010b916cd4(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b916d04();
  func_0x00010b916d94();
  if (!(bool)in_ZR) {
    func_0x00010b916e20();
    func_0x00010b916dd0();
    func_0x00010b916e90();
    func_0x00010b916e08();
    func_0x00010b916e58();
    func_0x00010b916ea0();
  }
  func_0x00010b916d3c();
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x00010b916cd4(uStack_a8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return param_2;
}



/* Entry: 10b9168a0; end: 10b9168ff;  */

long FUN_10b9168a0(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x00010b916d04();
  func_0x00010b916d94();
  if (!(bool)in_ZR) {
    func_0x00010b916e20();
    func_0x00010b916dd0();
    func_0x00010b916e90();
    func_0x00010b916e08();
    func_0x00010b916e58();
    func_0x00010b916ea0();
  }
  func_0x00010b916d3c();
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x00010b916cd4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return param_2;
}



/* Entry: 10b916900; end: 10b91693f;  */

void FUN_10b916900(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b916940; end: 10b9169bb;  */

long FUN_10b916940(long param_1,long param_2)

{
  undefined1 in_ZR;
  int extraout_w11;
  undefined8 uStack_98;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010b916ce8();
  func_0x00010b916e44();
  func_0x00010b916d84();
  if ((bool)in_ZR) {
    if (lStack_70 != 0) {
      do {
        func_0x00010b916ed8();
      } while (extraout_w11 != 0);
    }
    func_0x00010b916f58();
    FUN_10b913e38();
    func_0x00010b916d30(uStack_60);
  }
  func_0x00010b916d14();
  func_0x00010b916f08();
  func_0x00010b916cd4(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b916d04();
  func_0x00010b916d94();
  if (!(bool)in_ZR) {
    func_0x00010b916e20();
    func_0x00010b916dd0();
    func_0x00010b916e90();
    func_0x00010b916e08();
    func_0x00010b916e58();
    func_0x00010b916ea0();
  }
  func_0x00010b916d3c();
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x00010b916cd4(uStack_98);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return param_2;
}



/* Entry: 10b9169bc; end: 10b916a1b;  */

long FUN_10b9169bc(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x00010b916d04();
  func_0x00010b916d94();
  if (!(bool)in_ZR) {
    func_0x00010b916e20();
    func_0x00010b916dd0();
    func_0x00010b916e90();
    func_0x00010b916e08();
    func_0x00010b916e58();
    func_0x00010b916ea0();
  }
  func_0x00010b916d3c();
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x00010b916cd4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return param_2;
}



/* Entry: 10b916a1c; end: 10b916a5b;  */

void FUN_10b916a1c(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b916a5c; end: 10b916ad7;  */

long * FUN_10b916a5c(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_ec;
  long *plStack_e8;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010b916ce8();
  func_0x00010b916e44();
  func_0x00010b916d84();
  if ((bool)in_ZR) {
    if (lStack_70 != 0) {
      do {
        func_0x00010b916ed8();
      } while (extraout_w11 != 0);
    }
    func_0x00010b916f58();
    FUN_10b913b80();
    func_0x00010b916d30(uStack_60);
  }
  func_0x00010b916d14();
  func_0x00010b916f08();
  func_0x00010b916cd4(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar3 = param_1;
  func_0x00010b916d04();
  uStack_b8 = extraout_x8;
  func_0x00010b9abe10(&plStack_e8,(plVar3[1] - *plVar3) / 0x38 << 1);
  lVar1 = param_1[1];
  lVar5 = 0x28;
  for (lVar4 = *param_1; plVar3 = plStack_e8, uVar2 = lVar4 == lVar1, !(bool)uVar2;
      lVar4 = lVar4 + 0x38) {
    FUN_10b9a8e18(auStack_d0,lVar4);
    FUN_10b9a9020((long)plVar3 + lVar5 + -0x10,auStack_d0);
    FUN_10b9a8d98(auStack_d0);
    uStack_ec = 9;
    func_0x000104c627f0(auStack_e0,&uStack_ec,lVar4 + 0x20);
    func_0x00010b9a8f90(auStack_d0,auStack_e0);
    FUN_10b9a9020((long)plVar3 + lVar5,auStack_d0);
    FUN_10b9a8d98(auStack_d0);
    func_0x000104bdb3b0(auStack_e0[0]);
    lVar5 = lVar5 + 0x20;
  }
  plVar3 = *(long **)(param_2 + 0x10);
  func_0x00010b9a8f84(auStack_e0,&plStack_e8);
  func_0x000105275910(auStack_d0,plVar3,auStack_e0,1);
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x000104bddf60(plStack_e8);
  func_0x00010b916cd4(uStack_b8);
  if ((bool)uVar2) {
    return plStack_e8;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(plStack_e8 + 1);
  func_0x000104bda3ac();
  return plVar3;
}



/* Entry: 10b916ad8; end: 10b916bfb;  */

long FUN_10b916ad8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  long lVar6;
  undefined4 uStack_7c;
  long lStack_78;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  plVar4 = param_1;
  func_0x00010b916d04();
  uStack_48 = extraout_x8;
  func_0x00010b9abe10(&lStack_78,(plVar4[1] - *plVar4) / 0x38 << 1);
  lVar1 = param_1[1];
  lVar6 = 0x28;
  for (lVar5 = *param_1; lVar2 = lStack_78, uVar3 = lVar5 == lVar1, !(bool)uVar3;
      lVar5 = lVar5 + 0x38) {
    FUN_10b9a8e18(auStack_60,lVar5);
    FUN_10b9a9020(lVar2 + lVar6 + -0x10,auStack_60);
    FUN_10b9a8d98(auStack_60);
    uStack_7c = 9;
    func_0x000104c627f0(auStack_70,&uStack_7c,lVar5 + 0x20);
    func_0x00010b9a8f90(auStack_60,auStack_70);
    FUN_10b9a9020(lVar2 + lVar6,auStack_60);
    FUN_10b9a8d98(auStack_60);
    func_0x000104bdb3b0(auStack_70[0]);
    lVar6 = lVar6 + 0x20;
  }
  lVar6 = *(long *)(param_2 + 0x10);
  func_0x00010b9a8f84(auStack_70,&lStack_78);
  func_0x000105275910(auStack_60,lVar6,auStack_70,1);
  func_0x00010b916ea8();
  func_0x00010b916e70();
  func_0x000104bddf60(lStack_78);
  func_0x00010b916cd4(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001003adc0c(lStack_78 + 8);
    func_0x000104bda3ac();
    return lVar6;
  }
  return lStack_78;
}



/* Entry: 10b916bfc; end: 10b916c3b;  */

void FUN_10b916bfc(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b916c3c; end: 10b916c7b;  */

void FUN_10b916c3c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_10b9abfa4(param_3,0);
  iVar1 = (int)param_3;
  FUN_10b9a9518();
  *(long *)(param_2 + 0x18) = (long)iVar1;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 10b916c7c; end: 10b916f6b;  */

long FUN_10b916c7c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 10b916f6c; end: 10b91c98b;  */

void FUN_10b916f6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10b9611c0(param_1,param_3,param_4);
  *param_1 = &PTR_DAT_110d75f70;
  param_1[0xc] = param_2;
  return;
}



/* Entry: 10b91c98c; end: 10b91c9cb;  */

void FUN_10b91c98c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110d76210;
  param_1[1] = 1;
  param_1[2] = param_2;
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  param_1[4] = param_4;
  return;
}



/* Entry: 10b91c9cc; end: 10b91c9fb;  */

undefined8 * FUN_10b91c9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76210;
  func_0x000104bd5214(param_1 + 3);
  return param_1;
}



/* Entry: 10b91c9fc; end: 10b91c9ff;  */

undefined8 * FUN_10b91c9fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76210;
  func_0x000104bd5214(param_1 + 3);
  return param_1;
}



/* Entry: 10b91ca00; end: 10b91ca13;  */

void FUN_10b91ca00(void)

{
  FUN_10b91c9cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b91ca14; end: 10b91ca1f;  */

void FUN_10b91ca14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = &UNK_10f7cda72;
  puVar1 = puVar2;
  func_0x0001003a8364();
  puStack_40 = &UNK_10f7cda72;
  func_0x000107c613d0();
  puStack_38 = puVar2;
  func_0x0001003a8458(param_1,puVar1,&puStack_40);
  return;
}



/* Entry: 10b91ca20; end: 10b91ce43;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10b91ca20(undefined8 *param_1,undefined8 param_2,long *param_3,undefined *param_4,long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auStack_218 [24];
  long *plStack_200;
  ulong auStack_1f8 [2];
  long lStack_1e8;
  undefined *apuStack_1e0 [2];
  long *aplStack_1d0 [3];
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_3 + 0x68))(&uStack_90,param_3,param_5);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    func_0x0001080e0180(param_1);
  }
  else {
    apuStack_1e0[0] = &UNK_10f7cda80;
    apuStack_1e0[1] = (undefined *)0x10b91b2c4;
    aplStack_1d0[0] = (long *)0x0;
    aplStack_1d0[1] = (long *)&UNK_10f7cda8d;
    aplStack_1d0[2] = (long *)0x10b91a79c;
    uStack_1b8 = 0;
    puStack_1b0 = &UNK_10f7cdaab;
    uStack_1a8 = 0x10b91ade8;
    uStack_1a0 = 0;
    puStack_198 = &DAT_10f4be240;
    uStack_190 = 0x10b9194f0;
    uStack_188 = 0;
    puStack_180 = &UNK_10f7cdabf;
    uStack_178 = 0x10b919758;
    uStack_170 = 0;
    puStack_168 = &UNK_10f7cdacd;
    uStack_160 = 0x10b919834;
    uStack_158 = 0;
    puStack_150 = &UNK_10f7cdae0;
    uStack_148 = 0x10b919afc;
    uStack_140 = 0;
    puStack_138 = &UNK_10f7cdaee;
    uStack_130 = 0x10b919b90;
    uStack_128 = 0;
    puStack_120 = &UNK_10f7cdb01;
    uStack_118 = 0x10b919c98;
    uStack_110 = 0;
    puStack_108 = &UNK_10f7cdb19;
    uStack_100 = 0x10b919ec8;
    uStack_f8 = 0;
    puStack_f0 = &UNK_10f7cdb2d;
    uStack_e8 = 0x10b919fb8;
    uStack_e0 = 0;
    puStack_d8 = &UNK_10f7cdb3d;
    uStack_d0 = 0x10b91a2a8;
    uStack_c8 = 0;
    puStack_c0 = &UNK_10f7cdb4e;
    uStack_b8 = 0x10b91a5b8;
    uStack_b0 = 0;
    puStack_a8 = &UNK_10f7cdb5a;
    uStack_a0 = 0x10b91a670;
    uStack_98 = 0;
    puVar6 = (undefined8 *)0x150;
    __Znwm();
    for (lVar9 = 0; puVar2 = (undefined8 *)((long)puVar6 + lVar9), lVar9 != 0x150;
        lVar9 = lVar9 + 0x18) {
      uVar12 = *(undefined8 *)((long)apuStack_1e0 + lVar9);
      puVar2[1] = *(undefined8 *)((long)aplStack_1d0 + lVar9 + -8);
      *puVar2 = uVar12;
      puVar2[2] = *(undefined8 *)((long)aplStack_1d0 + lVar9);
    }
    lVar7 = 0x28;
    __Znwm();
    lVar9 = lVar7;
    func_0x00010b91946c();
    plVar1 = (long *)(lVar9 + 8);
    puVar10 = puVar6;
    do {
      if (puVar2 == puVar10) {
        func_0x0001080e08ac(param_1,&uStack_90);
        goto LAB_10b91cdf0;
      }
      func_0x0001080e3e74(auStack_218,*puVar10);
      lVar9 = puVar10[1];
      lVar3 = puVar10[2];
      func_0x000107c31084();
      func_0x000107c31080(&lStack_1e8);
      apuStack_1e0[1] = (undefined *)0x0;
      aplStack_1d0[0] = (long *)CONCAT71(aplStack_1d0[0]._1_7_,2);
      aplStack_1d0[1] = &lStack_1e8;
      aplStack_1d0[2] = (long *)0x0;
      uStack_1b8 = uStack_1b8 & 0xffffffffffffff00;
      apuStack_1e0[0] = param_4;
      FUN_10b9a3a64(&plStack_200,apuStack_1e0);
      plVar8 = (long *)0x48;
      __Znwm();
      plVar11 = plVar8 + 1;
      *plVar11 = 1;
      *plVar8 = (long)&PTR_DAT_110d762d8;
      plVar8[2] = lVar7;
      plVar8[3] = lVar9;
      plVar8[4] = lVar3;
      func_0x0001080e0b64(plVar8 + 5,&plStack_200);
      *plVar8 = (long)&PTR_FUN_110d76268;
      plVar8[8] = 0;
      FUN_10b9a3d64(auStack_1f8);
      lVar9 = plVar8[8];
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8[8] = lVar7;
      FUN_10b91cefc(lVar9);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_200 = plVar8;
      (**(code **)(*param_3 + 0x70))(apuStack_1e0,param_3,&plStack_200,param_5);
      func_0x0001080e0c4c(plStack_200);
      if (*(char *)(param_5 + 8) == '\x01') {
        if (lStack_1e8 == 0) {
          plStack_200 = (long *)&UNK_10f7d0ef0;
          auStack_1f8[0] = 0;
        }
        else {
          plStack_200 = (long *)(lStack_1e8 + 0x18);
          auStack_1f8[0] = (ulong)*(uint *)(lStack_1e8 + 0xc);
        }
        (**(code **)(*param_3 + 0xf0))(param_3,auStack_88,&plStack_200,apuStack_1e0 + 1,1,param_5);
      }
      func_0x0001080e0bc0(apuStack_1e0);
      do {
        lVar9 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      func_0x000107c278f8(lStack_1e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
      puVar10 = puVar10 + 3;
    } while ((*(byte *)(param_5 + 8) & 1) != 0);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    func_0x0001080e0180();
LAB_10b91cdf0:
    FUN_10b91cefc(lVar7);
    __ZdlPv(puVar6);
  }
  puVar6 = &uStack_90;
  func_0x0001080e0bc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
  ___stack_chk_fail();
  *puVar6 = &PTR_FUN_110d76268;
  FUN_10b91cefc(puVar6[8]);
  *puVar6 = &PTR_DAT_110d762d8;
  FUN_10b9a3d64(puVar6 + 6);
  return puVar6;
}



/* Entry: 10b91ce44; end: 10b91ce47;  */

undefined8 * FUN_10b91ce44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76268;
  FUN_10b91cefc(param_1[8]);
  *param_1 = &PTR_DAT_110d762d8;
  FUN_10b9a3d64(param_1 + 6);
  return param_1;
}



/* Entry: 10b91ce48; end: 10b91ce5b;  */

void FUN_10b91ce48(void)

{
  func_0x00010b91cec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b91ce5c; end: 10b91ce83;  */

long FUN_10b91ce5c(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 10b91ce84; end: 10b91ce97;  */

void FUN_10b91ce84(void)

{
  FUN_10b91ce98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b91ce98; end: 10b91cefb;  */

undefined8 * FUN_10b91ce98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d762d8;
  FUN_10b9a3d64(param_1 + 6);
  return param_1;
}



/* Entry: 10b91cefc; end: 10b91cf3b;  */

void FUN_10b91cefc(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b91cf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b91cf3c; end: 10b91d2bf;  */

void FUN_10b91cf3c(long *param_1,undefined4 *param_2,long param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [136];
  ulong uVar8;
  
  if ((bRam00000001137fd138 & 1) == 0) {
    uVar10 = 0x1137fd138;
    ___cxa_guard_acquire();
    if ((int)uVar10 != 0) {
      func_0x0001096f6280();
      uRam00000001137fd130 = uVar10;
      ___cxa_guard_release(0x1137fd138);
    }
  }
  uVar10 = uRam00000001137fd130;
  *param_1 = 0;
  func_0x000104bd9060(&puStack_100);
  func_0x00010b8d8d80(param_1,&puStack_100);
  func_0x000104bdb368(puStack_100);
  if (param_4 == 0) {
    FUN_10b99d964(*param_1,param_3 << 3);
    ppuVar7 = (undefined1 **)*param_1;
    func_0x00010b99d9f4(ppuVar7,param_2,param_2 + param_3);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (param_5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar8 = uVar10;
        FUN_10b91d518(uVar10,*param_2);
        uVar4 = (undefined4)uVar8;
      }
      ppuVar7 = (undefined1 **)*param_1;
      func_0x00010b99d978(ppuVar7,4);
      *(undefined4 *)ppuVar7 = uVar4;
      param_2 = param_2 + 1;
    }
  }
  else {
    puStack_100 = auStack_e8;
    uStack_f0 = 0x20;
    lStack_f8 = 0;
    puStack_198 = auStack_180;
    uStack_188 = 0x20;
    lStack_190 = 0;
    func_0x00010b91d47c(&puStack_100,param_3);
    func_0x00010b91d47c(&puStack_198,param_3);
    bVar3 = false;
    uStack_19c = 0;
    uVar4 = 0;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar17 = *param_2;
      uVar8 = uVar10;
      FUN_10b91d518(uVar10,uVar17);
      if (bVar3) {
        uStack_1a0 = 0;
        if (((uVar8 & 0x1c00) == 0) ||
           (uVar5 = uVar10, func_0x000109710b70(uVar10,uVar4,uVar17,&uStack_1a0), (int)uVar5 == 0))
        {
          func_0x00010b91e528(&puStack_100);
          func_0x00010b91e538();
          goto LAB_10b91d080;
        }
        func_0x00010b91e528(&puStack_100);
        FUN_10b91d518(uVar10,uStack_1a0);
        func_0x00010b91e528(&puStack_198);
        bVar3 = false;
        uVar17 = uVar4;
      }
      else {
LAB_10b91d080:
        bVar3 = true;
        uStack_19c = (int)uVar8;
      }
      param_2 = param_2 + 1;
      uVar4 = uVar17;
    }
    if (bVar3) {
      uStack_1a0 = uVar4;
      func_0x00010b91d554(&puStack_100,&uStack_1a0);
      func_0x00010b91e538();
    }
    FUN_10b99d964(*param_1,lStack_190 + lStack_f8);
    func_0x00010b99d9f4(*param_1,puStack_100,puStack_100 + lStack_f8 * 4);
    func_0x00010b99d9f4(*param_1,puStack_198,puStack_198 + lStack_190 * 4);
    FUN_10b91d78c(&puStack_198);
    ppuVar7 = &puStack_100;
    FUN_10b91d78c();
  }
  if (param_5 != 0) {
    uVar10 = *(ulong *)(*param_1 + 0x10);
    if (uVar10 != 0) {
      puVar15 = *(uint **)(*param_1 + 0x20);
      puVar16 = (uint *)((long)puVar15 + (uVar10 >> 1));
      puVar1 = (uint *)((long)puVar15 + (uVar10 >> 1 & 0x7ffffffffffffffc));
      FUN_10b9486b4();
      puVar14 = puVar15;
      uVar11 = 0;
      uVar9 = 0;
      while (puVar14 != puVar1) {
        uVar2 = *puVar14;
        uVar18 = *puVar16;
        if ((puVar14 != puVar15) &&
           ((((uVar2 == 0x200d || uVar11 == 0x200d || (uVar2 - 0x300 < 0x70)) ||
             (uVar11 - 0x1f1e6 < 0x1a && uVar2 - 0x1f1e6 < 0x1a)) ||
            ((((uVar9 >> 0x1e & 1) != 0 && (0xfffffffa < uVar2 - 0x1f400)) ||
             ((uVar2 >> 4 == 0xfe0 || (uVar2 - 0xe0100 < 0xf0)))))))) {
          uVar18 = uVar18 | 0x80000000;
          *puVar16 = uVar18;
        }
        ppuVar6 = ppuVar7;
        FUN_10b997fcc(ppuVar7,puVar14,puVar1);
        uVar11 = uVar2;
        if (ppuVar6 == (undefined1 **)0x0) {
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
          uVar9 = uVar18;
        }
        else {
          uVar9 = uVar18 | 0x40000000;
          *puVar16 = uVar9;
          puVar12 = ppuVar6[1];
          puVar13 = (undefined1 *)0x1;
          while( true ) {
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
            if (puVar12 <= puVar13) break;
            uVar9 = *puVar16 | 0xc0000000;
            *puVar16 = uVar9;
            puVar13 = puVar13 + 1;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b91d2c0; end: 10b91d30f;  */

void FUN_10b91d2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_10b99f5f8(&uStack_28,&UNK_10f47b1ad);
  func_0x00010b8e5d68(param_1,param_2,&uStack_28);
  func_0x000104bda960(uStack_28);
  return;
}



/* Entry: 10b91d310; end: 10b91d517;  */

void FUN_10b91d310(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long alStack_b8 [6];
  long alStack_88 [10];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b9a64d4(alStack_88,&UNK_10f7cdb8a);
  if (alStack_88[0] == 0) {
    lVar5 = 0;
  }
  else {
    piVar1 = (int *)(alStack_88[0] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      lVar5 = alStack_88[0];
    } while (cVar3 != '\0');
  }
  alStack_b8[0] = alStack_88[0];
  alStack_b8[2] = 0;
  alStack_b8[1] = 0;
  alStack_b8[4] = 0;
  alStack_b8[3] = 0;
  func_0x000107c278f8(lVar5);
  func_0x00010b91e4bc(&UNK_10f7cdb98);
  func_0x00010b91e35c();
  func_0x00010b91e414();
  func_0x00010b91e4e4();
  func_0x00010b91e4dc();
  func_0x00010b91e4bc(&UNK_10f7cdba8);
  func_0x00010b91e35c();
  func_0x00010b91e414();
  func_0x00010b91e4e4();
  func_0x00010b91e4dc();
  func_0x00010b91e4bc(&UNK_10f642cbe);
  func_0x00010b91e35c();
  func_0x00010b91e414();
  func_0x00010b91e4e4();
  func_0x00010b91e4dc();
  func_0x00010b91e4bc(&UNK_10f7cdbb8);
  func_0x00010b91e35c();
  func_0x00010b91e414();
  func_0x00010b91e4e4();
  func_0x00010b91e4dc();
  FUN_10b8e97dc(alStack_88,alStack_b8);
  FUN_10b8de32c(alStack_b8);
  alStack_b8[0] = 0;
  plVar8 = alStack_b8;
  (**(code **)(*param_3 + 0xb8))(param_1,param_3,plVar8,alStack_88,param_5);
  if (alStack_b8[0] != 0) {
    func_0x00010b91e470();
  }
  plVar6 = alStack_88;
  FUN_10b8de32c();
  func_0x00010b91e3ac(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar8 <= (long *)plVar6[2]) {
    return;
  }
  plVar7 = plVar8;
  func_0x00010b91d5d4();
  plVar2 = (long *)*plVar6;
  plStack_100 = plVar6;
  plStack_f8 = plVar8;
  if ((plVar2 == (long *)0x0) || (plVar6[1] == 0)) {
    uStack_108 = 0;
    if (plVar2 == (long *)0x0) goto LAB_10b91d4e8;
  }
  else {
    _memmove(plVar7,plVar2,plVar6[1] << 2);
  }
  uStack_108 = 0;
  if (plVar6 + 3 != plVar2) {
    __ZdlPv(plVar2);
  }
LAB_10b91d4e8:
  *plVar6 = (long)plVar7;
  plVar6[2] = (long)plVar8;
  FUN_10b91d5f0(&uStack_108);
  return;
}



/* Entry: 10b91d518; end: 10b91d5ef;  */

undefined4 FUN_10b91d518(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  (**(code **)(param_1 + 0x28))(param_1,param_2,*(undefined8 *)(param_1 + 0x68));
  uVar1 = (int)param_1 - 1;
  if (uVar1 < 0x1d) {
    uVar2 = *(undefined4 *)(&UNK_10e5f7c20 + (ulong)uVar1 * 4);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10b91d5f0; end: 10b91d62b;  */

long * FUN_10b91d5f0(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b91d62c; end: 10b91d6ab;  */

void FUN_10b91d62c(undefined4 *param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  
  func_0x00010b91e58c();
  func_0x00010b91e42c();
  func_0x00010b91d5d4();
  func_0x00010b91e578();
  if (!(bool)in_ZR && unaff_x24 != unaff_x21) {
    func_0x00010b91e4a8();
    param_1 = (undefined4 *)(unaff_x23 + unaff_x26);
  }
  *param_1 = *unaff_x25;
  if ((unaff_x21 != 0) && (unaff_x21 != unaff_x24 + unaff_x28 * 4)) {
    func_0x00010b91e404();
  }
  if ((unaff_x24 != 0) && (unaff_x20 + 0x18 != unaff_x24)) {
    func_0x00010b91e530();
  }
  func_0x00010b91e47c();
  func_0x00010b91e4ec();
  return;
}



/* Entry: 10b91d6ac; end: 10b91d70b;  */

undefined4 * FUN_10b91d6ac(undefined4 *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  
  puVar2 = (undefined4 *)((long)param_1 + 1);
  uVar1 = 0x1fffffffffffffff - param_2 == (long)puVar2 - param_2;
  if (0x1fffffffffffffff - param_2 < (long)puVar2 - param_2) {
    _abort();
    func_0x00010b91e58c();
    func_0x00010b91e42c();
    func_0x00010b91d5d4();
    func_0x00010b91e578();
    puVar2 = param_1;
    if (!(bool)uVar1 && unaff_x24 != unaff_x21) {
      func_0x00010b91e4a8();
      puVar2 = (undefined4 *)(unaff_x23 + unaff_x26);
    }
    *puVar2 = *unaff_x25;
    if ((unaff_x21 != 0) && (unaff_x21 != unaff_x24 + unaff_x28 * 4)) {
      func_0x00010b91e404();
    }
    if ((unaff_x24 != 0) && (unaff_x20 + 0x18 != unaff_x24)) {
      func_0x00010b91e530();
    }
    func_0x00010b91e47c();
    func_0x00010b91e4ec();
    return param_1;
  }
  if (param_2 >> 0x3d == 0) {
    puVar3 = (undefined4 *)((param_2 << 3) / 5);
  }
  else {
    puVar3 = (undefined4 *)(param_2 << 3);
    if (4 < param_2 >> 0x3d) {
      puVar3 = (undefined4 *)0xffffffffffffffff;
    }
  }
  if ((undefined4 *)0x1ffffffffffffffe < puVar3) {
    puVar3 = (undefined4 *)0x1fffffffffffffff;
  }
  if (puVar2 <= puVar3) {
    puVar2 = puVar3;
  }
  return puVar2;
}



/* Entry: 10b91d70c; end: 10b91d78b;  */

void FUN_10b91d70c(undefined4 *param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  
  func_0x00010b91e58c();
  func_0x00010b91e42c();
  func_0x00010b91d5d4();
  func_0x00010b91e578();
  if (!(bool)in_ZR && unaff_x24 != unaff_x21) {
    func_0x00010b91e4a8();
    param_1 = (undefined4 *)(unaff_x23 + unaff_x26);
  }
  *param_1 = *unaff_x25;
  if ((unaff_x21 != 0) && (unaff_x21 != unaff_x24 + unaff_x28 * 4)) {
    func_0x00010b91e404();
  }
  if ((unaff_x24 != 0) && (unaff_x20 + 0x18 != unaff_x24)) {
    func_0x00010b91e530();
  }
  func_0x00010b91e47c();
  func_0x00010b91e4ec();
  return;
}



/* Entry: 10b91d78c; end: 10b91d7c7;  */

long * FUN_10b91d78c(long *param_1)

{
  if (param_1[2] != 0) {
    if (param_1 + 3 != (long *)*param_1) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10b91d7c8; end: 10b91d9db;  */

void FUN_10b91d7c8(long *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + (long)param_4;
  if (uVar1 - uVar3 <= 0x3fffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar8 = (uVar3 << 3) / 5;
    }
    else {
      uVar8 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar8 = 0x3fffffffffffffff;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar1 >> 0x3e == 0) {
      lVar10 = *param_2;
      lVar4 = uVar3 << 1;
      __Znwm();
      plVar7 = (long *)*param_2;
      lVar11 = param_2[1];
      lVar9 = lVar4;
      if ((plVar7 != (long *)0x0) && (plVar7 != (long *)param_3)) {
        _memmove(lVar4,plVar7,param_3 - (long)plVar7);
        lVar9 = lVar4 + (param_3 - (long)plVar7);
      }
      if (param_4 != (undefined4 *)0x0) {
        _bzero(lVar9,(long)param_4 << 1);
      }
      if ((param_3 != 0) && (lVar2 = (long)plVar7 + lVar11 * 2, param_3 != lVar2)) {
        _memmove(lVar9 + (long)param_4 * 2,param_3,lVar2 - param_3);
      }
      if ((plVar7 != (long *)0x0) && (param_2 + 3 != plVar7)) {
        func_0x00010b91e530();
        lVar11 = param_2[1];
      }
      *param_2 = lVar4;
      param_2[1] = lVar11 + (long)param_4;
      param_2[2] = uVar3;
      *param_1 = lVar4 + (param_3 - lVar10);
      return;
    }
  }
  _abort();
  func_0x00010b91e58c();
  plVar5 = param_2;
  FUN_10b8aff74(param_2,1);
  plVar6 = param_2;
  func_0x00010b8affdc(param_2,plVar5);
  lVar9 = *param_2;
  lVar11 = param_2[1];
  plVar7 = plVar6;
  if (((lVar9 != 0) && (plVar6 != (long *)0x0)) && (lVar9 != param_3)) {
    _memmove(plVar6,lVar9,param_3 - lVar9);
    plVar7 = (long *)((long)plVar6 + (param_3 - lVar9));
  }
  *(undefined4 *)plVar7 = *param_4;
  if ((param_3 != 0) && (param_3 != lVar9 + lVar11 * 4)) {
    func_0x00010b91e404();
  }
  if (lVar9 != 0) {
    FUN_10b8b0010(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar6;
  param_2[1] = param_2[1] + 1;
  param_2[2] = (long)plVar5;
  FUN_10b8b002c(&stack0xffffffffffffffa8);
  func_0x00010b91e4ec();
  return;
}



/* Entry: 10b91d9dc; end: 10b91da3f;  */

ulong **** FUN_10b91d9dc(ulong ****param_1,ulong ****param_2)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  uint uVar2;
  int iVar3;
  ulong ***pppuVar4;
  undefined8 *******pppppppuVar5;
  ulong ***pppuVar6;
  ulong ****ppppuVar7;
  uint *puVar8;
  ulong **ppuVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong ****unaff_x20;
  ulong ****unaff_x21;
  ulong ****unaff_x22;
  undefined8 *******unaff_x23;
  ulong uVar10;
  ulong ***pppuVar11;
  ulong ***pppuVar12;
  ulong **in_register_00005008;
  ulong ***pppuStack_350;
  ulong *puStack_348;
  long lStack_340;
  undefined8 ******ppppppuStack_338;
  ulong **ppuStack_330;
  ulong **ppuStack_328;
  undefined8 *****apppppuStack_320 [16];
  ulong ***pppuStack_2a0;
  ulong ***pppuStack_298;
  ulong *puStack_290;
  byte bStack_288;
  ulong ***pppuStack_280;
  ulong *puStack_278;
  undefined2 uStack_270;
  ulong **ppuStack_268;
  undefined4 auStack_260 [8];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  ulong ***pppuStack_200;
  ulong *puStack_1f8;
  ulong ***pppuStack_1f0;
  undefined8 ******ppppppuStack_1e8;
  ulong ***pppuStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  ulong **ppuStack_1d0;
  ulong **appuStack_1c8 [8];
  undefined8 uStack_188;
  ulong ***pppuStack_110;
  undefined2 uStack_108;
  undefined8 uStack_100;
  ulong *puStack_f8;
  ulong ***pppuStack_f0;
  ulong *puStack_e8;
  undefined1 uStack_e0;
  uint auStack_d8 [8];
  undefined8 uStack_b8;
  undefined1 auStack_78 [80];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b8de54c(auStack_78);
  func_0x00010b8de3b8(param_2,auStack_78);
  func_0x00010b8de270(auStack_78);
  func_0x00010b91e3ac(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010b91e3dc();
  pppuStack_110 = (ulong ***)0x0;
  uStack_108 = 0;
  uStack_b8 = extraout_x8;
  func_0x00010b91e4fc(auStack_d8);
  puVar8 = auStack_d8;
  func_0x0001080e2d98(&pppuStack_110,puVar8);
  uVar2 = auStack_d8[0];
  func_0x0001080e44b4();
  func_0x00010b91e3f4();
  if ((bool)in_ZR) {
    func_0x00010b91e514();
    uStack_108 = CONCAT11(uStack_108._1_1_,(char)uVar2);
    func_0x00010b91e3f4();
    if ((bool)in_ZR) {
      func_0x00010b91e508();
      uStack_108 = CONCAT11((char)uVar2,(byte)uStack_108);
      func_0x00010b91e420();
      if ((extraout_x8_00 & 1) != 0) {
        unaff_x22 = (ulong ****)(ulong)(byte)uStack_108;
        ppppuVar7 = (ulong ****)pppuStack_110;
        func_0x00010b9a5bcc(pppuStack_110);
        FUN_10b91cf3c(&uStack_100,ppppuVar7,puVar8,unaff_x22,uVar2 ^ 1);
        unaff_x21 = (ulong ****)*unaff_x20;
        FUN_10b99daa0(&puStack_f8,uStack_100);
        (*(code *)(*unaff_x21)[0x13])(auStack_d8,unaff_x21,&puStack_f8,unaff_x20[3]);
        if ((ulong **)puStack_f8 != (ulong **)0x0) {
          func_0x00010b91e470();
        }
        func_0x00010b91e420();
        if ((extraout_x8_01 & 1) == 0) {
          pppuVar4 = *unaff_x20;
          puStack_f8 = (ulong *)pppuVar4[0x28];
          in_register_00005008 = pppuVar4[0x2a];
          param_1 = (ulong ****)pppuVar4[0x29];
          uStack_e0 = 0;
          pppuStack_f0 = (ulong ***)param_1;
          puStack_e8 = (ulong *)in_register_00005008;
        }
        else {
          func_0x0001080e08ac(&puStack_f8,auStack_d8);
        }
        func_0x0001080e0bc0(auStack_d8);
        func_0x000104bdb368(uStack_100);
        func_0x00010b91e4d4();
        func_0x0001080e0bc0(&puStack_f8);
        goto LAB_10b91db2c;
      }
    }
  }
  func_0x00010b91e374();
LAB_10b91db2c:
  ppppuVar7 = (ulong ****)pppuStack_110;
  func_0x0001080e44b4(pppuStack_110);
  func_0x00010b91e3ac(uStack_b8);
  if ((bool)in_ZR) {
    return ppppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010b91e3dc();
  uStack_188 = extraout_x8_02;
  FUN_10b8e97d4(&pppuStack_280);
  uStack_270 = 0;
  ppuVar9 = (ulong **)0x0;
  ppppuVar7 = unaff_x20;
  FUN_10b8e5ce4();
  pppuStack_280 = (ulong ***)ppppuVar7;
  puStack_278 = (ulong *)ppuVar9;
  func_0x00010b91e3f4();
  if ((bool)in_ZR) {
    func_0x00010b91e514();
    uStack_270 = CONCAT11(uStack_270._1_1_,(char)ppppuVar7);
    func_0x00010b91e3f4();
    if ((bool)in_ZR) {
      func_0x00010b91e508();
      uStack_270 = CONCAT11((char)ppppuVar7,(byte)uStack_270);
      func_0x00010b91e420();
      if ((extraout_x8_03 & 1) != 0) {
        unaff_x23 = (undefined8 *******)(ulong)(byte)uStack_270;
        puStack_1f8 = puStack_278;
        pppuStack_200 = pppuStack_280;
        unaff_x21 = (ulong ****)0x1137fd110;
        unaff_x22 = ppppuVar7;
        param_1 = (ulong ****)pppuStack_280;
        in_register_00005008 = (ulong **)puStack_278;
        if ((bRam00000001137fd118 & 1) == 0) goto LAB_10b91e064;
        goto LAB_10b91dc2c;
      }
    }
  }
  func_0x00010b91e374();
  do {
    func_0x00010b91e3ac(uStack_188);
    if ((bool)in_ZR) {
      return ppppuVar7;
    }
    ___stack_chk_fail();
LAB_10b91e064:
    iVar3 = 0x137fd118;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c31088(unaff_x21,&UNK_10f599c01);
      ___cxa_guard_release(unaff_x21 + 1);
    }
LAB_10b91dc2c:
    if ((bRam00000001137fd128 & 1) == 0) {
      iVar3 = 0x137fd128;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107c31088(0x1137fd120,&DAT_10f637e74);
        ___cxa_guard_release(0x1137fd128);
      }
    }
    unaff_x21 = &pppuStack_2a0;
    pppuVar4 = *unaff_x20;
    FUN_10b9017f8(pppuVar4,&pppuStack_200,unaff_x20[3]);
    if (((ulong)unaff_x20[3][1] & 1) == 0) {
      func_0x00010b91e394();
      bStack_288 = 0;
      pppuStack_298 = (ulong ***)param_1;
      puStack_290 = (ulong *)in_register_00005008;
    }
    else {
      (*(code *)(**unaff_x20)[0x11])(auStack_220,*unaff_x20,pppuVar4);
      func_0x00010b91e420();
      if ((extraout_x8_04 & 1) == 0) {
        func_0x00010b91e394();
        bStack_288 = 0;
        pppuStack_298 = (ulong ***)param_1;
        puStack_290 = (ulong *)in_register_00005008;
      }
      else {
        ppppppuStack_338 = apppppuStack_320;
        in_register_00005008 = (ulong **)0x20;
        param_1 = (ulong ****)0x0;
        puStack_348 = (ulong *)0x20;
        pppuStack_350 = (ulong ***)0x0;
        ppuStack_328 = (ulong **)0x20;
        ppuStack_330 = (ulong **)0x0;
        if ((ulong ***)0x20 < pppuVar4) {
          pppppppuVar5 = &ppppppuStack_338;
          func_0x00010b8affdc(pppppppuVar5,pppuVar4);
          ppppppuStack_1d8 = &ppppppuStack_338;
          ppuStack_1d0 = (ulong **)pppuVar4;
          if ((((undefined8 *******)ppppppuStack_338 == (undefined8 *******)0x0) ||
              (pppppppuVar5 == (undefined8 *******)0x0)) ||
             ((ulong ***)ppuStack_330 == (ulong ***)0x0)) {
            pppuStack_1e0 = (ulong ***)0x0;
            if ((undefined8 *******)ppppppuStack_338 != (undefined8 *******)0x0) goto LAB_10b91dcd8;
          }
          else {
            _memmove(pppppppuVar5,ppppppuStack_338,(long)ppuStack_330 << 2);
LAB_10b91dcd8:
            pppuStack_1e0 = (ulong ***)0x0;
            FUN_10b8b0010(&ppppppuStack_338,&ppppppuStack_338,ppuStack_328);
          }
          ppppppuStack_338 = pppppppuVar5;
          ppuStack_328 = (ulong **)pppuVar4;
          FUN_10b8b002c(&pppuStack_1e0);
        }
        pppuVar11 = (ulong ***)0x0;
        unaff_x21 = (ulong ****)(ulong)bStack_288;
        pppuVar12 = pppuStack_2a0;
        do {
          in_ZR = pppuVar4 == pppuVar11;
          if ((bool)in_ZR) {
            bStack_288 = (byte)unaff_x21;
            pppuStack_2a0 = pppuVar12;
            FUN_10b91cf3c(&lStack_340,ppppppuStack_338,ppuStack_330,unaff_x23,(uint)unaff_x22 ^ 1);
            unaff_x22 = (ulong ****)*unaff_x20;
            FUN_10b99daa0(&pppuStack_1e0,lStack_340);
            (*(code *)(*unaff_x22)[0x13])(auStack_240,unaff_x22,&pppuStack_1e0,unaff_x20[3]);
            if ((ulong ****)pppuStack_1e0 != (ulong ****)0x0) {
              func_0x00010b91e470();
            }
            func_0x00010b91e420();
            if ((extraout_x8_05 & 1) == 0) {
              func_0x00010b91e394();
              func_0x00010b91e448();
            }
            else {
              unaff_x23 = *(undefined8 ********)(lStack_340 + 0x20);
              uVar10 = *(ulong *)(lStack_340 + 0x10) >> 3;
              pppppppuVar5 = unaff_x23;
              FUN_10b997870(unaff_x23,uVar10);
              unaff_x22 = (ulong ****)appuStack_1c8;
              ppuStack_1d0 = (ulong **)0x20;
              ppppppuStack_1d8 = (undefined8 *******)0x0;
              in_ZR = pppppppuVar5 == (undefined8 *******)0x20;
              pppuStack_1e0 = (ulong ***)unaff_x22;
              if (pppppppuVar5 < (undefined8 *******)0x21) {
                ppppuVar7 = unaff_x22;
                param_1 = (ulong ****)pppuStack_350;
                in_register_00005008 = (ulong **)puStack_348;
                if (pppppppuVar5 != (undefined8 *******)0x0) {
                  _bzero(unaff_x22,(long)pppppppuVar5 << 1);
                  param_1 = (ulong ****)pppuStack_350;
                  in_register_00005008 = (ulong **)puStack_348;
                }
              }
              else {
                func_0x00010b91d7c8(auStack_260,&pppuStack_1e0,unaff_x22,pppppppuVar5);
                ppppuVar7 = (ulong ****)pppuStack_1e0;
                param_1 = (ulong ****)pppuStack_350;
                in_register_00005008 = (ulong **)puStack_348;
                pppppppuVar5 = (undefined8 *******)ppppppuStack_1d8;
              }
              ppppppuStack_1d8 = pppppppuVar5;
              func_0x00010b9978d0(unaff_x23,uVar10,ppppuVar7,ppppppuStack_1d8);
              pppuStack_1f0 = pppuStack_1e0;
              ppppppuStack_1e8 = ppppppuStack_1d8;
              (*(code *)(**unaff_x20)[0x10])(auStack_260,*unaff_x20,&pppuStack_1f0,unaff_x20[3]);
              if (((ulong ***)ppuStack_1d0 != (ulong ***)0x0) &&
                 (in_ZR = unaff_x22 == (ulong ****)pppuStack_1e0, !(bool)in_ZR)) {
                __ZdlPv();
              }
              func_0x00010b91e420();
              unaff_x21 = (ulong ****)0x1137fd110;
              if ((extraout_x8_06 & 1) == 0) {
                func_0x00010b91e394();
                func_0x00010b91e448();
              }
              else {
                ppppuVar7 = (ulong ****)*unaff_x20;
                func_0x00010b8dc614(ppppuVar7,0x1137fd120);
                pppuVar4 = *unaff_x20;
                pppuStack_1f0 = (ulong ***)ppppuVar7;
                func_0x00010b8dc614(pppuVar4,0x1137fd110);
                unaff_x21 = &pppuStack_1e0;
                ppuStack_268 = (ulong **)pppuVar4;
                (*(code *)(**unaff_x20)[0xd])(&pppuStack_1e0,*unaff_x20,unaff_x20[3]);
                if (((ulong)unaff_x20[3][1] & 1) == 0) {
LAB_10b91dfe8:
                  func_0x00010b91e564();
LAB_10b91dfec:
                  func_0x00010b91e448();
                }
                else {
                  func_0x00010b91e544(auStack_260,*unaff_x20,&ppppppuStack_1d8,&ppuStack_268);
                  if (((ulong)unaff_x20[3][1] & 1) == 0) goto LAB_10b91dfe8;
                  func_0x00010b91e544(auStack_240,*unaff_x20,&ppppppuStack_1d8,&pppuStack_1f0);
                  func_0x00010b91e420();
                  if ((extraout_x8_07 & 1) == 0) {
                    func_0x00010b91e394();
                    goto LAB_10b91dfec;
                  }
                  func_0x0001080e08ac(&pppuStack_2a0,&pppuStack_1e0);
                }
                func_0x00010b91e520();
              }
              func_0x0001080e0bc0(auStack_260);
            }
            func_0x0001080e0bc0(auStack_240);
            func_0x000104bdb368(lStack_340);
            goto LAB_10b91e00c;
          }
          (*(code *)(**unaff_x20)[0x1c])
                    (&pppuStack_1e0,*unaff_x20,&pppuStack_200,pppuVar11,unaff_x20[3]);
          pppuVar6 = *unaff_x20;
          if (((ulong)unaff_x20[3][1] & 1) == 0) {
            func_0x00010b91e564();
            func_0x00010b91e448();
            func_0x00010b91e520();
            goto LAB_10b91e00c;
          }
          (*(code *)(*pppuVar6)[0x2a])(pppuVar6,&ppppppuStack_1d8);
          ppuVar9 = unaff_x20[3][1];
          if (((ulong)ppuVar9 & 1) == 0) {
            unaff_x21 = (ulong ****)0x0;
            pppuVar6 = *unaff_x20;
            pppuVar12 = (ulong ***)pppuVar6[0x28];
            in_register_00005008 = pppuVar6[0x2a];
            param_1 = (ulong ****)pppuVar6[0x29];
            pppuStack_298 = (ulong ***)param_1;
            puStack_290 = (ulong *)in_register_00005008;
          }
          else {
            auStack_260[0] = SUB84(pppuVar6,0);
            puVar1 = (undefined4 *)((long)ppppppuStack_338 + (long)ppuStack_330 * 4);
            in_ZR = ppuStack_330 == ppuStack_328;
            if ((bool)in_ZR) {
              func_0x00010b91d8fc(auStack_240,&ppppppuStack_338,puVar1,auStack_260);
            }
            else {
              *puVar1 = auStack_260[0];
              ppuStack_330 = (ulong **)((long)ppuStack_330 + 1);
            }
          }
          func_0x00010b91e520();
          pppuVar11 = (ulong ***)((long)pppuVar11 + 1);
        } while (((ulong)ppuVar9 & 1) != 0);
        bStack_288 = (byte)unaff_x21;
        pppuStack_2a0 = pppuVar12;
LAB_10b91e00c:
        FUN_10b8b04dc(&ppppppuStack_338);
      }
      func_0x0001080e0bc0(auStack_220);
    }
    func_0x00010b91e4d4();
    ppppuVar7 = &pppuStack_2a0;
    func_0x0001080e0bc0(ppppuVar7);
  } while( true );
}



/* Entry: 10b91da40; end: 10b91db97;  */

void FUN_10b91da40(ulong *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 in_ZR;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar10;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong *unaff_x20;
  ulong **unaff_x21;
  ulong *unaff_x22;
  undefined8 ****unaff_x23;
  ulong uVar11;
  ulong *puVar12;
  undefined8 in_register_00005008;
  ulong *puStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 ***pppuStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 **appuStack_2a0 [16];
  ulong *puStack_220;
  ulong *puStack_218;
  undefined8 uStack_210;
  byte bStack_208;
  ulong *puStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  ulong uStack_1e8;
  undefined4 auStack_1e0 [8];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  ulong *puStack_180;
  undefined8 uStack_178;
  ulong *puStack_170;
  undefined8 ***pppuStack_168;
  ulong *puStack_160;
  undefined8 ***pppuStack_158;
  ulong uStack_150;
  ulong auStack_148 [8];
  undefined8 uStack_108;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  uint auStack_58 [8];
  undefined8 uStack_38;
  
  func_0x00010b91e3dc();
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_38 = extraout_x8;
  func_0x00010b91e4fc(auStack_58);
  puVar8 = auStack_58;
  func_0x0001080e2d98(&uStack_90,puVar8);
  uVar3 = auStack_58[0];
  func_0x0001080e44b4();
  func_0x00010b91e3f4();
  if ((bool)in_ZR) {
    func_0x00010b91e514();
    uStack_88 = CONCAT11(uStack_88._1_1_,(char)uVar3);
    func_0x00010b91e3f4();
    if ((bool)in_ZR) {
      func_0x00010b91e508();
      uStack_88 = CONCAT11((char)uVar3,(byte)uStack_88);
      func_0x00010b91e420();
      if ((extraout_x8_00 & 1) != 0) {
        unaff_x22 = (ulong *)(ulong)(byte)uStack_88;
        uVar9 = uStack_90;
        func_0x00010b9a5bcc(uStack_90);
        FUN_10b91cf3c(&uStack_80,uVar9,puVar8,unaff_x22,uVar3 ^ 1);
        unaff_x21 = (ulong **)*unaff_x20;
        FUN_10b99daa0(&lStack_78,uStack_80);
        (*(code *)(*unaff_x21)[0x13])(auStack_58,unaff_x21,&lStack_78,unaff_x20[3]);
        if (lStack_78 != 0) {
          func_0x00010b91e470();
        }
        func_0x00010b91e420();
        if ((extraout_x8_01 & 1) == 0) {
          uVar5 = *unaff_x20;
          lStack_78 = *(long *)(uVar5 + 0x140);
          in_register_00005008 = *(undefined8 *)(uVar5 + 0x150);
          param_1 = *(ulong **)(uVar5 + 0x148);
          uStack_60 = 0;
          puStack_70 = param_1;
          uStack_68 = in_register_00005008;
        }
        else {
          func_0x0001080e08ac(&lStack_78,auStack_58);
        }
        func_0x0001080e0bc0(auStack_58);
        func_0x000104bdb368(uStack_80);
        func_0x00010b91e4d4();
        func_0x0001080e0bc0(&lStack_78);
        goto LAB_10b91db2c;
      }
    }
  }
  func_0x00010b91e374();
LAB_10b91db2c:
  func_0x0001080e44b4(uStack_90);
  func_0x00010b91e3ac(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b91e3dc();
  uStack_108 = extraout_x8_02;
  FUN_10b8e97d4(&puStack_200);
  uStack_1f0 = 0;
  uVar9 = 0;
  puVar12 = unaff_x20;
  FUN_10b8e5ce4();
  puStack_200 = puVar12;
  uStack_1f8 = uVar9;
  func_0x00010b91e3f4();
  if ((bool)in_ZR) {
    func_0x00010b91e514();
    uStack_1f0 = CONCAT11(uStack_1f0._1_1_,(char)puVar12);
    func_0x00010b91e3f4();
    if ((bool)in_ZR) {
      func_0x00010b91e508();
      uStack_1f0 = CONCAT11((char)puVar12,(byte)uStack_1f0);
      func_0x00010b91e420();
      if ((extraout_x8_03 & 1) != 0) {
        unaff_x23 = (undefined8 ****)(ulong)(byte)uStack_1f0;
        uStack_178 = uStack_1f8;
        puStack_180 = puStack_200;
        unaff_x21 = (ulong **)0x1137fd110;
        unaff_x22 = puVar12;
        param_1 = puStack_200;
        in_register_00005008 = uStack_1f8;
        if ((bRam00000001137fd118 & 1) == 0) goto LAB_10b91e064;
        goto LAB_10b91dc2c;
      }
    }
  }
  func_0x00010b91e374();
  do {
    func_0x00010b91e3ac(uStack_108);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_10b91e064:
    iVar4 = 0x137fd118;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c31088(unaff_x21,&UNK_10f599c01);
      ___cxa_guard_release(unaff_x21 + 1);
    }
LAB_10b91dc2c:
    if ((bRam00000001137fd128 & 1) == 0) {
      iVar4 = 0x137fd128;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x000107c31088(0x1137fd120,&DAT_10f637e74);
        ___cxa_guard_release(0x1137fd128);
      }
    }
    unaff_x21 = &puStack_220;
    uVar5 = *unaff_x20;
    FUN_10b9017f8(uVar5,&puStack_180,unaff_x20[3]);
    if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) {
      func_0x00010b91e394();
      bStack_208 = 0;
      puStack_218 = param_1;
      uStack_210 = in_register_00005008;
    }
    else {
      (**(code **)(*(long *)*unaff_x20 + 0x88))(auStack_1a0,(long *)*unaff_x20,uVar5);
      func_0x00010b91e420();
      if ((extraout_x8_04 & 1) == 0) {
        func_0x00010b91e394();
        bStack_208 = 0;
        puStack_218 = param_1;
        uStack_210 = in_register_00005008;
      }
      else {
        pppuStack_2b8 = appuStack_2a0;
        in_register_00005008 = 0x20;
        param_1 = (ulong *)0x0;
        uStack_2c8 = 0x20;
        puStack_2d0 = (ulong *)0x0;
        uStack_2a8 = 0x20;
        uStack_2b0 = 0;
        if (0x20 < uVar5) {
          ppppuVar6 = &pppuStack_2b8;
          func_0x00010b8affdc(ppppuVar6,uVar5);
          pppuStack_158 = &pppuStack_2b8;
          uStack_150 = uVar5;
          if ((((undefined8 ****)pppuStack_2b8 == (undefined8 ****)0x0) ||
              (ppppuVar6 == (undefined8 ****)0x0)) || (uStack_2b0 == 0)) {
            puStack_160 = (ulong *)0x0;
            if ((undefined8 ****)pppuStack_2b8 != (undefined8 ****)0x0) goto LAB_10b91dcd8;
          }
          else {
            _memmove(ppppuVar6,pppuStack_2b8,uStack_2b0 << 2);
LAB_10b91dcd8:
            puStack_160 = (ulong *)0x0;
            FUN_10b8b0010(&pppuStack_2b8,&pppuStack_2b8,uStack_2a8);
          }
          pppuStack_2b8 = ppppuVar6;
          uStack_2a8 = uVar5;
          FUN_10b8b002c(&puStack_160);
        }
        uVar11 = 0;
        unaff_x21 = (ulong **)(ulong)bStack_208;
        puVar12 = puStack_220;
        do {
          in_ZR = uVar5 == uVar11;
          if ((bool)in_ZR) {
            bStack_208 = (byte)unaff_x21;
            puStack_220 = puVar12;
            FUN_10b91cf3c(&lStack_2c0,pppuStack_2b8,uStack_2b0,unaff_x23,(uint)unaff_x22 ^ 1);
            unaff_x22 = (ulong *)*unaff_x20;
            FUN_10b99daa0(&puStack_160,lStack_2c0);
            (**(code **)(*unaff_x22 + 0x98))(auStack_1c0,unaff_x22,&puStack_160,unaff_x20[3]);
            if (puStack_160 != (ulong *)0x0) {
              func_0x00010b91e470();
            }
            func_0x00010b91e420();
            if ((extraout_x8_05 & 1) == 0) {
              func_0x00010b91e394();
              func_0x00010b91e448();
            }
            else {
              unaff_x23 = *(undefined8 *****)(lStack_2c0 + 0x20);
              uVar5 = *(ulong *)(lStack_2c0 + 0x10) >> 3;
              ppppuVar6 = unaff_x23;
              FUN_10b997870(unaff_x23,uVar5);
              unaff_x22 = auStack_148;
              uStack_150 = 0x20;
              pppuStack_158 = (undefined8 ****)0x0;
              in_ZR = ppppuVar6 == (undefined8 ****)0x20;
              puStack_160 = unaff_x22;
              if (ppppuVar6 < (undefined8 ****)0x21) {
                puVar12 = unaff_x22;
                param_1 = puStack_2d0;
                in_register_00005008 = uStack_2c8;
                if (ppppuVar6 != (undefined8 ****)0x0) {
                  _bzero(unaff_x22,(long)ppppuVar6 << 1);
                  param_1 = puStack_2d0;
                  in_register_00005008 = uStack_2c8;
                }
              }
              else {
                func_0x00010b91d7c8(auStack_1e0,&puStack_160,unaff_x22,ppppuVar6);
                puVar12 = puStack_160;
                param_1 = puStack_2d0;
                in_register_00005008 = uStack_2c8;
                ppppuVar6 = (undefined8 ****)pppuStack_158;
              }
              pppuStack_158 = ppppuVar6;
              func_0x00010b9978d0(unaff_x23,uVar5,puVar12,pppuStack_158);
              puStack_170 = puStack_160;
              pppuStack_168 = pppuStack_158;
              (**(code **)(*(long *)*unaff_x20 + 0x80))
                        (auStack_1e0,(long *)*unaff_x20,&puStack_170,unaff_x20[3]);
              if ((uStack_150 != 0) && (in_ZR = unaff_x22 == puStack_160, !(bool)in_ZR)) {
                __ZdlPv();
              }
              func_0x00010b91e420();
              unaff_x21 = (ulong **)0x1137fd110;
              if ((extraout_x8_06 & 1) == 0) {
                func_0x00010b91e394();
                func_0x00010b91e448();
              }
              else {
                puVar12 = (ulong *)*unaff_x20;
                func_0x00010b8dc614(puVar12,0x1137fd120);
                uVar5 = *unaff_x20;
                puStack_170 = puVar12;
                func_0x00010b8dc614(uVar5,0x1137fd110);
                unaff_x21 = &puStack_160;
                uStack_1e8 = uVar5;
                (**(code **)(*(long *)*unaff_x20 + 0x68))
                          (&puStack_160,(long *)*unaff_x20,unaff_x20[3]);
                if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) {
LAB_10b91dfe8:
                  func_0x00010b91e564();
LAB_10b91dfec:
                  func_0x00010b91e448();
                }
                else {
                  func_0x00010b91e544(auStack_1e0,*unaff_x20,&pppuStack_158,&uStack_1e8);
                  if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) goto LAB_10b91dfe8;
                  func_0x00010b91e544(auStack_1c0,*unaff_x20,&pppuStack_158,&puStack_170);
                  func_0x00010b91e420();
                  if ((extraout_x8_07 & 1) == 0) {
                    func_0x00010b91e394();
                    goto LAB_10b91dfec;
                  }
                  func_0x0001080e08ac(&puStack_220,&puStack_160);
                }
                func_0x00010b91e520();
              }
              func_0x0001080e0bc0(auStack_1e0);
            }
            func_0x0001080e0bc0(auStack_1c0);
            func_0x000104bdb368(lStack_2c0);
            goto LAB_10b91e00c;
          }
          (**(code **)(*(long *)*unaff_x20 + 0xe0))
                    (&puStack_160,(long *)*unaff_x20,&puStack_180,uVar11,unaff_x20[3]);
          plVar7 = (long *)*unaff_x20;
          if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) {
            func_0x00010b91e564();
            func_0x00010b91e448();
            func_0x00010b91e520();
            goto LAB_10b91e00c;
          }
          (**(code **)(*plVar7 + 0x150))(plVar7,&pppuStack_158);
          bVar2 = *(byte *)(unaff_x20[3] + 8);
          if ((bVar2 & 1) == 0) {
            unaff_x21 = (ulong **)0x0;
            uVar10 = *unaff_x20;
            puVar12 = *(ulong **)(uVar10 + 0x140);
            in_register_00005008 = *(undefined8 *)(uVar10 + 0x150);
            param_1 = *(ulong **)(uVar10 + 0x148);
            puStack_218 = param_1;
            uStack_210 = in_register_00005008;
          }
          else {
            auStack_1e0[0] = SUB84(plVar7,0);
            puVar1 = (undefined4 *)((long)pppuStack_2b8 + uStack_2b0 * 4);
            in_ZR = uStack_2b0 == uStack_2a8;
            if ((bool)in_ZR) {
              func_0x00010b91d8fc(auStack_1c0,&pppuStack_2b8,puVar1,auStack_1e0);
            }
            else {
              *puVar1 = auStack_1e0[0];
              uStack_2b0 = uStack_2b0 + 1;
            }
          }
          func_0x00010b91e520();
          uVar11 = uVar11 + 1;
        } while ((bVar2 & 1) != 0);
        bStack_208 = (byte)unaff_x21;
        puStack_220 = puVar12;
LAB_10b91e00c:
        FUN_10b8b04dc(&pppuStack_2b8);
      }
      func_0x0001080e0bc0(auStack_1a0);
    }
    func_0x00010b91e4d4();
    func_0x0001080e0bc0(&puStack_220);
  } while( true );
}



/* Entry: 10b91db98; end: 10b91e0c3;  */

void FUN_10b91db98(ulong *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar8;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong *unaff_x20;
  ulong **unaff_x21;
  ulong *unaff_x22;
  undefined8 ***unaff_x23;
  ulong uVar9;
  ulong *puVar10;
  undefined8 in_register_00005008;
  ulong *puStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 **ppuStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 *apuStack_210 [16];
  ulong *puStack_190;
  ulong *puStack_188;
  undefined8 uStack_180;
  byte bStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  ulong uStack_158;
  undefined4 auStack_150 [8];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  ulong *puStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  undefined8 **ppuStack_d8;
  ulong *puStack_d0;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  ulong auStack_b8 [8];
  undefined8 uStack_78;
  
  func_0x00010b91e3dc();
  uStack_78 = extraout_x8;
  FUN_10b8e97d4(&puStack_170);
  uStack_160 = 0;
  uVar7 = 0;
  puVar10 = unaff_x20;
  FUN_10b8e5ce4();
  puStack_170 = puVar10;
  uStack_168 = uVar7;
  func_0x00010b91e3f4();
  if ((bool)in_ZR) {
    func_0x00010b91e514();
    uStack_160 = CONCAT11(uStack_160._1_1_,(char)puVar10);
    func_0x00010b91e3f4();
    if ((bool)in_ZR) {
      func_0x00010b91e508();
      uStack_160 = CONCAT11((char)puVar10,(byte)uStack_160);
      func_0x00010b91e420();
      if ((extraout_x8_00 & 1) != 0) {
        unaff_x23 = (undefined8 ***)(ulong)(byte)uStack_160;
        uStack_e8 = uStack_168;
        puStack_f0 = puStack_170;
        unaff_x21 = (ulong **)0x1137fd110;
        unaff_x22 = puVar10;
        param_1 = puStack_170;
        in_register_00005008 = uStack_168;
        if ((bRam00000001137fd118 & 1) == 0) goto LAB_10b91e064;
        goto LAB_10b91dc2c;
      }
    }
  }
  func_0x00010b91e374();
  do {
    func_0x00010b91e3ac(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_10b91e064:
    iVar3 = 0x137fd118;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c31088(unaff_x21,&UNK_10f599c01);
      ___cxa_guard_release(unaff_x21 + 1);
    }
LAB_10b91dc2c:
    if ((bRam00000001137fd128 & 1) == 0) {
      iVar3 = 0x137fd128;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107c31088(0x1137fd120,&DAT_10f637e74);
        ___cxa_guard_release(0x1137fd128);
      }
    }
    unaff_x21 = &puStack_190;
    uVar4 = *unaff_x20;
    FUN_10b9017f8(uVar4,&puStack_f0,unaff_x20[3]);
    if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) {
      func_0x00010b91e394();
      bStack_178 = 0;
      puStack_188 = param_1;
      uStack_180 = in_register_00005008;
    }
    else {
      (**(code **)(*(long *)*unaff_x20 + 0x88))(auStack_110,(long *)*unaff_x20,uVar4);
      func_0x00010b91e420();
      if ((extraout_x8_01 & 1) == 0) {
        func_0x00010b91e394();
        bStack_178 = 0;
        puStack_188 = param_1;
        uStack_180 = in_register_00005008;
      }
      else {
        ppuStack_228 = apuStack_210;
        in_register_00005008 = 0x20;
        param_1 = (ulong *)0x0;
        uStack_238 = 0x20;
        puStack_240 = (ulong *)0x0;
        uStack_218 = 0x20;
        uStack_220 = 0;
        if (0x20 < uVar4) {
          pppuVar5 = &ppuStack_228;
          func_0x00010b8affdc(pppuVar5,uVar4);
          ppuStack_c8 = &ppuStack_228;
          uStack_c0 = uVar4;
          if ((((undefined8 ***)ppuStack_228 == (undefined8 ***)0x0) ||
              (pppuVar5 == (undefined8 ***)0x0)) || (uStack_220 == 0)) {
            puStack_d0 = (ulong *)0x0;
            if ((undefined8 ***)ppuStack_228 != (undefined8 ***)0x0) goto LAB_10b91dcd8;
          }
          else {
            _memmove(pppuVar5,ppuStack_228,uStack_220 << 2);
LAB_10b91dcd8:
            puStack_d0 = (ulong *)0x0;
            FUN_10b8b0010(&ppuStack_228,&ppuStack_228,uStack_218);
          }
          ppuStack_228 = pppuVar5;
          uStack_218 = uVar4;
          FUN_10b8b002c(&puStack_d0);
        }
        uVar9 = 0;
        unaff_x21 = (ulong **)(ulong)bStack_178;
        puVar10 = puStack_190;
        do {
          in_ZR = uVar4 == uVar9;
          if ((bool)in_ZR) {
            bStack_178 = (byte)unaff_x21;
            puStack_190 = puVar10;
            FUN_10b91cf3c(&lStack_230,ppuStack_228,uStack_220,unaff_x23,(uint)unaff_x22 ^ 1);
            unaff_x22 = (ulong *)*unaff_x20;
            FUN_10b99daa0(&puStack_d0,lStack_230);
            (**(code **)(*unaff_x22 + 0x98))(auStack_130,unaff_x22,&puStack_d0,unaff_x20[3]);
            if (puStack_d0 != (ulong *)0x0) {
              func_0x00010b91e470();
            }
            func_0x00010b91e420();
            if ((extraout_x8_02 & 1) == 0) {
              func_0x00010b91e394();
              func_0x00010b91e448();
            }
            else {
              unaff_x23 = *(undefined8 ****)(lStack_230 + 0x20);
              uVar4 = *(ulong *)(lStack_230 + 0x10) >> 3;
              pppuVar5 = unaff_x23;
              FUN_10b997870(unaff_x23,uVar4);
              unaff_x22 = auStack_b8;
              uStack_c0 = 0x20;
              ppuStack_c8 = (undefined8 ***)0x0;
              in_ZR = pppuVar5 == (undefined8 ***)0x20;
              puStack_d0 = unaff_x22;
              if (pppuVar5 < (undefined8 ***)0x21) {
                puVar10 = unaff_x22;
                param_1 = puStack_240;
                in_register_00005008 = uStack_238;
                if (pppuVar5 != (undefined8 ***)0x0) {
                  _bzero(unaff_x22,(long)pppuVar5 << 1);
                  param_1 = puStack_240;
                  in_register_00005008 = uStack_238;
                }
              }
              else {
                func_0x00010b91d7c8(auStack_150,&puStack_d0,unaff_x22,pppuVar5);
                puVar10 = puStack_d0;
                param_1 = puStack_240;
                in_register_00005008 = uStack_238;
                pppuVar5 = (undefined8 ***)ppuStack_c8;
              }
              ppuStack_c8 = pppuVar5;
              func_0x00010b9978d0(unaff_x23,uVar4,puVar10,ppuStack_c8);
              puStack_e0 = puStack_d0;
              ppuStack_d8 = ppuStack_c8;
              (**(code **)(*(long *)*unaff_x20 + 0x80))
                        (auStack_150,(long *)*unaff_x20,&puStack_e0,unaff_x20[3]);
              if ((uStack_c0 != 0) && (in_ZR = unaff_x22 == puStack_d0, !(bool)in_ZR)) {
                __ZdlPv();
              }
              func_0x00010b91e420();
              unaff_x21 = (ulong **)0x1137fd110;
              if ((extraout_x8_03 & 1) == 0) {
                func_0x00010b91e394();
                func_0x00010b91e448();
              }
              else {
                puVar10 = (ulong *)*unaff_x20;
                func_0x00010b8dc614(puVar10,0x1137fd120);
                uVar4 = *unaff_x20;
                puStack_e0 = puVar10;
                func_0x00010b8dc614(uVar4,0x1137fd110);
                unaff_x21 = &puStack_d0;
                uStack_158 = uVar4;
                (**(code **)(*(long *)*unaff_x20 + 0x68))
                          (&puStack_d0,(long *)*unaff_x20,unaff_x20[3]);
                if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) {
LAB_10b91dfe8:
                  func_0x00010b91e564();
LAB_10b91dfec:
                  func_0x00010b91e448();
                }
                else {
                  func_0x00010b91e544(auStack_150,*unaff_x20,&ppuStack_c8,&uStack_158);
                  if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) goto LAB_10b91dfe8;
                  func_0x00010b91e544(auStack_130,*unaff_x20,&ppuStack_c8,&puStack_e0);
                  func_0x00010b91e420();
                  if ((extraout_x8_04 & 1) == 0) {
                    func_0x00010b91e394();
                    goto LAB_10b91dfec;
                  }
                  func_0x0001080e08ac(&puStack_190,&puStack_d0);
                }
                func_0x00010b91e520();
              }
              func_0x0001080e0bc0(auStack_150);
            }
            func_0x0001080e0bc0(auStack_130);
            func_0x000104bdb368(lStack_230);
            goto LAB_10b91e00c;
          }
          (**(code **)(*(long *)*unaff_x20 + 0xe0))
                    (&puStack_d0,(long *)*unaff_x20,&puStack_f0,uVar9,unaff_x20[3]);
          plVar6 = (long *)*unaff_x20;
          if ((*(byte *)(unaff_x20[3] + 8) & 1) == 0) {
            func_0x00010b91e564();
            func_0x00010b91e448();
            func_0x00010b91e520();
            goto LAB_10b91e00c;
          }
          (**(code **)(*plVar6 + 0x150))(plVar6,&ppuStack_c8);
          bVar2 = *(byte *)(unaff_x20[3] + 8);
          if ((bVar2 & 1) == 0) {
            unaff_x21 = (ulong **)0x0;
            uVar8 = *unaff_x20;
            puVar10 = *(ulong **)(uVar8 + 0x140);
            in_register_00005008 = *(undefined8 *)(uVar8 + 0x150);
            param_1 = *(ulong **)(uVar8 + 0x148);
            puStack_188 = param_1;
            uStack_180 = in_register_00005008;
          }
          else {
            auStack_150[0] = SUB84(plVar6,0);
            puVar1 = (undefined4 *)((long)ppuStack_228 + uStack_220 * 4);
            in_ZR = uStack_220 == uStack_218;
            if ((bool)in_ZR) {
              func_0x00010b91d8fc(auStack_130,&ppuStack_228,puVar1,auStack_150);
            }
            else {
              *puVar1 = auStack_150[0];
              uStack_220 = uStack_220 + 1;
            }
          }
          func_0x00010b91e520();
          uVar9 = uVar9 + 1;
        } while ((bVar2 & 1) != 0);
        bStack_178 = (byte)unaff_x21;
        puStack_190 = puVar10;
LAB_10b91e00c:
        FUN_10b8b04dc(&ppuStack_228);
      }
      func_0x0001080e0bc0(auStack_110);
    }
    func_0x00010b91e4d4();
    func_0x0001080e0bc0(&puStack_190);
  } while( true );
}



/* Entry: 10b91e0c4; end: 10b91e22f;  */

/* WARNING: Possible PIC construction at 0x00010b91e10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e6000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e60a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e6004) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6010) */
/* WARNING: Removing unreachable block (ram,0x00010b8e608c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6078) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6098) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6008) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fc8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fd4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fcc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f98) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f90) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f50) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f5c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f54) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6128) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f14) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f20) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f18) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6190) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5ecc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5ed8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5ed0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e61b8) */
/* WARNING: Removing unreachable block (ram,0x00010b91e110) */
/* WARNING: Removing unreachable block (ram,0x00010b91e120) */
/* WARNING: Removing unreachable block (ram,0x00010b91e17c) */
/* WARNING: Removing unreachable block (ram,0x00010b91e130) */
/* WARNING: Removing unreachable block (ram,0x00010b91e168) */
/* WARNING: Removing unreachable block (ram,0x00010b91e18c) */
/* WARNING: Removing unreachable block (ram,0x00010b91e138) */
/* WARNING: Removing unreachable block (ram,0x00010b91e19c) */
/* WARNING: Removing unreachable block (ram,0x00010b91e140) */
/* WARNING: Removing unreachable block (ram,0x00010b91e194) */
/* WARNING: Removing unreachable block (ram,0x00010b91e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60bc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60a8) */

long FUN_10b91e0c4(void)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  long lStack_58;
  undefined4 uStack_50;
  undefined8 auStack_48 [4];
  undefined8 uStack_28;
  
  func_0x00010b91e3dc();
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_28 = extraout_x8_00;
  func_0x00010b91e4fc(auStack_48);
  func_0x0001080e2d98(&lStack_58,auStack_48);
  func_0x0001080e44b4(auStack_48[0]);
  func_0x00010b91e3f4();
  if (!(bool)in_ZR) {
    func_0x00010b91e374();
    unaff_x20 = lStack_58;
    func_0x0001080e44b4();
    func_0x00010b91e3ac(uStack_28);
    if ((bool)in_ZR) {
      return unaff_x20;
    }
    ___stack_chk_fail();
  }
  lVar1 = unaff_x20;
  FUN_10b912020();
  if ((int)lVar1 == 0) {
    func_0x00010b8e60f4(unaff_x20,1);
    func_0x00010b8e61b0();
    func_0x00010b8e61a0();
    func_0x00010b8e61d0(*(undefined8 *)(extraout_x8 + 0x150));
    return unaff_x20;
  }
  FUN_10b9a0050(*(undefined8 *)(unaff_x20 + 0x18),&UNK_10f7cd49c);
  return 0;
}



/* Entry: 10b91e230; end: 10b91e35b;  */

void FUN_10b91e230(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *pcVar6;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  int iStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x00010b91e3dc();
  uStack_38 = extraout_x8;
  FUN_10b911f98(auStack_b0);
  iStack_78 = 0;
  FUN_10b911fac(auStack_70);
  func_0x00010b8ffa54(auStack_b0,auStack_70);
  func_0x0001080e0bc0(auStack_58);
  func_0x00010b91e3f4();
  if ((bool)in_ZR) {
    puVar2 = unaff_x20;
    func_0x00010b91e1e0();
    iStack_78 = (int)puVar2;
    lVar4 = unaff_x20[3];
    if ((*(byte *)(lVar4 + 8) & 1) != 0) {
      in_ZR = iStack_78 == 3;
      if ((bool)in_ZR) {
        uVar3 = uStack_a0 >> 2;
        func_0x00010b9977bc();
        plVar5 = (long *)*unaff_x20;
        lVar4 = unaff_x20[3];
        uStack_c0 = uStack_a8;
        uStack_b8 = uVar3;
LAB_10b91e300:
        pcVar6 = *(code **)(*plVar5 + 0x78);
LAB_10b91e308:
        (*pcVar6)(auStack_70,plVar5,&uStack_c0,lVar4);
      }
      else {
        if (iStack_78 == 2) {
          plVar5 = (long *)*unaff_x20;
          uStack_b8 = uStack_a0 >> 1;
          uStack_c0 = uStack_a8;
          pcVar6 = *(code **)(*plVar5 + 0x80);
          in_ZR = 1;
          goto LAB_10b91e308;
        }
        in_ZR = iStack_78 == 1;
        if ((bool)in_ZR) {
          plVar5 = (long *)*unaff_x20;
          uStack_c0 = uStack_a8;
          uStack_b8 = uStack_a0;
          goto LAB_10b91e300;
        }
        FUN_10b91d2c0(auStack_70);
      }
      func_0x00010b91e4d4();
      func_0x0001080e0bc0(auStack_70);
      goto LAB_10b91e338;
    }
  }
  func_0x00010b91e374();
LAB_10b91e338:
  func_0x0001080e0bc0(auStack_98);
  func_0x00010b91e3ac(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = auStack_90;
  func_0x00010b8de840(auStack_88);
  func_0x000107c31068();
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x22;
  puVar1[0x48] = 1;
  puVar1[0x49] = 1;
  puVar1[0x4a] = 1;
  return;
}



/* Entry: 10b91e35c; end: 10b91e5a7;  */

void FUN_10b91e35c(void)

{
  undefined1 *puVar1;
  undefined8 unaff_x22;
  
  puVar1 = &stack0x00000030;
  func_0x00010b8de840(&stack0x00000038);
  func_0x000107c31068();
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x22;
  puVar1[0x48] = 1;
  puVar1[0x49] = 1;
  puVar1[0x4a] = 1;
  return;
}



/* Entry: 10b91e5a8; end: 10b91e697;  */

undefined8 *
FUN_10b91e5a8(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110d7ed50;
  param_1[1] = 1;
  FUN_10b8e0de0(param_1 + 2,param_2,param_3,param_5,param_6,1);
  *param_1 = &PTR_FUN_110d76370;
  param_1[2] = &PTR_DAT_110d763d8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xd] = plVar1;
  func_0x00010b8c2a68();
  func_0x00010b8c18c4(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x83) = param_4;
  return param_1;
}



/* Entry: 10b91e698; end: 10b91e69f;  */

undefined1 FUN_10b91e698(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 10b91e6a0; end: 10b91e72b;  */

undefined8 FUN_10b91e6a0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong auStack_30 [2];
  
  uVar3 = param_1 + 0x10;
  FUN_10b8e1104();
  if ((uVar3 & 1) == 0) {
    bVar1 = *(char *)(param_1 + 0x82) == '\x01';
    if (bVar1) {
      func_0x00010b920b30();
      if (bVar1) {
        func_0x00010b8c2f90(auStack_30,param_1 + 0x70);
        if (auStack_30[0] == 0) {
          func_0x00010b8c2ec8(auStack_30);
          goto LAB_10b91e6c0;
        }
        uVar3 = auStack_30[0];
        func_0x00010b8c1f54();
        func_0x00010b8c2ec8(auStack_30);
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x18);
        func_0x00010b8c1f54();
      }
      if ((uVar3 & 1) != 0) goto LAB_10b91e6c0;
    }
    uVar2 = 0;
  }
  else {
LAB_10b91e6c0:
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10b91e72c; end: 10b91e8d3;  */

code ** FUN_10b91e72c(undefined8 *param_1,long *param_2,code *param_3,long *param_4,
                     undefined8 param_5,long param_6,long param_7)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  long **pplVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long lStack_1f0;
  undefined1 uStack_1e1;
  code *pcStack_1e0;
  undefined8 *puStack_1d8;
  long *plStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1c0 [56];
  code *pcStack_188;
  undefined8 *puStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_148;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  puVar6 = param_1;
  plVar7 = param_4;
  uVar10 = param_5;
  lVar11 = param_6;
  func_0x00010b920908();
  iVar4 = (int)puVar6;
  auStack_b8[0] = 0;
  uStack_60 = 0;
  uStack_58 = extraout_x8;
  func_0x000105c3b044();
  if (iVar4 != 0) {
    plVar14 = param_2 + 0xc;
    if (*plVar14 == 0) {
      FUN_10b9a3860(&plStack_d0,param_2 + 7);
      func_0x000107c31060(plVar14,&plStack_d0);
      func_0x000107c278f8(plStack_d0);
    }
    func_0x00010b9a7520(&plStack_d0,&UNK_10f7cdbc9,0x14,plVar14);
    func_0x00010b8a6ed0(auStack_b8,&plStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_d0);
  }
  pcVar8 = *(code **)param_3;
  pplVar9 = *(long ***)(param_3 + 8);
  plVar14 = param_2 + 2;
  FUN_10b8e129c();
  plVar13 = *(long **)(param_3 + 8);
  plStack_d0 = plVar14;
  pcStack_c8 = pcVar8;
  if ((*(byte *)(plVar13 + 1) & 1) == 0) {
    uVar3 = *(char *)((long)param_2 + 0x82) == '\x01';
    if ((bool)uVar3) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      *(undefined1 *)(plVar13 + 1) = 1;
      param_4 = plVar7;
      param_5 = uVar10;
      param_7 = lVar11;
    }
    else {
      param_4 = plVar7;
      param_5 = uVar10;
      param_7 = lVar11;
      if (param_6 != 0) {
        FUN_10b9a0084(auStack_d8,plVar13);
        func_0x00010b920b18();
        func_0x00010b920b10();
        param_4 = plVar7;
        param_5 = uVar10;
        param_7 = lVar11;
      }
    }
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    pplVar9 = &plStack_d0;
    pcVar8 = param_3;
    (**(code **)(*param_2 + 0x50))(param_1,param_2,param_3,pplVar9,param_4,param_5,param_7);
    if ((param_6 != 0) && ((*(byte *)(*(long *)(param_3 + 8) + 8) & 1) == 0)) {
      FUN_10b9a0084(auStack_d8);
      func_0x00010b920b18();
      func_0x00010b920b10();
    }
    uVar3 = *(char *)((long)param_2 + 0x83) == '\x01';
    if ((bool)uVar3) {
      pcVar8 = *(code **)param_3;
      FUN_10b8e13d4(param_2 + 2);
    }
  }
  ppcVar5 = (code **)auStack_b8;
  func_0x0001080e8dd4();
  func_0x00010b9208e4(uStack_58);
  if ((bool)uVar3) {
    return ppcVar5;
  }
  ___stack_chk_fail();
  func_0x00010b920908();
  puVar6 = (undefined8 *)0x20;
  uStack_148 = extraout_x8_00;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110d765f0;
  plVar7 = (long *)0xa8;
  __Znwm();
  pcVar12 = (code *)(plVar7 + 3);
  *(long *)pcVar12 = 0x32aaaba7;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0x3cb0b1bb;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0;
  *plVar7 = (long)&PTR_DAT_110d76640;
  pcStack_1e0 = (code *)(puVar6 + 3);
  *(long **)pcStack_1e0 = plVar7;
  puStack_1d8 = puVar6;
  func_0x00010b8fd0f0();
  FUN_10b9a8ad8(&uStack_1e1);
  plVar14 = *pplVar9;
  lStack_1f0 = *(long *)(pcVar8 + 0x18);
  if ((lStack_1f0 != 0) && (*(long *)(lStack_1f0 + 0x10) != 0)) {
    do {
      func_0x00010b9208f8();
      lStack_1f0 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  do {
    func_0x00010b920988();
  } while (extraout_w10 != 0);
  pcStack_1c8 = pcVar8;
  FUN_10b91eb88(auStack_1c0,param_5,param_7);
  puStack_180 = puStack_1d8;
  pcStack_188 = pcStack_1e0;
  if (puStack_1d8 != (undefined8 *)0x0) {
    do {
      func_0x00010b920930();
    } while (extraout_w10_00 != 0);
  }
  pcStack_178 = FUN_10b91f624;
  ppuStack_170 = &PTR_FUN_110d76498;
  puVar6 = (undefined8 *)0x50;
  __Znwm();
  *puVar6 = pcStack_1c8;
  pcStack_1c8 = (code *)0x0;
  FUN_10b91fac4(puVar6 + 1,auStack_1c0);
  puVar6[9] = puStack_180;
  puVar6[8] = pcStack_188;
  pcStack_188 = (code *)0x0;
  puStack_180 = (undefined8 *)0x0;
  puStack_168 = puVar6;
  func_0x0001080d3888(plVar14,&lStack_1f0,&pcStack_178);
  (*(code *)*ppuStack_170)(&ppuStack_170);
  FUN_10b91eb94(&pcStack_1c8);
  func_0x00010b920ac8();
  plVar14 = plVar7;
  FUN_10b920060(plVar7,param_4);
  if ((int)plVar14 == 0) {
    auStack_1c0[0] = 1;
    plStack_1d0 = plVar7;
    pcStack_1c8 = pcVar12;
    __ZNSt3__15mutex4lockEv(pcVar12);
    __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(plVar7,&pcStack_1c8);
    param_4 = plVar7 + 2;
    lVar11 = *param_4;
    pcStack_178 = (code *)0x0;
    __ZNSt13exception_ptrD1Ev(&pcStack_178);
    if (lVar11 != 0) goto LAB_10b91eb74;
    *ppcVar5 = (code *)plVar7[0x12];
    pcVar8 = (code *)plVar7[0x13];
    ppcVar5[2] = (code *)plVar7[0x14];
    ppcVar5[1] = pcVar8;
    plVar7[0x12] = 0;
    func_0x0001090eb46c(&pcStack_1c8);
    func_0x00010b920858(&plStack_1d0);
    plVar7 = (long *)0x0;
  }
  else {
    FUN_10b99f5f8(&pcStack_1c8,&UNK_10f7cdbde);
    *ppcVar5 = (code *)0x2;
    ppcVar5[1] = pcStack_1c8;
    pcStack_1c8 = (code *)0x0;
    func_0x000104bda960(0);
  }
  FUN_10b9a8b40(&uStack_1e1);
  if (plVar7 != (long *)0x0) {
    plVar14 = plVar7 + 1;
    do {
      lVar11 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  ppcVar5 = &pcStack_1e0;
  FUN_10b920830(ppcVar5);
  func_0x00010b9208e4(uStack_148);
  if ((bool)uVar3) {
    return ppcVar5;
  }
  ___stack_chk_fail();
LAB_10b91eb74:
  __ZNSt13exception_ptrC1ERKS_(&pcStack_178,param_4);
  ppcVar5 = &pcStack_178;
  __ZSt17rethrow_exceptionSt13exception_ptr();
  *ppcVar5 = (code *)(ppcVar5 + 3);
  ppcVar5[2] = (code *)0x2;
  ppcVar5[1] = (code *)0x0;
  FUN_10b91f390();
  return ppcVar5;
}


