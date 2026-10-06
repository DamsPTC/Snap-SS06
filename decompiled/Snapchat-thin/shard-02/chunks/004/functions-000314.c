/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d6d070; end: 101d6d0bb;  */

void FUN_101d6d070(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d6d0bc; end: 101d6d2f7;  */

uint FUN_101d6d0bc(void)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((*(byte *)(unaff_x20 + 0x18) < 0xb &&
       (1 << (ulong)(*(byte *)(unaff_x20 + 0x18) & 0x1f) & 0x605U) != 0) &&
     (*(byte *)(unaff_x20 + 0x19) < 0xb &&
      (1 << (ulong)(*(byte *)(unaff_x20 + 0x19) & 0x1f) & 0x605U) != 0)) {
    uVar3 = 0;
    if ((*(byte *)(unaff_x20 + 0x1a) < 0xb) &&
       ((1 << (ulong)(*(byte *)(unaff_x20 + 0x1a) & 0x1f) & 0x605U) != 0)) {
      uVar3 = 0;
      if ((*(byte *)(unaff_x20 + 0x1b) < 0xb) &&
         ((1 << (ulong)(*(byte *)(unaff_x20 + 0x1b) & 0x1f) & 0x605U) != 0)) {
        uVar3 = 0;
        if ((*(byte *)(unaff_x20 + 0x1c) < 0xb) &&
           ((1 << (ulong)(*(byte *)(unaff_x20 + 0x1c) & 0x1f) & 0x605U) != 0)) {
          uVar3 = 0;
          if ((*(byte *)(unaff_x20 + 0x1d) < 0xb) &&
             ((1 << (ulong)(*(byte *)(unaff_x20 + 0x1d) & 0x1f) & 0x605U) != 0)) {
            uVar3 = 0;
            if ((*(byte *)(unaff_x20 + 0x1e) < 0xb) &&
               ((1 << (ulong)(*(byte *)(unaff_x20 + 0x1e) & 0x1f) & 0x605U) != 0)) {
              uVar3 = 0;
              if ((*(byte *)(unaff_x20 + 0x1f) < 0xb) &&
                 ((1 << (ulong)(*(byte *)(unaff_x20 + 0x1f) & 0x1f) & 0x605U) != 0)) {
                uVar4 = *(ulong *)(unaff_x20 + 0x20);
                if (uVar4 >> 0x3e == 0) {
                  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  uVar5 = uVar4 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar4) {
                    uVar5 = uVar4;
                  }
                  func_0x000107c60480();
                }
                if (uVar5 != 0) {
                  uVar6 = 0;
                  do {
                    if ((uVar4 & 0xc000000000000001) == 0) {
                      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6d2ac);
                        (*pcVar1)();
                      }
                      uVar2 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
                      func_0x000107c6157c();
                    }
                    else {
                      uVar2 = uVar6;
                      func_0x000101d6ad5c(uVar6,uVar4);
                    }
                    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6d294);
                      (*pcVar1)();
                    }
                    uVar7 = uVar6 + 1;
                    if ((10 < *(byte *)(uVar2 + 0x18) ||
                         (1 << (ulong)(*(byte *)(uVar2 + 0x18) & 0x1f) & 0x605U) == 0) ||
                       (10 < *(byte *)(uVar2 + 0x19) ||
                        (1 << (ulong)(*(byte *)(uVar2 + 0x19) & 0x1f) & 0x605U) == 0)) {
                      func_0x000107c61574();
                      uVar3 = 0;
                      goto LAB_101d6d2d8;
                    }
                    func_0x000107c61574();
                    uVar6 = uVar6 + 1;
                  } while (uVar7 != uVar5);
                }
                uVar3 = 0;
                if (*(byte *)(unaff_x20 + 0x28) < 0xb) {
                  uVar3 = 0x605 >> (ulong)(*(byte *)(unaff_x20 + 0x28) & 0x1f);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
LAB_101d6d2d8:
  return uVar3 & 1;
}



/* Entry: 101d6d2f8; end: 101d6d33b;  */

void FUN_101d6d2f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126dea20;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e28b18 = puVar1;
  return;
}



/* Entry: 101d6d33c; end: 101d6d4a3;  */

int FUN_101d6d33c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d6d3b8;
        goto LAB_101d6d39c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d6d39c:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_101d6d3b8:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d6d4a4; end: 101d6d4e3;  */

void FUN_101d6d4a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da11f78;
  func_0x000107c61520(&UNK_10da11f78,&UNK_11047e9b0);
  puRam0000000112e29c98 = puVar1;
  return;
}



/* Entry: 101d6d4e4; end: 101d6d50b;  */

undefined8 FUN_101d6d4e4(ulong param_1)

{
  return *(undefined8 *)(&UNK_10da11fa8 + (param_1 & 0xff) * 8);
}



/* Entry: 101d6d50c; end: 101d6d5b7;  */

void FUN_101d6d50c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d6d5b8; end: 101d6d617; -[SCMemPlatBackupGenerateThumbnailStep init] */

void FUN_101d6d5b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupGenerateThumbnailStepServicesImpl.GenerateThumbnailStep",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6d5e4);
  (*pcVar1)();
}



/* Entry: 101d6d618; end: 101d6d69f; -[SCMemPlatBackupGenerateThumbnailStep .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d6d634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d6d664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d6d684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d6d668) */
/* WARNING: Removing unreachable block (ram,0x000101d6d638) */
/* WARNING: Removing unreachable block (ram,0x000101d6d688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6d618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e29ca0));
  return;
}



/* Entry: 101d6d6a0; end: 101d6dc43;  */

/* WARNING: Removing unreachable block (ram,0x000101d6d78c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d6d6a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e29cd8,&UNK_10da12000);
  uVar7 = 0x18;
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  lVar9 = param_1;
  func_0x000107c42950();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5faec();
  uVar8 = uVar7;
  func_0x000107c61170(lVar9);
  func_0x000107c4188c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar9 = 0;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    func_0x000107c610f8(PTR_PTR_1126d7f28);
    func_0x00010006c00c(lVar3,uVar8);
    lVar9 = lVar3;
    FUN_101d6b26c(lVar3,uVar8);
    func_0x00010006c090(lVar3,uVar8);
    func_0x00010006c090(lVar3,uVar8);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar9 != 0) {
      lVar3 = lVar9;
      func_0x000107c3d868();
      func_0x000107c61180();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        puStack_98 = (undefined *)0x0;
        func_0x000107c5fc50();
        func_0x000107c61170(lVar3);
        if (puStack_98 != (undefined *)0x0) {
          puVar10 = puStack_98;
        }
      }
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e29cc0);
  func_0x0001000d224c(&uStack_68);
  puVar4 = &UNK_11047ead0;
  func_0x000107c613fc(&UNK_11047ead0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11047eaf8;
  func_0x000107c613fc(&UNK_11047eaf8,0x40,7);
  *(long *)(puVar5 + 0x10) = lVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined **)(puVar5 + 0x28) = puVar4;
  *(undefined **)(puVar5 + 0x30) = puVar10;
  *(long *)(puVar5 + 0x38) = lVar1;
  pcStack_78 = FUN_101d6dc44;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_11047eb10;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar10 = puStack_70;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(puVar10);
  func_0x000107c4e524(uStack_68);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(uStack_68);
  uVar7 = *(undefined8 *)(lVar1 + 0x10);
  uVar8 = uVar7;
  func_0x000107c6157c(uVar7);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61170(lVar9);
  func_0x000107c61574(uVar7);
  return uVar8;
}



/* Entry: 101d6dc44; end: 101d6dc53;  */

