/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101254b84; end: 101254ba3; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259129NoopMediaAuthorizationHandler requestAuthorizationWithCallback:] */

void FUN_101254b84(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c60bc4();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(param_3);
    return;
  }
  return;
}



/* Entry: 101254ba4; end: 101254c3b;  */

void FUN_101254ba4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6be20,&UNK_10d92ee50);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101254c3c,param_1);
  return;
}



/* Entry: 101254c3c; end: 101254c43;  */

void FUN_101254c3c(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_101254df8();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101254c44; end: 101254c73;  */

void FUN_101254c44(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101254c74; end: 101254dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101254c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a67b0;
  uVar6 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a67b0);
  func_0x000107c453e4();
  lVar3 = 0;
  FUN_10125e010();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4e2c4();
  func_0x000107c61180();
  uVar7 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d6c570);
  uVar4 = puVar1[1];
  *puVar1 = uVar7;
  puVar1[1] = uVar6;
  func_0x000107c6142c(uVar4);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112d6c568);
    *(long *)(lVar3 + _DAT_112d6c568) = lVar5;
    func_0x000107c615e8(uVar7);
  }
  func_0x000107c560ec(puVar2);
  func_0x000107c5cb28(param_1);
  func_0x000107c61180();
  func_0x000107c571d0(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5cb24(param_2);
  func_0x000107c61180();
  func_0x000107c58d88(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_2);
  return puVar2;
}



/* Entry: 101254dc4; end: 101254de7;  */

void FUN_101254dc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101254de8; end: 101254df7;  */

undefined1  [16] FUN_101254de8(void)

{
  return ZEXT816(0x110398e58);
}



/* Entry: 101254df8; end: 101254e17;  */

void FUN_101254df8(void)

{
  func_0x000107c61168(&PTR_PTR_112d6be68);
  return;
}



/* Entry: 101254e18; end: 101254eaf;  */

void FUN_101254e18(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6bec8,&UNK_10d92eed0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101254eb0,param_1);
  return;
}



/* Entry: 101254eb0; end: 101254eb7;  */

void FUN_101254eb0(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_101255034();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101254eb8; end: 101254ee7;  */

void FUN_101254eb8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101254ee8; end: 101254fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101254ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b4ab8;
  func_0x000107c610f8(PTR_PTR_1126b4ab8);
  func_0x000107c453e4();
  puVar2 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + _DAT_113017e98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4a8a4(puVar2,param_2,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar2;
    func_0x000107c5cb24(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c5422c(puVar1,param_2,puVar4);
  }
  else {
    puVar3 = puVar2;
    func_0x000107c49cbc();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c5422c(puVar1,param_2,puVar4);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 101255000; end: 101255023;  */

void FUN_101255000(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101255024; end: 101255033;  */

undefined1  [16] FUN_101255024(void)

{
  return ZEXT816(0x110398e78);
}



/* Entry: 101255034; end: 101255053;  */

void FUN_101255034(void)

{
  func_0x000107c61168(&PTR_PTR_112d6bf10);
  return;
}



/* Entry: 101255054; end: 101255177;  */

ulong FUN_101255054(code *param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong auStack_80 [2];
  undefined8 uStack_70;
  ulong auStack_60 [2];
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112d6bc90;
  func_0x0001000285a8(0x112d6bc90,&UNK_10d92ed68);
  func_0x000100075034(auStack_80,FUN_101253758,0,uVar1);
  func_0x000107c61574();
  uVar5 = auStack_80[0];
  if (auStack_80[0] == 0) {
    (**(code **)(param_3 + 0x10))();
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uStack_70 = uVar3;
    func_0x000107c6157c(uVar4);
    uVar1 = 0x112d6bc98;
    func_0x0001000285a8(0x112d6bc98,&UNK_10d92ed70);
    func_0x000100075034(auStack_60,param_5,auStack_80,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(uVar4);
    uVar5 = auStack_60[0];
  }
  uVar2 = uVar5;
  (*param_1)();
  func_0x000107c615e8(uVar5);
  if (uVar2 < 2) {
    func_0x000107c615f0(param_4);
    uVar2 = param_4;
  }
  return uVar2;
}



/* Entry: 101255178; end: 101255347;  */

void FUN_101255178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6bf70,&UNK_10d92ef50);
  puVar1 = &UNK_110398e98;
  func_0x000107c613fc(&UNK_110398e98,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_101255348,puVar1);
  return;
}



/* Entry: 101255348; end: 10125535b;  */

void FUN_101255348(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_101255cec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_98;
  *(undefined8 *)(lVar1 + 0x40) = uStack_80;
  *(undefined8 *)(lVar1 + 0x10) = uStack_90;
  *(undefined8 *)(lVar1 + 0x18) = uStack_68;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *param_1 = lVar1;
  return;
}



/* Entry: 10125535c; end: 1012553c7;  */

void FUN_10125535c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_6;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1012553c8; end: 10125592f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012553c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126a67b8;
  func_0x000107c610f8(PTR_PTR_1126a67b8);
  func_0x000107c453e4();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f9cfa8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c4d604();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x18);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar6 = lVar3;
        func_0x000107c40b20();
        func_0x000107c61180();
        func_0x000107c57a1c(puVar2);
        puVar7 = &UNK_110398ee0;
        func_0x000107c613fc(&UNK_110398ee0,0x18,7);
        *(long *)(puVar7 + 0x10) = lVar5;
        puVar8 = PTR_PTR_1126b1678;
        func_0x000107c610f8(PTR_PTR_1126b1678);
        puVar10 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = FUN_101255d0c;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_101016bdc;
        puStack_88 = &UNK_110398ef8;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c615f0(lVar5);
        func_0x000107c46b38(puVar8);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_78);
        func_0x000107c56a84(puVar2);
        func_0x000107c61170(puVar8);
        puVar7 = &UNK_110398f30;
        func_0x000107c613fc(&UNK_110398f30,0x18,7);
        *(long *)(puVar7 + 0x10) = lVar4;
        puVar8 = PTR_PTR_1126b1678;
        func_0x000107c610f8(PTR_PTR_1126b1678);
        pcStack_80 = (code *)0x101255d30;
        puStack_a0 = puVar10;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_101016bdc;
        puStack_88 = &UNK_110398f48;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c615f0(lVar4);
        func_0x000107c46b38(puVar8);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_78);
        func_0x000107c52138(puVar2);
        func_0x000107c61170(puVar8);
        if (lRam0000000112d6be10 != -1) {
          func_0x000107c61568(0x112d6be10,FUN_101253df0);
        }
        uVar1 = uRam00000001137ff2a0;
        puVar7 = &UNK_110398f80;
        func_0x000107c613fc(&UNK_110398f80,0x30,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x1012537c4;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        *(undefined8 *)(puVar7 + 0x20) = param_1;
        *(undefined8 *)(puVar7 + 0x28) = uVar1;
        puVar10 = PTR_PTR_1126b1678;
        func_0x000107c610f8(PTR_PTR_1126b1678);
        pcStack_80 = FUN_101255d38;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_101016bdc;
        puStack_88 = &UNK_110398f98;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c6157c(param_1);
        func_0x000107c615f0(uVar1);
        func_0x000107c46b38(puVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_78);
        func_0x000107c57a24(puVar2);
        func_0x000107c61170(puVar10);
        if (lRam0000000112d6be08 != -1) {
          func_0x000107c61568(0x112d6be08,0x101253e04);
        }
        uVar1 = uRam00000001137ff298;
        puVar7 = &UNK_110398fd0;
        func_0x000107c613fc(&UNK_110398fd0,0x30,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x101253810;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        *(undefined8 *)(puVar7 + 0x20) = param_1;
        *(undefined8 *)(puVar7 + 0x28) = uVar1;
        puVar10 = PTR_PTR_1126b1678;
        func_0x000107c610f8(PTR_PTR_1126b1678);
        pcStack_80 = (code *)0x101255d5c;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_101016bdc;
        puStack_88 = &UNK_110398fe8;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c6157c(param_1);
        func_0x000107c615f0(uVar1);
        func_0x000107c46b38(puVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_78);
        func_0x000107c56430(puVar2);
        func_0x000107c61170(puVar10);
        if (lRam0000000112d6be00 != -1) {
          func_0x000107c61568(0x112d6be00,0x101253e18);
        }
        uVar1 = uRam00000001137ff290;
        puVar7 = &UNK_110399020;
        func_0x000107c613fc(&UNK_110399020,0x30,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x10125385c;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        *(undefined8 *)(puVar7 + 0x20) = param_1;
        *(undefined8 *)(puVar7 + 0x28) = uVar1;
        puVar10 = PTR_PTR_1126b1678;
        func_0x000107c610f8(PTR_PTR_1126b1678);
        pcStack_80 = (code *)0x101255db4;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_101016bdc;
        puStack_88 = &UNK_110399038;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c6157c(param_1);
        func_0x000107c615f0(uVar1);
        func_0x000107c46b38(puVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_78);
        func_0x000107c565e8(puVar2);
        func_0x000107c61170(puVar10);
        FUN_101253ae8();
        func_0x000107c594a0(puVar2);
        func_0x000107c61170(puVar10);
        FUN_1012559d0(param_1,lVar4);
        func_0x000107c56014(puVar2);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(param_1);
        return puVar2;
      }
      func_0x000107c615e8(lVar3);
      lVar3 = lVar5;
    }
    func_0x000107c615e8(lVar3);
  }
  return puVar2;
}



