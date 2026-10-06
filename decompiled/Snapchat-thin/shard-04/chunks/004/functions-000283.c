/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10345fde4; end: 10345fe1b;  */

void FUN_10345fde4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10345fe1c; end: 10345febf;  */

undefined8 FUN_10345fe1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_10345ff00(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10345fec0; end: 10345fecf;  */

void FUN_10345fec0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345fed0; end: 10345fef3;  */

void FUN_10345fed0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345fef4; end: 10345feff;  */

void FUN_10345fef4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345ff00; end: 10346008b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345ff00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_1130819a8) + _DAT_113081858);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  FUN_103461f04(0);
  func_0x000107c613fc();
  FUN_103461ce8(uVar2,uVar1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_103460108;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10345fde4;
  puStack_58 = &UNK_110658940;
  uStack_48 = uVar2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar1 = 0;
  func_0x000100b5e6b0(0);
  func_0x000107c610f8();
  func_0x000103f95298(puVar3,uVar1);
  uVar1 = 0;
  func_0x000103f951ec(0);
  func_0x000107c610f8();
  func_0x000103f94fac(puVar3,uVar1);
  func_0x000107c61574(uVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 10346008c; end: 103460107;  */

void FUN_10346008c(undefined8 param_1)

{
  if (lRam0000000112f6dc30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e767f64);
  return;
}



/* Entry: 103460108; end: 10346012b;  */

void FUN_103460108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10346012c; end: 1034601ef;  */

undefined8 FUN_10346012c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_1034602f0(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1034601f0; end: 1034602af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034601f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_30;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + _DAT_113039058) + _DAT_113038f68);
  lVar2 = 0;
  FUN_103465310();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f6e278) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f6e270) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1034602b0; end: 1034602bf;  */

void FUN_1034602b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1034602c0; end: 1034602e3;  */

void FUN_1034602c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034602e4; end: 1034602ef;  */

void FUN_1034602e4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1034602f0; end: 1034604bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034602f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_a0;
  func_0x000107c5c494();
  func_0x000107c61180();
  lVar1 = 0;
  func_0x0001034660b0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f6e2e0) = param_1;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  lVar1 = 0;
  FUN_103465aa8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(long **)(lVar2 + _DAT_112f6e2a8) = plVar3;
  puVar6 = PTR_s_init_1125d9248;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  func_0x000107c61174(plVar3);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar6);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_110658990;
  func_0x000107c613fc(&UNK_110658990,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  pcStack_80 = FUN_103460538;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x103460278;
  puStack_88 = &UNK_1106589a8;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000103f6ac14(0);
  func_0x000107c610f8();
  func_0x000107c61174(plVar4);
  func_0x000103f6aaa0(puVar5,plVar4);
  uVar8 = 0;
  func_0x000103f6b0f0(0);
  func_0x000107c610f8();
  func_0x000103f6afdc(puVar5,uVar8);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(plVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  return;
}



/* Entry: 1034604bc; end: 103460537;  */

void FUN_1034604bc(undefined8 param_1)

{
  if (lRam0000000112f6dd00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e767fc8);
  return;
}



/* Entry: 103460538; end: 10346055b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103460538(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113039058) + _DAT_113038f68);
  lVar2 = 0;
  FUN_103465310();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f6e278) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f6e270) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10346055c; end: 10346061f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10346055c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  uVar1 = *(undefined8 *)(param_2 + _DAT_113082888);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 103460620; end: 1034607d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103460620(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081828);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&puStack_78);
  func_0x000107c61574(uVar4);
  func_0x0001000a8868(&puStack_78,puStack_60);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113082768);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c61574(uVar4);
  uVar4 = uStack_48;
  func_0x000107c4aea4(uStack_48);
  func_0x000107c615e8(uStack_48);
  uVar1 = 0;
  (**(code **)((long)pcStack_58 + 8))(0,uVar4,puStack_60,pcStack_58);
  func_0x0001000834e4(&puStack_78);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_58 = FUN_1034607d4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100c7ef5c;
  puStack_60 = &UNK_1106589e8;
  ppuVar3 = &puStack_78;
  uStack_50 = uVar1;
  func_0x000107c60bc4(ppuVar3);
  uVar4 = uStack_50;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001005c56dc(0);
  func_0x000107c610f8();
  func_0x00010074cd20(puVar2,uVar4);
  uVar4 = 0;
  func_0x0001044f3620(0);
  func_0x000107c610f8();
  func_0x0001044f350c(puVar2,uVar4);
  func_0x000107c61574(uVar1);
  return puVar2;
}



/* Entry: 1034607d4; end: 1034607f7;  */

undefined8 FUN_1034607d4(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 1034607f8; end: 103460813;  */

void FUN_1034607f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103460814; end: 10346082f;  */

/* WARNING: Possible PIC construction at 0x000103460820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103460824) */

void FUN_103460814(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103460830; end: 10346087b;  */

void FUN_103460830(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10346087c; end: 1034608f7;  */

void FUN_10346087c(undefined8 param_1)

{
  if (lRam0000000112f6ddd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e76802c);
  return;
}



/* Entry: 1034608f8; end: 10346091b;  */

void FUN_1034608f8(undefined8 *param_1,undefined8 param_2)

{
  FUN_103460620();
  *param_1 = param_2;
  return;
}



/* Entry: 10346091c; end: 10346093b;  */

void FUN_10346091c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10346093c,0,0);
  return;
}



/* Entry: 10346093c; end: 103460a33;  */

void FUN_10346093c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c434f0();
  if (lVar1 != 7) {
    func_0x0001000d224c(unaff_x22 + 0x10);
    lVar1 = *(long *)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x40) = lVar1;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
      func_0x000107c4045c();
      func_0x000107c61180();
      *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
      lVar4 = lVar1;
      func_0x000107c4b1bc();
      func_0x000107c61180();
      if (lVar4 == 0) {
        plVar3 = (long *)0x100;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x50) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_103460a34;
        lVar1 = *(long *)(unaff_x22 + 0x38);
        lVar4 = *(long *)(unaff_x22 + 0x28);
        lVar5 = *(long *)(unaff_x22 + 0x18);
        plVar3[0x16] = *(long *)(unaff_x22 + 0x30);
        plVar3[0x17] = lVar1;
        plVar3[0x14] = lVar5;
        plVar3[0x15] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_103461294,0,0);
        return;
      }
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lVar1);
      uVar2 = 1;
      goto LAB_1034609d8;
    }
  }
  lVar4 = 0;
  uVar2 = 0;
