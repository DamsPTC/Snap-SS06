/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d3f1a8; end: 102d3f1d3;  */

void FUN_102d3f1a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3f1d4; end: 102d3f223;  */

undefined8 FUN_102d3f1d4(void)

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



/* Entry: 102d3f224; end: 102d3f34f;  */

void FUN_102d3f224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac328;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d3f350; end: 102d3f383;  */

undefined1  [16] FUN_102d3f350(void)

{
  return ZEXT816(0x1105c6db8);
}



/* Entry: 102d3f384; end: 102d3f3ab;  */

void FUN_102d3f384(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d3f3ac; end: 102d3f3b3;  */

undefined8 FUN_102d3f3ac(void)

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



/* Entry: 102d3f3b4; end: 102d3f44b;  */

void FUN_102d3f3b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100374b38();
  func_0x000107c613fc();
  FUN_102d3f4a0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102d3f44c; end: 102d3f49f;  */

undefined8 FUN_102d3f44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102d3f4a0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102d3f4a0; end: 102d3f5bf;  */

void FUN_102d3f4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f0fb30,&UNK_10db43118);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102d3ff3c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102d3fe20();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  func_0x000102d3fe54();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  return;
}



/* Entry: 102d3f5c0; end: 102d3f5fb;  */

void FUN_102d3f5c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3f5fc; end: 102d3f64b;  */

void FUN_102d3f5fc(undefined8 *param_1)

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



/* Entry: 102d3f64c; end: 102d3f68f;  */

undefined1  [16] FUN_102d3f64c(void)

{
  return ZEXT816(0x1105c6f38);
}



/* Entry: 102d3f690; end: 102d3f6e3;  */

void FUN_102d3f690(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d3f6e4; end: 102d3f91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d3f6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_6;
  func_0x000107c3e0a8(param_6);
  func_0x000107c61180();
  func_0x0001000285a8(0x112df5dd0,&UNK_10d9c4ad0);
  func_0x000107c61174();
  uVar5 = param_4;
  func_0x000107c3f770();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar5 = param_2;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112eec2c8,&UNK_10db19eb0);
  uVar5 = *(undefined8 *)(param_5 + _DAT_113074f60);
  func_0x000107c61174();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  puVar6 = &UNK_1105c70a0;
  func_0x000107c613fc(&UNK_1105c70a0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,uVar1);
  uVar5 = 0x112f0fc20;
  func_0x0001000285a8(0x112f0fc20,&UNK_10dc15150);
  func_0x000107c613fc();
  pcVar7 = FUN_102d3f9b4;
  func_0x0001000bdd8c(FUN_102d3f9b4,puVar6,uVar5);
  lVar8 = 0;
  func_0x000102d40808();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = param_3;
  *(undefined8 *)(lVar8 + 0x18) = uVar2;
  *(undefined8 *)(lVar8 + 0x20) = uVar4;
  *(undefined8 *)(lVar8 + 0x28) = uVar3;
  *(code **)(lVar8 + 0x30) = pcVar7;
  *(long *)(unaff_x20 + 0x10) = lVar8;
  func_0x000107c6157c();
  FUN_102d4009c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(lVar8);
  return unaff_x20;
}



/* Entry: 102d3f920; end: 102d3f9b3;  */

void FUN_102d3f920(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102d3f9b4; end: 102d3f9bb;  */

void FUN_102d3f9b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102d3f9bc; end: 102d3f9df;  */

void FUN_102d3f9bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3f9e0; end: 102d3f9eb;  */

void FUN_102d3f9e0(void)

{
  return;
}



/* Entry: 102d3f9ec; end: 102d3fa0b;  */

void FUN_102d3f9ec(void)

{
  func_0x000107c61168(&PTR_PTR_112f0fc68);
  return;
}



/* Entry: 102d3fa0c; end: 102d3facb;  */

undefined8 FUN_102d3fa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102d3fcc4(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102d3facc; end: 102d3fc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3facc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c3e26c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    lVar6 = *(long *)(unaff_x20 + 0x10);
    puVar2 = &UNK_1105c70e8;
    func_0x000107c613fc(&UNK_1105c70e8,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + _DAT_112f0ff20) + _DAT_112f95f28);
    puVar3 = &UNK_1105c7110;
    func_0x000107c613fc(&UNK_1105c7110,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_102d3fd94;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_50 = 0x102d3fd9c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1105c7128;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(puVar1);
    func_0x000107c615f0(uVar5);
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(uVar5);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    if (lVar6 == 0) {
      func_0x000107c61170(puVar1);
    }
    else {
      func_0x000107c61174();
      func_0x000107c4f3ec();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar1);
    }
  }
  else {
    func_0x000107c4f3ec();
    func_0x000107c61180();
  }
  return;
}