/* Entry: 101255930; end: 1012559cf;  */

undefined * FUN_101255930(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x000108f27718();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    func_0x000108f27828();
    func_0x000107c61180();
    if (param_1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107d70788(puVar1,param_1);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(param_1);
      return puVar2;
    }
    func_0x000107c61170(puVar1);
  }
  puVar1 = PTR_PTR_1126b0ec0;
  func_0x000107c610f8(PTR_PTR_1126b0ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar1;
}



/* Entry: 1012559d0; end: 101255c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012559d0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  plVar5 = &lStack_80;
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef31920);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if (param_2 == 0) {
    func_0x0001012512d0(0);
    func_0x000107c610f8();
    func_0x000107c61580(param_1,2);
    pcVar6 = FUN_101255dd8;
    FUN_10124d230(0x4082c00000000000,FUN_101255dd8,param_1,0x101255de0,param_1);
    puVar7 = &UNK_110399070;
    func_0x000107c613fc(&UNK_110399070,0x18,7);
    *(code **)(puVar7 + 0x10) = pcVar6;
    puVar8 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    uStack_50 = 0x101255de8;
    puStack_58 = &UNK_110399088;
    puStack_48 = puVar7;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112ff2c78);
    func_0x000107c61174(uVar2);
    func_0x000107c4f3e4(uVar1);
    func_0x000107c61180();
    puVar7 = PTR_PTR_1126a67c0;
    func_0x000107c610f8();
    func_0x000107c4788c();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    lVar3 = 0;
    FUN_10124d14c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined **)(lVar4 + _DAT_112d6b438) = puVar7;
    lStack_80 = lVar4;
    lStack_78 = lVar3;
    func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long **)(unaff_x20 + 0x40) = plVar5;
    func_0x000107c615e8(uVar1);
    func_0x0001012512d0(0);
    func_0x000107c610f8();
    func_0x000107c61580(param_1,2);
    pcVar6 = FUN_101255e64;
    FUN_10124d230(0x4082c00000000000,FUN_101255e64,param_1,0x101255e68,param_1);
    puVar7 = &UNK_1103990c0;
    func_0x000107c613fc(&UNK_1103990c0,0x18,7);
    *(code **)(puVar7 + 0x10) = pcVar6;
    puVar8 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    uStack_50 = 0x101255e34;
    puStack_58 = &UNK_1103990d8;
    puStack_48 = puVar7;
  }
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101016bdc;
  ppuVar9 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c46b38(puVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puStack_48);
  return puVar8;
}



/* Entry: 101255c70; end: 101255cdb;  */

void FUN_101255c70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101255cdc; end: 101255ceb;  */

undefined1  [16] FUN_101255cdc(void)

{
  return ZEXT816(0x110398ec0);
}



/* Entry: 101255cec; end: 101255d0b;  */

void FUN_101255cec(void)

{
  func_0x000107c61168(&PTR_PTR_112d6bfb8);
  return;
}



/* Entry: 101255d0c; end: 101255d37;  */

void FUN_101255d0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101255d38; end: 101255dd7;  */

void FUN_101255d38(void)

{
  long unaff_x20;
  
  FUN_101255054(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),0x101255e50);
  return;
}



/* Entry: 101255dd8; end: 101255def;  */

ulong FUN_101255dd8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong auStack_60 [2];
  undefined8 uStack_50;
  ulong auStack_40 [2];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112d6bc90;
  func_0x0001000285a8(0x112d6bc90,&UNK_10d92ed68);
  func_0x000100075034(auStack_60,FUN_101253758,0,uVar1);
  func_0x000107c61574();
  uVar5 = auStack_60[0];
  if (auStack_60[0] == 0) {
    (**(code **)(unaff_x20 + 0x10))();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_50 = uVar3;
    func_0x000107c6157c(uVar4);
    uVar1 = 0x112d6bc98;
    func_0x0001000285a8(0x112d6bc98,&UNK_10d92ed70);
    func_0x000100075034(auStack_40,FUN_101253dc8,auStack_60,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(uVar4);
    uVar5 = auStack_40[0];
  }
  uVar2 = uVar5;
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,PTR_s_localStoryStore_1126051f8);
  if ((uVar2 & 1) == 0) {
    func_0x000107c615e8(uVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = uVar5;
    func_0x000107c4b830(uVar5);
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
  }
  return uVar2;
}



/* Entry: 101255df0; end: 101255e07;  */

