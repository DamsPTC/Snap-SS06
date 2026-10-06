/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d54ef4; end: 102d55053;  */

void FUN_102d54ef4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar1 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    FUN_102d5449c();
    if (puVar2 == (undefined1 *)0x0) {
      FUN_102d5594c();
      puVar3 = &UNK_1105c9610;
      func_0x000107c613f8(&UNK_1105c9610,puVar2,0,0);
      *puVar2 = 3;
      uStack_60 = 1;
      puStack_68 = puVar3;
      func_0x000100087f6c(&puStack_68);
      func_0x000107c614ac(puVar3);
      func_0x000100c7f554();
    }
    else {
      puVar3 = param_3;
      FUN_102d5700c(param_3,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        FUN_102d5594c();
        puVar4 = &UNK_1105c9610;
        func_0x000107c613f8(&UNK_1105c9610,puVar3,0,0);
        *puVar3 = 4;
        uStack_60 = 1;
        puStack_68 = puVar4;
        func_0x000100087f6c(&puStack_68);
        func_0x000107c614ac(puVar4);
      }
      else {
        uStack_60 = 0;
        puStack_68 = param_3;
        func_0x000107c61174(param_3);
        func_0x000100087f6c(&puStack_68);
        func_0x000107c61170(param_3);
      }
      func_0x000100c7f554();
      func_0x000107c61170(puVar1);
      puVar1 = puVar2;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102d55054; end: 102d553c7;  */

void FUN_102d55054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  puVar1 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    FUN_102d5449c();
    if (puVar2 == (undefined1 *)0x0) {
      FUN_102d5594c();
      puVar11 = &UNK_1105c9610;
      func_0x000107c613f8(&UNK_1105c9610,puVar2,0,0);
      *puVar2 = 3;
      uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
      puStack_a8 = puVar11;
      func_0x000100087c34(&puStack_a8);
      func_0x000107c614ac(puVar11);
      func_0x0001048872ac();
    }
    else {
      puVar11 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar13 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar4 = param_3;
      func_0x000107c4a77c();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(undefined8 *)(lVar3 + 0x28) = uVar13;
      lVar6 = lVar3;
      func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar3);
      func_0x000107c42fcc();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      puVar7 = puVar11;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar7 == (undefined1 *)0x0) {
        FUN_102d5594c();
        puVar12 = &UNK_1105c9610;
        func_0x000107c613f8(&UNK_1105c9610,puVar11,0,0);
        *puVar11 = 0;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
        puStack_a8 = puVar12;
        func_0x000100087c34(&puStack_a8);
        func_0x000107c614ac(puVar12);
        func_0x0001048872ac();
        func_0x000107c61170(puVar1);
        puVar1 = puVar2;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
        func_0x000107c610f8(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
        func_0x000107c453e4();
        func_0x000107c59b44();
        func_0x000107c53ff4(puVar8);
        func_0x000107c57e40(puVar8);
        puVar9 = puVar8;
        func_0x000107c56a38(puVar8);
        FUN_102d54420();
        puVar11 = &UNK_1105c94d8;
        func_0x000107c613fc(&UNK_1105c94d8,0x18,7);
        func_0x000107c61614(puVar11 + 0x10,puVar1);
        puVar12 = &UNK_1105c9550;
        func_0x000107c613fc(&UNK_1105c9550,0x30,7);
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(undefined8 *)(puVar12 + 0x18) = param_2;
        *(undefined1 **)(puVar12 + 0x20) = puVar2;
        *(undefined8 *)(puVar12 + 0x28) = param_3;
        uStack_88 = 0x102d573b8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f9eee0;
        puStack_90 = &UNK_1105c9568;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar12;
        func_0x000107c60bc4(ppuVar10);
        puVar11 = puStack_80;
        func_0x000107c61174(puVar8);
        func_0x000107c6157c(param_2);
        func_0x000107c61174(puVar2);
        func_0x000107c61174(param_3);
        func_0x000107c61574(puVar11);
        func_0x000107c5037c(0x4079000000000000,0x4079000000000000,puVar9);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        puVar1 = puVar8;
      }
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102d553c8; end: 102d5563b;  */

void FUN_102d553c8(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  puVar1 = (undefined8 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = puVar1;
  if (param_2 != (undefined1 *)0x0) {
    uVar2 = *(undefined8 *)PTR__PHImageResultIsDegradedKey_1103481d0;
    func_0x000107c5faec();
    uStack_c8 = uVar2;
    puStack_c0 = puVar7;
    func_0x000107c61434(puVar7);
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&uStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_102d554a4:
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar3 = &puStack_b8;
      func_0x000100df95d0(ppuVar3);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_102d554a4;
      }
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)ppuVar3 * 0x20,&uStack_90);
      func_0x000107c6142c(puVar7);
      puVar7 = param_2;
    }
    func_0x000107c6142c(puVar7);
    func_0x0001007bbff0(&puStack_b8);
    if (lStack_78 == 0) {
      puVar4 = &uStack_90;
      FUN_102d57338(puVar4,0x112d387f8,&UNK_10d902650);
    }
    else {
      puVar4 = &uStack_c8;
      func_0x000107c6147c(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((((ulong)puVar4 & 1) != 0) && ((char)uStack_c8 == '\x01')) {
        FUN_102d5594c();
        puVar6 = &UNK_1105c9610;
        func_0x000107c613f8(&UNK_1105c9610,puVar4,0,0);
        *(undefined1 *)puVar4 = 1;
        goto LAB_102d555fc;
      }
    }
  }
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar5 = param_1;
    FUN_102d5700c();
    puVar6 = (undefined *)0x0;
    func_0x000102d54400();
    func_0x000107c613fc();
    *(undefined8 *)(puVar6 + 0x10) = param_6;
    puVar6[0x18] = (byte)lVar5 & 1;
    uStack_b0 = 0;
    puStack_b8 = puVar6;
    func_0x000107c61174(param_6);
    func_0x000107c6157c(puVar6);
    func_0x000100087c34(&puStack_b8);
    func_0x000107c61574(puVar6);
    func_0x0001048872ac();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar6);
    return;
  }
  FUN_102d5594c();
  puVar6 = &UNK_1105c9610;
  func_0x000107c613f8(&UNK_1105c9610,puVar4,0,0);
  *(undefined1 *)puVar4 = 2;
LAB_102d555fc:
  uStack_b0 = 1;
  puStack_b8 = puVar6;
  func_0x000100087c34(&puStack_b8);
  func_0x000107c614ac(puVar6);
  func_0x0001048872ac();
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102d5563c; end: 102d5569b; -[_TtC38SCGenerativeAIOnboardingImplementation32GenAIMemoriesPickerDataValidator init] */

void FUN_102d5563c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenerativeAIOnboardingImplementation.GenAIMemoriesPickerDataValidator",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55668);
  (*pcVar1)();
}



/* Entry: 102d5569c; end: 102d556e3; -[_TtC38SCGenerativeAIOnboardingImplementation32GenAIMemoriesPickerDataValidator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5569c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f113c8));
  FUN_102d57318(*(undefined8 *)(param_1 + _DAT_112f113d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f113d8));
  return;
}



/* Entry: 102d556e4; end: 102d55703;  */

void FUN_102d556e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2950);
  return;
}



/* Entry: 102d55704; end: 102d5585b;  */

int FUN_102d55704(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d55780;
        goto LAB_102d55764;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d55764:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d55780:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d5585c; end: 102d5589b;  */

void FUN_102d5585c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f11408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db44dfc;
  func_0x000107c61520(&UNK_10db44dfc,&UNK_1105c9480);
  puRam0000000112f11408 = puVar1;
  return;
}