void FUN_101d6dc44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar12 = *(long *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar4 = &UNK_11047eb48;
  func_0x000107c613fc(&UNK_11047eb48,0x18,7);
  *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
  puVar5 = &uStack_78;
  uStack_78 = uVar1;
  uStack_70 = uVar2;
  func_0x000104888f7c(puVar5);
  func_0x0001000d224c(auStack_90);
  puVar6 = &UNK_11047ead0;
  func_0x000107c613fc(&UNK_11047ead0,0x18,7);
  func_0x000107c61428(lVar12 + 0x10,&uStack_78,0,0);
  lVar7 = lVar12 + 0x10;
  func_0x000107c61618(lVar7);
  func_0x000107c61614(puVar6 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  puVar8 = &UNK_11047eb70;
  func_0x000107c613fc(&UNK_11047eb70,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar11;
  func_0x000107c61434(uVar11);
  uVar11 = 0x112e29d08;
  func_0x0001000285a8(0x112e29d08,&UNK_10da12070);
  uVar9 = auStack_90[0];
  func_0x000100775264(auStack_90[0],1,0x101d7021c,puVar8,uVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c615e8(auStack_90[0]);
  func_0x000107c61574(puVar8);
  puVar6 = &UNK_11047eb98;
  func_0x000107c613fc(&UNK_11047eb98,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(long *)(puVar6 + 0x18) = lVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(lVar12);
  func_0x000107c61434(uVar2);
  uVar10 = 0;
  func_0x0001048898b8(0,1,0x101d70234,puVar6,uVar11);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11047ebc0;
  func_0x000107c613fc(&UNK_11047ebc0,0x30,7);
  *(long *)(puVar6 + 0x10) = lVar12;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar3;
  func_0x000107c6157c(lVar12);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar3);
  uVar11 = 0;
  func_0x00010488a220(0,1,0x101d70250,puVar6);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11047ead0;
  func_0x000107c613fc(&UNK_11047ead0,0x18,7);
  func_0x000107c61428(lVar12 + 0x10,auStack_90,0,0);
  lVar12 = lVar12 + 0x10;
  func_0x000107c61618(lVar12);
  func_0x000107c61614(puVar6 + 0x10,lVar12);
  func_0x000107c61170(lVar12);
  puVar8 = &UNK_11047ebe8;
  func_0x000107c613fc(&UNK_11047ebe8,0x38,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined **)(puVar8 + 0x28) = puVar4;
  *(undefined8 *)(puVar8 + 0x30) = uVar3;
  func_0x000107c6157c(puVar4);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar6);
  func_0x000104888fc0(0,1,FUN_101d7026c,puVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 101d6dc54; end: 101d6dd1f;  */

void FUN_101d6dc54(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  puVar2 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_101d7039c();
    func_0x000107c613f8(&UNK_11047ee08,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    FUN_101d6dd20(uVar3,uVar1,param_4);
    func_0x000107c61170(puVar2);
    if (unaff_x21 == 0) {
      *param_1 = uVar3;
    }
  }
  return;
}



/* Entry: 101d6dd20; end: 101d6dfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d6dd20(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 *puStack_38;
  
  puVar2 = param_1;
  func_0x0001000d224c(&puStack_38);
  if (puStack_38 == (undefined1 *)0x0) {
    FUN_101d7039c();
    func_0x000107c613f8(&UNK_11047ee08,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    if (*(long *)(param_3 + 0x10) == 0) {
      func_0x000107c5fadc(param_1,param_2);
      puVar2 = puStack_38;
      func_0x000107c431bc();
      func_0x000107c61180();
      puVar4 = param_1;
      func_0x000107c61170();
      if (puVar2 != (undefined1 *)0x0) {
        puVar4 = puStack_38;
        func_0x000107c431cc();
        func_0x000107c61180();
        uVar1 = 0;
        FUN_101d7027c(0,0x112e28b08,&PTR_PTR_1126bc7d8);
        puVar3 = puVar4;
        func_0x000107c5fc54(puVar4,uVar1);
        func_0x000107c61170(puVar4);
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar4 = *(undefined1 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined1 *)0x7fffffffffffffff < puVar3) {
            puVar4 = puVar3;
          }
          func_0x000107c60480();
        }
        if (puVar4 != (undefined1 *)0x0) {
          func_0x000107c615e8(puStack_38);
          func_0x000107c61170(puVar2);
          return puVar3;
        }
        puVar4 = puVar3;
        func_0x000107c6142c();
        FUN_101d7039c();
        func_0x000107c613f8(&UNK_11047ee08,puVar4,0,0);
        *puVar4 = 2;
        func_0x000107c61654();
        func_0x000107c615e8(puStack_38);
        func_0x000107c61170(puVar2);
        return puVar3;
      }
      FUN_101d7039c();
      func_0x000107c613f8(&UNK_11047ee08,puVar4,0,0);
      uVar5 = 1;
      param_2 = param_1;
    }
    else {
      func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
      puVar2 = puStack_38;
      func_0x000107c431d0();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      uVar1 = 0;
      FUN_101d7027c(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      param_2 = puVar2;
      func_0x000107c5fc54(puVar2,uVar1);
      func_0x000107c61170(puVar2);
      if ((ulong)param_2 >> 0x3e == 0) {
        puVar2 = *(undefined1 **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar2 = (undefined1 *)((ulong)param_2 & 0xffffffffffffff8);
        if ((undefined1 *)0x7fffffffffffffff < param_2) {
          puVar2 = param_2;
        }
        func_0x000107c60480();
      }
      if (puVar2 != (undefined1 *)0x0) {
        func_0x000107c615e8(puStack_38);
        return param_2;
      }
      puVar4 = param_2;
      func_0x000107c6142c();
      FUN_101d7039c();
      func_0x000107c613f8(&UNK_11047ee08,puVar4,0,0);
      uVar5 = 2;
    }
    *puVar4 = uVar5;
    func_0x000107c61654();
    func_0x000107c615e8(puStack_38);
  }
  return param_2;
}



/* Entry: 101d6dfb8; end: 101d6e26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101d6dfb8(ulong *param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar13 = *param_1;
  uVar15 = uVar13 & 0xffffffffffffff8;
  uVar11 = param_2;
  if (uVar13 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar15 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar14 = uVar15;
    if (0x7fffffffffffffff < uVar13) {
      uVar14 = uVar13;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar14 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6e118);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar13 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
          uVar10 = uVar11;
        }
        else {
          uVar3 = uVar5;
          uVar10 = uVar13;
          FUN_101d6ffd4();
        }
        uVar1 = uVar5 + 1;
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6e114);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (uVar4 != 0) break;
        func_0x000107c61170(uVar3);
        uVar11 = uVar10;
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar14) goto LAB_101d6e140;
      }
      uVar5 = uVar4;
      func_0x000107c5faec();
      uVar11 = uVar10;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        uVar11 = *(long *)(puVar8 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar11,1,puVar8);
      }
      uVar4 = *(ulong *)(puVar7 + 0x10);
      uVar3 = uVar4 + 1;
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        uVar11 = uVar3;
        func_0x0001000d182c(puVar8,uVar3,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar3;
      *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar10;
      uVar5 = uVar1;
    } while (uVar1 != uVar14);
  }
LAB_101d6e140:
  func_0x000107c61428(param_2 + 0x10,auStack_78,1,0);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61434(puVar8);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  lVar9 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    uVar12 = *(undefined8 *)(lVar9 + _DAT_112e29cc8);
    func_0x000107c6157c(uVar12);
    func_0x000107c61170(lVar9);
    func_0x0001000d224c(&uStack_a8);
    func_0x000107c61574(uVar12);
    uVar12 = uStack_a8;
    func_0x000107c614f0(uStack_a8);
    (**(code **)(lStack_a0 + 0x18))(param_4,param_5,puVar8,uVar12,lStack_a0);
    func_0x000107c6142c(puVar8);
    func_0x000107c615e8(uStack_a8);
  }
  func_0x000107c61428(param_3 + 0x10,&uStack_a8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar13 = 0;
  }
  else {
    FUN_101d6e26c(uVar13);
    func_0x000107c61170(param_3);
  }
  return uVar13;
}



/* Entry: 101d6e26c; end: 101d6e3cf;  */

undefined8 FUN_101d6e26c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_11047ead0;
  func_0x000107c613fc(&UNK_11047ead0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11047ec10;
  func_0x000107c613fc(&UNK_11047ec10,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61434(param_1);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000021,0x800000010f00ee60,&UNK_10da12080,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_11047ec38;
  func_0x000107c613fc(&UNK_11047ec38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11047ec60;
  func_0x000107c613fc(&UNK_11047ec60,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d7035c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_1);
  uVar4 = 0x112e29d08;
  func_0x0001000285a8(0x112e29d08,&UNK_10da12070);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d70364,puVar2,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return uVar5;
}



/* Entry: 101d6e3d0; end: 101d6e62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6e3d0(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar14 = *param_1;
  uVar13 = uVar14 & 0xffffffffffffff8;
  uVar11 = param_2;
  if (uVar14 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar13 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar13;
    if (0x7fffffffffffffff < uVar14) {
      uVar15 = uVar14;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar15 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        if ((uVar14 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6e52c);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar14 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
          uVar10 = uVar11;
        }
        else {
          uVar3 = uVar5;
          uVar10 = uVar14;
          FUN_101d6ffd4();
        }
        uVar1 = uVar5 + 1;
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6e528);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (uVar4 != 0) break;
        func_0x000107c61170(uVar3);
        uVar11 = uVar10;
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar15) goto LAB_101d6e548;
      }
      uVar5 = uVar4;
      func_0x000107c5faec();
      uVar11 = uVar10;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        uVar11 = *(long *)(puVar8 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar11,1,puVar8);
      }
      uVar4 = *(ulong *)(puVar7 + 0x10);
      uVar3 = uVar4 + 1;
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        uVar11 = uVar3;
        func_0x0001000d182c(puVar8,uVar3,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar3;
      *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar10;
      uVar5 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_101d6e548:
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar9 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    uVar12 = *(undefined8 *)(lVar9 + _DAT_112e29cc8);
    func_0x000107c6157c(uVar12);
    func_0x000107c61170(lVar9);
    func_0x0001000d224c(&puStack_88);
    func_0x000107c61574(uVar12);
    puVar6 = puStack_88;
    func_0x000107c614f0(puStack_88);
    (**(code **)(lStack_80 + 8))(param_3,param_4,puVar8,puVar6,lStack_80);
    func_0x000107c6142c(puVar8);
    func_0x000107c615e8(puStack_88);
  }
  puVar8 = PTR_PTR_1126a94a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_88 = puVar8;
  func_0x000100b60084(&puStack_88);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 101d6e62c; end: 101d6e807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6e62c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = param_2;
  FUN_101d70740();
  func_0x000103fbd0c8(param_1);
  puVar1 = PTR_PTR_1126a94a0;
  func_0x000107c610f8(PTR_PTR_1126a94a0);
  func_0x000107c45e78();
  func_0x000107c5fadc(param_1,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c5662c(puVar1);
  func_0x000107c61170(param_1);
  FUN_101d7027c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 1;
  func_0x000107c6010c(1);
  func_0x000107c56ac0(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126a94a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54654();
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112e29cc8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_2);
    func_0x0001000d224c(&puStack_88);
    func_0x000107c61574(uVar2);
    puVar4 = puStack_88;
    func_0x000107c614f0(puStack_88);
    func_0x000107c61428(param_5 + 0x10,auStack_a0,0,0);
    uVar2 = *(undefined8 *)(param_5 + 0x10);
    pcVar6 = *(code **)(lStack_80 + 0x20);
    func_0x000107c61434(uVar2);
    (*pcVar6)(param_3,param_4,uVar2,0,puVar4,lStack_80);
    func_0x000107c615e8(puStack_88);
    func_0x000107c6142c(uVar2);
  }
  puStack_88 = puVar3;
  func_0x000100b60084(&puStack_88);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d6e808; end: 101d6e823;  */

void FUN_101d6e808(long param_1,long param_2)

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



/* Entry: 101d6e824; end: 101d6e87f; -[SCMemPlatBackupGenerateThumbnailStep generateThumbnailWithStepData:] */

void FUN_101d6e824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101d6d6a0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d6e880; end: 101d6e887; -[SCMemPlatBackupGenerateThumbnailStep shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101d6e880(void)

{
  return 0;
}



/* Entry: 101d6e888; end: 101d6e8ab; -[SCMemPlatBackupGenerateThumbnailStep pushToValdiMarshaller:] */

void FUN_101d6e888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105f5fe80(param_3,param_1);
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 101d6e8ac; end: 101d6e96f;  */

void FUN_101d6e8ac(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined1 *)(lVar3 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x38) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d6e970;
    plVar2[6] = *(long *)(unaff_x22 + 0x30);
    plVar2[7] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6ea4c,0,0);
    return;
  }
  FUN_101d7039c();
  func_0x000107c613f8(&UNK_11047ee08,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d6e96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d6e970; end: 101d6ea33;  */

void FUN_101d6e970(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = 0x101d6e9cc;
  }
  else {
    uVar1 = 0x101d6ea00;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101d6ea34; end: 101d6ea4b;  */

void FUN_101d6ea34(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6ea4c,0,0);
  return;
}



/* Entry: 101d6ea4c; end: 101d6ece3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6ea4c(void)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x30);
  if (uVar9 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x40) = uVar3;
    lVar12 = _DAT_112e29cd0;
  }
  else {
    uVar3 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x40) = uVar3;
    lVar12 = _DAT_112e29cd0;
  }
  _DAT_112e29cd0 = lVar12;
  if (uVar3 != 0) {
    uVar9 = 0;
    *(undefined8 *)(unaff_x22 + 0x48) =
         *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_112e29ca8);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + lVar12);
    do {
      uVar3 = *(ulong *)(unaff_x22 + 0x30);
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6ecac);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar3 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar9;
        FUN_101d6ffd4();
      }
      *(ulong *)(unaff_x22 + 0x58) = uVar4;
      *(ulong *)(unaff_x22 + 0x60) = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6eca8);
        (*pcVar2)();
      }
      func_0x0001000d224c(unaff_x22 + 0x20);
      uVar9 = *(ulong *)(unaff_x22 + 0x20);
      if (uVar9 == 0) {
LAB_101d6eb68:
        uVar9 = uVar4;
        func_0x000107c42370();
        func_0x000107c61180();
        if (uVar9 == 0) {
          func_0x000107c5c928();
          func_0x000107c61180();
          if (uVar4 != 0) {
            uVar9 = uVar4;
            func_0x000107c5faec();
            func_0x000107c61170(uVar4);
            func_0x000107c6142c(uVar3);
            uVar9 = uVar9 & 0xffffffffffff;
            if ((uVar3 & 0x2000000000000000) != 0) {
              uVar9 = uVar3 >> 0x38 & 0xf;
            }
            if (uVar9 != 0) {
              func_0x0001000d224c(unaff_x22 + 0x10);
              uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
              lVar12 = *(long *)(unaff_x22 + 0x18);
              *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
              func_0x000107c614f0(uVar7);
              piVar10 = *(int **)(lVar12 + 0x30);
              iVar1 = *piVar10;
              plVar8 = (long *)(ulong)(uint)piVar10[1];
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x70) = plVar8;
              *plVar8 = unaff_x22;
              plVar8[1] = (long)FUN_101d6ece4;
                    /* WARNING: Could not recover jumptable at 0x000101d6ec5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar10))(FUN_101d6f7cc,0,uVar7,lVar12);
              return;
            }
          }
          plVar8 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x80) = plVar8;
          *plVar8 = unaff_x22;
          plVar8[1] = (long)FUN_101d6efbc;
          lVar12 = *(long *)(unaff_x22 + 0x38);
          plVar8[7] = *(long *)(unaff_x22 + 0x58);
          plVar8[8] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6f450,0,0);
          return;
        }
        func_0x000107c61170();
      }
      else {
        uVar5 = uVar4;
        func_0x000107c43c78(uVar4);
        func_0x000107c61180();
        uVar6 = uVar9;
        func_0x000107c505f8();
        func_0x000107c61180();
        func_0x000107c615e8(uVar5);
        if (uVar6 == 0) {
          func_0x000107c615e8(uVar9);
          goto LAB_101d6eb68;
        }
        uVar5 = uVar6;
        func_0x000107c49a80();
        func_0x000107c615e8(uVar6);
        func_0x000107c615e8(uVar9);
        if ((uVar5 & 1) == 0) goto LAB_101d6eb68;
      }
      lVar12 = *(long *)(unaff_x22 + 0x60);
      lVar11 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
      if (lVar12 == lVar11) break;
      uVar9 = *(ulong *)(unaff_x22 + 0x60);
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x000101d6ece0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d6ece4; end: 101d6ed5b;  */

void FUN_101d6ece4(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0xa8) = param_1 & 1;
    pcVar1 = FUN_101d6ed5c;
  }
  else {
    pcVar1 = FUN_101d6efa0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d6ed5c; end: 101d6ef9f;  */

void FUN_101d6ed5c(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xa8) & 1) != 0) {
LAB_101d6ed80:
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101d6efbc;
    lVar11 = *(long *)(unaff_x22 + 0x38);
    plVar3[7] = *(long *)(unaff_x22 + 0x58);
    plVar3[8] = lVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6f450,0,0);
    return;
  }
  do {
    do {
      lVar11 = *(long *)(unaff_x22 + 0x60);
      lVar10 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
      if (lVar11 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101d6eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      uVar12 = *(ulong *)(unaff_x22 + 0x60);
      uVar8 = *(ulong *)(unaff_x22 + 0x30);
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6efa0);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar8 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar12;
        FUN_101d6ffd4();
      }
      *(ulong *)(unaff_x22 + 0x58) = uVar4;
      *(ulong *)(unaff_x22 + 0x60) = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6ef9c);
        (*pcVar2)();
      }
      func_0x0001000d224c(unaff_x22 + 0x20);
      uVar12 = *(ulong *)(unaff_x22 + 0x20);
      if (uVar12 == 0) break;
      uVar5 = uVar4;
      func_0x000107c43c78(uVar4);
      func_0x000107c61180();
      uVar6 = uVar12;
      func_0x000107c505f8();
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
      if (uVar6 == 0) {
        func_0x000107c615e8(uVar12);
        break;
      }
      uVar5 = uVar6;
      func_0x000107c49a80();
      func_0x000107c615e8(uVar6);
      func_0x000107c615e8(uVar12);
    } while ((uVar5 & 1) != 0);
    uVar12 = uVar4;
    func_0x000107c42370();
    func_0x000107c61180();
    if (uVar12 == 0) {
      func_0x000107c5c928();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar12 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uVar8);
        uVar12 = uVar12 & 0xffffffffffff;
        if ((uVar8 & 0x2000000000000000) != 0) {
          uVar12 = uVar8 >> 0x38 & 0xf;
        }
        if (uVar12 != 0) {
          func_0x0001000d224c(unaff_x22 + 0x10);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
          lVar11 = *(long *)(unaff_x22 + 0x18);
          *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
          func_0x000107c614f0(uVar7);
          piVar9 = *(int **)(lVar11 + 0x30);
          iVar1 = *piVar9;
          plVar3 = (long *)(ulong)(uint)piVar9[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x70) = plVar3;
          *plVar3 = unaff_x22;
          plVar3[1] = (long)FUN_101d6ece4;
                    /* WARNING: Could not recover jumptable at 0x000101d6ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar9))(FUN_101d6f7cc,0,uVar7,lVar11);
          return;
        }
      }
      goto LAB_101d6ed80;
    }
    func_0x000107c61170();
  } while( true );
}



/* Entry: 101d6efa0; end: 101d6efbb;  */

void FUN_101d6efa0(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6f404,0,0);
  return;
}



/* Entry: 101d6efbc; end: 101d6f037;  */

void FUN_101d6efbc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  *(undefined8 *)(lVar2 + 0x90) = param_2;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0xa9) = param_3 & 1;
    pcVar1 = FUN_101d6f038;
  }
  else {
    *(long *)(lVar2 + 0xa0) = unaff_x20;
    pcVar1 = FUN_101d6f404;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d6f038; end: 101d6f403;  */

void FUN_101d6f038(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  
  puVar10 = *(undefined **)(unaff_x22 + 0x98);
  puVar5 = *(undefined1 **)(unaff_x22 + 0x88);
  FUN_101d703dc(puVar5,*(undefined8 *)(unaff_x22 + 0x90),*(undefined1 *)(unaff_x22 + 0xa9));
  if (puVar10 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x0001000d224c(unaff_x22 + 0x28);
    uVar14 = *(ulong *)(unaff_x22 + 0x28);
    if (uVar14 == 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
      FUN_101d7039c();
      puVar10 = &UNK_11047ee08;
      func_0x000107c613f8(&UNK_11047ee08,puVar6,0,0);
      *puVar6 = 0;
      func_0x000107c61654();
      func_0x00010006c090(uVar11,uVar3);
      func_0x000107c615e8(puVar5);
    }
    else {
      func_0x000107c5b2d0(*(undefined8 *)(unaff_x22 + 0x58));
      func_0x000107c61180();
      func_0x000107c61170();
      uVar15 = uVar14;
      func_0x000107c3d8cc();
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
      if ((uVar15 & 1) != 0) {
        uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
        lVar16 = *(long *)(unaff_x22 + 0x60);
        lVar17 = *(long *)(unaff_x22 + 0x40);
        func_0x000107c4f6a0(puVar5);
        func_0x000107c615e8(uVar14);
        func_0x000107c615e8(puVar5);
        func_0x00010006c090(uVar11,uVar3);
        func_0x000107c61170(uVar2);
        if (lVar16 != lVar17) {
          do {
            uVar15 = *(ulong *)(unaff_x22 + 0x60);
            uVar14 = *(ulong *)(unaff_x22 + 0x30);
            if ((uVar14 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101d6f404);
                (*pcVar4)();
              }
              uVar7 = *(ulong *)(uVar14 + uVar15 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar15;
              FUN_101d6ffd4();
            }
            *(ulong *)(unaff_x22 + 0x58) = uVar7;
            *(ulong *)(unaff_x22 + 0x60) = uVar15 + 1;
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101d6f400);
              (*pcVar4)();
            }
            func_0x0001000d224c(unaff_x22 + 0x20);
            uVar15 = *(ulong *)(unaff_x22 + 0x20);
            if (uVar15 == 0) {
LAB_101d6f15c:
              uVar15 = uVar7;
              func_0x000107c42370();
              func_0x000107c61180();
              if (uVar15 == 0) {
                func_0x000107c5c928();
                func_0x000107c61180();
                if (uVar7 != 0) {
                  uVar15 = uVar7;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar7);
                  func_0x000107c6142c(uVar14);
                  uVar15 = uVar15 & 0xffffffffffff;
                  if ((uVar14 & 0x2000000000000000) != 0) {
                    uVar15 = uVar14 >> 0x38 & 0xf;
                  }
                  if (uVar15 != 0) {
                    func_0x0001000d224c(unaff_x22 + 0x10);
                    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
                    lVar16 = *(long *)(unaff_x22 + 0x18);
                    *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
                    func_0x000107c614f0(uVar11);
                    piVar13 = *(int **)(lVar16 + 0x30);
                    iVar1 = *piVar13;
                    plVar12 = (long *)(ulong)(uint)piVar13[1];
                    func_0x000107c615b8();
                    *(long **)(unaff_x22 + 0x70) = plVar12;
                    *plVar12 = unaff_x22;
                    plVar12[1] = (long)FUN_101d6ece4;
                    /* WARNING: Could not recover jumptable at 0x000101d6f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((long)iVar1 + (long)piVar13))(FUN_101d6f7cc,0,uVar11,lVar16);
                    return;
                  }
                }
                plVar12 = (long *)0x80;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x80) = plVar12;
                *plVar12 = unaff_x22;
                plVar12[1] = (long)FUN_101d6efbc;
                lVar16 = *(long *)(unaff_x22 + 0x38);
                plVar12[7] = *(long *)(unaff_x22 + 0x58);
                plVar12[8] = lVar16;
                pcVar4 = FUN_101d6f450;
                goto LAB_107c615e0;
              }
              func_0x000107c61170();
            }
            else {
              uVar8 = uVar7;
              func_0x000107c43c78(uVar7);
              func_0x000107c61180();
              uVar9 = uVar15;
              func_0x000107c505f8();
              func_0x000107c61180();
              func_0x000107c615e8(uVar8);
              if (uVar9 == 0) {
                func_0x000107c615e8(uVar15);
                goto LAB_101d6f15c;
              }
              uVar8 = uVar9;
              func_0x000107c49a80();
              func_0x000107c615e8(uVar9);
              func_0x000107c615e8(uVar15);
              if ((uVar8 & 1) == 0) goto LAB_101d6f15c;
            }
            lVar16 = *(long *)(unaff_x22 + 0x60);
            lVar17 = *(long *)(unaff_x22 + 0x40);
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
          } while (lVar16 != lVar17);
        }
                    /* WARNING: Could not recover jumptable at 0x000101d6f150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      puVar6 = puVar5;
      func_0x000107c4f6a0();
      FUN_101d7039c();
      puVar10 = &UNK_11047ee08;
      func_0x000107c613f8(&UNK_11047ee08,puVar6,0,0);
      *puVar6 = 4;
      func_0x000107c61654();
      func_0x00010006c090(uVar11,uVar3);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(uVar14);
    }
  }
  else {
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
  }
  *(undefined **)(unaff_x22 + 0xa0) = puVar10;
  pcVar4 = FUN_101d6f404;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101d6f404; end: 101d6f437;  */

void FUN_101d6f404(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000101d6f434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d6f438; end: 101d6f44f;  */

void FUN_101d6f438(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6f450,0,0);
  return;
}



/* Entry: 101d6f450; end: 101d6f50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6f450(undefined1 *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x48) = *(long *)(unaff_x22 + 0x28);
  if (*(long *)(unaff_x22 + 0x28) != 0) {
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d6f510;
    lVar1 = *(long *)(unaff_x22 + 0x40);
    plVar2[0xc] = *(long *)(unaff_x22 + 0x38);
    plVar2[0xd] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6f808,0,0);
    return;
  }
  FUN_101d7039c();
  func_0x000107c613f8(&UNK_11047ee08,param_1,0,0);
  *param_1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d6f50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d6f510; end: 101d6f57f;  */

void FUN_101d6f510(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x21) = param_1 & 1;
    pcVar1 = FUN_101d6f580;
  }
  else {
    pcVar1 = (code *)0x101d6f748;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d6f580; end: 101d6f6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6f580(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x21);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112e29d18,&UNK_10da120a0);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112e29cc0);
  func_0x0001000d224c(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar3 = &UNK_11047ec88;
  func_0x000107c613fc(&UNK_11047ec88,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  puVar3[0x20] = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(uVar7);
  uVar4 = uVar8;
  func_0x0001048897a0(uVar8,1,0,FUN_101d7062c,puVar3);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uVar8);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101d6f6a8;
                    /* WARNING: Could not recover jumptable at 0x000101d6f6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d6fd1c(plVar5,unaff_x22 + 0x10);
  return;
}



/* Entry: 101d6f6a8; end: 101d6f70b;  */

void FUN_101d6f6a8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(long *)(lVar3 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101d6f70c;
  }
  else {
    pcVar2 = FUN_101d6f780;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d6f70c; end: 101d6f77f;  */

void FUN_101d6f70c(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101d6f744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined1 *)(unaff_x22 + 0x20));
  return;
}



/* Entry: 101d6f780; end: 101d6f7cb;  */

void FUN_101d6f780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d6f7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),param_2,0);
  return;
}



/* Entry: 101d6f7cc; end: 101d6f7ef;  */

void FUN_101d6f7cc(void)

{
  func_0x000107c5aba0();
  return;
}



/* Entry: 101d6f7f0; end: 101d6f807;  */

void FUN_101d6f7f0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6f808,0,0);
  return;
}



/* Entry: 101d6f808; end: 101d6f967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6f808(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar6 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
    if (param_2 >> 0x3c < 0xf) {
      func_0x0001000b44c0(lVar6,param_2);
      func_0x0001000b44c0(0,0xf000000000000000);
      func_0x0001000d224c(unaff_x22 + 0x40);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar1 = *(long *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
      func_0x000107c614f0(uVar2);
      piVar4 = *(int **)(lVar1 + 0x30);
      plVar3 = (long *)(ulong)(uint)piVar4[1];
      UNRECOVERED_JUMPTABLE = (code *)((long)*piVar4 + (long)piVar4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101d6f968;
      pcVar5 = FUN_101d6ff64;
      goto LAB_101d6f93c;
    }
  }
  func_0x0001000b44c0(lVar6,param_2);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000107c614f0(uVar2);
  piVar4 = *(int **)(lVar1 + 0x30);
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  UNRECOVERED_JUMPTABLE = (code *)((long)*piVar4 + (long)piVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d6f9d8;
  pcVar5 = FUN_101d6ffb0;
LAB_101d6f93c:
                    /* WARNING: Could not recover jumptable at 0x000101d6f964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pcVar5,0,uVar2,lVar1);
  return;
}



/* Entry: 101d6f968; end: 101d6f9d7;  */

void FUN_101d6f968(undefined1 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x20) = unaff_x20;
  *(undefined1 *)(lVar3 + 0x18) = param_1;
  *(long **)(lVar3 + 0x10) = unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(lVar3 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x78));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101d6fa48;
  }
  else {
    pcVar2 = (code *)0x101d6fa68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d6f9d8; end: 101d6fa47;  */

void FUN_101d6f9d8(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  *(undefined1 *)(lVar2 + 0x30) = param_1;
  *(long **)(lVar2 + 0x28) = unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x101d6fa58;
  }
  else {
    uVar1 = 0x101d6fa78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101d6fa48; end: 101d6fa87;  */

void FUN_101d6fa48(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d6fa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x18));
  return;
}