void FUN_101255df0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101253774(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101255e08; end: 101255e3b;  */

void FUN_101255e08(long param_1,long param_2)

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



/* Entry: 101255e3c; end: 101255e63;  */

void FUN_101255e3c(void)

{
  FUN_101255df0();
  return;
}



/* Entry: 101255e64; end: 101255e6b;  */

ulong FUN_101255e64(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong auStack_60 [2];
  undefined8 uStack_50;
  ulong auStack_40 [2];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112d6bc90;
  func_0x0001000285a8(0x112d6bc90,&UNK_10d92ed68);
  func_0x000100075034(auStack_60,FUN_101253758,0,uVar1);
  func_0x000107c61574();
  uVar5 = auStack_60[0];
  if (auStack_60[0] == 0) {
    (**(code **)(unaff_x20 + 0x10))();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_50 = uVar3;
    func_0x000107c6157c(uVar4);
    uVar1 = 0x112d6bc98;
    func_0x0001000285a8(0x112d6bc98,&UNK_10d92ed70);
    func_0x000100075034(auStack_40,FUN_101253dc8,auStack_60,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(uVar4);
    uVar5 = auStack_40[0];
  }
  uVar2 = uVar5;
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,PTR_s_localStoryStore_1126051f8);
  if ((uVar2 & 1) == 0) {
    func_0x000107c615e8(uVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = uVar5;
    func_0x000107c4b830(uVar5);
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
  }
  return uVar2;
}



/* Entry: 101255e6c; end: 101255ebf;  */

void FUN_101255e6c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101255ec0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101255ec0; end: 101256077;  */

/* WARNING: Possible PIC construction at 0x000101255f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101255fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125602c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101256040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101256050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101256044) */
/* WARNING: Removing unreachable block (ram,0x000101256030) */
/* WARNING: Removing unreachable block (ram,0x000101255fc8) */
/* WARNING: Removing unreachable block (ram,0x000101255f14) */
/* WARNING: Removing unreachable block (ram,0x000101256054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101255ec0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = unaff_x20 + _DAT_112d6c050;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6c060);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61168(PTR_PTR_1126aeae0);
    func_0x000107c5e2b8();
    func_0x000107c61180();
    func_0x000107c61168(PTR_PTR_1126b3e80);
    func_0x000107c5d02c();
    func_0x000107c61180();
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d6c068);
      func_0x000107c615f0(puVar2);
      func_0x000107c3ed54(uVar4);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d6c058);
      *(undefined **)(unaff_x20 + _DAT_112d6c058) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
      return;
    }
    func_0x000107c610f8(PTR_PTR_1126aead0);
    func_0x000107c47994();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101256078; end: 101256173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101256078(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d6c060);
  lVar5 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112d6c058);
  if (lVar5 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    *(undefined8 *)(unaff_x20 + _DAT_112d6c058) = 0;
    puVar3 = (undefined1 *)0x0;
    if (param_1 != (code *)0x0) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000b0c7c;
      puStack_48 = &UNK_1103991c0;
      pcStack_40 = param_1;
      uStack_38 = param_2;
      func_0x000107c60bc4(&puStack_60);
      uVar1 = uStack_38;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar1);
      puVar3 = (undefined1 *)ppuVar2;
    }
    func_0x000107c41864(lVar5);
    func_0x000107c60bd0(puVar3);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 101256174; end: 1012561d3; -[_TtC24MyProfile3ImplementationP33_1A0AE0F07E1D5B3A70224C38DAB1C1EA36MyProfile3NowPlayingSettingsLauncher init] */

void FUN_101256174(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.MyProfile3NowPlayingSettingsLauncher",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012561a0);
  (*pcVar1)();
}



/* Entry: 1012561d4; end: 10125622b; -[_TtC24MyProfile3ImplementationP33_1A0AE0F07E1D5B3A70224C38DAB1C1EA36MyProfile3NowPlayingSettingsLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012561d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c060));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c068));
  func_0x000107c61610(param_1 + _DAT_112d6c050);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6c058));
  return;
}



/* Entry: 10125622c; end: 101256b8b;  */

void FUN_10125622c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6c048,&UNK_10d92f000);
  puVar1 = &UNK_110399110;
  func_0x000107c613fc(&UNK_110399110,0x100,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x0001000823a8(FUN_101256b8c,puVar1);
  return;
}



/* Entry: 101256b8c; end: 101256be7;  */

void FUN_101256b8c(void)

{
  long unaff_x20;
  
  func_0x0001012564a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Entry: 101256be8; end: 101257087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101256be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0xe0) = puVar2;
  puVar2 = PTR_PTR_1126b0c28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0xe8) = puVar2;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  func_0x000107c61614(unaff_x20 + 0x108,0);
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar3;
    *(undefined8 *)(unaff_x20 + 0x30) = param_5;
    *(undefined8 *)(unaff_x20 + 0x38) = param_6;
    *(undefined8 *)(unaff_x20 + 0x40) = param_7;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar4 = param_8;
    func_0x000107c3feac();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x50) = param_9;
    *(undefined8 *)(unaff_x20 + 0x58) = param_10;
    *(undefined8 *)(unaff_x20 + 0x60) = param_11;
    *(undefined8 *)(unaff_x20 + 0x78) = param_12;
    *(undefined8 *)(unaff_x20 + 0x80) = param_13;
    *(undefined8 *)(unaff_x20 + 0x88) = param_14;
    *(undefined8 *)(unaff_x20 + 0x90) = param_15;
    *(undefined8 *)(unaff_x20 + 0x120) = param_19;
    *(undefined8 *)(unaff_x20 + 0x128) = param_20;
    *(undefined8 *)(unaff_x20 + 0x98) = param_18;
    *(undefined8 *)(unaff_x20 + 0xa0) = param_21;
    *(undefined8 *)(unaff_x20 + 0x68) = param_23;
    *(undefined8 *)(unaff_x20 + 0x70) = param_24;
    *(undefined8 *)(unaff_x20 + 0xa8) = param_22;
    *(undefined8 *)(unaff_x20 + 0xb0) = param_25;
    *(undefined8 *)(unaff_x20 + 0xb8) = param_26;
    *(undefined8 *)(unaff_x20 + 0xc0) = param_27;
    *(undefined8 *)(unaff_x20 + 200) = param_28;
    *(undefined8 *)(unaff_x20 + 0xd0) = param_29;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_22);
    func_0x000107c61174(param_23);
    func_0x000107c61174(param_24);
    func_0x000107c61174(param_25);
    uVar4 = param_30;
    func_0x000107c43ab8();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x20 + 0xd8) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x130) = param_17;
    lVar5 = 0;
    FUN_101257088();
    lVar3 = lVar5;
    func_0x000107c610f8();
    func_0x000107c61614(lVar3 + _DAT_112d6c050,0);
    *(undefined8 *)(lVar3 + _DAT_112d6c058) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d6c060) = param_16;
    *(undefined8 *)(lVar3 + _DAT_112d6c068) = param_17;
    puVar2 = PTR_s_init_1125d9248;
    lStack_78 = lVar3;
    lStack_70 = lVar5;
    func_0x000107c61174(param_17);
    func_0x000107c61174();
    func_0x000107c61174(param_16);
    plVar6 = &lStack_78;
    func_0x000107c61154(plVar6,puVar2);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_30);
    *(long **)(unaff_x20 + 0x118) = plVar6;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101257088);
  (*pcVar1)();
}



/* Entry: 101257088; end: 1012570a7;  */

void FUN_101257088(void)

{
  func_0x000107c61168(&PTR_PTR_1127bfdb0);
  return;
}



/* Entry: 1012570a8; end: 10125739b;  */

