/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c5edfc; end: 101c5ee47;  */

void FUN_101c5edfc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5ee48; end: 101c5ee6b;  */

void FUN_101c5ee48(long param_1,long param_2)

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



/* Entry: 101c5ee6c; end: 101c5ef63;  */

undefined * FUN_101c5ee6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126a8cd8;
  func_0x000107c610f8(PTR_PTR_1126a8cd8);
  func_0x000107c453e4();
  uVar4 = *param_1;
  uVar1 = param_1[1];
  puVar3 = PTR_PTR_1126bcf68;
  func_0x000107c610f8(PTR_PTR_1126bcf68);
  func_0x000107c5ee20(uVar4,uVar1);
  func_0x000107c45ae0(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c569a8(puVar2);
  func_0x000107c61170(puVar3);
  uVar4 = param_1[7];
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59fac(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(uVar4);
  func_0x000107c52e00(puVar2);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 101c5ef64; end: 101c5ef6f;  */

void FUN_101c5ef64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5ef70; end: 101c5f05b;  */

void FUN_101c5ef70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "make(request:componentBuilder:)";
  func_0x0001000c10c0("make(request:componentBuilder:)");
  func_0x000107c61180();
  puVar2 = &UNK_11045eb08;
  func_0x000107c613fc(&UNK_11045eb08,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_101c5f678;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11045eb20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101c5f05c; end: 101c5f12b;  */

void FUN_101c5f05c(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x61) == '\x01') {
      func_0x000107c61574();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0x50) = param_2;
      *(undefined8 *)(param_1 + 0x58) = param_3;
      func_0x000107c615e8(uVar2);
      cVar1 = *(char *)(param_1 + 0x60);
      lVar3 = *(long *)(param_2 + 0x10);
      func_0x000107c615f0(param_2);
      if (cVar1 == '\x01') {
        func_0x000107c4e868();
      }
      else {
        func_0x000107c4e454();
      }
      func_0x000107c61180();
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c61574(param_1);
      func_0x000107c60bd0(lVar3);
    }
  }
  return;
}



/* Entry: 101c5f12c; end: 101c5f277;  */