/* Entry: 102d3fc74; end: 102d3fc9f;  */

void FUN_102d3fc74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3fca0; end: 102d3fca3;  */

void FUN_102d3fca0(void)

{
  return;
}



/* Entry: 102d3fca4; end: 102d3fcc3;  */

void FUN_102d3fca4(void)

{
  FUN_102d3facc();
  return;
}



/* Entry: 102d3fcc4; end: 102d3fd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3fcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar2 = 0;
  FUN_102d41418();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f0ff08) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f0ff10) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f0ff18) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f0ff20) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  *(long **)(unaff_x20 + 0x10) = plVar4;
  func_0x000107c61174();
  FUN_102d40914();
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 102d3fd94; end: 102d3fdbf;  */

void FUN_102d3fd94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102d3fdc0; end: 102d3fddf;  */

void FUN_102d3fdc0(void)

{
  func_0x000107c61168(&PTR_PTR_112f0fd08);
  return;
}



/* Entry: 102d3fde0; end: 102d3fed3;  */

void FUN_102d3fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102d3fed4; end: 102d3feef;  */

/* WARNING: Possible PIC construction at 0x000102d3fee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3fee4) */

void FUN_102d3fed4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d3fef0; end: 102d3ff3b;  */

void FUN_102d3fef0(void)

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



/* Entry: 102d3ff3c; end: 102d3ffb7;  */

void FUN_102d3ff3c(undefined8 param_1)

{
  if (lRam0000000112f0fd98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72aebc);
  return;
}



/* Entry: 102d3ffb8; end: 102d40043;  */

void FUN_102d3ffb8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5350;
  func_0x000107c610f8();
  func_0x000107c484e0();
  lVar2 = 0;
  func_0x000102d41534();
  func_0x000107c613fc();
  *(undefined **)(lVar2 + 0x10) = puVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100374bc4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x0001037c6338(lVar2,uVar3);
  *param_1 = lVar2;
  return;
}



/* Entry: 102d40044; end: 102d4009b;  */

void FUN_102d40044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 102d4009c; end: 102d403a3;  */

void FUN_102d4009c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar9);
  func_0x0001000d224c(&puStack_80);
  func_0x000107c61574(uVar9);
  puVar2 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    puVar1 = puStack_80;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    puVar2 = puVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar2 != (undefined *)0x0) {
      FUN_102d403a4();
      if (puVar1 == (undefined *)0x0) {
        func_0x000107c615e8(puVar2);
      }
      else {
        uVar9 = 9;
        func_0x000103bfd6b4(9);
        uVar3 = 0;
        func_0x0001044ff1bc(0);
        func_0x000107c610f8();
        uVar4 = 1;
        func_0x0001044fe810(1,uVar9,param_2,0,0,uVar3);
        func_0x0001000d224c(&puStack_80);
        if (puStack_80 != (undefined *)0x0) {
          puVar5 = PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          lVar6 = 0x112d38dc0;
          func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
          func_0x000107c613fc();
          *(undefined8 *)(lVar6 + 0x18) = 2;
          *(undefined8 *)(lVar6 + 0x10) = 1;
          uVar9 = 0;
          FUN_102d40694(0,0x112d4d630,&PTR_PTR_1126ae6a8);
          *(undefined8 *)(lVar6 + 0x38) = uVar9;
          *(undefined **)(lVar6 + 0x20) = puVar1;
          uVar9 = 0x112d38dd0;
          FUN_102d40694(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61174(puVar1);
          func_0x000107c600f0(lVar6);
          func_0x000107c4a8a4(puVar5);
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          func_0x000107c3d0bc(puStack_80);
          func_0x000107c615e8(puStack_80);
          func_0x000107c61170(puVar5);
        }
        puVar5 = puVar1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar9);
        }
        puVar7 = puVar2;
        func_0x000107c4b288(puVar2);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        puVar5 = &UNK_1105c7198;
        func_0x000107c613fc(&UNK_1105c7198,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        pcStack_60 = FUN_102d40668;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1016c1d3c;
        puStack_68 = &UNK_1105c71b0;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c61574(puStack_58);
        func_0x000107c5dc68(puVar7);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(puVar7);
        func_0x0001000d224c(&puStack_80);
        puVar5 = puStack_80;
        if (puStack_80 != (undefined *)0x0) {
          func_0x000107c506c0(puStack_80);
          func_0x000107c615e8(puVar5);
        }
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar1);
      }
    }
  }
  return;
}