/* Entry: 101d6fa88; end: 101d6fc6f;  */

void FUN_101d6fa88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_11047ecd8;
  func_0x000107c613fc(&UNK_11047ecd8,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  puVar1[0x20] = param_4;
  pcStack_60 = FUN_101d706c4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10102dc58;
  puStack_68 = &UNK_11047ecf0;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5010c(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101d6fc70; end: 101d6fd1b;  */

void FUN_101d6fc70(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  byte param_5)

{
  undefined *puVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  if (param_1 == (undefined *)0x0) {
    if (param_4 >> 0x3c < 0xf) {
      bStack_28 = param_5 & 1;
      uStack_38 = param_3;
      uStack_30 = param_4;
      func_0x00010006c00c(param_3,param_4);
      func_0x000100b60084(&uStack_38);
      func_0x00010006c090(uStack_38,uStack_30);
      return;
    }
    FUN_101d7039c();
    puVar1 = &UNK_11047ee08;
    func_0x000107c613f8(&UNK_11047ee08,param_1,0,0);
    *param_1 = 6;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101d6fd1c; end: 101d6fd33;  */

void FUN_101d6fd1c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6fd34,0,0);
  return;
}



/* Entry: 101d6fd34; end: 101d6fe7f;  */

void FUN_101d6fd34(void)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar7;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x68);
  uVar2 = *(ushort *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  if (0xfe < uVar2 >> 8) {
    func_0x000101d7063c(uVar6);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101d6fe80;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,0);
    puVar5 = &UNK_11047ecb0;
    func_0x000107c613fc(&UNK_11047ecb0,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    func_0x00010075a04c(0,1,0x101d70664,puVar5);
    func_0x000107c61574(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(byte *)(unaff_x22 + 0x60) = (byte)uVar2;
  *(char *)(unaff_x22 + 0x61) = (char)(uVar2 >> 8);
  if (uVar2 >> 8 == 1) {
    *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x68,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar7 = *(undefined8 **)(unaff_x22 + 0x80);
    *puVar7 = uVar6;
    puVar7[1] = uVar1;
    *(byte *)(puVar7 + 2) = (byte)uVar2 & 1;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d6fe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d6fe80; end: 101d6febf;  */

void FUN_101d6fe80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6fec0,0,0);
  return;
}



/* Entry: 101d6fec0; end: 101d6ff63;  */

void FUN_101d6fec0(void)

{
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x61) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x50);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x68,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x80);
    bVar1 = *(byte *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    *puVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar3[1] = uVar4;
    *(byte *)(puVar3 + 2) = bVar1 & 1;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d6ff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d6ff64; end: 101d6ffaf;  */

uint FUN_101d6ff64(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 8) + 8))();
  return param_1 & 1;
}



