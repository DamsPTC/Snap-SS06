/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e0a5d0; end: 100e0a697;  */

void FUN_100e0a5d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = param_1;
  func_0x000107c3f37c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c40808();
    func_0x000107c61170(lVar2);
    if (0 < lVar3) {
      func_0x000100e0b504(param_1,param_3);
      uVar4 = *(undefined8 *)(param_4 + 0x30);
      uStack_70 = (undefined4)param_3;
      uStack_68 = param_5;
      uStack_60 = param_6;
      func_0x000107c6157c(uVar4);
      func_0x000100075034(FUN_100e0ab28,auStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0a698);
  (*pcVar1)();
}



/* Entry: 100e0a698; end: 100e0a73f;  */

void FUN_100e0a698(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (((*(long *)(lVar4 + 0x10) != 0) &&
      (uVar1 = param_2, uVar2 = param_2, func_0x000100e0a860(), (uVar2 & 1) != 0)) &&
     (*(long *)(*(long *)(lVar4 + 0x38) + uVar1 * 8) == param_3)) {
    func_0x000107c6157c(param_4);
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    lVar3 = *param_1;
    FUN_100e049e8(param_4,param_2,lVar4);
    *param_1 = lVar3;
  }
  return;
}



/* Entry: 100e0a740; end: 100e0a783;  */

void FUN_100e0a740(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e0a784; end: 100e0a787;  */

void FUN_100e0a784(long param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_a0);
  if (lStack_88 == 0) {
    FUN_100e09384(auStack_a0);
  }
  else {
    FUN_100e093cc(auStack_a0,auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    FUN_100e01758();
    lVar7 = 0;
    uVar4 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar4 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(param_1 + 0x40);
    while( true ) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
        uVar5 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar3 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar7 << 6;
        uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + uVar3 * 4);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar3 * 8);
        func_0x000107c6157c(uVar6);
        FUN_100e093e4(uVar5,uVar6);
        func_0x000107c61574(uVar6);
        func_0x000107c61574(uVar5);
      }
      bVar2 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e09950);
        (*pcVar1)();
      }
      if ((long)(uVar4 + 0x3f >> 6) <= lVar7) break;
      uVar8 = ((ulong *)(param_1 + 0x40))[lVar7];
    }
    func_0x000107c61574(param_1);
    func_0x0001000834e4(auStack_78);
  }
  return;
}



/* Entry: 100e0a788; end: 100e0a8b7;  */

undefined8 FUN_100e0a788(undefined4 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(&uStack_38,0x100e0abb4,auStack_50,&UNK_110354d10);
  func_0x000107c61574(uVar1);
  return uStack_38;
}



/* Entry: 100e0a8b8; end: 100e0a947;  */

