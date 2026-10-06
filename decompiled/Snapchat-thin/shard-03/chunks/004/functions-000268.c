/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102823854; end: 102823997;  */

void FUN_102823854(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    return;
  }
  puVar1 = &UNK_110553e08;
  func_0x000107c613fc(&UNK_110553e08,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648(param_3);
  func_0x000107c61644(puVar1 + 0x10,param_3);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110553f70;
  func_0x000107c613fc(&UNK_110553f70,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  puVar1 = &UNK_110553f98;
  func_0x000107c613fc(&UNK_110553f98,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dae3a08;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar3 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,3,0,0,&UNK_10dae3a10,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 102823998; end: 102823a07;  */

void FUN_102823998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102823a08,uVar1,uVar2);
  return;
}



/* Entry: 102823a08; end: 102823b17;  */

void FUN_102823a08(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      FUN_1028243cc(*(undefined8 *)(unaff_x22 + 0x30));
      lVar3 = *(long *)(lVar5 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c49a1c();
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c4bf00(lVar2);
      func_0x000107c615e8(lVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_102823b18(uVar4,*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61604(lVar5 + 0x58,uVar4);
    func_0x000107c5c2e0(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000102823b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102823b18; end: 102823ea3;  */

undefined * FUN_102823b18(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lVar4;
  
  puVar17 = param_2;
  FUN_1028243cc();
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c49a1c();
    uVar2 = (undefined1)lVar4;
    func_0x000107c615e8(lVar3);
  }
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af9c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000105f7cb9c();
  func_0x000107c61180();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = puVar17;
    func_0x000107c5faec();
    puVar17 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c();
  }
  func_0x000105f7cbb4();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c5faec();
  func_0x000107c61170(puVar7);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar7 = &UNK_110553fc0;
  func_0x000107c613fc(&UNK_110553fc0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,0);
  puVar9 = &UNK_110553fe8;
  func_0x000107c613fc(&UNK_110553fe8,0x48,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined8 *)(puVar9 + 0x18) = uVar1;
  *(undefined **)(puVar9 + 0x20) = param_2;
  puVar9[0x28] = uVar2;
  *(undefined8 *)(puVar9 + 0x30) = uVar16;
  *(undefined8 *)(puVar9 + 0x38) = param_1;
  *(undefined8 *)(puVar9 + 0x40) = uVar18;
  puVar10 = PTR_PTR_1126b0ae0;
  func_0x000107c61168();
  puVar11 = PTR_PTR_1126c3378;
  func_0x000107c61168(PTR_PTR_1126c3378);
  puVar12 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c6157c(puVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar18);
  func_0x000107c451b0(puVar12);
  func_0x000107c61180();
  func_0x000107c44f94(puVar11);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102824450;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110554000;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar13);
  puVar14 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar14);
  func_0x000107c5fadc(puVar8,puVar17);
  func_0x000107c6142c(puVar17);
  puVar14 = PTR_PTR_1126b15a0;
  func_0x000107c61168(PTR_PTR_1126b15a0);
  func_0x000107c3ee8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  pcStack_80 = FUN_102824450;
  puStack_a0 = puVar12;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110554028;
  ppuVar15 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4();
  puVar17 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar17);
  uVar16 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0c2690);
  func_0x000107c40b00(puVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar5);
  func_0x000107c61574(puVar9);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61428(puVar7 + 0x10,&puStack_a0,1,0);
  func_0x000107c61604(puVar7 + 0x10,puVar10);
  func_0x000107c61574(puVar7);
  return puVar10;
}



/* Entry: 102823ea4; end: 102823ff3;  */

void FUN_102823ea4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4207c();
    func_0x000107c61170(param_1);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c4bf04();
    func_0x000107c615e8(param_2);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_5 != 0) {
    lVar1 = param_5;
    func_0x000107c4ff0c();
    func_0x000107c61180();
    func_0x000107c615e8(param_5);
    pcStack_78 = FUN_102823ff4;
    uStack_70 = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1011b0640;
    puStack_80 = &UNK_110554050;
    ppuVar2 = &puStack_98;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c5dc64(lVar1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102823ff4; end: 102823ff7;  */

void FUN_102823ff4(void)

{
  return;
}



/* Entry: 102823ff8; end: 10282409b;  */

void FUN_102823ff8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_10282409c(unaff_x20 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10282409c; end: 1028240bf;  */

undefined8 FUN_10282409c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028240c0; end: 1028240c7;  */

void FUN_1028240c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_1028240c8();
    auStack_58[0] = uVar3;
    uStack_40 = uVar2;
    func_0x000107c61174(uVar3);
    FUN_102822ea4(auStack_58);
    func_0x000107c61574(lVar1);
    func_0x00010006e7f4(auStack_58);
  }
  return;
}



/* Entry: 1028240c8; end: 10282410b;  */

void FUN_1028240c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec39a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cba58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ec39a0 = puVar1;
  return;
}



/* Entry: 10282410c; end: 102824113;  */

void FUN_10282410c(void)