/* Entry: 101d6ffb0; end: 101d6ffd3;  */

void FUN_101d6ffb0(void)

{
  func_0x000107c5ad24();
  return;
}



/* Entry: 101d6ffd4; end: 101d70197;  */

ulong FUN_101d6ffd4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d700b8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d700bc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bc7d8;
    func_0x000107c61168(PTR_PTR_1126bc7d8);
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
    puVar4 = PTR_PTR_1126bc7d8;
    func_0x000107c61168(PTR_PTR_1126bc7d8);
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
  FUN_101d7027c(0,0x112e28b08,&PTR_PTR_1126bc7d8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d70198);
  (*pcVar2)();
}



/* Entry: 101d70198; end: 101d701fb;  */

void FUN_101d70198(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)((long)param_1 + 0x11);
  uVar4 = *(undefined1 *)(param_1 + 2);
  func_0x000101d7066c(uVar1,uVar2,uVar4,uVar3);
  puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  *(undefined1 *)(puVar5 + 2) = uVar4;
  *(undefined1 *)((long)puVar5 + 0x11) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 101d701fc; end: 101d7026b;  */

void FUN_101d701fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128034a8);
  return;
}



/* Entry: 101d7026c; end: 101d7027b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d7026c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  code *pcVar10;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar9 = lVar7;
  FUN_101d70740();
  func_0x000103fbd0c8(param_1);
  puVar4 = PTR_PTR_1126a94a0;
  func_0x000107c610f8(PTR_PTR_1126a94a0);
  func_0x000107c45e78();
  func_0x000107c5fadc(param_1,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c5662c(puVar4);
  func_0x000107c61170(param_1);
  FUN_101d7027c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = 1;
  func_0x000107c6010c(1);
  func_0x000107c56ac0(puVar4);
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126a94a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54654();
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(lVar7 + _DAT_112e29cc8);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar7);
    func_0x0001000d224c(&puStack_88);
    func_0x000107c61574(uVar5);
    puVar8 = puStack_88;
    func_0x000107c614f0(puStack_88);
    func_0x000107c61428(lVar3 + 0x10,auStack_a0,0,0);
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    pcVar10 = *(code **)(lStack_80 + 0x20);
    func_0x000107c61434(uVar5);
    (*pcVar10)(uVar2,uVar1,uVar5,0,puVar8,lStack_80);
    func_0x000107c615e8(puStack_88);
    func_0x000107c6142c(uVar5);
  }
  puStack_88 = puVar6;
  func_0x000100b60084(&puStack_88);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101d7027c; end: 101d702bb;  */