void FUN_100e0a8b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100e09950(param_1,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100e0a948; end: 100e0a97b;  */

void FUN_100e0a948(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60684(uVar1,param_1,4);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(int *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 4) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100e0a97c; end: 100e0aa43;  */

void FUN_100e0a97c(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(int *)(*(long *)(unaff_x20 + 0x30) + param_2 * 4) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100e0aa44; end: 100e0aa7b;  */

void FUN_100e0aa44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100e09fb8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 100e0aa7c; end: 100e0aaa3;  */

void FUN_100e0aa7c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    ppuVar3 = &puStack_80;
    ppuVar5 = &puStack_80;
    pcStack_60 = FUN_100e0a308;
    puStack_58 = (undefined *)0x0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)&UNK_100b61264;
    puStack_68 = &UNK_110354630;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = &UNK_110354668;
    func_0x000107c613fc(&UNK_110354668,0x1c,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar6;
    *(undefined4 *)(puVar4 + 0x18) = uVar1;
    pcStack_60 = FUN_100e0ab44;
    puStack_80 = puVar2;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_100e0a37c;
    puStack_68 = &UNK_110354680;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c4c6bc(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100e0aaa4; end: 100e0ab03;  */

void FUN_100e0aaa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d38420 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae758;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d38420 = puVar1;
  return;
}



/* Entry: 100e0ab04; end: 100e0ab27;  */

void FUN_100e0ab04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined4 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar6 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      pcStack_88 = FUN_100e0a5cc;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_100b61264;
      puStack_90 = &UNK_1103545b8;
      ppuVar7 = &puStack_a8;
      func_0x000107c60bc4(ppuVar7);
      puVar8 = &UNK_1103545f0;
      func_0x000107c613fc(&UNK_1103545f0,0x38,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar2;
      *(undefined4 *)(puVar8 + 0x18) = uVar4;
      *(long *)(puVar8 + 0x20) = lVar6;
      *(undefined8 *)(puVar8 + 0x28) = uVar1;
      *(undefined8 *)(puVar8 + 0x30) = uVar3;
      pcStack_88 = (code *)0x100e0ab14;
      puStack_a8 = puVar5;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100e0a37c;
      puStack_90 = &UNK_110354608;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar5 = puStack_80;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(lVar6);
      func_0x000107c6157c(uVar1);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c4c6bc(param_1);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(lVar6);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 100e0ab28; end: 100e0ab43;  */

void FUN_100e0ab28(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100e0a698(param_1,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100e0ab44; end: 100e0ab77;  */

void FUN_100e0ab44(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  lVar3 = param_1;
  func_0x000107c3f37c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c40808();
    func_0x000107c61170(lVar3);
    if (0 < lVar4) {
      func_0x000100e0b504(param_1,uVar1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e0a37c);
  (*pcVar2)();
}



/* Entry: 100e0ab78; end: 100e0abdb;  */

void FUN_100e0ab78(void)

{
  func_0x000100e0aae8();
  return;
}



/* Entry: 100e0abdc; end: 100e0ae9b;  */

void FUN_100e0abdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d38428,&UNK_10d902100);
  puVar1 = &UNK_1103546c0;
  func_0x000107c613fc(&UNK_1103546c0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_100e0ae9c,puVar1);
  return;
}



/* Entry: 100e0ae9c; end: 100e0aebf;  */

void FUN_100e0ae9c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar10 = &puStack_80;
  puVar7 = &UNK_110354708;
  func_0x000107c613fc(&UNK_110354708,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  func_0x0001000285a8(0x112d38430,&UNK_10d902138);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  pcVar6 = FUN_100e0b2d0;
  func_0x0001000bdd8c(FUN_100e0b2d0,puVar7);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&lStack_70);
  lVar11 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar11 != 0) {
    func_0x000100083b20(&uStack_78);
    uVar8 = uStack_78;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    lVar9 = 0;
    func_0x000100e0a928();
    func_0x000107c613fc();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100e0712c();
    puStack_80 = puVar7;
    func_0x0001000285a8(0x112d38338,&UNK_10d902070);
    func_0x000107c613fc();
    func_0x00010006c248();
    *(undefined ***)(lVar9 + 0x30) = ppuVar10;
    *(code **)(lVar9 + 0x10) = pcVar6;
    *(undefined8 *)(lVar9 + 0x18) = uStack_68;
    *(long *)(lVar9 + 0x20) = lVar11;
    lVar11 = 0;
    func_0x000100e0b6a4();
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x10) = uVar8;
    *(long *)(lVar9 + 0x28) = lVar11;
    *param_1 = lVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e0ae9c);
  (*pcVar6)();
}



/* Entry: 100e0aec0; end: 100e0b2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0aec0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  func_0x000100083b20(&lStack_70);
  lVar2 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0b2d0);
    (*pcVar1)();
  }
  func_0x000100083b20(&uStack_78);
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&lStack_80);
  func_0x000100083b20(&lStack_88);
  func_0x000100083b20(&uStack_90);
  uVar3 = uStack_90;
  func_0x000107c43a70();
  func_0x000107c61180();
  func_0x000107c61170(uStack_90);
  lVar5 = lStack_80;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar4 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lStack_88 + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = *(long *)(lStack_68 + _DAT_112fdf5b8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        uVar9 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010ef119e0);
        lVar7 = lVar5;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        puVar8 = PTR_PTR_1126ae728;
        func_0x000107c61168();
        func_0x000107c3edf4();
        func_0x000107c61180();
        uVar9 = 0xd000000000000018;
        func_0x000107c5fadc(0xd000000000000018,0x800000010ef11a10);
        puVar10 = puVar8;
        func_0x000107c545b8(puVar8);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar10);
        func_0x000107c57f3c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c59d5c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c5343c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        uVar9 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010ef11a30);
        lVar11 = lVar4;
        func_0x000107c40a28();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        puVar10 = PTR_PTR_1126ae730;
        func_0x000107c610f8();
        func_0x000107c49088();
        uVar12 = 0;
        FUN_100e07238();
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c615f0(lVar6);
        func_0x000107c615f0(lVar2);
        uVar9 = uVar3;
        func_0x000107c61174(uVar3);
        puVar13 = puVar10;
        FUN_100e0146c(puVar10,lVar6,lVar2,uVar3);
        param_1[3] = uVar12;
        param_1[4] = &PTR_DAT_110354350;
        func_0x000107c61170(lStack_68);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lStack_80);
        func_0x000107c61170(lStack_88);
        func_0x000107c61170(uVar9);
        *param_1 = puVar13;
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar7);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar8);
        return;
      }
      func_0x000107c615e8(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(lStack_68);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(uVar3);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 100e0b2d0; end: 100e0b2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0b2d0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&lStack_70);
  lVar2 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0b2d0);
    (*pcVar1)();
  }
  func_0x000100083b20(&uStack_78);
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&lStack_80);
  func_0x000100083b20(&lStack_88);
  func_0x000100083b20(&uStack_90);
  uVar3 = uStack_90;
  func_0x000107c43a70();
  func_0x000107c61180();
  func_0x000107c61170(uStack_90);
  lVar5 = lStack_80;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar4 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lStack_88 + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = *(long *)(lStack_68 + _DAT_112fdf5b8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        uVar9 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010ef119e0);
        lVar7 = lVar5;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        puVar8 = PTR_PTR_1126ae728;
        func_0x000107c61168();
        func_0x000107c3edf4();
        func_0x000107c61180();
        uVar9 = 0xd000000000000018;
        func_0x000107c5fadc(0xd000000000000018,0x800000010ef11a10);
        puVar10 = puVar8;
        func_0x000107c545b8(puVar8);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar10);
        func_0x000107c57f3c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c59d5c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c5343c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        uVar9 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010ef11a30);
        lVar11 = lVar4;
        func_0x000107c40a28();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        puVar10 = PTR_PTR_1126ae730;
        func_0x000107c610f8();
        func_0x000107c49088();
        uVar12 = 0;
        FUN_100e07238();
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c615f0(lVar6);
        func_0x000107c615f0(lVar2);
        uVar9 = uVar3;
        func_0x000107c61174(uVar3);
        puVar13 = puVar10;
        FUN_100e0146c(puVar10,lVar6,lVar2,uVar3);
        param_1[3] = uVar12;
        param_1[4] = &PTR_DAT_110354350;
        func_0x000107c61170(lStack_68);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lStack_80);
        func_0x000107c61170(lStack_88);
        func_0x000107c61170(uVar9);
        *param_1 = puVar13;
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar7);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar8);
        return;
      }
      func_0x000107c615e8(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(lStack_68);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(uVar3);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 100e0b2e0; end: 100e0b67f;  */

/* WARNING: Possible PIC construction at 0x000100e0b380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0b470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0b480) */
/* WARNING: Removing unreachable block (ram,0x000100e0b4b8) */
/* WARNING: Removing unreachable block (ram,0x000100e0b4a0) */
/* WARNING: Removing unreachable block (ram,0x000100e0b61c) */
/* WARNING: Removing unreachable block (ram,0x000100e0b604) */
/* WARNING: Removing unreachable block (ram,0x000100e0b5dc) */
/* WARNING: Removing unreachable block (ram,0x000100e0b5a8) */
/* WARNING: Removing unreachable block (ram,0x000100e0b5b0) */
/* WARNING: Removing unreachable block (ram,0x000100e0b648) */
/* WARNING: Removing unreachable block (ram,0x000100e0b5c4) */
/* WARNING: Removing unreachable block (ram,0x000100e0b44c) */
/* WARNING: Removing unreachable block (ram,0x000100e0b430) */
/* WARNING: Removing unreachable block (ram,0x000100e0b48c) */
/* WARNING: Removing unreachable block (ram,0x000100e0b43c) */
/* WARNING: Removing unreachable block (ram,0x000100e0b3a4) */
/* WARNING: Removing unreachable block (ram,0x000100e0b46c) */
/* WARNING: Removing unreachable block (ram,0x000100e0b3a8) */
/* WARNING: Removing unreachable block (ram,0x000100e0b478) */
/* WARNING: Removing unreachable block (ram,0x000100e0b3c4) */
/* WARNING: Removing unreachable block (ram,0x000100e0b384) */
/* WARNING: Removing unreachable block (ram,0x000100e0b474) */

void FUN_100e0b2e0(int param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0xd00000000000001b;
  if (param_1 == 1) {
    pcVar5 = "BILLBOARD_RANKING_CACHE";
    uVar4 = 0xd000000000000017;
LAB_100e0b354:
    pcVar5 = pcVar5 + -0x20;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar4,(ulong)pcVar5 | 0x8000000000000000);
      goto code_r0x000107c6142c;
    }
    func_0x000107c6142c((ulong)pcVar5 | 0x8000000000000000);
  }
  else {
    if (param_1 == 3) {
      pcVar5 = "BILLBOARD_PAC_RANKING_CACHE";
      goto LAB_100e0b354;
    }
    if (param_1 == 2) {
      pcVar5 = "BILLBOARD_FST_RANKING_CACHE";
      goto LAB_100e0b354;
    }
  }
  lVar2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  if (param_2 == 1) {
    pcVar5 = "BILLBOARD_RANKING_CACHE";
  }
  else if (param_2 == 3) {
    pcVar5 = "BILLBOARD_PAC_RANKING_CACHE";
  }
  else {
    if (param_2 != 2) {
      return;
    }
    pcVar5 = "BILLBOARD_FST_RANKING_CACHE";
  }
  pcVar5 = pcVar5 + -0x20;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3f37c();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0b680);
      (*pcVar1)();
    }
    func_0x000107c40808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)((ulong)pcVar5 | 0x8000000000000000);
  return;
}



