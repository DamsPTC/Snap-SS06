/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101aa8948; end: 101aa898b;  */

undefined1  [16] FUN_101aa8948(void)

{
  return ZEXT816(0x110439ed0);
}



/* Entry: 101aa898c; end: 101aa89b3;  */

void FUN_101aa898c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa89b4; end: 101aa89ff;  */

undefined8 FUN_101aa89b4(void)

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



/* Entry: 101aa8a00; end: 101aa8ae3;  */

void FUN_101aa8a00(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100233c8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000101aa9b14(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000101aa98e4();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_101aa990c();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 101aa8ae4; end: 101aa8aeb;  */

void FUN_101aa8ae4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x000100233c8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000101aa9b14(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101aa98e4();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_101aa990c();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 101aa8aec; end: 101aa8ba3;  */

long FUN_101aa8aec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000101aa9b14(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aa98e4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101aa990c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101aa8ba4; end: 101aa8bd7;  */

void FUN_101aa8ba4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa8bd8; end: 101aa8c2b;  */

void FUN_101aa8bd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101aa8c2c; end: 101aa8c77;  */

void FUN_101aa8c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101aa8c78; end: 101aa8ccb;  */

void FUN_101aa8c78(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa8ccc; end: 101aa8e17;  */

long FUN_101aa8ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001006db978(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001006dc29c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001006dc354();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101aa8e18; end: 101aa8e63;  */

void FUN_101aa8e18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa8e64; end: 101aa8ea7;  */

undefined1  [16] FUN_101aa8e64(void)

{
  return ZEXT816(0x11043a108);
}



/* Entry: 101aa8ea8; end: 101aa8efb;  */

void FUN_101aa8ea8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa8efc; end: 101aa8f6b;  */

undefined8 FUN_101aa8efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100a80d4c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101aa8f6c; end: 101aa8faf;  */

void FUN_101aa8f6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa8fb0; end: 101aa8fff;  */

undefined8 FUN_101aa8fb0(void)

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



/* Entry: 101aa9000; end: 101aa9043;  */

undefined1  [16] FUN_101aa9000(void)

{
  return ZEXT816(0x11043a1d0);
}



/* Entry: 101aa9044; end: 101aa906b;  */

void FUN_101aa9044(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa906c; end: 101aa9073;  */

undefined8 FUN_101aa906c(void)

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



/* Entry: 101aa9074; end: 101aa90f3;  */

long FUN_101aa9074(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100bd38ec(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000100bd3c98(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000100bd3d60();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return unaff_x20;
}



/* Entry: 101aa90f4; end: 101aa9127;  */

void FUN_101aa90f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa9128; end: 101aa916b;  */

undefined1  [16] FUN_101aa9128(void)

{
  return ZEXT816(0x11043a298);
}



/* Entry: 101aa916c; end: 101aa91bf;  */

void FUN_101aa916c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa91c0; end: 101aa9223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa91c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df6540) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112df6548) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101aa9224; end: 101aa93bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa9224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112df6548);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    func_0x000107c61434(param_2);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar2);
    puVar4 = &UNK_11043a3a8;
    func_0x000107c613fc(&UNK_11043a3a8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_11043a3d0;
    func_0x000107c613fc(&UNK_11043a3d0,0x30,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    *(undefined8 *)(puVar5 + 0x28) = param_5;
    pcStack_60 = FUN_101aa94dc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100f6151c;
    puStack_68 = &UNK_11043a3e8;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174(param_3);
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar4);
    func_0x000107c5b4fc(lVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101aa93bc; end: 101aa94db;  */

void FUN_101aa93bc(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar3 = param_1;
      if (-1 < (long)param_1) {
        uVar3 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa94dc);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar2);
      }
      else {
        uVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      if (param_3 != 0) {
        FUN_101aa94e8(uVar2,param_4,param_5,param_6);
        func_0x000107c61170(param_3);
      }
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 101aa94dc; end: 101aa94e7;  */

void FUN_101aa94dc(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101aa94dc);
          (*pcVar4)();
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = 0;
        func_0x00010103193c(0,param_1);
      }
      func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      if (lVar6 != 0) {
        FUN_101aa94e8(uVar5,uVar2,uVar1,uVar3);
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 101aa94e8; end: 101aa9627;  */

/* WARNING: Possible PIC construction at 0x000101aa95e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa95e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa94e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x000107c61168(PTR_PTR_1126ae5c0);
  func_0x000107c3eb10();
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + _DAT_112df6540);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11043a470;
    func_0x000107c613fc(&UNK_11043a470,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    pcStack_50 = FUN_101aa9884;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_11043a488;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c3eb08(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101aa9628; end: 101aa9643;  */

void FUN_101aa9628(long param_1,long param_2)

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



/* Entry: 101aa9644; end: 101aa9703; -[_TtC30ContentBlockingServiceProvider14ContentBlocker blockUserWith:completionQueue:completion:] */

void FUN_101aa9644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_11043a448;
  func_0x000107c613fc(&UNK_11043a448,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101aa9224(param_3,param_2,param_4,0x101aa98ac,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101aa9704; end: 101aa97b7; -[_TtC30ContentBlockingServiceProvider14ContentBlocker blockUserWithSnapchatter:completionQueue:completion:] */

/* WARNING: Possible PIC construction at 0x000101aa978c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa9790) */

void FUN_101aa9704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11043a420;
  func_0x000107c613fc(&UNK_11043a420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101aa94e8(param_3,param_4,FUN_101aa9870,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101aa97b8; end: 101aa9817; -[_TtC30ContentBlockingServiceProvider14ContentBlocker init] */

void FUN_101aa97b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentBlockingServiceProvider.ContentBlocker",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa97e4);
  (*pcVar1)();
}



/* Entry: 101aa9818; end: 101aa984f; -[_TtC30ContentBlockingServiceProvider14ContentBlocker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101aa9834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa9838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa9818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df6540));
  return;
}



/* Entry: 101aa9850; end: 101aa986f;  */

void FUN_101aa9850(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2ce8);
  return;
}



/* Entry: 101aa9870; end: 101aa9883;  */

void FUN_101aa9870(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101aa9880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101aa9884; end: 101aa98a3;  */

void FUN_101aa9884(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101aa98a4; end: 101aa98af;  */

void FUN_101aa98a4(long param_1,long param_2)

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



/* Entry: 101aa98b0; end: 101aa990b;  */

void FUN_101aa98b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101aa990c; end: 101aa9a8b;  */

void FUN_101aa990c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11043a4c0;
  func_0x000107c613fc(&UNK_11043a4c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  pcStack_40 = FUN_101aa9a8c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101aa9a94;
  puStack_48 = &UNK_11043a4d8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001002349b4(0);
  func_0x000107c610f8();
  func_0x00010401eee0(puVar1);
  return;
}



/* Entry: 101aa9a8c; end: 101aa9a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa9a8c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar5;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa9a88);
    (*pcVar1)();
  }
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar3 = 0;
    FUN_101aa9850();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112df6540) = lVar2;
    *(long *)(lVar4 + _DAT_112df6548) = lVar5;
    lStack_40 = lVar4;
    lStack_38 = lVar3;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa9a8c);
  (*pcVar1)();
}



/* Entry: 101aa9a94; end: 101aa9acb;  */

void FUN_101aa9a94(long param_1)

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



/* Entry: 101aa9acc; end: 101aa9aef;  */

void FUN_101aa9acc(long param_1,long param_2)

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



/* Entry: 101aa9af0; end: 101aa9b8f;  */

void FUN_101aa9af0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa9b90; end: 101aa9c87;  */

void FUN_101aa9b90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11043a510;
  func_0x000107c613fc(&UNK_11043a510,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uStack_50 = 0x101aa9c8c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101aa9a94;
  puStack_58 = &UNK_11043a528;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001002349b4(0);
  func_0x000107c610f8();
  func_0x00010401eee0(puVar1,uVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 101aa9c88; end: 101aa9c93;  */

void FUN_101aa9c88(long param_1,long param_2)

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



/* Entry: 101aa9c94; end: 101aa9d63;  */

long FUN_101aa9c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar2 = param_5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    *(long *)(unaff_x20 + 0x28) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa9d64);
  (*pcVar1)();
}



/* Entry: 101aa9d64; end: 101aa9efb;  */

void FUN_101aa9d64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5b034(param_2);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126beca0;
  func_0x000107c610f8(PTR_PTR_1126beca0);
  func_0x000107c486e4();
  func_0x000107c61170(param_2);
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar4 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010efcf8a0);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar3);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c42d48(param_4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126becd0;
  func_0x000107c610f8();
  func_0x000107c4735c();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(puVar3);
  *param_1 = puVar5;
  return;
}



/* Entry: 101aa9efc; end: 101aa9f07;  */

void FUN_101aa9efc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c5b034(uVar4);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126beca0;
  func_0x000107c610f8(PTR_PTR_1126beca0);
  func_0x000107c486e4();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar7 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar4 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010efcf8a0);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar3);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c42d48(uVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126becd0;
  func_0x000107c610f8();
  func_0x000107c4735c();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(puVar3);
  *param_1 = puVar6;
  return;
}



/* Entry: 101aa9f08; end: 101aa9f33;  */

void FUN_101aa9f08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101aa9f34; end: 101aa9fb3;  */

void FUN_101aa9f34(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa9fb4; end: 101aa9fbb;  */

void FUN_101aa9fb4(void)

{
  if (lRam0000000113483b40 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e66e330);
  return;
}



/* Entry: 101aa9fbc; end: 101aa9feb;  */

void FUN_101aa9fbc(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_101aa9fec(param_1);
  return;
}



/* Entry: 101aa9fec; end: 101aaa0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101aa9fec(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112df6740) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112df6748) = 0;
  lVar1 = _DAT_112df6750;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112df6758;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112df6760) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar2);
  func_0x000107c61180();
  FUN_101aaa0c4();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 101aaa0c4; end: 101aaa283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa0c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112df6760);
  uVar2 = uVar8;
  func_0x000107c41b80(uVar8);
  func_0x000107c61180();
  puVar6 = &UNK_11043a6e0;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_11043a6e0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_101aaa4cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_11043a6f8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c5e370(uVar8);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_11043a6e0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_70 = FUN_101aaa504;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_11043a720;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar2 = uVar8;
  func_0x000107c5c320(uVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101aaa284; end: 101aaa307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa284(undefined8 param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112df6750;
  if (param_2 != 0) {
    func_0x000107c4b940(*(undefined8 *)(param_2 + _DAT_112df6750));
    *(undefined1 *)(param_2 + _DAT_112df6748) = param_3;
    func_0x000107c5d278(*(undefined8 *)(param_2 + lVar1));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101aaa308; end: 101aaa367; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager init] */

void FUN_101aaa308(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightOperaServiceImplementation.SpotlightOperaLifecycleManager",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aaa334);
  (*pcVar1)();
}



/* Entry: 101aaa368; end: 101aaa3af; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101aaa384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aaa388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df6750));
  return;
}



/* Entry: 101aaa3b0; end: 101aaa3bb; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager isOperaPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101aaa3b0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = _DAT_112df6750;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df6750);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar4);
  uVar1 = *(undefined1 *)(lVar3 + _DAT_112df6740);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar2));
  func_0x000107c61170(lVar3);
  return uVar1;
}



/* Entry: 101aaa3bc; end: 101aaa3c7; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager isAppBackgrounded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101aaa3bc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = _DAT_112df6750;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df6750);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar4);
  uVar1 = *(undefined1 *)(lVar3 + _DAT_112df6748);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar2));
  func_0x000107c61170(lVar3);
  return uVar1;
}



/* Entry: 101aaa3c8; end: 101aaa42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101aaa3c8(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = _DAT_112df6750;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df6750);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar4);
  uVar1 = *(undefined1 *)(lVar3 + *param_3);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar2));
  func_0x000107c61170(lVar3);
  return uVar1;
}



/* Entry: 101aaa430; end: 101aaa433; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager operaDidBeginPresenting] */

void FUN_101aaa430(void)

{
  return;
}



/* Entry: 101aaa434; end: 101aaa43b; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager operaDidFinishPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa434(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112df6750;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112df6750);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar3);
  *(undefined1 *)(lVar2 + _DAT_112df6740) = 1;
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101aaa43c; end: 101aaa43f; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager operaWillDismiss] */

void FUN_101aaa43c(void)

{
  return;
}



/* Entry: 101aaa440; end: 101aaa45f;  */

void FUN_101aaa440(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2db0);
  return;
}



/* Entry: 101aaa460; end: 101aaa467; -[_TtC37SCSpotlightOperaServiceImplementation30SpotlightOperaLifecycleManager operaDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa460(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112df6750;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112df6750);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar3);
  *(undefined1 *)(lVar2 + _DAT_112df6740) = 0;
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101aaa468; end: 101aaa4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa468(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112df6750;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112df6750);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar3);
  *(undefined1 *)(lVar2 + _DAT_112df6740) = param_3;
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101aaa4cc; end: 101aaa4e7;  */

void FUN_101aaa4cc(void)

{
  FUN_101aaa284();
  return;
}



/* Entry: 101aaa4e8; end: 101aaa503;  */

void FUN_101aaa4e8(long param_1,long param_2)

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



/* Entry: 101aaa504; end: 101aaa51f;  */

void FUN_101aaa504(void)

{
  FUN_101aaa284();
  return;
}



/* Entry: 101aaa520; end: 101aaa527;  */

void FUN_101aaa520(long param_1,long param_2)

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



/* Entry: 101aaa528; end: 101aaa583;  */

undefined8 FUN_101aaa528(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000100bd3a30(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101aaa584; end: 101aaa5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaa584(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113091b70);
  FUN_101aaa440(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar1);
  FUN_101aa9fec();
  return;
}



/* Entry: 101aaa600; end: 101aaa607;  */

void FUN_101aaa600(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101aaa608; end: 101aaa62b;  */

void FUN_101aaa608(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aaa62c; end: 101aaa647;  */

void FUN_101aaa62c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101aaa648; end: 101aaa663;  */

void FUN_101aaa648(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101aaa664; end: 101aaa67b;  */

void FUN_101aaa664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101aaa67c; end: 101aaa7c7;  */

long FUN_101aaa67c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8808;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 101aaa7c8; end: 101aaa7f3;  */

void FUN_101aaa7c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aaa7f4; end: 101aaa827;  */

undefined1  [16] FUN_101aaa7f4(void)

{
  return ZEXT816(0x11043a918);
}



/* Entry: 101aaa828; end: 101aaa873;  */

undefined8 FUN_101aaa828(void)

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



/* Entry: 101aaa874; end: 101aaa8d7;  */

undefined8
FUN_101aaa874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101aaa8d8(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101aaa8d8; end: 101aaab2f;  */

void FUN_101aaa8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8810;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x6e496e69676562;
  func_0x000107c5fadc(0x6e496e69676562,0xe700000000000000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101aaab30; end: 101aaab73;  */

void FUN_101aaab30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aaab74; end: 101aaabc3;  */

undefined8 FUN_101aaab74(void)

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



/* Entry: 101aaabc4; end: 101aaac07;  */

undefined1  [16] FUN_101aaabc4(void)

{
  return ZEXT816(0x11043aa48);
}



/* Entry: 101aaac08; end: 101aaac2f;  */

void FUN_101aaac08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aaac30; end: 101aaac37;  */

undefined8 FUN_101aaac30(void)

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



/* Entry: 101aaac38; end: 101aaac97;  */

undefined8 FUN_101aaac38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001009b5490(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101aaac98; end: 101aaacc3;  */

void FUN_101aaac98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aaacc4; end: 101aaad13;  */

undefined8 FUN_101aaacc4(void)

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



/* Entry: 101aaad14; end: 101aaad4f;  */

undefined1  [16] FUN_101aaad14(void)

{
  return ZEXT816(0x11043ab10);
}



/* Entry: 101aaad50; end: 101aaadaf;  */

undefined8 FUN_101aaad50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100a81eb4(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101aaadb0; end: 101aaadeb;  */

void FUN_101aaadb0(void)

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



/* Entry: 101aaadec; end: 101aaae3b;  */

undefined8 FUN_101aaadec(void)

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



/* Entry: 101aaae3c; end: 101aaae7f;  */

undefined1  [16] FUN_101aaae3c(void)

{
  return ZEXT816(0x11043abb8);
}



/* Entry: 101aaae80; end: 101aaaea7;  */

void FUN_101aaae80(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aaaea8; end: 101aaaeaf;  */

undefined8 FUN_101aaaea8(void)

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



/* Entry: 101aaaeb0; end: 101aab18f;  */

long FUN_101aaaeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a8828;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}