/* Entry: 102d5589c; end: 102d55933;  */

void FUN_102d5589c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = param_1;
  FUN_102d546ac();
  puVar2 = &UNK_1105c94b0;
  func_0x000107c613fc(&UNK_1105c94b0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  func_0x0001000285a8(0x112f10df0,&UNK_10db44d00);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_1);
  func_0x0001000b64ac(FUN_102d55934,puVar2);
  return;
}



/* Entry: 102d55934; end: 102d5594b;  */

void FUN_102d55934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c614f0(uVar2);
  puVar3 = &UNK_1105c94d8;
  func_0x000107c613fc(&UNK_1105c94d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,uVar1);
  puVar4 = &UNK_1105c9500;
  func_0x000107c613fc(&UNK_1105c9500,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar5);
  func_0x00010090569c(0x102d55940,puVar4,uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 102d5594c; end: 102d5598b;  */

void FUN_102d5594c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f11410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db44ef0;
  func_0x000107c61520(&UNK_10db44ef0,&UNK_1105c9610);
  puRam0000000112f11410 = puVar1;
  return;
}



/* Entry: 102d5598c; end: 102d55acf;  */

undefined * FUN_102d5598c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d55ad0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f11428;
    func_0x0001000285a8(0x112f11428,&UNK_10db44e50);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f11430;
    func_0x0001000285a8(0x112f11430,&UNK_10db44e58);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102d55ad0; end: 102d55b1b;  */

ulong FUN_102d55ad0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55f18);
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
  FUN_102d55f18(uVar2,uVar4,0x102d5b004);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55f14);
      (*pcVar1)();
    }
    FUN_102d562a4(0,uVar2,uVar3 + 0x20,param_4,0x112d63f00,&UNK_10d929700);
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



/* Entry: 102d55b1c; end: 102d55c57;  */

ulong FUN_102d55b1c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55c58);
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
  FUN_102d55f18(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55c54);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102d55c58; end: 102d55c73;  */

ulong FUN_102d55c58(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55dbc);
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
  FUN_102d55f18(uVar2,uVar4,0x102d5b10c);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55db8);
      (*pcVar1)();
    }
    FUN_102d56090(0,uVar2,uVar3 + 0x20,param_4,0x112d4ccd8,
                  &PTR__OBJC_CLASS___UIViewController_1126af898);
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



/* Entry: 102d55c74; end: 102d55dbb;  */

ulong FUN_102d55c74(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55dbc);
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
  FUN_102d55f18(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55db8);
      (*pcVar1)();
    }
    FUN_102d56090(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102d55dbc; end: 102d55dcf;  */

ulong FUN_102d55dbc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55c58);
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
  FUN_102d55f18(uVar2,uVar4,0x102d5b130);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55c54);
      (*pcVar1)();
    }
    FUN_102d561ac(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102d55dd0; end: 102d55f17;  */

ulong FUN_102d55dd0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55f18);
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
  FUN_102d55f18(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d55f14);
      (*pcVar1)();
    }
    FUN_102d562a4(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102d55f18; end: 102d55f97;  */

undefined * FUN_102d55f18(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 102d55f98; end: 102d5608f;  */

long FUN_102d55f98(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d5608c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d56090);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102d509b0(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102d509b0(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d56088);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102d56090; end: 102d561ab;  */

long FUN_102d56090(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d561a8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d561ac);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102d573e0(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102d573e0(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d561a4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102d561ac; end: 102d562a3;  */

long FUN_102d561ac(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d562a0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d562a4);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000102d47068(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000102d47068(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d5629c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102d562a4; end: 102d563b7;  */

long FUN_102d562a4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d563b4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      lVar5 = param_1;
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d563b8);
        (*pcVar3)();
      }
      do {
        lVar1 = lVar5 + 1;
        uVar4 = param_5;
        func_0x0001000285a8(param_5,param_6);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e != 0) {
    uVar2 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8
    )(param_1,param_2,param_3,uVar2);
    return param_1;
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d563b0);
    (*pcVar3)();
  }
  func_0x0001000285a8(param_5,param_6);
  func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,
                      param_5);
  func_0x000107c6142c(param_4);
  return param_3 + (param_2 - param_1) * 8;
}



/* Entry: 102d563b8; end: 102d56553;  */

ulong FUN_102d563b8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d56488);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d5648c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000102d47068(0);
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
    func_0x000102d47068(0);
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
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f10b2e0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d56554);
  (*pcVar2)();
}



/* Entry: 102d56554; end: 102d56583;  */

ulong FUN_102d56554(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d56828);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d5682c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
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
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
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
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d568fc);
  (*pcVar2)();
}



/* Entry: 102d56584; end: 102d568fb;  */

ulong FUN_102d56584(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d56668);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d5666c);
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
  FUN_102d573e0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d56740);
  (*pcVar2)();
}



/* Entry: 102d568fc; end: 102d56a97;  */

ulong FUN_102d568fc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d569cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d569d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_102d509b0(0);
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
    FUN_102d509b0(0);
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
  func_0x000107c5fb78(0xd000000000000018,0x800000010f10b300);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d56a98);
  (*pcVar2)();
}



/* Entry: 102d56a98; end: 102d56c07;  */

void FUN_102d56a98(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f10d08,&UNK_10db44790);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102d56b74;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_102d56b74:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102d56c08);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102d56be0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102d56be0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102d56c08; end: 102d56ea3;  */

void FUN_102d56c08(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f10d08;
  func_0x0001000285a8(0x112f10d08,&UNK_10db44790);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102d56e70:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d56ea0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102d56e70;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d56ea4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102d56ea4; end: 102d5700b;  */

bool FUN_102d56ea4(double param_1,double param_2,double param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 >> 0x3e == 0) {
    if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) != 1) {
      return false;
    }
  }
  else {
    uVar6 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar6 = param_4;
    }
    uVar5 = uVar6;
    func_0x000107c60480();
    if (uVar5 != 1) {
      return false;
    }
    func_0x000107c60480();
    if (uVar6 == 0) {
      return false;
    }
  }
  if ((param_4 & 0xc000000000000001) == 0) {
    if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5700c);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar3 = 0;
    FUN_102d56584(0,param_4,&PTR__OBJC_CLASS___CIFeature_1126a6370,0x112d5dc40);
  }
  func_0x000107c3ec60();
  func_0x000107c3ec60(uVar3);
  func_0x000107c3ec60(uVar3);
  func_0x000107c3ec60(uVar3);
  uVar4 = uVar3;
  func_0x000107c3ec60();
  iVar2 = (int)uVar4;
  func_0x000107c609d0(0,0,param_1,param_2,param_1 * 0.05,param_2 * 0.05);
  func_0x000107c609a8();
  func_0x000107c61170(uVar3);
  if (iVar2 == 0) {
    return false;
  }
  return param_1 * 0.15 <= param_3;
}



/* Entry: 102d5700c; end: 102d57317;  */