/* Entry: 100e0b680; end: 100e0b6c3;  */

void FUN_100e0b680(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e0b6c4; end: 100e0b7b7;  */

void FUN_100e0b6c4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_40;
  ppuVar2 = &puStack_40;
  ppuVar3 = &puStack_40;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100e072f0();
  puStack_40 = puVar4;
  func_0x0001000285a8(0x112d38310,&UNK_10d9021c0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x18) = ppuVar1;
  FUN_100e0e524();
  puVar4 = *ppuVar1;
  puStack_40 = puVar4;
  func_0x0001000285a8(0x112d38318,&UNK_10d902050);
  func_0x000107c613fc();
  func_0x000107c61434(puVar4);
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x20) = ppuVar2;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x0001000285a8(0x112d38320,&UNK_10d9021d0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x28) = ppuVar3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 100e0b7b8; end: 100e0b813;  */

void FUN_100e0b7b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e0b814; end: 100e0b847;  */

void FUN_100e0b814(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100e0b848; end: 100e0b86b;  */

void FUN_100e0b848(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e0b86c; end: 100e0b917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0b86c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112d38770);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c614f0();
    func_0x000107c61440();
    if (lVar2 != 0) {
      func_0x0001000285a8(0x112d38350,&UNK_10d9021e0);
      func_0x000107c61538();
      (**(code **)(lVar2 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100e0b918; end: 100e0b91f;  */

undefined8 FUN_100e0b918(void)

{
  return 0;
}



/* Entry: 100e0b920; end: 100e0b93f;  */

void FUN_100e0b920(void)

{
  func_0x000107c61168(&PTR_PTR_112d38698);
  return;
}



/* Entry: 100e0b940; end: 100e0b94b; -[SCBillboardRankingPrefetchEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0b940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d386f8;
  func_0x000107c61428(param_1 + _DAT_112d386f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e0b94c; end: 100e0b957; -[SCBillboardRankingPrefetchEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0b94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d386f8;
  func_0x000107c61428(param_1 + _DAT_112d386f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e0b958; end: 100e0b963; -[SCBillboardRankingPrefetchEntryPoint billboardGrpcServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0b958(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38700;
  func_0x000107c61428(param_1 + _DAT_112d38700,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e0b964; end: 100e0b9a7;  */

void FUN_100e0b964(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e0b9a8; end: 100e0b9b3; -[SCBillboardRankingPrefetchEntryPoint setBillboardGrpcServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0b9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38700;
  func_0x000107c61428(param_1 + _DAT_112d38700,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e0b9b4; end: 100e0ba07;  */

void FUN_100e0b9b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e0ba08; end: 100e0bb77;  */

/* WARNING: Possible PIC construction at 0x000100e0baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0bb44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0baf8) */
/* WARNING: Removing unreachable block (ram,0x000100e0bb48) */
/* WARNING: Removing unreachable block (ram,0x000100e0bb50) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ba08(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c3e8d8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar1 = 0;
    FUN_100e0b920();
    func_0x000107c613fc();
    *(long *)(lVar1 + 0x10) = unaff_x20;
    lVar2 = *(long *)(unaff_x20 + _DAT_112d38770);
    func_0x000107c61174(unaff_x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar1 = unaff_x20;
    if (lVar2 != 0) {
      func_0x000107c614f0();
      func_0x000107c61440();
      if (lVar2 != 0) {
        func_0x0001000285a8(0x112d38350,&UNK_10d9021e0);
        func_0x000107c61538();
        (**(code **)(lVar2 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e0bb78; end: 100e0bb9f; -[SCBillboardRankingPrefetchEntryPoint begin] */

void FUN_100e0bb78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e0ba08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e0bba0; end: 100e0bbe3; -[SCBillboardRankingPrefetchEntryPoint end] */

void FUN_100e0bba0(undefined8 param_1)

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



/* Entry: 100e0bbe4; end: 100e0bd7b;  */

void FUN_100e0bbe4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10ee550)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010ef11ab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BillboardRankingPrefetchImplementation/SCBillboardRankingPrefetchEntryPoint.swift"
                            ,0x51,2,0x28,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0bd7c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c54();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e0bd7c; end: 100e0be27; -[SCBillboardRankingPrefetchEntryPoint setValue:forIvarName:] */

void FUN_100e0bd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e0bbe4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e0be28; end: 100e0be9b; -[SCBillboardRankingPrefetchEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0be28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d386f8,0);
  func_0x000107c61614(param_1 + _DAT_112d38700,0);
  *(undefined8 *)(param_1 + _DAT_112d38708) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e0be9c; end: 100e0becf;  */

void FUN_100e0be9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e0bed0; end: 100e0bf17; -[SCBillboardRankingPrefetchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0bed0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d386f8);
  func_0x000107c61610(param_1 + _DAT_112d38700);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d38708));
  return;
}



/* Entry: 100e0bf18; end: 100e0bf37;  */

void FUN_100e0bf18(void)

{
  func_0x000107c61168(&PTR_PTR_112798b28);
  return;
}



/* Entry: 100e0bf38; end: 100e0bfd3; -[_TtC30BillboardFeedAwareCircumstance25BillboardFeedAwareRanking init] */

void FUN_100e0bf38(undefined8 param_1)

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



/* Entry: 100e0bfd4; end: 100e0c04b; +[_TtC30BillboardFeedAwareCircumstance25BillboardFeedAwareRanking isEnabled:] */

undefined8 FUN_100e0bfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef11b30);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100e0c04c; end: 100e0c09f;  */

void FUN_100e0c04c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e0c0a0; end: 100e0c0d3;  */

undefined8 FUN_100e0c0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_100e0d510(param_2,param_1,&UNK_1103549c8);
  return param_2;
}



/* Entry: 100e0c0d4; end: 100e0c163;  */

uint FUN_100e0c0d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_100e0c96c(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 100e0c164; end: 100e0c1cb;  */

uint FUN_100e0c164(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined5)param_1[0xb];
  uStack_93 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x5d) >> 0x18);
  uStack_28 = (undefined5)param_2[0xb];
  uStack_23 = (undefined3)((ulong)param_2[0xb] >> 0x28);
  func_0x000100e0cc14(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 100e0c1cc; end: 100e0c1fb;  */

long FUN_100e0c1cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 100e0c1fc; end: 100e0c263;  */

uint FUN_100e0c1fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = *(undefined4 *)(param_1 + 0xc);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = *(undefined4 *)(param_2 + 0xc);
  FUN_100e0c794(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 100e0c264; end: 100e0c2bf;  */

byte FUN_100e0c264(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 100e0c2c0; end: 100e0c307;  */

uint FUN_100e0c2c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_100e0cde4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e0c308; end: 100e0c55b;  */

uint FUN_100e0c308(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c55c);
          (*pcVar1)();
        }
        FUN_100e0e2bc(0,0x112d382a0,&PTR_PTR_1126a5d68);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c4fc);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c500);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c504);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_100e0c424;