LAB_1034609d8:
                    /* WARNING: Could not recover jumptable at 0x0001034609ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar4,uVar2);
  return;
}



/* Entry: 103460a34; end: 103460a83;  */

void FUN_103460a34(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103460a84,0,0);
  return;
}



/* Entry: 103460a84; end: 103460af3;  */

void FUN_103460a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  if (*(long *)(unaff_x22 + 0x58) == 0) {
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar2);
    uVar2 = 0;
  }
  else {
    func_0x000107c55d64(uVar2,param_2,*(long *)(unaff_x22 + 0x58),uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x000103460af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,0);
  return;
}



/* Entry: 103460af4; end: 103460c27;  */

undefined1  [16] FUN_103460af4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar3 = lStack_48;
  lVar1 = param_1;
  func_0x000107c434dc();
  func_0x000107c61180();
  uVar4 = param_2;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    uVar4 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar2 = lVar3;
  func_0x000107c44fb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000107c3f694();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c44520();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      func_0x0001000d224c(&lStack_48);
      lVar2 = lStack_48;
      func_0x000107c44fbc();
      func_0x000107c61180();
      func_0x000107c61170(lStack_48);
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) goto LAB_103460b7c;
    }
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
LAB_103460b7c:
    lVar3 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 103460c28; end: 103460c4b;  */

void FUN_103460c28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 **)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103460c4c,0,0);
  return;
}



/* Entry: 103460c4c; end: 103460e1f;  */

void FUN_103460c4c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x22;
  code *pcVar12;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = 0;
  FUN_1034617c8(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c614e8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  func_0x000107c415a4();
  func_0x000107c61180();
  func_0x000107c51820();
  uVar4 = CONCAT17(in_register_00005007,
                   CONCAT16(in_register_00005006,
                            CONCAT15(in_register_00005005,
                                     CONCAT14(in_register_00005004,
                                              CONCAT13(in_register_00005003,
                                                       CONCAT12(in_register_00005002,
                                                                CONCAT11(in_register_00005001,in_b0)
                                                               ))))));
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126aebd8;
  func_0x000107c61168();
  func_0x000107c5fadc(uVar7,uVar2);
  func_0x000107c51834();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xc0) = puVar6;
  func_0x000107c61170(uVar7);
  plVar11 = (long *)(unaff_x22 + 0x90);
  *plVar11 = lVar1;
  func_0x000107c61174(puVar6);
  func_0x000107c6157c(lVar1);
  func_0x000107c5fb18();
  *(undefined8 *)(unaff_x22 + 0x10) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x20) = 2;
  *(long **)(unaff_x22 + 0x28) = plVar11;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = 0x17;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  uVar7 = 0x112d36850;
  lVar8 = 0;
  FUN_1034617c8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined4 *)(unaff_x22 + 0x78) = 0;
  lVar9 = lVar8;
  func_0x00010488bd80();
  *(long *)(unaff_x22 + 200) = lVar9;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar7;
  uVar10 = *(undefined8 *)(lVar1 + 0x40);
  lVar3 = *(long *)(lVar1 + 0x48);
  FUN_103461808(lVar1 + 0x28,uVar10);
  pcVar12 = *(code **)(lVar3 + 0x10);
  func_0x000107c6157c(uVar7);
  (*pcVar12)((undefined8 *)(unaff_x22 + 0x10),0x10346182c,uVar7,uVar10,lVar3);
  func_0x000107c615e8();
  func_0x000107c61574(uVar7);
  plVar11 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_103460e20;
  plVar11[7] = lVar9;
  plVar11[8] = lVar8;
  plVar11[6] = unaff_x22 + 0x80;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 103460e20; end: 103460e67;  */

void FUN_103460e20(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103460e68,0,0);
  return;
}



/* Entry: 103460e68; end: 103460fc7;  */