void FUN_101c5f12c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  if ((*(byte *)(unaff_x20 + 0x61) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar3 = uVar7;
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(uVar1);
    pcVar4 = "deinit";
    func_0x0001000c10c0("deinit");
    func_0x000107c61180();
    puVar5 = &UNK_11045eab8;
    func_0x000107c613fc(&UNK_11045eab8,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    uStack_50 = 0x101c5f538;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11045ead0;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(pcVar4);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100ccbb34(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100ccbb34(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101c5f278; end: 101c5f2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5f278(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    param_3 = param_3 + _DAT_112e0c9c0;
    *(undefined8 *)(param_3 + 8) = 0;
    func_0x000107c61604(param_3,0);
  }
  if (param_1 != 0) {
    func_0x000107c4ff34(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c41854();
      if ((uVar2 & 1) == 0) {
        func_0x000107c41848(uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 101c5f2f8; end: 101c5f337;  */

void FUN_101c5f2f8(void)

{
  FUN_101c5f12c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5f338; end: 101c5f413;  */

void FUN_101c5f338(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  if ((*(byte *)(unaff_x20 + 0x61) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x60) = 1;
    lVar1 = *(long *)(unaff_x20 + 0x50);
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      func_0x000107c615f0(lVar1);
      func_0x000107c4e868();
      func_0x000107c61180();
      (**(code **)(lVar2 + 0x10))();
      func_0x000107c60bd0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 101c5f414; end: 101c5f523;  */

/* WARNING: Possible PIC construction at 0x000101c5f454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c5f4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c5f4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c5f4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5f4e8) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4d8) */
/* WARNING: Removing unreachable block (ram,0x000101c5f458) */
/* WARNING: Removing unreachable block (ram,0x000101c5f468) */
/* WARNING: Removing unreachable block (ram,0x000101c5f484) */
/* WARNING: Removing unreachable block (ram,0x000101c5f488) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4ec) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4bc) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4c8) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4d0) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4f4) */
/* WARNING: Removing unreachable block (ram,0x000101c5f4fc) */

void FUN_101c5f414(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x61) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x61) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101c5f524; end: 101c5f55f;  */

void FUN_101c5f524(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c5f560; end: 101c5f643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5f560(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x5a) = 0;
  *(undefined8 *)(unaff_x20 + 0x52) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  func_0x000107c61174();
  func_0x000100ccbb44(uVar4,uVar2);
  func_0x000100ccbb44(uVar1,uVar3);
  FUN_101c5f644(param_1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  func_0x000107c615e8(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long *)(unaff_x20 + 0x48) = param_4;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  *(undefined ***)(param_4 + _DAT_112e0c9c0 + 8) = &PTR_DAT_11045ea60;
  func_0x000107c61604();
  return;
}



/* Entry: 101c5f644; end: 101c5f677;  */

undefined8 FUN_101c5f644(undefined8 param_1)

{
  (*(code *)&DAT_102c0dbc4)();
  return param_1;
}



/* Entry: 101c5f678; end: 101c5f68b;  */

void FUN_101c5f678(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x61) == '\x01') {
      func_0x000107c61574();
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x50);
      *(long *)(lVar3 + 0x50) = lVar1;
      *(undefined8 *)(lVar3 + 0x58) = uVar4;
      func_0x000107c615e8(uVar5);
      cVar2 = *(char *)(lVar3 + 0x60);
      lVar6 = *(long *)(lVar1 + 0x10);
      func_0x000107c615f0(lVar1);
      if (cVar2 == '\x01') {
        func_0x000107c4e868();
      }
      else {
        func_0x000107c4e454();
      }
      func_0x000107c61180();
      (**(code **)(lVar6 + 0x10))();
      func_0x000107c61574(lVar3);
      func_0x000107c60bd0(lVar6);
    }
  }
  return;
}



/* Entry: 101c5f68c; end: 101c5f717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5f68c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101c5fc88();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e0ccb8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e0ccc0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_11045eba8;
  return;
}



/* Entry: 101c5f718; end: 101c5f71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5f718(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_101c5fc88();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e0ccb8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e0ccc0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_11045eba8;
  return;
}



/* Entry: 101c5f720; end: 101c5f893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5f720(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0ccb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e0ccc0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5f894; end: 101c5fb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101c5f894(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long alStack_e0 [16];
  
  FUN_101c5e1fc();
  if (param_2 == 0) {
    func_0x000100083b20(alStack_e0);
    lVar1 = alStack_e0[0];
    lVar6 = alStack_e0[0];
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      lVar6 = lVar1;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar6 != 0) {
        func_0x000100083b20(alStack_e0);
        lVar1 = alStack_e0[0];
        func_0x000107c42d48();
        func_0x000107c61180();
        func_0x000107c61170(alStack_e0[0]);
        lVar2 = lVar1;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar2 != 0) {
          lVar3 = 0;
          func_0x000101c5ee28();
          func_0x000107c61534();
          *(long *)(lVar3 + 0x10) = lVar6;
          *(long *)(lVar3 + 0x18) = lVar2;
          uVar4 = 0;
          FUN_101c5e9e4(0);
          func_0x000107c610f8();
          func_0x000107c6157c(lVar3);
          func_0x000107c615f0(lVar2);
          func_0x000107c615f0(lVar6);
          func_0x000107c453e4(uVar4);
          puVar5 = &UNK_11045eb90;
          func_0x000107c613fc(&UNK_11045eb90,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,0);
          func_0x000107c6157c(puVar5);
          lVar1 = param_1;
          uVar8 = uVar4;
          FUN_101c5eadc(param_1,uVar4,0x101c5fc34,puVar5);
          func_0x000107c61574(puVar5);
          if (lVar1 != 0) {
            func_0x000101c5f318(0);
            func_0x000107c613fc();
            func_0x000107c615f0(lVar1);
            FUN_101c5fc3c(param_1,alStack_e0);
            FUN_101c5f560(param_1,lVar1,uVar8,uVar4);
            func_0x000107c61574(lVar3);
            func_0x000107c615e8(lVar1);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61588(lVar3);
            func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x10));
            func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x18));
            func_0x000107c61428(puVar5 + 0x10,alStack_e0,1,0);
            func_0x000107c61634(puVar5 + 0x10,param_1);
            func_0x000107c61574(puVar5);
            ppuVar7 = &PTR_DAT_11045ea80;
            goto LAB_101c5f8d0;
          }
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar6);
          func_0x000107c61574(lVar3);
          func_0x000107c61170(uVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c61588(lVar3);
          func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x10));
          lVar6 = *(long *)(lVar3 + 0x18);
        }
        func_0x000107c615e8(lVar6);
      }
    }
  }
  else {
    func_0x000107c6142c(param_2);
  }
  param_1 = 0;
  ppuVar7 = (undefined **)0x0;
LAB_101c5f8d0:
  auVar9._8_8_ = ppuVar7;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 101c5fb70; end: 101c5fbcf; -[_TtC27SnapPlaybackViewServiceImpl28SnapPlaybackViewProviderImpl init] */

void FUN_101c5fb70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapPlaybackViewServiceImpl.SnapPlaybackViewProviderImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5fb9c);
  (*pcVar1)();
}



/* Entry: 101c5fbd0; end: 101c5fc07; -[_TtC27SnapPlaybackViewServiceImpl28SnapPlaybackViewProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c5fbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5fbf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5fbd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0ccb8));
  return;
}



/* Entry: 101c5fc08; end: 101c5fc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c5fc08(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      func_0x000107c615e8(lVar1);
      func_0x000100083b20(&lStack_38);
      lVar2 = lStack_38;
      func_0x000107c42d48();
      func_0x000107c61180();
      func_0x000107c61170(lStack_38);
      lVar1 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        func_0x000107c615e8(lVar1);
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101c5fc0c; end: 101c5fc2f;  */

uint FUN_101c5fc0c(uint param_1)

{
  FUN_101c5daf8();
  return param_1 & 1;
}



/* Entry: 101c5fc30; end: 101c5fc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101c5fc30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long alStack_e0 [16];
  
  FUN_101c5e1fc();
  if (param_2 == 0) {
    func_0x000100083b20(alStack_e0);
    lVar1 = alStack_e0[0];
    lVar6 = alStack_e0[0];
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      lVar6 = lVar1;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar6 != 0) {
        func_0x000100083b20(alStack_e0);
        lVar1 = alStack_e0[0];
        func_0x000107c42d48();
        func_0x000107c61180();
        func_0x000107c61170(alStack_e0[0]);
        lVar2 = lVar1;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar2 != 0) {
          lVar3 = 0;
          func_0x000101c5ee28();
          func_0x000107c61534();
          *(long *)(lVar3 + 0x10) = lVar6;
          *(long *)(lVar3 + 0x18) = lVar2;
          uVar4 = 0;
          FUN_101c5e9e4(0);
          func_0x000107c610f8();
          func_0x000107c6157c(lVar3);
          func_0x000107c615f0(lVar2);
          func_0x000107c615f0(lVar6);
          func_0x000107c453e4(uVar4);
          puVar5 = &UNK_11045eb90;
          func_0x000107c613fc(&UNK_11045eb90,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,0);
          func_0x000107c6157c(puVar5);
          lVar1 = param_1;
          uVar8 = uVar4;
          FUN_101c5eadc(param_1,uVar4,0x101c5fc34,puVar5);
          func_0x000107c61574(puVar5);
          if (lVar1 != 0) {
            func_0x000101c5f318(0);
            func_0x000107c613fc();
            func_0x000107c615f0(lVar1);
            FUN_101c5fc3c(param_1,alStack_e0);
            FUN_101c5f560(param_1,lVar1,uVar8,uVar4);
            func_0x000107c61574(lVar3);
            func_0x000107c615e8(lVar1);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61588(lVar3);
            func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x10));
            func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x18));
            func_0x000107c61428(puVar5 + 0x10,alStack_e0,1,0);
            func_0x000107c61634(puVar5 + 0x10,param_1);
            func_0x000107c61574(puVar5);
            ppuVar7 = &PTR_DAT_11045ea80;
            goto LAB_101c5f8d0;
          }
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar6);
          func_0x000107c61574(lVar3);
          func_0x000107c61170(uVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c61588(lVar3);
          func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x10));
          lVar6 = *(long *)(lVar3 + 0x18);
        }
        func_0x000107c615e8(lVar6);
      }
    }
  }
  else {
    func_0x000107c6142c(param_2);
  }
  param_1 = 0;
  ppuVar7 = (undefined **)0x0;
LAB_101c5f8d0:
  auVar9._8_8_ = ppuVar7;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 101c5fc3c; end: 101c5fc77;  */

undefined8 FUN_101c5fc3c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_102c0dc1c)(param_2,param_1);
  return param_2;
}



/* Entry: 101c5fc78; end: 101c5fc87;  */

undefined1  [16] FUN_101c5fc78(void)

{
  return ZEXT816(0x11045ebd8);
}



/* Entry: 101c5fc88; end: 101c5fca7;  */

void FUN_101c5fc88(void)

{
  func_0x000107c61168(&PTR_PTR_1127fdb78);
  return;
}



/* Entry: 101c5fca8; end: 101c5fcf7;  */

void FUN_101c5fca8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_101c5fe94();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11045ec70;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c5fcf8; end: 101c5fd27;  */

void FUN_101c5fcf8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101c5fd28; end: 101c5fe13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5fd28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  func_0x000108f277a0();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_68);
  uVar1 = *(undefined8 *)(lVar7 + _DAT_11302cf98);
  uVar4 = ((undefined8 *)(lVar7 + _DAT_11302cf98))[1];
  uVar8 = *(undefined8 *)(lVar7 + _DAT_11302cfa0);
  uVar2 = *(undefined8 *)(lVar7 + _DAT_11302cfa8);
  uVar5 = ((undefined8 *)(lVar7 + _DAT_11302cfa8))[1];
  uVar3 = *(undefined8 *)(lVar7 + _DAT_11302cfb0);
  uVar6 = ((undefined8 *)(lVar7 + _DAT_11302cfb0))[1];
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61170(lVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar2;
  param_1[4] = uVar5;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  return;
}



/* Entry: 101c5fe14; end: 101c5fe37;  */

void FUN_101c5fe14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5fe38; end: 101c5fe83;  */

void FUN_101c5fe38(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101c5fd28(&uStack_58);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  param_1[6] = uStack_28;
  return;
}



/* Entry: 101c5fe84; end: 101c5fe93;  */

undefined1  [16] FUN_101c5fe84(void)

{
  return ZEXT816(0x11045ec90);
}



/* Entry: 101c5fe94; end: 101c5feb3;  */

void FUN_101c5fe94(void)

{
  func_0x000107c61168(&PTR_PTR_112e0cd38);
  return;
}



/* Entry: 101c5feb4; end: 101c5ff1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5feb4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_101c60090();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e0cda0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 101c5ff1c; end: 101c5ff67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5ff1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0cda0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5ff68; end: 101c6003b; -[_TtC33SCSnapProIdValidityImplementation24DefaultSnapProIdValidity isRealPublicProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101c5ff68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000103039400(0);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c3fa04(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x00010303909c(param_3,param_2,uVar1);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101c6003c; end: 101c6006f;  */

void FUN_101c6003c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c60070; end: 101c6007f;  */

undefined1  [16] FUN_101c60070(void)

{
  return ZEXT816(0x11045ed38);
}



/* Entry: 101c60080; end: 101c6008f; -[_TtC33SCSnapProIdValidityImplementation24DefaultSnapProIdValidity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c60080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0cda0));
  return;
}



/* Entry: 101c60090; end: 101c600af;  */

void FUN_101c60090(void)

{
  func_0x000107c61168(&PTR_PTR_1127fdc40);
  return;
}



/* Entry: 101c600b0; end: 101c6011b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c600b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101c604a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e0cdd8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101c6011c; end: 101c60187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6011c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0cdd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c60188; end: 101c601e7; -[_TtC38UberAvatarScopedFactoryServiceProvider26SCUberAvatarScopedServices init] */

void FUN_101c60188(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UberAvatarScopedFactoryServiceProvider.SCUberAvatarScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c601b4);
  (*pcVar1)();
}



/* Entry: 101c601e8; end: 101c601f7; -[_TtC38UberAvatarScopedFactoryServiceProvider26SCUberAvatarScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c601e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0cdd8));
  return;
}



/* Entry: 101c601f8; end: 101c60263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c601f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11045ef10;
  func_0x000107c613fc(&UNK_11045ef10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101c6053c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c60264; end: 101c602ff;  */

void FUN_101c60264(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11045ee20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11045ee20;
  return;
}



/* Entry: 101c60300; end: 101c60337;  */

void FUN_101c60300(long *param_1)

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



/* Entry: 101c60338; end: 101c6033f;  */

undefined8 FUN_101c60338(void)

{
  return 0x1b;
}



/* Entry: 101c60340; end: 101c60473;  */

void FUN_101c60340(undefined8 *param_1)

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
  puVar1 = &UNK_11045ef38;
  func_0x000107c613fc(&UNK_11045ef38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c60514;
  func_0x00010058fa64(FUN_101c60514,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c60474; end: 101c604a3;  */

undefined ** FUN_101c60474(void)

{
  return &PTR_DAT_113067030;
}



/* Entry: 101c604a4; end: 101c604c3;  */

void FUN_101c604a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127fdd00);
  return;
}



/* Entry: 101c604c4; end: 101c60513;  */

undefined1  [16] FUN_101c604c4(void)

{
  return ZEXT816(0x11045ee70);
}



/* Entry: 101c60514; end: 101c6053b;  */

void FUN_101c60514(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101c6053c; end: 101c6053f;  */

void FUN_101c6053c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c60540; end: 101c6062f;  */

/* WARNING: Possible PIC construction at 0x000101c605f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c60600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c60610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c60604) */
/* WARNING: Removing unreachable block (ram,0x000101c605f4) */
/* WARNING: Removing unreachable block (ram,0x000101c60614) */

void FUN_101c60540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11045efc0;
  func_0x000107c613fc(&UNK_11045efc0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112e0ce48;
  func_0x0001000285a8(0x112e0ce48,&UNK_10d9e7200);
  func_0x000107c613fc();
  pcVar3 = FUN_101c609e0;
  func_0x0001000841fc(FUN_101c609e0,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9e71d0,0x28,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c60630; end: 101c6064f;  */

/* WARNING: Possible PIC construction at 0x000101c605f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c60600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c60610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c60604) */
/* WARNING: Removing unreachable block (ram,0x000101c605f4) */
/* WARNING: Removing unreachable block (ram,0x000101c60614) */

void FUN_101c60630(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_11045efc0;
  func_0x000107c613fc(&UNK_11045efc0,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e0ce48;
  func_0x0001000285a8(0x112e0ce48,&UNK_10d9e7200);
  func_0x000107c613fc();
  pcVar8 = FUN_101c609e0;
  func_0x0001000841fc(FUN_101c609e0,puVar6,uVar7);
  func_0x000100084214(&UNK_10d9e71d0,0x28,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c60650; end: 101c60993;  */

void FUN_101c60650(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e0ce50,&UNK_10d9e7208);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e0ce58,&UNK_10d9e7210);
  puVar2 = &UNK_11045efe8;
  func_0x000107c613fc(&UNK_11045efe8,0x48,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x101c609f0;
  func_0x0001000823a8(0x101c609f0,puVar2);
  func_0x000100082720("SCUberAvatarEntryPointWrapperServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101c60300;
  func_0x0001000823a8(FUN_101c60300,0);
  pcVar4 = "SCUberAvatarScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUberAvatarScopedServicesCleanupRelayServiceProvider",0x35,2);
  FUN_101c61ca8();
  func_0x000100082720("UberAvatarScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e0ce60,&UNK_10d9e7220);
  puVar2 = &UNK_11045f010;
  func_0x000107c613fc(&UNK_11045f010,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101c60a04;
  func_0x0001000823a8(0x101c60a04,puVar2);
  func_0x000100082720("SCUberAvatarScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e0cde0,&UNK_10d9e6fd0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101c60a10;
  func_0x0001000823a8(0x101c60a10,uVar5);
  func_0x000100082720("SCUberAvatarScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e0cdd0,&UNK_10d9e6fc0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101c60a18;
  func_0x0001000823a8(0x101c60a18,uVar6);
  func_0x000100082720("SCUberAvatarScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11045f038;
  func_0x000107c613fc(&UNK_11045f038,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101c60a20;
  func_0x0001000823a8(0x101c60a20,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCUberAvatarScopeEntryPointProvider",0x23,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101c60994; end: 101c609df;  */

void FUN_101c60994(void)

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



/* Entry: 101c609e0; end: 101c60a27;  */

void FUN_101c609e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e0ce50,&UNK_10d9e7208);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e0ce58,&UNK_10d9e7210);
  puVar4 = &UNK_11045efe8;
  func_0x000107c613fc(&UNK_11045efe8,0x48,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar5 = 0x101c609f0;
  func_0x0001000823a8(0x101c609f0,puVar4);
  func_0x000100082720("SCUberAvatarEntryPointWrapperServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_101c60300;
  func_0x0001000823a8(FUN_101c60300,0);
  pcVar7 = "SCUberAvatarScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUberAvatarScopedServicesCleanupRelayServiceProvider",0x35,2);
  FUN_101c61ca8();
  func_0x000100082720("UberAvatarScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e0ce60,&UNK_10d9e7220);
  puVar4 = &UNK_11045f010;
  func_0x000107c613fc(&UNK_11045f010,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 **)(puVar4 + 0x18) = puVar3;
  *(code **)(puVar4 + 0x20) = pcVar6;
  *(char **)(puVar4 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101c60a04;
  func_0x0001000823a8(0x101c60a04,puVar4);
  func_0x000100082720("SCUberAvatarScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e0cde0,&UNK_10d9e6fd0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101c60a10;
  func_0x0001000823a8(0x101c60a10,uVar8);
  func_0x000100082720("SCUberAvatarScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e0cdd0,&UNK_10d9e6fc0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101c60a18;
  func_0x0001000823a8(0x101c60a18,uVar9);
  func_0x000100082720("SCUberAvatarScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_11045f038;
  func_0x000107c613fc(&UNK_11045f038,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(code **)(puVar4 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x101c60a20;
  func_0x0001000823a8(0x101c60a20,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCUberAvatarScopeEntryPointProvider",0x23,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101c60a28; end: 101c6123b;  */

void FUN_101c60a28(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_101c613b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a8ce0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x7461764172656275;
  func_0x000107c5fadc(0x7461764172656275,0xef65706f63537261);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 101c6123c; end: 101c612a7;  */

void FUN_101c6123c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c612a8; end: 101c612af;  */

undefined8 FUN_101c612a8(void)

{
  return 0x1b;
}



/* Entry: 101c612b0; end: 101c61333;  */

void FUN_101c612b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101c613f4,param_2,FUN_101c613f8,param_2,FUN_101c61420,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101c61334; end: 101c61383;  */

undefined8 FUN_101c61334(void)

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



/* Entry: 101c61384; end: 101c613b3;  */

void FUN_101c61384(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11045f050;
  return;
}



/* Entry: 101c613b4; end: 101c613d3;  */

void FUN_101c613b4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0ced0);
  return;
}



/* Entry: 101c613d4; end: 101c613f7;  */

undefined1  [16] FUN_101c613d4(void)

{
  return ZEXT816(0x11045f090);
}



/* Entry: 101c613f8; end: 101c6141f;  */

void FUN_101c613f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c61420; end: 101c61427;  */

undefined8 FUN_101c61420(void)

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



/* Entry: 101c61428; end: 101c61463;  */

void FUN_101c61428(undefined8 *param_1,undefined8 param_2)

{
  FUN_101c61464();
  func_0x0001000a7f38("SCUberAvatarScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101c61464; end: 101c6164f;  */

void FUN_101c61464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dd70;
  ppuVar4 = &PTR_DAT_113067030;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e0cf60;
  func_0x0001000285a8(0x112e0cf60,&UNK_10d9e7360);
  func_0x0001000a6ee8(&UNK_11045f090,"SCUberAvatarEntryPointWrapperScopeInitializationPluginKey",
                      0x39,2,FUN_101c616c4,param_1,uVar2,&UNK_11045f090,&PTR_DAT_112e0ce68);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11045f0e0;
  func_0x000107c613fc(&UNK_11045f0e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11045eeb0,"SCUberAvatarScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_101c61774,puVar3,uVar2,&UNK_11045eeb0,&PTR_DAT_112e0cde8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11045f108;
  func_0x000107c613fc(&UNK_11045f108,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11045f2f0,"UberAvatarScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_101c6177c,puVar3,uVar2,&UNK_11045f2f0,&PTR_DAT_112e0cff0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e0cf68;
  func_0x0001000285a8(0x112e0cf68,&UNK_10d9e7368);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101c61650; end: 101c616c3;  */

void FUN_101c61650(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101c617f0;
  func_0x0001000823a8(0x101c617f0,param_3);
  func_0x000100082720("SCUberAvatarEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c616c4; end: 101c616cb;  */

void FUN_101c616c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101c617f0;
  func_0x0001000823a8();
  func_0x000100082720("SCUberAvatarEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c616cc; end: 101c61773;  */

void FUN_101c616cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045f130;
  func_0x000107c613fc(&UNK_11045f130,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101c617e8;
  func_0x0001000823a8(FUN_101c617e8,puVar1);
  func_0x000100082720("SCUberAvatarScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101c61774; end: 101c6177b;  */

void FUN_101c61774(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11045f130;
  func_0x000107c613fc(&UNK_11045f130,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101c617e8;
  func_0x0001000823a8(FUN_101c617e8,puVar3);
  func_0x000100082720("SCUberAvatarScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101c6177c; end: 101c617bb;  */

void FUN_101c6177c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101c61d8c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("UberAvatarScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c617bc; end: 101c617e7;  */

void FUN_101c617bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c617e8; end: 101c617f7;  */

void FUN_101c617e8(undefined8 *param_1)

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
  puVar1 = &UNK_11045ef38;
  func_0x000107c613fc(&UNK_11045ef38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c60514;
  func_0x00010058fa64(FUN_101c60514,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c617f8; end: 101c6187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c617f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101c61bb8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e0cf70) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e0cf78) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c61880);
  (*pcVar1)();
}



/* Entry: 101c61880; end: 101c618df; -[_TtC26UberAvatarScopeGraphBridge41UberAvatarScopeGraphBridgeSaberEntryPoint init] */

void FUN_101c61880(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UberAvatarScopeGraphBridge.UberAvatarScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c618ac);
  (*pcVar1)();
}



/* Entry: 101c618e0; end: 101c61917; -[_TtC26UberAvatarScopeGraphBridge41UberAvatarScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c618fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c61900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c618e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0cf70));
  return;
}



/* Entry: 101c61918; end: 101c6193f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c61918(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e0cf78),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e0cf70));
  return;
}



/* Entry: 101c61940; end: 101c6195f;  */

void FUN_101c61940(void)

{
  func_0x000107c61168(&PTR_PTR_1127fddc0);
  return;
}



/* Entry: 101c61960; end: 101c619e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c61960(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0cfa8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e0cfb0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c619e8);
  (*pcVar2)();
}



/* Entry: 101c619e8; end: 101c61acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c619e8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0cfa8);
  *(undefined **)(unaff_x20 + _DAT_112e0cfa8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0cfb0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e0cfb0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11045f250;
  func_0x000107c613fc(&UNK_11045f250,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101c61ad4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101c61ad0; end: 101c61adb;  */

void FUN_101c61ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101c61adc; end: 101c61b3b; -[_TtC26UberAvatarScopeGraphBridge41SCUberAvatarScopedServicesSaberEntryPoint init] */

void FUN_101c61adc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UberAvatarScopeGraphBridge.SCUberAvatarScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c61b08);
  (*pcVar1)();
}



/* Entry: 101c61b3c; end: 101c61b73; -[_TtC26UberAvatarScopeGraphBridge41SCUberAvatarScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c61b3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0cfb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0cfa8));
  return;
}



/* Entry: 101c61b74; end: 101c61b77;  */

void FUN_101c61b74(void)

{
  return;
}



/* Entry: 101c61b78; end: 101c61b97;  */

void FUN_101c61b78(void)

{
  FUN_101c619e8();
  return;
}



/* Entry: 101c61b98; end: 101c61bb7;  */

void FUN_101c61b98(void)

{
  func_0x000107c61168(&PTR_PTR_1127fde88);
  return;
}



/* Entry: 101c61bb8; end: 101c61c87;  */

undefined8 FUN_101c61bb8(void)

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
  
  func_0x000107c61428(0x112e0cfe0,&uStack_40,0x20,0);
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
    FUN_101c61c88();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101c61c88; end: 101c61ca7;  */

void FUN_101c61c88(void)

{
  func_0x000107c61168(&PTR_PTR_1127fdf50);
  return;
}



/* Entry: 101c61ca8; end: 101c61d13;  */

void FUN_101c61ca8(void)

{
  func_0x0001000285a8(0x112e0cfe8,&UNK_10d9e7418);
  func_0x0001000823a8(0x101c61ce8,0);
  return;
}



/* Entry: 101c61d14; end: 101c61d4f; -[_TtC26UberAvatarScopeGraphBridge34UberAvatarScopeGraphBridgeServices init] */

void FUN_101c61d14(undefined8 param_1)

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



/* Entry: 101c61d50; end: 101c61d83;  */

void FUN_101c61d50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c61d84; end: 101c61d8b;  */

undefined8 FUN_101c61d84(void)

{
  return 0x1b;
}



/* Entry: 101c61d8c; end: 101c61f03;  */

void FUN_101c61d8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045f298;
  func_0x000107c613fc(&UNK_11045f298,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101c61f04,puVar1);
  return;
}



/* Entry: 101c61f04; end: 101c61f0b;  */

void FUN_101c61f04(undefined8 *param_1)

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
  func_0x000107c61428(0x112e0cfe0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e0cfe0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11045f330;
  func_0x000107c613fc(&UNK_11045f330,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101c61fb8;
  func_0x00010058fa64(0x101c61fb8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