/* Entry: 102d403a4; end: 102d404af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d403a4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_50 [24];
  long alStack_38 [3];
  long *plVar4;
  
  lVar3 = _DAT_112f95ef0;
  lVar2 = _DAT_112f95ee8;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f95f38);
  alStack_38[0] = *(long *)(lVar5 + _DAT_112f95ee0);
  if (alStack_38[0] == 1) {
    func_0x000107c61428(lVar5 + _DAT_112f95ef0,alStack_38,0,0);
    lVar2 = *(long *)(lVar5 + lVar3);
    if (lVar2 == 0) {
      return 0;
    }
    plVar4 = (long *)&DAT_112f95ff0;
  }
  else {
    if (alStack_38[0] != 0) {
      func_0x000107c60614(&UNK_110696538,alStack_38,&UNK_110696538,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d404b0);
      (*pcVar1)();
    }
    func_0x000107c61428(lVar5 + _DAT_112f95ee8,alStack_38,0,0);
    lVar2 = *(long *)(lVar5 + lVar2);
    if (lVar2 == 0) {
      return 0;
    }
    plVar4 = (long *)&DAT_112f96038;
  }
  lVar3 = *plVar4;
  func_0x000107c61428((undefined8 *)(lVar2 + lVar3),auStack_50,0,0);
  uVar6 = *(undefined8 *)(lVar2 + lVar3);
  func_0x000107c61174(uVar6);
  return uVar6;
}



/* Entry: 102d404b0; end: 102d40667;  */