void FUN_103460e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  cVar3 = *(char *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  if (cVar3 == '\x01') {
    func_0x000107c61170(uVar7);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar1);
    func_0x000101769bb8(unaff_x22 + 0x10);
    func_0x000101c17ab4(uVar6,1);
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    FUN_1034610e4();
    uVar8 = param_1;
    func_0x000107c415a4(uVar4);
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(uVar4);
    uVar4 = uVar6;
    func_0x000107c51854(param_1,param_2,uVar8,uVar6);
    func_0x000107c61180();
    func_0x000107c61574(uVar1);
    func_0x000101769bb8(unaff_x22 + 0x10);
    func_0x000107c61170(puVar5);
    func_0x000101c17ab4(uVar6,cVar3);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x000103460fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 103460fc8; end: 10346100b;  */

void FUN_103460fc8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_103461808(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10346100c; end: 1034610e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346100c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  undefined1 uStack_48;
  
  lVar1 = _DAT_11307d350;
  bVar2 = ((uint)param_3 & 0xff00) != 0x100;
  if (bVar2) {
    func_0x000107c61428((long)param_1 + _DAT_11307d350,auStack_68,0,0);
    puStack_50 = *(undefined **)((long)param_1 + lVar1);
    func_0x000107c61174();
  }
  else {
    plVar3 = param_1;
    func_0x000101769b78();
    puVar4 = &UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,plVar3,0,0);
    *plVar3 = (long)param_1;
    plVar3[1] = param_2;
    *(char *)(plVar3 + 2) = (char)param_3;
    puStack_50 = puVar4;
    func_0x000103294b04(param_1,param_2,param_3,1);
  }
  uStack_48 = !bVar2;
  func_0x00010488e5d4(&puStack_50);
  func_0x000101c17ab4(puStack_50,uStack_48);
  return;
}



/* Entry: 1034610e4; end: 10346111b;  */

undefined1  [16] FUN_1034610e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    FUN_10346111c();
    *(undefined8 *)(unaff_x20 + 0x58) = param_1;
    *(undefined8 *)(unaff_x20 + 0x60) = param_2;
    *(undefined1 *)(unaff_x20 + 0x68) = 0;
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return *(undefined1 (*) [16])(unaff_x20 + 0x58);
}



/* Entry: 10346111c; end: 103461213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10346111c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    uVar4 = 0x404e000000000000;
    uVar5 = 0x404e000000000000;
  }
  else {
    lVar3 = lStack_38;
    func_0x000107c4abc0();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    plVar1 = (long *)(lVar3 + _DAT_1130390a8);
    if (*(long *)(lVar3 + _DAT_1130390b8) != 0) {
      plVar1 = (long *)(*(long *)(lVar3 + _DAT_1130390b8) + _DAT_113039220);
    }
    lVar2 = *plVar1;
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(lVar2 + _DAT_113039158);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_113039188);
    uVar5 = ((undefined8 *)(lVar3 + _DAT_113039188))[1];
    func_0x000107c61170(lVar3);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 103461214; end: 103461277;  */

void FUN_103461214(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000103461834(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103461278; end: 103461293;  */

void FUN_103461278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103461294,0,0);
  return;
}



/* Entry: 103461294; end: 10346159b;  */

void FUN_103461294(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c434f0();
  if (lVar4 == 0) {
    uVar13 = *(ulong *)(unaff_x22 + 0xa8);
    uVar6 = *(ulong *)(unaff_x22 + 0xb0);
    if (uVar6 == 0) {
      if (uVar13 == 0) goto LAB_1034612c0;
    }
    else {
      func_0x000107c49a18();
      if (((uVar6 & 1) != 0) || (uVar13 == 0)) goto LAB_1034612c0;
      uVar13 = *(ulong *)(unaff_x22 + 0xa8);
    }
    func_0x000107c61174();
    uVar6 = uVar13;
    func_0x000107c434c4();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c5faec();
    uVar9 = param_2;
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(param_2);
    uVar6 = uVar7 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = param_2 >> 0x38 & 0xf;
    }
    param_2 = uVar9;
    if (uVar6 != 0) {
      uVar6 = uVar13;
      func_0x000107c45060();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103461598);
        (*pcVar3)();
      }
      uVar7 = uVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar6);
      uVar2 = (uint)(uVar9 >> 0x20);
      uVar11 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar11 == 0) {
          param_2 = uVar9;
          func_0x00010006c090(uVar7);
          uVar6 = uVar9 & 0xff000000000000;
          uVar9 = param_2;
          if (uVar6 != 0) {
LAB_103461444:
            uVar6 = uVar13;
            func_0x000107c45060();
            func_0x000107c61180();
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10346159c);
              (*pcVar3)();
            }
            uVar7 = uVar6;
            func_0x000107c5ee30();
            uVar10 = uVar9;
            func_0x000107c61170(uVar6);
            *(ulong *)(unaff_x22 + 0xc0) = uVar7;
            *(ulong *)(unaff_x22 + 200) = uVar9;
            func_0x000107c434c4();
            func_0x000107c61180();
            uVar6 = uVar13;
            func_0x000107c5faec();
            func_0x000107c61170(uVar13);
            *(ulong *)(unaff_x22 + 0xd0) = uVar10;
            func_0x0001000d224c(unaff_x22 + 0x98);
            uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
            *(undefined8 *)(unaff_x22 + 0xd8) = uVar14;
            func_0x000107c5ee20(uVar7,uVar9);
            *(ulong *)(unaff_x22 + 0xe0) = uVar7;
            func_0x000107c5fadc(uVar6,uVar10);
            *(ulong *)(unaff_x22 + 0xe8) = uVar6;
            *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
            *(long *)(unaff_x22 + 0x10) = unaff_x22;
            *(code **)(unaff_x22 + 0x18) = FUN_10346159c;
            lVar4 = unaff_x22 + 0x10;
            func_0x000107c61448(lVar4,0);
            uVar8 = 0x112f6df48;
            func_0x0001000285a8(0x112f6df48,&UNK_10dbcb508);
            *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
            *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
            *(code **)(unaff_x22 + 0x60) = FUN_103460fc8;
            *(undefined **)(unaff_x22 + 0x68) = &UNK_110658a38;
            *(long *)(unaff_x22 + 0x70) = lVar4;
            func_0x000107c4b704(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
            return;
          }
        }
        else {
          func_0x00010006c090(uVar7);
          param_2 = uVar9;
          if ((long)(int)uVar7 != (long)uVar7 >> 0x20) goto LAB_103461444;
        }
      }
      else if (uVar11 == 2) {
        lVar4 = *(long *)(uVar7 + 0x10);
        lVar1 = *(long *)(uVar7 + 0x18);
        func_0x00010006c090(uVar7);
        param_2 = uVar9;
        if (lVar4 != lVar1) goto LAB_103461444;
      }
      else {
        func_0x00010006c090(uVar7);
        param_2 = uVar9;
      }
    }
    func_0x000107c61170(uVar13);
  }