undefined * FUN_1012570a8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_90;
  puVar2 = PTR_PTR_1126a67c8;
  func_0x000107c610f8(PTR_PTR_1126a67c8);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a67d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(unaff_x20 + 0x100) == 0) {
    puVar4 = puVar3;
    FUN_10125739c();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x100);
    *(undefined **)(unaff_x20 + 0x100) = puVar4;
    func_0x000107c61170(uVar8);
    lVar7 = *(long *)(unaff_x20 + 0x110);
    puVar4 = PTR_PTR_1126b4098;
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x110);
    puVar4 = PTR_PTR_1126b4098;
  }
  PTR_PTR_1126b4098 = puVar4;
  if (lVar7 == 0) {
    func_0x000107c610f8();
    func_0x000107c45870();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10125739c);
      (*pcVar1)();
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x110);
    *(undefined **)(unaff_x20 + 0x110) = puVar4;
    func_0x000107c61170(uVar8);
  }
  lVar7 = *(long *)(unaff_x20 + 0x100);
  if (lVar7 != 0) {
    puStack_58 = PTR_DAT_11269cb90;
    func_0x000107c61494(param_1,1,&puStack_58);
    func_0x000107c57740(lVar7);
  }
  lVar7 = *(long *)(unaff_x20 + 0x110);
  if (lVar7 != 0) {
    puStack_60 = PTR_DAT_11269cb90;
    func_0x000107c61494(param_1,1,&puStack_60);
    func_0x000107c57740(lVar7);
  }
  FUN_101257620(param_2);
  func_0x000107c53610(puVar3);
  func_0x000107c61170(param_2);
  FUN_101257bf0();
  uVar8 = param_2;
  FUN_101257d90();
  func_0x000107c52c84(puVar3);
  func_0x000107c61170(uVar8);
  FUN_101257e64();
  func_0x000107c59468(puVar3);
  func_0x000107c61170(uVar8);
  FUN_101258000();
  func_0x000107c58b8c(puVar3);
  func_0x000107c61170(uVar8);
  puVar5 = PTR_PTR_1126b3df0;
  func_0x000107c610f8(PTR_PTR_1126b3df0);
  func_0x000107c45978();
  puVar4 = &UNK_110399138;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_70 = FUN_1012594cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101258c60;
  puStack_78 = &UNK_110399150;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56ea0(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c5a828(puVar3);
  func_0x000107c61170(puVar5);
  uVar8 = param_1;
  FUN_1012581f4(param_1);
  func_0x000107c56b5c(puVar3);
  func_0x000107c61170(uVar8);
  FUN_101258340(param_1);
  func_0x000107c59f04(puVar3);
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c5739c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 10125739c; end: 10125761f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10125739c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = &UNK_110399138;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  uVar7 = 0x112d6c270;
  func_0x0001000285a8(0x112d6c270,&UNK_10d92f1e0);
  func_0x000107c613fc();
  pcVar5 = FUN_10125aca4;
  func_0x0001000bdd8c(FUN_10125aca4,puVar6,uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0xa0) + _DAT_113044b20);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x58) + _DAT_113044a80);
  lVar10 = *(long *)(unaff_x20 + 0xa8);
  if (lVar10 == 0) {
    func_0x000107c61174();
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar12);
    lVar10 = lVar9;
    func_0x000107c61174();
    lVar11 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar12);
    func_0x000107c61174(lVar9);
    func_0x000107c3fe88();
    func_0x000107c61180();
    lVar11 = lVar10;
  }
  func_0x0001000bf56c();
  puVar6 = PTR_PTR_1126b3ec0;
  func_0x000107c610f8();
  func_0x000107c49458();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61574(pcVar5);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101257620);
  (*pcVar5)();
}



/* Entry: 101257620; end: 101257bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101257620(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong unaff_x20;
  undefined8 uVar13;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_d0;
  puVar7 = &UNK_110399138;
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = puVar7;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = PTR_PTR_1126b3ea8;
  func_0x000107c610f8(PTR_PTR_1126b3ea8);
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10125ab2c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100c75f50;
  puStack_88 = &UNK_110399558;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(ppuVar4);
  uStack_b0 = 0x10125ab68;
  puStack_d0 = puVar11;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_100c75f50;
  puStack_b8 = &UNK_110399580;
  puStack_a8 = puVar2;
  func_0x000107c60bc4(&puStack_d0);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c47bec(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puStack_a8);
  puVar6 = puStack_78;
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcStack_80 = (code *)0x10125aba4;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100c75f50;
  puStack_88 = &UNK_1103995a8;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c56df0(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar6 = puVar7;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcStack_80 = FUN_10125abe0;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x101259c30;
  puStack_88 = &UNK_1103995d0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c55b18(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar6 = puVar7;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcStack_80 = FUN_10125abe8;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1103995f8;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c40(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  uVar12 = unaff_x20;
  func_0x000107c61644(puVar7 + 0x10);
  pcStack_80 = (code *)0x10125ac24;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_110399620;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c3c(puVar3);
  func_0x000107c60bd0(ppuVar4);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112fbabe0);
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  func_0x000107c53548(puVar3);
  func_0x000107c615e8(uVar8);
  uVar9 = *(ulong *)(unaff_x20 + 0xb0);
  func_0x000107c3dae4();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (uVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar10;
    func_0x000107c4c1e0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar10);
  }
  func_0x000107c52604(puVar3);
  func_0x000107c615e8();
  func_0x0001080608e0();
  func_0x000107c61180();
  if (uVar9 != 0) {
    uVar10 = uVar9;
    func_0x000107c5faec();
    func_0x000107c6142c(uVar12);
    uVar10 = uVar10 & 0xffffffffffff;
    if ((uVar12 & 0x2000000000000000) != 0) {
      uVar10 = uVar12 >> 0x38 & 0xf;
    }
    if (uVar10 != 0) {
      func_0x000107c53608(puVar3);
    }
    func_0x000107c61170();
  }
  func_0x000101259d64();
  func_0x000107c54fa0(puVar3);
  func_0x000107c615e8();
  func_0x000108fab124();
  if ((uVar9 & 1) == 0) {
    func_0x000108060890(*(undefined8 *)(unaff_x20 + 0x28));
  }
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar6 = puVar7;
  func_0x000107c4a8a4(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar11 = puVar6;
  func_0x000107c5cb24(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c544a8(puVar3);
  func_0x000107c61170(puVar11);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001080608ec(uVar13);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar6 = puVar7;
  func_0x000107c4a8a4(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar11 = puVar6;
  func_0x000107c5cb24(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c54154(puVar3);
  func_0x000107c61170(puVar11);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  func_0x000107c53614(puVar3);
  func_0x000107c615e8(uVar8);
  func_0x000108060ea8(uVar13);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4a8a4(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar11 = puVar7;
  func_0x000107c5cb24(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c544d8(puVar3);
  func_0x000107c61170(puVar11);
  return puVar3;
}



/* Entry: 101257bf0; end: 101257d8f;  */

undefined * FUN_101257bf0(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x28);
  func_0x000108435fdc();
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c3e944();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar2 = puVar3;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    func_0x0001000285a8(0x112d61f78,&UNK_10d927f20);
    puVar4 = puVar3;
    func_0x000107c5d6fc(puVar3);
    func_0x000107c61180();
    puVar2 = &UNK_110399518;
    func_0x000107c613fc(&UNK_110399518,0x11,7);
    puVar2[0x10] = uVar1;
    uStack_50 = 0x10125aaa4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10125ad94;
    puStack_58 = &UNK_110399530;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar6 = puVar4;
    func_0x000107c4c280(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar4);
    puVar2 = puVar6;
    func_0x0001000b637c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x0001004575f0();
    func_0x000107c61574(puVar2);
    puVar2 = puVar6;
    func_0x000107c5cb24(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 101257d90; end: 101257e63;  */

undefined * FUN_101257d90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b3da8;
  func_0x000107c610f8(PTR_PTR_1126b3da8);
  func_0x000107c45978();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c551fc(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar3);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c3e940();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c3e93c(lVar5);
      func_0x000107c61180();
      func_0x000107c52c80(puVar2,param_2,lVar4);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar4);
    }
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101257e64);
  (*pcVar1)();
}



/* Entry: 101257e64; end: 101257fff;  */

undefined * FUN_101257e64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  FUN_1012585c4();
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar3 = PTR_PTR_1126b3dd8;
  func_0x000107c610f8(PTR_PTR_1126b3dd8);
  func_0x000107c487e0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  puVar1 = &UNK_110399138;
  puVar4 = puVar1;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x10125aa8c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101258c60;
  puStack_68 = &UNK_110399440;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56ea0(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uStack_60 = 0x10125aa94;
  puStack_80 = puVar2;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_1000f6b44;
  puStack_68 = &UNK_110399468;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56d94(puVar3);
  func_0x000107c60bd0(ppuVar6);
  return puVar3;
}



