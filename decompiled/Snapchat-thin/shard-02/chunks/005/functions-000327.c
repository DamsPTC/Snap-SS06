/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dafb9c; end: 101dafba7; -[_TtC34MemoriesEncryptionInfoServicesImpl26MemoriesDecryptionInfoImpl decryptedKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dafb9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e2c128);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e2c128))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101dafba8; end: 101dafbb3; -[_TtC34MemoriesEncryptionInfoServicesImpl26MemoriesDecryptionInfoImpl decryptedIV] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dafba8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e2c130);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e2c130))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101dafbb4; end: 101dafc0b;  */

void FUN_101dafbb4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101dafc0c; end: 101dafce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dafc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000101daff3c(param_1,param_2,param_3,param_4);
  if (unaff_x21 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e2c128);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e2c130);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  }
  else {
    func_0x00010006c090(param_3,param_4);
    func_0x00010006c090(param_1,param_2);
    func_0x000107c61464(unaff_x20);
  }
  return;
}



/* Entry: 101dafce4; end: 101dafe1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101dafce4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar6 = &lStack_68;
    func_0x000107c6147c(plVar6,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      uVar7 = *(ulong *)(unaff_x20 + _DAT_112e2c128);
      uVar1 = ((ulong *)(unaff_x20 + _DAT_112e2c128))[1];
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_112e2c128);
      uVar2 = ((undefined8 *)(lStack_68 + _DAT_112e2c128))[1];
      func_0x00010006c00c(uVar8,uVar2);
      func_0x000100e25fcc(uVar7,uVar1,uVar8,uVar2);
      func_0x00010006c090(uVar8,uVar2);
      if ((uVar7 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e2c130);
        uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e2c130))[1];
        uVar2 = *(undefined8 *)(lStack_68 + _DAT_112e2c130);
        uVar4 = ((undefined8 *)(lStack_68 + _DAT_112e2c130))[1];
        func_0x00010006c00c(uVar2,uVar4);
        func_0x000100e25fcc(uVar8,uVar3,uVar2,uVar4);
        uVar9 = (uint)uVar8;
        func_0x00010006c090(uVar2,uVar4);
        func_0x000107c61170(lStack_68);
        goto LAB_101dafe00;
      }
      func_0x000107c61170(lStack_68);
    }
  }
  uVar9 = 0;
LAB_101dafe00:
  return uVar9 & 1;
}



/* Entry: 101dafe1c; end: 101dafe9b; -[_TtC34MemoriesEncryptionInfoServicesImpl26MemoriesDecryptionInfoImpl isEqual:] */

uint FUN_101dafe1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_101dafce4(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101dafe9c; end: 101dafefb; -[_TtC34MemoriesEncryptionInfoServicesImpl26MemoriesDecryptionInfoImpl init] */

void FUN_101dafe9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesEncryptionInfoServicesImpl.MemoriesDecryptionInfoImpl",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dafec8);
  (*pcVar1)();
}



/* Entry: 101dafefc; end: 101db004f; -[_TtC34MemoriesEncryptionInfoServicesImpl26MemoriesDecryptionInfoImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101daff1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101daff20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dafefc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e2c128))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2c128));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101db0050; end: 101db026f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101db0050(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  ppuVar6 = &puStack_60;
  if (param_1 == (undefined1 *)0x0) {
    func_0x000101db0290();
    func_0x000107c613f8(&UNK_1106e4448,param_1,0,0);
    *param_1 = 3;
    func_0x000107c61654();
    return unaff_x22;
  }
  func_0x000107c61174();
  puVar2 = param_1;
  func_0x000107c49ce8();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = param_1;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (puVar2 == (undefined1 *)0x0) {
      puVar5 = param_1;
      func_0x000107c61170();
    }
    else {
      puVar5 = puVar2;
      func_0x000107c5ee30();
      puVar7 = param_2;
      func_0x000107c61170(puVar2);
      puVar2 = param_1;
      func_0x000107c3ab84();
      func_0x000107c61180();
      if (puVar2 != (undefined1 *)0x0) {
        puVar3 = puVar2;
        func_0x000107c5ee30();
        func_0x000107c61170();
        func_0x000101db0270();
        puVar4 = puVar2;
        func_0x000107c610f8();
        func_0x000101daff3c(puVar5,param_2,puVar3,puVar7);
        if (unaff_x21 == 0) {
          puVar1 = (undefined8 *)(puVar4 + _DAT_112e2c128);
          *puVar1 = puVar5;
          puVar1[1] = param_2;
          puVar1 = (undefined8 *)(puVar4 + _DAT_112e2c130);
          *puVar1 = puVar3;
          puVar1[1] = puVar7;
          puStack_60 = puVar4;
          puStack_58 = puVar2;
          func_0x000107c61154(&puStack_60,PTR_s_init_1125d9248);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_1);
          return (undefined1 *)ppuVar6;
        }
        func_0x00010006c090(puVar3,puVar7);
        func_0x00010006c090(puVar5,param_2);
        func_0x000107c61464(puVar4,puVar2,0x28,7);
        func_0x000107c61170(param_1);
        goto LAB_101db01f8;
      }
      func_0x000107c61170(param_1);
      func_0x00010006c090(puVar5,param_2);
      unaff_x22 = param_2;
    }
    func_0x000101db0290();
    func_0x000107c613f8(&UNK_1106e4448,puVar5,0,0);
    *puVar5 = 0;
    param_2 = unaff_x22;
  }
  else {
    puVar2 = param_1;
    func_0x000107c61170();
    func_0x000101db0290();
    func_0x000107c613f8(&UNK_1106e4448,puVar2,0,0);
    *puVar2 = 4;
    param_2 = unaff_x22;
  }
  func_0x000107c61654();
LAB_101db01f8:
  func_0x000107c61170(param_1);
  return param_2;
}



/* Entry: 101db0270; end: 101db02cf;  */

void FUN_101db0270(void)

{
  func_0x000107c61168(&PTR_PTR_1128043b8);
  return;
}



/* Entry: 101db02d0; end: 101db032f; -[_TtC34MemoriesEncryptionInfoServicesImpl30MemoriesEncryptionInfoProvider init] */

void FUN_101db02d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesEncryptionInfoServicesImpl.MemoriesEncryptionInfoProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101db02fc);
  (*pcVar1)();
}



/* Entry: 101db0330; end: 101db0387; -[_TtC34MemoriesEncryptionInfoServicesImpl30MemoriesEncryptionInfoProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101db034c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db036c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db0350) */
/* WARNING: Removing unreachable block (ram,0x000101db0370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db0330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2c168));
  return;
}



/* Entry: 101db0388; end: 101db03a7;  */

void FUN_101db0388(void)

{
  func_0x000107c61168(&PTR_PTR_112804480);
  return;
}



/* Entry: 101db03a8; end: 101db03bf;  */

void FUN_101db03a8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db03c0,0,0);
  return;
}



