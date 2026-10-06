/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028eea58; end: 1028eea87;  */

void FUN_1028eea58(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1028eea88; end: 1028eeaab;  */

void FUN_1028eea88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028eeaac; end: 1028eeabb;  */

undefined1  [16] FUN_1028eeaac(void)

{
  return ZEXT816(0x1105678a0);
}



/* Entry: 1028eeabc; end: 1028eeb13;  */

long FUN_1028eeabc(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000107c5d10c();
  func_0x000107c615e8(param_1);
  *(ulong *)(unaff_x20 + 0x10) = uVar1 & 0xffffffff;
  return unaff_x20;
}



/* Entry: 1028eeb14; end: 1028eeb33;  */

void FUN_1028eeb14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028eeb34; end: 1028ef08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028eeb34(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = FUN_1028ef090;
  uStack_80 = param_9;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_a0 = 0x42000000;
  uStack_98 = 0x1028ef284;
  puStack_90 = &UNK_1105678f8;
  ppuVar4 = &puStack_a8;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_80;
  func_0x000107c61580(param_9,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar3;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)0x1028ef274;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_a0 = 0x42000000;
  uStack_98 = 0x1028ef280;
  puStack_90 = &UNK_110567920;
  ppuVar4 = &puStack_a8;
  uStack_80 = param_8;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_80;
  func_0x000107c6157c(param_8);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000100083b20(&puStack_a8);
  lVar1 = lStack_a0;
  puVar3 = puStack_a8;
  puVar5 = puStack_a8;
  func_0x000107c614f0();
  (**(code **)(lVar1 + 8))();
  func_0x000107c615e8(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100083b20(&puStack_a8);
    lVar1 = lStack_a0;
    puVar5 = puStack_a8;
    puVar7 = puStack_a8;
    func_0x000107c614f0(puStack_a8);
    puVar3 = &UNK_110567958;
    puVar8 = puVar3;
    func_0x000107c613fc(&UNK_110567958,0x18,7);
    func_0x000107c61644(puVar8 + 0x10,unaff_x20);
    pcVar9 = *(code **)(lVar1 + 0x38);
    func_0x000107c6157c(unaff_x20);
    func_0x000107c6157c(puVar8);
    (*pcVar9)(FUN_1028ef0ec,puVar8,puVar7,lVar1);
    func_0x000107c615e8(puVar5);
    func_0x000107c61578(puVar8,2);
    func_0x000100083b20(&puStack_a8);
    lVar1 = lStack_a0;
    puVar5 = puStack_a8;
    puVar7 = puStack_a8;
    func_0x000107c614f0(puStack_a8);
    func_0x000107c613fc(&UNK_110567958,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,unaff_x20);
    func_0x000107c61574(unaff_x20);
    pcVar9 = *(code **)(lVar1 + 0x40);
    func_0x000107c6157c(puVar3);
    (*pcVar9)(0x1028ef288,puVar3,puVar7,lVar1);
    func_0x000107c615e8(puVar5);
    func_0x000107c61578(puVar3,2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
  }
  else {
    if (*(char *)(param_1 + _DAT_11307ce50) != '\x02') {
      func_0x00010039c5b0();
      uVar6 = *(ulong *)(param_2 + _DAT_113091ae0);
      func_0x000107c4a350();
      if ((uVar6 & 1) != 0) {
        func_0x000100083b20(&puStack_a8);
        lVar1 = lStack_a0;
        puVar7 = puStack_a8;
        puVar8 = puStack_a8;
        func_0x000107c614f0();
        puVar3 = &UNK_110567958;
        func_0x000107c613fc(&UNK_110567958,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,unaff_x20);
        puVar5 = &UNK_110567980;
        func_0x000107c613fc(&UNK_110567980,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar3;
        *(undefined8 *)(puVar5 + 0x18) = param_5;
        *(undefined8 *)(puVar5 + 0x20) = param_10;
        pcVar9 = *(code **)(lVar1 + 0x30);
        func_0x000107c6157c(param_5);
        func_0x000107c6157c(param_10);
        func_0x000107c6157c(puVar3);
        (*pcVar9)(&UNK_100a15c38,puVar5,puVar8,lVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(puVar7);
        func_0x000107c61574(puVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61574(param_4);
        func_0x000107c61574(param_5);
        func_0x000107c61574(param_6);
        func_0x000107c61574(param_7);
        goto LAB_1028ef044;
      }
      func_0x000100c16730();
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
  }
LAB_1028ef044:
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_12);
  return unaff_x20;
}



/* Entry: 1028ef090; end: 1028ef0b3;  */

undefined8 FUN_1028ef090(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1028ef0b4; end: 1028ef0eb;  */

void FUN_1028ef0b4(long param_1)

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



/* Entry: 1028ef0ec; end: 1028ef10b;  */

void FUN_1028ef0ec(void)

{
  func_0x000100c16698();
  return;
}



/* Entry: 1028ef10c; end: 1028ef187;  */

void FUN_1028ef10c(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c41090();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c3e020(lVar2);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1028ef188; end: 1028ef223;  */

void FUN_1028ef188(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1028ef224; end: 1028ef293;  */

undefined1  [16] FUN_1028ef224(void)

{
  return ZEXT816(0);
}



/* Entry: 1028ef294; end: 1028ef2d3;  */

void FUN_1028ef294(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1028ef344();
  uVar1 = param_2;
  func_0x000107c613fc();
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_110567b60;
  *param_1 = uVar1;
  return;
}



/* Entry: 1028ef2d4; end: 1028ef2f3;  */

void FUN_1028ef2d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1028ef2f4; end: 1028ef333;  */

undefined * FUN_1028ef2f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aefc0;
  func_0x000107c610f8(PTR_PTR_1126aefc0);
  func_0x000107c453e4();
  func_0x000107c4e428();
  func_0x000107c591b8(puVar1,param_2,1);
  return puVar1;
}



/* Entry: 1028ef334; end: 1028ef343;  */

undefined1  [16] FUN_1028ef334(void)

{
  return ZEXT816(0x110567b80);
}



/* Entry: 1028ef344; end: 1028ef3ab;  */

void FUN_1028ef344(void)

{
  func_0x000107c61168(&PTR_PTR_112ecb028);
  return;
}



/* Entry: 1028ef3ac; end: 1028ef3bb;  */

undefined1  [16] FUN_1028ef3ac(void)

{
  return ZEXT816(0x110567c40);
}



/* Entry: 1028ef3bc; end: 1028ef3df;  */

void FUN_1028ef3bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028ef3e0; end: 1028ef3ef;  */

undefined1  [16] FUN_1028ef3e0(void)

{
  return ZEXT816(0x110567c68);
}



/* Entry: 1028ef3f0; end: 1028ef493;  */

undefined8 FUN_1028ef3f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c613fc();
  func_0x0001000b9aa4();
  func_0x000107c61170();
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x0001000834e4(auStack_68);
  return unaff_x20;
}



/* Entry: 1028ef494; end: 1028ef4eb;  */

void FUN_1028ef494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028ef4ec; end: 1028ef5eb;  */

void FUN_1028ef4ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_110567fb0;
  func_0x000107c613fc(&UNK_110567fb0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  pcStack_50 = FUN_1028f07c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1028ef5fc;
  puStack_58 = &UNK_110567fc8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000100326fb0(0);
  func_0x000107c610f8();
  func_0x000102ff45a8(puVar2,uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 1028ef5ec; end: 1028ef5fb;  */

undefined1  [16] FUN_1028ef5ec(void)

{
  return ZEXT816(0x110567ea0);
}



/* Entry: 1028ef5fc; end: 1028ef633;  */

void FUN_1028ef5fc(long param_1)

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



/* Entry: 1028ef634; end: 1028ef707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ef634(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ecb2c0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ecb2c8;
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ecb2d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecb2d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecb2e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecb2b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecb2b8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028ef708; end: 1028ef93b;  */

void FUN_1028ef708(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long alStack_70 [3];
  long lStack_58;
  
  plVar7 = alStack_70;
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x00010083f5a0();
  puVar2 = PTR_PTR_1126c2fb0;
  func_0x000107c610f8(PTR_PTR_1126c2fb0);
  func_0x000107c45eb4();
  func_0x000107c5a2b4();
  func_0x000107c59c78(puVar2);
  func_0x000107c556a8(puVar2);
  if (param_2 == 0) {
    func_0x000107c61174(puVar1);
    plVar7 = (long *)0x0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c614f0();
    alStack_70[0] = param_2;
    lStack_58 = lVar3;
    func_0x000107c615f0(param_2);
    func_0x000107c61174(puVar1);
    func_0x000107c605b0(alStack_70,lVar3);
    func_0x000100183ab8(alStack_70);
  }
  puVar4 = PTR_PTR_1126c2d78;
  func_0x000107c610f8();
  func_0x000107c46d14();
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(plVar7);
  func_0x000107c52b8c(puVar4);
  lVar5 = -0x2fffffffffffffd4;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f000090);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170();
  func_0x0001008201f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 3;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined **)(lVar5 + 0x20) = puVar4;
  uVar6 = 0;
  FUN_1028f04b0(0,0x112d58220,&PTR_PTR_1126c2d78);
  func_0x000107c61174(puVar4);
  lVar3 = lVar5;
  func_0x000107c5fc48(lVar5,uVar6);
  func_0x000107c61574(lVar5);
  func_0x000107c5707c(param_1);
  func_0x000107c61170(lVar3);
  func_0x0001028efc7c(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1028ef93c; end: 1028efbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ef93c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if ((*(byte *)(unaff_x20 + _DAT_112ecb2d0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ecb2d0) = 1;
    func_0x000100083b20(&lStack_38);
    uVar1 = *(undefined8 *)(lStack_38 + _DAT_112ecb310);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(lStack_38);
    puVar2 = &UNK_110567ec0;
    func_0x000107c613fc(&UNK_110567ec0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_48 = FUN_1028f04f0;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_100b5fdac;
    puStack_50 = &UNK_110567f28;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_40);
    uVar4 = uVar1;
    func_0x000107c5c320(uVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c3e924(uVar4);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1028efbf4; end: 1028efec3; -[_TtC52NotificationCenterHeaderButtonServicesImplementation38NotificationCenterHeaderButtonProvider buildWithHeaderItem:delegate:] */

/* WARNING: Possible PIC construction at 0x0001028efc5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028efc60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028efbf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecb2c8);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c3d798(uVar1);
  FUN_1028ef708(param_3,param_4);
  FUN_1028ef93c();
  func_0x0001028efa70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028efec4; end: 1028efef7;  */

void FUN_1028efec4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028efef8; end: 1028eff4f; -[_TtC52NotificationCenterHeaderButtonServicesImplementation38NotificationCenterHeaderButtonProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028eff34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028eff38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028efef8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecb2b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecb2b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb2c0));
  return;
}



/* Entry: 1028eff50; end: 1028eff6f;  */

void FUN_1028eff50(void)

{
  func_0x000107c61168(&PTR_PTR_11286d7e8);
  return;
}



/* Entry: 1028eff70; end: 1028f007b;  */

void FUN_1028eff70(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar5 = 0;
    func_0x000107c60714();
    puVar3 = &UNK_110567ec0;
    func_0x000107c613fc(&UNK_110567ec0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    pcStack_40 = FUN_1028f0098;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110567f00;
    ppuVar4 = &puStack_60;
    puStack_38 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_38);
    func_0x000107c5fb28(lVar2,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x0001000d76cc(lVar2 + 0x20,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1028f007c; end: 1028f0097;  */

void FUN_1028f007c(long param_1,long param_2)

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



/* Entry: 1028f0098; end: 1028f02f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f0098(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x00010083f5a0();
    uVar3 = *(ulong *)(lVar2 + _DAT_112ecb2c8);
    func_0x000107c3db80();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_1028f04b0(0,0x112ea6830,&PTR_PTR_1126c2d70);
    uVar5 = uVar3;
    func_0x000107c5fc54(uVar3,uVar4);
    func_0x000107c61170(uVar3);
    if (uVar5 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar3 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f02f4);
        (*pcVar1)();
      }
      uVar9 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar5 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar9;
          FUN_1028f02f4(uVar9,uVar5,&PTR_PTR_1126c2d70,0x112ea6830);
        }
        uVar8 = uVar6;
        func_0x000107c4e020();
        func_0x000107c61180();
        uVar4 = 0;
        FUN_1028f04b0(0,0x112d58220,&PTR_PTR_1126c2d78);
        uVar7 = uVar8;
        func_0x000107c5fc54(uVar8,uVar4);
        func_0x000107c61170(uVar8);
        if (uVar7 >> 0x3e == 0) {
          if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1028f0178;
LAB_1028f0214:
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f02a8);
              (*pcVar1)();
            }
            uVar8 = *(ulong *)(uVar7 + 0x20);
            func_0x000107c61174(uVar8);
          }
          else {
            uVar8 = 0;
            FUN_1028f02f4(0,uVar7,&PTR_PTR_1126c2d78,0x112d58220);
          }
          func_0x000107c6142c(uVar7);
          uVar7 = uVar8;
          func_0x000107c3e614(uVar8);
          func_0x000107c61180();
          func_0x000107c61170(uVar8);
          func_0x000107c53598(uVar7);
          func_0x000107c61170(uVar6);
          uVar6 = uVar7;
        }
        else {
          uVar8 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar8 = uVar7;
          }
          func_0x000107c60480();
          if (uVar8 != 0) goto LAB_1028f0214;
LAB_1028f0178:
          func_0x000107c6142c(uVar7);
        }
        uVar9 = uVar9 + 1;
        func_0x000107c61170(uVar6);
      } while (uVar3 != uVar9);
    }
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1028f02f4; end: 1028f04af;  */

ulong FUN_1028f02f4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f03d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f03dc);
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
  FUN_1028f04b0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f04b0);
  (*pcVar2)();
}



/* Entry: 1028f04b0; end: 1028f04ef;  */

void FUN_1028f04b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028f04f0; end: 1028f062f;  */

void FUN_1028f04f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c49820();
    lVar2 = lVar1;
    func_0x000107c614f0(lVar1);
    uVar6 = 0;
    func_0x000107c60714();
    puVar3 = &UNK_110567ec0;
    func_0x000107c613fc(&UNK_110567ec0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    puVar4 = &UNK_110567f60;
    func_0x000107c613fc(&UNK_110567f60,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    pcStack_50 = FUN_1028f0630;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110567f78;
    ppuVar5 = &puStack_70;
    puStack_48 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_48);
    func_0x000107c5fb28(lVar2,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x0001000d76cc(lVar2 + 0x20,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1028f0630; end: 1028f0793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f0630(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(ulong *)(lVar2 + _DAT_112ecb2e0) = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
    uVar3 = *(ulong *)(lVar2 + _DAT_112ecb2c8);
    func_0x000107c3db80();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_1028f04b0(0,0x112ea6830,&PTR_PTR_1126c2d70);
    uVar5 = uVar3;
    func_0x000107c5fc54(uVar3,uVar4);
    func_0x000107c61170(uVar3);
    if (uVar5 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar3 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f0794);
        (*pcVar1)();
      }
      uVar7 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
          func_0x000107c61174(uVar6);
        }
        else {
          uVar6 = uVar7;
          FUN_1028f02f4(uVar7,uVar5,&PTR_PTR_1126c2d70,0x112ea6830);
        }
        uVar7 = uVar7 + 1;
        func_0x0001028efc7c();
        func_0x000107c61170(uVar6);
      } while (uVar3 != uVar7);
    }
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1028f0794; end: 1028f07bf;  */

void FUN_1028f0794(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028f07c0; end: 1028f080f;  */

void FUN_1028f07c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1028eff50();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_1028ef634(uVar1,uVar2);
  return;
}



/* Entry: 1028f0810; end: 1028f082f;  */

void FUN_1028f0810(long param_1,long param_2)

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



/* Entry: 1028f0830; end: 1028f08c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f0830(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecb310) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028f08c8; end: 1028f08d7; -[_TtC31NotificationCenterBadgeServices31NotificationCenterBadgeServices badgeCountObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f08c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecb310));
  return;
}



/* Entry: 1028f08d8; end: 1028f090b;  */

void FUN_1028f08d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028f090c; end: 1028f091b; -[_TtC31NotificationCenterBadgeServices31NotificationCenterBadgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f090c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb310));
  return;
}



/* Entry: 1028f091c; end: 1028f0b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f091c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecb348);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecb350);
      lVar4 = lVar2;
      func_0x000107c615f0();
      func_0x000103931b9c();
      lVar5 = 0;
      FUN_1028f1e6c();
      lVar6 = lVar5;
      func_0x000107c610f8();
      lVar3 = lVar6 + _DAT_112ecb3e0;
      *(undefined8 *)(lVar3 + 8) = 0;
      func_0x000107c61614(lVar3,0);
      *(undefined1 *)(lVar6 + _DAT_112ecb3e8) = 0;
      *(undefined1 *)(lVar6 + _DAT_112ecb3f0) = 0;
      *(long *)(lVar6 + _DAT_112ecb3c8) = lVar2;
      *(undefined8 *)(lVar6 + _DAT_112ecb3d0) = uVar8;
      *(undefined8 *)(lVar6 + _DAT_112ecb3f8) = 0;
      *(long *)(lVar6 + _DAT_112ecb3d8) = lVar4;
      *(undefined ***)(lVar3 + 8) = &PTR_DAT_110568110;
      func_0x000107c61604();
      puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_68 = lVar6;
      lStack_60 = lVar5;
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(uVar8);
      plVar7 = &lStack_68;
      func_0x000107c61154(plVar7,puVar1,0,0);
      func_0x000107c5677c();
      FUN_1028f13b8();
      func_0x000107c615e8(lVar2);
      func_0x000107c61604(unaff_x20 + _DAT_112ecb360,plVar7);
      func_0x000107c3e2c0(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ecb368) + _DAT_112ecb4e8));
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(plVar7);
      return;
    }
  }
  lVar3 = _DAT_112ecb340;
  func_0x000107c61428(unaff_x20 + _DAT_112ecb340,auStack_58,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4d7c0();
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1028f0b28; end: 1028f0b4f; -[_TtC32NotificationCenterImplementation27NotificationCenterPresenter present] */

void FUN_1028f0b28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028f091c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028f0b50; end: 1028f0baf; -[_TtC32NotificationCenterImplementation27NotificationCenterPresenter init] */

void FUN_1028f0b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationCenterImplementation.NotificationCenterPresenter",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f0b7c);
  (*pcVar1)();
}



/* Entry: 1028f0bb0; end: 1028f0c7b; -[_TtC32NotificationCenterImplementation27NotificationCenterPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028f0bb0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecb368));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecb348));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecb350));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecb370));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecb358));
  func_0x000107c61610(param_1 + _DAT_112ecb360);
  param_1 = param_1 + _DAT_112ecb340;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028f0c7c; end: 1028f0d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f0c7c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecb340;
  func_0x000107c61428(unaff_x20 + _DAT_112ecb340,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1028f0d5c; end: 1028f0d5f;  */

void FUN_1028f0d5c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1028f0d60; end: 1028f0fdf;  */

void FUN_1028f0d60(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1028f0fe0; end: 1028f104b;  */

void FUN_1028f0fe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028f104c,uVar1,uVar2);
  return;
}



/* Entry: 1028f104c; end: 1028f114b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f104c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  if ((*(byte *)(lVar3 + _DAT_112ecb3f0) & 1) == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x40);
    *(undefined1 *)(lVar3 + _DAT_112ecb3f0) = 1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f114c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c41848(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  lVar3 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ecb340;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112ecb340,unaff_x22 + 0x28,0,0);
    lVar2 = lVar3 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c4d7c0(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001028f1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028f114c; end: 1028f1187;  */

void FUN_1028f114c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028f1184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028f1188; end: 1028f1197;  */

undefined1  [16] FUN_1028f1188(void)

{
  return ZEXT816(0x110568130);
}



/* Entry: 1028f1198; end: 1028f11b7;  */

void FUN_1028f1198(void)

{
  func_0x000107c61168(&PTR_PTR_11286d998);
  return;
}



/* Entry: 1028f11b8; end: 1028f11db;  */

void FUN_1028f11b8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = &UNK_110568150;
  func_0x000107c613fc(&UNK_110568150,0x18,7);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_1105681c8;
  func_0x000107c613fc(&UNK_1105681c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  puVar1 = &UNK_1105681f0;
  func_0x000107c613fc(&UNK_1105681f0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10daee748;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c61174(uVar4);
  uVar4 = 1;
  func_0x0001001ca524(1,0,0x90,4,0,0,&UNK_10daee758,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1028f11dc; end: 1028f122b;  */

void FUN_1028f11dc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1028f122c;
  plVar3[8] = lVar2;
  plVar3[9] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028f104c,lVar1,lVar2);
  return;
}



/* Entry: 1028f122c; end: 1028f1267;  */

void FUN_1028f122c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028f1264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028f1268; end: 1028f12d7;  */

void FUN_1028f1268(undefined8 param_1)

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
  plVar3[1] = (long)FUN_1028f12fc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028f12d8; end: 1028f12fb;  */

undefined8 FUN_1028f12d8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028f12fc; end: 1028f12ff;  */

void FUN_1028f12fc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028f1264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028f1300; end: 1028f1323; -[_TtC32NotificationCenterImplementation43NotificationCenterShakeToReportInfoProvider getJiraLabelsByProject:] */

void FUN_1028f1300(void)

{
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028f1324; end: 1028f135f; -[_TtC32NotificationCenterImplementation43NotificationCenterShakeToReportInfoProvider init] */

void FUN_1028f1324(undefined8 param_1)

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



/* Entry: 1028f1360; end: 1028f1393;  */

void FUN_1028f1360(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028f1394; end: 1028f1397; -[_TtC32NotificationCenterImplementation43NotificationCenterShakeToReportInfoProvider .cxx_destruct] */

void FUN_1028f1394(void)

{
  return;
}



/* Entry: 1028f1398; end: 1028f13b7;  */

void FUN_1028f1398(void)

{
  func_0x000107c61168(&PTR_PTR_11286da88);
  return;
}



/* Entry: 1028f13b8; end: 1028f1613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f13b8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = PTR_PTR_1126ab828;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ab830;
  func_0x000107c610f8(PTR_PTR_1126ab830);
  func_0x000107c453e4();
  lVar10 = *(long *)(unaff_x20 + _DAT_112ecb3d8);
  uVar11 = *(ulong *)(lVar10 + 0x10);
  if (uVar11 != 0) {
    uVar12 = 0;
    plVar13 = (long *)(lVar10 + 0x28);
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1028f1614);
        (*pcVar9)();
      }
      uVar12 = uVar12 + 1;
      lVar1 = plVar13[-1];
      lVar2 = *plVar13;
      func_0x000107c614f0(lVar1);
      pcVar9 = *(code **)(lVar2 + 8);
      func_0x000107c615f0(lVar1);
      (*pcVar9)(puVar4);
      func_0x000107c615e8(lVar1);
      plVar13 = plVar13 + 2;
    } while (uVar11 != uVar12);
  }
  func_0x000107c53ce4(puVar3);
  puVar7 = &UNK_110568228;
  puVar5 = puVar7;
  func_0x000107c613fc(&UNK_110568228,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1028f1fe8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110568240;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_78);
  func_0x000107c534b8(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c613fc(&UNK_110568228,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  pcStack_80 = (code *)0x1028f200c;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c75f50;
  puStack_88 = &UNK_110568268;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_78);
  func_0x000107c56f9c(puVar3);
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ab838;
  func_0x000107c610f8(PTR_PTR_1126ab838);
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126ab840;
  func_0x000107c610f8(PTR_PTR_1126ab840);
  func_0x000107c49520();
  func_0x000107c61170(puVar7);
  func_0x000107c5a568();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1028f1614; end: 1028f1677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f1614(void)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112ecb3e8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ecb3e8) = 1;
    lVar1 = unaff_x20 + _DAT_112ecb3e0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001028f0dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1028f1678; end: 1028f17e3; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController viewDidDisappear:] */

void FUN_1028f1678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  uVar2 = param_1;
  func_0x000107c49aa0();
  if ((int)uVar2 != 0) {
    FUN_1028f1614();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1028f17e4; end: 1028f1877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f17e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112ecb3e8) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112ecb3e8) = 1;
      lVar1 = param_1 + _DAT_112ecb3e0;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x0001028f0dcc(param_1);
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028f1878; end: 1028f1ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f1878(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c5edd0(puVar8,param_1,param_2);
    puVar2 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x000107c61170(param_3);
      func_0x0001000293e4(puVar8);
    }
    else {
      (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar1);
      lVar3 = *(long *)(param_3 + _DAT_112ecb3d0);
      func_0x000107c414e4();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
        (**(code **)(lVar9 + 8))(lVar7,lVar1);
        func_0x000107c61170(param_3);
      }
      else {
        func_0x000107c5ed90();
        puVar5 = &UNK_1105682a0;
        func_0x000107c613fc(&UNK_1105682a0,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = param_1;
        *(undefined8 *)(puVar5 + 0x18) = param_2;
        uStack_88 = 0x1028f2014;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1010f39c4;
        puStack_90 = &UNK_1105682b8;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar5 = puStack_80;
        func_0x000107c61434(param_2);
        func_0x000107c61574(puVar5);
        func_0x000107c4462c(lVar4);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(param_3);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar3);
        (**(code **)(lVar9 + 8))(lVar7,lVar1);
      }
    }
  }
  return;
}



/* Entry: 1028f1ac4; end: 1028f1d13;  */

void FUN_1028f1ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (param_1 != 0) {
    ppuVar4 = &puStack_a0;
    ppuVar6 = &puStack_a0;
    ppuVar8 = &puStack_a0;
    puVar2 = &UNK_1105682f0;
    func_0x000107c613fc(&UNK_1105682f0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar3 = &UNK_110568318;
    func_0x000107c613fc(&UNK_110568318,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x1028f201c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1028f2020;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110568330;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110568368;
    func_0x000107c613fc(&UNK_110568368,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar5 = &UNK_110568390;
    func_0x000107c613fc(&UNK_110568390,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1028f2040;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_80 = FUN_1028f2044;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1010f3860;
    puStack_88 = &UNK_1105683a8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1105683e0;
    func_0x000107c613fc(&UNK_1105683e0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    puVar7 = &UNK_110568408;
    func_0x000107c613fc(&UNK_110568408,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_1028f2064;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_80 = FUN_1028f2068;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100e27b38;
    puStack_88 = &UNK_110568420;
    puStack_78 = puVar7;
    func_0x000107c60bc4(&puStack_a0);
    puVar7 = puStack_78;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar7);
    func_0x000107c4c654(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028f1d14; end: 1028f1da3; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f1d14(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + _DAT_112ecb3e0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_112ecb3e8) = 0;
  *(undefined1 *)(param_1 + _DAT_112ecb3f0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "NotificationCenterImplementation/NotificationCenterViewController.swift",0x47
                      ,2,0x8d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f1da4);
  (*pcVar2)();
}



/* Entry: 1028f1da4; end: 1028f1e03; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController initWithNibName:bundle:] */

void FUN_1028f1da4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationCenterImplementation.NotificationCenterViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f1dd0);
  (*pcVar1)();
}



/* Entry: 1028f1e04; end: 1028f1e6b; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028f1e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f1e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f1e04(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecb3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb3d0));
  return;
}



/* Entry: 1028f1e6c; end: 1028f1e8b;  */

void FUN_1028f1e6c(void)

{
  func_0x000107c61168(&PTR_PTR_11286db38);
  return;
}



/* Entry: 1028f1e8c; end: 1028f1e93; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController presentationMode] */

undefined8 FUN_1028f1e8c(void)

{
  return 3;
}



/* Entry: 1028f1e94; end: 1028f1e9b; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController exitMode] */

undefined8 FUN_1028f1e94(void)

{
  return 1;
}



/* Entry: 1028f1e9c; end: 1028f1f77; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController gestureRecognizerShouldBegin:] */

bool FUN_1028f1e9c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  lVar3 = param_5;
  func_0x000107c6148c(param_5,puVar2);
  if (lVar3 == 0) {
    bVar1 = true;
  }
  else {
    func_0x000107c61174(param_5);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    lVar4 = lVar3;
    func_0x000107c5de64(lVar3);
    func_0x000107c61180();
    func_0x000107c5dc98(lVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar4);
    if (ABS(param_1) <= ABS(param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = 0.0 < param_1;
    }
  }
  return bVar1;
}



/* Entry: 1028f1f78; end: 1028f1fbb; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController defaultProjectNameV2] */

void FUN_1028f1f78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070760();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1028f1fbc; end: 1028f1fc3; -[_TtC32NotificationCenterImplementation32NotificationCenterViewController pageViewName] */

undefined8 FUN_1028f1fbc(void)

{
  return 4;
}



/* Entry: 1028f1fc4; end: 1028f1fe7;  */

undefined8 FUN_1028f1fc4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028f1fe8; end: 1028f201f;  */

void FUN_1028f1fe8(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = "setupValdiView()";
  func_0x0001000c10c0("setupValdiView()");
  func_0x000107c61180();
  puVar2 = &UNK_110568228;
  func_0x000107c613fc(&UNK_110568228,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  pcStack_58 = FUN_1028f2088;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110568448;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1028f2020; end: 1028f203f;  */

void FUN_1028f2020(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028f2040; end: 1028f2043;  */

void FUN_1028f2040(void)

{
  return;
}



/* Entry: 1028f2044; end: 1028f2063;  */

void FUN_1028f2044(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028f2064; end: 1028f2067;  */

void FUN_1028f2064(void)

{
  return;
}



/* Entry: 1028f2068; end: 1028f2087;  */

void FUN_1028f2068(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028f2088; end: 1028f20cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f2088(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + _DAT_112ecb3e8) & 1) == 0) {
      *(undefined1 *)(lVar1 + _DAT_112ecb3e8) = 1;
      lVar2 = lVar1 + _DAT_112ecb3e0;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x0001028f0dcc(lVar1);
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028f20d0; end: 1028f223b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1028f20d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 auStack_a0 [3];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1028f240c(0);
  func_0x000107c610f8();
  func_0x000107c615f0();
  func_0x0001028f2324();
  func_0x000100083b20(auStack_a0);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  lVar1 = 0;
  FUN_1028f1198();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c61614(lVar2 + _DAT_112ecb360,0);
  func_0x000107c61614(lVar2 + _DAT_112ecb340,0);
  *(undefined8 *)(lVar2 + _DAT_112ecb368) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112ecb348) = auStack_a0[0];
  *(undefined8 *)(lVar2 + _DAT_112ecb350) = uStack_68;
  *(undefined8 *)(lVar2 + _DAT_112ecb370) = uStack_70;
  *(undefined8 *)(lVar2 + _DAT_112ecb358) = uStack_78;
  plVar3 = &lStack_88;
  lStack_88 = lVar2;
  lStack_80 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  lVar2 = _DAT_112ecb340;
  func_0x000107c61428((long)plVar3 + _DAT_112ecb340,auStack_a0,1,0);
  func_0x000107c61604((long)plVar3 + lVar2,param_2);
  return plVar3;
}



/* Entry: 1028f223c; end: 1028f22ab; -[_TtC32NotificationCenterImplementation34NotificationCenterPresenterBuilder buildPresenterWithUiContainer:delegate:] */

void FUN_1028f223c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1028f20d0(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028f22ac; end: 1028f22b7;  */

void FUN_1028f22ac(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010051fa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1028f22b8; end: 1028f22d7; -[_TtC23NotificationCenterScope23NotificationCenterScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f22b8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ecb4e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028f22d8; end: 1028f236f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f22d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecb4e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028f2370; end: 1028f23c7; -[_TtC23NotificationCenterScope23NotificationCenterScope initWithUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f2370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ecb4e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1028f23c8; end: 1028f23fb;  */

void FUN_1028f23c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028f23fc; end: 1028f240b; -[_TtC23NotificationCenterScope23NotificationCenterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f23fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ecb4e8));
  return;
}