/* Entry: 101258000; end: 1012581f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101258000(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  puVar2 = PTR_PTR_1126b3e10;
  func_0x000107c610f8(PTR_PTR_1126b3e10);
  func_0x000107c453e4();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5164c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((lVar3 == 0) || (lVar4 = lVar3, func_0x000107c4adac(), lVar4 != 0)) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x58) + _DAT_113044a80);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c4a2b0();
      func_0x000107c615e8(lVar4);
      if ((int)lVar5 != 0) {
        func_0x000107c58ba4(puVar2);
        puVar6 = &UNK_110399138;
        func_0x000107c613fc(&UNK_110399138,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        pcStack_60 = FUN_10125aa84;
        puStack_80 = puVar1;
        uStack_78 = 0x42000000;
        pcStack_70 = FUN_100c75f50;
        puStack_68 = &UNK_1103993c8;
        puStack_58 = puVar6;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c61574(puStack_58);
        func_0x000107c56ea0(puVar2);
        func_0x000107c60bd0(ppuVar7);
      }
    }
  }
  puVar6 = &UNK_110399138;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcStack_60 = FUN_10125aa48;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_1000f6b44;
  puStack_68 = &UNK_1103993a0;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56f54(puVar2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar3);
  return puVar2;
}



/* Entry: 1012581f4; end: 10125833f;  */