{
  long lVar1;
  undefined8 in_x4;
  long in_x5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (in_x5 != 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102823034(in_x4);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102824114; end: 102824133;  */

void FUN_102824114(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102824134; end: 10282415b;  */

void FUN_102824134(long param_1,long param_2)

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



/* Entry: 10282415c; end: 10282418f;  */

void FUN_10282415c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102824190; end: 1028241ef;  */

void FUN_102824190(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1028241f0;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028235f0,lVar1,lVar2);
  return;
}



/* Entry: 1028241f0; end: 10282422b;  */

void FUN_1028241f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102824228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10282422c; end: 10282429b;  */

void FUN_10282422c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102824490;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10282429c; end: 1028242ab;  */

void FUN_10282429c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_2 != 0) {
    return;
  }
  puVar3 = &UNK_110553e08;
  func_0x000107c613fc(&UNK_110553e08,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648(lVar4);
  func_0x000107c61644(puVar3 + 0x10,lVar4);
  func_0x000107c61574(lVar4);
  puVar5 = &UNK_110553f70;
  func_0x000107c613fc(&UNK_110553f70,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  puVar3 = &UNK_110553f98;
  func_0x000107c613fc(&UNK_110553f98,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dae3a08;
  *(undefined **)(puVar3 + 0x18) = puVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar2);
  uVar6 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,3,0,0,&UNK_10dae3a10,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1028242ac; end: 1028242e7;  */

void FUN_1028242ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028242e8; end: 10282435b;  */

void FUN_1028242e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102824494;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  plVar5[5] = lVar4;
  plVar5[6] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102823a08,lVar3,lVar4);
  return;
}



/* Entry: 10282435c; end: 1028243cb;  */

void FUN_10282435c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102824498;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028243cc; end: 10282444f;  */

undefined8 FUN_1028243cc(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c4a764();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10282444c);
    (*pcVar2)();
  }
  lVar3 = param_1;
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c42930();
    func_0x000107c61170(lVar3);
    uVar1 = (int)lVar4 - 1;
    if (uVar1 < 0xd) {
      uVar5 = *(undefined8 *)(&UNK_10dae3a20 + (ulong)uVar1 * 8);
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102824450);
  (*pcVar2)();
}



/* Entry: 102824450; end: 10282449b;  */

void FUN_102824450(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4207c();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bf04();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c4ff0c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    pcStack_78 = FUN_102823ff4;
    uStack_70 = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1011b0640;
    puStack_80 = &UNK_110554050;
    ppuVar4 = &puStack_98;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c5dc64(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10282449c; end: 1028244e7;  */

void FUN_10282449c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec39a8,&UNK_10dae3a90);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028244e8,param_1);
  return;
}



/* Entry: 1028244e8; end: 102824563;  */

void FUN_1028244e8(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ec39b0,&UNK_10dae3b18);
  func_0x000107c613fc();
  pcVar1 = FUN_102824574;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dae3ae0,0x37,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102824564; end: 102824573;  */

undefined1  [16] FUN_102824564(void)

{
  return ZEXT816(0x110554130);
}



/* Entry: 102824574; end: 1028246a7;  */

void FUN_102824574(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  func_0x0001000285a8(0x112ec39b8,&UNK_10dae3b20);
  puVar1 = &uStack_38;
  uStack_38 = uVar3;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102824a70();
  func_0x000107c61574(puVar1);
  func_0x000100082720("SCSpotlightChatHeaderButtonViewControllerEntryPointProvider",0x3b,2);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 1028246a8; end: 1028246e3; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E125SpotlightHeaderButtonPane isHidden] */

void FUN_1028246a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 1028246e4; end: 1028248c3; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E125SpotlightHeaderButtonPane setHidden:] */

void FUN_1028246e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = (int)&uStack_50;
  uVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_setHidden__1126479f8;
  uStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  uStack_50 = param_1;
  uStack_48 = uVar3;
  func_0x000107c61154(&uStack_50,PTR_s_isHidden_1125fad18);
  if (iVar2 == 0) {
    func_0x000102824770();
  }
  else {
    func_0x000102824600();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1028248c4; end: 102824943; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E125SpotlightHeaderButtonPane didMoveToWindow] */

void FUN_1028248c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToWindow_112527020;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar2 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000102824600();
  }
  else {
    func_0x000107c61170();
    func_0x000102824770();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102824944; end: 1028249c7; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E125SpotlightHeaderButtonPane initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102824944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112ec39d8) = 0;
  *(undefined1 *)(param_5 + _DAT_112ec39e0) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1028249c8; end: 102824a5f; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E125SpotlightHeaderButtonPane initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028249c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec39d8) = 0;
  *(undefined1 *)(param_1 + _DAT_112ec39e0) = 0;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 102824a60; end: 102824a6f; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E125SpotlightHeaderButtonPane .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102824a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec39d8));
  return;
}



/* Entry: 102824a70; end: 102824cab;  */

void FUN_102824a70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_1105541f8;
  func_0x000107c613fc(&UNK_1105541f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102824af0,puVar1);
  return;
}



/* Entry: 102824cac; end: 102825237;  */

/* WARNING: Possible PIC construction at 0x000102824d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102824fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102825010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102825054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102825088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028250d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102825110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102825130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010282516c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010282518c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028251ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028251e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028251f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102825208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028251fc) */
/* WARNING: Removing unreachable block (ram,0x0001028251e8) */
/* WARNING: Removing unreachable block (ram,0x0001028251b0) */
/* WARNING: Removing unreachable block (ram,0x000102825190) */
/* WARNING: Removing unreachable block (ram,0x000102825170) */
/* WARNING: Removing unreachable block (ram,0x000102825134) */
/* WARNING: Removing unreachable block (ram,0x000102825114) */
/* WARNING: Removing unreachable block (ram,0x0001028250d8) */
/* WARNING: Removing unreachable block (ram,0x00010282508c) */
/* WARNING: Removing unreachable block (ram,0x000102825058) */
/* WARNING: Removing unreachable block (ram,0x000102825014) */
/* WARNING: Removing unreachable block (ram,0x000102824fc0) */
/* WARNING: Removing unreachable block (ram,0x000102824f08) */
/* WARNING: Removing unreachable block (ram,0x000102824eac) */
/* WARNING: Removing unreachable block (ram,0x000102824e60) */
/* WARNING: Removing unreachable block (ram,0x000102824eb0) */
/* WARNING: Removing unreachable block (ram,0x000102824eb4) */
/* WARNING: Removing unreachable block (ram,0x000102824e8c) */
/* WARNING: Removing unreachable block (ram,0x000102824e54) */
/* WARNING: Removing unreachable block (ram,0x000102824e0c) */
/* WARNING: Removing unreachable block (ram,0x000102824dcc) */
/* WARNING: Removing unreachable block (ram,0x000102824d98) */
/* WARNING: Removing unreachable block (ram,0x000102824d40) */
/* WARNING: Removing unreachable block (ram,0x00010282520c) */