/* Entry: 101db03c0; end: 101db04db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db03c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x0001000285a8(0x112e2c1c8,&UNK_10da15558);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112e2c168);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_112e2c170);
  puVar2 = &UNK_110483d48;
  func_0x000107c613fc(&UNK_110483d48,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(uVar3);
  uVar3 = uVar6;
  func_0x0001048897a0(uVar6,1,0,FUN_101db257c,puVar2);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar6);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101db04dc;
                    /* WARNING: Could not recover jumptable at 0x000101db04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101db20e0();
  return;
}



/* Entry: 101db04dc; end: 101db052f;  */

void FUN_101db04dc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db0530,0,0);
  return;
}



/* Entry: 101db0530; end: 101db0667;  */

/* WARNING: Removing unreachable block (ram,0x000101db05ec) */

void FUN_101db0530(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(long *)(unaff_x22 + 0x18) = lVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x22 + 0x30);
    func_0x000107c61574();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x48);
      uVar4 = uVar6;
      func_0x000107c61174(uVar6);
      FUN_101db0890();
      func_0x000101db2588(uVar6,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101db0664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar4);
      return;
    }
    FUN_101db2330();
    func_0x000107c613f8(&UNK_1106e45d8,puVar3,0,0);
    *puVar3 = 4;
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101db0644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db0668; end: 101db07cb;  */

void FUN_101db0668(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_88);
  puVar5 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    FUN_101db2330();
    puVar5 = &UNK_1106e45d8;
    func_0x000107c613f8(&UNK_1106e45d8,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar5);
  }
  else {
    puVar2 = PTR_PTR_1126bf788;
    func_0x000107c610f8(PTR_PTR_1126bf788);
    func_0x000107c46b50();
    func_0x0001000d224c(&uStack_58);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    func_0x000100bcb214();
    func_0x000107c615e8(uStack_58);
    uStack_68 = 0x101db260c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x101d548e0;
    puStack_70 = &UNK_110483d88;
    ppuVar4 = &puStack_88;
    puStack_60 = param_1;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c50398(puVar5);
    func_0x000107c615e8(puVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101db07cc; end: 101db088f;  */

/* WARNING: Possible PIC construction at 0x000101db086c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db0870) */
/* WARNING: Removing unreachable block (ram,0x000101db0808) */

void FUN_101db07cc(long param_1)

{
  long lVar1;
  long lStack_48;
  
  if (param_1 == 0) {
    lStack_48 = 0;
    func_0x000100b60084(&lStack_48);
    return;
  }
  lVar1 = param_1;
  func_0x000107c61174();
  FUN_101db0890();
  lStack_48 = param_1;
  func_0x000107c61174(lVar1);
  func_0x000100b60084(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101db0890; end: 101db0a3f;  */

void FUN_101db0890(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *unaff_x20;
  long lVar7;
  long lVar8;
  
  puVar2 = unaff_x20;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  puVar3 = puVar2;
  if (puVar2 == (undefined1 *)0x0) goto LAB_101db097c;
  func_0x000107c5ee30();
  uVar5 = param_2;
  func_0x000107c61170(puVar2);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((param_2 & 0xff000000000000) != 0) {
LAB_101db0908:
        func_0x000107c3ab84();
        func_0x000107c61180();
        puVar2 = unaff_x20;
        if (unaff_x20 != (undefined1 *)0x0) {
          func_0x000107c5ee30();
          func_0x000107c61170(unaff_x20);
          uVar1 = (uint)(uVar5 >> 0x20);
          uVar6 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar6 == 0) {
              func_0x00010006c090();
              if ((uVar5 & 0xff000000000000) != 0) goto LAB_101db0a1c;
            }
            else {
              puVar4 = puVar2;
              func_0x00010006c090();
              lVar7 = (long)(int)puVar2;
              lVar8 = (long)puVar2 >> 0x20;
              puVar2 = puVar4;
LAB_101db09d8:
              if (lVar7 != lVar8) goto LAB_101db0a1c;
            }
          }
          else {
            if (uVar6 == 2) {
              lVar7 = *(long *)(puVar2 + 0x10);
              lVar8 = *(long *)(puVar2 + 0x18);
              func_0x00010006c090();
              goto LAB_101db09d8;
            }
            func_0x00010006c090();
          }
        }
        FUN_101db2330();
        func_0x000107c613f8(&UNK_1106e45d8,puVar2,0,0);
        *puVar2 = 2;
        func_0x000107c61654();
LAB_101db0a1c:
        func_0x00010006c090(puVar3,param_2);
        return;
      }
    }
    else if ((long)(int)puVar3 != (long)puVar3 >> 0x20) goto LAB_101db0908;
  }
  else if ((uVar6 == 2) && (*(long *)(puVar3 + 0x10) != *(long *)(puVar3 + 0x18)))
  goto LAB_101db0908;
  func_0x00010006c090(puVar3,param_2);
LAB_101db097c:
  FUN_101db2330();
  func_0x000107c613f8(&UNK_1106e45d8,puVar3,0,0);
  *puVar3 = 1;
  func_0x000107c61654();
  return;
}



/* Entry: 101db0a40; end: 101db0b83; -[_TtC34MemoriesEncryptionInfoServicesImpl30MemoriesEncryptionInfoProvider encryptionInfoForSnap:completionHandler:] */

void FUN_101db0a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110483cd0;
  func_0x000107c613fc(&UNK_110483cd0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110483cf8;
  func_0x000107c613fc(&UNK_110483cf8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da15538;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110483d20;
  func_0x000107c613fc(&UNK_110483d20,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da15540;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da15548,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101db0b84; end: 101db0bf7;  */

void FUN_101db0b84(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x50;
  func_0x000107c615f0();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101db0bf8;
  plVar1[4] = param_1;
  plVar1[5] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db03c0,0,0);
  return;
}



/* Entry: 101db0bf8; end: 101db0ca7;  */

void FUN_101db0bf8(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x28));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar2 = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x18) + 0x10))(*(long *)(lVar5 + 0x18),lVar2,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101db0ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101db0ca8; end: 101db0cbf;  */

void FUN_101db0ca8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db0cc0,0,0);
  return;
}



/* Entry: 101db0cc0; end: 101db0eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db0cc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x22;
  
  FUN_101db0890();
  iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c49ce8();
  puVar6 = *(undefined1 **)(unaff_x22 + 0x28);
  if (iVar1 == 0) {
    func_0x000107c61174(puVar6);
    FUN_101db0050(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000101db0e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c4a8c4();
  func_0x000107c61180();
  puVar2 = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    lVar7 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c5ee30();
    uVar5 = param_2;
    func_0x000107c61170(puVar6);
    *(undefined1 **)(unaff_x22 + 0x38) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x40) = param_2;
    func_0x000107c3ab84();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar3 = lVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar7);
      *(long *)(unaff_x22 + 0x48) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
      func_0x0001000d224c(unaff_x22 + 0x20);
      puVar6 = *(undefined1 **)(unaff_x22 + 0x20);
      if (puVar6 != (undefined1 *)0x0) {
        func_0x000107c615e8();
        plVar4 = (long *)0x50;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x58) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_101db0eb0;
        plVar4[5] = *(long *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101db140c,0,0);
        return;
      }
      FUN_101db2330();
      func_0x000107c613f8(&UNK_1106e45d8,puVar6,0,0);
      *puVar6 = 0;
      func_0x000107c61654();
      func_0x00010006c090(lVar3,uVar5);
      func_0x00010006c090(puVar2,param_2);
      goto LAB_101db0cf4;
    }
    func_0x00010006c090(puVar2,param_2);
  }
  FUN_101db2330();
  func_0x000107c613f8(&UNK_1106e45d8,puVar2,0,0);
  *puVar2 = 0xe;
  func_0x000107c61654();
LAB_101db0cf4:
                    /* WARNING: Could not recover jumptable at 0x000101db0d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db0eb0; end: 101db0f0f;  */