void FUN_101d7027c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d702bc; end: 101d7031f;  */

void FUN_101d702bc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d70320;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d6e8ac,0,0);
  return;
}



/* Entry: 101d70320; end: 101d7035b;  */

void FUN_101d70320(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d70358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d7035c; end: 101d70363;  */

void FUN_101d7035c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d70364; end: 101d7039b;  */

void FUN_101d70364(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 101d7039c; end: 101d703db;  */

void FUN_101d7039c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12184;
  func_0x000107c61520(&UNK_10da12184,&UNK_11047ee08);
  puRam0000000112e29d10 = puVar1;
  return;
}



/* Entry: 101d703dc; end: 101d7062b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d703dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_58;
  
  puVar1 = (undefined1 *)0x0;
  uStack_68 = param_2;
  func_0x000107c5ede0();
  lVar6 = *(long *)(puVar1 + -8);
  puVar4 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_58);
  if (puStack_58 != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112e29cb0);
    if (puVar4 != (undefined1 *)0x0) {
      func_0x000107c615f0(puVar4);
      puVar2 = puStack_58;
      func_0x000107c5cf34();
      func_0x000107c61180();
      if (puVar2 == (undefined1 *)0x0) {
        FUN_101d7039c();
        func_0x000107c613f8(&UNK_11047ee08,puVar2,0,0);
        *puVar2 = 5;
        func_0x000107c61654();
        func_0x000107c615e8(puStack_58);
      }
      else {
        puStack_70 = puVar4;
        func_0x000107c538b4();
        func_0x000107c5ee20(param_1,uStack_68);
        puVar4 = puVar2;
        func_0x000107c43468();
        func_0x000107c61180();
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          func_0x000107c5edb4(lVar5);
          func_0x000107c61170();
          func_0x000107c5ed90();
          (**(code **)(lVar6 + 8))(lVar5,puVar1);
        }
        puVar1 = puStack_70;
        puVar3 = puStack_70;
        func_0x000107c5e914();
        func_0x000107c61170(param_1);
        func_0x000107c61170();
        if (((ulong)puVar3 & 1) != 0) {
          func_0x000107c615e8(puStack_58);
          func_0x000107c615e8(puVar1);
          return puVar2;
        }
        FUN_101d7039c();
        func_0x000107c613f8(&UNK_11047ee08,puVar4,0,0);
        *puVar4 = 3;
        func_0x000107c61654();
        func_0x000107c615e8(puStack_58);
        func_0x000107c615e8(puVar1);
        puVar4 = puVar2;
        unaff_x20 = puVar2;
      }
      func_0x000107c615e8(puVar4);
      return unaff_x20;
    }
    func_0x000107c615e8();
    puVar4 = puStack_58;
  }
  FUN_101d7039c();
  func_0x000107c613f8(&UNK_11047ee08,puVar4,0,0);
  *puVar4 = 0;
  func_0x000107c61654();
  return unaff_x20;
}



/* Entry: 101d7062c; end: 101d7067f;  */

void FUN_101d7062c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar4 = &puStack_80;
  puVar3 = &UNK_11047ecd8;
  func_0x000107c613fc(&UNK_11047ecd8,0x21,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar3[0x20] = uVar2;
  pcStack_60 = FUN_101d706c4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10102dc58;
  puStack_68 = &UNK_11047ecf0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c5010c(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 101d70680; end: 101d706c3;  */

void FUN_101d70680(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d706c4; end: 101d706df;  */

void FUN_101d706c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&uStack_58);
  puVar3 = &UNK_11047ed28;
  func_0x000107c613fc(&UNK_11047ed28,0x31,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  puVar3[0x30] = uVar2;
  uStack_68 = 0x101d706d0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_11047ed40;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_60;
  func_0x000107c614b0(param_3);
  func_0x000107c6157c(uVar1);
  func_0x000100de78a0(param_1,param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(uStack_58);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_58);
  return;
}



/* Entry: 101d706e0; end: 101d7072f;  */

void FUN_101d706e0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e29d20 != 0) {
    return;
  }
  puVar1 = &UNK_11047ed78;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e29d20 = param_1;
  return;
}



/* Entry: 101d70730; end: 101d7073f;  */

void FUN_101d70730(long param_1,long param_2)

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



/* Entry: 101d70740; end: 101d7099b;  */

ulong FUN_101d70740(undefined **param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  uint uVar10;
  long extraout_x8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuStack_80 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0x112e29d50;
  func_0x0001000285a8(0x112e29d50,&UNK_10da123a0);
  pppuVar2 = &ppuStack_b0;
  func_0x000107c6147c(pppuVar2,&ppuStack_80,uVar1,uVar4,6);
  if (((ulong)pppuVar2 & 1) == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    ppuStack_b0 = (undefined **)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_101d70a94(&ppuStack_b0);
  }
  else {
    func_0x000101d70af0(&ppuStack_b0,&uStack_78);
    func_0x0001000a8868(&uStack_78,uStack_60);
    lVar3 = 0;
    func_0x000107c614b8(0,lStack_58,uStack_60,&UNK_10e7ddb68,&UNK_10e7ddb70);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lStack_58 + 0x10))((long)&ppuStack_b0 - extraout_x8,uStack_60,lStack_58);
    uVar4 = 0;
    FUN_101d706e0(0);
    pppuVar2 = &ppuStack_b0;
    func_0x000107c6147c(pppuVar2,(long)&ppuStack_b0 - extraout_x8,lVar3,uVar4,6);
    if (((ulong)pppuVar2 & 1) != 0) {
      func_0x0001000834e4(&uStack_78);
      return (ulong)ppuStack_b0 & 0xffffffff;
    }
    func_0x0001000834e4(&uStack_78);
  }
  ppuStack_b0 = param_1;
  func_0x000107c614b0(param_1);
  puVar5 = &uStack_78;
  pppuVar2 = &ppuStack_b0;
  func_0x000107c6147c(puVar5,pppuVar2,uVar1,&UNK_1107ac098,6);
  if ((int)puVar5 == 0) {
    func_0x000107c5ed2c();
    ppuVar8 = param_1;
    func_0x000107c42210();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    ppuVar7 = ppuVar8;
    func_0x000107c5faec();
    pppuVar9 = pppuVar2;
    func_0x000107c61170(ppuVar8);
    ppuVar8 = &PTR____CFConstantStringClassReference_110ec8678;
    func_0x000107c5faec();
    if ((ppuVar7 == ppuVar8) && (pppuVar2 == pppuVar9)) {
      func_0x000107c6142c(pppuVar2);
      func_0x000107c6142c(pppuVar9);
      uVar6 = 0xb;
    }
    else {
      func_0x000107c605b8(ppuVar7,pppuVar2,ppuVar8,pppuVar9,0);
      func_0x000107c6142c(pppuVar2);
      func_0x000107c6142c(pppuVar9);
      uVar10 = 0xb;
      if (((ulong)ppuVar7 & 1) == 0) {
        uVar10 = 0;
      }
      uVar6 = (ulong)uVar10;
    }
  }
  else {
    func_0x000101d70adc(uStack_78,uStack_70);
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 101d7099c; end: 101d709af;  */

bool FUN_101d7099c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d709b0; end: 101d70a5b;  */

void FUN_101d709b0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d70a5c; end: 101d70a93;  */

void FUN_101d70a5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d70a94; end: 101d70adb;  */

undefined8 FUN_101d70a94(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e29d58;
  func_0x0001000285a8(0x112e29d58,&UNK_10da120f0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101d70adc; end: 101d70c6f;  */

void FUN_101d70adc(undefined8 param_1,ulong param_2)

{
  if (param_2 < 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101d70c70; end: 101d70caf;  */

void FUN_101d70c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1215c;
  func_0x000107c61520(&UNK_10da1215c,&UNK_11047ee08);
  puRam0000000112e29d60 = puVar1;
  return;
}



/* Entry: 101d70cb0; end: 101d711bf;  */

long FUN_101d70cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11047ee90;
  func_0x000107c613fc(&UNK_11047ee90,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  func_0x0001000285a8(0x112e29d68,&UNK_10da121f0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  pcVar2 = FUN_101d711c0;
  func_0x0001000bdd8c(FUN_101d711c0,puVar1);
  uVar3 = 0;
  func_0x0001002c73cc(0);
  func_0x000107c610f8();
  func_0x000103a6afa0(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101d711c0; end: 101d711c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d711c0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  func_0x000107c41258();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e28fb8,&UNK_10da11450);
  func_0x000107c4cb54();
  func_0x000107c61180();
  uVar4 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  func_0x000107c43434();
  func_0x000107c61180();
  func_0x000107c5c5b0();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x0001000285a8(0x112e29e40,&UNK_10da12238);
    lVar7 = lVar8;
    func_0x0001000bda74();
    func_0x000107c61170(lVar8);
    uVar14 = *(undefined8 *)(lVar9 + _DAT_112ff4aa8);
    uVar13 = *(undefined8 *)(lVar1 + _DAT_112ff4a28);
    uVar12 = *(undefined8 *)(lVar11 + _DAT_1130806b8);
    lVar8 = 0;
    FUN_101d701fc();
    lVar9 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112e29ca0) = uVar5;
    *(undefined8 *)(lVar9 + _DAT_112e29ca8) = uVar4;
    *(undefined8 *)(lVar9 + _DAT_112e29cb0) = uVar6;
    *(long *)(lVar9 + _DAT_112e29cb8) = lVar7;
    *(undefined8 *)(lVar9 + _DAT_112e29cc8) = uVar13;
    *(undefined8 *)(lVar9 + _DAT_112e29cc0) = uVar14;
    *(undefined8 *)(lVar9 + _DAT_112e29cd0) = uVar12;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
    func_0x000107c6157c(uVar13);
    func_0x000107c6157c(uVar14);
    func_0x000107c6157c(uVar12);
    func_0x000107c61154(&lStack_70,puVar2);
    *param_1 = plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d711c0);
  (*pcVar3)();
}



/* Entry: 101d711c4; end: 101d71217;  */

void FUN_101d711c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d71218; end: 101d7123b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d71218(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  func_0x000107c41258();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e28fb8,&UNK_10da11450);
  func_0x000107c4cb54();
  func_0x000107c61180();
  uVar4 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  func_0x000107c43434();
  func_0x000107c61180();
  func_0x000107c5c5b0();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x0001000285a8(0x112e29e40,&UNK_10da12238);
    lVar7 = lVar8;
    func_0x0001000bda74();
    func_0x000107c61170(lVar8);
    uVar14 = *(undefined8 *)(lVar9 + _DAT_112ff4aa8);
    uVar13 = *(undefined8 *)(lVar1 + _DAT_112ff4a28);
    uVar12 = *(undefined8 *)(lVar11 + _DAT_1130806b8);
    lVar8 = 0;
    FUN_101d701fc();
    lVar9 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112e29ca0) = uVar5;
    *(undefined8 *)(lVar9 + _DAT_112e29ca8) = uVar4;
    *(undefined8 *)(lVar9 + _DAT_112e29cb0) = uVar6;
    *(long *)(lVar9 + _DAT_112e29cb8) = lVar7;
    *(undefined8 *)(lVar9 + _DAT_112e29cc8) = uVar13;
    *(undefined8 *)(lVar9 + _DAT_112e29cc0) = uVar14;
    *(undefined8 *)(lVar9 + _DAT_112e29cd0) = uVar12;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
    func_0x000107c6157c(uVar13);
    func_0x000107c6157c(uVar14);
    func_0x000107c6157c(uVar12);
    func_0x000107c61154(&lStack_70,puVar2);
    *param_1 = plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d711c0);
  (*pcVar3)();
}