LAB_100e0c3f4:
              FUN_100e0c5d0(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_100e0c5d0(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_100e0c3f4;
LAB_100e0c424:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c508);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_100e0c534;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_100e0c534:
  return uVar8 & 1;
}



/* Entry: 100e0c55c; end: 100e0c5cf;  */

uint FUN_100e0c55c(int *param_1,int *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  if (*param_1 == *param_2 && param_1[1] == param_2[1]) {
    uVar6 = *(ulong *)(param_1 + 2);
    uVar5 = *(ulong *)(param_1 + 6);
    uVar10 = *(ulong *)(param_2 + 6);
    if ((uVar6 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == *(long *)(param_2 + 4)) ||
       (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
      if (uVar5 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar6 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar10 >> 0x3e == 0) {
        uVar2 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar2 = uVar10 & 0xffffffffffffff8;
        if ((uVar10 & 0x8000000000000000) != 0) {
          uVar2 = uVar10;
        }
        func_0x000107c60480();
      }
      if (uVar6 == uVar2) {
        if (uVar6 != 0) {
          uVar7 = uVar5 & 0xffffffffffffff8;
          uVar2 = uVar7;
          if ((uVar5 & 0x8000000000000000) != 0) {
            uVar2 = uVar5;
          }
          uVar3 = uVar7 + 0x20;
          if (uVar5 >> 0x3e != 0) {
            uVar3 = uVar2;
          }
          uVar8 = uVar10 & 0xffffffffffffff8;
          uVar2 = uVar8;
          if ((uVar10 & 0x8000000000000000) != 0) {
            uVar2 = uVar10;
          }
          uVar4 = uVar8 + 0x20;
          if (uVar10 >> 0x3e != 0) {
            uVar4 = uVar2;
          }
          if (uVar3 != uVar4) {
            if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c55c);
              (*pcVar1)();
            }
            FUN_100e0e2bc(0,0x112d382a0,&PTR_PTR_1126a5d68);
            if (((uVar10 | uVar5) & 0xc000000000000001) == 0) {
              lVar14 = *(long *)(uVar7 + 0x10);
              lVar15 = *(long *)(uVar8 + 0x10);
              puVar12 = (ulong *)(uVar5 + 0x20);
              puVar13 = (undefined8 *)(uVar10 + 0x20);
              do {
                uVar6 = uVar6 - 1;
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c4fc);
                  (*pcVar1)();
                }
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c500);
                  (*pcVar1)();
                }
                uVar10 = *puVar12;
                uVar9 = *puVar13;
                func_0x000107c61174();
                func_0x000107c61174(uVar9);
                uVar5 = uVar10;
                func_0x000107c60118(uVar10,uVar9);
                uVar11 = (uint)uVar5;
                func_0x000107c61170(uVar10);
                func_0x000107c61170(uVar9);
                if ((uVar5 & 1) == 0) break;
                lVar15 = lVar15 + -1;
                lVar14 = lVar14 + -1;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar6 != 0);
            }
            else {
              lVar14 = 4;
              do {
                uVar6 = uVar6 - 1;
                uVar2 = lVar14 - 4;
                if ((uVar5 & 0xc000000000000001) == 0) {
                  if (*(long *)(uVar7 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c504);
                    (*pcVar1)();
                  }
                  uVar3 = *(ulong *)(uVar5 + lVar14 * 8);
                  func_0x000107c61174();
                  if ((uVar10 & 0xc000000000000001) != 0) goto LAB_100e0c3f4;
LAB_100e0c424:
                  if (*(long *)(uVar8 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0c508);
                    (*pcVar1)();
                  }
                  uVar2 = *(ulong *)(uVar10 + lVar14 * 8);
                  func_0x000107c61174(uVar2);
                }
                else {
                  uVar3 = uVar2;
                  FUN_100e0c5d0(uVar2,uVar5);
                  if ((uVar10 & 0xc000000000000001) == 0) goto LAB_100e0c424;
LAB_100e0c3f4:
                  FUN_100e0c5d0(uVar2,uVar10);
                }
                uVar4 = uVar3;
                func_0x000107c60118(uVar3,uVar2);
                uVar11 = (uint)uVar4;
                func_0x000107c61170(uVar3);
                func_0x000107c61170(uVar2);
              } while (((uVar4 & 1) != 0) && (lVar14 = lVar14 + 1, uVar6 != 0));
            }
            goto LAB_100e0c534;
          }
        }
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
LAB_100e0c534:
      return uVar11 & 1;
    }
  }
  return 0;
}