void FUN_102d404b0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 != 0)) {
      func_0x000107c61574();
    }
    else {
      puVar2 = &UNK_1105c71e8;
      func_0x000107c613fc(&UNK_1105c71e8,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x102d40828;
      *(long *)(puVar2 + 0x18) = param_3;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_78 = FUN_102d40854;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100fe2610;
      puStack_80 = &UNK_1105c7200;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_70;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar2);
      pcStack_78 = (code *)0x102d40670;
      puStack_70 = (undefined *)0x0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100de6bdc;
      puStack_80 = &UNK_1105c7228;
      ppuVar4 = &puStack_98;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_70);
      pcStack_78 = (code *)0x102d40674;
      puStack_70 = (undefined *)0x0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100fe2654;
      puStack_80 = &UNK_1105c7250;
      ppuVar5 = &puStack_98;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c744(param_1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61578(param_3,2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102d40668; end: 102d40693;  */

void FUN_102d40668(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((param_1 == 0) || (param_2 != 0)) {
      func_0x000107c61574();
    }
    else {
      puVar3 = &UNK_1105c71e8;
      func_0x000107c613fc(&UNK_1105c71e8,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x102d40828;
      *(long *)(puVar3 + 0x18) = lVar2;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_78 = FUN_102d40854;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100fe2610;
      puStack_80 = &UNK_1105c7200;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_70;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(lVar2);
      func_0x000107c61574(puVar3);
      pcStack_78 = (code *)0x102d40670;
      puStack_70 = (undefined *)0x0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100de6bdc;
      puStack_80 = &UNK_1105c7228;
      ppuVar5 = &puStack_98;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_70);
      pcStack_78 = (code *)0x102d40674;
      puStack_70 = (undefined *)0x0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100fe2654;
      puStack_80 = &UNK_1105c7250;
      ppuVar6 = &puStack_98;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c744(param_1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61578(lVar2,2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102d40694; end: 102d406d3;  */

void FUN_102d40694(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d406d4; end: 102d407bf;  */

void FUN_102d406d4(void)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x0001000dbbdc();
    pcStack_58 = FUN_102d407c0;
    uStack_50 = 0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105c7278;
    ppuVar1 = &puStack_78;
    func_0x000107c60bc4(ppuVar1);
    uVar2 = 0x65726f736e6f7053;
    func_0x000107c5fadc(0x65726f736e6f7053,0xed0000736e654c64);
    func_0x000107c540a8(lStack_48);
    func_0x000107c61170(uVar2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 102d407c0; end: 102d407c3;  */

void FUN_102d407c0(void)

{
  return;
}



/* Entry: 102d407c4; end: 102d40853;  */

void FUN_102d407c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d40854; end: 102d40873;  */

void FUN_102d40854(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102d40874; end: 102d40893;  */

void FUN_102d40874(long param_1,long param_2)

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



/* Entry: 102d40894; end: 102d40913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d40894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0ff08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0ff10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0ff18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0ff20) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d40914; end: 102d40cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d40914(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  long *plVar10;
  
  lVar9 = _DAT_112f95ef0;
  lVar8 = _DAT_112f95ee8;
  lVar11 = *(long *)(*(long *)(unaff_x20 + _DAT_112f0ff20) + _DAT_112f95f38);
  alStack_78[0] = *(long *)(lVar11 + _DAT_112f95ee0);
  if (alStack_78[0] == 1) {
    func_0x000107c61428(lVar11 + _DAT_112f95ef0,alStack_78,0,0);
    lVar8 = *(long *)(lVar11 + lVar9);
    if (lVar8 == 0) {
      return 0;
    }
    plVar10 = (long *)&DAT_112f95ff0;
  }
  else {
    if (alStack_78[0] != 0) {
      func_0x000107c60614(&UNK_110696538,alStack_78,&UNK_110696538,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d40cac);
      (*pcVar1)();
    }
    func_0x000107c61428(lVar11 + _DAT_112f95ee8,alStack_78,0,0);
    lVar8 = *(long *)(lVar11 + lVar8);
    if (lVar8 == 0) {
      return 0;
    }
    plVar10 = (long *)&DAT_112f96038;
  }
  lVar9 = *plVar10;
  func_0x000107c61428((undefined8 *)(lVar8 + lVar9),auStack_90,0,0);
  uVar12 = *(undefined8 *)(lVar8 + lVar9);
  puVar2 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4831c(puVar2);
  puVar3 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c3e6c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  FUN_102d40e00();
  puVar4 = PTR_PTR_1126b20d8;
  func_0x000107c61168(PTR_PTR_1126b20d8);
  func_0x000107c3eec8();
  func_0x000107c61180();
  lVar8 = 0x112d4d630;
  FUN_102d41448(0x112d4d630,&PTR_PTR_1126ae6a8,0x112d530b8,&UNK_10d9db4e0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = uVar12;
  puVar5 = PTR_PTR_1126b5b58;
  func_0x000107c610f8(PTR_PTR_1126b5b58);
  uVar6 = 0;
  FUN_102d414c0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  lVar9 = lVar8;
  func_0x000107c5fc48(lVar8,uVar6);
  func_0x000107c61574(lVar8);
  func_0x000107c4743c(puVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar9);
  func_0x000107c61174(puVar5);
  puVar7 = puVar4;
  func_0x000107c5e660(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0ff18);
  func_0x0001091f3ad0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  func_0x000107c3ed80(uVar6);
  func_0x000107c61180();
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f0ff10));
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  return 1;
}



/* Entry: 102d40cac; end: 102d40ccf;  */

void FUN_102d40cac(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 102d40cd0; end: 102d40ceb;  */

void FUN_102d40cd0(long param_1,long param_2)

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



/* Entry: 102d40cec; end: 102d40dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d40cec(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_50 [24];
  long alStack_38 [3];
  
  lVar5 = _DAT_112f95ef0;
  lVar4 = _DAT_112f95ee8;
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f0ff20) + _DAT_112f95f38);
  alStack_38[0] = *(long *)(lVar3 + _DAT_112f95ee0);
  if (alStack_38[0] == 1) {
    func_0x000107c61428(lVar3 + _DAT_112f95ef0,alStack_38,0,0);
    lVar4 = *(long *)(lVar3 + lVar5);
    if (lVar4 == 0) {
      return;
    }
    plVar2 = (long *)&DAT_11380bb50;
  }
  else {
    if (alStack_38[0] != 0) {
      func_0x000107c60614(&UNK_110696538,alStack_38,&UNK_110696538,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d40e00);
      (*pcVar1)();
    }
    func_0x000107c61428(lVar3 + _DAT_112f95ee8,alStack_38,0,0);
    lVar4 = *(long *)(lVar3 + lVar4);
    if (lVar4 == 0) {
      return;
    }
    plVar2 = (long *)&DAT_112f96048;
  }
  lVar5 = *plVar2;
  func_0x000107c61428(lVar4 + lVar5,auStack_50,0,0);
  lVar4 = lVar4 + lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c5b7c0();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 102d40e00; end: 102d40fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d40e00(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_b0;
  func_0x000107c30a3c();
  func_0x000107c61180();
  lVar9 = _DAT_112f0ff08;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f0ff08);
  *(undefined8 *)(unaff_x20 + _DAT_112f0ff08) = param_1;
  func_0x000107c615e8(uVar8);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (lVar9 != 0) {
    FUN_102d414c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar9;
    func_0x000107c615f0(lVar9);
    func_0x000107c60108(0x3fd0000000000000);
    func_0x000107c52714(lVar9);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar2);
  }
  puVar4 = &UNK_1105c72b0;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_1105c72b0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x000107c613fc(&UNK_1105c72b0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102d41438;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_1105c72c8;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  uStack_90 = 0x102d41440;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_1105c72f0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  return puVar5;
}



/* Entry: 102d40fe0; end: 102d412ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d40fe0(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + _DAT_112f0ff08);
    if (lVar5 != 0) {
      func_0x000107c615f0(lVar5);
      func_0x000107c61170(lVar3);
      lVar3 = 0x112d360b0;
      FUN_102d41448(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 3;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      lVar4 = param_1;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d412f0);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x20) = lVar4;
      uVar2 = 0;
      FUN_102d414c0(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c5fc48(lVar3,uVar2);
      func_0x000107c61574(lVar3);
      func_0x000107c497d0(lVar5);
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f0ff20);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar5 = *(long *)(lVar4 + _DAT_112f95f38);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar3 = _DAT_112f95ef0;
    func_0x000107c61428(lVar5 + _DAT_112f95ef0,auStack_88,0,0);
    lVar3 = *(long *)(lVar5 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      lVar5 = _DAT_11380bb68;
      func_0x000107c61428(lVar3 + _DAT_11380bb68,auStack_a0,1,0);
      func_0x000107c61604(lVar3 + lVar5,param_1);
      lVar5 = lVar3;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + _DAT_112f0ff08);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5a048(param_1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61428(param_2 + 0x10,auStack_d0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + _DAT_112f0ff20);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    uVar2 = *(undefined8 *)(lVar3 + _DAT_112f95f28);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c3e2c0(uVar2);
    func_0x000107c615e8(uVar2);
  }
  uVar2 = 0;
  func_0x000102d417fc(0);
  func_0x000107c610f8();
  func_0x000107c47ac0();
  func_0x000107c3d614(param_1);
  func_0x000107c41c30(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102d412f0; end: 102d4135f;  */

void FUN_102d412f0(code *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102d40cec();
    func_0x000107c61170(param_3);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 102d41360; end: 102d413bf; -[_TtC24SponsoredLensLaunchScope33SponsoredLensCameraLaunchWorkflow init] */

void FUN_102d41360(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScope.SponsoredLensCameraLaunchWorkflow",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4138c);
  (*pcVar1)();
}



/* Entry: 102d413c0; end: 102d41417; -[_TtC24SponsoredLensLaunchScope33SponsoredLensCameraLaunchWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d413c0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0ff10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0ff18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0ff20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0ff08));
  return;
}



/* Entry: 102d41418; end: 102d41437;  */

void FUN_102d41418(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2198);
  return;
}



/* Entry: 102d41438; end: 102d41447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41438(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + _DAT_112f0ff08);
    if (lVar5 != 0) {
      func_0x000107c615f0(lVar5);
      func_0x000107c61170(lVar3);
      lVar3 = 0x112d360b0;
      FUN_102d41448(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 3;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      lVar4 = param_1;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d412f0);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x20) = lVar4;
      uVar2 = 0;
      FUN_102d414c0(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c5fc48(lVar3,uVar2);
      func_0x000107c61574(lVar3);
      func_0x000107c497d0(lVar5);
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f0ff20);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar5 = *(long *)(lVar4 + _DAT_112f95f38);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar3 = _DAT_112f95ef0;
    func_0x000107c61428(lVar5 + _DAT_112f95ef0,auStack_88,0,0);
    lVar3 = *(long *)(lVar5 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      lVar5 = _DAT_11380bb68;
      func_0x000107c61428(lVar3 + _DAT_11380bb68,auStack_a0,1,0);
      func_0x000107c61604(lVar3 + lVar5,param_1);
      lVar5 = lVar3;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b8,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + _DAT_112f0ff08);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5a048(param_1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + _DAT_112f0ff20);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(lVar5 + _DAT_112f95f28);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar5);
    func_0x000107c3e2c0(uVar2);
    func_0x000107c615e8(uVar2);
  }
  uVar2 = 0;
  func_0x000102d417fc(0);
  func_0x000107c610f8();
  func_0x000107c47ac0();
  func_0x000107c3d614(param_1);
  func_0x000107c41c30(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102d41448; end: 102d414bf;  */

void FUN_102d41448(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102d414c0(0,param_1,param_2);
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



/* Entry: 102d414c0; end: 102d414ff;  */

void FUN_102d414c0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d41500; end: 102d4150f;  */

void FUN_102d41500(long param_1,long param_2)

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



/* Entry: 102d41510; end: 102d41553;  */

void FUN_102d41510(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d41554; end: 102d4155b; -[_TtC24SponsoredLensLaunchScope26SponsoredLensScopeLauncher launchFeatureWith:owner:] */

void FUN_102d41554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_launchFeatureWithScope_owner__112600800);
  return;
}



/* Entry: 102d4155c; end: 102d41563; -[_TtC24SponsoredLensLaunchScope26SponsoredLensScopeLauncher endLaunchedFeature] */

void FUN_102d4155c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 102d41564; end: 102d4166b; -[_TtC24SponsoredLensLaunchScope26SponsoredLensScopeLauncher endLaunchedFeatureWithCompletion:] */

void FUN_102d41564(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c(param_1);
    ppuVar5 = (undefined **)0x0;
    uVar4 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_1105c7328;
    func_0x000107c613fc(&UNK_1105c7328,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = 0x102d41674;
    uStack_50 = 0x102d41674;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1105c7340;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
  }
  func_0x000107c42840(uVar2);
  func_0x00010058d43c(uVar4,puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 102d4166c; end: 102d4169b; -[_TtC24SponsoredLensLaunchScope26SponsoredLensScopeLauncher isLaunched] */

void FUN_102d4166c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_isLaunched_1125fb298)
  ;
  return;
}



/* Entry: 102d4169c; end: 102d416a3; -[_TtC24SponsoredLensLaunchScope22BlockingViewController shouldPopToRootViewController] */

undefined8 FUN_102d4169c(void)

{
  return 0;
}



/* Entry: 102d416a4; end: 102d4174f; -[_TtC24SponsoredLensLaunchScope22BlockingViewController initWithNibName:bundle:] */

undefined1 * FUN_102d416a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  func_0x000102d417fc();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 102d41750; end: 102d417cb; -[_TtC24SponsoredLensLaunchScope22BlockingViewController initWithCoder:] */

undefined1 * FUN_102d41750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000102d417fc();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102d417cc; end: 102d4181b;  */

void FUN_102d417cc(void)

{
  func_0x000102d417fc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d4181c; end: 102d41827; -[SCSponsoredLensActivationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d4181c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f10018;
  func_0x000107c61428(param_1 + _DAT_112f10018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d41828; end: 102d41833; -[SCSponsoredLensActivationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f10018;
  func_0x000107c61428(param_1 + _DAT_112f10018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d41834; end: 102d4183f; -[SCSponsoredLensActivationEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41834(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f10020;
  func_0x000107c61428(param_1 + _DAT_112f10020,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d41840; end: 102d4184b; -[SCSponsoredLensActivationEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f10020;
  func_0x000107c61428(param_1 + _DAT_112f10020,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d4184c; end: 102d41857; -[SCSponsoredLensActivationEntryPoint sponsoredLensLaunchScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d4184c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f10028;
  func_0x000107c61428(param_1 + _DAT_112f10028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d41858; end: 102d41863; -[SCSponsoredLensActivationEntryPoint setSponsoredLensLaunchScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f10028;
  func_0x000107c61428(param_1 + _DAT_112f10028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d41864; end: 102d4186f; -[SCSponsoredLensActivationEntryPoint lensMetadataRetrievingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41864(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f10030;
  func_0x000107c61428(param_1 + _DAT_112f10030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d41870; end: 102d4187b; -[SCSponsoredLensActivationEntryPoint setLensMetadataRetrievingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41870(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f10030;
  func_0x000107c61428(param_1 + _DAT_112f10030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d4187c; end: 102d41887; -[SCSponsoredLensActivationEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d4187c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f10038;
  func_0x000107c61428(param_1 + _DAT_112f10038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d41888; end: 102d41893; -[SCSponsoredLensActivationEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f10038;
  func_0x000107c61428(param_1 + _DAT_112f10038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d41894; end: 102d4189f; -[SCSponsoredLensActivationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d41894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f10040;
  func_0x000107c61428(param_1 + _DAT_112f10040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d418a0; end: 102d418e3;  */

void FUN_102d418a0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d418e4; end: 102d418ef; -[SCSponsoredLensActivationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d418e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f10040;
  func_0x000107c61428(param_1 + _DAT_112f10040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d418f0; end: 102d41943;  */

void FUN_102d418f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d41944; end: 102d41cd3;  */

/* WARNING: Possible PIC construction at 0x000102d41a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d41c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d41c88) */
/* WARNING: Removing unreachable block (ram,0x000102d41c78) */
/* WARNING: Removing unreachable block (ram,0x000102d41ca8) */
/* WARNING: Removing unreachable block (ram,0x000102d41c98) */
/* WARNING: Removing unreachable block (ram,0x000102d41be8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102d41bd8) */
/* WARNING: Removing unreachable block (ram,0x000102d41bc8) */
/* WARNING: Removing unreachable block (ram,0x000102d41bb8) */
/* WARNING: Removing unreachable block (ram,0x000102d41b08) */
/* WARNING: Removing unreachable block (ram,0x000102d41ac8) */
/* WARNING: Removing unreachable block (ram,0x000102d41ab4) */
/* WARNING: Removing unreachable block (ram,0x000102d41a70) */
/* WARNING: Removing unreachable block (ram,0x000102d41c68) */

void FUN_102d41944(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4af24();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5b7e0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4b280();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c3f0f8();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c3e0b0();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_102d3f9ec();
              func_0x000107c613fc();
              func_0x000107c3e0a8();
              func_0x000107c61180();
              func_0x0001000285a8(0x112df5dd0,&UNK_10d9c4ad0);
              func_0x000107c61174(lVar3);
              func_0x000107c3f770();
              func_0x000107c61180();
              func_0x0001000bda74();
              lVar1 = lVar4;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102d41cd4; end: 102d41cdb;  */

void FUN_102d41cd4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102d41cdc; end: 102d41d03; -[SCSponsoredLensActivationEntryPoint begin] */

void FUN_102d41cdc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d41944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d41d04; end: 102d41d47; -[SCSponsoredLensActivationEntryPoint end] */

void FUN_102d41d04(undefined8 param_1)

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



/* Entry: 102d41d48; end: 102d4209b;  */

void FUN_102d41d48(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
         (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c80();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10ecfb0)) ||
           (func_0x000107c605b8(0xd000000000000018,0x800000010ef13050,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5965c();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10e09d0)) ||
             (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1f630,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55dc0();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ecf30)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53024();
            }
            else {
              uVar2 = 0x7265537261427261;
              if (((param_2 != 0x7265537261427261) || (param_3 != -0x12ffff8c9a9c968a)) &&
                 (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SponsoredLensLaunchScope/SCSponsoredLensActivationEntryPoint.swift"
                                    ,0x42,2,0x41,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4209c);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c52898();
            }
          }
        }
      }
      goto LAB_102d41ddc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_102d41ddc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102d4209c; end: 102d42147; -[SCSponsoredLensActivationEntryPoint setValue:forIvarName:] */

void FUN_102d4209c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102d41d48(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102d42148; end: 102d4220b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d42148(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f10018,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f10020,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f10028,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f10030,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f10038,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f10040,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f10048) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d4220c; end: 102d4222b; -[SCSponsoredLensActivationEntryPoint init] */

void FUN_102d4220c(void)

{
  FUN_102d42148();
  return;
}



/* Entry: 102d4222c; end: 102d4225f;  */

void FUN_102d4222c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d42260; end: 102d422e7; -[SCSponsoredLensActivationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d42260(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f10018);
  func_0x000107c61610(param_1 + _DAT_112f10020);
  func_0x000107c61610(param_1 + _DAT_112f10028);
  func_0x000107c61610(param_1 + _DAT_112f10030);
  func_0x000107c61610(param_1 + _DAT_112f10038);
  func_0x000107c61610(param_1 + _DAT_112f10040);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f10048));
  return;
}



/* Entry: 102d422e8; end: 102d42307;  */

void FUN_102d422e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2320);
  return;
}



/* Entry: 102d42308; end: 102d4242b;  */

long FUN_102d42308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x00010071cfd8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010071d058();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010071d094();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 102d4242c; end: 102d4246f;  */

void FUN_102d4242c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d42470; end: 102d424b3;  */

undefined1  [16] FUN_102d42470(void)

{
  return ZEXT816(0x1105c7480);
}



/* Entry: 102d424b4; end: 102d42507;  */

void FUN_102d424b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d42508; end: 102d42c0f;  */

void FUN_102d42508(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x00010037d08c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  func_0x0001000285a8(0x112f10178,&UNK_10db436a8);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar10;
  puVar10 = PTR_PTR_1126ac330;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef9e350);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar12 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1a230);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10ae90);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10aec0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uStack_c0);
  *(undefined8 *)(param_2 + 0x68) = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 102d42c10; end: 102d42c4b;  */

void FUN_102d42c10(void)

{
  long unaff_x20;
  
  FUN_102d42508(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102d42c4c; end: 102d4326f;  */

void FUN_102d42c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  func_0x0001000285a8(0x112f10178,&UNK_10db436a8);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  uVar3 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126ac330;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef9e350);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1a230);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10ae90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10aec0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61574(param_11);
  *(undefined **)(unaff_x20 + 0x68) = puVar1;
  return;
}



/* Entry: 102d43270; end: 102d43303;  */

void FUN_102d43270(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}