/* Entry: 101d7123c; end: 101d712db;  */

void FUN_101d7123c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d712dc; end: 101d712eb;  */

void FUN_101d712dc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d712ec; end: 101d71357;  */

void FUN_101d712ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d71358; end: 101d71793;  */

/* WARNING: Removing unreachable block (ram,0x000101d71450) */

undefined * FUN_101d71358(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar14 = param_1;
  func_0x000107c42950();
  func_0x000107c61180();
  lVar2 = lVar14;
  func_0x000107c5faec();
  func_0x000107c61170(lVar14);
  func_0x0001000d224c(&uStack_70);
  uVar6 = uStack_70;
  func_0x000107c614f0(uStack_70);
  uVar11 = param_2;
  (**(code **)(lStack_68 + 0x18))
            (lVar2,param_2,PTR___swiftEmptyArrayStorage_11034f1c8,uVar6,lStack_68);
  func_0x000107c615e8(uStack_70);
  lVar14 = param_1;
  func_0x000107c4188c();
  func_0x000107c61180();
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else {
    lVar12 = lVar14;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar14);
    func_0x000107c610f8(PTR_PTR_1126d7f28);
    func_0x00010006c00c(lVar12,uVar11);
    lVar14 = lVar12;
    FUN_101d6b26c(lVar12,uVar11);
    func_0x00010006c090(lVar12,uVar11);
    func_0x00010006c090(lVar12);
  }
  func_0x000107c4188c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
    uVar11 = 0xf000000000000000;
