/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102151584; end: 1021515cb;  */

void FUN_102151584(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c43090(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001021515c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021515cc; end: 1021515cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021515cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  func_0x000107c4c974(uVar2);
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar3 = FUN_102151530;
  func_0x0001000cb480(FUN_102151530,0,uVar2);
  func_0x000107c61574(uVar5);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  uVar5 = 3;
  func_0x000100774b74(3,0x2d,0,uStack_60,uStack_58,puVar4);
  func_0x0001000834e4(auStack_78);
  func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
  func_0x000107c4cfbc();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar7 = 0;
  FUN_10214ea20(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  uVar6 = uVar2;
  FUN_1021517bc(uVar2,pcVar3,uVar5,uVar1,uVar8,uVar7);
  func_0x000107c61574(uVar2);
  *param_1 = uVar6;
  return;
}



/* Entry: 1021515d0; end: 102151623;  */

void FUN_1021515d0(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102151a5c;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102151584,0,0);
  return;
}



/* Entry: 102151624; end: 102151633;  */

void FUN_102151624(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102151634; end: 102151657;  */

void FUN_102151634(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102151658; end: 102151663;  */

void FUN_102151658(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102151664; end: 10215169f;  */

void FUN_102151664(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021516a0; end: 1021516af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021516a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  func_0x000107c4c974(uVar2);
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar3 = FUN_102151530;
  func_0x0001000cb480(FUN_102151530,0,uVar2);
  func_0x000107c61574(uVar5);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  uVar5 = 3;
  func_0x000100774b74(3,0x2d,0,uStack_60,uStack_58,puVar4);
  func_0x0001000834e4(auStack_78);
  func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
  func_0x000107c4cfbc();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar7 = 0;
  FUN_10214ea20(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  uVar6 = uVar2;
  FUN_1021517bc(uVar2,pcVar3,uVar5,uVar1,uVar8,uVar7);
  func_0x000107c61574(uVar2);
  *param_1 = uVar6;
  return;
}



/* Entry: 1021516b0; end: 102151703;  */

void FUN_1021516b0(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102151704;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102151584,0,0);
  return;
}



/* Entry: 102151704; end: 1021517bb;  */

void FUN_102151704(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010215173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021517bc; end: 102151a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021517bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = param_6;
  func_0x000107c614f0();
  lVar6 = _DAT_112e5b9d8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_6 + lVar6) = uVar3;
  *(undefined8 *)(param_6 + _DAT_112e5b9e0) = 0;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112e5bb50,&UNK_10da61c30);
  func_0x000107c613fc();
  ppuVar4 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(param_6 + _DAT_112e5b9c8) = ppuVar4;
  puStack_68 = (undefined *)0x0;
  func_0x0001000285a8(0x112e5bb58,&UNK_10db894d0);
  func_0x000107c613fc();
  ppuVar4 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(param_6 + _DAT_112e5b9d0) = ppuVar4;
  func_0x0001000d224c(&puStack_68);
  puVar1 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    func_0x000107c6142c(param_5);
  }
  else {
    puVar5 = PTR_PTR_1126b6868;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c6142c(param_5);
    func_0x000107c47914();
    func_0x000107c61170();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar1);
      puVar8 = (undefined *)0x0;
      goto LAB_102151a00;
    }
    func_0x00010109db94();
    func_0x000107c613fc();
    *(undefined8 *)(param_4 + 0x18) = 3;
    *(undefined8 *)(param_4 + 0x10) = 1;
    *(undefined **)(param_4 + 0x20) = puVar5;
    uVar3 = 0;
    func_0x00010109d9b8(0);
    func_0x000107c61174(puVar5);
    lVar6 = param_4;
    func_0x000107c5fc48(param_4,uVar3);
    func_0x000107c61574(param_4);
    puVar7 = puVar1;
    func_0x000107c4cfd0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (puVar7 != (undefined *)0x0) {
      func_0x0001000285a8(0x112e5bb60,&UNK_10da61c40);
      puVar8 = puVar7;
      func_0x0001000bda74();
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
      goto LAB_102151a00;
    }
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar5);
  }
  puVar8 = (undefined *)0x0;
