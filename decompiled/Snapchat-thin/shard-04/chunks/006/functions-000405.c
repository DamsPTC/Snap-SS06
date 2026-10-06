/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036c6208; end: 1036c6277;  */

void FUN_1036c6208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61574();
    func_0x000107c4b1dc(uVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    uStack_50 = param_3;
    func_0x000107c614b0(param_3);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fb18(&uStack_50,uVar2);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 1036c6278; end: 1036c6393;  */

undefined * FUN_1036c6278(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c45330();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c5c680(param_1);
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c411a8(param_1);
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c49d60(param_1);
    func_0x000107c61180();
    func_0x000107c4b414(param_1);
    func_0x000107c61180();
    uVar5 = 0;
    if (param_3 != 0) {
      func_0x000107c5fadc(param_2,param_3);
      uVar5 = param_2;
    }
    puVar6 = PTR_PTR_1126ad460;
    func_0x000107c610f8(PTR_PTR_1126ad460);
    func_0x000107c46e54();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar5);
  }
  return puVar6;
}



/* Entry: 1036c6394; end: 1036c6407;  */

undefined8 FUN_1036c6394(undefined8 param_1)

{
  FUN_1036c85cc();
  return param_1;
}



/* Entry: 1036c6408; end: 1036c641f;  */

void FUN_1036c6408(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1036c5888();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1036c6420; end: 1036c644b;  */

void FUN_1036c6420(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036c644c; end: 1036c64b7;  */

void FUN_1036c644c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_90;
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar7 = *(long *)(lVar2 + 0xb0);
    func_0x000107c6157c(lVar7);
    func_0x000107c61574(lVar2);
    if ((lVar7 != 0) && (func_0x000107c61574(lVar7), lVar1 == lVar7)) {
      func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61648();
      if (lVar3 != 0) {
        pcVar4 = "dismissActivePresentation()";
        func_0x0001000c10c0("dismissActivePresentation()");
        func_0x000107c61180();
        puVar5 = &UNK_1106809c8;
        func_0x000107c613fc(&UNK_1106809c8,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,lVar3);
        uStack_70 = 0x1036c64b4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_110680e40;
        puStack_68 = puVar5;
        func_0x000107c60bc4(&puStack_90);
        func_0x000107c61574(puStack_68);
        func_0x000107c4e590(pcVar4);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61574(lVar3);
        func_0x000107c615e8(pcVar4);
      }
    }
  }
  return;
}



/* Entry: 1036c64b8; end: 1036c659b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c64b8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87460);
  lVar4 = puVar1[1];
  if (lVar4 != 0) {
    uVar5 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87430);
    func_0x000107c4ab28();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4500c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c5fadc(uVar5,lVar4);
      func_0x000107c3fac4(lVar3);
      func_0x000107c6142c(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036c659c; end: 1036c6663;  */

/* WARNING: Possible PIC construction at 0x0001036c6620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c6624) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c659c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87460);
  lVar4 = puVar1[1];
  if (lVar4 == 0) {
    return;
  }
  uVar5 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87430);
  func_0x000107c4ab28();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4500c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar5,lVar4);
    func_0x000107c3fac4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 1036c6664; end: 1036c6687; -[_TtC32SCLensPlusServicesImplementation29ImagineLensCaaSCameraLauncher dealloc] */

void FUN_1036c6664(void)

{
  func_0x000107c61174();
  FUN_1036c64b8();
  return;
}



/* Entry: 1036c6688; end: 1036c6723; -[_TtC32SCLensPlusServicesImplementation29ImagineLensCaaSCameraLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c6688(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87428));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87430));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87438));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87440));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87448));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87450));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f87460 + 8))
  ;
  return;
}



/* Entry: 1036c6724; end: 1036c6853;  */

/* WARNING: Possible PIC construction at 0x0001036c6778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c691c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c6de4) */
/* WARNING: Removing unreachable block (ram,0x0001036c6dc0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6db0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6cf0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6cb0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c88) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c68) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c48) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c28) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c08) */
/* WARNING: Removing unreachable block (ram,0x0001036c6be0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6ba8) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b08) */
/* WARNING: Removing unreachable block (ram,0x0001036c6aa8) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b20) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b00) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a98) */
/* WARNING: Removing unreachable block (ram,0x0001036c6920) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a5c) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a48) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a60) */
/* WARNING: Removing unreachable block (ram,0x0001036c677c) */
/* WARNING: Removing unreachable block (ram,0x0001036c6838) */
/* WARNING: Removing unreachable block (ram,0x0001036c68bc) */
/* WARNING: Removing unreachable block (ram,0x0001036c6780) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b4c) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c6724(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112f87458) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f87420);
    func_0x000107c3eedc(uVar1);
    func_0x000107c61180();
    func_0x000107c49f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1036c6854; end: 1036c68bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c6854(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1036c68bc(param_2);
    *(undefined1 *)(param_1 + _DAT_112f87458) = 0;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036c68bc; end: 1036c6e17;  */

/* WARNING: Possible PIC construction at 0x0001036c691c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c6b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c6de4) */
/* WARNING: Removing unreachable block (ram,0x0001036c6dc0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6db0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6cf0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6cb0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c88) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c68) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c48) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c28) */
/* WARNING: Removing unreachable block (ram,0x0001036c6c08) */
/* WARNING: Removing unreachable block (ram,0x0001036c6be0) */
/* WARNING: Removing unreachable block (ram,0x0001036c6ba8) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b08) */
/* WARNING: Removing unreachable block (ram,0x0001036c6aa8) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b20) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b00) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a98) */
/* WARNING: Removing unreachable block (ram,0x0001036c6920) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a5c) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a48) */
/* WARNING: Removing unreachable block (ram,0x0001036c6a60) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b4c) */
/* WARNING: Removing unreachable block (ram,0x0001036c6b5c) */

void FUN_1036c68bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1036c6e18; end: 1036c6f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c6e18(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f87420);
  uVar1 = uVar6;
  func_0x000107c3eedc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49f74();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    FUN_1036c659c();
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    func_0x000107c3eedc(uVar6);
    func_0x000107c61180();
    puVar3 = &UNK_110680f18;
    func_0x000107c613fc(&UNK_110680f18,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110680f68;
    func_0x000107c613fc(&UNK_110680f68,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    pcStack_50 = FUN_1036c88c4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_110680f80;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c42840(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1036c6f64; end: 1036c711b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c6f64(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f87460);
  uVar7 = puVar1[1];
  if (uVar7 != 0) {
    uVar8 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87430);
    func_0x000107c4ab28();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4500c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c6142c(uVar7);
    }
    else {
      func_0x000107c5fadc(uVar8,uVar7);
      func_0x000107c3fac4(lVar3);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(lVar3);
    }
  }
  uVar7 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar7 = param_2 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87430);
    func_0x000107c4ab28();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar6 = 0x800000010f159700;
      uVar4 = 0xd00000000000001d;
      func_0x000100e35e30(0xd00000000000001d,0x800000010f159700);
      uVar5 = uVar4;
      func_0x000107c5ee20();
      uVar7 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5a8a0(lVar3);
      func_0x00010006c090(uVar4,uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(lVar3);
      uVar7 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = param_2;
      func_0x000107c6142c(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1036c711c; end: 1036c726b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c711c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  uVar5 = uStack_58;
  func_0x000107c45188();
  func_0x000107c615e8(uStack_58);
  if (((int)uVar5 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f87440);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f87448);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f87450);
    lVar3 = 0;
    func_0x0001036cb098();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61614(lVar4 + _DAT_112f87610,0);
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f87618);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f875f0);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined8 *)(lVar4 + _DAT_112f875f8) = uVar5;
    *(undefined8 *)(lVar4 + _DAT_112f87600) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112f87608) = uVar6;
    puVar2 = PTR_s_init_1125d9248;
    lStack_68 = lVar4;
    lStack_60 = lVar3;
    func_0x000107c61434(param_2);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar7);
    func_0x000107c6157c(uVar6);
    func_0x000107c61154(&lStack_68,puVar2);
  }
  return;
}