void FUN_101db0eb0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101db0f10;
  }
  else {
    pcVar1 = FUN_101db13b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101db0f10; end: 101db13af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db0f10(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c610f8();
  func_0x00010006c00c(uVar4,uVar12);
  uVar3 = uVar4;
  func_0x000107c5ee20(uVar4,uVar12);
  func_0x000107c4635c();
  func_0x000107c61170(uVar3);
  func_0x00010006c090(uVar4);
  uVar4 = uVar14;
  func_0x000107c414a8(uVar14);
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar4);
  uVar4 = uVar3;
  func_0x000107c5ee20(uVar3,uVar12);
  func_0x00010006c090(uVar3);
  func_0x000107c414a4(uVar14);
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar14);
  uVar14 = uVar3;
  func_0x000107c5ee20(uVar3,uVar12);
  func_0x00010006c090(uVar3);
  puVar5 = puVar2;
  func_0x000107c51bb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170();
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  if (puVar5 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_101db2330();
    func_0x000107c613f8(&UNK_1106e45d8,puVar2,0,0);
    *puVar2 = 0xf;
    func_0x000107c61654();
    func_0x000107c615e8(uVar14);
    func_0x00010006c090(uVar4,uVar3);
  }
  else {
    puVar6 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8();
    func_0x00010006c00c(uVar4,uVar3);
    uVar7 = uVar4;
    func_0x000107c5ee20(uVar4,uVar3);
    func_0x000107c4635c();
    func_0x000107c61170(uVar7);
    func_0x00010006c090(uVar4);
    uVar4 = uVar14;
    func_0x000107c414a8(uVar14);
    func_0x000107c61180();
    uVar7 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    uVar4 = uVar7;
    func_0x000107c5ee20(uVar7,uVar3);
    func_0x00010006c090(uVar7);
    func_0x000107c414a4(uVar14);
    func_0x000107c61180();
    uVar7 = uVar14;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar14);
    uVar14 = uVar7;
    func_0x000107c5ee20(uVar7,uVar3);
    func_0x00010006c090(uVar7);
    puVar5 = puVar2;
    func_0x000107c51bb4();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar4);
    func_0x000107c61170();
    if (puVar5 == (undefined1 *)0x0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
      FUN_101db2330();
      func_0x000107c613f8(&UNK_1106e45d8,puVar2,0,0);
      *puVar2 = 0x10;
      func_0x000107c61654();
      func_0x00010006c090(puVar6,uVar12);
      func_0x000107c615e8(uVar14);
      func_0x00010006c090(uVar4,uVar3);
    }
    else {
      lVar15 = *(long *)(unaff_x22 + 0x68);
      puVar8 = puVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar5);
      lVar9 = 0;
      FUN_101db0270();
      lVar10 = lVar9;
      func_0x000107c610f8();
      func_0x000101daff3c(puVar6,uVar12,puVar8,uVar3);
      if (lVar15 == 0) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
        puVar1 = (undefined8 *)(lVar10 + _DAT_112e2c128);
        *puVar1 = puVar6;
        puVar1[1] = uVar12;
        puVar1 = (undefined8 *)(lVar10 + _DAT_112e2c130);
        *puVar1 = puVar8;
        puVar1[1] = uVar3;
        plVar11 = (long *)(unaff_x22 + 0x10);
        *plVar11 = lVar10;
        *(long *)(unaff_x22 + 0x18) = lVar9;
        func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
        func_0x000107c615e8(uVar16);
        func_0x00010006c090(uVar4,uVar7);
        func_0x00010006c090(uVar14,uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101db13ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(plVar11);
        return;
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x00010006c090(puVar8,uVar3);
      func_0x00010006c090(puVar6,uVar12);
      func_0x000107c61464(lVar10,lVar9,0x28,7);
      func_0x000107c615e8(uVar16);
      func_0x00010006c090(uVar4,uVar14);
    }
  }
  func_0x00010006c090(uVar7,uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101db130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db13b0; end: 101db13f3;  */

void FUN_101db13b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50));
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101db13f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db13f4; end: 101db140b;  */

void FUN_101db13f4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db140c,0,0);
  return;
}



/* Entry: 101db140c; end: 101db1573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db140c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  func_0x0001000285a8(0x112e2c1b8,&UNK_10da15510);
  uVar4 = *(undefined8 *)(lVar7 + _DAT_112e2c168);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(lVar7 + _DAT_112e2c180);
  puVar1 = &UNK_110483c08;
  func_0x000107c613fc(&UNK_110483c08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  uVar4 = uVar6;
  func_0x0001048897a0(uVar6,1,0,FUN_101db2370,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uVar6);
  func_0x0001000d224c(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = 0x112e2c1c0;
  func_0x0001000285a8(0x112e2c1c0,&UNK_10da15518);
  uVar6 = uVar5;
  func_0x000100775264(uVar5,1,FUN_101db1cc4,0,uVar3);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  func_0x000107c615e8(uVar5);
  func_0x000107c61574(uVar4);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101db1574;
                    /* WARNING: Could not recover jumptable at 0x000101db1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101db2200();
  return;
}



/* Entry: 101db1574; end: 101db166f;  */

void FUN_101db1574(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101db15c8,0,0);
  return;
}



/* Entry: 101db1670; end: 101db17b3; -[_TtC34MemoriesEncryptionInfoServicesImpl30MemoriesEncryptionInfoProvider decryptionInfoWithSnapEncryption:completionHandler:] */

void FUN_101db1670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110483b90;
  func_0x000107c613fc(&UNK_110483b90,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110483bb8;
  func_0x000107c613fc(&UNK_110483bb8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da154d0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110483be0;
  func_0x000107c613fc(&UNK_110483be0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da154e0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da154f0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101db17b4; end: 101db1827;  */

void FUN_101db17b4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101db1828;
  plVar1[5] = param_1;
  plVar1[6] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db0cc0,0,0);
  return;
}



/* Entry: 101db1828; end: 101db18e7;  */

void FUN_101db1828(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,param_1,0);
    func_0x000107c615e8(param_1);
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    (**(code **)(lVar4 + 0x10))(lVar4,0,unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000101db18e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101db18e8; end: 101db1953;  */

void FUN_101db18e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101db1954;
  plVar3[3] = lVar1;
  plVar3[4] = lVar5;
  plVar3[2] = lVar2;
  plVar4 = (long *)0x70;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[5] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101db1828;
  plVar4[5] = lVar2;
  plVar4[6] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db0cc0,0,0);
  return;
}



/* Entry: 101db1954; end: 101db198f;  */