void FUN_102824cac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001028254e0();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0x4044000000000000,0x4049000000000000);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(param_1);
  func_0x000107c5af88(puVar1,param_2,0xd6);
  func_0x000107c61180();
  func_0x000107c52b50(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102825238; end: 10282525f; -[_TtC37SCSpotlightChatHeaderButtonEntryPoint41SCSpotlightChatHeaderButtonViewController loadView] */

void FUN_102825238(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102824cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102825260; end: 102825453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102825260(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_70;
  long alStack_68 [3];
  
  func_0x000100083b20(alStack_68);
  lVar1 = _DAT_112f14ab0;
  func_0x000107c61428(alStack_68[0] + _DAT_112f14ab0,alStack_68,0,0);
  lVar1 = alStack_68[0] + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(alStack_68[0]);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x000107c5b8d8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar4 != 0) {
      func_0x0001043330d0(0);
      lVar2 = lVar4;
      func_0x000107c61174(lVar4);
      uVar3 = 0;
      func_0x0001043320e8(0,0,lVar4,0,0,0,0,0,0);
      func_0x000107c61170(lVar2);
      func_0x000100083b20(&lStack_70);
      lVar1 = lStack_70;
      lVar4 = *(long *)(lStack_70 + _DAT_112feb6a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar1 != 0) {
        func_0x000100083b20(&lStack_70);
        uVar7 = *(undefined8 *)(lStack_70 + _DAT_112f14aa8);
        func_0x000107c615f0(uVar7);
        func_0x000107c61170(lStack_70);
        uVar5 = uVar3;
        func_0x000107c61174();
        uVar6 = uVar5;
        func_0x000102824bfc();
        func_0x000107c4ab68(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102825454; end: 10282547b; -[_TtC37SCSpotlightChatHeaderButtonEntryPoint41SCSpotlightChatHeaderButtonViewController didTapSpotlightHeaderButton] */

void FUN_102825454(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102825260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10282547c; end: 1028254ff; -[_TtC37SCSpotlightChatHeaderButtonEntryPoint41SCSpotlightChatHeaderButtonViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10282547c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ec39c0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSpotlightChatHeaderButtonEntryPoint/SCSpotlightChatHeaderButtonViewController.swift"
                      ,0x55,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028254e0);
  (*pcVar1)();
}



/* Entry: 102825500; end: 102825503;  */

void FUN_102825500(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102825504; end: 10282554b; -[_TtC37SCSpotlightChatHeaderButtonEntryPoint41SCSpotlightChatHeaderButtonViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102825504(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec39c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec39d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec39c0));
  return;
}



/* Entry: 10282554c; end: 1028255bf; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E134SpotlightHeaderButtonScopeDelegate removeSpotlightScope:] */

/* WARNING: Possible PIC construction at 0x00010282559c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028255a0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10282554c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_112ec3a38) + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c50010();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028255c0; end: 1028255f3;  */

void FUN_1028255c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028255f4; end: 102825613; -[_TtC37SCSpotlightChatHeaderButtonEntryPointP33_5AE11D086DBF0B3AB5894CD6C74B26E134SpotlightHeaderButtonScopeDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028255f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec3a38));
  return;
}



/* Entry: 102825614; end: 102825653;  */

void FUN_102825614(void)

{
  func_0x000107c61168(&PTR_PTR_112864f40);
  return;
}



/* Entry: 102825654; end: 10282569f;  */

void FUN_102825654(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c526c0(0x3ff0000000000000,uVar1);
  uStack_50 = 0x3ff0000000000000;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c5a03c(uVar1,param_2,&uStack_50);
  return;
}



/* Entry: 1028256a0; end: 1028256c3;  */

void FUN_1028256a0(long param_1,long param_2)

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



/* Entry: 1028256c4; end: 102825c3b;  */

void FUN_1028256c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110554338;
  func_0x000107c613fc(&UNK_110554338,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(0x1028257e8,puVar1);
  return;
}



/* Entry: 102825c3c; end: 102825c4b;  */

undefined1  [16] FUN_102825c3c(void)

{
  return ZEXT816(0x110554360);
}



/* Entry: 102825c4c; end: 102826117;  */

void FUN_102825c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110554428;
  func_0x000107c613fc(&UNK_110554428,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_10;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_1;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(0x102825d70,puVar1);
  return;
}



/* Entry: 102826118; end: 102826127;  */

undefined1  [16] FUN_102826118(void)

{
  return ZEXT816(0x110554450);
}



/* Entry: 102826128; end: 1028267e3;  */

void FUN_102826128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110554518;
  func_0x000107c613fc(&UNK_110554518,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_12;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_11;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_8;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_10;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000823a8(0x10282629c,puVar1);
  return;
}



/* Entry: 1028267e4; end: 1028267f3;  */

undefined1  [16] FUN_1028267e4(void)

{
  return ZEXT816(0x110554540);
}



/* Entry: 1028267f4; end: 1028267f7; -[_TtC39GroupStoryConsentMessageAccessoryPluginP33_F408E470F57303CB67E0D5C7C882702C31GroupStoryConsentUpdateCallback onSuccess] */

void FUN_1028267f4(void)

{
  return;
}



/* Entry: 1028267f8; end: 1028267fb; -[_TtC39GroupStoryConsentMessageAccessoryPluginP33_F408E470F57303CB67E0D5C7C882702C31GroupStoryConsentUpdateCallback onError:] */

void FUN_1028267f8(void)

{
  return;
}



/* Entry: 1028267fc; end: 102826837; -[_TtC39GroupStoryConsentMessageAccessoryPluginP33_F408E470F57303CB67E0D5C7C882702C31GroupStoryConsentUpdateCallback init] */

void FUN_1028267fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102826838; end: 10282687f; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102826838(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec3a70;
  func_0x000107c61428(param_1 + _DAT_112ec3a70,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102826880; end: 1028268e3; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102826880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec3a70;
  func_0x000107c61428(param_1 + _DAT_112ec3a70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1028268e4; end: 102826953;  */

/* WARNING: Possible PIC construction at 0x000102826914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102826918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028268e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112ec3a78;
  if (*(long *)(unaff_x20 + _DAT_112ec3a78) != 0) {
    func_0x000107c42018(*(long *)(unaff_x20 + _DAT_112ec3a78),param_2,0);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 102826954; end: 10282697b; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin dismissPresentedView] */

void FUN_102826954(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028268e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10282697c; end: 102826b23;  */

code * FUN_10282697c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  ppuVar7 = &puStack_70;
  lVar10 = *param_1;
  lVar1 = lVar10;
  lVar8 = param_2;
  func_0x000107c40674();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = lVar2;
    lVar9 = lVar8;
    FUN_102826b2c();
    if (lVar1 != 0) {
      FUN_10282812c();
      puVar6 = &UNK_110554608;
      func_0x000107c613fc(&UNK_110554608,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar3 = &UNK_110554658;
      func_0x000107c613fc(&UNK_110554658,0x38,7);
      *(undefined **)(puVar3 + 0x10) = puVar6;
      *(long *)(puVar3 + 0x18) = lVar2;
      *(long *)(puVar3 + 0x20) = lVar8;
      *(long *)(puVar3 + 0x28) = lVar10;
      *(long *)(puVar3 + 0x30) = lVar9;
      uVar4 = 0x112d38358;
      func_0x0001000285a8(0x112d38358,&UNK_10d902090);
      pcVar5 = FUN_10282848c;
      func_0x0001000bfde0(FUN_10282848c,puVar3,uVar4);
      func_0x000107c61170(param_2);
      func_0x000107c61574(lVar1);
      func_0x000107c61574(puVar3);
      return pcVar5;
    }
    func_0x000107c61170(param_2);
  }
  func_0x000107c6142c(lVar8);
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  puVar6 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
  puStack_70 = puVar6;
  func_0x000100854cb0(&puStack_70);
  func_0x000107c61170(puVar6);
  return (code *)ppuVar7;
}



/* Entry: 102826b24; end: 102826b2b;  */

code * FUN_102826b24(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  ppuVar8 = &puStack_70;
  lVar11 = *param_1;
  lVar1 = lVar11;
  lVar9 = lVar3;
  func_0x000107c40674(lVar11,lVar3,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar2;
    lVar10 = lVar9;
    FUN_102826b2c();
    if (lVar1 != 0) {
      FUN_10282812c();
      puVar7 = &UNK_110554608;
      func_0x000107c613fc(&UNK_110554608,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar3);
      puVar4 = &UNK_110554658;
      func_0x000107c613fc(&UNK_110554658,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar7;
      *(long *)(puVar4 + 0x18) = lVar2;
      *(long *)(puVar4 + 0x20) = lVar9;
      *(long *)(puVar4 + 0x28) = lVar11;
      *(long *)(puVar4 + 0x30) = lVar10;
      uVar5 = 0x112d38358;
      func_0x0001000285a8(0x112d38358,&UNK_10d902090);
      pcVar6 = FUN_10282848c;
      func_0x0001000bfde0(FUN_10282848c,puVar4,uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(lVar1);
      func_0x000107c61574(puVar4);
      return pcVar6;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c6142c(lVar9);
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  puVar7 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
  puStack_70 = puVar7;
  func_0x000100854cb0(&puStack_70);
  func_0x000107c61170(puVar7);
  return (code *)ppuVar8;
}



/* Entry: 102826b2c; end: 102826d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102826b2c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ec3ad8);
  func_0x000107c4b940(uVar10);
  lVar2 = _DAT_112ec3ae8;
  lVar11 = *(long *)(unaff_x20 + _DAT_112ec3ae8);
  if (lVar11 != 0) {
    uVar9 = ((ulong *)(unaff_x20 + _DAT_112ec3ae0))[1];
    if ((uVar9 != 0) &&
       ((uVar4 = *(ulong *)(unaff_x20 + _DAT_112ec3ae0), uVar4 == param_1 && uVar9 == param_2 ||
        (func_0x000107c605b8(uVar4,uVar9,param_1,param_2,0), (uVar4 & 1) != 0)))) {
      func_0x000107c6157c(lVar11);
      goto LAB_102826d10;
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112ec3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  else {
    uVar9 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar11 = lVar5;
    func_0x000107c42fb0();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102826d3c);
      (*pcVar3)();
    }
    func_0x0001000285a8(0x112ec01d0,&UNK_10daddbc0);
    lVar6 = lVar11;
    func_0x0001000b637c(lVar11);
    func_0x000107c61170(lVar11);
    uVar7 = 0;
    func_0x000102828564(0,0x112d6a750,&PTR_PTR_1126da928);
    pcVar3 = FUN_1028271d4;
    func_0x0001000d5158(FUN_1028271d4,0,uVar7);
    func_0x000107c61574(lVar6);
    uVar7 = 0x102827204;
    func_0x0001000bfde0(0x102827204,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(pcVar3);
    puVar8 = PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(uVar7);
    lVar11 = 1;
    func_0x00010487fe40();
    func_0x000107c61574(puVar8);
    func_0x000107c615e8(lVar5);
    puVar1 = (ulong *)(unaff_x20 + _DAT_112ec3ae0);
    uVar9 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c6142c(uVar9);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar11;
    func_0x000107c61434(param_2);
    func_0x000107c6157c(lVar11);
    func_0x000107c61574(uVar7);
  }
LAB_102826d10:
  func_0x000107c5d278(uVar10);
  return lVar11;
}



/* Entry: 102826d3c; end: 102826e1f;  */

void FUN_102826d3c(undefined8 *param_1,byte *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_58 [24];
  
  if ((*param_2 & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_102826e20(param_4,param_5,param_6,param_7);
      puVar1 = PTR_PTR_1126ae750;
      func_0x000107c61168();
      func_0x000107c4e01c();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      goto LAB_102826e04;
    }
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
LAB_102826e04:
  *param_1 = puVar1;
  return;
}



/* Entry: 102826e20; end: 10282703f;  */

void FUN_102826e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126c6b40;
  func_0x000107c610f8();
  func_0x000107c45ad4();
  uVar2 = 0;
  func_0x000107c60660(0);
  func_0x000107c52ea8(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000108f594c4();
  func_0x000107c61180();
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126c6b48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = &UNK_110554608;
  func_0x000107c613fc(&UNK_110554608,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110554680;
  func_0x000107c613fc(&UNK_110554680,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  *(undefined8 *)(puVar5 + 0x30) = param_4;
  uStack_70 = 0x10282849c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102827bd8;
  puStack_78 = &UNK_110554698;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_68;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(puVar3);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = 0x112ec3b20;
  uVar7 = 0;
  func_0x000102828564(0,0x112ec3b20,&PTR_PTR_1126c6b50);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar7 = 0;
  func_0x000102828564(0,0x112ec3b28,&PTR_PTR_1126c6b40);
  uVar9 = 0;
  puStack_90 = puVar1;
  puStack_78 = (undefined *)uVar7;
  func_0x000102828564(0,0x112ec3b30,&PTR_PTR_1126c6b48);
  apuStack_b0[0] = puVar3;
  uStack_98 = uVar9;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar8,uVar2,&puStack_90,apuStack_b0);
  return;
}



/* Entry: 102827040; end: 10282716f; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_102827040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_4;
  func_0x0001000b637c(param_4);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_110554608;
  func_0x000107c613fc(&UNK_110554608,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = &UNK_110554630;
  func_0x000107c613fc(&UNK_110554630,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  uVar2 = 0x1028285cc;
  func_0x00010068b194(0x1028285cc,puVar5,uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  func_0x0001004575f0();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 102827170; end: 102827173;  */

void FUN_102827170(void)

{
  return;
}



/* Entry: 102827174; end: 1028271d3;  */

void FUN_102827174(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_2;
  func_0x000107c44520();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    plVar3 = (long *)0xe000000000000000;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = param_2[1];
  *param_2 = lVar2;
  param_2[1] = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 1028271d4; end: 102827233;  */

void FUN_1028271d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4065c();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102827234; end: 102827353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102827234(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec3a90);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = lVar3;
  func_0x000107c404a8();
  if ((int)lVar2 == 5) {
    lVar2 = lVar3;
    func_0x000107c5a934();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102827350);
      (*pcVar1)();
    }
    lVar4 = lVar2;
    func_0x000107c5a960();
    func_0x000107c61170(lVar2);
    if ((int)lVar4 == 5) {
      lVar2 = lVar3;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102827354);
        (*pcVar1)();
      }
      lVar4 = lVar2;
      func_0x000107c5bfa4();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 != 0) {
        lVar2 = lVar4;
        func_0x000107c5c088();
        if ((int)lVar2 == 2) {
          lVar2 = lVar4;
          func_0x000107c44a04(lVar4);
        }
        else {
          lVar2 = 0;
        }
        func_0x000107c61170(lVar4);
        goto LAB_102827318;
      }
    }
  }
  lVar2 = 0;
LAB_102827318:
  func_0x000107c61170(lVar3);
  return lVar2;
}



/* Entry: 102827354; end: 1028273af; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_102827354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102827234(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1028273b0; end: 1028273b7; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin pluginType] */

undefined8 FUN_1028273b0(void)

{
  return 1;
}



/* Entry: 1028273b8; end: 1028273cf; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028273cc) */

void FUN_1028273b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028273d0; end: 1028274ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028273d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec3af0);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1105546f8;
    func_0x000107c613fc(&UNK_1105546f8,0x38,7);
    *(long *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    *(undefined8 *)(puVar2 + 0x28) = param_6;
    *(undefined8 *)(puVar2 + 0x30) = param_7;
    pcStack_78 = FUN_102828510;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110554710;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_3);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102827500; end: 102827587;  */

void FUN_102827500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102827588(param_2,param_3,param_4,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102827588; end: 102827bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102827588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112ec3a78;
  lVar16 = _DAT_112ec3a70;
  if (*(long *)(unaff_x20 + _DAT_112ec3a78) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ec3a70,auStack_78,0,0);
    lVar16 = *(long *)(unaff_x20 + lVar16);
    if (lVar16 != 0) {
      lVar15 = *(long *)(unaff_x20 + _DAT_112ec3ad0);
      func_0x000107c615f0(lVar16);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar15 != 0) {
        lVar3 = lVar15;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar15);
        if (lVar3 != 0) {
          puVar4 = &UNK_110554748;
          func_0x000107c613fc(&UNK_110554748,0x11,7);
          puVar4[0x10] = 0;
          puVar5 = &UNK_110554608;
          func_0x000107c613fc(&UNK_110554608,0x18,7);
          func_0x000107c61614(puVar5 + 0x10);
          puVar6 = &UNK_110554770;
          func_0x000107c613fc(&UNK_110554770,0x30,7);
          *(undefined **)(puVar6 + 0x10) = puVar4;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          *(undefined8 *)(puVar6 + 0x20) = param_1;
          *(undefined8 *)(puVar6 + 0x28) = param_2;
          puVar7 = PTR_PTR_1126ab1a8;
          func_0x000107c610f8();
          uStack_88 = 0x102828520;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100288f10;
          puStack_90 = &UNK_110554788;
          ppuVar8 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c6157c(puVar4);
          func_0x000107c6157c(puVar5);
          func_0x000107c61434(param_2);
          func_0x000107c45edc();
          func_0x000107c60bd0(ppuVar8);
          puVar6 = puStack_80;
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar6);
          puVar5 = PTR_PTR_1126ab1b0;
          func_0x000107c610f8(PTR_PTR_1126ab1b0);
          func_0x000107c5fadc(param_3,param_4);
          func_0x000107c46c18(puVar5);
          func_0x000107c61170(param_3);
          puVar6 = PTR_PTR_1126ab1b8;
          func_0x000107c610f8();
          func_0x000107c49520();
          func_0x000107c61170(puVar5);
          puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar9 = puVar5;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102827bc4);
            (*pcVar2)();
          }
          puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c3fa94();
          func_0x000107c61180();
          func_0x000107c52b50(puVar9);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61174();
          func_0x000107c5a050();
          puVar9 = puVar5;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102827bc8);
            (*pcVar2)();
          }
          func_0x000107c3d89c();
          func_0x000107c61170();
          func_0x0001008478a8();
          func_0x000107c613fc();
          *(undefined8 *)(puVar9 + 0x18) = 9;
          *(undefined8 *)(puVar9 + 0x10) = 4;
          puVar10 = puVar6;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          puVar11 = puVar5;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102827bcc);
            (*pcVar2)();
          }
          puVar12 = puVar11;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          func_0x000107c61170(puVar11);
          puVar11 = puVar10;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar12);
          *(undefined **)(puVar9 + 0x20) = puVar11;
          puVar10 = puVar6;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          puVar11 = puVar5;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar11 != (undefined *)0x0) {
            puVar12 = puVar11;
            func_0x000107c3ec1c();
            func_0x000107c61180();
            func_0x000107c61170(puVar11);
            puVar11 = puVar10;
            func_0x000107c40280();
            func_0x000107c61180();
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar12);
            *(undefined **)(puVar9 + 0x28) = puVar11;
            puVar10 = puVar6;
            func_0x000107c4acb0();
            func_0x000107c61180();
            puVar11 = puVar5;
            func_0x000107c5de64();
            func_0x000107c61180();
            if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102827bd4);
              (*pcVar2)();
            }
            puVar12 = puVar11;
            func_0x000107c4acb0();
            func_0x000107c61180();
            func_0x000107c61170(puVar11);
            puVar11 = puVar10;
            func_0x000107c40280();
            func_0x000107c61180();
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar12);
            *(undefined **)(puVar9 + 0x30) = puVar11;
            puVar10 = puVar6;
            func_0x000107c5ce8c();
            func_0x000107c61180();
            func_0x000107c61170(puVar6);
            puVar11 = puVar5;
            func_0x000107c5de64();
            func_0x000107c61180();
            if (puVar11 != (undefined *)0x0) {
              puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
              func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
              puVar13 = puVar11;
              func_0x000107c5ce8c(puVar11);
              func_0x000107c61180();
              func_0x000107c61170(puVar11);
              puVar11 = puVar10;
              func_0x000107c40280();
              func_0x000107c61180();
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar13);
              *(undefined **)(puVar9 + 0x38) = puVar11;
              uVar14 = 0;
              func_0x000102828564(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
              puVar10 = puVar9;
              func_0x000107c5fc48(puVar9,uVar14);
              func_0x000107c61574(puVar9);
              func_0x000107c3d048(puVar12);
              func_0x000107c61170(puVar10);
              puVar9 = PTR_PTR_1126b0a08;
              func_0x000107c610f8();
              func_0x000107c48e88();
              func_0x000107c52684();
              func_0x000107c5a070(puVar9);
              func_0x000107c5921c(puVar9);
              func_0x000107c539d4(0x4038000000000000,puVar9);
              func_0x000107c5a074(puVar9);
              uVar14 = *(undefined8 *)(unaff_x20 + lVar1);
              *(undefined **)(unaff_x20 + lVar1) = puVar9;
              func_0x000107c61174(puVar9);
              func_0x000107c61170(uVar14);
              uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ec3a80);
              *(undefined **)(unaff_x20 + _DAT_112ec3a80) = puVar5;
              func_0x000107c61174(puVar5);
              func_0x000107c61170(uVar14);
              uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ec3a88);
              *(undefined **)(unaff_x20 + _DAT_112ec3a88) = puVar6;
              func_0x000107c61174(puVar6);
              func_0x000107c61170(uVar14);
              func_0x000107c4ef3c(0x3fe0000000000000,puVar9);
              func_0x000107c615e8(lVar16);
              func_0x000107c615e8(lVar3);
              func_0x000107c61574(puVar4);
              func_0x000107c61170(puVar7);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              return;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102827bd8);
            (*pcVar2)();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102827bd0);
          (*pcVar2)();
        }
      }
      func_0x000107c615e8(lVar16);
    }
  }
  return;
}