/* Entry: 1036c726c; end: 1036c76ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036c726c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  plVar16 = &lStack_e0;
  lVar17 = param_2[4];
  if (lVar17 == 1) {
    puVar5 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    puVar13 = &UNK_110681080;
    func_0x000107c613fc(&UNK_110681080,0x18,7);
    func_0x000107c61614(puVar13 + 0x10,0);
    puVar9 = &UNK_110680f18;
    puVar6 = puVar9;
    func_0x000107c613fc(&UNK_110680f18,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar12 = &UNK_1106810a8;
    func_0x000107c613fc(&UNK_1106810a8,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar6;
    *(undefined **)(puVar12 + 0x18) = puVar13;
    uVar7 = 0;
    FUN_1036cc7cc(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c6157c(puVar13);
    puVar8 = puVar5;
    FUN_1036c8d4c(puVar5,FUN_1036c94cc,puVar12,uVar7);
    puVar12 = &UNK_1106810d0;
    func_0x000107c613fc(&UNK_1106810d0,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar13;
    *(undefined **)(puVar12 + 0x18) = puVar8;
    func_0x000107c613fc(&UNK_110680f18,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    puVar6 = &UNK_1106810f8;
    func_0x000107c613fc(&UNK_1106810f8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar8;
    *(undefined **)(puVar6 + 0x18) = puVar9;
    *(undefined **)(puVar6 + 0x20) = puVar13;
    plVar16 = (long *)PTR_PTR_1126aeaf8;
    func_0x000107c610f8(PTR_PTR_1126aeaf8);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x1036c94d4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100e1779c;
    puStack_88 = &UNK_110681110;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar12;
    func_0x000107c60bc4(ppuVar10);
    uStack_b0 = 0x1036c94dc;
    puStack_d0 = puVar3;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_100e17304;
    puStack_b8 = &UNK_110681138;
    ppuVar11 = &puStack_d0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61580(puVar13,2);
    func_0x000107c61174(puVar8);
    func_0x000107c6157c(puVar9);
    func_0x000107c47be0(plVar16);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puStack_a8);
    puVar12 = puStack_78;
    func_0x000107c61574(puVar9);
  }
  else {
    puVar13 = &UNK_110680f18;
    puVar12 = puVar13;
    func_0x000107c613fc(&UNK_110680f18,0x18,7);
    func_0x000107c61614(puVar12 + 0x10);
    func_0x000107c613fc(&UNK_110680f18,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    lVar14 = 0;
    FUN_1036d6cbc();
    lVar15 = lVar14;
    func_0x000107c610f8();
    lVar4 = _DAT_112f87b00;
    func_0x000107c61614(lVar15 + _DAT_112f87b00,0);
    puVar1 = (undefined8 *)(lVar15 + _DAT_112f87b20);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61614(lVar15 + _DAT_112f87b28,0);
    puVar2 = (undefined8 *)(lVar15 + _DAT_112f87b30);
    uVar7 = *(undefined8 *)PTR__CGRectNull_1103475e8;
    uVar19 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
    uVar18 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
    puVar2[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
    *puVar2 = uVar7;
    puVar2[3] = uVar19;
    puVar2[2] = uVar18;
    func_0x000107c61614(puVar2 + 4,0);
    puVar2[5] = 0;
    *(undefined8 *)(lVar15 + _DAT_112f87b38) = 0;
    *(undefined **)(lVar15 + _DAT_112f87b40) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar15 + _DAT_112f87b48) = 0;
    *(undefined1 *)(lVar15 + _DAT_112f87b50) = 0;
    *(undefined1 *)(lVar15 + _DAT_112f87b58) = 0;
    *(undefined1 *)(lVar15 + _DAT_112f87b60) = 0;
    func_0x000107c61604(lVar15 + lVar4,param_1);
    puVar2 = (undefined8 *)(lVar15 + _DAT_112f87b08);
    uVar7 = *param_2;
    uVar19 = param_2[3];
    uVar18 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar7;
    puVar2[3] = uVar19;
    puVar2[2] = uVar18;
    *(long *)(lVar15 + _DAT_112f87b10) = lVar17;
    puVar2 = (undefined8 *)(lVar15 + _DAT_112f87b18);
    *puVar2 = 0x1036c94e8;
    puVar2[1] = puVar12;
    uVar7 = *puVar1;
    uVar18 = puVar1[1];
    *puVar1 = 0x1036c94f0;
    puVar1[1] = puVar13;
    FUN_1036c94f8(param_2,&puStack_a0);
    FUN_1036c94f8(param_2,&puStack_a0);
    FUN_1036c94f8(param_2,&puStack_a0);
    func_0x000107c61580(puVar12,2);
    func_0x000107c61580(puVar13,2);
    func_0x000100d59924(uVar7,uVar18);
    lStack_e0 = lVar15;
    lStack_d8 = lVar14;
    func_0x000107c61154(&lStack_e0,PTR_s_init_1125d9248);
    FUN_1036c9554(param_2,0x112f87490,&UNK_10dbfb4c8);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar13);
    FUN_1036c9554(param_2,0x112f87490,&UNK_10dbfb4c8);
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar13);
  return (undefined *)plVar16;
}



/* Entry: 1036c76f0; end: 1036c797f;  */