LAB_1034612c0:
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  FUN_103460af4();
  *(ulong *)(unaff_x22 + 0xf0) = param_2;
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103461360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103461754;
  plVar12 = *(long **)(unaff_x22 + 0xb8);
  plVar5[0x14] = param_2;
  plVar5[0x15] = (long)plVar12;
  plVar5[0x13] = lVar4;
  plVar5[0x16] = *plVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103460c4c,0,0);
  return;
}



/* Entry: 10346159c; end: 1034615db;  */

void FUN_10346159c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1034615dc,0,0);
  return;
}



/* Entry: 1034615dc; end: 103461753;  */

void FUN_1034615dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  if (lVar7 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c6142c(uVar1);
    func_0x00010006c090(uVar2,uVar3);
    lVar6 = 0;
  }
  else {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    FUN_1034610e4();
    uVar5 = 0;
    uVar8 = param_1;
    FUN_1034617c8(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c614e8();
    func_0x000107c415a4();
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(uVar5);
    lVar6 = lVar7;
    func_0x000107c51854(param_1,param_2,uVar8,lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(uVar1);
    func_0x00010006c090(uVar2,uVar3);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000103461750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6);
  return;
}



/* Entry: 103461754; end: 10346179f;  */

void FUN_103461754(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xf0);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010346179c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Entry: 1034617a0; end: 1034617af;  */

long FUN_1034617a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1034617b0; end: 1034617c7;  */

void FUN_1034617b0(long param_1)

{
  func_0x000103461834(param_1 + 0x20);
  return;
}



/* Entry: 1034617c8; end: 103461807;  */

void FUN_1034617c8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103461808; end: 10346186b;  */

long * FUN_103461808(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10346186c; end: 1034618bf;  */

void FUN_10346186c(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034618c0; end: 1034618eb; -[_TtC30LensCarouselPreviewIntegration47SCPreviewScopedPreviewFilterIconProviderService init] */

void FUN_1034618c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.SCPreviewScopedPreviewFilterIconProviderService"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034618ec);
  (*pcVar1)();
}



/* Entry: 1034618ec; end: 1034618ef;  */

void FUN_1034618ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034618f0; end: 1034618ff; -[_TtC30LensCarouselPreviewIntegration47SCPreviewScopedPreviewFilterIconProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034618f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6df50));
  return;
}



/* Entry: 103461900; end: 10346195f; -[_TtC30LensCarouselPreviewIntegration50SCSnapEditorScopedPreviewFilterIconProviderService init] */

void FUN_103461900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.SCSnapEditorScopedPreviewFilterIconProviderService"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346192c);
  (*pcVar1)();
}



/* Entry: 103461960; end: 10346196f; -[_TtC30LensCarouselPreviewIntegration50SCSnapEditorScopedPreviewFilterIconProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103461960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6df58));
  return;
}



/* Entry: 103461970; end: 1034619af;  */

void FUN_103461970(void)

{
  func_0x000107c61168(&PTR_PTR_1128dbca0);
  return;
}



/* Entry: 1034619b0; end: 1034619b3;  */

void FUN_1034619b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034619b4; end: 103461a13; -[_TtC30LensCarouselPreviewIntegration32PreviewFilterIconProviderService init] */

void FUN_1034619b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.PreviewFilterIconProviderService",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034619e0);
  (*pcVar1)();
}



/* Entry: 103461a14; end: 103461a23; -[_TtC30LensCarouselPreviewIntegration32PreviewFilterIconProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103461a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6dfb0));
  return;
}



/* Entry: 103461a24; end: 103461a43;  */

void FUN_103461a24(void)

{
  func_0x000107c61168(&PTR_PTR_1128dbe20);
  return;
}



/* Entry: 103461a44; end: 103461ca7;  */