uint FUN_102d5700c(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  puVar2 = param_1;
  func_0x000107c3ab40();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x000107c3ab2c();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d57318);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c45af0();
    func_0x000107c61170(puVar3);
  }
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = puVar2;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  puVar3 = PTR___sypN_11034f1a8;
  puVar5 = puVar4;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar4);
  lVar6 = *(long *)PTR__kCGImagePropertyOrientation_110349d48;
  func_0x000107c5faec(lVar6);
  if (*(long *)(puVar5 + 0x10) == 0) {
LAB_102d571bc:
    uStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar5);
  }
  else {
    func_0x000107c61434(puVar5);
    puVar4 = puVar9;
    func_0x000100029284(lVar6);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107c6142c(puVar5);
      goto LAB_102d571bc;
    }
    func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar6 * 0x20,&puStack_b0);
    func_0x000107c6142c(puVar9);
    func_0x000107c61430(puVar5,2);
    if (lStack_98 != 0) {
      puVar10 = auStack_88;
      func_0x000100102924(&puStack_b0,puVar10);
      uVar7 = *(undefined8 *)PTR__CIDetectorImageOrientation_11034ac50;
      func_0x000107c5faec(uVar7);
      func_0x0001000bb420(auStack_88,&puStack_b0);
      uStack_e8 = uStack_a8;
      puStack_f0 = puStack_b0;
      lStack_d8 = lStack_98;
      uStack_e0 = uStack_a0;
      if (lStack_98 == 0) {
        FUN_102d57338(&puStack_f0,0x112d387f8,&UNK_10d902650);
        func_0x000100216878(auStack_d0,uVar7,puVar10);
        func_0x000107c6142c(puVar10);
        FUN_102d57338(auStack_d0,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&puStack_f0,auStack_d0);
        puVar4 = puVar11;
        func_0x000107c61558(puVar11);
        puStack_f0 = puVar11;
        func_0x0001001029e8(auStack_d0,uVar7,puVar10,puVar4);
        func_0x000107c6142c(puVar10);
        puStack_68 = puStack_f0;
      }
      puVar11 = puStack_68;
      func_0x000100183ab8(auStack_88);
      goto LAB_102d571f4;
    }
  }
  FUN_102d57338(&puStack_b0,0x112d387f8,&UNK_10d902650);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
LAB_102d571f4:
  puVar4 = puVar11;
  func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,puVar3 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c42ef4(param_2);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = 0;
  FUN_102d573e0(0,0x112d5dc40,&PTR__OBJC_CLASS___CIFeature_1126a6370);
  uVar7 = param_2;
  func_0x000107c5fc54(param_2,uVar8);
  func_0x000107c61170(param_2);
  func_0x000107c5b078(param_1);
  uVar8 = uVar7;
  FUN_102d56ea4(uVar7);
  func_0x000107c6142c(puVar11);
  func_0x000107c6142c(uVar7);
  func_0x000107c61170(puVar2);
  return (uint)uVar8 & 1;
}



/* Entry: 102d57318; end: 102d57337;  */