long FUN_1012581f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000103a92cf4();
    lVar7 = lVar2;
    func_0x000107c614f0();
    (**(code **)(param_2 + 8))();
    if (lVar7 != 0) {
      puVar3 = &UNK_110399138;
      func_0x000107c613fc(&UNK_110399138,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_110399298;
      func_0x000107c613fc(&UNK_110399298,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,param_1);
      puVar5 = &UNK_1103992c0;
      func_0x000107c613fc(&UNK_1103992c0,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      uStack_50 = 0x10125aa2c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_101258c60;
      puStack_58 = &UNK_1103992d8;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c56dc8(lVar7);
      func_0x000107c60bd0(ppuVar6);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return lVar7;
}



/* Entry: 101258340; end: 1012585c3;  */

undefined * FUN_101258340(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar10 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + 0xc0);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42650();
    if ((int)lVar1 != 0) {
      lVar3 = *(long *)(unaff_x20 + 200);
      func_0x000107c5cc28();
      func_0x000107c61180();
      lVar1 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        lVar3 = lVar1;
        func_0x000107c5cc2c(lVar1);
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        lVar4 = *(long *)(unaff_x20 + 0xd0);
        func_0x000107c4141c();
        func_0x000107c61180();
        lVar1 = lVar4;
        func_0x000107c41414();
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        lVar4 = lVar1;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar4 != 0) {
          lVar1 = lVar4;
          func_0x000107c409cc();
          func_0x000107c61180();
          if (lVar1 != 0) {
            uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
            func_0x000107c5dbd4(uVar5);
            func_0x000107c61180();
            lVar6 = lVar1;
            func_0x000107c40978(lVar1);
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            puVar7 = PTR_PTR_1126b3dc0;
            func_0x000107c610f8(PTR_PTR_1126b3dc0);
            func_0x000107c453e4();
            lVar8 = lVar6;
            func_0x000107c41408(lVar6);
            func_0x000107c61180();
            func_0x000107c53e8c(puVar7);
            func_0x000107c615e8(lVar8);
            func_0x000107c59f08(puVar7);
            puVar9 = &UNK_110399138;
            func_0x000107c613fc(&UNK_110399138,0x18,7);
            func_0x000107c61644(puVar9 + 0x10);
            uStack_60 = 0x10125aa1c;
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0x42000000;
            puStack_70 = &UNK_1000f6b44;
            puStack_68 = &UNK_110399238;
            puStack_58 = puVar9;
            func_0x000107c60bc4(&puStack_80);
            func_0x000107c61574(puStack_58);
            func_0x000107c56c4c(puVar7);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar1);
            func_0x000107c615e8(lVar6);
            return puVar7;
          }
          func_0x000107c615e8(lVar3);
          lVar3 = lVar4;
        }
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c615e8(lVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 1012585c4; end: 10125874f;  */

undefined * FUN_1012585c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar3 = &puStack_70;
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c519cc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    func_0x0001000285a8(0x112d61f78,&UNK_10d927f20);
    puVar1 = puVar2;
    func_0x000107c5d6fc(puVar2);
    func_0x000107c61180();
    uStack_50 = 0x10125aa9c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10125ad98;
    puStack_58 = &UNK_1103994e0;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    puVar4 = puVar1;
    func_0x000107c4c280(puVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar1);
    puVar1 = puVar4;
    func_0x0001000b637c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x0001004575f0();
    func_0x000107c61574(puVar1);
    puVar1 = puVar4;
    func_0x000107c5cb24(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101258750; end: 1012587a3;  */

void FUN_101258750(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1012587a4();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1012587a4; end: 101258c5f;  */

/* WARNING: Removing unreachable block (ram,0x000101258c5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012587a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined **ppuVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c519cc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar1 != (undefined *)0x0) {
      puStack_a8 = (undefined *)0x0;
      uStack_a0 = 0xe000000000000000;
      func_0x000107c602fc(0x7d);
      func_0x000107c5fb78(0xd000000000000057,0x800000010ef31a80);
      puVar9 = puVar1;
      func_0x000107c5cd08();
      puVar3 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puVar2 = PTR___sSuN_11034e220;
      puVar5 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puStack_78 = puVar9;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0x6320746e6573202c,0xee00203a746e756f);
      puVar9 = puVar1;
      func_0x000107c51f24();
      puVar5 = puVar3;
      puStack_78 = puVar9;
      func_0x000107c6057c(puVar2,puVar3);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0xd000000000000012,0x800000010ef31ae0);
      puVar9 = puVar1;
      func_0x000107c4f9fc();
      puStack_78 = puVar9;
      func_0x000107c6057c(puVar2,puVar3);
      puVar9 = puVar3;
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uVar4 = uStack_a0;
      puVar2 = puStack_a8;
      puVar3 = puVar1;
      func_0x000107c5cd08();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b3e90;
        func_0x000107c610f8(PTR_PTR_1126b3e90);
        func_0x000107c453e4();
        func_0x000107c578ac();
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x60) + _DAT_1130807f0);
        if (lVar7 == 0) {
          func_0x000107c6142c(uVar4);
        }
        else {
          func_0x000107c615f0(lVar7);
          func_0x000107c5fadc(puVar2,uVar4);
          func_0x000107c6142c(uVar4);
          func_0x0001044db3fc(0);
          uVar4 = 0;
          puVar9 = (undefined *)0x0;
          func_0x0001044da404(0,0,0,0xc0);
          func_0x000107c5027c(lVar7);
          func_0x000107c615e8(lVar7);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(uVar4);
        }
        func_0x000107c61170(puVar3);
      }
      else {
        func_0x000107c6142c(uVar4);
      }
      puVar2 = puVar1;
      func_0x000107c5cd08(puVar1);
      puVar3 = puVar1;
      func_0x000107c51f24(puVar1);
      puVar5 = puVar1;
      func_0x000107c4f9fc(puVar1);
      puVar6 = PTR_PTR_1126b3e60;
      func_0x000107c610f8(PTR_PTR_1126b3e60);
      func_0x000107c487dc((double)puVar2,(double)puVar3,(double)puVar5);
      lVar7 = *(long *)(unaff_x20 + 0x28);
      func_0x000108fab38c();
      if (0 < lVar7) {
        func_0x000107c5bf78(puVar1);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c490d4();
        func_0x000107c5991c(puVar6);
        func_0x000107c61170(puVar2);
      }
      puVar2 = PTR_PTR_1126afdb8;
      func_0x000107c610f8(PTR_PTR_1126afdb8);
      func_0x000107c45510();
      ppuVar10 = &PTR____CFConstantStringClassReference_110f12578;
      ppuVar8 = ppuVar10;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f12578);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f12578);
      func_0x000107c61170(ppuVar8);
      puVar3 = PTR_PTR_1126b02a8;
      func_0x000107c610f8();
      func_0x000107c61174(puVar2);
      func_0x000107c5fadc(ppuVar10,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c46d50();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(ppuVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = &UNK_110399138;
        func_0x000107c613fc(&UNK_110399138,0x18,7);
        func_0x000107c61644(puVar9 + 0x10);
        puVar5 = &UNK_1103994a0;
        func_0x000107c613fc(&UNK_1103994a0,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar9;
        *(undefined **)(puVar5 + 0x18) = puVar3;
        *(undefined8 *)(puVar5 + 0x20) = 0;
        uStack_88 = 0x10125ada0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1103994b8;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar8);
        puVar9 = puStack_80;
        func_0x000107c61174(puVar3);
        func_0x000107c61574(puVar9);
        func_0x0001000d76cc("Profile 3 Pills",ppuVar8);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(puVar1);
        puVar1 = puVar6;
        puVar6 = puVar2;
        puVar2 = puVar3;
      }
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 101258c60; end: 101258cab;  */

void FUN_101258c60(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101258cac; end: 101258cff;  */

void FUN_101258cac(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101258d00();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101258d00; end: 101258e3f;  */

/* WARNING: Possible PIC construction at 0x000101258d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101258d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101258ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101258dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101258e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101258de0) */
/* WARNING: Removing unreachable block (ram,0x000101258e18) */
/* WARNING: Removing unreachable block (ram,0x000101258de4) */
/* WARNING: Removing unreachable block (ram,0x000101258d40) */
/* WARNING: Removing unreachable block (ram,0x000101258d98) */
/* WARNING: Removing unreachable block (ram,0x000101258d44) */
/* WARNING: Removing unreachable block (ram,0x000101258e2c) */
/* WARNING: Removing unreachable block (ram,0x000101258d60) */
/* WARNING: Removing unreachable block (ram,0x000101258d6c) */
/* WARNING: Removing unreachable block (ram,0x000101258d70) */
/* WARNING: Removing unreachable block (ram,0x000101258e30) */
/* WARNING: Removing unreachable block (ram,0x000101258d74) */
/* WARNING: Removing unreachable block (ram,0x000101258d7c) */
/* WARNING: Removing unreachable block (ram,0x000101258d80) */
/* WARNING: Removing unreachable block (ram,0x000101258e34) */
/* WARNING: Removing unreachable block (ram,0x000101258d84) */
/* WARNING: Removing unreachable block (ram,0x000101258e00) */
/* WARNING: Removing unreachable block (ram,0x000101258e3c) */
/* WARNING: Removing unreachable block (ram,0x000101258e04) */

void FUN_101258d00(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101258e3c);
  (*pcVar1)();
}



/* Entry: 101258e40; end: 10125901f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101258e40(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5cd08();
    func_0x000107c61170(param_2);
  }
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c578ac();
  if ((param_2 != 0) && (lVar4 == 0)) {
    lVar5 = *(long *)(*(long *)(param_3 + 0x60) + _DAT_1130807f0);
    if (lVar5 != 0) {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      func_0x000107c615f0(lVar5);
      func_0x000107c602fc(0x19);
      func_0x000107c5fb78(0xd000000000000017,0x800000010ef31b00);
      uStack_70 = 0;
      uStack_68 = 0;
      uVar3 = 0x112d6c260;
      func_0x0001000285a8(0x112d6c260,&UNK_10d92f1d8);
      func_0x000107c603d0(&uStack_70,&uStack_60,uVar3,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar3 = uStack_58;
      uVar2 = uStack_60;
      func_0x000107c5fadc(uStack_60,uStack_58);
      func_0x000107c6142c(uVar3);
      func_0x0001044db3fc(0);
      uVar3 = 0;
      func_0x0001044da404(0,0,0,0xc0);
      func_0x000107c5027c(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000108c79e8c(*(undefined8 *)(param_3 + 0xe8),PTR_PTR_1133bb3c8,1);
  }
  lVar5 = 0x112d6c260;
  func_0x0001000285a8(0x112d6c260,&UNK_10d92f1d8);
  param_1[3] = lVar5;
  func_0x000107c61170(puVar1);
  *param_1 = lVar4;
  *(bool *)(param_1 + 1) = param_2 == 0;
  return;
}



/* Entry: 101259020; end: 10125935b;  */

void FUN_101259020(undefined8 *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined4 uStack_7c;
  long lStack_78;
  
  lVar2 = 0;
  uStack_7c = param_3;
  func_0x000107c5ec74();
  lStack_88 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar14 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  lStack_78 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar17 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ef64();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef54(lVar13);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar6 = PTR_PTR_1126b3db0;
    func_0x000107c610f8();
    func_0x000107c47858(0,0);
    uVar5 = 0;
    FUN_10125aaac();
  }
  else {
    func_0x000107c5ee94(lVar17);
    func_0x000107c61170(param_2);
    lStack_98 = lVar8;
    (**(code **)(lVar8 + 0x20))(lVar16,lVar17,lStack_78);
    lVar8 = 0x112d36588;
    func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
    lVar4 = 0;
    func_0x000107c5ef5c();
    lVar17 = *(long *)(lVar4 + -8);
    lVar12 = *(long *)(lVar17 + 0x48);
    uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar11 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    lStack_a0 = lVar2;
    puStack_90 = param_1;
    func_0x000107c613fc(lVar8,uVar11 + lVar12 * 2,uVar9 | 7);
    *(undefined8 *)(lVar8 + 0x18) = 4;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    lVar2 = lVar8 + uVar11;
    pcVar10 = *(code **)(lVar17 + 0x68);
    (*pcVar10)(lVar2,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90
               ,lVar4);
    (*pcVar10)(lVar2 + lVar12,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_110350d78,lVar4);
    lVar17 = lVar8;
    FUN_100ddce0c(lVar8);
    func_0x000107c61588(lVar8);
    func_0x000107c61408(lVar2,2,lVar4);
    func_0x000107c6145c(lVar8,0x20,7);
    lVar2 = lVar16;
    func_0x000107c5ef2c(lVar14,lVar17);
    uVar7 = (uint)lVar2;
    func_0x000107c6142c(lVar17);
    func_0x000107c5ec5c();
    uVar1 = uVar7 & 0xff;
    lVar2 = lVar17;
    func_0x000107c5ec44();
    param_1 = puStack_90;
    dVar18 = 0.0;
    if (uVar1 != 1) {
      dVar18 = (double)lVar17;
    }
    dVar19 = 0.0;
    if ((uVar7 & 0xff) != 1) {
      dVar19 = (double)lVar2;
    }
    puVar6 = PTR_PTR_1126b3db0;
    func_0x000107c610f8();
    func_0x000107c47858(dVar18,dVar19);
    uVar5 = 0;
    FUN_10125aaac();
    (**(code **)(lStack_88 + 8))(lVar14,lStack_a0);
    (**(code **)(lStack_98 + 8))(lVar16,lStack_78);
  }
  (**(code **)(lVar15 + 8))(lVar13,lVar3);
  param_1[3] = uVar5;
  *param_1 = puVar6;
  return;
}



/* Entry: 10125935c; end: 1012594cb;  */

void FUN_10125935c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1012594cc; end: 1012594ef;  */

void FUN_1012594cc(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x000107c497e0();
  func_0x000107c61180();
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(param_1);
  uVar4 = 0x112d6c258;
  func_0x0001000285a8(0x112d6c258,&UNK_10d92f1c8);
  puVar1 = &uStack_58;
  func_0x000107c6147c(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
  if (((ulong)puVar1 & 1) == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = uStack_58;
    func_0x000107c5de64(uStack_58);
    func_0x000107c61180();
    uVar3 = uStack_58;
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1012594f0(uVar4);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1012594f0; end: 101259693;  */

/* WARNING: Removing unreachable block (ram,0x000101259690) */

void FUN_1012594f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f12498;
  ppuVar1 = ppuVar6;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f12498);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f12498);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b3d80;
  func_0x000107c61168(PTR_PTR_1126b3d80);
  func_0x000107c4d364();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c5fadc(ppuVar6,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46d50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar6);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = &UNK_110399138;
    func_0x000107c613fc(&UNK_110399138,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar4 = &UNK_110399360;
    func_0x000107c613fc(&UNK_110399360,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    uStack_60 = 0x10125aa3c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110399378;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc("Profile 3 Aura",ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 101259694; end: 10125974f;  */

void FUN_101259694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long alStack_68 [3];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x110);
    if (lVar1 != 0) {
      func_0x000107c445ac();
    }
    FUN_10125a9f0();
    lVar2 = param_1 + 0x108;
    alStack_68[0] = param_1;
    lStack_50 = lVar1;
    func_0x000107c61618(lVar2);
    func_0x000107c6157c(param_1);
    func_0x000103a92df4(alStack_68,0x94,param_3,lVar2);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(lVar2);
    func_0x000100183ab8(alStack_68);
  }
  return;
}



/* Entry: 101259750; end: 1012597ef;  */

void FUN_101259750(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_1012597f0(param_1,param_2,param_4,param_5,param_6,param_7);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1012597f0; end: 10125997b;  */

void FUN_1012597f0(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar5 = &puStack_90;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    lVar2 = lVar7;
    uVar6 = param_2;
    func_0x000107c61174(lVar7);
    func_0x000107c5faec(lVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(param_1,param_2);
    puVar3 = PTR_PTR_1126b02a8;
    func_0x000107c610f8();
    func_0x000107c5fadc(lVar7,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c46d50();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar7);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = &UNK_110399138;
      func_0x000107c613fc(&UNK_110399138,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      func_0x000107c613fc(param_4,0x28,7);
      *(undefined **)(param_4 + 0x10) = puVar4;
      *(undefined **)(param_4 + 0x18) = puVar3;
      *(undefined8 *)(param_4 + 0x20) = 0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      uStack_78 = param_6;
      uStack_70 = param_5;
      lStack_68 = param_4;
      func_0x000107c60bc4(&puStack_90);
      lVar7 = lStack_68;
      func_0x000107c61174(puVar3);
      func_0x000107c61574(lVar7);
      func_0x0001000d76cc("Profile 3 Pills",ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125997c);
  (*pcVar1)();
}



/* Entry: 10125997c; end: 1012599f3;  */

void FUN_10125997c(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_48,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    FUN_1012599f4(param_1 & 1,param_2,param_3);
    func_0x000107c61574(param_6);
  }
  return;
}



/* Entry: 1012599f4; end: 101259c2f;  */

/* WARNING: Removing unreachable block (ram,0x000101259c2c) */

void FUN_1012599f4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar2 = PTR_PTR_1126b3e48;
  uVar9 = param_2;
  func_0x000107c610f8(PTR_PTR_1126b3e48);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10125aaf0;
  puStack_78 = &UNK_110399710;
  uStack_70 = param_2;
  puStack_68 = param_3;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar4);
  func_0x000107c46fa8(puVar2);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126afdb8;
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
  ppuVar10 = &PTR____CFConstantStringClassReference_110f12698;
  ppuVar3 = ppuVar10;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f12698);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f12698);
  func_0x000107c61170(ppuVar3);
  puVar5 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar4);
  func_0x000107c5fadc(ppuVar10,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c46d50();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuVar10);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = &UNK_110399138;
    func_0x000107c613fc(&UNK_110399138,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_110399748;
    func_0x000107c613fc(&UNK_110399748,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    uStack_70 = 0x10125adac;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_110399760;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar1 = puStack_68;
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc("Profile 3 Pills",ppuVar8);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar2);
    puVar2 = puVar4;
    puVar4 = puVar5;
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101259c30; end: 101259f57;  */

void FUN_101259c30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_1103996f8;
  uVar4 = 0x18;
  func_0x000107c613fc(&UNK_1103996f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  if (param_4 == 0) {
    param_4 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,FUN_10125ac60,puVar3,param_4,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 101259f58; end: 10125a067;  */

void FUN_101259f58(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      func_0x000107c445ac();
    }
    lVar1 = param_1 + 0x108;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c445ac();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10125a068; end: 10125a237;  */

/* WARNING: Possible PIC construction at 0x00010125a0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125a0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125a12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010125a1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125a130) */
/* WARNING: Removing unreachable block (ram,0x00010125a218) */
/* WARNING: Removing unreachable block (ram,0x00010125a13c) */
/* WARNING: Removing unreachable block (ram,0x00010125a0e0) */
/* WARNING: Removing unreachable block (ram,0x00010125a0ac) */
/* WARNING: Removing unreachable block (ram,0x00010125a234) */
/* WARNING: Removing unreachable block (ram,0x00010125a0bc) */
/* WARNING: Removing unreachable block (ram,0x00010125a1f8) */

void FUN_10125a068(undefined8 param_1)

{
  func_0x000107c5fadc();
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10125a238; end: 10125a39b;  */

void FUN_10125a238(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_80;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar2 = lVar7;
    lVar6 = param_2;
    func_0x000107c61174(lVar7);
    func_0x000107c5faec(lVar7);
    func_0x000107c61170(lVar2);
    puVar3 = PTR_PTR_1126b02a8;
    func_0x000107c610f8();
    func_0x000107c5fadc(lVar7,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c46d50();
    func_0x000107c61170(lVar7);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = &UNK_110399138;
      func_0x000107c613fc(&UNK_110399138,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      func_0x000107c613fc(param_2,0x28,7);
      *(undefined **)(param_2 + 0x10) = puVar4;
      *(undefined **)(param_2 + 0x18) = puVar3;
      *(undefined8 *)(param_2 + 0x20) = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      uStack_68 = param_4;
      uStack_60 = param_3;
      lStack_58 = param_2;
      func_0x000107c60bc4(&puStack_80);
      lVar7 = lStack_58;
      func_0x000107c61174(puVar3);
      func_0x000107c61574(lVar7);
      func_0x0001000d76cc("Profile 3 Pills",ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125a39c);
  (*pcVar1)();
}



/* Entry: 10125a39c; end: 10125a407;  */

undefined1  [16] FUN_10125a39c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_110399138;
  func_0x000107c613fc(&UNK_110399138,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110399188;
  func_0x000107c613fc(&UNK_110399188,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = FUN_10125a474;
  return auVar4;
}



/* Entry: 10125a408; end: 10125a473;  */

void FUN_10125a408(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10125a068(0xd000000000000051,0x800000010ef31990);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10125a474; end: 10125a47b;  */

void FUN_10125a474(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10125a068(0xd000000000000051,0x800000010ef31990);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10125a47c; end: 10125a66f;  */

/* WARNING: Removing unreachable block (ram,0x00010125a66c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125a47c(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar5 = &puStack_a0;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61648();
  if (puVar1 != (undefined *)0x0) {
    puVar6 = auStack_70;
    func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c61574(puVar1);
    }
    else {
      lVar8 = param_3;
      FUN_10125a9f0();
      ppuVar7 = &PTR____CFConstantStringClassReference_110f12778;
      ppuVar2 = ppuVar7;
      puStack_a0 = puVar1;
      puStack_88 = (undefined *)lVar8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f12778);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f12778);
      func_0x000107c6157c(puVar1);
      func_0x000107c61170(ppuVar2);
      puVar3 = puVar1 + 0x108;
      func_0x000107c61618(puVar3);
      func_0x000103a930f0(&puStack_a0,ppuVar7,puVar6,0,puVar3);
      func_0x000107c6142c(puVar6);
      func_0x000107c615e8(puVar3);
      func_0x000100183ab8(&puStack_a0);
      lVar8 = *(long *)(puVar1 + 0x118);
      func_0x000107c61604(lVar8 + _DAT_112d6c050,param_3);
      func_0x000107c61174(lVar8);
      pcVar4 = "launch(from:)";
      func_0x0001000c10c0("launch(from:)");
      func_0x000107c61180();
      puVar3 = &UNK_110399310;
      func_0x000107c613fc(&UNK_110399310,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar8);
      uStack_80 = 0x10125aa34;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_110399328;
      puStack_78 = puVar3;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c61574(puStack_78);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(puVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar8);
      func_0x000107c615e8(pcVar4);
    }
  }
  return;
}



/* Entry: 10125a670; end: 10125a883;  */

void FUN_10125a670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "provideTopicChatPillContext(viewController:)";
  func_0x0001000c10c0("provideTopicChatPillContext(viewController:)");
  func_0x000107c61180();
  uStack_40 = 0x10125aa24;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110399260;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10125a884; end: 10125a9df;  */

void FUN_10125a884(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  FUN_100f270b0(unaff_x20 + 0x108);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Entry: 10125a9e0; end: 10125a9ef;  */

undefined1  [16] FUN_10125a9e0(void)

{
  return ZEXT816(0x1103991b0);
}



/* Entry: 10125a9f0; end: 10125aa0f;  */

void FUN_10125a9f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d6c0d8);
  return;
}



/* Entry: 10125aa10; end: 10125aa47;  */

void FUN_10125aa10(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x100) != 0) {
      func_0x000107c445ac();
    }
    lVar2 = lVar1 + 0x108;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c445ac();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10125aa48; end: 10125aa83;  */

void FUN_10125aa48(void)

{
  func_0x000101259ce0();
  return;
}



/* Entry: 10125aa84; end: 10125aaab;  */

void FUN_10125aa84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10125a068(param_1,param_2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10125aaac; end: 10125aaef;  */

void FUN_10125aaac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d6c268 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b3db0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d6c268 = puVar1;
  return;
}



/* Entry: 10125aaf0; end: 10125ab2b;  */

void FUN_10125aaf0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10125ab2c; end: 10125abdf;  */

void FUN_10125ab2c(void)

{
  FUN_101259750();
  return;
}



/* Entry: 10125abe0; end: 10125abe7;  */

void FUN_10125abe0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1012599f4(param_1 & 1,param_2,param_3);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10125abe8; end: 10125ac5f;  */

void FUN_10125abe8(void)

{
  func_0x000101259ce0();
  return;
}



/* Entry: 10125ac60; end: 10125ac6f;  */

void FUN_10125ac60(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010125ac6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10125ac70; end: 10125aca3;  */

void FUN_10125ac70(void)

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



/* Entry: 10125aca4; end: 10125ad8b;  */

void FUN_10125aca4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000101259d64();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10125ad8c; end: 10125ad8f; -[_TtC24MyProfile3ImplementationP33_1A0AE0F07E1D5B3A70224C38DAB1C1EA36MyProfile3NowPlayingSettingsLauncher settingsScopeWantsDismiss] */

void FUN_10125ad8c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101256078(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10125ad90; end: 10125adbb; -[_TtC24MyProfile3ImplementationP33_1A0AE0F07E1D5B3A70224C38DAB1C1EA36MyProfile3NowPlayingSettingsLauncher settingsScopeDidDismiss] */

void FUN_10125ad90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101256078(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10125adbc; end: 10125aee7;  */

void FUN_10125adbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6c278,&UNK_10d92f1f0);
  puVar1 = &UNK_110399888;
  func_0x000107c613fc(&UNK_110399888,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10125aee8,puVar1);
  return;
}



/* Entry: 10125aee8; end: 10125aef3;  */

void FUN_10125aee8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10125ba44();
  func_0x000107c613fc();
  FUN_10125af48(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10125aef4; end: 10125af47;  */

undefined8 FUN_10125aef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10125af48(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10125af48; end: 10125b013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125af48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0c28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = param_3;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130227b0);
  puVar1 = &UNK_1103998b0;
  func_0x000107c613fc(&UNK_1103998b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x000103bdf920(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  uVar2 = 0xd000000000000026;
  func_0x000103bdc700(0x4008000000000000,0xd000000000000026,0x800000010ef31b40,FUN_10125b23c,puVar1)
  ;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 10125b014; end: 10125b23b;  */

void FUN_10125b014(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_4 == 0) {
    func_0x000103bdf920();
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    uVar6 = 0xd000000000000011;
    func_0x000103bdd7a8(0xd000000000000011,0x800000010ef31b70);
    (*param_2)(&puStack_90,uVar6);
    func_0x000107c61170(uVar6);
    func_0x00010125baac(&puStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar2 = &UNK_110399970;
    func_0x000107c613fc(&UNK_110399970,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10125baec;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x10125bb64;
    puStack_78 = &UNK_110399988;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_1103999c0;
    func_0x000107c613fc(&UNK_1103999c0,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    pcStack_70 = FUN_10125baf4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103999d8;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_110399a10;
    func_0x000107c613fc(&UNK_110399a10,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    pcStack_70 = FUN_10125bb44;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x10125bb68;
    puStack_78 = &UNK_110399a28;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c44164(param_4);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_4);
  }
  return;
}



/* Entry: 10125b23c; end: 10125b243;  */

void FUN_10125b23c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000103bdf920();
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    uVar6 = 0xd000000000000011;
    func_0x000103bdd7a8(0xd000000000000011,0x800000010ef31b70);
    (*param_2)(&puStack_90,uVar6);
    func_0x000107c61170(uVar6);
    func_0x00010125baac(&puStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar2 = &UNK_110399970;
    func_0x000107c613fc(&UNK_110399970,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10125baec;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x10125bb64;
    puStack_78 = &UNK_110399988;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_1103999c0;
    func_0x000107c613fc(&UNK_1103999c0,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    pcStack_70 = FUN_10125baf4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103999d8;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_110399a10;
    func_0x000107c613fc(&UNK_110399a10,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    pcStack_70 = FUN_10125bb44;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x10125bb68;
    puStack_78 = &UNK_110399a28;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c44164(lVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 10125b244; end: 10125b2c3;  */

void FUN_10125b244(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  uVar1 = 0;
  FUN_10125ba6c(0,0x112d6c340,&PTR_PTR_1126b4a30);
  auStack_50[0] = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  (*param_2)(auStack_50,0);
  func_0x00010125baac(auStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10125b2c4; end: 10125b3e7;  */

void FUN_10125b2c4(long param_1,code *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar4 = param_1;
  pcVar2 = param_2;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  lVar1 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  uVar3 = 0xe200000000000000;
  func_0x000107c5fb78(0x203a,0xe200000000000000);
  func_0x000107c4f9dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar4 = 0;
    uVar3 = 0xe000000000000000;
  }
  else {
    lVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000103bdf920(0);
  func_0x000107c5fb78(lVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000103bdd7a8(lVar1,pcVar2);
  func_0x000107c6142c(pcVar2);
  (*param_2)(&uStack_60,lVar1);
  func_0x000107c61170(lVar1);
  func_0x00010125baac(&uStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10125b3e8; end: 10125b433;  */

void FUN_10125b3e8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