undefined8 FUN_103461a44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    func_0x00010006e7f4(&uStack_60);
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    goto LAB_103461c78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f27778;
  func_0x000107c5faec();
  ppuStack_98 = ppuVar2;
  puStack_90 = param_2;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_2);
  puVar5 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_88,&ppuStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_3[2] == 0) {
LAB_103461b14:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar3 = auStack_88;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103461b14;
    }
    puVar5 = &uStack_60;
    func_0x0001000bb420(param_3[7] + (long)puVar3 * 0x20);
    func_0x000107c6142c(param_2);
    param_2 = param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_3);
  func_0x0001007bbff0(auStack_88);
  puVar1 = PTR___sypN_11034f1a8;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar4 = 0;
    FUN_103461ca8(0,0x112e91a30,&PTR_PTR_1126aa6c0);
    puVar5 = &uStack_60;
    func_0x000107c6147c(auStack_88,puVar5,puVar1 + 8,uVar4,6);
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f27798;
  func_0x000107c5faec();
  ppuStack_98 = ppuVar2;
  puStack_90 = puVar5;
  func_0x000107c61434(puVar5);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_88,&ppuStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_3[2] == 0) {
LAB_103461c10:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar3 = auStack_88;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103461c10;
    }
    func_0x0001000bb420(param_3[7] + (long)puVar3 * 0x20,&uStack_60);
    func_0x000107c6142c(puVar5);
    puVar5 = param_3;
  }
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(param_3);
  func_0x0001007bbff0(auStack_88);
  if (lStack_48 != 0) {
    uVar4 = 0;
    FUN_103461ca8(0,0x112e91a20,&PTR_PTR_1126dd748);
    func_0x000107c6147c(auStack_88,&uStack_60,puVar1 + 8,uVar4,6);
    return param_1;
  }
LAB_103461c78:
  func_0x00010006e7f4(&uStack_60);
  return param_1;
}



/* Entry: 103461ca8; end: 103461ce7;  */

void FUN_103461ca8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103461ce8; end: 103461d9b;  */

void FUN_103461ce8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lStack_38;
  
  lVar1 = 0;
  func_0x000103466efc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5a8a4(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61574(param_1);
  *(long *)(unaff_x20 + 0x10) = lVar1;
  return;
}



/* Entry: 103461d9c; end: 103461dc7; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler willActivateCarouselWithActivationSource:] */

void FUN_103461d9c(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_103466f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103461dc8; end: 103461dcb; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler didActivateCarousel] */

void FUN_103461dc8(void)

{
  return;
}



/* Entry: 103461dcc; end: 103461dcf; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler didFailActivateCarousel] */

void FUN_103461dcc(void)

{
  return;
}



/* Entry: 103461dd0; end: 103461dd3; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler willDeactivateCarousel] */

void FUN_103461dd0(void)

{
  return;
}



/* Entry: 103461dd4; end: 103461dd7; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler didDeactivateCarousel] */

void FUN_103461dd4(void)

{
  return;
}



/* Entry: 103461dd8; end: 103461ebb; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler processWithEvent:] */

void FUN_103461dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000104505ba4(FUN_103466b18,0,0x103466b1c,0,0x103461f2c,uVar1,0x103461f30,uVar1,
                      FUN_103461f24,uVar1,FUN_103466df0,0,0x103466df4,0,0x103461f28,uVar1,
                      FUN_103466eb8,0,0x103466ebc,0,0x103466ec0,0,0x103466ec4,0);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103461ebc; end: 103461ebf; -[_TtC30LensCarouselPreviewIntegration42LensCarouselPreviewActivationEventsHandler didApplyLens:index:originalLensIndex:] */

void FUN_103461ebc(void)

{
  return;
}



/* Entry: 103461ec0; end: 103461ee3;  */

void FUN_103461ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103461ee4; end: 103461f03;  */

/* WARNING: Possible PIC construction at 0x000103466b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103466bb0) */
/* WARNING: Removing unreachable block (ram,0x000103466bf4) */
/* WARNING: Removing unreachable block (ram,0x000103466bbc) */
/* WARNING: Removing unreachable block (ram,0x000103466b9c) */
/* WARNING: Removing unreachable block (ram,0x000103466b6c) */
/* WARNING: Removing unreachable block (ram,0x000103466bcc) */