void FUN_102d57318(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d57338; end: 102d57377;  */

undefined8 FUN_102d57338(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102d57378; end: 102d573ab;  */

void FUN_102d57378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d573ac; end: 102d573df;  */

void FUN_102d573ac(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  puVar2 = (undefined1 *)(lVar4 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
    FUN_102d5449c();
    if (puVar3 == (undefined1 *)0x0) {
      FUN_102d5594c();
      puVar12 = &UNK_1105c9610;
      func_0x000107c613f8(&UNK_1105c9610,puVar3,0,0);
      *puVar3 = 3;
      uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
      puStack_a8 = puVar12;
      func_0x000100087c34(&puStack_a8);
      func_0x000107c614ac(puVar12);
      func_0x0001048872ac();
    }
    else {
      puVar12 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      lVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar14 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      uVar5 = uVar15;
      func_0x000107c4a77c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar5 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar14;
      lVar7 = lVar4;
      func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar4);
      func_0x000107c42fcc();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      puVar8 = puVar12;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar8 == (undefined1 *)0x0) {
        FUN_102d5594c();
        puVar13 = &UNK_1105c9610;
        func_0x000107c613f8(&UNK_1105c9610,puVar12,0,0);
        *puVar12 = 0;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
        puStack_a8 = puVar13;
        func_0x000100087c34(&puStack_a8);
        func_0x000107c614ac(puVar13);
        func_0x0001048872ac();
        func_0x000107c61170(puVar2);
        puVar2 = puVar3;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
        func_0x000107c610f8(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
        func_0x000107c453e4();
        func_0x000107c59b44();
        func_0x000107c53ff4(puVar9);
        func_0x000107c57e40(puVar9);
        puVar10 = puVar9;
        func_0x000107c56a38(puVar9);
        FUN_102d54420();
        puVar12 = &UNK_1105c94d8;
        func_0x000107c613fc(&UNK_1105c94d8,0x18,7);
        func_0x000107c61614(puVar12 + 0x10,puVar2);
        puVar13 = &UNK_1105c9550;
        func_0x000107c613fc(&UNK_1105c9550,0x30,7);
        *(undefined **)(puVar13 + 0x10) = puVar12;
        *(undefined8 *)(puVar13 + 0x18) = uVar1;
        *(undefined1 **)(puVar13 + 0x20) = puVar3;
        *(undefined8 *)(puVar13 + 0x28) = uVar15;
        uStack_88 = 0x102d573b8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f9eee0;
        puStack_90 = &UNK_1105c9568;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar13;
        func_0x000107c60bc4(ppuVar11);
        puVar12 = puStack_80;
        func_0x000107c61174(puVar9);
        func_0x000107c6157c(uVar1);
        func_0x000107c61174(puVar3);
        func_0x000107c61174(uVar15);
        func_0x000107c61574(puVar12);
        func_0x000107c5037c(0x4079000000000000,0x4079000000000000,puVar10);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar9);
        puVar2 = puVar9;
      }
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102d573e0; end: 102d5741f;  */

void FUN_102d573e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d57420; end: 102d57577;  */

int FUN_102d57420(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d5749c;
        goto LAB_102d57480;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d57480:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102d5749c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d57578; end: 102d575b7;  */

void FUN_102d57578(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f11438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db44ec8;
  func_0x000107c61520(&UNK_10db44ec8,&UNK_1105c9610);
  puRam0000000112f11438 = puVar1;
  return;
}



/* Entry: 102d575b8; end: 102d575fb;  */

undefined1 FUN_102d575b8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102d575fc; end: 102d576a7;  */

void FUN_102d575fc(void)

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



/* Entry: 102d576a8; end: 102d576b7;  */

void FUN_102d576a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d576b8; end: 102d5775f;  */

void FUN_102d576b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102d57760(param_3,param_4,param_5,param_1);
    func_0x000107c61574(param_2);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 102d57760; end: 102d578ef;  */

void FUN_102d57760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = *(undefined1 **)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_102d57eb4();
    puVar5 = &UNK_1105c97e0;
    func_0x000107c613f8(&UNK_1105c97e0,puVar1,0,0);
    *puVar1 = 1;
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    puStack_80 = puVar5;
    func_0x000100087f6c(&puStack_80);
    func_0x000107c614ac(puVar5);
    func_0x000100c7f554();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c44424();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    puVar5 = &UNK_1105c96a8;
    func_0x000107c613fc(&UNK_1105c96a8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar3 = &UNK_1105c96f8;
    func_0x000107c613fc(&UNK_1105c96f8,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    *(undefined8 *)(puVar3 + 0x30) = param_3;
    pcStack_60 = FUN_102d57ef4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105c9710;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(puVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar2);
  }
  return;
}



/* Entry: 102d578f0; end: 102d57bdb;  */

void FUN_102d578f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  puVar2 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61648();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_102d57eb4();
    puVar8 = &UNK_1105c97e0;
    func_0x000107c613f8(&UNK_1105c97e0,puVar2,0,0);
    *puVar2 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    puStack_a8 = puVar8;
    func_0x000100087f6c(&puStack_a8);
    func_0x000107c614ac(puVar8);
    func_0x000100c7f554();
  }
  else {
    puVar8 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168();
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar3);
    func_0x000107c42fcc();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar5 = puVar8;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar5 == (undefined1 *)0x0) {
      FUN_102d57eb4();
      puVar9 = &UNK_1105c97e0;
      func_0x000107c613f8(&UNK_1105c97e0,puVar8,0,0);
      *puVar8 = 2;
      uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
      puStack_a8 = puVar9;
      func_0x000100087f6c(&puStack_a8);
      func_0x000107c614ac(puVar9);
      func_0x000100c7f554();
      func_0x000107c61574(puVar2);
    }
    else {
      puVar6 = puVar5;
      func_0x000107c4ca5c();
      if (puVar6 == (undefined1 *)0x1) {
        uVar10 = *(undefined8 *)(puVar2 + 0x10);
        uVar11 = *(undefined8 *)(param_5 + 0x10);
        uVar12 = *(undefined8 *)(param_5 + 0x18);
        puVar6 = *(undefined1 **)(param_5 + 0x28);
        uStack_88 = 0x102d57f20;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f9eee0;
        puStack_90 = &UNK_1105c9738;
        ppuVar7 = &puStack_a8;
        uStack_80 = param_2;
        func_0x000107c60bc4(ppuVar7);
        uVar1 = uStack_80;
        func_0x000107c61174(puVar6);
        func_0x000107c6157c(param_2);
        func_0x000107c61174(uVar10);
        func_0x000107c61574(uVar1);
        func_0x000107c5037c(uVar11,uVar12,uVar10);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar10);
        puVar5 = puVar6;
      }
      else {
        FUN_102d57eb4();
        puVar8 = &UNK_1105c97e0;
        func_0x000107c613f8(&UNK_1105c97e0,puVar6,0,0);
        *puVar6 = 3;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
        puStack_a8 = puVar8;
        func_0x000100087f6c(&puStack_a8);
        func_0x000107c614ac(puVar8);
        func_0x000100c7f554();
        func_0x000107c61574(puVar2);
      }
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 102d57bdc; end: 102d57d97;  */

void FUN_102d57bdc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = param_1;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)PTR__PHImageResultIsDegradedKey_1103481d0;
    lVar5 = param_2;
    func_0x000107c5faec();
    uStack_88 = uVar1;
    lStack_80 = lVar5;
    func_0x000107c61434(lVar5);
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_102d57c80:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar2 = &puStack_78;
      func_0x000100df95d0(ppuVar2);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_102d57c80;
      }
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)ppuVar2 * 0x20,&uStack_50);
      func_0x000107c6142c(lVar5);
      lVar5 = param_2;
    }
    func_0x000107c6142c(lVar5);
    func_0x0001007bbff0(&puStack_78);
    if (lStack_38 == 0) {
      puVar3 = &uStack_50;
      func_0x00010006e7f4();
    }
    else {
      puVar3 = &uStack_88;
      func_0x000107c6147c(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((((ulong)puVar3 & 1) != 0) && ((char)uStack_88 == '\x01')) {
        FUN_102d57eb4();
        puVar4 = (undefined8 *)&UNK_1105c97e0;
        func_0x000107c613f8(&UNK_1105c97e0,puVar3,0,0);
        uVar7 = 4;
        goto LAB_102d57d5c;
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    uStack_70 = 0;
    puStack_78 = param_1;
    func_0x000107c61174(param_1);
    func_0x000100087f6c(&puStack_78);
    func_0x000100c7f554();
    func_0x000107c61170(param_1);
    return;
  }
  FUN_102d57eb4();
  puVar4 = (undefined8 *)&UNK_1105c97e0;
  func_0x000107c613f8(&UNK_1105c97e0,puVar3,0,0);
  uVar7 = 5;
LAB_102d57d5c:
  *(undefined1 *)puVar3 = uVar7;
  uStack_70 = 1;
  puStack_78 = puVar4;
  func_0x000100087f6c(&puStack_78);
  func_0x000107c614ac(puVar4);
  func_0x000100c7f554();
  return;
}



/* Entry: 102d57d98; end: 102d57de3;  */

void FUN_102d57d98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d57de4; end: 102d57ea7;  */

void FUN_102d57de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1105c96a8;
  func_0x000107c613fc(&UNK_1105c96a8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1105c96d0;
  func_0x000107c613fc(&UNK_1105c96d0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x0001000285a8(0x112f10df0,&UNK_10db44d00);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000b64ac(FUN_102d57ea8,puVar2);
  return;
}



/* Entry: 102d57ea8; end: 102d57eb3;  */

void FUN_102d57ea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_102d57760(uVar2,uVar1,uVar3,param_1);
    func_0x000107c61574(lVar4);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 102d57eb4; end: 102d57ef3;  */

void FUN_102d57eb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f114e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db45008;
  func_0x000107c61520(&UNK_10db45008,&UNK_1105c97e0);
  puRam0000000112f114e8 = puVar1;
  return;
}



/* Entry: 102d57ef4; end: 102d5808f;  */

void FUN_102d57ef4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar11 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  puVar3 = (undefined1 *)(lVar4 + 0x10);
  func_0x000107c61648();
  if (puVar3 == (undefined1 *)0x0) {
    FUN_102d57eb4();
    puVar9 = &UNK_1105c97e0;
    func_0x000107c613f8(&UNK_1105c97e0,puVar3,0,0);
    *puVar3 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    puStack_a8 = puVar9;
    func_0x000100087f6c(&puStack_a8);
    func_0x000107c614ac(puVar9);
    func_0x000100c7f554();
  }
  else {
    puVar9 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168();
    lVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = uVar1;
    *(undefined8 *)(lVar4 + 0x28) = uVar12;
    func_0x000107c61434(uVar12);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar4);
    func_0x000107c42fcc();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar6 = puVar9;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar6 == (undefined1 *)0x0) {
      FUN_102d57eb4();
      puVar10 = &UNK_1105c97e0;
      func_0x000107c613f8(&UNK_1105c97e0,puVar9,0,0);
      *puVar9 = 2;
      uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
      puStack_a8 = puVar10;
      func_0x000100087f6c(&puStack_a8);
      func_0x000107c614ac(puVar10);
      func_0x000100c7f554();
      func_0x000107c61574(puVar3);
    }
    else {
      puVar7 = puVar6;
      func_0x000107c4ca5c();
      if (puVar7 == (undefined1 *)0x1) {
        uVar12 = *(undefined8 *)(puVar3 + 0x10);
        uVar13 = *(undefined8 *)(lVar11 + 0x10);
        uVar14 = *(undefined8 *)(lVar11 + 0x18);
        puVar7 = *(undefined1 **)(lVar11 + 0x28);
        uStack_88 = 0x102d57f20;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f9eee0;
        puStack_90 = &UNK_1105c9738;
        ppuVar8 = &puStack_a8;
        uStack_80 = uVar2;
        func_0x000107c60bc4(ppuVar8);
        uVar1 = uStack_80;
        func_0x000107c61174(puVar7);
        func_0x000107c6157c(uVar2);
        func_0x000107c61174(uVar12);
        func_0x000107c61574(uVar1);
        func_0x000107c5037c(uVar13,uVar14,uVar12);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar12);
        puVar6 = puVar7;
      }
      else {
        FUN_102d57eb4();
        puVar9 = &UNK_1105c97e0;
        func_0x000107c613f8(&UNK_1105c97e0,puVar7,0,0);
        *puVar7 = 3;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
        puStack_a8 = puVar9;
        func_0x000100087f6c(&puStack_a8);
        func_0x000107c614ac(puVar9);
        func_0x000100c7f554();
        func_0x000107c61574(puVar3);
      }
      func_0x000107c61170(puVar6);
    }
  }
  return;
}