void FUN_1036c76f0(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puStack_50 = PTR_DAT_1126a1cc8;
    lVar1 = param_1;
    func_0x000107c61494(param_1,1,&puStack_50);
    if (lVar1 == 0) {
      FUN_1036c6e18();
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000107c501b8(lVar1);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036c7980; end: 1036c7a6b;  */

void FUN_1036c7980(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_110680f18;
  func_0x000107c613fc(&UNK_110680f18,0x18,7);
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618(param_4);
  func_0x000107c61614(puVar1 + 0x10,param_4);
  func_0x000107c61170(param_4);
  puVar2 = &UNK_110681170;
  func_0x000107c613fc(&UNK_110681170,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar1);
  func_0x000100b64c10(param_1,param_2);
  FUN_1036cb398(FUN_1036c9548,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1036c7a6c; end: 1036c7b0b;  */

void FUN_1036c7a6c(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  func_0x000107c61604(param_1 + 0x10,0);
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
  }
  else {
    FUN_1036c6e18(param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036c7b0c; end: 1036c7c3f;  */

void FUN_1036c7b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  pcVar1 = "endExistingCameraScope(completion:)";
  func_0x0001000c10c0("endExistingCameraScope(completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_110680f18;
  func_0x000107c613fc(&UNK_110680f18,0x18,7);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618(param_1);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61170(param_1);
  puVar3 = &UNK_110680fb8;
  func_0x000107c613fc(&UNK_110680fb8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  pcStack_68 = FUN_1036c8920;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110680fd0;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000100b64c10(param_2,param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1036c7c40; end: 1036c7d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c7c40(long param_1,code *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    puVar1 = (undefined8 *)(param_1 + _DAT_112f87460);
    lVar4 = puVar1[1];
    if (lVar4 != 0) {
      uVar5 = *puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar2 = *(long *)(param_1 + _DAT_112f87430);
      func_0x000107c4ab28();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c4500c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        func_0x000107c6142c(lVar4);
      }
      else {
        func_0x000107c5fadc(uVar5,lVar4);
        func_0x000107c3fac4(lVar3);
        func_0x000107c6142c(lVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c615e8(lVar3);
      }
    }
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036c7d5c; end: 1036c8313;  */

void FUN_1036c7d5c(double *param_1,double param_2,double param_3,double param_4,double param_5,
                  ulong param_6,ulong param_7,ulong param_8,double *param_9)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar14 = 0.0;
  if (((*(char *)(param_9 + 4) == '\x01') ||
      (dVar17 = *param_9, (((ulong)dVar17 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0)) ||
     (dVar18 = param_9[1], (((ulong)dVar18 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0)) {
    dVar17 = 0.0;
    dVar18 = 0.0;
    bVar2 = true;
    dVar15 = 0.0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    dVar16 = param_9[2];
    dVar15 = param_9[3];
    param_2 = dVar17;
    param_3 = dVar18;
    param_4 = dVar16;
    param_5 = dVar15;
    func_0x000107c609cc();
    if (((0x7fefffffffffffff < (ulong)ABS(param_2)) ||
        (param_2 = dVar17, param_3 = dVar18, param_4 = dVar16, param_5 = dVar15,
        func_0x000107c609b0(), 0x7fefffffffffffff < (ulong)ABS(param_2))) ||
       ((param_2 = dVar17, param_3 = dVar18, param_4 = dVar16, param_5 = dVar15,
        func_0x000107c609cc(), param_2 <= 1.0 ||
        (param_2 = dVar17, param_3 = dVar18, param_4 = dVar16, param_5 = dVar15,
        func_0x000107c609b0(), param_2 <= 1.0)))) {
      dVar17 = 0.0;
      dVar18 = 0.0;
      bVar2 = true;
      dVar15 = 0.0;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      bVar2 = false;
      dVar14 = dVar16;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if ((param_6 == 0) || (param_8 == 0)) goto LAB_1036c82b4;
  uVar10 = param_7 & 0xffffffffffff;
  if ((param_8 & 0x2000000000000000) != 0) {
    uVar10 = param_8 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) goto LAB_1036c82b4;
  func_0x000107c61174();
  FUN_1036c8314();
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar9 = puVar8;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c61170(param_6);
    func_0x000107c6142c(puVar8);
    goto LAB_1036c82b4;
  }
  uVar10 = 0;
  do {
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036c8188);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(puVar8 + uVar10 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar10;
      FUN_1036c89b8(uVar10,puVar8,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
    }
    puVar1 = (undefined *)(uVar10 + 1);
    if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1036c8184);
      (*pcVar4)();
    }
    func_0x000107c3ec60(uVar5);
    func_0x000107c4073c(uVar5);
    uVar6 = uVar5;
    dVar16 = param_2;
    dVar11 = param_3;
    dVar12 = param_4;
    dVar13 = param_5;
    func_0x000107c49eac();
    if ((((((uVar6 & 1) != 0) || (func_0x000107c3dc40(uVar5), dVar16 <= 0.01)) ||
         (0x7fefffffffffffff < (ulong)ABS(param_2))) ||
        ((0x7fefffffffffffff < (ulong)ABS(param_3) ||
         (dVar16 = param_2, dVar11 = param_3, dVar12 = param_4, dVar13 = param_5,
         func_0x000107c609cc(), 0x7fefffffffffffff < (ulong)ABS(dVar16))))) ||
       ((dVar16 = param_2, dVar11 = param_3, dVar12 = param_4, dVar13 = param_5,
        func_0x000107c609b0(), 0x7fefffffffffffff < (ulong)ABS(dVar16) ||
        ((dVar16 = param_2, dVar11 = param_3, dVar12 = param_4, dVar13 = param_5,
         func_0x000107c609cc(), dVar16 <= 1.0 ||
         (func_0x000107c609b0(), dVar16 = param_2, dVar11 = param_3, dVar12 = param_4,
         dVar13 = param_5, param_2 <= 1.0)))))) {
LAB_1036c7fe4:
      param_5 = dVar13;
      param_4 = dVar12;
      param_3 = dVar11;
      param_2 = dVar16;
      func_0x000107c61170(uVar5);
    }
    else {
      uVar6 = param_6;
      func_0x000107c3ec60();
      func_0x000107c609dc();
      dVar16 = param_2;
      dVar11 = param_3;
      dVar12 = param_4;
      dVar13 = param_5;
      if ((uVar6 & 1) == 0) goto LAB_1036c7fe4;
      puVar7 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x0001033463bc(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        func_0x0001033463bc(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(ulong *)(puVar3 + uVar6 * 8 + 0x20) = uVar5;
    }
    uVar10 = uVar10 + 1;
  } while (puVar1 != puVar9);
  if (((long)puVar3 < 0) || (((ulong)puVar3 >> 0x3e & 1) != 0)) {
    puVar9 = puVar3;
    func_0x000107c60480();
    if (puVar9 == (undefined *)0x0) goto LAB_1036c81d4;
LAB_1036c8060:
    func_0x000107c6142c(puVar8);
    puVar8 = puVar3;
    if (bVar2) goto LAB_1036c8070;
LAB_1036c81e0:
    puVar9 = puVar8;
    param_2 = dVar17;
    param_3 = dVar18;
    param_4 = dVar14;
    param_5 = dVar15;
    FUN_1036c8e48(puVar8,param_6);
    func_0x000107c6142c(puVar8);
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(param_6);
      bVar2 = false;
      goto LAB_1036c82b4;
    }
  }
  else {
    if (*(long *)(puVar3 + 0x10) != 0) goto LAB_1036c8060;
LAB_1036c81d4:
    func_0x000107c61574(puVar3);
    if (!bVar2) goto LAB_1036c81e0;
LAB_1036c8070:
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar9 = puVar8;
      }
      func_0x000107c60480();
    }
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(param_6);
      bVar2 = true;
      goto LAB_1036c82b4;
    }
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036c8314);
        (*pcVar4)();
      }
      puVar9 = *(undefined **)(puVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar9 = (undefined *)0x0;
      FUN_1036c89b8(0,puVar8,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
    }
    func_0x000107c6142c(puVar8);
  }
  func_0x000107c61174();
  func_0x000107c3ec60();
  puVar8 = puVar9;
  func_0x000107c4073c();
  FUN_1036c9130();
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar9);
  if (((ulong)puVar8 & 1) != 0) {
    bVar2 = false;
    dVar18 = param_3;
    dVar17 = param_2;
    dVar14 = param_4;
    dVar15 = param_5;
  }
LAB_1036c82b4:
  *param_1 = dVar17;
  param_1[1] = dVar18;
  param_1[2] = dVar14;
  param_1[3] = dVar15;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Entry: 1036c8314; end: 1036c8517;  */

/* WARNING: Possible PIC construction at 0x0001036c8384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c83ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c8388) */
/* WARNING: Removing unreachable block (ram,0x0001036c83b0) */
/* WARNING: Removing unreachable block (ram,0x0001036c83b4) */
/* WARNING: Removing unreachable block (ram,0x0001036c84f8) */
/* WARNING: Removing unreachable block (ram,0x0001036c83d4) */

void FUN_1036c8314(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1;
  uVar3 = param_2;
  func_0x000107c3cf00();
  func_0x000107c61180();
  if (uVar5 == 0) {
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x0001036c9594(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar3 = param_1;
    func_0x000107c5fc54(param_1,uVar2);
    func_0x000107c61170(param_1);
    if (uVar3 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar5 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c84f8);
        (*pcVar1)();
      }
      uVar6 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          uVar4 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = uVar6;
          FUN_1036c89b8(uVar6,uVar3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        uVar6 = uVar6 + 1;
        FUN_1036c8314();
        func_0x000107c61170(uVar4);
      } while (uVar5 != uVar6);
    }
  }
  else {
    uVar6 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    if ((uVar6 != param_2) || (uVar3 != param_3)) {
      func_0x000107c605b8(uVar6,uVar3,param_2,param_3,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1036c8518; end: 1036c857f;  */

void FUN_1036c8518(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  
  dVar2 = -param_1;
  func_0x000107c3ec60(param_4);
  func_0x000107c609cc();
  dVar1 = param_1;
  func_0x000107c3ec60(param_4);
  func_0x000107c609b0();
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,-param_2,param_1,dVar1,param_4,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1
            );
  return;
}



/* Entry: 1036c8580; end: 1036c85cb; -[_TtC32SCLensPlusServicesImplementation29ImagineLensCaaSCameraLauncher init] */

void FUN_1036c8580(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensCaaSCameraLauncher",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c85ac);
  (*pcVar1)();
}



/* Entry: 1036c85cc; end: 1036c860b;  */

/* WARNING: Possible PIC construction at 0x0001036c85f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c85f4) */

void FUN_1036c85cc(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[8]);
  return;
}



/* Entry: 1036c860c; end: 1036c868f;  */

undefined8 * FUN_1036c860c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar2;
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  uVar2 = param_2[0xb];
  param_1[0xb] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1036c8690; end: 1036c8753;  */

undefined8 * FUN_1036c8690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1036c8754; end: 1036c87cf;  */

undefined8 * FUN_1036c8754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[9] = param_2[9];
  func_0x000107c6142c(param_1[10]);
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1036c87d0; end: 1036c888f;  */

int FUN_1036c87d0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1036c8890; end: 1036c88c3;  */

undefined8 FUN_1036c8890(undefined8 param_1,undefined8 param_2)

{
  FUN_1036c860c(param_2,param_1,&UNK_110680ed0);
  return param_2;
}



/* Entry: 1036c88c4; end: 1036c88eb;  */

void FUN_1036c88c4(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = "endExistingCameraScope(completion:)";
  func_0x0001000c10c0("endExistingCameraScope(completion:)");
  func_0x000107c61180();
  puVar3 = &UNK_110680f18;
  func_0x000107c613fc(&UNK_110680f18,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_110680fb8;
  func_0x000107c613fc(&UNK_110680fb8,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  pcStack_68 = FUN_1036c8920;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110680fd0;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_60;
  func_0x000100b64c10(uVar1,uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1036c88ec; end: 1036c891f;  */

void FUN_1036c88ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036c8920; end: 1036c892b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c8920(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  else {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f87460);
    lVar6 = puVar1[1];
    if (lVar6 != 0) {
      uVar7 = *puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar4 = *(long *)(lVar3 + _DAT_112f87430);
      func_0x000107c4ab28();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c4500c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar5 == 0) {
        func_0x000107c6142c(lVar6);
      }
      else {
        func_0x000107c5fadc(uVar7,lVar6);
        func_0x000107c3fac4(lVar5);
        func_0x000107c6142c(lVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c615e8(lVar5);
      }
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1036c892c; end: 1036c89a3;  */

void FUN_1036c892c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001036c9594(0,param_1,param_2);
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



/* Entry: 1036c89a4; end: 1036c89b7;  */

void FUN_1036c89a4(void)

{
  long in_x4;
  
  if (in_x4 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1036c89b8; end: 1036c8b73;  */

ulong FUN_1036c89b8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8a9c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8aa0);
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
  func_0x0001036c9594(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8b74);
  (*pcVar2)();
}



/* Entry: 1036c8b74; end: 1036c8baf;  */

ulong FUN_1036c8b74(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8a9c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8aa0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad468;
    func_0x000107c61168(PTR_PTR_1126ad468);
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
    puVar4 = PTR_PTR_1126ad468;
    func_0x000107c61168(PTR_PTR_1126ad468);
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
  func_0x0001036c9594(0,0x112f87498,&PTR_PTR_1126ad468);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8b74);
  (*pcVar2)();
}



/* Entry: 1036c8bb0; end: 1036c8d4b;  */

ulong FUN_1036c8bb0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8c80);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8c84);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103f76008(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103f76008(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f159720);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c8d4c);
  (*pcVar2)();
}



/* Entry: 1036c8d4c; end: 1036c8e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c8d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_4;
  func_0x000107c614f0();
  *(undefined8 *)(param_4 + _DAT_112f87688) = 0;
  *(undefined8 *)(param_4 + _DAT_112f87690) = 0;
  *(undefined8 *)(param_4 + _DAT_112f87698) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + _DAT_112f876a0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + _DAT_112f876a8) = puVar2;
  *(undefined1 *)(param_4 + _DAT_112f876b0) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876b8) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876c0) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876c8) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876d0) = 0;
  *(undefined1 *)(param_4 + _DAT_112f876d8) = 0;
  *(undefined8 *)(param_4 + _DAT_112f87678) = param_1;
  puVar1 = (undefined8 *)(param_4 + _DAT_112f87680);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lStack_40 = param_4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036c8e48; end: 1036c912f;  */

ulong FUN_1036c8e48(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  dVar11 = param_1;
  dVar10 = param_2;
  uVar14 = param_3;
  uVar16 = param_4;
  if (param_5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_5) {
      uVar4 = param_5;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if ((param_5 & 0xc000000000000001) == 0) {
      if (*(long *)((param_5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c9130);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_5 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      FUN_1036c89b8(0,param_5,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
    }
    if (uVar4 != 1) {
      uVar5 = uVar3;
      uVar6 = 1;
      do {
        while( true ) {
          if ((param_5 & 0xc000000000000001) == 0) {
            if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c90b8);
              (*pcVar2)();
            }
            if (*(ulong *)((param_5 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c90bc);
              (*pcVar2)();
            }
            uVar3 = *(ulong *)(param_5 + uVar6 * 8 + 0x20);
            func_0x000107c61174(uVar3);
          }
          else {
            uVar3 = uVar6;
            FUN_1036c89b8(uVar6,param_5,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          }
          uVar1 = uVar6 + 1;
          if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036c90b4);
            (*pcVar2)();
          }
          func_0x000107c3ec60(uVar3);
          func_0x000107c4073c(uVar3);
          dVar7 = dVar11;
          dVar12 = dVar10;
          uVar13 = uVar14;
          uVar15 = uVar16;
          func_0x000107c3ec60(uVar5);
          func_0x000107c4073c(uVar5);
          dVar8 = dVar11;
          func_0x000107c609bc(dVar11,dVar10,uVar14,uVar16);
          dVar9 = param_1;
          func_0x000107c609bc(param_1,param_2,param_3,param_4);
          func_0x000107c609c0(dVar11,dVar10,uVar14,uVar16);
          dVar10 = param_1;
          func_0x000107c609c0(param_1,param_2,param_3,param_4);
          dVar10 = SQRT((dVar8 - dVar9) * (dVar8 - dVar9) + (dVar11 - dVar10) * (dVar11 - dVar10));
          dVar11 = dVar7;
          func_0x000107c609bc(dVar7,dVar12,uVar13,uVar15);
          dVar8 = param_1;
          func_0x000107c609bc(param_1,param_2,param_3,param_4);
          func_0x000107c609c0(dVar7,dVar12,uVar13,uVar15);
          dVar9 = param_1;
          uVar14 = param_3;
          uVar16 = param_4;
          func_0x000107c609c0(param_1,param_2);
          dVar11 = SQRT((dVar11 - dVar8) * (dVar11 - dVar8) + (dVar7 - dVar9) * (dVar7 - dVar9));
          if (dVar10 < dVar11) break;
          func_0x000107c61170(uVar3);
          uVar6 = uVar6 + 1;
          if (uVar1 == uVar4) {
            return uVar5;
          }
        }
        func_0x000107c61170(uVar5);
        uVar5 = uVar3;
        uVar6 = uVar1;
      } while (uVar1 != uVar4);
    }
  }
  return uVar3;
}



/* Entry: 1036c9130; end: 1036c9223;  */

bool FUN_1036c9130(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = false;
  if (((ulong)ABS(param_1) < 0x7ff0000000000000) &&
     ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000)) {
    dVar2 = param_1;
    func_0x000107c609cc(param_1,param_2,0);
    if ((0x7fefffffffffffff < (ulong)ABS(dVar2)) ||
       ((dVar2 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4),
        0x7fefffffffffffff < (ulong)ABS(dVar2) ||
        (dVar2 = param_1, func_0x000107c609cc(param_1,param_2,param_3,param_4), dVar2 <= 1.0)))) {
      bVar1 = false;
    }
    else {
      func_0x000107c609b0(param_1,param_2,param_3,param_4);
      bVar1 = 1.0 < param_1;
    }
  }
  return bVar1;
}



/* Entry: 1036c9224; end: 1036c949b;  */

undefined *
FUN_1036c9224(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar6 = &puStack_b0;
  puVar2 = (undefined *)0x0;
  if (param_5 != 0) {
    puVar2 = (undefined *)0x0;
    if (((ulong)ABS(param_1) < 0x7ff0000000000000) &&
       ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000)) {
      func_0x000107c61174();
      dVar7 = param_1;
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      if ((0x7fefffffffffffff < (ulong)ABS(dVar7)) ||
         (((dVar7 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4),
           0x7fefffffffffffff < (ulong)ABS(dVar7) ||
           (dVar7 = param_1, func_0x000107c609cc(param_1,param_2,param_3,param_4), dVar7 <= 1.0)) ||
          (dVar7 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), dVar7 <= 1.0)))) {
        func_0x000107c61170(param_5);
        puVar2 = (undefined *)0x0;
      }
      else {
        func_0x000107c4abfc(param_5);
        puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
        func_0x000107c486f8(param_3,param_4);
        puVar4 = &UNK_110681008;
        func_0x000107c613fc(&UNK_110681008,0x38,7);
        *(long *)(puVar4 + 0x10) = param_5;
        *(double *)(puVar4 + 0x18) = param_1;
        *(ulong *)(puVar4 + 0x20) = param_2;
        *(undefined8 *)(puVar4 + 0x28) = param_3;
        *(undefined8 *)(puVar4 + 0x30) = param_4;
        puVar5 = &UNK_110681030;
        func_0x000107c613fc(&UNK_110681030,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_1036c949c;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        pcStack_90 = FUN_1036c94ac;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_100f9148c;
        puStack_98 = &UNK_110681048;
        puStack_88 = puVar5;
        func_0x000107c60bc4(&puStack_b0);
        puVar2 = puStack_88;
        func_0x000107c61174(param_5);
        func_0x000107c6157c(puVar5);
        func_0x000107c61574(puVar2);
        puVar2 = puVar3;
        func_0x000107c45138(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(param_5);
        func_0x000107c60bd0(ppuVar6);
        puVar3 = puVar5;
        func_0x000107c61544(puVar5,"",0x79,0x19a,0x1f,1);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar4);
        if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c949c);
          (*pcVar1)();
        }
      }
    }
  }
  return puVar2;
}



/* Entry: 1036c949c; end: 1036c94ab;  */

void FUN_1036c949c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  dVar3 = *(double *)(unaff_x20 + 0x18);
  dVar4 = *(double *)(unaff_x20 + 0x20);
  dVar5 = -dVar3;
  func_0x000107c3ec60(dVar3,dVar4,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),uVar1);
  func_0x000107c609cc();
  dVar2 = dVar3;
  func_0x000107c3ec60(uVar1);
  func_0x000107c609b0();
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar5,-dVar4,dVar3,dVar2,uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 1036c94ac; end: 1036c94cb;  */

void FUN_1036c94ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036c94cc; end: 1036c94f7;  */

void FUN_1036c94cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c61494();
      if (lVar3 == 0) {
        FUN_1036c6e18();
      }
      else {
        func_0x000107c501b8();
      }
      func_0x000107c61170(lVar2);
      goto LAB_1036c78e8;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
  lVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  FUN_1036c6e18(0,0);
LAB_1036c78e8:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1036c94f8; end: 1036c9547;  */

undefined8 FUN_1036c94f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f87490;
  func_0x0001000285a8(0x112f87490,&UNK_10dbfb4c8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1036c9548; end: 1036c9553;  */

void FUN_1036c9548(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  func_0x000107c61604(lVar1 + 0x10,0);
  func_0x000107c61428(lVar4 + 0x10,auStack_60,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  else {
    FUN_1036c6e18(pcVar2,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1036c9554; end: 1036c95d3;  */

undefined8 FUN_1036c9554(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1036c95d4; end: 1036c95db;  */

void FUN_1036c95d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1036c95dc; end: 1036c969f;  */

undefined8 * FUN_1036c95dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1036c96a0; end: 1036c978f;  */

int FUN_1036c96a0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036c9790; end: 1036c97bb; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchPayload init] */

void FUN_1036c9790(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensCameraPageLaunchPayload",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c97bc);
  (*pcVar1)();
}



/* Entry: 1036c97bc; end: 1036c98e7; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036c97e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c97fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c97e8) */
/* WARNING: Removing unreachable block (ram,0x0001036c9800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c97bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112f874b8 + 0x58));
  return;
}



/* Entry: 1036c98e8; end: 1036c990b;  */

void FUN_1036c98e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036c990c; end: 1036c990f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c990c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [96];
  
  plVar5 = &lStack_a0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 != 0) {
    FUN_1036c9ef8();
    lVar4 = lVar2;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f874b8);
    uVar8 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    puVar1[1] = param_1[1];
    *puVar1 = uVar8;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar6 = param_1[8];
    uVar8 = param_1[0xb];
    uVar7 = param_1[10];
    uVar12 = param_1[5];
    uVar11 = param_1[4];
    uVar10 = param_1[7];
    uVar9 = param_1[6];
    puVar1[9] = param_1[9];
    puVar1[8] = uVar6;
    puVar1[0xb] = uVar8;
    puVar1[10] = uVar7;
    puVar1[5] = uVar12;
    puVar1[4] = uVar11;
    puVar1[7] = uVar10;
    puVar1[6] = uVar9;
    FUN_1036c8890(param_1,auStack_90);
    lStack_a0 = lVar4;
    lStack_98 = lVar2;
    func_0x000107c61154(&lStack_a0,PTR_s_init_1125d9248);
    func_0x000107c4ab9c(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(plVar5);
  }
  return;
}



/* Entry: 1036c9910; end: 1036c9923; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchHandler payloadClass] */

void FUN_1036c9910(void)

{
  FUN_1036c9ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1036c9924; end: 1036c9927; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchHandler setPayloadClass:] */

void FUN_1036c9924(void)

{
  return;
}



/* Entry: 1036c9928; end: 1036c9a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9928(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long alStack_120 [12];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = 0;
  plVar5 = alStack_120;
  func_0x000100672b50(param_1,&uStack_b0);
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_b0);
  }
  else {
    FUN_1036c9ef8();
    func_0x000107c6147c(alStack_120,&uStack_b0,PTR___sypN_11034f1a8 + 8,param_1,6);
    lVar2 = alStack_120[0];
    if ((uVar3 & 1) != 0) {
      func_0x000100083b20(&uStack_c0);
      uVar4 = uStack_c0;
      func_0x000107c614f0(uStack_c0);
      puVar1 = (undefined8 *)(alStack_120[0] + _DAT_112f874b8);
      uStack_a8 = puVar1[1];
      uStack_b0 = *puVar1;
      lStack_98 = puVar1[3];
      uStack_a0 = puVar1[2];
      uStack_68 = puVar1[9];
      uStack_70 = puVar1[8];
      uStack_58 = puVar1[0xb];
      uStack_60 = puVar1[10];
      uStack_88 = puVar1[5];
      uStack_90 = puVar1[4];
      uStack_78 = puVar1[7];
      uStack_80 = puVar1[6];
      pcVar6 = *(code **)(lStack_b8 + 8);
      FUN_1036c8890(&uStack_b0,alStack_120);
      (*pcVar6)(&uStack_b0,uVar4,lStack_b8);
      FUN_1036c6394(&uStack_b0);
      func_0x000107c615e8(uStack_c0);
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(alStack_120[0]);
        return;
      }
      alStack_120[1] = 0;
      alStack_120[0] = 0;
      alStack_120[3] = 0;
      alStack_120[2] = 0;
      (*param_2)(0,alStack_120);
      func_0x000107c61170(lVar2);
      goto LAB_1036c9a54;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  (*param_2)(0,&uStack_b0);
  plVar5 = &uStack_b0;
LAB_1036c9a54:
  func_0x00010006e7f4(plVar5);
  return;
}



/* Entry: 1036c9a80; end: 1036c9b4f; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchHandler launchWithPayload:completion:] */

void FUN_1036c9a80(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_110681270;
    func_0x000107c613fc(&UNK_110681270,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x1036c9f88;
  }
  FUN_1036c9928(&uStack_50,uVar1,puVar2);
  func_0x000100f1d208(uVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1036c9b50; end: 1036c9b7b; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchHandler init] */

void FUN_1036c9b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensCameraPageLaunchHandler",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c9b7c);
  (*pcVar1)();
}



/* Entry: 1036c9b7c; end: 1036c9b8b; -[_TtC32SCLensPlusServicesImplementation34ImagineLensCameraPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f87588));
  return;
}



/* Entry: 1036c9b8c; end: 1036c9be7; -[_TtC32SCLensPlusServicesImplementation33ImagineLensCameraPageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9b8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f875b8);
  func_0x000107c61434(uVar3);
  uVar1 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1036c9be8; end: 1036c9c3b; -[_TtC32SCLensPlusServicesImplementation33ImagineLensCameraPageLaunchPlugin setNativePayloadHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f875b8);
  *(undefined8 *)(param_1 + _DAT_112f875b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1036c9c3c; end: 1036c9c67; -[_TtC32SCLensPlusServicesImplementation33ImagineLensCameraPageLaunchPlugin init] */

void FUN_1036c9c3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensCameraPageLaunchPlugin",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c9c68);
  (*pcVar1)();
}



/* Entry: 1036c9c68; end: 1036c9c6b;  */

void FUN_1036c9c68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036c9c6c; end: 1036c9c9f;  */

void FUN_1036c9c6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036c9ca0; end: 1036c9caf; -[_TtC32SCLensPlusServicesImplementation33ImagineLensCameraPageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f875b8));
  return;
}



/* Entry: 1036c9cb0; end: 1036c9d77;  */

void FUN_1036c9cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110681218;
  func_0x000107c613fc(&UNK_110681218,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1036c9ee8,puVar1);
  return;
}



/* Entry: 1036c9d78; end: 1036c9ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9d78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code ***pppcVar9;
  code **ppcStack_80;
  code **ppcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  
  pppcVar9 = &ppcStack_80;
  func_0x0001000285a8(0x112f875e8,&UNK_10dbfb600);
  puVar1 = &UNK_110681298;
  func_0x000107c613fc(&UNK_110681298,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  pcVar2 = FUN_1036ca184;
  func_0x0001000823a8(FUN_1036ca184,puVar1);
  pcVar3 = pcVar2;
  func_0x0001036c9f38();
  pcVar4 = pcVar3;
  func_0x000107c610f8();
  *(code **)(pcVar4 + _DAT_112f87588) = pcVar2;
  ppcVar5 = &pcStack_70;
  pcStack_70 = pcVar4;
  pcStack_68 = pcVar3;
  func_0x000107c61154(ppcVar5,PTR_s_init_1125d9248);
  ppcVar6 = ppcVar5;
  func_0x0001036c9f58();
  ppcVar7 = ppcVar6;
  func_0x000107c610f8();
  ppcVar8 = ppcVar7;
  func_0x000100f1b134();
  func_0x000107c613fc();
  ppcVar8[3] = (code *)0x3;
  ppcVar8[2] = (code *)0x1;
  ppcVar8[4] = (code *)ppcVar5;
  *(code ***)((long)ppcVar7 + _DAT_112f875b8) = ppcVar8;
  ppcStack_80 = ppcVar7;
  ppcStack_78 = ppcVar6;
  func_0x000107c61154(&ppcStack_80,PTR_s_init_1125d9248);
  *param_1 = pppcVar9;
  return;
}



/* Entry: 1036c9ee8; end: 1036c9ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9ee8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code ***pppcVar15;
  long unaff_x20;
  code **ppcStack_80;
  code **ppcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  pppcVar15 = &ppcStack_80;
  func_0x0001000285a8(0x112f875e8,&UNK_10dbfb600);
  puVar7 = &UNK_110681298;
  func_0x000107c613fc(&UNK_110681298,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar5;
  *(undefined8 *)(puVar7 + 0x30) = uVar3;
  *(undefined8 *)(puVar7 + 0x38) = uVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  pcVar8 = FUN_1036ca184;
  func_0x0001000823a8(FUN_1036ca184,puVar7);
  pcVar9 = pcVar8;
  func_0x0001036c9f38();
  pcVar10 = pcVar9;
  func_0x000107c610f8();
  *(code **)(pcVar10 + _DAT_112f87588) = pcVar8;
  ppcVar11 = &pcStack_70;
  pcStack_70 = pcVar10;
  pcStack_68 = pcVar9;
  func_0x000107c61154(ppcVar11,PTR_s_init_1125d9248);
  ppcVar12 = ppcVar11;
  func_0x0001036c9f58();
  ppcVar13 = ppcVar12;
  func_0x000107c610f8();
  ppcVar14 = ppcVar13;
  func_0x000100f1b134();
  func_0x000107c613fc();
  ppcVar14[3] = (code *)0x3;
  ppcVar14[2] = (code *)0x1;
  ppcVar14[4] = (code *)ppcVar11;
  *(code ***)((long)ppcVar13 + _DAT_112f875b8) = ppcVar14;
  ppcStack_80 = ppcVar13;
  ppcStack_78 = ppcVar12;
  func_0x000107c61154(&ppcStack_80,PTR_s_init_1125d9248);
  *param_1 = pppcVar15;
  return;
}



/* Entry: 1036c9ef8; end: 1036c9f77;  */

void FUN_1036c9ef8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1a48);
  return;
}



/* Entry: 1036c9f78; end: 1036c9f8f;  */

undefined1  [16] FUN_1036c9f78(void)

{
  return ZEXT816(0x110681240);
}



/* Entry: 1036c9f90; end: 1036ca137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c9f90(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&lStack_80);
  uVar5 = *(undefined8 *)(lStack_80 + _DAT_113036498);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&lStack_98);
  uVar6 = *(undefined8 *)(lStack_98 + _DAT_1130364d0);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_98);
  lVar2 = 0;
  func_0x0001036c85ac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f87458) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f87460);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112f87420) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112f87428) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112f87430) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112f87438) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112f87440) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112f87448) = uStack_90;
  *(undefined8 *)(lVar3 + _DAT_112f87450) = uVar6;
  plVar4 = &lStack_a8;
  lStack_a8 = lVar3;
  lStack_a0 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  param_1[1] = (long)&PTR_DAT_110680ef8;
  return;
}



/* Entry: 1036ca138; end: 1036ca183;  */

void FUN_1036ca138(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036ca184; end: 1036ca19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ca184(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&lStack_80);
  uVar5 = *(undefined8 *)(lStack_80 + _DAT_113036498);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&lStack_98);
  uVar6 = *(undefined8 *)(lStack_98 + _DAT_1130364d0);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_98);
  lVar2 = 0;
  func_0x0001036c85ac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f87458) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f87460);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112f87420) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112f87428) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112f87430) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112f87438) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112f87440) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112f87448) = uStack_90;
  *(undefined8 *)(lVar3 + _DAT_112f87450) = uVar6;
  plVar4 = &lStack_a8;
  lStack_a8 = lVar3;
  lStack_a0 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  param_1[1] = (long)&PTR_DAT_110680ef8;
  return;
}