/* Entry: 102827bd8; end: 102827c47;  */

/* WARNING: Possible PIC construction at 0x000102827c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102827c34) */

void FUN_102827bd8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_1105546d0;
  func_0x000107c613fc(&UNK_1105546d0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x1028284c8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102827c48; end: 102827da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102827c48(byte param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_70,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
    func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
    lVar1 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec3af0);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lVar1);
      puVar2 = &UNK_1105547c0;
      func_0x000107c613fc(&UNK_1105547c0,0x30,7);
      *(long *)(puVar2 + 0x10) = param_3;
      puVar2[0x18] = param_1 & 1;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      *(undefined8 *)(puVar2 + 0x28) = param_5;
      uStack_98 = 0x10282852c;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_1105547d8;
      ppuVar3 = &puStack_b8;
      puStack_90 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_90;
      func_0x000107c6157c(param_3);
      func_0x000107c61434(param_5);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 102827da4; end: 102827f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102827da4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((param_2 & 1) != 0) {
      func_0x000102827e40(param_3,param_4);
    }
    lVar1 = *(long *)(param_1 + _DAT_112ec3a78);
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c42018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102827f38; end: 102827f63; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin init] */

void FUN_102827f38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupStoryConsentMessageAccessoryPlugin.GroupStoryConsentMessageAccessoryPlugin"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102827f64);
  (*pcVar1)();
}