/* Entry: 102d58090; end: 102d580cf;  */

void FUN_102d58090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f114f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db44fe0;
  func_0x000107c61520(&UNK_10db44fe0,&UNK_1105c97e0);
  puRam0000000112f114f0 = puVar1;
  return;
}



/* Entry: 102d580d0; end: 102d580d7;  */

void FUN_102d580d0(long param_1,long param_2)

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



/* Entry: 102d580d8; end: 102d5811b;  */

void FUN_102d580d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d5811c; end: 102d5812f;  */

bool FUN_102d5811c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d58130; end: 102d581db;  */

void FUN_102d58130(void)

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



/* Entry: 102d581dc; end: 102d581eb;  */

void FUN_102d581dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d581ec; end: 102d583bb;  */

void FUN_102d581ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar4 = puVar3;
    FUN_102d589b8();
    puVar5 = &UNK_1105c9938;
    func_0x000107c613f8(&UNK_1105c9938,puVar4,0,0);
    *puVar4 = 2;
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar5);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puStack_60 = puVar3;
    func_0x000100087f6c(&puStack_60);
    func_0x000107c61170(puVar3);
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    FUN_102d583bc(param_3);
    puVar5 = &UNK_1105c9878;
    func_0x000107c613fc(&UNK_1105c9878,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,param_2);
    uVar1 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    pcVar2 = FUN_102d589f8;
    func_0x00010068b194(FUN_102d589f8,puVar5,uVar1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar5);
    pcVar7 = *(code **)(*(long *)pcVar2 + 0x60);
    func_0x000107c6157c(param_1);
    (*pcVar7)(FUN_102d58a00,param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(pcVar2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102d583bc; end: 102d58597;  */

code * FUN_102d583bc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59b44();
  func_0x000107c53ff4(puVar1);
  func_0x000107c57e40(puVar1);
  func_0x000107c56a38(puVar1);
  func_0x0001000d224c(&lStack_68);
  lVar2 = lStack_68;
  func_0x000107c49820();
  func_0x000107c61170(lStack_68);
  lVar3 = 0;
  func_0x000102d580fc();
  func_0x000107c613fc();
  *(double *)(lVar3 + 0x10) = (double)lVar2;
  *(double *)(lVar3 + 0x18) = (double)lVar2;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined **)(lVar3 + 0x28) = puVar1;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x0001000a8868(unaff_x20 + 0x60,uVar8);
  func_0x000107c61174(puVar1);
  func_0x000107c4a77c(param_1);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c4a77c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar4 = uVar5;
  func_0x000107c5faec(uVar5);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  func_0x000102d57dc4(0);
  FUN_102d57de4(uVar4,uVar8,lVar3,uVar5,&PTR_DAT_1105c9688);
  func_0x000107c6142c(uVar8);
  puVar6 = &UNK_1105c9878;
  func_0x000107c613fc(&UNK_1105c9878,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  uVar5 = 0x112f10df8;
  func_0x0001000285a8(0x112f10df8,&UNK_10db44860);
  pcVar7 = FUN_102d58a6c;
  func_0x00010068b194(FUN_102d58a6c,puVar6,uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar6);
  return pcVar7;
}



/* Entry: 102d58598; end: 102d588ab;  */

undefined1 * FUN_102d58598(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar2 = &puStack_60;
  ppuVar6 = &puStack_60;
  puVar7 = (undefined1 *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar7 = puVar3;
    FUN_102d589b8();
    puVar4 = &UNK_1105c9938;
    func_0x000107c613f8(&UNK_1105c9938,puVar7,0,0);
    *puVar7 = 2;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puStack_60 = puVar3;
    func_0x000100854cb0(&puStack_60);
    func_0x000107c61170(puVar3);
  }
  else {
    if (cVar1 == '\x01') {
      func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar5 = puVar3;
      func_0x000102d58a2c();
      puVar4 = &UNK_1105c8048;
      func_0x000107c613f8(&UNK_1105c8048,puVar5,0,0);
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar4);
      func_0x000107c42d78();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puStack_60 = puVar3;
      func_0x000100854cb0(&puStack_60);
      func_0x000107c61170(puVar3);
      puVar7 = (undefined1 *)ppuVar2;
    }
    else {
      func_0x0001000a8868(param_2 + 0x10,*(undefined8 *)(param_2 + 0x28));
      FUN_102d58cec(puVar7);
    }
    func_0x000107c61574(param_2);
    ppuVar6 = (undefined **)puVar7;
  }
  return (undefined1 *)ppuVar6;
}



/* Entry: 102d588ac; end: 102d58907;  */

void FUN_102d588ac(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d58908; end: 102d589af;  */

void FUN_102d58908(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1105c9878;
  func_0x000107c613fc(&UNK_1105c9878,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1105c98a0;
  func_0x000107c613fc(&UNK_1105c98a0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x0001000285a8(0x112dd7470,&UNK_10da162b0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x0001000b64ac(FUN_102d589b0,puVar2);
  return;
}



/* Entry: 102d589b0; end: 102d589b7;  */

void FUN_102d589b0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  undefined1 *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar6 = puVar5;
    FUN_102d589b8();
    puVar7 = &UNK_1105c9938;
    func_0x000107c613f8(&UNK_1105c9938,puVar6,0,0);
    *puVar6 = 2;
    puVar8 = puVar7;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar7);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puStack_60 = puVar5;
    func_0x000100087f6c(&puStack_60);
    func_0x000107c61170(puVar5);
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    FUN_102d583bc(uVar2);
    puVar7 = &UNK_1105c9878;
    func_0x000107c613fc(&UNK_1105c9878,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar1);
    uVar3 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    pcVar4 = FUN_102d589f8;
    func_0x00010068b194(FUN_102d589f8,puVar7,uVar3);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(puVar7);
    pcVar9 = *(code **)(*(long *)pcVar4 + 0x60);
    func_0x000107c6157c(param_1);
    (*pcVar9)(FUN_102d58a00,param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102d589b8; end: 102d589f7;  */

void FUN_102d589b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f11678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db45188;
  func_0x000107c61520(&UNK_10db45188,&UNK_1105c9938);
  puRam0000000112f11678 = puVar1;
  return;
}



/* Entry: 102d589f8; end: 102d589ff;  */

undefined1 * FUN_102d589f8(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar3 = &puStack_60;
  ppuVar7 = &puStack_60;
  puVar8 = (undefined1 *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar8 = puVar4;
    FUN_102d589b8();
    puVar5 = &UNK_1105c9938;
    func_0x000107c613f8(&UNK_1105c9938,puVar8,0,0);
    *puVar8 = 2;
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar5);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puStack_60 = puVar4;
    func_0x000100854cb0(&puStack_60);
    func_0x000107c61170(puVar4);
  }
  else {
    if (cVar1 == '\x01') {
      func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar6 = puVar4;
      func_0x000102d58a2c();
      puVar5 = &UNK_1105c8048;
      func_0x000107c613f8(&UNK_1105c8048,puVar6,0,0);
      puVar6 = puVar5;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar5);
      func_0x000107c42d78();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puStack_60 = puVar4;
      func_0x000100854cb0(&puStack_60);
      func_0x000107c61170(puVar4);
      puVar8 = (undefined1 *)ppuVar3;
    }
    else {
      func_0x0001000a8868(lVar2 + 0x10,*(undefined8 *)(lVar2 + 0x28));
      FUN_102d58cec(puVar8);
    }
    func_0x000107c61574(lVar2);
    ppuVar7 = (undefined **)puVar8;
  }
  return (undefined1 *)ppuVar7;
}



/* Entry: 102d58a00; end: 102d58a6b;  */

void FUN_102d58a00(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 102d58a6c; end: 102d58bdb;  */

undefined8 *** FUN_102d58a6c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  long unaff_x20;
  undefined8 **ppuStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  pppuVar7 = (undefined8 ***)*param_1;
  lVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    puVar4 = (undefined1 *)0x112f11688;
    func_0x0001000285a8(0x112f11688,&UNK_10db45110);
    FUN_102d589b8();
    ppuVar5 = (undefined8 **)&UNK_1105c9938;
    func_0x000107c613f8(&UNK_1105c9938,puVar4,0,0);
    *puVar4 = 2;
    uStack_60 = 1;
    pppuVar7 = &ppuStack_68;
    ppuStack_68 = ppuVar5;
    func_0x000100854cb0(pppuVar7);
    func_0x000107c614ac(ppuVar5);
  }
  else {
    if ((char)lVar1 == '\x01') {
      func_0x0001000285a8(0x112f11688,&UNK_10db45110);
      uStack_60 = 1;
      pppuVar3 = &ppuStack_68;
      ppuStack_68 = pppuVar7;
      func_0x000100854cb0(pppuVar3);
      pppuVar7 = pppuVar3;
    }
    else {
      func_0x0001000a8868(lVar2 + 0x38,*(undefined8 *)(lVar2 + 0x50));
      uVar6 = 0;
      FUN_102d556e4(0);
      FUN_102d5589c(pppuVar7,uVar6,&PTR_DAT_1105c9490);
    }
    func_0x000107c61574(lVar2);
  }
  return pppuVar7;
}