LAB_102151a00:
  *(undefined **)(param_6 + _DAT_112e5b9b0) = puVar8;
  *(undefined8 *)(param_6 + _DAT_112e5b9b8) = param_2;
  *(undefined8 *)(param_6 + _DAT_112e5b9c0) = param_3;
  lStack_78 = param_6;
  lStack_70 = lVar2;
  func_0x000107c61154(&lStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102151a58; end: 102151a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102151a58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  func_0x000107c4c974(uVar2);
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar3 = FUN_102151530;
  func_0x0001000cb480(FUN_102151530,0,uVar2);
  func_0x000107c61574(uVar5);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  uVar5 = 3;
  func_0x000100774b74(3,0x2d,0,uStack_60,uStack_58,puVar4);
  func_0x0001000834e4(auStack_78);
  func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
  func_0x000107c4cfbc();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar7 = 0;
  FUN_10214ea20(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  uVar6 = uVar2;
  FUN_1021517bc(uVar2,pcVar3,uVar5,uVar1,uVar8,uVar7);
  func_0x000107c61574(uVar2);
  *param_1 = uVar6;
  return;
}



/* Entry: 102151a60; end: 102151acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102151a60(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102151e54();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e5bb70) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102151acc; end: 102151b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102151acc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5bb70) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102151b38; end: 102151b97; -[_TtC44LensVideoEditingScopedFactoryServiceProvider32SCLensVideoEditingScopedServices init] */

void FUN_102151b38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVideoEditingScopedFactoryServiceProvider.SCLensVideoEditingScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102151b64);
  (*pcVar1)();
}



/* Entry: 102151b98; end: 102151ba7; -[_TtC44LensVideoEditingScopedFactoryServiceProvider32SCLensVideoEditingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102151b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5bb70));
  return;
}



/* Entry: 102151ba8; end: 102151c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102151ba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d2968;
  func_0x000107c613fc(&UNK_1104d2968,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102151f30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102151c14; end: 102151caf;  */

void FUN_102151c14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d2878;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d2878;
  return;
}



/* Entry: 102151cb0; end: 102151ce7;  */

void FUN_102151cb0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102151ce8; end: 102151cef;  */

undefined8 FUN_102151ce8(void)

{
  return 0x1b;
}



/* Entry: 102151cf0; end: 102151e23;  */