/* Entry: 102827f64; end: 102827f67;  */

void FUN_102827f64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102827f68; end: 102827f9b;  */

void FUN_102827f68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102827f9c; end: 102828077; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102827fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102827fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102828008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010282804c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010282800c) */
/* WARNING: Removing unreachable block (ram,0x000102827fdc) */
/* WARNING: Removing unreachable block (ram,0x000102827fbc) */
/* WARNING: Removing unreachable block (ram,0x000102828050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102827f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec3ac0));
  return;
}



/* Entry: 102828078; end: 1028280cb; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001028280b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028280b8) */

void FUN_102828078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028282f0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028280cc; end: 10282812b; -[_TtC39GroupStoryConsentMessageAccessoryPlugin39GroupStoryConsentMessageAccessoryPlugin tray:heightForPosition:] */

undefined8
FUN_1028280cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_10282834c();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10282812c; end: 1028282ef;  */

undefined1  [16] FUN_10282812c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c406c0();
  func_0x000107c61180();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102827170;
  puStack_68 = (undefined *)0x0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1011b6bc0;
  puStack_78 = &UNK_110554800;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  puVar5 = &UNK_110554838;
  func_0x000107c613fc(&UNK_110554838,0x18,7);
  *(undefined8 **)(puVar5 + 0x10) = &uStack_60;
  puVar6 = &UNK_110554860;
  func_0x000107c613fc(&UNK_110554860,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x10282853c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_70 = FUN_102828544;
  puStack_90 = puVar2;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1011ac670;
  puStack_78 = &UNK_110554878;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c4c6d0(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = uStack_60;
  uVar8 = 0;
  func_0x000107c61544(0,"",0x82,0x66,0x14,1);
  func_0x000107c61574(puVar5);
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028282ec);
    (*pcVar3)();
  }
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x82,0x67,0x14,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1028282f0);
  (*pcVar3)();
}