/* Entry: 1036ca19c; end: 1036ca233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ca19c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87618);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112f87618))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ca234; end: 1036ca2db; -[_TtC32SCLensPlusServicesImplementation31ImagineLensDuetTrayViewProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ca234(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112f87618);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar4 = ((long *)(param_1 + _DAT_112f87618))[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar3);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ca2dc; end: 1036ca357; -[_TtC32SCLensPlusServicesImplementation31ImagineLensDuetTrayViewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ca2dc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f875f0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f875f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f87600));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87608));
  func_0x000107c61610(param_1 + _DAT_112f87610);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f87618));
  return;
}



/* Entry: 1036ca358; end: 1036ca703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036ca358(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87600);
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
      FUN_1036cb0e4(0,0x112f87648,&PTR_PTR_1126ad480);
      lVar3 = _DAT_113015ec0;
      lVar12 = *(long *)(unaff_x20 + _DAT_112f875f8);
      uVar11 = *(undefined8 *)(lVar12 + _DAT_113015ec0);
      func_0x000107c6157c(uVar11);
      func_0x0001000d224c(auStack_78);
      func_0x000107c61574(uVar11);
      lVar1 = lStack_58;
      uVar11 = uStack_60;
      func_0x0001000a8868(auStack_78,uStack_60);
      (**(code **)(lVar1 + 0x18))(uVar11,lVar1);
      uVar4 = 0;
      FUN_1036cb0e4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      pcVar5 = FUN_1036cabc8;
      func_0x0001000bfde0(FUN_1036cabc8,0,uVar4);
      func_0x000107c61574(uVar11);
      puVar6 = auStack_78;
      func_0x0001000834e4(puVar6);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar5);
      puVar7 = puVar6;
      func_0x000107c5cb24(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar8 = &UNK_1106812c8;
      func_0x000107c613fc(&UNK_1106812c8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      FUN_1036ca944(puVar7,FUN_1036cb0b8,puVar8,FUN_1036ca940,0);
      FUN_1036cb0e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar11 = 1;
      func_0x000107c6010c(1);
      func_0x000107c5514c(puVar7);
      func_0x000107c61170(uVar11);
      uVar11 = *(undefined8 *)(lVar12 + lVar3);
      func_0x000107c6157c(uVar11);
      func_0x0001000d224c(auStack_78);
      func_0x000107c61574(uVar11);
      func_0x0001000a8868(auStack_78,uStack_60);
      uVar11 = uStack_60;
      (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
      uVar4 = 0;
      FUN_1036cb0e4(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar5 = FUN_1036caf48;
      func_0x0001000bfde0(FUN_1036caf48,0,uVar4);
      func_0x000107c61574(uVar11);
      puVar6 = auStack_78;
      func_0x0001000834e4(puVar6);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar5);
      puVar9 = puVar6;
      func_0x000107c5cb24(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c58e24(puVar7);
      func_0x000107c61170(puVar9);
      uVar11 = 1;
      func_0x000107c6010c(1);
      func_0x000107c55100(puVar7);
      func_0x000107c61170(uVar11);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(0x4034000000000000);
      func_0x000107c59ef0(puVar7);
      func_0x000107c61170(puVar8);
      puVar8 = PTR_PTR_1126ad488;
      func_0x000107c610f8(PTR_PTR_1126ad488);
      func_0x000107c453e4();
      puVar10 = PTR_PTR_1126ad490;
      func_0x000107c610f8(PTR_PTR_1126ad490);
      func_0x000107c49520();
      func_0x000107c61170(puVar8);
      func_0x000107c61604(unaff_x20 + _DAT_112f87610,puVar10);
      puVar8 = puVar10;
      func_0x000107c61174(puVar10);
      FUN_1036caa4c();
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar7);
      return puVar10;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1036ca704; end: 1036ca75f;  */