LAB_101d71538:
    func_0x0001000b44c0(lVar12,uVar11);
  }
  else {
    lVar12 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    if (0xe < uVar11 >> 0x3c) goto LAB_101d71538;
    func_0x0001000b44c0(lVar12,uVar11);
    uVar11 = 0xf000000000000000;
    func_0x0001000b44c0(0,0xf000000000000000);
    if (lVar14 == 0) {
      func_0x000107c6142c(param_2);
      puVar3 = (undefined1 *)0x112e29f10;
      func_0x0001000285a8(0x112e29f10,&UNK_10da12308);
      FUN_101d71794();
      puVar9 = &UNK_11047f130;
      func_0x000107c613f8(&UNK_11047f130,puVar3,0,0);
      *puVar3 = 3;
      puVar10 = puVar9;
      func_0x00010488904c();
      func_0x000107c614ac(puVar9);
      func_0x000103edf0bc();
      goto LAB_101d71764;
    }
  }
  lVar12 = lVar14;
  func_0x000107c4caac(lVar14);
  func_0x000107c61180();
  if (lVar14 == 0) {
LAB_101d715a8:
    lVar13 = 0;
    uVar11 = 0;
  }
  else {
    lVar13 = lVar14;
    func_0x000107c42c98();
    func_0x000107c61180();
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d71794);
      (*pcVar1)();
    }
    lVar4 = lVar13;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    if (lVar4 == 0) goto LAB_101d715a8;
    lVar13 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
  }
  lVar4 = lVar2;
  FUN_101d72fe0(lVar2,param_2,lVar12,lVar13,uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c6142c(uVar11);
  lVar12 = lVar4;
  FUN_101d717d4(lVar4);
  puVar9 = &UNK_11047efb0;
  puVar5 = puVar9;
  func_0x000107c613fc(&UNK_11047efb0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar10 = &UNK_11047efd8;
  func_0x000107c613fc(&UNK_11047efd8,0x28,7);
  *(undefined **)(puVar10 + 0x10) = puVar5;
  *(long *)(puVar10 + 0x18) = lVar2;
  *(ulong *)(puVar10 + 0x20) = param_2;
  uVar6 = 0;
  func_0x000101d737c0(0,0x112e29f20,&PTR_PTR_1126a94b0);
  func_0x000107c61434(param_2);
  uVar7 = 0;
  func_0x000100775264(0,1,FUN_101d733d8,puVar10,uVar6);
  func_0x000107c61574(lVar12);
  func_0x000107c61574(puVar10);
  puVar5 = puVar9;
  func_0x000107c613fc(&UNK_11047efb0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar10 = &UNK_11047f000;
  func_0x000107c613fc(&UNK_11047f000,0x28,7);
  *(undefined **)(puVar10 + 0x10) = puVar5;
  *(long *)(puVar10 + 0x18) = lVar2;
  *(ulong *)(puVar10 + 0x20) = param_2;
  uVar8 = 0;
  func_0x000104889f74(0,1,0x101d73420,puVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c613fc(&UNK_11047efb0,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  puVar10 = (undefined *)0x0;
  func_0x0001048898b8(0,1,0x101d7343c,puVar9,uVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar9);
  func_0x000103edf0bc();
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar4);
LAB_101d71764:
  func_0x000107c61574(puVar10);
  return puVar9;
}



/* Entry: 101d71794; end: 101d717d3;  */

void FUN_101d71794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12430;
  func_0x000107c61520(&UNK_10da12430,&UNK_11047f130);
  puRam0000000112e29f18 = puVar1;
  return;
}



/* Entry: 101d717d4; end: 101d71907;  */

undefined8 FUN_101d717d4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
  (**(code **)(lVar4 + 0x18))(uVar1,lVar4);
  if ((uVar1 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar4 = lVar2;
    func_0x0001001830b8();
    FUN_101d73780(lVar2 + 0x20,0x112d38308,&UNK_10d902040);
  }
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))
            (param_1,&UNK_110485f08,lVar4,&UNK_110485f08,&PTR_DAT_112e2dba8,uStack_50,lStack_48);
  uVar3 = 0;
  func_0x000104889f74(0,1,FUN_101d71e7c,0);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(lVar4);
  func_0x0001000834e4(auStack_68);
  return uVar3;
}