/* Entry: 1028282f0; end: 10282834b;  */

/* WARNING: Possible PIC construction at 0x000102828314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102828318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028282f0(long param_1)

{
  long unaff_x20;
  
  if (param_1 == 2) {
    if (*(long *)(unaff_x20 + _DAT_112ec3a78) != 0) {
      *(undefined8 *)(unaff_x20 + _DAT_112ec3a78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 10282834c; end: 10282844b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10282834c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec3a88);
  uVar6 = 0xbff0000000000000;
  if (lVar2 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ec3a80);
    if (lVar5 != 0) {
      func_0x000107c61174();
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5e07c();
        lVar4 = lVar5;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10282844c);
          (*pcVar1)();
        }
        func_0x000107c3ec60();
        func_0x000107c61170(lVar4);
        func_0x000107c609cc(param_1,param_2,param_3,param_4);
        uVar6 = 0x7fefffffffffffff;
        func_0x000107c5b098(lVar2);
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar5);
    }
  }
  return uVar6;
}



/* Entry: 10282844c; end: 10282848b;  */

void FUN_10282844c(void)

{
  func_0x000107c61168(&PTR_PTR_1128650d0);
  return;
}



/* Entry: 10282848c; end: 1028284db;  */

void FUN_10282848c(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  if ((*param_2 & 1) == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102826e20(uVar4,uVar1,uVar2,uVar6);
      puVar5 = PTR_PTR_1126ae750;
      func_0x000107c61168();
      func_0x000107c4e01c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
      goto LAB_102826e04;
    }
  }
  puVar5 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