void FUN_103461ee4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001044f74f0(0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x0001044f6a10(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103461f04; end: 103461f23;  */

void FUN_103461f04(void)

{
  func_0x000107c61168(&PTR_PTR_112f6e020);
  return;
}



/* Entry: 103461f24; end: 103461f33;  */

/* WARNING: Possible PIC construction at 0x000103466d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103466d8c) */
/* WARNING: Removing unreachable block (ram,0x000103466dd0) */
/* WARNING: Removing unreachable block (ram,0x000103466d98) */
/* WARNING: Removing unreachable block (ram,0x000103466d80) */
/* WARNING: Removing unreachable block (ram,0x000103466d50) */
/* WARNING: Removing unreachable block (ram,0x000103466da8) */

void FUN_103461f24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100c7f35c(0);
  func_0x000107c49c88(param_1);
  func_0x0001044f76f4();
  func_0x000107c4d664(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103461f34; end: 103461f93; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewDataProviderController init] */

void FUN_103461f34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.LensCarouselPreviewDataProviderController",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103461f60);
  (*pcVar1)();
}



/* Entry: 103461f94; end: 103461ffb; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewDataProviderController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103461fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103461fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103461f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6e080));
  return;
}



/* Entry: 103461ffc; end: 10346201b;  */

void FUN_103461ffc(void)

{
  func_0x000107c61168(&PTR_PTR_1128dbee0);
  return;
}



/* Entry: 10346201c; end: 10346211b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346201c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f6e080);
  func_0x000107c4e030();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_110658b10;
    func_0x000107c613fc(&UNK_110658b10,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_103462c5c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100b5fdac;
    puStack_48 = &UNK_110658b28;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar5 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar5);
    func_0x000107c61170(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346211c);
  (*pcVar1)();
}



/* Entry: 10346211c; end: 1034621c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346211c(int param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c3ebcc();
  if (param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    func_0x000107c3d740(*(undefined8 *)(param_2 + _DAT_112f6e080));
    FUN_103462278();
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    func_0x000107c4ff64(*(undefined8 *)(param_2 + _DAT_112f6e080));
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1034621c8; end: 1034621cf;  */

void FUN_1034621c8(void)

{
  return;
}



/* Entry: 1034621d0; end: 10346222b;  */

void FUN_1034621d0(void)

{
  FUN_10346201c();
  return;
}



/* Entry: 10346222c; end: 103462277;  */

void FUN_10346222c(void)

{
  return;
}



/* Entry: 103462278; end: 103462987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103462278(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  undefined *in_x3;
  undefined *puVar20;
  long *plVar21;
  long unaff_x20;
  long lVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  long alStack_b8 [3];
  long *plStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  plVar5 = *(long **)(unaff_x20 + _DAT_112f6e080);
  plVar19 = plVar5;
  func_0x000107c40f30();
  func_0x000107c61180();
  if (plVar19 != (long *)0x0) {
    uVar6 = 0;
    FUN_1034637ac(0,0x112d68fb8,&PTR_PTR_1126d8928);
    plVar7 = plVar19;
    func_0x000107c5fc54(plVar19,uVar6);
    func_0x000107c61170(plVar19);
    puVar8 = (undefined8 *)(unaff_x20 + _DAT_112f6e088);
    func_0x0001000a8868(puVar8,puVar8[3]);
    puVar20 = (undefined *)*puVar8;
    uVar6 = 0;
    func_0x000103467350();
    ppuStack_70 = &PTR_DAT_1106591a0;
    plVar19 = alStack_b8;
    puStack_90 = puVar20;
    uStack_78 = uVar6;
    FUN_10345c42c(&puStack_90,plVar19);
    func_0x000107c6157c(puVar20);
    func_0x0001000834e4(&puStack_90);
    if ((ulong)plVar7 >> 0x3e == 0) {
      plVar24 = (long *)((long *)((ulong)plVar7 & 0xffffffffffffff8))[2];
    }
    else {
      plVar24 = (long *)((ulong)plVar7 & 0xffffffffffffff8);
      if (((ulong)plVar7 & 0x8000000000000000) != 0) {
        plVar24 = plVar7;
      }
      func_0x000107c60480();
    }
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (plVar24 != (long *)0x0) {
      func_0x0001019d4adc(0,(ulong)plVar24 & ((long)plVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)plVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103462988);
        (*pcVar4)();
      }
      plVar25 = (long *)0x0;
      do {
        if (((ulong)plVar7 & 0xc000000000000001) == 0) {
          if ((long)plVar25 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10346296c);
            (*pcVar4)();
          }
          if (*(long **)(((ulong)plVar7 & 0xffffffffffffff8) + 0x10) <= plVar25) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103462970);
            (*pcVar4)();
          }
          plVar21 = (long *)plVar7[(long)((long)plVar25 + 4)];
          func_0x000107c61174();
        }
        else {
          in_x3 = (undefined *)0x112d68fb8;
          plVar21 = plVar25;
          func_0x0001034631ac(plVar25,plVar7,&PTR_PTR_1126d8928);
        }
        plVar9 = alStack_b8;
        plVar19 = plStack_a0;
        func_0x0001000a8868(plVar9,plStack_a0);
        plVar10 = *(long **)(*plVar9 + 0x10);
        func_0x000107c434f8();
        func_0x000107c61180();
        plVar9 = plVar21;
        if (plVar10 == (long *)0x0) {
LAB_10346241c:
          plVar11 = plVar21;
          func_0x000107c4a664();
          if ((int)plVar11 == 0) {
            plVar9 = (long *)PTR_PTR_1126b0820;
            func_0x000107c610f8();
            func_0x000107c453e4();
            plVar10 = plVar21;
            func_0x000107c434c4();
            func_0x000107c61180();
            plVar11 = plVar19;
            if (plVar10 == (long *)0x0) {
              plVar10 = plVar21;
              func_0x000107c434dc(plVar21);
              func_0x000107c61180();
              plVar11 = plVar19;
            }
            plVar12 = plVar10;
            func_0x000107c5faec();
            func_0x000107c61170(plVar10);
            plVar19 = plVar11;
            func_0x000107c5fadc(plVar12,plVar11);
            func_0x000107c6142c(plVar11);
            plVar10 = plVar9;
            func_0x000107c5e650();
            func_0x000107c61180();
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plVar12);
            func_0x000107c434f0();
            plVar11 = plVar10;
            func_0x000107c5e848();
            func_0x000107c61180();
            func_0x000107c61170(plVar10);
            func_0x000107c4a4c0(plVar21);
            plVar9 = plVar11;
            func_0x000107c5e608();
            func_0x000107c61180();
            func_0x000107c61170(plVar11);
            plVar11 = plVar9;
            func_0x000107c3ecc8();
            func_0x000107c61180();
            func_0x000107c61170(plVar21);
          }
          else {
            FUN_1034671c0();
          }
        }
        else {
          plVar11 = plVar10;
          func_0x000107c3e1cc();
          func_0x000107c61180();
          func_0x000107c61170(plVar10);
          if (plVar11 == (long *)0x0) goto LAB_10346241c;
        }
        func_0x000107c61170(plVar9);
        uVar3 = *(ulong *)(puVar20 + 0x10);
        plVar21 = (long *)(uVar3 + 1);
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar3) {
          plVar19 = plVar21;
          func_0x0001019d4adc(1 < *(ulong *)(puVar20 + 0x18),plVar21,1);
        }
        plVar25 = (long *)((long)plVar25 + 1);
        *(long **)(puVar20 + 0x10) = plVar21;
        *(long **)(puVar20 + uVar3 * 8 + 0x20) = plVar11;
      } while (plVar24 != plVar25);
    }
    func_0x0001000834e4(alStack_b8);
    if ((ulong)plVar7 >> 0x3e == 0) {
      plVar24 = (long *)((long *)((ulong)plVar7 & 0xffffffffffffff8))[2];
    }
    else {
      plVar24 = (long *)((ulong)plVar7 & 0xffffffffffffff8);
      if (((ulong)plVar7 & 0x8000000000000000) != 0) {
        plVar24 = plVar7;
      }
      func_0x000107c60480();
    }
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61434(puVar20);
    if (plVar24 != (long *)0x0) {
      puVar26 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
      puVar2 = puVar26;
      if ((undefined *)0x7fffffffffffffff < puVar20) {
        puVar2 = puVar20;
      }
      lVar22 = 4;
      puVar1 = PTR___sytN_11034f1b0 + 8;
      do {
        puVar23 = (undefined *)(lVar22 + -4);
        if (((ulong)plVar7 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)plVar7 & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103462964);
            (*pcVar4)();
          }
          puVar13 = (undefined *)plVar7[lVar22];
          func_0x000107c61174();
        }
        else {
          in_x3 = (undefined *)0x112d68fb8;
          puVar13 = puVar23;
          plVar19 = plVar7;
          func_0x0001034631ac(puVar23,plVar7,&PTR_PTR_1126d8928);
        }
        plVar25 = (long *)(lVar22 + -3);
        if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103462960);
          (*pcVar4)();
        }
        if ((ulong)puVar20 >> 0x3e == 0) {
          puVar14 = *(undefined **)(puVar26 + 0x10);
        }
        else {
          puVar14 = puVar2;
          func_0x000107c60480();
        }
        if (puVar23 == puVar14) {
          func_0x000107c6142c(puVar20);
          func_0x000107c6142c(plVar7);
          func_0x000107c61170(puVar13);
          goto LAB_103462904;
        }
        if (((ulong)puVar20 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar26 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103462968);
            (*pcVar4)();
          }
          puVar23 = *(undefined **)(puVar20 + lVar22 * 8);
          func_0x000107c61174();
        }
        else {
          in_x3 = (undefined *)0x112d4d630;
          plVar19 = (long *)puVar20;
          func_0x0001034631ac(puVar23,puVar20,&PTR_PTR_1126ae6a8);
        }
        puVar14 = puVar13;
        func_0x000107c434f0();
        if (puVar14 == (undefined *)0x7) {
          func_0x000107c61170(puVar23);
          func_0x000107c61170(puVar13);
        }
        else {
          puVar14 = puVar13;
          func_0x000107c434dc();
          func_0x000107c61180();
          puVar17 = in_x3;
          if (puVar14 == (undefined *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(plVar19);
            puVar17 = in_x3;
          }
          plVar19 = plVar5;
          func_0x000107c40090();
          func_0x000107c61180();
          func_0x000107c61170(puVar14);
          if (plVar19 == (long *)0x0) {
            plVar21 = (long *)0x0;
          }
          else {
            plVar21 = plVar19;
            puVar17 = PTR___ss11AnyHashableVSHsWP_11034e450;
            func_0x000107c5f9e8(plVar19,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8);
            func_0x000107c61170(plVar19);
          }
          func_0x000107c61174();
          func_0x000107c61174();
          puVar15 = puVar13;
          puVar18 = puVar23;
          FUN_103461a44();
          puVar14 = &UNK_110658b10;
          func_0x000107c613fc(&UNK_110658b10,0x18,7);
          func_0x000107c61614(puVar14 + 0x10,unaff_x20);
          puVar16 = &UNK_110658b60;
          func_0x000107c613fc(&UNK_110658b60,0x40,7);
          *(undefined **)(puVar16 + 0x10) = puVar14;
          *(undefined **)(puVar16 + 0x18) = puVar15;
          *(undefined **)(puVar16 + 0x20) = puVar18;
          *(long **)(puVar16 + 0x28) = plVar21;
          *(undefined **)(puVar16 + 0x30) = puVar17;
          *(undefined **)(puVar16 + 0x38) = puVar23;
          func_0x000107c61174(puVar17);
          func_0x000107c61174(puVar23);
          func_0x000107c61174(puVar15);
          func_0x000107c61174(puVar18);
          func_0x000107c61174(plVar21);
          uVar6 = 0;
          plVar19 = (long *)0x3;
          in_x3 = (undefined *)0x4;
          func_0x0001001ca524(0,3,0x38,4,0,0,&UNK_10dbcb658,puVar16,puVar1);
          func_0x000107c61170(puVar23);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar17);
          func_0x000107c61170(plVar21);
          func_0x000107c61170(puVar18);
          func_0x000107c61170(puVar15);
          func_0x000107c61574(puVar16);
          func_0x000107c61574(uVar6);
        }
        lVar22 = lVar22 + 1;
      } while (plVar25 != plVar24);
    }
    func_0x000107c6142c(puVar20);
    func_0x000107c6142c(plVar7);
LAB_103462904:
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(unaff_x20);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_90 = puVar20;
    func_0x0001002a64a8(&puStack_90);
    func_0x000107c6142c(puVar20);
  }
  return;
}



/* Entry: 103462988; end: 103462ba7;  */

/* WARNING: Possible PIC construction at 0x000103462b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103462b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103462988(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  uVar3 = param_2;
  func_0x000107c434f0();
  if (lVar5 == 7) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f6e080);
  lVar5 = param_1;
  func_0x000107c434dc();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c40090();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    param_4 = PTR___ss11AnyHashableVSHsWP_11034e450;
    func_0x000107c5f9e8(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_2;
  FUN_103461a44();
  puVar1 = &UNK_110658b10;
  func_0x000107c613fc(&UNK_110658b10,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110658b88;
  func_0x000107c613fc(&UNK_110658b88,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(long *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(long *)(puVar2 + 0x28) = lVar5;
  *(undefined **)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(lVar5);
  func_0x0001001ca524(0,3,0x38,4,0,0,&UNK_10dbcb660,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103462ba8; end: 103462c33; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewDataProviderController filterCarouselOrderProvider:didReplaceFilterItem:withItem:atIndex:] */

/* WARNING: Possible PIC construction at 0x000103462c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103462c14) */

void FUN_103462ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10346363c(param_4,param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103462c34; end: 103462c5b; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewDataProviderController filterCarouselOrderProviderDidUpdateStacking:currentlyStackedFilters:] */

void FUN_103462c34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103462278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103462c5c; end: 103462c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103462c5c(int param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c3ebcc();
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c3d740(*(undefined8 *)(lVar1 + _DAT_112f6e080));
    FUN_103462278();
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c4ff64(*(undefined8 *)(lVar1 + _DAT_112f6e080));
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 103462ca0; end: 103462d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103462ca0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x38,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112f6e090);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar4);
    func_0x0001000d224c(unaff_x22 + 0x10);
    func_0x000107c61574(uVar5);
    plVar3 = (long *)(unaff_x22 + 0x10);
    func_0x0001000a8868(plVar3,*(undefined8 *)(unaff_x22 + 0x28));
    lVar6 = *plVar3;
    plVar3 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 200) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_103462d68;
    lVar4 = *(long *)(unaff_x22 + 0xb0);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    plVar3[6] = *(long *)(unaff_x22 + 0xb8);
    plVar3[7] = lVar6;
    plVar3[4] = lVar2;
    plVar3[5] = lVar4;
    plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10346093c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103462d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103462d68; end: 103462dbf;  */