void FUN_101db1954(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101db198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101db1990; end: 101db1b43;  */

void FUN_101db1990(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_88);
  puVar6 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    FUN_101db2330();
    puVar6 = &UNK_1106e45d8;
    func_0x000107c613f8(&UNK_1106e45d8,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
  }
  else {
    puVar2 = &UNK_110483c58;
    func_0x000107c613fc(&UNK_110483c58,0x18,7);
    plVar8 = (long *)(puVar2 + 0x10);
    *plVar8 = 0;
    func_0x0001000d224c(&uStack_58);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    func_0x000100bcb214();
    func_0x000107c615e8(uStack_58);
    puVar4 = &UNK_110483c80;
    func_0x000107c613fc(&UNK_110483c80,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined1 **)(puVar4 + 0x18) = param_1;
    pcStack_68 = FUN_101db23c4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_101db1c3c;
    puStack_70 = &UNK_110483c98;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar4);
    puVar4 = puVar6;
    func_0x000107c503bc();
    func_0x000107c61180();
    func_0x000107c615e8(puVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61428(plVar8,&puStack_88,1,0);
    lVar7 = *plVar8;
    *plVar8 = (long)puVar4;
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 101db1b44; end: 101db1c13;  */

void FUN_101db1b44(undefined1 *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,1,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = 0;
  func_0x000107c615e8(uVar1);
  FUN_101db1c14();
  if (((uint)param_1 & 0xff) == 0x11) {
    if (param_3 == (undefined *)0x0) {
      uStack_60 = param_2;
      func_0x000100b60084(&uStack_60);
      return;
    }
    func_0x000107c614b0(param_3);
  }
  else {
    puVar2 = param_1;
    FUN_101db2330();
    param_3 = &UNK_1106e45d8;
    func_0x000107c613f8(&UNK_1106e45d8,puVar2,0,0);
    *puVar2 = (char)param_1;
  }
  func_0x00010488ade0();
  func_0x000107c614ac(param_3);
  return;
}



/* Entry: 101db1c14; end: 101db1c3b;  */

undefined4 FUN_101db1c14(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x110b0a09080706 >> ((param_1 & 7) << 3));
  if (6 < param_1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 101db1c3c; end: 101db1cc3;  */

/* WARNING: Possible PIC construction at 0x000101db1ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db1ca8) */

void FUN_101db1c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101db1cc4; end: 101db1f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db1cc4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined1 uVar9;
  uint uVar10;
  long lVar11;
  long unaff_x21;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_60;
  lVar11 = *param_2;
  if (lVar11 == 0) {
    FUN_101db2330();
    func_0x000107c613f8(&UNK_1106e45d8,param_2,0,0);
    *(undefined1 *)param_2 = 5;
    func_0x000107c61654();
    return;
  }
  lVar2 = *(long *)(lVar11 + _DAT_11302c658);
  uVar4 = ((long *)(lVar11 + _DAT_11302c658))[1];
  lVar3 = *(long *)(lVar11 + _DAT_11302c660);
  uVar5 = ((long *)(lVar11 + _DAT_11302c660))[1];
  uVar6 = (uint)(uVar4 >> 0x20);
  uVar10 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar10 != 0) {
      if ((long)(int)lVar2 != lVar2 >> 0x20) goto LAB_101db1d74;
      goto LAB_101db1da0;
    }
    if ((uVar4 & 0xff000000000000) == 0) goto LAB_101db1da0;
LAB_101db1d74:
    uVar6 = (uint)(uVar5 >> 0x20);
    uVar10 = uVar6 >> 0x1e;
    if (1 < uVar6 >> 0x1e) {
      if ((uVar10 != 2) || (*(long *)(lVar3 + 0x10) == *(long *)(lVar3 + 0x18))) goto LAB_101db1e58;
LAB_101db1ddc:
      lVar7 = 0;
      FUN_101db0270();
      lVar11 = lVar7;
      func_0x000107c610f8();
      func_0x000101daff3c(lVar2,uVar4,lVar3,uVar5);
      if (unaff_x21 == 0) {
        plVar1 = (long *)(lVar11 + _DAT_112e2c128);
        *plVar1 = lVar2;
        plVar1[1] = uVar4;
        plVar1 = (long *)(lVar11 + _DAT_112e2c130);
        *plVar1 = lVar3;
        plVar1[1] = uVar5;
        func_0x00010006c00c(lVar2,uVar4);
        func_0x00010006c00c(lVar3,uVar5);
        func_0x00010006c00c(lVar2,uVar4);
        func_0x00010006c00c(lVar3,uVar5);
        lStack_60 = lVar11;
        lStack_58 = lVar7;
        func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
        func_0x00010006c090(lVar2,uVar4);
        func_0x00010006c090(lVar3,uVar5);
        *param_1 = plVar8;
        return;
      }
      func_0x00010006c00c(lVar2,uVar4);
      func_0x00010006c00c(lVar3,uVar5);
      func_0x000107c61464(lVar11,lVar7,0x28,7);
      goto LAB_101db1ea0;
    }
    if (uVar10 != 0) {
      if ((long)(int)lVar3 == lVar3 >> 0x20) goto LAB_101db1e58;
      goto LAB_101db1ddc;
    }
    if ((uVar5 & 0xff000000000000) != 0) goto LAB_101db1ddc;
LAB_101db1e58:
    FUN_101db2330();
    func_0x000107c613f8(&UNK_1106e45d8,param_2,0,0);
    uVar9 = 0xd;
  }
  else {
    if ((uVar10 == 2) && (*(long *)(lVar2 + 0x10) != *(long *)(lVar2 + 0x18))) goto LAB_101db1d74;
LAB_101db1da0:
    FUN_101db2330();
    func_0x000107c613f8(&UNK_1106e45d8,param_2,0,0);
    uVar9 = 0xc;
  }
  *(undefined1 *)param_2 = uVar9;
  func_0x000107c61654();
  func_0x00010006c00c(lVar2,uVar4);
  func_0x00010006c00c(lVar3,uVar5);
LAB_101db1ea0:
  func_0x00010006c090(lVar2,uVar4);
  func_0x00010006c090(lVar3,uVar5);
  return;
}



/* Entry: 101db1f68; end: 101db1fdf;  */

void FUN_101db1f68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101db2620;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101db1fe0; end: 101db201b;  */

void FUN_101db1fe0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101db2018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101db201c; end: 101db209f;  */

void FUN_101db201c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101db2628;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101db20a0; end: 101db20df;  */

void FUN_101db20a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101db20dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101db20e0; end: 101db20f7;  */

void FUN_101db20e0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db20f8,0,0);
  return;
}



/* Entry: 101db20f8; end: 101db21bf;  */

void FUN_101db20f8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101db2140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101db21c0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110483d70;
  func_0x000107c613fc(&UNK_110483d70,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101db259c,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101db21c0; end: 101db21ff;  */

void FUN_101db21c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101db261c,0,0);
  return;
}



/* Entry: 101db2200; end: 101db2217;  */

void FUN_101db2200(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db2218,0,0);
  return;
}



/* Entry: 101db2218; end: 101db22df;  */