LAB_102826e04:
  *param_1 = puVar5;
  return;
}



/* Entry: 1028284dc; end: 10282850f;  */

void FUN_1028284dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102828510; end: 102828543;  */

void FUN_102828510(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_102827588(uVar2,uVar1,uVar3,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102828544; end: 1028285a3;  */

void FUN_102828544(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028285a4; end: 1028285d3;  */

void FUN_1028285a4(long param_1,long param_2)

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



/* Entry: 1028285d4; end: 102828677;  */

void FUN_1028285d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_1105548b0;
  func_0x000107c613fc(&UNK_1105548b0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102828864,puVar1);
  return;
}



/* Entry: 102828678; end: 102828863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102828678(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar10 = &lStack_80;
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x000107c406f8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar4 != 0) {
    func_0x000100083b20(&lStack_60);
    uVar11 = *(undefined8 *)(lStack_60 + _DAT_11301aef0);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(lStack_60);
    func_0x000100083b20(&uStack_68);
    uVar5 = uStack_68;
    func_0x000107c4d48c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_68);
    func_0x000100083b20(&uStack_70);
    uVar6 = uStack_70;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    lVar7 = 0;
    func_0x00010282846c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112ec3a70) = 0;
    lVar2 = _DAT_112ec3ad8;
    puVar9 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar8 + lVar2) = puVar9;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112ec3ae0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar8 + _DAT_112ec3ae8) = 0;
    lVar2 = _DAT_112ec3af0;
    puVar9 = &UNK_10dae3d20;
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(undefined **)(lVar8 + lVar2) = puVar9;
    *(undefined8 *)(lVar8 + _DAT_112ec3a78) = 0;
    *(undefined8 *)(lVar8 + _DAT_112ec3a80) = 0;
    *(undefined8 *)(lVar8 + _DAT_112ec3a88) = 0;
    *(long *)(lVar8 + _DAT_112ec3ac0) = lVar4;
    *(undefined8 *)(lVar8 + _DAT_112ec3a90) = uVar11;
    *(undefined8 *)(lVar8 + _DAT_112ec3ac8) = uVar5;
    *(undefined8 *)(lVar8 + _DAT_112ec3ad0) = uVar6;
    lStack_80 = lVar8;
    lStack_78 = lVar7;
    func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    *param_1 = plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102828864);
  (*pcVar3)();
}



/* Entry: 102828864; end: 10282887f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102828864(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar10 = &lStack_80;
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = lStack_58;
  func_0x000107c406f8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar4 != 0) {
    func_0x000100083b20(&lStack_60);
    uVar11 = *(undefined8 *)(lStack_60 + _DAT_11301aef0);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(lStack_60);
    func_0x000100083b20(&uStack_68);
    uVar5 = uStack_68;
    func_0x000107c4d48c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_68);
    func_0x000100083b20(&uStack_70);
    uVar6 = uStack_70;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    lVar7 = 0;
    func_0x00010282846c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112ec3a70) = 0;
    lVar2 = _DAT_112ec3ad8;
    puVar9 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar8 + lVar2) = puVar9;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112ec3ae0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar8 + _DAT_112ec3ae8) = 0;
    lVar2 = _DAT_112ec3af0;
    puVar9 = &UNK_10dae3d20;
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(undefined **)(lVar8 + lVar2) = puVar9;
    *(undefined8 *)(lVar8 + _DAT_112ec3a78) = 0;
    *(undefined8 *)(lVar8 + _DAT_112ec3a80) = 0;
    *(undefined8 *)(lVar8 + _DAT_112ec3a88) = 0;
    *(long *)(lVar8 + _DAT_112ec3ac0) = lVar4;
    *(undefined8 *)(lVar8 + _DAT_112ec3a90) = uVar11;
    *(undefined8 *)(lVar8 + _DAT_112ec3ac8) = uVar5;
    *(undefined8 *)(lVar8 + _DAT_112ec3ad0) = uVar6;
    lStack_80 = lVar8;
    lStack_78 = lVar7;
    func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    *param_1 = plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102828864);
  (*pcVar3)();
}



/* Entry: 102828880; end: 102829b57;  */

void FUN_102828880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105549a0;
  func_0x000107c613fc(&UNK_1105549a0,0x1b0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_49;
  *(undefined8 *)(puVar1 + 0x18) = param_50;
  *(undefined8 *)(puVar1 + 0x20) = param_51;
  *(undefined8 *)(puVar1 + 0x28) = param_11;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_29;
  *(undefined8 *)(puVar1 + 0x40) = param_17;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_1;
  *(undefined8 *)(puVar1 + 0x88) = param_15;
  *(undefined8 *)(puVar1 + 0x90) = param_16;
  *(undefined8 *)(puVar1 + 0x98) = param_13;
  *(undefined8 *)(puVar1 + 0xa0) = param_18;
  *(undefined8 *)(puVar1 + 0xa8) = param_27;
  *(undefined8 *)(puVar1 + 0xb0) = param_28;
  *(undefined8 *)(puVar1 + 0xb8) = param_5;
  *(undefined8 *)(puVar1 + 0xc0) = param_19;
  *(undefined8 *)(puVar1 + 200) = param_20;
  *(undefined8 *)(puVar1 + 0xd0) = param_21;
  *(undefined8 *)(puVar1 + 0xd8) = param_22;
  *(undefined8 *)(puVar1 + 0xe0) = param_23;
  *(undefined8 *)(puVar1 + 0xe8) = param_24;
  *(undefined8 *)(puVar1 + 0xf0) = param_25;
  *(undefined8 *)(puVar1 + 0xf8) = param_26;
  *(undefined8 *)(puVar1 + 0x100) = param_30;
  *(undefined8 *)(puVar1 + 0x108) = param_31;
  *(undefined8 *)(puVar1 + 0x110) = param_32;
  *(undefined8 *)(puVar1 + 0x118) = param_33;
  *(undefined8 *)(puVar1 + 0x120) = param_34;
  *(undefined8 *)(puVar1 + 0x128) = param_2;
  *(undefined8 *)(puVar1 + 0x130) = param_10;
  *(undefined8 *)(puVar1 + 0x138) = param_35;
  *(undefined8 *)(puVar1 + 0x140) = param_36;
  *(undefined8 *)(puVar1 + 0x148) = param_37;
  *(undefined8 *)(puVar1 + 0x150) = param_38;
  *(undefined8 *)(puVar1 + 0x158) = param_39;
  *(undefined8 *)(puVar1 + 0x160) = param_40;
  *(undefined8 *)(puVar1 + 0x168) = param_41;
  *(undefined8 *)(puVar1 + 0x170) = param_43;
  *(undefined8 *)(puVar1 + 0x178) = param_44;
  *(undefined8 *)(puVar1 + 0x180) = param_45;
  *(undefined8 *)(puVar1 + 0x188) = param_46;
  *(undefined8 *)(puVar1 + 400) = param_47;
  *(undefined8 *)(puVar1 + 0x198) = param_48;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_42;
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_42);
  func_0x0001000823a8(0x102828ca4,puVar1);
  return;
}



/* Entry: 102829b58; end: 102829b67;  */

undefined1  [16] FUN_102829b58(void)

{
  return ZEXT816(0x1105549c8);
}



/* Entry: 102829b68; end: 10282a4bb;  */

void FUN_102829b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110554a90;
  func_0x000107c613fc(&UNK_110554a90,0xd0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_23;
  *(undefined8 *)(puVar1 + 0x18) = param_24;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_10;
  *(undefined8 *)(puVar1 + 0x30) = param_11;
  *(undefined8 *)(puVar1 + 0x38) = param_21;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_7;
  *(undefined8 *)(puVar1 + 0x60) = param_8;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_3;
  *(undefined8 *)(puVar1 + 0x78) = param_12;
  *(undefined8 *)(puVar1 + 0x80) = param_2;
  *(undefined8 *)(puVar1 + 0x88) = param_13;
  *(undefined8 *)(puVar1 + 0x90) = param_14;
  *(undefined8 *)(puVar1 + 0x98) = param_20;
  *(undefined8 *)(puVar1 + 0xa0) = param_15;
  *(undefined8 *)(puVar1 + 0xa8) = param_16;
  *(undefined8 *)(puVar1 + 0xb0) = param_18;
  *(undefined8 *)(puVar1 + 0xb8) = param_19;
  *(undefined8 *)(puVar1 + 0xc0) = param_22;
  *(undefined8 *)(puVar1 + 200) = param_17;
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_17);
  func_0x0001000823a8(0x102829d84,puVar1);
  return;
}