/* Entry: 100e0c5d0; end: 100e0c793;  */

ulong FUN_100e0c5d0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e0c6b4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e0c6b8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a5d68;
    func_0x000107c61168(PTR_PTR_1126a5d68);
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
    puVar4 = PTR_PTR_1126a5d68;
    func_0x000107c61168(PTR_PTR_1126a5d68);
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
  FUN_100e0e2bc(0,0x112d382a0,&PTR_PTR_1126a5d68);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e0c794);
  (*pcVar2)();
}



/* Entry: 100e0c794; end: 100e0c96b;  */

bool FUN_100e0c794(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return false;
      }
    }
    uVar1 = param_2[7];
    if (param_1[7] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[6];
      if (((uVar2 != param_2[6]) || (param_1[7] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return false;
      }
    }
    FUN_100e0e2bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar1 = param_1[8];
    func_0x000107c60118(uVar1,param_2[8]);
    if ((uVar1 & 1) != 0) {
      uVar1 = param_2[10];
      if (param_1[10] == 0) {
        if (uVar1 != 0) {
          return false;
        }
      }
      else {
        if (uVar1 == 0) {
          return false;
        }
        uVar2 = param_1[9];
        if (((uVar2 != param_2[9]) || (param_1[10] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return false;
        }
      }
      uVar2 = param_1[0xb];
      uVar1 = param_2[0xb];
      if (uVar2 == 0) {
        if (uVar1 == 0) {
LAB_100e0c93c:
          return (int)param_1[0xc] == (int)param_2[0xc];
        }
      }
      else if (uVar1 != 0) {
        FUN_100e0e2bc(0,0x112d38760,&PTR_PTR_1126ae8a8);
        func_0x000107c61174(uVar1);
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c60118();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar1);
        if ((uVar3 & 1) != 0) goto LAB_100e0c93c;
      }
    }
  }
  return false;
}



/* Entry: 100e0c96c; end: 100e0cde3;  */

undefined8 FUN_100e0c96c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_138;
  ulong uStack_130;
  byte bStack_128;
  undefined4 uStack_127;
  undefined3 uStack_123;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  byte bStack_c0;
  undefined4 uStack_bf;
  undefined3 uStack_bb;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined4 uStack_70;
  
  uVar9 = *param_1;
  if ((uVar9 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar9 & 1) == 0))
  {
    return 0;
  }
  uVar9 = param_1[2];
  bVar7 = (byte)param_1[4];
  uVar14 = param_1[5];
  uVar3 = param_1[6];
  uVar13 = param_1[7];
  uVar4 = param_1[8];
  puVar12 = (ulong *)param_1[9];
  bVar8 = (byte)param_2[4];
  uVar1 = param_2[5];
  uVar5 = param_2[6];
  uVar2 = param_2[7];
  uVar6 = param_2[8];
  uVar11 = param_2[9];
  if (*(char *)((long)param_1 + 0x74) == '\x01') {
    if (*(char *)((long)param_2 + 0x74) != '\x01') {
      return 0;
    }
    if ((uVar9 == param_2[2]) && (param_1[3] == param_2[3])) {
      if (((bVar7 ^ bVar8) & 1) != 0) {
        return 0;
      }
    }
    else {
      func_0x000107c605b8();
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      if (((bVar7 ^ bVar8) & 1) != 0) {
        return 0;
      }
    }
    if (((uVar14 != uVar1) || (uVar3 != uVar5)) &&
       (func_0x000107c605b8(uVar14,uVar3,uVar1,uVar5,0), (uVar14 & 1) == 0)) {
      return 0;
    }
    if (uVar4 == 0) {
      if (uVar6 != 0) {
        return 0;
      }
    }
    else {
      if (uVar6 == 0) {
        return 0;
      }
      if (((uVar13 != uVar2) || (uVar4 != uVar6)) &&
         (func_0x000107c605b8(uVar13,uVar4,uVar2,uVar6,0), (uVar13 & 1) == 0)) {
        return 0;
      }
    }
    FUN_100e0e2bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(puVar12,uVar11);
  }
  else {
    uStack_127._0_3_ = (undefined3)*(undefined4 *)((long)param_1 + 0x21);
    uStack_127._3_1_ = (undefined1)*(undefined4 *)((long)param_1 + 0x24);
    uStack_123 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x24) >> 8);
    uStack_f0 = param_1[0xb];
    uStack_f8 = param_1[10];
    uStack_e0 = param_1[0xd];
    uStack_e8 = param_1[0xc];
    uStack_d8 = (undefined4)param_1[0xe];
    if (*(char *)((long)param_2 + 0x74) == '\x01') {
      return 0;
    }
    uStack_bf._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0x21);
    uStack_bf._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x24);
    uStack_bb = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x24) >> 8);
    uStack_88 = param_2[0xb];
    uStack_90 = param_2[10];
    uStack_78 = param_2[0xd];
    uStack_80 = param_2[0xc];
    uStack_70 = (undefined4)param_2[0xe];
    puVar10 = &uStack_138;
    uStack_138 = uVar9;
    uStack_130 = param_1[3];
    bStack_128 = bVar7;
    uStack_120 = uVar14;
    uStack_118 = uVar3;
    uStack_110 = uVar13;
    uStack_108 = uVar4;
    puStack_100 = puVar12;
    uStack_d0 = param_2[2];
    uStack_c8 = param_2[3];
    bStack_c0 = bVar8;
    uStack_b8 = uVar1;
    uStack_b0 = uVar5;
    uStack_a8 = uVar2;
    uStack_a0 = uVar6;
    uStack_98 = uVar11;
    FUN_100e0c794(puVar10,&uStack_d0);
    puVar12 = puVar10;
  }
  if (((((ulong)puVar12 & 1) != 0) && ((int)param_1[0xf] == (int)param_2[0xf])) &&
     (*(int *)((long)param_1 + 0x7c) == *(int *)((long)param_2 + 0x7c))) {
    uVar9 = param_1[0x10];
    uVar14 = param_1[0x12];
    uVar13 = param_2[0x12];
    if ((((uVar9 == param_2[0x10]) && (param_1[0x11] == param_2[0x11])) ||
        (func_0x000107c605b8(), (uVar9 & 1) != 0)) &&
       (FUN_100e0c308(uVar14,uVar13), (uVar14 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 100e0cde4; end: 100e0cedb;  */

uint FUN_100e0cde4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = param_1[2];
  uVar2 = param_2[2];
  if (uVar1 == *param_2 && param_1[1] == param_2[1]) {
    if ((byte)uVar4 != (byte)uVar2) {
      return 0;
    }
  }
  else {
    func_0x000107c605b8();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if ((((byte)uVar4 ^ (byte)uVar2) & 1) != 0) {
      return 0;
    }
  }
  uVar4 = param_1[3];
  if ((uVar4 == param_2[3] && param_1[4] == param_2[4]) || (func_0x000107c605b8(), (uVar4 & 1) != 0)
     ) {
    uVar4 = param_2[6];
    if (param_1[6] == 0) {
      if (uVar4 == 0) goto LAB_100e0ce90;
    }
    else if ((uVar4 != 0) &&
            (((uVar2 = param_1[5], uVar2 == param_2[5] && (param_1[6] == uVar4)) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
LAB_100e0ce90:
      uVar3 = 0;
      FUN_100e0e2bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar4 = param_1[7];
      func_0x000107c60118(uVar4,param_2[7],uVar3);
      return (uint)uVar4 & 1;
    }
  }
  return 0;
}



/* Entry: 100e0cedc; end: 100e0cf77;  */

/* WARNING: Possible PIC construction at 0x000100e0cf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0cf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0cf3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0cf4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0cf40) */
/* WARNING: Removing unreachable block (ram,0x000100e0cf20) */
/* WARNING: Removing unreachable block (ram,0x000100e0cf10) */
/* WARNING: Removing unreachable block (ram,0x000100e0cf50) */
/* WARNING: Removing unreachable block (ram,0x000100e0cf60) */

void FUN_100e0cedc(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x6;
  undefined8 in_stack_00000018;
  char in_stack_00000024;
  
  if (in_stack_00000024 != '\x01') {
    func_0x000107c61174(in_stack_00000018);
    in_x6 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x6);
  return;
}



/* Entry: 100e0cf78; end: 100e0cfe3;  */

/* WARNING: Possible PIC construction at 0x000100e0cf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0cfcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0cf94) */
/* WARNING: Removing unreachable block (ram,0x000100e0cfd0) */

void FUN_100e0cf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100e0cfe4; end: 100e0d343;  */

/* WARNING: Possible PIC construction at 0x000100e0d024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0d03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0d06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e0d07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0d070) */
/* WARNING: Removing unreachable block (ram,0x000100e0d040) */
/* WARNING: Removing unreachable block (ram,0x000100e0d028) */
/* WARNING: Removing unreachable block (ram,0x000100e0d060) */
/* WARNING: Removing unreachable block (ram,0x000100e0d030) */
/* WARNING: Removing unreachable block (ram,0x000100e0d080) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_100e0cfe4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100e0d344; end: 100e0d403;  */

undefined8 * FUN_100e0d344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar14 = param_2[1];
  uVar13 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar14;
  func_0x000107c6142c(uVar13);
  uVar9 = *(undefined4 *)(param_2 + 0xe);
  uVar11 = *(undefined1 *)((long)param_2 + 0x74);
  uVar14 = param_1[2];
  uVar4 = param_1[3];
  uVar13 = param_1[4];
  uVar5 = param_1[5];
  uVar1 = param_1[6];
  uVar6 = param_1[7];
  uVar2 = param_1[8];
  uVar7 = param_1[9];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar3 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar10 = *(undefined4 *)(param_1 + 0xe);
  uVar12 = *(undefined1 *)((long)param_1 + 0x74);
  uVar17 = param_2[2];
  uVar19 = param_2[5];
  uVar18 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar17;
  param_1[5] = uVar19;
  param_1[4] = uVar18;
  uVar17 = param_2[6];
  uVar19 = param_2[9];
  uVar18 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar17;
  param_1[9] = uVar19;
  param_1[8] = uVar18;
  uVar17 = param_2[10];
  uVar19 = param_2[0xd];
  uVar18 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar17;
  param_1[0xd] = uVar19;
  param_1[0xc] = uVar18;
  *(undefined4 *)(param_1 + 0xe) = uVar9;
  *(undefined1 *)((long)param_1 + 0x74) = uVar11;
  FUN_100e0cfe4(uVar14,uVar4,uVar13,uVar5,uVar1,uVar6,uVar2,uVar7,uVar15,uVar16,uVar3,uVar8,uVar10,
                uVar12);
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  func_0x000107c6142c(param_1[0x11]);
  uVar14 = param_1[0x12];
  uVar13 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar13;
  func_0x000107c6142c(uVar14);
  return param_1;
}



/* Entry: 100e0d404; end: 100e0d4bf;  */

int FUN_100e0d404(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e0d4c0; end: 100e0d50f;  */

void FUN_100e0d4c0(undefined8 *param_1)

{
  FUN_100e0cfe4(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                *(undefined4 *)(param_1 + 0xc),*(undefined1 *)((long)param_1 + 100));
  return;
}



/* Entry: 100e0d510; end: 100e0d6eb;  */

undefined8 * FUN_100e0d510(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar4 = param_2[6];
  uVar10 = param_2[7];
  uVar5 = param_2[8];
  uVar11 = param_2[9];
  uVar6 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = *(undefined4 *)(param_2 + 0xc);
  uVar14 = *(undefined1 *)((long)param_2 + 100);
  FUN_100e0cedc(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar13,
                uVar14);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar4;
  param_1[7] = uVar10;
  param_1[8] = uVar5;
  param_1[9] = uVar11;
  param_1[10] = uVar6;
  param_1[0xb] = uVar12;
  *(undefined4 *)(param_1 + 0xc) = uVar13;
  *(undefined1 *)((long)param_1 + 100) = uVar14;
  return param_1;
}



/* Entry: 100e0d6ec; end: 100e0d717;  */

void FUN_100e0d6ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  *(undefined8 *)((long)param_1 + 0x5d) = *(undefined8 *)((long)param_2 + 0x5d);
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 100e0d718; end: 100e0d7a3;  */

undefined8 * FUN_100e0d718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *(undefined4 *)(param_2 + 0xc);
  uVar11 = *(undefined1 *)((long)param_2 + 100);
  uVar13 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar14 = param_1[7];
  uVar16 = param_1[9];
  uVar15 = param_1[8];
  uVar4 = param_1[10];
  uVar8 = param_1[0xb];
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  uVar12 = *(undefined1 *)((long)param_1 + 100);
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  uVar17 = param_2[8];
  uVar19 = param_2[0xb];
  uVar18 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  *(undefined1 *)((long)param_1 + 100) = uVar11;
  FUN_100e0cfe4(uVar13,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar14,uVar15,uVar16,uVar4,uVar8,uVar10,
                uVar12);
  return param_1;
}



/* Entry: 100e0d7a4; end: 100e0d873;  */

int FUN_100e0d7a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x65) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0x19) ^ 0xff;
  if (*(byte *)(param_1 + 0x19) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e0d874; end: 100e0d8b3;  */

undefined8 * FUN_100e0d874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100e0d8b4; end: 100e0d8bf;  */

void FUN_100e0d8b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 100e0d8c0; end: 100e0d8ef;  */

undefined8 * FUN_100e0d8c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 100e0d8f0; end: 100e0d993;  */

int FUN_100e0d8f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e0d994; end: 100e0d9e3;  */

/* WARNING: Possible PIC construction at 0x000100e0d9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0d9cc) */

void FUN_100e0d994(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 100e0d9e4; end: 100e0da87;  */

undefined8 * FUN_100e0d9e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar1 = param_2[8];
  uVar5 = param_2[9];
  param_1[8] = uVar1;
  param_1[9] = uVar5;
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar6);
  return param_1;
}



/* Entry: 100e0da88; end: 100e0db8b;  */

undefined8 * FUN_100e0da88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 100e0db8c; end: 100e0dbb7;  */

void FUN_100e0db8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 100e0dbb8; end: 100e0dc53;  */

undefined8 * FUN_100e0dbb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  func_0x000107c6142c(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  func_0x000107c61170(uVar2);
  param_1[9] = param_2[9];
  func_0x000107c6142c(param_1[10]);
  uVar2 = param_1[0xb];
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  func_0x000107c61170(uVar2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 100e0dc54; end: 100e0dd07;  */

int FUN_100e0dc54(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x19] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e0dd08; end: 100e0dd3b;  */

undefined8 * FUN_100e0dd08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100e0dd3c; end: 100e0dd8f;  */

undefined8 * FUN_100e0dd3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 100e0dd90; end: 100e0ddcb;  */

undefined8 * FUN_100e0dd90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 100e0ddcc; end: 100e0de73;  */

int FUN_100e0ddcc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e0de74; end: 100e0deab;  */

void FUN_100e0de74(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100e0deac; end: 100e0dfc3;  */

undefined8 * FUN_100e0deac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  uVar3 = param_2[7];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 100e0dfc4; end: 100e0dfd7;  */

void FUN_100e0dfc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 100e0dfd8; end: 100e0e043;  */

undefined8 * FUN_100e0dfd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  func_0x000107c6142c(param_1[6]);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 100e0e044; end: 100e0e0eb;  */

int FUN_100e0e044(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e0e0ec; end: 100e0e157;  */

/* WARNING: Possible PIC construction at 0x000100e0e100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0e104) */

void FUN_100e0e0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100e0e158; end: 100e0e1cb;  */

undefined4 * FUN_100e0e158(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100e0e1cc; end: 100e0e1d7;  */

void FUN_100e0e1cc(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 100e0e1d8; end: 100e0e223;  */

undefined8 * FUN_100e0e1d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100e0e224; end: 100e0e2bb;  */

int FUN_100e0e224(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e0e2bc; end: 100e0e2fb;  */

void FUN_100e0e2bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100e0e2fc; end: 100e0e327;  */

long FUN_100e0e2fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100e0e328; end: 100e0e337;  */

undefined1  [16] FUN_100e0e328(void)

{
  return ZEXT816(0x110354cc8);
}



/* Entry: 100e0e338; end: 100e0e383;  */

void FUN_100e0e338(undefined8 param_1)

{
  func_0x0001000285a8(0x112d38768,&UNK_10d902550);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100e0e3ec,param_1);
  return;
}



/* Entry: 100e0e384; end: 100e0e3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0e384(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_100e0e474();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112d38770) = lVar2;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 100e0e3ec; end: 100e0e3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0e3ec(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  FUN_100e0e474();
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112d38770) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  *param_1 = puVar2;
  return;
}



/* Entry: 100e0e3f4; end: 100e0e463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100e0e3f4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112d38770) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}