void FUN_101db2218(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101db2260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101db22e0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110483c30;
  func_0x000107c613fc(&UNK_110483c30,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101db2378,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101db22e0; end: 101db231f;  */

void FUN_101db22e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db2320,0,0);
  return;
}



/* Entry: 101db2320; end: 101db232f;  */

void FUN_101db2320(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101db232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101db2330; end: 101db236f;  */

void FUN_101db2330(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2c1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc628e8;
  func_0x000107c61520(&UNK_10dc628e8,&UNK_1106e45d8);
  puRam0000000112e2c1b0 = puVar1;
  return;
}



/* Entry: 101db2370; end: 101db2397;  */

void FUN_101db2370(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_88,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  puVar6 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    FUN_101db2330();
    puVar6 = &UNK_1106e45d8;
    func_0x000107c613f8(&UNK_1106e45d8,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
  }
  else {
    puVar2 = &UNK_110483c58;
    func_0x000107c613fc(&UNK_110483c58,0x18,7);
    plVar8 = (long *)(puVar2 + 0x10);
    *plVar8 = 0;
    func_0x0001000d224c(&uStack_58);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    func_0x000100bcb214();
    func_0x000107c615e8(uStack_58);
    puVar4 = &UNK_110483c80;
    func_0x000107c613fc(&UNK_110483c80,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined1 **)(puVar4 + 0x18) = param_1;
    pcStack_68 = FUN_101db23c4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_101db1c3c;
    puStack_70 = &UNK_110483c98;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar4);
    puVar4 = puVar6;
    func_0x000107c503bc();
    func_0x000107c61180();
    func_0x000107c615e8(puVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61428(plVar8,&puStack_88,1,0);
    lVar7 = *plVar8;
    *plVar8 = (long)puVar4;
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 101db2398; end: 101db23c3;  */

void FUN_101db2398(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db23c4; end: 101db23e7;  */

void FUN_101db23c4(undefined1 *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,1,0,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x000107c615e8(uVar2);
  FUN_101db1c14();
  if (((uint)param_1 & 0xff) == 0x11) {
    if (param_3 == (undefined *)0x0) {
      uStack_60 = param_2;
      func_0x000100b60084(&uStack_60);
      return;
    }
    func_0x000107c614b0(param_3);
  }
  else {
    puVar3 = param_1;
    FUN_101db2330();
    param_3 = &UNK_1106e45d8;
    func_0x000107c613f8(&UNK_1106e45d8,puVar3,0,0);
    *puVar3 = (char)param_1;
  }
  func_0x00010488ade0();
  func_0x000107c614ac(param_3);
  return;
}



/* Entry: 101db23e8; end: 101db2453;  */

void FUN_101db23e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101db262c;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
  plVar5 = (long *)0x50;
  func_0x000107c615f0();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[5] = (long)plVar5;
  *plVar5 = (long)plVar3;
  plVar5[1] = (long)FUN_101db0bf8;
  plVar5[4] = lVar1;
  plVar5[5] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db03c0,0,0);
  return;
}



/* Entry: 101db2454; end: 101db24cb;  */

void FUN_101db2454(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101db2630;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101db24cc; end: 101db24f7;  */

void FUN_101db24cc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db24f8; end: 101db257b;  */

void FUN_101db24f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101db2634;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101db257c; end: 101db25a7;  */

void FUN_101db257c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_88,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  puVar5 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    FUN_101db2330();
    puVar5 = &UNK_1106e45d8;
    func_0x000107c613f8(&UNK_1106e45d8,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar5);
  }
  else {
    puVar2 = PTR_PTR_1126bf788;
    func_0x000107c610f8(PTR_PTR_1126bf788);
    func_0x000107c46b50();
    func_0x0001000d224c(&uStack_58);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    func_0x000100bcb214();
    func_0x000107c615e8(uStack_58);
    uStack_68 = 0x101db260c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x101d548e0;
    puStack_70 = &UNK_110483d88;
    ppuVar4 = &puStack_88;
    puStack_60 = param_1;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c50398(puVar5);
    func_0x000107c615e8(puVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101db25a8; end: 101db25f7;  */

void FUN_101db25a8(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101db25f8; end: 101db2637;  */

void FUN_101db25f8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101db2638; end: 101db2857;  */

long FUN_101db2638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110483dc0;
  func_0x000107c613fc(&UNK_110483dc0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101db28d8;
  func_0x0001000bdd8c(FUN_101db28d8,puVar1);
  puVar1 = &UNK_110483de8;
  func_0x000107c613fc(&UNK_110483de8,0x30,7);
  *(code **)(puVar1 + 0x10) = pcVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x0001000285a8(0x112e2c1d0,&UNK_10da15568);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  pcVar3 = FUN_101db2a24;
  func_0x0001000bdd8c(FUN_101db2a24,puVar1);
  puVar1 = &UNK_110483e10;
  func_0x000107c613fc(&UNK_110483e10,0x28,7);
  *(code **)(puVar1 + 0x10) = pcVar2;
  *(code **)(puVar1 + 0x18) = pcVar3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112e2c1d8,&UNK_10da15570);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(pcVar3);
  pcVar4 = FUN_101db2ae4;
  func_0x0001000bdd8c(FUN_101db2ae4,puVar1);
  uVar5 = 0;
  func_0x0001002b6d2c(0);
  func_0x000107c610f8();
  func_0x0001006f6df8(pcVar3,pcVar4,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 101db2858; end: 101db28d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db2858(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(auStack_58);
  puVar1 = auStack_58;
  func_0x0001000a8868(puVar1,uStack_40);
  uVar2 = 2;
  func_0x000100774b74(2,0xc,0,uStack_40,uStack_38,puVar1);
  *param_1 = uVar2;
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101db28d8; end: 101db28df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db28d8(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(auStack_58);
  puVar1 = auStack_58;
  func_0x0001000a8868(puVar1,uStack_40);
  uVar2 = 2;
  func_0x000100774b74(2,0xc,0,uStack_40,uStack_38,puVar1);
  *param_1 = uVar2;
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101db28e0; end: 101db2a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db28e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  func_0x0001000285a8(0x112e2c2b0,&UNK_10da155a8);
  func_0x000107c4cb80();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  uVar7 = *(undefined8 *)(param_4 + _DAT_1130806b8);
  func_0x0001000285a8(0x112e2c2b8,&UNK_10da155b0);
  func_0x000107c4a8f0();
  func_0x000107c61180();
  uVar3 = param_5;
  func_0x0001000bda74();
  func_0x000107c61170(param_5);
  lVar4 = 0;
  FUN_101db0388();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e2c168) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112e2c170) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e2c178) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112e2c180) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar6;
  return;
}



/* Entry: 101db2a24; end: 101db2a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db2a24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_60;
  func_0x0001000285a8(0x112e2c2b0,&UNK_10da155a8);
  func_0x000107c4cb80();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar9 = *(undefined8 *)(lVar7 + _DAT_1130806b8);
  func_0x0001000285a8(0x112e2c2b8,&UNK_10da155b0);
  func_0x000107c4a8f0();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar6 = 0;
  FUN_101db0388();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e2c168) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112e2c170) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112e2c178) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112e2c180) = uVar3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar2);
  *param_1 = plVar8;
  return;
}



/* Entry: 101db2a30; end: 101db2ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db2a30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  uVar5 = *(undefined8 *)(param_4 + _DAT_1130806b8);
  lVar2 = 0;
  FUN_101daf244();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e2c0d0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e2c0d8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112e2c0e0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101db2ae4; end: 101db2aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db2ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_50;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130806b8);
  lVar4 = 0;
  FUN_101daf244();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e2c0d0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e2c0d8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e2c0e0) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101db2af0; end: 101db2b5f;  */

void FUN_101db2af0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db2b60; end: 101db2b67;  */

void FUN_101db2b60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101db2b68; end: 101db2b8b;  */

void FUN_101db2b68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db2b8c; end: 101db2ba3;  */

void FUN_101db2b8c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101db2ba4; end: 101db2cd7;  */

long FUN_101db2ba4(undefined8 param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e2c2c0,&UNK_10da155c0);
  func_0x000107c613fc();
  pcVar1 = FUN_101db2cd8;
  func_0x0001000bdd8c(FUN_101db2cd8,0);
  func_0x0001000285a8(0x112e2c2c8,&UNK_10da155c8);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar2 = FUN_101db2d44;
  func_0x0001000bdd8c(FUN_101db2d44,pcVar1);
  func_0x0001000285a8(0x112e2c2d0,&UNK_10da155d0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar3 = FUN_101db2d48;
  func_0x0001000bdd8c(FUN_101db2d48,pcVar1);
  uVar4 = 0;
  func_0x00010028bfb8(0);
  func_0x000107c610f8();
  func_0x0001006f5a60(pcVar2,pcVar3,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar1);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101db2cd8; end: 101db2d43;  */

void FUN_101db2cd8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x0001006f5a40();
  func_0x000107c613fc();
  uVar2 = 0x112e2c3a8;
  func_0x0001000285a8(0x112e2c3a8,&UNK_10da15640);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 101db2d44; end: 101db2d47;  */

void FUN_101db2d44(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x0001006f5a40();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110483f50;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 101db2d48; end: 101db2daf;  */

void FUN_101db2d48(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101db2db0; end: 101db2db7;  */

void FUN_101db2db0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101db2db8; end: 101db2ddb;  */

void FUN_101db2db8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db2ddc; end: 101db2def;  */

void FUN_101db2ddc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101db2df0; end: 101db2e13;  */

void FUN_101db2df0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db2e14; end: 101db2e73; -[_TtC40MemoriesEncryptionPublishingServicesImpl31MemoriesVideoDecryptionEventBus publish:] */

void FUN_101db2e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101db2e74; end: 101db2e7f;  */

void FUN_101db2e74(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 101db2e80; end: 101db2edb;  */

void FUN_101db2e80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db2edc; end: 101db2ef3;  */

void FUN_101db2edc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db2ef4,0,0);
  return;
}



/* Entry: 101db2ef4; end: 101db302b;  */

void FUN_101db2ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lVar3 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x10);
    lVar4 = *(long *)(unaff_x22 + 0x10);
    if (lVar4 != 0) {
      puVar1 = PTR_PTR_1126e22a8;
      func_0x000107c610f8(PTR_PTR_1126e22a8);
      func_0x000107c453e4();
      lVar2 = lVar3;
      func_0x000107c4cc04(lVar3);
      func_0x000107c56fd0(puVar1,param_2,lVar2);
      lVar2 = lVar3;
      func_0x000107c4cabc(lVar3);
      func_0x000107c61180();
      func_0x000107c564d4(puVar1,param_2,lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c4d7e4(lVar3);
      func_0x000107c61180();
      func_0x000107c56b00(puVar1,param_2,lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c4d7f0(lVar3);
      func_0x000107c61180();
      func_0x000107c56b0c(puVar1,param_2,lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c4a188(lVar3);
      func_0x000107c572b0(puVar1,param_2,lVar2);
      func_0x000107c4bfb0(lVar4,param_2,puVar1);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000101db3028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db302c; end: 101db309f; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySessionStart] */

void FUN_101db302c(undefined8 param_1)

{
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0xc0,0,0x48,4,0,0,&UNK_10da15768,param_1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61578(param_1,2);
  return;
}



/* Entry: 101db30a0; end: 101db325f;  */

void FUN_101db30a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long lVar8;
  long lStack_68;
  
  uVar7 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c40f88();
      lVar3 = lVar1;
      func_0x000107c4cb6c();
      func_0x000107c61180();
      lVar4 = lVar1;
      func_0x000107c4cabc();
      func_0x000107c61180();
      if (lVar4 == 0) {
        lVar8 = 0;
        uVar7 = 0;
      }
      else {
        lVar8 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
      }
      lVar4 = lVar1;
      func_0x000107c5df1c();
      uVar5 = param_2;
      FUN_101db3260();
      puVar6 = &UNK_1104840e8;
      func_0x000107c613fc(&UNK_1104840e8,0x68,7);
      *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      *(long *)(puVar6 + 0x28) = lVar8;
      *(undefined8 *)(puVar6 + 0x30) = uVar7;
      *(long *)(puVar6 + 0x38) = lVar4;
      *(long *)(puVar6 + 0x40) = lVar2;
      *(long *)(puVar6 + 0x48) = lVar3;
      *(long *)(puVar6 + 0x50) = lVar1;
      *(undefined8 *)(puVar6 + 0x58) = uVar5;
      *(long *)(puVar6 + 0x60) = lStack_68;
      func_0x000107c6157c();
      func_0x000107c615f0(param_1);
      func_0x000107c615f0(param_2);
      func_0x000107c61174(lVar3);
      func_0x000107c615f0(lVar1);
      func_0x000107c615f0(lStack_68);
      uVar7 = 0xc0;
      func_0x0001001ca524(0xc0,0,0x48,4,0,0,&UNK_10da15758,puVar6,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lStack_68);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar7);
    }
  }
  return;
}



/* Entry: 101db3260; end: 101db342b;  */

undefined8 FUN_101db3260(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126af4d0;
  func_0x000107c61168();
  func_0x0001000d224c(&uStack_38);
  func_0x000107c430fc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  if (puVar2 == (undefined *)0x0) {
    return 0xffffffffffffffff;
  }
  puVar6 = puVar2;
  func_0x000107c5fc54(puVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61170(puVar2);
  puVar2 = puVar6;
  FUN_101baa320();
  func_0x000107c6142c(puVar6);
  if (puVar2 == (undefined *)0x0) {
    return 0xffffffffffffffff;
  }
  func_0x000107c43c94();
  func_0x000107c3079c();
  if (param_1 < 4) {
    if (1 < param_1) {
      if ((param_1 == 2) || (param_1 == 3)) goto LAB_101db33c8;
      goto LAB_101db33e8;
    }
    if (param_1 != 0) {
      if (param_1 == 1) goto LAB_101db33c8;
      goto LAB_101db33e8;
    }
  }
  else {
    if (param_1 < 6) {
      if ((param_1 != 4) && (param_1 != 5)) goto LAB_101db33e8;
LAB_101db33c8:
      func_0x000107c6142c(puVar2);
      return 0xb;
    }
    if (param_1 == 6) goto LAB_101db33c8;
    if (param_1 != 7) goto LAB_101db33e8;
  }
  puVar6 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar3 = *(undefined **)(puVar6 + 0x10);
  }
  else {
    puVar3 = puVar2;
    if (-1 < (long)puVar2) {
      puVar3 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar3 != (undefined *)0x0) {
    if (((ulong)puVar2 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101db342c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(puVar2 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = 0;
      FUN_101db519c(0,puVar2,&PTR_PTR_1126af4d0,0x112d63638);
    }
    func_0x000107c6142c(puVar2);
    uVar5 = uVar4;
    func_0x000107c30798();
    func_0x000107c61170(uVar4);
    if (0xc < uVar5) {
      return 0xffffffffffffffff;
    }
    return *(undefined8 *)(&UNK_10da15820 + uVar5 * 8);
  }
LAB_101db33e8:
  func_0x000107c6142c(puVar2);
  return 0xffffffffffffffff;
}



/* Entry: 101db342c; end: 101db3463;  */

void FUN_101db342c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_11;
  *(undefined8 *)(unaff_x22 + 0x70) = param_12;
  *(undefined8 *)(unaff_x22 + 0x60) = param_10;
  *(undefined8 *)(unaff_x22 + 0x58) = param_9;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db3464,0,0);
  return;
}



/* Entry: 101db3464; end: 101db3777;  */

void FUN_101db3464(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  puVar3 = PTR_PTR_1126a9540;
  func_0x000107c610f8(PTR_PTR_1126a9540);
  func_0x000107c453e4();
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar7 = 0;
    lVar5 = 0;
    lVar6 = param_2;
  }
  else {
    lVar7 = lVar5;
    func_0x000107c5faec();
    lVar6 = param_2;
    func_0x000107c61170(lVar5);
    lVar5 = param_2;
  }
  lVar10 = *(long *)(unaff_x22 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4a450();
  func_0x000107c615e8(uVar9);
  func_0x000107c615f0(uVar11);
  if (lVar10 != 0x65) {
    func_0x000107c43c94();
    func_0x000107c307b8();
  }
  uVar4 = *(ulong *)(unaff_x22 + 0x30);
  func_0x000107c3fba8();
  if ((int)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101db3778);
    (*pcVar2)();
  }
  uVar4 = uVar4 & 0xffffffff;
  func_0x000107c30784();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  if (uVar4 == 0) {
    func_0x000107c615e8(uVar11);
    uVar8 = 0;
    lVar6 = 0;
    lVar10 = *(long *)(unaff_x22 + 0x40);
  }
  else {
    uVar8 = uVar4;
    func_0x000107c5faec();
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar4);
    lVar10 = *(long *)(unaff_x22 + 0x40);
  }
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c5fadc(uVar11);
  }
  func_0x000107c564d4(puVar3);
  func_0x000107c61170(uVar11);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c5fadc(lVar7,lVar5);
  }
  func_0x000107c593e4(puVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c5a590(puVar3);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c5fadc(uVar8,lVar6);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(ulong *)(unaff_x22 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c53484(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c55888(puVar3);
  func_0x000107c6142c(lVar6);
  func_0x000107c6142c(lVar5);
  func_0x000107fde5f4(uVar9,uVar12,uVar11);
  func_0x000107c59558(puVar3);
  func_0x000107c42998(uVar1);
  func_0x000107c5abe8();
  if ((uVar4 & 1) == 0) {
    func_0x000107c43c94(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000108dfcb04();
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c54624(puVar3);
  uVar11 = uVar9;
  func_0x000107c42998();
  lVar5 = (long)(int)uVar11;
  func_0x000107c30780(lVar5,uVar9);
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar6 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c5fadc(lVar6,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c54d3c(puVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c56498(puVar3);
  func_0x000107c4bfb0(uVar11);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000101db3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db3778; end: 101db37db; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySnapPreviewStartWithSnap:entry:] */

void FUN_101db3778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  FUN_101db30a0(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101db37dc; end: 101db3953;  */

void FUN_101db37dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lVar6;
  long lStack_68;
  
  uVar5 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c4cabc();
      func_0x000107c61180();
      if (lVar2 == 0) {
        lVar6 = 0;
        uVar5 = 0;
      }
      else {
        lVar6 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
      }
      lVar2 = lVar1;
      func_0x000107c40f88();
      func_0x000107fdcaa8();
      lVar3 = lVar1;
      func_0x000107c5df1c();
      puVar4 = &UNK_1104840c0;
      func_0x000107c613fc(&UNK_1104840c0,0x50,7);
      *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = lVar6;
      *(undefined8 *)(puVar4 + 0x28) = uVar5;
      *(long *)(puVar4 + 0x30) = lVar3;
      *(long *)(puVar4 + 0x38) = lVar2;
      *(undefined8 *)(puVar4 + 0x40) = param_2;
      *(long *)(puVar4 + 0x48) = lStack_68;
      func_0x000107c61174(param_2);
      func_0x000107c615f0(lStack_68);
      func_0x000107c6157c();
      func_0x000107c61174(param_1);
      uVar5 = 0xc0;
      func_0x0001001ca524(0xc0,0,0x48,4,0,0,&UNK_10da15748,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lStack_68);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
  }
  return;
}



/* Entry: 101db3954; end: 101db397f;  */

void FUN_101db3954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_9;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db3980,0,0);
  return;
}



/* Entry: 101db3980; end: 101db3b43;  */

void FUN_101db3980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1 = PTR_PTR_1126a9540;
  func_0x000107c610f8(PTR_PTR_1126a9540);
  func_0x000107c453e4();
  func_0x000107c4b800(uVar3);
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0x20));
  }
  lVar4 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c564d4(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(uVar2,param_2);
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c5a590(puVar1);
  func_0x000107c53484(puVar1);
  func_0x000107c55888(puVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c59558(puVar1);
  func_0x000107c54624(puVar1);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar4 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61174(uVar3);
    uVar2 = uVar3;
    func_0x000107c307c0();
    func_0x000107c30780();
    func_0x000107c61180();
    func_0x000107c54d3c(puVar1);
    func_0x000107c61170(uVar2);
    if (lVar4 != 0x65) {
      func_0x000107c5a590(puVar1);
    }
    func_0x000107c61170(uVar3);
  }
  lVar4 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c4ca5c();
  if (lVar4 != 1) {
    lVar4 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c4ca5c();
    if (lVar4 != 2) goto LAB_101db3b10;
  }
  func_0x000107c56498(puVar1);
LAB_101db3b10:
  func_0x000107c4bfb0(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000101db3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db3b44; end: 101db3bab; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySnapPreviewStartWithAsset:memoriesCRFeaturedStory:] */

void FUN_101db3b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_101db37dc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101db3bac; end: 101db3d3f;  */

void FUN_101db3bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lStack_78;
  long lStack_68;
  
  uVar5 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c4cabc();
      func_0x000107c61180();
      if (lVar2 == 0) {
        lStack_78 = 0;
        uVar5 = 0;
      }
      else {
        lStack_78 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
      }
      lVar2 = lVar1;
      func_0x000107c40f88();
      lVar3 = lVar1;
      func_0x000107c5df1c();
      puVar4 = &UNK_110484098;
      func_0x000107c613fc(&UNK_110484098,0x68,7);
      *(undefined8 *)(puVar4 + 0x10) = param_1;
      *(long *)(puVar4 + 0x18) = lVar1;
      *(undefined8 *)(puVar4 + 0x20) = unaff_x20;
      *(long *)(puVar4 + 0x28) = lStack_78;
      *(undefined8 *)(puVar4 + 0x30) = uVar5;
      *(long *)(puVar4 + 0x38) = lVar3;
      *(long *)(puVar4 + 0x40) = lVar2;
      *(undefined8 *)(puVar4 + 0x48) = param_2;
      *(undefined8 *)(puVar4 + 0x50) = param_3;
      *(undefined8 *)(puVar4 + 0x58) = param_4;
      *(long *)(puVar4 + 0x60) = lStack_68;
      func_0x000107c615f0(param_1);
      func_0x000107c615f0(lVar1);
      func_0x000107c6157c();
      func_0x000107c61434(param_4);
      func_0x000107c615f0(lStack_68);
      uVar5 = 0xc0;
      func_0x0001001ca524(0xc0,0,0x48,4,0,0,&UNK_10da15738,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lStack_68);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
  }
  return;
}