/* Entry: 101d71908; end: 101d71a2b;  */

void FUN_101d71908(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar3 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101d73528(uVar3);
    func_0x000107c61574(lVar1);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_3);
    func_0x0001000d224c(&uStack_90);
    func_0x000107c61574(uVar3);
    uVar3 = uStack_90;
    func_0x000107c614f0(uStack_90);
    (**(code **)(lStack_88 + 8))
              (param_4,param_5,PTR___swiftEmptyArrayStorage_11034f1c8,uVar3,lStack_88);
    func_0x000107c615e8(uStack_90);
  }
  puVar2 = PTR_PTR_1126a94b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar2;
  return;
}



/* Entry: 101d71a2c; end: 101d71bc7;  */

undefined ** FUN_101d71a2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined1 auStack_48 [8];
  
  auStack_68[0] = param_1;
  func_0x000107c614b0();
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  ppuVar2 = &puStack_78;
  func_0x000107c6147c(ppuVar2,auStack_68,uVar4,&UNK_11047f130,6);
  if (((ulong)ppuVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (char)puStack_78 == '\v';
  }
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&puStack_78);
    func_0x000107c61574(uVar4);
    puVar3 = puStack_78;
    func_0x000107c614f0(puStack_78);
    (**(code **)(lStack_70 + 0x20))
              (param_3,param_4,PTR___swiftEmptyArrayStorage_11034f1c8,bVar1,puVar3,lStack_70);
    func_0x000107c615e8(puStack_78);
  }
  puVar3 = PTR_PTR_1126a94b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c614cc(param_1,auStack_48,auStack_90);
  uVar4 = uStack_88;
  FUN_101d73958(uStack_88,uStack_80);
  func_0x000107c54654(puVar3);
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e29f10,&UNK_10da12308);
  ppuVar2 = &puStack_78;
  puStack_78 = puVar3;
  func_0x000104888f7c(ppuVar2);
  func_0x000107c61170(puVar3);
  return ppuVar2;
}



/* Entry: 101d71bc8; end: 101d71db7;  */

void FUN_101d71bc8(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574(uVar5);
    if (lStack_60 != 0) {
      lVar1 = lStack_60;
      func_0x000107c41678();
      if (0 < lVar1) {
        func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
        puVar2 = &UNK_11047f028;
        func_0x000107c613fc(&UNK_11047f028,0x18,7);
        *(long *)(puVar2 + 0x10) = lStack_60;
        func_0x000107c615f0(lStack_60);
        uVar5 = 0x60;
        func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000014,0x800000010f00ef00,&UNK_10da12320,
                            puVar2);
        func_0x000107c61574(puVar2);
        puVar2 = &UNK_11047f050;
        func_0x000107c613fc(&UNK_11047f050,0x18,7);
        *(long *)(puVar2 + 0x10) = lVar6;
        puVar3 = &UNK_11047f078;
        func_0x000107c613fc(&UNK_11047f078,0x20,7);
        *(code **)(puVar3 + 0x10) = FUN_101d734e8;
        *(undefined **)(puVar3 + 0x18) = puVar2;
        uVar4 = 0;
        func_0x000101d737c0(0,0x112e29f20,&PTR_PTR_1126a94b0);
        func_0x000107c61174(lVar6);
        func_0x000100775264(0,1,FUN_101d734f0,puVar3,uVar4);
        func_0x000107c615e8(lStack_60);
        func_0x000107c61574(uVar5);
        func_0x000107c61574(puVar3);
        return;
      }
      func_0x000107c615e8(lStack_60);
    }
  }
  func_0x0001000285a8(0x112e29f10,&UNK_10da12308);
  lStack_60 = lVar6;
  func_0x000104888f7c(&lStack_60);
  return;
}



/* Entry: 101d71db8; end: 101d71dcf;  */

void FUN_101d71db8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d71dd0,0,0);
  return;
}



/* Entry: 101d71dd0; end: 101d71e7b;  */

void FUN_101d71dd0(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x10);
  func_0x000107c41678();
  uVar1 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  if (9 < (long)uVar1) {
    uVar1 = 10;
  }
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101d71e40;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (uVar1 * 1000000000);
  return;
}



/* Entry: 101d71e7c; end: 101d71f57;  */

undefined * FUN_101d71e7c(undefined8 param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bStack_31;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  pbVar2 = &bStack_31;
  func_0x000107c6147c(pbVar2,&uStack_28,uVar1,&UNK_110485fc8,6);
  if ((int)pbVar2 == 0) {
    bVar5 = 0x19;
  }
  else {
    bVar5 = (byte)(0x1919060405 >> (((ulong)bStack_31 & 7) << 3));
  }
  FUN_101d71794();
  puVar3 = &UNK_11047f130;
  func_0x000107c613f8(&UNK_11047f130,pbVar2,0,0);
  *pbVar2 = bVar5;
  func_0x0001000285a8(0x112e29f78,&UNK_10da12328);
  puVar4 = puVar3;
  func_0x00010488904c(puVar3);
  func_0x000107c614ac(puVar3);
  return puVar4;
}



/* Entry: 101d71f58; end: 101d720a7;  */

undefined8 FUN_101d71f58(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 5000) {
    uVar1 = 0x1b;
    if (param_1 < 0x7d2) {
      if (param_1 == -9999) {
        return 0x18;
      }
      if (param_1 == 2000) {
        return 0x1b;
      }
      if (param_1 == 0x7d1) {
        return 7;
      }
    }
    else {
      switch(param_1) {
      case 4000:
        return 9;
      case 0xfa1:
        return 10;
      case 0xfa2:
        return 0xb;
      case 0xfa3:
        return 0xc;
      case 0xfa4:
        return 0xd;
      case 0xfa5:
        return 0xe;
      case 0xfa6:
        return 0xf;
      case 0xfa7:
        return 0x10;
      case 0xfa8:
        return 0x11;
      case 0xfa9:
        goto LAB_101d72044;
      default:
        if (param_1 == 0x7d2) {
          return 8;
        }
      }
    }
  }
  else if (param_1 < 0x138b) {
    if (param_1 == 5000) {
      return 0x12;
    }
    if (param_1 == 0x1389) {
      return 0x13;
    }
    if (param_1 == 0x138a) {
      return 0x14;
    }
  }
  else {
    if (param_1 == 0x138b) {
      return 0x15;
    }
    if (param_1 == 0x138c) {
      return 0x16;
    }
    if (param_1 == 0x138d) {
      return 0x17;
    }
  }
  uVar1 = 0x19;
LAB_101d72044:
  return uVar1;
}



/* Entry: 101d720a8; end: 101d7249b;  */

ulong FUN_101d720a8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7218c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d72190);
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
  func_0x000101d737c0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d72264);
  (*pcVar2)();
}



/* Entry: 101d7249c; end: 101d72503;  */

/* WARNING: Possible PIC construction at 0x000101d724cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d724d0) */
/* WARNING: Removing unreachable block (ram,0x000101d724d4) */

void FUN_101d7249c(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112e29f88;
    plVar5 = (long *)&UNK_10da12340;
  }
  else {
    puVar3 = (ulong *)0x112d51a30;
    plVar5 = (long *)&UNK_10d925850;
    unaff_x30 = 0x101d724d0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 101d72504; end: 101d7264b;  */

ulong FUN_101d72504(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7264c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101d72bb4(uVar2,uVar4,0x112e29160,&PTR_PTR_1126e0da8,0x112e29530,&UNK_10da11a30);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d72648);
      (*pcVar1)();
    }
    FUN_101d72c44(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101d7264c; end: 101d7276f;  */

undefined * FUN_101d7264c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d72770);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e29f98;
    func_0x0001000285a8(0x112e29f98,&UNK_10da12348);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11047f348);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101d72770; end: 101d72b0f;  */

ulong FUN_101d72770(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d72898);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101d72b10(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d72894);
      (*pcVar1)();
    }
    FUN_101d72d5c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101d72b10; end: 101d72b8f;  */

undefined * FUN_101d72b10(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101d7249c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101d72b90; end: 101d72bb3;  */

undefined * FUN_101d72b90(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112e28b08;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000101d72424(0x112e28b08,&PTR_PTR_1126bc7d8,0x112e28b28,&UNK_10da11c10);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(ulong *)(puVar1 + 0x18) = ((long)puVar3 >> 3) << 1 | 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 101d72bb4; end: 101d72c43;  */

undefined *
FUN_101d72bb4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000101d72424(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}