/* Entry: 102d58bdc; end: 102d58c1b;  */

void FUN_102d58bdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f11690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db45160;
  func_0x000107c61520(&UNK_10db45160,&UNK_1105c9938);
  puRam0000000112f11690 = puVar1;
  return;
}



/* Entry: 102d58c1c; end: 102d58c2f;  */

bool FUN_102d58c1c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d58c30; end: 102d58cdb;  */

void FUN_102d58c30(void)

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



/* Entry: 102d58cdc; end: 102d58ceb;  */

void FUN_102d58cdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d58cec; end: 102d58f13;  */

undefined1 ** FUN_102d58cec(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 **ppuVar9;
  long unaff_x20;
  undefined1 *puStack_48;
  
  ppuVar1 = *(undefined1 ***)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar1 == (undefined1 **)0x0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar6 = puVar5;
    func_0x000102d58f58();
    puVar7 = &UNK_1105c9a40;
    func_0x000107c613f8(&UNK_1105c9a40,puVar6,0,0);
    *puVar6 = 0;
    puVar8 = puVar7;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar7);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    ppuVar9 = &puStack_48;
    puStack_48 = puVar5;
    func_0x000100854cb0(ppuVar9);
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c60bb4(0x3ff0000000000000);
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar6 = puVar5;
      func_0x000102d58f58();
      puVar7 = &UNK_1105c9a40;
      func_0x000107c613f8(&UNK_1105c9a40,puVar6,0,0);
      *puVar6 = 1;
      puVar8 = puVar7;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar7);
      func_0x000107c42d78();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      ppuVar9 = &puStack_48;
      puStack_48 = puVar5;
      func_0x000100854cb0(ppuVar9);
      func_0x000107c61170(puVar5);
    }
    else {
      lVar2 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      lVar3 = lVar2;
      func_0x000107c5ee20(lVar2,param_2);
      ppuVar4 = ppuVar1;
      func_0x000107c5d724(ppuVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
      ppuVar9 = ppuVar4;
      func_0x0001000b637c(ppuVar4);
      func_0x000107c61170(ppuVar4);
      func_0x00010006c090(lVar2,param_2);
    }
    func_0x000107c615e8(ppuVar1);
  }
  return ppuVar9;
}



/* Entry: 102d58f14; end: 102d58f97;  */

void FUN_102d58f14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d58f98; end: 102d590ff;  */

int FUN_102d58f98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d59014;
        goto LAB_102d58ff8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d58ff8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d59014:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d59100; end: 102d5913f;  */

void FUN_102d59100(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f11740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db45290;
  func_0x000107c61520(&UNK_10db45290,&UNK_1105c9a40);
  puRam0000000112f11740 = puVar1;
  return;
}



/* Entry: 102d59140; end: 102d59153;  */

bool FUN_102d59140(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d59154; end: 102d591ff;  */

void FUN_102d59154(void)

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



/* Entry: 102d59200; end: 102d5920f;  */

void FUN_102d59200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d59210; end: 102d593db;  */

undefined1 * FUN_102d59210(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar2 = &puStack_60;
  ppuVar6 = &puStack_60;
  puVar7 = (undefined1 *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar7 = puVar3;
    func_0x000102d598fc();
    puVar4 = &UNK_1105c9c10;
    func_0x000107c613f8(&UNK_1105c9c10,puVar7,0,0);
    *puVar7 = 2;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puStack_60 = puVar3;
    func_0x000100854cb0(&puStack_60);
    func_0x000107c61170(puVar3);
  }
  else {
    if (cVar1 == '\x01') {
      func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar5 = puVar3;
      func_0x000102d58a2c();
      puVar4 = &UNK_1105c8048;
      func_0x000107c613f8(&UNK_1105c8048,puVar5,0,0);
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar4);
      func_0x000107c42d78();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puStack_60 = puVar3;
      func_0x000100854cb0(&puStack_60);
      func_0x000107c61170(puVar3);
      puVar7 = (undefined1 *)ppuVar2;
    }
    else {
      func_0x0001000a8868(param_2 + 0x10,*(undefined8 *)(param_2 + 0x28));
      FUN_102d58cec(puVar7);
    }
    func_0x000107c61574(param_2);
    ppuVar6 = (undefined **)puVar7;
  }
  return (undefined1 *)ppuVar6;
}



/* Entry: 102d593dc; end: 102d5949b;  */