void FUN_103462d68(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x78) = param_2;
  *(long **)(lVar1 + 0x68) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined8 *)(lVar1 + 0xd0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103462dc0,0,0);
  return;
}



/* Entry: 103462dc0; end: 103462e83;  */

void FUN_103462dc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (lVar3 != 0) {
    if ((*(byte *)(unaff_x22 + 0x78) & 1) == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x98);
      func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x50,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0xd8) = lVar3;
      if (lVar3 != 0) {
        uVar1 = 0;
        func_0x000107c5fcec();
        uVar2 = uVar1;
        func_0x000107c5fce8();
        *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
        func_0x000100eea164();
        func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_103462e84,uVar1,uVar2);
        return;
      }
    }
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
  }
                    /* WARNING: Could not recover jumptable at 0x000103462e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103462e84; end: 103462f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103462e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined1 *)(unaff_x22 + 0x90) = 0x40;
  func_0x000107c61174(uVar2);
  func_0x0001002a64a8((undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103462f10,0,0);
  return;
}



/* Entry: 103462f10; end: 103462f3f;  */

void FUN_103462f10(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000103462f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103462f40; end: 103462f63;  */

void FUN_103462f40(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f6e0d0;
  plVar5 = (long *)&UNK_10dbcb678;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1034637ac(0,0x112ee4098,&PTR_PTR_1126abde8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103462f64; end: 103462fdb;  */

void FUN_103462f64(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1034637ac(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103462fdc; end: 103462fef;  */

ulong FUN_103462fdc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034630d4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034630d8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126abde8;
    func_0x000107c61168(PTR_PTR_1126abde8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126abde8;
    func_0x000107c61168(PTR_PTR_1126abde8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1034637ac(0,0x112ee4098,&PTR_PTR_1126abde8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034631ac);
  (*pcVar2)();
}



/* Entry: 103462ff0; end: 103463367;  */

ulong FUN_103462ff0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034630d4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034630d8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1034637ac(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034631ac);
  (*pcVar2)();
}



/* Entry: 103463368; end: 103463383;  */

void FUN_103463368(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103463384();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103463384; end: 10346349b;  */

undefined * FUN_103463384(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10346349c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112f6db30;
    func_0x0001000285a8(0x112f6db30,&UNK_10dbcb670);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1107274e0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 10346349c; end: 103463527;  */

void FUN_10346349c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1034637f4;
  plVar7[0x17] = lVar3;
  plVar7[0x18] = lVar6;
  plVar7[0x15] = lVar2;
  plVar7[0x16] = lVar5;
  plVar7[0x13] = lVar1;
  plVar7[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103462ca0,0,0);
  return;
}



/* Entry: 103463528; end: 103463573;  */

void FUN_103463528(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103463574; end: 1034635ff;  */

void FUN_103463574(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103463600;
  plVar7[0x17] = lVar3;
  plVar7[0x18] = lVar6;
  plVar7[0x15] = lVar2;
  plVar7[0x16] = lVar5;
  plVar7[0x13] = lVar1;
  plVar7[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103462ca0,0,0);
  return;
}



/* Entry: 103463600; end: 10346363b;  */

void FUN_103463600(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103463638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