/* Entry: 101db3d40; end: 101db3d77;  */

void FUN_101db3d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_11;
  *(undefined8 *)(unaff_x22 + 0x78) = param_12;
  *(undefined8 *)(unaff_x22 + 0x68) = param_10;
  *(undefined8 *)(unaff_x22 + 0x60) = param_9;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db3d78,0,0);
  return;
}



/* Entry: 101db3d78; end: 101db422b;  */

void FUN_101db3d78(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar3 = PTR_PTR_1126af4d0;
  func_0x000107c61168();
  func_0x000107c4cb6c(uVar9);
  func_0x000107c61180();
  func_0x000107c430fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (puVar3 == (undefined *)0x0) goto LAB_101db41b8;
  puVar14 = PTR___sypN_11034f1a8 + 8;
  puVar4 = puVar3;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  FUN_101baa320();
  func_0x000107c6142c(puVar4);
  if (puVar3 == (undefined *)0x0) goto LAB_101db41b8;
  puVar4 = PTR_PTR_1126a9538;
  func_0x000107c610f8(PTR_PTR_1126a9538);
  func_0x000107c453e4();
  puVar12 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
  if ((ulong)puVar3 >> 0x3e == 0) {
    if (*(long *)(puVar12 + 0x10) == 0) goto LAB_101db3ee8;
LAB_101db3e4c:
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101db4224);
        (*pcVar2)();
      }
      lVar5 = *(long *)(puVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      puVar14 = puVar3;
      FUN_101db519c(0,puVar3,&PTR_PTR_1126af4d0,0x112d63638);
    }
    lVar15 = lVar5;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar15 == 0) {
      lVar5 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar15;
      func_0x000107c5faec(lVar15);
      func_0x000107c61170(lVar15);
    }
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101db422c);
        (*pcVar2)();
      }
      uVar6 = *(undefined8 *)(puVar3 + 0x20);
      func_0x000107c61174(uVar6);
    }
    else {
      uVar6 = 0;
      FUN_101db519c(0,puVar3,&PTR_PTR_1126af4d0,0x112d63638);
    }
  }
  else {
    puVar7 = puVar3;
    if (-1 < (long)puVar3) {
      puVar7 = puVar12;
    }
    func_0x000107c60480();
    if (puVar7 != (undefined *)0x0) goto LAB_101db3e4c;
LAB_101db3ee8:
    func_0x0001000d224c(unaff_x22 + 0x10);
    puVar14 = (undefined *)0x0;
    lVar5 = 0;
    uVar6 = 0;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  }
  func_0x000107c6142c(puVar3);
  func_0x000107c4a450();
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar9);
  func_0x0001000d224c(unaff_x22 + 0x20);
  uVar13 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar13 != 0) {
    if (*(long *)(unaff_x22 + 0x48) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x000107c5fadc(uVar9);
    }
    func_0x000107c564d4(puVar4);
    func_0x000107c61170(uVar9);
    if (puVar14 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      func_0x000107c5fadc(lVar5,puVar14);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar15 = *(long *)(unaff_x22 + 0x50);
    func_0x000107c593e4(puVar4);
    func_0x000107c61170(lVar5);
    func_0x000107fdcaa8(uVar6);
    func_0x000107c59558(puVar4);
    func_0x000107c5fadc(uVar9,uVar1);
    func_0x000107c58ec0(puVar4);
    func_0x000107c61170(uVar9);
    func_0x000107c54618(puVar4);
    if (lVar15 != 0x65) {
      func_0x000107c43c94();
      func_0x000107c307b8();
    }
    func_0x000107c42998(*(undefined8 *)(unaff_x22 + 0x28));
    uVar8 = uVar13;
    func_0x000107c5abe8();
    if ((uVar8 & 1) == 0) {
      func_0x000107c43c94(*(undefined8 *)(unaff_x22 + 0x28));
      func_0x000108dfcb04();
    }
    lVar15 = *(long *)(unaff_x22 + 0x28);
    lVar5 = lVar15;
    func_0x000107c42998();
    lVar5 = (long)(int)lVar5;
    func_0x000107c30780();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar16 = 0;
      lVar5 = -0x2000000000000000;
      lVar11 = lVar15;
    }
    else {
      lVar16 = lVar5;
      func_0x000107c5faec();
      lVar11 = lVar15;
      func_0x000107c61170(lVar5);
      lVar5 = lVar15;
    }
    uVar8 = *(ulong *)(unaff_x22 + 0x28);
    func_0x000107c3fba8();
    if ((int)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101db4228);
      (*pcVar2)();
    }
    uVar8 = uVar8 & 0xffffffff;
    func_0x000107c30784();
    func_0x000107c61180();
    if (uVar8 == 0) {
      uVar10 = 0;
      lVar11 = 0;
    }
    else {
      uVar10 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
    }
    FUN_101db3260(*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c56498(puVar4);
    func_0x000107c5a590(puVar4);
    func_0x000107c54624(puVar4);
    func_0x000107c5fadc(lVar16,lVar5);
    func_0x000107c6142c(lVar5);
    func_0x000107c54d3c(puVar4);
    func_0x000107c61170(lVar16);
    if (lVar11 == 0) {
      uVar10 = 0;
    }
    else {
      func_0x000107c5fadc(uVar10,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c53484(puVar4);
    func_0x000107c61170(uVar10);
    func_0x000107c55888(puVar4);
    func_0x000107c615e8(uVar13);
  }
  func_0x000107c6142c(puVar14);
  func_0x000107c4bfb0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(puVar4);
LAB_101db41b8:
                    /* WARNING: Could not recover jumptable at 0x000101db41d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