void FUN_102d593dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  pcStack_40 = FUN_102d5993c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1013516f4;
  puStack_48 = &UNK_1105c9ac8;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5dc64(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 102d5949c; end: 102d5969f;  */

void FUN_102d5949c(undefined1 *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  if (param_1 == (undefined1 *)0x0) {
    if (param_2 == (undefined *)0x0) {
      func_0x000102d598fc();
      param_2 = &UNK_1105c9c10;
      func_0x000107c613f8(&UNK_1105c9c10,param_1,0,0);
      *param_1 = 0;
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = param_2;
    }
    else {
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = param_2;
      func_0x000107c614b0(param_2);
    }
    func_0x000100087f6c(&puStack_90);
    func_0x000107c614ac(param_2);
    uVar6 = 0;
    uVar7 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c61174();
    puVar2 = param_1;
    func_0x000107c45218();
    func_0x000107c61180();
    puVar3 = &UNK_1105c9b00;
    func_0x000107c613fc(&UNK_1105c9b00,0x20,7);
    uVar6 = 0x102d59960;
    *(undefined8 *)(puVar3 + 0x10) = 0x102d59960;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x102d59b48;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1019fdb4c;
    puStack_78 = &UNK_1105c9b18;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1105c9b50;
    func_0x000107c613fc(&UNK_1105c9b50,0x20,7);
    uVar7 = 0x102d59968;
    *(undefined8 *)(puVar3 + 0x10) = 0x102d59968;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    pcStack_70 = FUN_102d59970;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101a36974;
    puStack_78 = &UNK_1105c9b68;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c4c668(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
  }
  func_0x000100c7f554();
  func_0x000100d25a40(uVar6,param_3);
  func_0x000100d25a40(uVar7,param_3);
  return;
}



/* Entry: 102d596a0; end: 102d59747;  */

void FUN_102d596a0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = param_1;
  func_0x000107c61174();
  func_0x000100087f6c(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d59748; end: 102d598af;  */

undefined8 *** FUN_102d59748(long *param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined1 *puVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  pppuVar6 = (undefined8 ***)*param_1;
  lVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    puVar3 = (undefined1 *)0x112f11688;
    func_0x0001000285a8(0x112f11688,&UNK_10db45110);
    func_0x000102d598fc();
    ppuVar4 = (undefined8 **)&UNK_1105c9c10;
    func_0x000107c613f8(&UNK_1105c9c10,puVar3,0,0);
    *puVar3 = 2;
    uStack_60 = 1;
    pppuVar6 = &ppuStack_68;
    ppuStack_68 = ppuVar4;
    func_0x000100854cb0(pppuVar6);
    func_0x000107c614ac(ppuVar4);
  }
  else if ((char)lVar1 == '\x01') {
    func_0x0001000285a8(0x112f11688,&UNK_10db45110);
    uStack_60 = 1;
    ppuStack_68 = pppuVar6;
    func_0x000107c614b0(pppuVar6);
    pppuVar2 = &ppuStack_68;
    func_0x000100854cb0(pppuVar2);
    func_0x000107c61574(param_2);
    func_0x000101c17ab4(pppuVar6,1);
    pppuVar6 = pppuVar2;
  }
  else {
    func_0x0001000a8868(param_2 + 0x38,*(undefined8 *)(param_2 + 0x50));
    uVar5 = 0;
    FUN_102d556e4(0);
    FUN_102d5589c(pppuVar6,uVar5,&PTR_DAT_1105c9490);
    func_0x000107c61574(param_2);
  }
  return pppuVar6;
}



/* Entry: 102d598b0; end: 102d5993b;  */

void FUN_102d598b0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d5993c; end: 102d5996f;  */

void FUN_102d5993c(undefined1 *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  if (param_1 == (undefined1 *)0x0) {
    if (param_2 == (undefined *)0x0) {
      func_0x000102d598fc();
      param_2 = &UNK_1105c9c10;
      func_0x000107c613f8(&UNK_1105c9c10,param_1,0,0);
      *param_1 = 0;
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = param_2;
    }
    else {
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = param_2;
      func_0x000107c614b0(param_2);
    }
    func_0x000100087f6c(&puStack_90);
    func_0x000107c614ac(param_2);
    uVar6 = 0;
    uVar7 = 0;
    unaff_x20 = 0;
  }
  else {
    func_0x000107c61174();
    puVar2 = param_1;
    func_0x000107c45218();
    func_0x000107c61180();
    puVar3 = &UNK_1105c9b00;
    func_0x000107c613fc(&UNK_1105c9b00,0x20,7);
    uVar6 = 0x102d59960;
    *(undefined8 *)(puVar3 + 0x10) = 0x102d59960;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x102d59b48;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1019fdb4c;
    puStack_78 = &UNK_1105c9b18;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1105c9b50;
    func_0x000107c613fc(&UNK_1105c9b50,0x20,7);
    uVar7 = 0x102d59968;
    *(undefined8 *)(puVar3 + 0x10) = 0x102d59968;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    pcStack_70 = FUN_102d59970;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101a36974;
    puStack_78 = &UNK_1105c9b68;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    func_0x000107c4c668(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
  }
  func_0x000100c7f554();
  func_0x000100d25a40(uVar6,unaff_x20);
  func_0x000100d25a40(uVar7,unaff_x20);
  return;
}



/* Entry: 102d59970; end: 102d5998f;  */

void FUN_102d59970(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102d59990; end: 102d59af7;  */

int FUN_102d59990(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d59a0c;
        goto LAB_102d599f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d599f0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102d59a0c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d59af8; end: 102d59b37;  */

void FUN_102d59af8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f117f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db453b0;
  func_0x000107c61520(&UNK_10db453b0,&UNK_1105c9c10);
  puRam0000000112f117f8 = puVar1;
  return;
}



/* Entry: 102d59b38; end: 102d59b4b;  */

void FUN_102d59b38(long param_1,long param_2)

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



/* Entry: 102d59b4c; end: 102d59b9f;  */

void FUN_102d59b4c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x0001000834e4(unaff_x20 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d59ba0; end: 102d59d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d59ba0(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f118b8) != 0) {
    FUN_102d59d08();
    lVar3 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    uVar8 = 0x70;
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    lVar4 = lVar3;
    func_0x000102d5b8b8();
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    lVar5 = lVar4;
    func_0x00010075bbf0();
    *(long *)(lVar3 + 0x40) = lVar5;
    *(long *)(lVar3 + 0x20) = lVar4;
    *(undefined8 *)(lVar3 + 0x28) = uVar8;
    lVar6 = 0x656e6f64;
    func_0x000107c5fadc(0x656e6f64,0xe400000000000000);
    uVar7 = 0;
    func_0x000107c5fe40();
    lVar4 = lVar6;
    uVar8 = uVar7;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar7);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d59d08);
      (*pcVar2)();
    }
    lVar6 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    *(undefined **)(lVar3 + 0x60) = puVar1;
    *(long *)(lVar3 + 0x68) = lVar5;
    *(long *)(lVar3 + 0x48) = lVar6;
    *(undefined8 *)(lVar3 + 0x50) = uVar8;
    uVar8 = 0x40250a4025;
    uVar7 = 0xe500000000000000;
    func_0x000107c5fb00(0x40250a4025,0xe500000000000000,lVar3);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
    func_0x000107c59c6c(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar8);
    *(undefined1 *)(unaff_x20 + _DAT_112f118e0) = 1;
  }
  return;
}



/* Entry: 102d59d08; end: 102d59eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d59d08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f118c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f118c8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000102d59d68();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102d59eb0; end: 102d5a04f;  */