void FUN_102151cf0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104d2990;
  func_0x000107c613fc(&UNK_1104d2990,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102151f08;
  func_0x00010058fa64(FUN_102151f08,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102151e24; end: 102151e53;  */

undefined ** FUN_102151e24(void)

{
  return &PTR_DAT_1130347f0;
}



/* Entry: 102151e54; end: 102151e73;  */

void FUN_102151e54(void)

{
  func_0x000107c61168(&PTR_PTR_112820a98);
  return;
}



/* Entry: 102151e74; end: 102151ec3;  */

undefined1  [16] FUN_102151e74(void)

{
  return ZEXT816(0x1104d28c8);
}



/* Entry: 102151ec4; end: 102151f07;  */

void FUN_102151ec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5bbd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9f68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5bbd8 = puVar1;
  return;
}



/* Entry: 102151f08; end: 102151f2f;  */

void FUN_102151f08(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102151f30; end: 102151f43;  */

void FUN_102151f30(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102151f44; end: 102152323;  */

void FUN_102151f44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e5bbf0,&UNK_10da61eb8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e5bbf8,&UNK_10da61ec0);
  puVar2 = &UNK_1104d29f0;
  func_0x000107c613fc(&UNK_1104d29f0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar11 = 0x10215232c;
  func_0x0001000823a8(0x10215232c,puVar2);
  func_0x000100082720("SCLensVideoEditingLoggingEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e5bc00,&UNK_10da61ec8);
  func_0x000107c6157c(uVar11);
  uVar3 = 0x102152334;
  func_0x0001000823a8(0x102152334,uVar11);
  func_0x000100082720("SCLensVideoEditingLoggingServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102151cb0;
  func_0x0001000823a8(FUN_102151cb0,0);
  func_0x000100082720("SCLensVideoEditingScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e5bc08,&UNK_10da61ee0);
  puVar2 = &UNK_1104d2a18;
  func_0x000107c613fc(&UNK_1104d2a18,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  uVar5 = 0x10215233c;
  func_0x0001000823a8(0x10215233c,puVar2);
  func_0x000100082720("LensVideoEditingEntryPointWrapperServiceProvider",0x30,2);
  uVar6 = uVar3;
  FUN_1021535d4();
  func_0x000100082720("LensVideoEditingScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e5bc10,&UNK_10da61ed0);
  puVar2 = &UNK_1104d2a40;
  func_0x000107c613fc(&UNK_1104d2a40,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  *(code **)(puVar2 + 0x30) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102152344;
  func_0x0001000823a8(0x102152344,puVar2);
  func_0x000100082720("SCLensVideoEditingScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e5bb78,&UNK_10da61c60);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102152354;
  func_0x0001000823a8(0x102152354,uVar7);
  func_0x000100082720("SCLensVideoEditingScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e5bb68,&UNK_10da61c50);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10215235c;
  func_0x0001000823a8(0x10215235c,uVar8);
  func_0x000100082720("SCLensVideoEditingScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104d2a68;
  func_0x000107c613fc(&UNK_1104d2a68,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_102152390;
  func_0x0001000823a8(FUN_102152390,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensVideoEditingScopeEntryPointProvider",0x29,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 102152324; end: 102152363;  */

void FUN_102152324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e5bbf0,&UNK_10da61eb8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e5bbf8,&UNK_10da61ec0);
  puVar2 = &UNK_1104d29f0;
  func_0x000107c613fc(&UNK_1104d29f0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar11 = 0x10215232c;
  func_0x0001000823a8(0x10215232c,puVar2);
  func_0x000100082720("SCLensVideoEditingLoggingEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e5bc00,&UNK_10da61ec8);
  func_0x000107c6157c(uVar11);
  uVar3 = 0x102152334;
  func_0x0001000823a8(0x102152334,uVar11);
  func_0x000100082720("SCLensVideoEditingLoggingServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102151cb0;
  func_0x0001000823a8(FUN_102151cb0,0);
  func_0x000100082720("SCLensVideoEditingScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e5bc08,&UNK_10da61ee0);
  puVar2 = &UNK_1104d2a18;
  func_0x000107c613fc(&UNK_1104d2a18,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  uVar5 = 0x10215233c;
  func_0x0001000823a8(0x10215233c,puVar2);
  func_0x000100082720("LensVideoEditingEntryPointWrapperServiceProvider",0x30,2);
  uVar6 = uVar3;
  FUN_1021535d4();
  func_0x000100082720("LensVideoEditingScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e5bc10,&UNK_10da61ed0);
  puVar2 = &UNK_1104d2a40;
  func_0x000107c613fc(&UNK_1104d2a40,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  *(code **)(puVar2 + 0x30) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102152344;
  func_0x0001000823a8(0x102152344,puVar2);
  func_0x000100082720("SCLensVideoEditingScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e5bb78,&UNK_10da61c60);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102152354;
  func_0x0001000823a8(0x102152354,uVar7);
  func_0x000100082720("SCLensVideoEditingScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e5bb68,&UNK_10da61c50);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10215235c;
  func_0x0001000823a8(0x10215235c,uVar8);
  func_0x000100082720("SCLensVideoEditingScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104d2a68;
  func_0x000107c613fc(&UNK_1104d2a68,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_102152390;
  func_0x0001000823a8(FUN_102152390,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensVideoEditingScopeEntryPointProvider",0x29,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 102152364; end: 10215238f;  */

void FUN_102152364(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102152390; end: 102152397;  */

void FUN_102152390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d2878;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d2878;
  return;
}



/* Entry: 102152398; end: 102152473;  */

void FUN_102152398(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10215264c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10215a474(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x00010215a22c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  FUN_10215a270();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 102152474; end: 10215251b;  */

long FUN_102152474(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_10215a474(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010215a22c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_10215a270();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10215251c; end: 102152547;  */

void FUN_10215251c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102152548; end: 10215254f;  */

undefined8 FUN_102152548(void)

{
  return 0x1b;
}



/* Entry: 102152550; end: 1021525d3;  */

void FUN_102152550(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10215268c,param_2,FUN_102152690,param_2,FUN_1021526b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021525d4; end: 10215261b;  */

undefined8 FUN_1021525d4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x00010215a290();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 10215261c; end: 10215264b;  */

undefined ** FUN_10215261c(void)

{
  return &PTR_DAT_1130347f0;
}



/* Entry: 10215264c; end: 10215266b;  */

void FUN_10215264c(void)

{
  func_0x000107c61168(&PTR_PTR_112e5bc80);
  return;
}



/* Entry: 10215266c; end: 10215268f;  */

undefined1  [16] FUN_10215266c(void)

{
  return ZEXT816(0x1104d2ac0);
}



/* Entry: 102152690; end: 1021526b7;  */

void FUN_102152690(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021526b8; end: 1021526bf;  */

undefined8 FUN_1021526b8(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x00010215a290();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1021526c0; end: 1021527a7;  */

void FUN_1021526c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_102152afc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102152928(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021527a8; end: 1021527e3;  */

void FUN_1021527a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021527e4; end: 102152837;  */

void FUN_1021527e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102152838; end: 10215283f;  */

undefined8 FUN_102152838(void)

{
  return 0x1b;
}



/* Entry: 102152840; end: 1021528c3;  */

void FUN_102152840(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102152b4c,param_2,FUN_102152b50,param_2,FUN_102152b78,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021528c4; end: 102152913;  */

undefined8 FUN_1021528c4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102152914; end: 102152927;  */

void FUN_102152914(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104d2b00;
  return;
}



/* Entry: 102152928; end: 102152adf;  */

void FUN_102152928(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9f70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f065ad0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f065af0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102152ae0);
  (*pcVar1)();
}



/* Entry: 102152ae0; end: 102152afb;  */

undefined ** FUN_102152ae0(void)

{
  return &PTR_DAT_1130347f0;
}



/* Entry: 102152afc; end: 102152b1b;  */

void FUN_102152afc(void)

{
  func_0x000107c61168(&PTR_PTR_112e5bd50);
  return;
}



/* Entry: 102152b1c; end: 102152b4f;  */

undefined1  [16] FUN_102152b1c(void)

{
  return ZEXT816(0x1104d2b40);
}



/* Entry: 102152b50; end: 102152b77;  */

void FUN_102152b50(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102152b78; end: 102152b7f;  */

undefined8 FUN_102152b78(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102152b80; end: 102152de7;  */

void FUN_102152b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110724a00;
  ppuVar4 = &PTR_DAT_1130347f0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112e5bdc8;
  func_0x0001000285a8(0x112e5bdc8,&UNK_10da621b0);
  func_0x0001000a6ee8(&UNK_1104d2ac0,"LensVideoEditingEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_102152de8,param_2,uVar2,&UNK_1104d2ac0,&PTR_DAT_112e5bc18);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1104d2bb0;
  func_0x000107c613fc(&UNK_1104d2bb0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104d2da8,"LensVideoEditingScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_102152e14,puVar3,uVar2,&UNK_1104d2da8,&PTR_DAT_112e5bf30);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104d2b60,
                      "SCLensVideoEditingLoggingEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_102152ed8,param_5,uVar2,&UNK_1104d2b60,&PTR_DAT_112e5bce8);
  func_0x000107c61574(param_5);
  puVar3 = &UNK_1104d2bd8;
  func_0x000107c613fc(&UNK_1104d2bd8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1104d2908,"SCLensVideoEditingScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102152fac,puVar3,uVar2,&UNK_1104d2908,&PTR_DAT_112e5bb80);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e5bdd0;
  func_0x0001000285a8(0x112e5bdd0,&UNK_10da621b8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCLensVideoEditingScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102152de8; end: 102152e13;  */

void FUN_102152de8(void)

{
  FUN_102152e54();
  return;
}



/* Entry: 102152e14; end: 102152e53;  */

void FUN_102152e14(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102153758(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensVideoEditingScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102152e54; end: 102152ed7;  */

void FUN_102152e54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102152ed8; end: 102152f03;  */

void FUN_102152ed8(void)

{
  FUN_102152e54();
  return;
}



/* Entry: 102152f04; end: 102152fab;  */

void FUN_102152f04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d2c00;
  func_0x000107c613fc(&UNK_1104d2c00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102152fe0;
  func_0x0001000823a8(FUN_102152fe0,puVar1);
  func_0x000100082720("SCLensVideoEditingScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102152fac; end: 102152fb3;  */

void FUN_102152fac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104d2c00;
  func_0x000107c613fc(&UNK_1104d2c00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102152fe0;
  func_0x0001000823a8(FUN_102152fe0,puVar3);
  func_0x000100082720("SCLensVideoEditingScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102152fb4; end: 102152fdf;  */

void FUN_102152fb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102152fe0; end: 102152ff7;  */

void FUN_102152fe0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104d2990;
  func_0x000107c613fc(&UNK_1104d2990,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102151f08;
  func_0x00010058fa64(FUN_102151f08,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102152ff8; end: 10215307f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102152ff8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021534e4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e5bdd8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e5bde0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102153080);
  (*pcVar1)();
}



/* Entry: 102153080; end: 1021530df; -[_TtC32LensVideoEditingScopeGraphBridge47LensVideoEditingScopeGraphBridgeSaberEntryPoint init] */

void FUN_102153080(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVideoEditingScopeGraphBridge.LensVideoEditingScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021530ac);
  (*pcVar1)();
}



/* Entry: 1021530e0; end: 102153117; -[_TtC32LensVideoEditingScopeGraphBridge47LensVideoEditingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021530fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102153100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021530e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5bdd8));
  return;
}



/* Entry: 102153118; end: 10215313f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153118(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e5bde0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e5bdd8));
  return;
}



/* Entry: 102153140; end: 10215315f;  */

void FUN_102153140(void)

{
  func_0x000107c61168(&PTR_PTR_112820b58);
  return;
}



/* Entry: 102153160; end: 1021531c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102153160(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e5bf28);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1021531c4; end: 1021531cb;  */

void FUN_1021531c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021531cc; end: 10215326b;  */

void FUN_1021531cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10215326c; end: 10215328b;  */

void FUN_10215326c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10215328c; end: 102153313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10215328c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5bee0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e5bee8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102153314);
  (*pcVar2)();
}



/* Entry: 102153314; end: 1021533fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102153314(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5bee0);
  *(undefined **)(unaff_x20 + _DAT_112e5bee0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5bee8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5bee8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104d2d08;
  func_0x000107c613fc(&UNK_1104d2d08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102153400,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021533fc; end: 102153407;  */

void FUN_1021533fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102153408; end: 102153467; -[_TtC32LensVideoEditingScopeGraphBridge47SCLensVideoEditingScopedServicesSaberEntryPoint init] */

void FUN_102153408(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVideoEditingScopeGraphBridge.SCLensVideoEditingScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102153434);
  (*pcVar1)();
}



/* Entry: 102153468; end: 10215349f; -[_TtC32LensVideoEditingScopeGraphBridge47SCLensVideoEditingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153468(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5bee8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5bee0));
  return;
}



/* Entry: 1021534a0; end: 1021534a3;  */

void FUN_1021534a0(void)

{
  return;
}



/* Entry: 1021534a4; end: 1021534c3;  */

void FUN_1021534a4(void)

{
  FUN_102153314();
  return;
}



/* Entry: 1021534c4; end: 1021534e3;  */

void FUN_1021534c4(void)

{
  func_0x000107c61168(&PTR_PTR_112820c20);
  return;
}



/* Entry: 1021534e4; end: 1021535b3;  */

undefined8 FUN_1021534e4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e5bf18,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1021535b4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021535b4; end: 1021535d3;  */

void FUN_1021535b4(void)

{
  func_0x000107c61168(&PTR_PTR_112820ce8);
  return;
}



/* Entry: 1021535d4; end: 10215361f;  */

void FUN_1021535d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e5bf20,&UNK_10da622c8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10215368c,param_1);
  return;
}



/* Entry: 102153620; end: 10215368b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153620(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1021535b4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e5bf28) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10215368c; end: 102153693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215368c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1021535b4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e5bf28) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102153694; end: 1021536df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153694(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5bf28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021536e0; end: 10215373f; -[_TtC32LensVideoEditingScopeGraphBridge40LensVideoEditingScopeGraphBridgeServices init] */

void FUN_1021536e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVideoEditingScopeGraphBridge.LensVideoEditingScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215370c);
  (*pcVar1)();
}



/* Entry: 102153740; end: 102153757; -[_TtC32LensVideoEditingScopeGraphBridge40LensVideoEditingScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5bf28));
  return;
}



/* Entry: 102153758; end: 1021538cf;  */

void FUN_102153758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d2d50;
  func_0x000107c613fc(&UNK_1104d2d50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021538d0,puVar1);
  return;
}



/* Entry: 1021538d0; end: 1021538d7;  */

void FUN_1021538d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e5bf18,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5bf18,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104d2de8;
  func_0x000107c613fc(&UNK_1104d2de8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102153984;
  func_0x00010058fa64(0x102153984,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021538d8; end: 102153933;  */

void FUN_1021538d8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5bf18,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5bf18,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102153934; end: 10215398b;  */

undefined ** FUN_102153934(void)

{
  return &PTR_DAT_1130347f0;
}



/* Entry: 10215398c; end: 1021539d3; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215398c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5bf80;
  func_0x000107c61428(param_1 + _DAT_112e5bf80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021539d4; end: 102153a2b; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021539d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5bf80;
  func_0x000107c61428(param_1 + _DAT_112e5bf80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102153a2c; end: 102153a73; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint lensVideoEditingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153a2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5bf88;
  func_0x000107c61428(param_1 + _DAT_112e5bf88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102153a74; end: 102153ad7; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint setLensVideoEditingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5bf88;
  func_0x000107c61428(param_1 + _DAT_112e5bf88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102153ad8; end: 102153c0b;  */

/* WARNING: Possible PIC construction at 0x000102153b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102153bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102153bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102153b94) */
/* WARNING: Removing unreachable block (ram,0x000102153bb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153ad8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4b540();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102153140();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021534e4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102153c0c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e5bdd8) = lVar5;
    *(long *)(lVar4 + _DAT_112e5bde0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102153c0c; end: 102153c33; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102153c0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102153ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102153c34; end: 102153c77; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint end] */

void FUN_102153c34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