void FUN_1036ca704(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1036ca760(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036ca760; end: 1036ca93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ca760(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_a8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f875f8) + _DAT_113015ec0);
  func_0x000107c6157c(uVar5);
  func_0x0001000d224c(auStack_88);
  func_0x000107c61574(uVar5);
  func_0x0001000a8868();
  lVar9 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar1 = lVar9;
  uVar5 = uStack_70;
  func_0x000107c5faec();
  uVar3 = uVar5;
  func_0x000107c61170(lVar9);
  lVar9 = param_1;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lStack_a8 = 0;
    uVar10 = 0;
    uVar4 = uVar3;
  }
  else {
    lStack_a8 = lVar9;
    func_0x000107c5faec();
    uVar4 = uVar3;
    func_0x000107c61170(lVar9);
    uVar10 = uVar3;
  }
  lVar9 = param_1;
  func_0x000107c42120(param_1);
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5faec();
  uVar3 = uVar4;
  func_0x000107c61170(lVar9);
  lVar9 = param_1;
  func_0x000107c3e978();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar7 = 0;
    uVar6 = 0;
    uVar8 = uVar3;
  }
  else {
    lVar7 = lVar9;
    func_0x000107c5faec();
    uVar8 = uVar3;
    func_0x000107c61170(lVar9);
    uVar6 = uVar3;
  }
  func_0x000107c3ea1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar9 = 0;
    uVar8 = 0;
  }
  else {
    lVar9 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  uVar3 = 0;
  func_0x000103e2a910(0);
  func_0x000107c610f8();
  func_0x000103e2a7c8(uVar3,lVar1,uVar5,lStack_a8,uVar10,lVar2,uVar4,lVar7,uVar6,lVar9,uVar8);
  (**(code **)(lStack_68 + 0x40))();
  func_0x000107c61170(lVar1);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 1036ca940; end: 1036ca943;  */

void FUN_1036ca940(void)

{
  return;
}



/* Entry: 1036ca944; end: 1036caa4b;  */

undefined8
FUN_1036ca944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_b0;
  func_0x000107c614e8();
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1022dc230;
  puStack_68 = &UNK_1106812e0;
  ppuVar2 = &puStack_80;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c60bc4(ppuVar2);
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110681308;
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c46948(unaff_x20);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uStack_58);
  return unaff_x20;
}