undefined * FUN_102d59eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c4509c(0x4044000000000000,0x4044000000000000,0x4024000000000000,0x4024000000000000,
                      0x4024000000000000,0x4024000000000000,puVar1,param_2,0x2f3,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x000107c3abe4();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar4 = puVar2;
  func_0x000107c5af88(puVar2,param_2,0xd5);
  func_0x000107c61180();
  func_0x000107c59e10(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c5af88(puVar2,param_2,0x7a);
  func_0x000107c61180();
  func_0x000107c52b50(puVar3,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c539d4(0x4034000000000000,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c55260(puVar3,param_2,puVar1,2);
  func_0x000107c3d8b8(puVar3,param_2,param_1,PTR_s_cancel_1125a9090,0x40);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 102d5a050; end: 102d5a077; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAILoadingViewController initWithCoder:] */

void FUN_102d5a050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102d5b380();
  return;
}



/* Entry: 102d5a078; end: 102d5aabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5a078(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long *plVar13;
  long unaff_x20;
  long lVar14;
  code *pcVar15;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar14 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a820);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3feccccccccccccd);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52b50(lVar14);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar3);
  puVar2 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar14 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a824);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar14);
  lVar14 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a828);
    (*pcVar1)();
  }
  lVar4 = lVar14;
  FUN_102d59d08();
  func_0x000107c3d89c(lVar14);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar4);
  lVar14 = 0x112d360b8;
  FUN_102d5b04c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar4 = lVar14;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0xb;
  *(undefined8 *)(lVar4 + 0x10) = 5;
  puVar3 = puVar2;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar4 + 0x20) = puVar7;
    puVar3 = puVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a830);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar4 + 0x28) = puVar7;
    lVar5 = _DAT_112f118c8;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f118c8);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a834);
      (*pcVar1)();
    }
    lVar9 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar10 = uVar8;
    func_0x000107c40284(0x4034000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar9);
    *(undefined8 *)(lVar4 + 0x30) = uVar10;
    uVar8 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a838);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar9 = lVar6;
    func_0x000107c5ce8c(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar10 = uVar8;
    func_0x000107c40284(0xc034000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar9);
    *(undefined8 *)(lVar4 + 0x38) = uVar10;
    uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar7 = puVar2;
    func_0x000107c3ec1c(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar8 = uVar10;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar7);
    *(undefined8 *)(lVar4 + 0x40) = uVar8;
    uVar10 = 0;
    func_0x000102d5b478(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar4;
    uVar8 = uVar10;
    func_0x000107c5fc48(lVar4,uVar10);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c5ba54(puVar2);
    if (*(char *)(unaff_x20 + _DAT_112f118c0) == '\x01') {
      lVar4 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a83c);
        (*pcVar1)();
      }
      lVar5 = lVar4;
      func_0x000102d59e4c();
      func_0x000107c3d89c(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c613fc(lVar14,((ulong)*(uint *)(lVar14 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                          *(ushort *)(lVar14 + 0x34) | 7);
      *(undefined8 *)(lVar14 + 0x18) = 9;
      *(undefined8 *)(lVar14 + 0x10) = 4;
      lVar4 = _DAT_112f118d0;
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f118d0);
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar5 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a840);
        (*pcVar1)();
      }
      lVar6 = lVar5;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      uVar11 = uVar8;
      func_0x000107c40284(0x402c000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar6);
      *(undefined8 *)(lVar14 + 0x20) = uVar11;
      uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar5 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a844);
        (*pcVar1)();
      }
      lVar6 = lVar5;
      func_0x000107c515ac();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      lVar5 = lVar6;
      func_0x000107c5cbe4(lVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      uVar11 = uVar8;
      func_0x000107c40284(0x4034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar5);
      *(undefined8 *)(lVar14 + 0x28) = uVar11;
      uVar11 = *(undefined8 *)(unaff_x20 + lVar4);
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar8 = uVar11;
      func_0x000107c40290(0x4044000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      *(undefined8 *)(lVar14 + 0x30) = uVar8;
      uVar11 = *(undefined8 *)(unaff_x20 + lVar4);
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar8 = uVar11;
      func_0x000107c40290(0x4044000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      *(undefined8 *)(lVar14 + 0x38) = uVar8;
      lVar4 = lVar14;
      func_0x000107c5fc48(lVar14,uVar10);
      func_0x000107c61574(lVar14);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(lVar4);
      uVar8 = uVar10;
    }
    lVar14 = *(long *)(unaff_x20 + _DAT_112f118b8);
    if (lVar14 != 0) {
      uVar10 = 0;
      func_0x000107c5eea4();
      func_0x000107c613f4();
      func_0x000107c6157c(lVar14);
      func_0x000107c5ee60(uVar8);
      pcVar12 = "viewDidLoad()";
      func_0x0001000c10c0();
      func_0x000107c61180();
      plVar13 = (long *)pcVar12;
      func_0x000100471e0c();
      func_0x000107c615e8(pcVar12);
      puVar3 = &UNK_1105c9cb0;
      func_0x000107c613fc(&UNK_1105c9cb0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar7 = &UNK_1105c9cd8;
      func_0x000107c613fc(&UNK_1105c9cd8,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(undefined8 *)(puVar7 + 0x18) = uVar10;
      pcVar15 = *(code **)(*plVar13 + 0x60);
      func_0x000107c6157c(uVar10);
      pcVar1 = FUN_102d5b250;
      puVar3 = puVar7;
      (*pcVar15)(FUN_102d5b250);
      func_0x000107c61574(plVar13);
      func_0x000107c61574(puVar7);
      pcVar15 = pcVar1;
      func_0x000107c614f0(pcVar1);
      (**(code **)(puVar3 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f118d8),pcVar15,puVar3);
      func_0x000107c61574(lVar14);
      func_0x000107c61574(uVar10);
      func_0x000107c615e8(pcVar1);
    }
    func_0x000107c61170(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5a82c);
  (*pcVar1)();
}



/* Entry: 102d5aabc; end: 102d5ac2b;  */

/* WARNING: Possible PIC construction at 0x000102d5ab50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5abe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5abfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5abe8) */
/* WARNING: Removing unreachable block (ram,0x000102d5ab54) */
/* WARNING: Removing unreachable block (ram,0x000102d5ac00) */

void FUN_102d5aabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_1105c9cb0;
  func_0x000107c613fc(&UNK_1105c9cb0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105c9d00;
  func_0x000107c613fc(&UNK_1105c9d00,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  if (param_4 == '\x01') {
    func_0x000107c6157c(puVar1);
    FUN_102d5ac54();
  }
  else {
    func_0x0001000c10c0("updateLabel(completeCount:totalCount:after:)");
    func_0x000107c61180();
    uStack_60 = 0x102d5b258;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105c9d18;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102d5ac2c; end: 102d5ac53; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAILoadingViewController viewDidLoad] */

void FUN_102d5ac2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d5a078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d5ac54; end: 102d5ada3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ac54(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar6 = param_1;
    if (((*(byte *)(param_1 + _DAT_112f118e0) & 1) == 0) && (param_2 <= param_3)) {
      lVar3 = param_1;
      FUN_102d59d08();
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      uVar7 = 0x98;
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 6;
      *(undefined8 *)(lVar4 + 0x10) = 3;
      lVar6 = lVar4;
      func_0x000102d5b8b8();
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      lVar5 = lVar6;
      func_0x00010075bbf0();
      *(long *)(lVar4 + 0x20) = lVar6;
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      puVar2 = PTR___ss5Int64Vs7CVarArgsWP_11034ee78;
      puVar1 = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar4 + 0x60) = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar4 + 0x68) = puVar2;
      *(long *)(lVar4 + 0x40) = lVar5;
      *(long *)(lVar4 + 0x48) = param_2;
      *(undefined **)(lVar4 + 0x88) = puVar1;
      *(undefined **)(lVar4 + 0x90) = puVar2;
      *(long *)(lVar4 + 0x70) = param_3;
      lVar6 = 0x64252f64250a4025;
      uVar7 = 0xe800000000000000;
      func_0x000107c5fb00(0x64252f64250a4025,0xe800000000000000,lVar4);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
      func_0x000107c59c6c(lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102d5ada4; end: 102d5aeb3;  */

/* WARNING: Possible PIC construction at 0x000102d5ae54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ae6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5ae70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ada4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar2 = unaff_x20 + _DAT_112f118b0;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2 + _DAT_112f10ee0;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000100c82230();
    plVar4 = (long *)(lVar3 + _DAT_112f111d0);
    func_0x0001000a8868(plVar4,plVar4[3]);
    lVar1 = _DAT_112f10f68;
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + _DAT_112f10f68);
    if (lVar5 != 0) {
      func_0x000107c4f090();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c420a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar5);
        return;
      }
    }
    *(undefined8 *)(lVar6 + lVar1) = 0;
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102d5aeb4; end: 102d5aedb; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAILoadingViewController cancel] */

void FUN_102d5aeb4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d5ada4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d5aedc; end: 102d5af3b; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAILoadingViewController initWithNibName:bundle:] */

void FUN_102d5aedc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenerativeAIOnboardingImplementation.GenAILoadingViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5af08);
  (*pcVar1)();
}