/* Entry: 1036caa4c; end: 1036cab93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036caa4c(void)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f87618);
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    lVar9 = plVar1[1];
    lVar6 = lVar8;
    func_0x000107c614f0(lVar8);
    pcVar10 = *(code **)(lVar9 + 8);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar6,lVar9);
    func_0x000107c615e8(lVar8);
  }
  func_0x0001000d224c(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 8))();
  func_0x000107c615e8(uStack_50);
  pcVar3 = "observeGenerationStart()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar4 = (long *)pcVar3;
  func_0x000100471e0c();
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(pcVar3);
  puVar5 = &UNK_1106812c8;
  func_0x000107c613fc(&UNK_1106812c8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  lVar8 = 0x1036cb0c0;
  puVar7 = puVar5;
  (**(code **)(*plVar4 + 0x60))();
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  lVar6 = *plVar1;
  *plVar1 = lVar8;
  plVar1[1] = (long)puVar7;
  func_0x000107c615e8(lVar6);
  return;
}



/* Entry: 1036cab94; end: 1036cabc7; -[_TtC32SCLensPlusServicesImplementation31ImagineLensDuetTrayViewProvider makeBottomAccessoryView] */

void FUN_1036cab94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036ca358();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036cabc8; end: 1036cad53;  */

void FUN_1036cabc8(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar6 = *param_2;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010101cd8c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cad54);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      puVar5 = puStack_68;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cad38);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar8;
        func_0x00010101b920(uVar8,uVar6);
      }
      uStack_78 = uVar2;
      FUN_1036cad54(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar2);
      uVar3 = uStack_70;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x00010101cd8c(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_68 + uVar2 * 8 + 0x20) = uVar3;
      puVar5 = puStack_68;
    } while (uVar7 != uVar8);
  }
  uVar3 = 0;
  FUN_1036cb0e4(0,0x112d55188,&PTR_PTR_1126a6188);
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c6142c(puVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1036cad54; end: 1036caf47;  */

void FUN_1036cad54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR__swift_isaMask_11034f488;
  puVar6 = (ulong *)*param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x78))();
  puVar7 = param_2;
  lVar4 = param_3;
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xa8))();
  lVar5 = lVar4;
  if (lVar4 == 0) {
    (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
    puVar1 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      puVar1 = puVar7;
    }
    lVar5 = -0x2000000000000000;
    puVar7 = puVar1;
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
  }
  puVar3 = PTR_PTR_1126a6188;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  lVar4 = lVar5;
  func_0x000107c5fadc(puVar7);
  func_0x000107c6142c(lVar5);
  func_0x000107c491fc();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xc0))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xd8))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52d30(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c5a42c(puVar3);
  func_0x000107c61170(puVar7);
  *param_1 = puVar3;
  return;
}



/* Entry: 1036caf48; end: 1036cb06b;  */

void FUN_1036caf48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((ulong *)*param_2 == (ulong *)0x0) {
    param_2 = (undefined8 *)0x0;
    param_3 = 0xe000000000000000;
  }
  else {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)*param_2) + 0x78))();
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 1036cb06c; end: 1036cb0b7; -[_TtC32SCLensPlusServicesImplementation31ImagineLensDuetTrayViewProvider init] */

void FUN_1036cb06c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.ImagineLensDuetTrayViewProvider",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cb098);
  (*pcVar1)();
}



/* Entry: 1036cb0b8; end: 1036cb0e3;  */

void FUN_1036cb0b8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1036ca760(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036cb0e4; end: 1036cb123;  */

void FUN_1036cb0e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036cb124; end: 1036cb12b;  */

void FUN_1036cb124(long param_1,long param_2)

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



/* Entry: 1036cb12c; end: 1036cb397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cb12c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  if (param_2 != 0) {
    puVar3 = &UNK_110681548;
    func_0x000107c613fc(&UNK_110681548,0x20,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    lVar2 = _DAT_112f876a0;
    func_0x000107c61428(unaff_x20 + _DAT_112f876a0,auStack_68,0x21,0);
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c6157c(param_3);
    uVar4 = uVar10;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar10;
    uVar9 = uVar10;
    if ((uVar4 & 1) == 0) {
      uVar9 = 0;
      func_0x0001016cbf48(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(unaff_x20 + lVar2) = uVar9;
    }
    uVar4 = *(ulong *)(uVar9 + 0x10);
    uVar10 = uVar9;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x0001016cbf48(uVar10,uVar4 + 1,1,uVar9);
    }
    *(ulong *)(uVar10 + 0x10) = uVar4 + 1;
    lVar1 = uVar10 + uVar4 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = 0x1036cdde0;
    *(undefined **)(lVar1 + 0x28) = puVar3;
    *(ulong *)(unaff_x20 + lVar2) = uVar10;
    func_0x000107c614a8(auStack_68);
  }
  lVar2 = _DAT_112f87690;
  if ((*(long *)(unaff_x20 + _DAT_112f87690) == 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112f876b0) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112f876b0) = 1;
    *(undefined8 *)(unaff_x20 + lVar2) = param_1;
    *(undefined1 *)(unaff_x20 + _DAT_112f876b8) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112f876c0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112f876c8) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112f876d0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112f876d8) = 0;
    uVar5 = 0;
    FUN_1036cb714();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5677c();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f87688);
    *(undefined8 *)(unaff_x20 + _DAT_112f87688) = uVar5;
    func_0x000107c61170(uVar6);
    puVar3 = &UNK_110681368;
    func_0x000107c613fc(&UNK_110681368,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar7 = &UNK_110681458;
    func_0x000107c613fc(&UNK_110681458,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_1);
    puVar8 = &UNK_110681520;
    func_0x000107c613fc(&UNK_110681520,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar3;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar7);
    FUN_1036cbbc8(0x1036cd990,puVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar8);
  }
  return;
}



/* Entry: 1036cb398; end: 1036cb523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036cb398(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    puVar3 = &UNK_110681340;
    func_0x000107c613fc(&UNK_110681340,0x20,7);
    *(long *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    lVar2 = _DAT_112f876a8;
    func_0x000107c61428(unaff_x20 + _DAT_112f876a8,auStack_58,0x21,0);
    uVar6 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c6157c(param_2);
    uVar4 = uVar6;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar6;
    uVar5 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      func_0x0001016cbf48(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      *(ulong *)(unaff_x20 + lVar2) = uVar5;
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001016cbf48(uVar6,uVar4 + 1,1,uVar5);
    }
    *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
    lVar1 = uVar6 + uVar4 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_1036cd348;
    *(undefined **)(lVar1 + 0x28) = puVar3;
    *(ulong *)(unaff_x20 + lVar2) = uVar6;
    func_0x000107c614a8(auStack_58);
  }
  if (*(char *)(unaff_x20 + _DAT_112f876d8) != '\x01') {
    if ((*(byte *)(unaff_x20 + _DAT_112f876b8) & 1) != 0) {
      return;
    }
    if (*(long *)(unaff_x20 + _DAT_112f87690) != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f876d0) = 1;
      if ((*(byte *)(unaff_x20 + _DAT_112f876c0) & 1) != 0) {
        return;
      }
      if (*(char *)(unaff_x20 + _DAT_112f876c8) == '\x01') {
        FUN_1036cbf80(0);
        return;
      }
      FUN_1036cc0d8();
      return;
    }
  }
  FUN_1036ccc50(&DAT_112f876a8);
  return;
}



/* Entry: 1036cb524; end: 1036cb5d3; -[_TtC32SCLensPlusServicesImplementationP33_3C04E7F12D91FE87A882CC8D00D335F649ImagineLensInteractiveDismissalHostViewController viewDidLoad] */

void FUN_1036cb524(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036cb5d4);
  (*pcVar1)();
}



/* Entry: 1036cb5d4; end: 1036cb5db; -[_TtC32SCLensPlusServicesImplementationP33_3C04E7F12D91FE87A882CC8D00D335F649ImagineLensInteractiveDismissalHostViewController prefersStatusBarHidden] */

undefined8 FUN_1036cb5d4(void)

{
  return 1;
}



/* Entry: 1036cb5dc; end: 1036cb693; -[_TtC32SCLensPlusServicesImplementationP33_3C04E7F12D91FE87A882CC8D00D335F649ImagineLensInteractiveDismissalHostViewController initWithNibName:bundle:] */

undefined1 * FUN_1036cb5dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 1036cb694; end: 1036cb713; -[_TtC32SCLensPlusServicesImplementationP33_3C04E7F12D91FE87A882CC8D00D335F649ImagineLensInteractiveDismissalHostViewController initWithCoder:] */

undefined1 * FUN_1036cb694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
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


