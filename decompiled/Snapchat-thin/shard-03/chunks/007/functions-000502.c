/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c62e08; end: 102c62fe7;  */

bool FUN_102c62e08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar5 = 0x112f05ca8;
  func_0x0001000285a8(0x112f05ca8,&UNK_10db39d80);
  uVar6 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  if (uVar6 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar4 = uVar6;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001011f72c0(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c62fe8);
      (*pcVar3)();
    }
    uVar11 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar12 = *(ulong *)(uVar6 + uVar11 * 8 + 0x20);
        func_0x000107c615f0(uVar12);
      }
      else {
        uVar12 = uVar11;
        func_0x000102c8028c(uVar11,uVar6);
      }
      uVar5 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      uVar7 = uVar12;
      func_0x000107c5ade4();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar12);
      uVar12 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar12) {
        func_0x0001011f72c0(1 < *(ulong *)(puVar10 + 0x18),uVar12 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
      puVar10[uVar12 + 0x20] = (char)uVar7;
    } while (uVar4 != uVar11);
    func_0x000107c6142c(uVar6);
  }
  lVar2 = *(long *)(puVar10 + 0x10);
  pcVar9 = puVar10 + 0x20;
  do {
    lVar8 = lVar2;
    if (lVar8 == 0) break;
    cVar1 = *pcVar9;
    lVar2 = lVar8 + -1;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\x01');
  func_0x000107c6142c(puVar10);
  return lVar8 != 0;
}



/* Entry: 102c62fe8; end: 102c62ff3; -[_TtC24AdPlaybackImplementation27AdChromePlaybackSessionImpl shouldTriggerAttachmentOnTapChromeWithPageId:] */

uint FUN_102c62fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_102c62e08(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102c62ff4; end: 102c631d3;  */

bool FUN_102c62ff4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar5 = 0x112f05ca8;
  func_0x0001000285a8(0x112f05ca8,&UNK_10db39d80);
  uVar6 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  if (uVar6 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar4 = uVar6;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001011f72c0(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c631d4);
      (*pcVar3)();
    }
    uVar11 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar12 = *(ulong *)(uVar6 + uVar11 * 8 + 0x20);
        func_0x000107c615f0(uVar12);
      }
      else {
        uVar12 = uVar11;
        func_0x000102c8028c(uVar11,uVar6);
      }
      uVar5 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      uVar7 = uVar12;
      func_0x000107c5ade0();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar12);
      uVar12 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar12) {
        func_0x0001011f72c0(1 < *(ulong *)(puVar10 + 0x18),uVar12 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
      puVar10[uVar12 + 0x20] = (char)uVar7;
    } while (uVar4 != uVar11);
    func_0x000107c6142c(uVar6);
  }
  lVar2 = *(long *)(puVar10 + 0x10);
  pcVar9 = puVar10 + 0x20;
  do {
    lVar8 = lVar2;
    if (lVar8 == 0) break;
    cVar1 = *pcVar9;
    lVar2 = lVar8 + -1;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\x01');
  func_0x000107c6142c(puVar10);
  return lVar8 != 0;
}



/* Entry: 102c631d4; end: 102c631df; -[_TtC24AdPlaybackImplementation27AdChromePlaybackSessionImpl shouldTriggerAttachmentOnTapChromeProfileIconWithPageId:] */

uint FUN_102c631d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_102c62ff4(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102c631e0; end: 102c63243;  */

uint FUN_102c631e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102c63244; end: 102c6342f;  */

bool FUN_102c63244(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar12 = 0x112f05ca8;
  func_0x0001000285a8(0x112f05ca8,&UNK_10db39d80);
  uVar5 = uVar4;
  func_0x000107c5fc54(uVar4,uVar12);
  func_0x000107c61170(uVar4);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar5);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001011f72c0(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c63430);
      (*pcVar3)();
    }
    uVar10 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar11 = *(ulong *)(uVar5 + uVar10 * 8 + 0x20);
        func_0x000107c615f0(uVar11);
        if (param_2 != 0) goto LAB_102c63308;
LAB_102c63330:
        uVar12 = 0;
      }
      else {
        uVar11 = uVar10;
        func_0x000102c8028c(uVar10,uVar5);
        if (param_2 == 0) goto LAB_102c63330;
LAB_102c63308:
        uVar12 = param_1;
        func_0x000107c5fadc(param_1,param_2);
      }
      uVar6 = uVar11;
      func_0x000107c3d9e4();
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(uVar11);
      uVar11 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
        func_0x0001011f72c0(1 < *(ulong *)(puVar9 + 0x18),uVar11 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar11 + 1;
      puVar9[uVar11 + 0x20] = (char)uVar6;
    } while (uVar4 != uVar10);
    func_0x000107c6142c(uVar5);
  }
  lVar2 = *(long *)(puVar9 + 0x10);
  pcVar8 = puVar9 + 0x20;
  do {
    lVar7 = lVar2;
    if (lVar7 == 0) break;
    cVar1 = *pcVar8;
    lVar2 = lVar7 + -1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\x01');
  func_0x000107c6142c(puVar9);
  return lVar7 != 0;
}



/* Entry: 102c63430; end: 102c6349f; -[_TtC24AdPlaybackImplementation27AdChromePlaybackSessionImpl adsDrivenSwipeLeftToShowAttachmentWithPageId:] */

uint FUN_102c63430(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(param_1);
  FUN_102c63244(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102c634a0; end: 102c634d3; -[_TtC24AdPlaybackImplementation27AdChromePlaybackSessionImpl isPresentingProfile] */

uint FUN_102c634a0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102c634d4();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102c634d4; end: 102c63687;  */

bool FUN_102c634d4(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar5 = 0x112f05ca8;
  func_0x0001000285a8(0x112f05ca8,&UNK_10db39d80);
  uVar6 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  if (uVar6 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar4 = uVar6;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001011f72c0(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c63688);
      (*pcVar3)();
    }
    uVar11 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar12 = *(ulong *)(uVar6 + uVar11 * 8 + 0x20);
        func_0x000107c615f0(uVar12);
      }
      else {
        uVar12 = uVar11;
        func_0x000102c8028c(uVar11,uVar6);
      }
      uVar7 = uVar12;
      func_0x000107c4a224();
      func_0x000107c615e8(uVar12);
      uVar12 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar12) {
        func_0x0001011f72c0(1 < *(ulong *)(puVar10 + 0x18),uVar12 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
      puVar10[uVar12 + 0x20] = (char)uVar7;
    } while (uVar4 != uVar11);
    func_0x000107c6142c(uVar6);
  }
  lVar2 = *(long *)(puVar10 + 0x10);
  pcVar9 = puVar10 + 0x20;
  do {
    lVar8 = lVar2;
    if (lVar8 == 0) break;
    cVar1 = *pcVar9;
    lVar2 = lVar8 + -1;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\x01');
  func_0x000107c6142c(puVar10);
  return lVar8 != 0;
}



/* Entry: 102c63688; end: 102c636cb;  */

void FUN_102c63688(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c636cc; end: 102c63707;  */

void FUN_102c636cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102c63708; end: 102c63713;  */

void FUN_102c63708(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102c63714; end: 102c6380f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c63714(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long lStack_80;
  long lStack_78;
  long alStack_70 [3];
  long lStack_58;
  undefined **ppuStack_50;
  undefined1 auStack_48 [24];
  
  plVar5 = &lStack_80;
  lVar1 = 0;
  func_0x000102c636ac();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  lVar4 = _DAT_113069020;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar6 + _DAT_113069020,auStack_48,0,0);
  lVar6 = lVar6 + lVar4;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c53408();
    func_0x000107c615e8();
  }
  ppuStack_50 = &PTR_DAT_1105b9070;
  alStack_70[0] = lVar2;
  lStack_58 = lVar1;
  FUN_102c63810();
  lVar4 = lVar6;
  func_0x000107c610f8();
  FUN_102c5c59c(alStack_70,lVar4 + _DAT_112f05cb0);
  lStack_80 = lVar4;
  lStack_78 = lVar6;
  func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
  func_0x000102c5c5ec(alStack_70);
  return (undefined1 *)plVar5;
}



/* Entry: 102c63810; end: 102c6384b;  */

void FUN_102c63810(void)

{
  func_0x000107c61168(&PTR_PTR_11289a278);
  return;
}



/* Entry: 102c6384c; end: 102c638bb;  */

void FUN_102c6384c(void)

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



/* Entry: 102c638bc; end: 102c63997; -[_TtC24AdPlaybackImplementation38AdChromePlaybackSessionPrivateServices init] */

void FUN_102c638bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdChromePlaybackSessionPrivateServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c638e8);
  (*pcVar1)();
}



/* Entry: 102c63998; end: 102c639a7; -[_TtC24AdPlaybackImplementation38AdChromePlaybackSessionPrivateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c63998(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112f05cb0;
  lVar1 = 0x112f05948;
  func_0x0001000285a8(0x112f05948,&UNK_10db39c40);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102c639a8; end: 102c63a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c639a8(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x000103bffd54(0);
  func_0x000103bfe42c(uVar1,*(long *)(param_1 + _DAT_113068f48),
                      *(undefined8 *)(*(long *)(param_1 + _DAT_113068f48) + _DAT_11308f1e0),
                      *(undefined8 *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_11308f128),
                      *(undefined8 *)(unaff_x20 + _DAT_112f05de0),
                      *(undefined8 *)(unaff_x20 + _DAT_112f05dd8),
                      *(undefined8 *)(unaff_x20 + _DAT_112f05df0),
                      *(undefined8 *)(unaff_x20 + _DAT_112f05de8),0);
  return;
}



/* Entry: 102c63a4c; end: 102c63aab; -[_TtC24AdPlaybackImplementation25AdChromePropertiesBuilder init] */

void FUN_102c63a4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdChromePropertiesBuilder",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c63a78);
  (*pcVar1)();
}



/* Entry: 102c63aac; end: 102c63b37; -[_TtC24AdPlaybackImplementation25AdChromePropertiesBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c63ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c63afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c63b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c63b00) */
/* WARNING: Removing unreachable block (ram,0x000102c63acc) */
/* WARNING: Removing unreachable block (ram,0x000102c63b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c63aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f05db8));
  return;
}



/* Entry: 102c63b38; end: 102c63b57;  */

void FUN_102c63b38(void)

{
  func_0x000107c61168(&PTR_PTR_11289a338);
  return;
}



/* Entry: 102c63b58; end: 102c63b77;  */

void FUN_102c63b58(void)

{
  FUN_102c63be0();
  return;
}



/* Entry: 102c63b78; end: 102c63bdf;  */

undefined * FUN_102c63b78(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c63be0; end: 102c63e77;  */

/* WARNING: Possible PIC construction at 0x000102c63d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c63d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c63be0(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar14;
  undefined8 uVar15;
  long unaff_x24;
  undefined8 uVar16;
  long unaff_x25;
  undefined8 uVar17;
  ulong unaff_x26;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar14 = *(long *)(unaff_x20 + _DAT_112f05db8);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f05dc0);
  lVar11 = ((long *)(unaff_x20 + _DAT_112f05dc0))[1];
  lVar7 = lVar10;
  func_0x000107c5fadc(lVar10,lVar11);
  lVar8 = lVar14;
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar8 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar8);
    if (lVar7 != 0) {
      func_0x000103bffd54(0);
      unaff_x26 = *(ulong *)(*(long *)(lVar7 + _DAT_113068f48) + _DAT_11308f1e0);
      unaff_x22 = *(undefined8 *)(unaff_x20 + _DAT_112f05df0);
      func_0x000103bfe3f4(unaff_x26,
                          *(undefined8 *)(*(long *)(lVar7 + _DAT_113068f48) + _DAT_11308f1e8),
                          unaff_x22);
      lVar8 = lVar7;
      FUN_102c639a8();
      uVar9 = unaff_x26;
      func_0x000102c63b8c(unaff_x26,unaff_x22);
      if ((uVar9 & 1) != 0) {
        func_0x000107c5fadc(lVar10,lVar11);
        func_0x000107c4ee30();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        if (lVar14 == 0) {
          uVar19 = 0;
          uVar15 = 0;
        }
        else {
          uVar19 = *(undefined8 *)(lVar14 + _DAT_113813300);
          uVar15 = ((undefined8 *)(lVar14 + _DAT_113813300))[1];
          func_0x000107c61434(uVar15);
          func_0x000107c61170(lVar14);
        }
        lVar10 = _DAT_112f05dd0;
        uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f05dc8);
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f05de0);
        puVar18 = *(undefined **)(unaff_x20 + _DAT_112f05de8);
        lVar11 = 0;
        func_0x000102c64bc0();
        uStack_c8 = ((undefined8 *)(unaff_x20 + lVar10))[1];
        uStack_d0 = *(undefined8 *)(unaff_x20 + lVar10);
        func_0x000107c61534();
        *(long *)(lVar11 + 0x10) = lVar7;
        *(undefined8 *)(lVar11 + 0x18) = uVar16;
        *(undefined8 *)(lVar11 + 0x28) = uStack_c8;
        *(undefined8 *)(lVar11 + 0x20) = uStack_d0;
        *(undefined8 *)(lVar11 + 0x30) = uVar17;
        *(undefined8 *)(lVar11 + 0x38) = unaff_x22;
        *(undefined8 *)(lVar11 + 0x40) = uVar19;
        *(undefined8 *)(lVar11 + 0x48) = uVar15;
        *(int *)(lVar11 + 0x50) = (int)lVar8;
        *(undefined **)(lVar11 + 0x58) = puVar18;
        func_0x000107c61174(uVar16);
        func_0x000107c615f0(uStack_d0);
        func_0x000107c615f0(uVar17);
        func_0x000107c615f0(puVar18);
        func_0x000102c65c34();
        func_0x000107c61588(lVar11);
        func_0x000107c61170(*(undefined8 *)(lVar11 + 0x10));
        func_0x000107c61170(*(undefined8 *)(lVar11 + 0x18));
        func_0x000107c615e8(*(undefined8 *)(lVar11 + 0x20));
        func_0x000107c615e8(*(undefined8 *)(lVar11 + 0x30));
        func_0x000107c6142c(*(undefined8 *)(lVar11 + 0x48));
        func_0x000107c615e8(*(undefined8 *)(lVar11 + 0x58));
        return puVar18;
      }
      unaff_x30 = 0x102c63d6c;
      register0x00000008 = (BADSPACEBASE *)&uStack_d0;
      unaff_x19 = unaff_x20;
      unaff_x20 = lVar8;
      unaff_x21 = lVar7;
      unaff_x23 = lVar14;
      unaff_x24 = lVar10;
      unaff_x25 = lVar11;
      unaff_x29 = puVar1;
    }
  }
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar13;
    func_0x000107c60498();
    puVar18 = puVar18 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar18,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar9 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar3 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar6 = uVar9;
      uVar12 = uVar3;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar12 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar12 + 0x40) = *(ulong *)(puVar5 + uVar12 + 0x40) | 1L << (uVar6 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar2 = uVar9;
      puVar2[1] = uVar3;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar18 = puVar18 + 0x30;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c63e78; end: 102c64167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c63e78(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_170 [224];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  char acStack_79 [9];
  
  puVar8 = auStack_170;
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068f48);
  puVar1 = (ulong *)(lVar9 + _DAT_11308f270);
  uVar11 = puVar1[1];
  if (uVar11 == 0) {
    uVar15 = 0;
    uVar10 = 0xe000000000000000;
  }
  else {
    uVar15 = *puVar1;
    uVar10 = uVar11;
  }
  puVar1 = (ulong *)(lVar9 + _DAT_11308f1f8);
  uVar12 = puVar1[1];
  if (uVar12 == 0) {
    uVar13 = 0;
    uVar14 = 0xe000000000000000;
  }
  else {
    uVar13 = *puVar1;
    uVar14 = uVar12;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c614f0(uVar2);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  uStack_90 = 0xd000000000000026;
  uStack_88 = 0x800000010f103c60;
  uStack_80 = 0;
  (**(code **)(lVar9 + 8))(acStack_79,&uStack_90,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lVar9);
  uVar11 = uVar10;
  if (acStack_79[0] == '\x01') {
    uVar12 = uVar15 & 0xffffffffffff;
    if ((uVar10 & 0x2000000000000000) != 0) {
      uVar12 = uVar10 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      uVar11 = uVar14;
      uVar13 = uVar15;
      uVar14 = uVar10;
    }
  }
  func_0x000107c6142c(uVar11);
  lVar9 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar9 + 0x18) = 8;
  *(undefined8 *)(lVar9 + 0x10) = 4;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d6b8;
  func_0x000107c5faec();
  *(undefined8 *)(lVar9 + 0x20) = ppuVar3;
  *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar9 + 0x28) = puVar8;
  *(ulong *)(lVar9 + 0x30) = uVar13;
  *(ulong *)(lVar9 + 0x38) = uVar14;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d7d8;
  func_0x000107c5faec();
  *(undefined ***)(lVar9 + 0x50) = ppuVar3;
  *(undefined1 **)(lVar9 + 0x58) = puVar8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar2 = 0x112d48390;
  uVar5 = 0;
  FUN_102c65fe0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar9 + 0x78) = uVar5;
  *(undefined **)(lVar9 + 0x60) = puVar4;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d8f8;
  func_0x000107c5faec();
  *(undefined ***)(lVar9 + 0x80) = ppuVar3;
  *(undefined8 *)(lVar9 + 0x88) = uVar2;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  puVar6 = puVar4;
  func_0x000107c4179c(0x402c000000000000);
  func_0x000107c61180();
  uVar2 = 0x112d48388;
  uVar5 = 0;
  FUN_102c65fe0(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar9 + 0xa8) = uVar5;
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5c600(0x402c000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
    func_0x000107c61180();
    puVar6 = puVar4;
  }
  *(undefined **)(lVar9 + 0x90) = puVar6;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0da78;
  func_0x000107c5faec();
  *(undefined ***)(lVar9 + 0xb0) = ppuVar3;
  *(undefined8 *)(lVar9 + 0xb8) = uVar2;
  *(undefined **)(lVar9 + 0xd8) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar9 + 0xc0) = 0;
  lVar7 = lVar9;
  func_0x000100214a84(lVar9);
  func_0x000107c61588(lVar9);
  uVar2 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar9 + 0x20),4,uVar2);
  return lVar7;
}



/* Entry: 102c64168; end: 102c644ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_102c64168(void)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  lVar7 = _DAT_113068f48;
  lVar19 = *(long *)(unaff_x20 + 0x10);
  lVar13 = *(long *)(lVar19 + _DAT_113068f48);
  puVar1 = (undefined8 *)(lVar13 + _DAT_11308f200);
  lVar15 = puVar1[1];
  if (lVar15 == 0) {
    uVar20 = 0;
    lVar14 = -0x2000000000000000;
  }
  else {
    uVar20 = *puVar1;
    lVar14 = lVar15;
  }
  ppuVar18 = *(undefined ***)
              (*(long *)(*(long *)(*(long *)(lVar13 + _DAT_11308f298) + _DAT_11308f538) +
                        _DAT_11308f468) + _DAT_11308f738);
  if ((undefined **)0x2 < ppuVar18) {
    ppuStack_80 = ppuVar18;
    func_0x000107c61434(lVar15);
    func_0x000107c60614(&UNK_1107995a8,&ppuStack_80,&UNK_1107995a8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102c644f0);
    (*pcVar5)();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar13 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c614f0(uVar6);
  func_0x000107c61434(lVar15);
  ppuStack_80 = (undefined **)0xd000000000000026;
  uStack_78 = 0x800000010f103c60;
  uStack_70 = 0;
  ppuVar11 = (undefined **)&UNK_1107383c8;
  (**(code **)(lVar13 + 8))
            (&ppuStack_a0,&ppuStack_80,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar6,lVar13);
  if ((char)ppuStack_a0 == '\x01') {
    plVar2 = (long *)(*(long *)(lVar19 + lVar7) + _DAT_11308f278);
    ppuVar16 = (undefined **)plVar2[1];
    if (ppuVar16 != (undefined **)0x0) {
      lVar13 = *plVar2;
      func_0x000107c61434(ppuVar16);
      lVar7 = lVar13;
      ppuVar11 = ppuVar16;
      func_0x000107c5fb5c();
      if (0 < lVar7) {
        ppuStack_80 = (undefined **)0x40;
        uStack_78 = 0xe100000000000000;
        ppuVar11 = ppuVar16;
        func_0x000107c5fb78(lVar13);
        func_0x000107c6142c(ppuVar16);
        uVar17 = uStack_78;
        ppuVar16 = ppuStack_80;
        goto LAB_102c642f8;
      }
      func_0x000107c6142c(ppuVar16);
    }
  }
  ppuVar16 = (undefined **)0x0;
  uVar17 = 0xe000000000000000;
LAB_102c642f8:
  ppuVar8 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puVar4 = PTR___sSSN_11034da80;
  if (((ulong)ppuVar18 & 1) == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0d758;
    func_0x000107c5faec();
    ppuVar18 = ppuVar9;
    ppuVar12 = ppuVar11;
    func_0x000107c2bb88();
    func_0x000107c61180();
    if (ppuVar18 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102c644c4);
      (*pcVar5)();
    }
    ppuVar10 = ppuVar18;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar18);
    lVar7 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 4;
    *(undefined8 *)(lVar7 + 0x10) = 2;
    *(undefined **)(lVar7 + 0x38) = puVar4;
    lVar13 = lVar7;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar7 + 0x20) = uVar20;
    *(long *)(lVar7 + 0x28) = lVar14;
    *(undefined **)(lVar7 + 0x60) = puVar4;
    *(long *)(lVar7 + 0x68) = lVar13;
    *(long *)(lVar7 + 0x40) = lVar13;
    *(undefined ***)(lVar7 + 0x48) = ppuVar16;
    *(ulong *)(lVar7 + 0x50) = uVar17;
    func_0x000107c61434(uVar17);
    ppuVar18 = ppuVar12;
    func_0x000107c5fb00(ppuVar10,ppuVar12,lVar7);
    func_0x000107c6142c(ppuVar12);
    puStack_88 = puVar4;
    ppuStack_a0 = ppuVar10;
    ppuStack_98 = ppuVar18;
    func_0x000100102924(&ppuStack_a0,&ppuStack_80);
    ppuVar18 = ppuVar8;
    func_0x000107c61558(ppuVar8);
    ppuStack_a0 = ppuVar8;
    func_0x0001001029e8(&ppuStack_80,ppuVar9,ppuVar11,ppuVar18);
    func_0x000107c6142c(ppuVar11);
    ppuVar8 = ppuStack_a0;
  }
  else {
    func_0x000107c6142c(lVar14);
    ppuVar9 = ppuVar11;
  }
  uVar3 = (ulong)ppuVar16 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar3 = uVar17 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    func_0x000107c6142c(uVar17);
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110f0dad8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dad8);
    puStack_88 = puVar4;
    ppuStack_a0 = ppuVar16;
    ppuStack_98 = (undefined **)uVar17;
    func_0x000100102924(&ppuStack_a0,&ppuStack_80);
    ppuVar18 = ppuVar8;
    func_0x000107c61558(ppuVar8);
    ppuStack_a0 = ppuVar8;
    func_0x0001001029e8(&ppuStack_80,ppuVar11,ppuVar9,ppuVar18);
    func_0x000107c6142c(ppuVar9);
    ppuVar8 = ppuStack_a0;
  }
  return ppuVar8;
}



/* Entry: 102c644f0; end: 102c64837;  */

/* WARNING: Possible PIC construction at 0x000102c647d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c647dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c644f0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong unaff_x19;
  ulong uVar15;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar16;
  undefined *unaff_x24;
  undefined1 *unaff_x25;
  undefined **unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [232];
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = (ulong *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068f48) + _DAT_11308f228);
  uVar15 = puVar2[1];
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 == 0) goto code_r0x000100214a84;
  uVar16 = *puVar2;
  uVar6 = uVar16 & 0xffffffffffff;
  if ((uVar15 & 0x2000000000000000) != 0) {
    uVar6 = uVar15 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) goto code_r0x000100214a84;
  uVar6 = uVar15;
  func_0x000107c61434();
  func_0x000107c2bb5c();
  func_0x000107c61180();
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c64838);
    (*pcVar3)();
  }
  unaff_x19 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  lVar7 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  puVar4 = PTR___sSSN_11034da80;
  *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
  lVar8 = lVar7;
  func_0x00010075bbf0();
  *(long *)(lVar7 + 0x40) = lVar8;
  *(ulong *)(lVar7 + 0x20) = uVar16;
  *(ulong *)(lVar7 + 0x28) = uVar15;
  unaff_x20 = param_2;
  func_0x000107c5fb00(unaff_x19,param_2,lVar7);
  func_0x000107c6142c(param_2);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  unaff_x21 = puVar14;
  func_0x000107c3fdd0(0x3fe6666666666666);
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  unaff_x22 = puVar14;
  func_0x000107c4179c(0x4028000000000000);
  func_0x000107c61180();
  if (unaff_x22 == (undefined *)0x0) {
    func_0x000107c5c600(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
    func_0x000107c61180();
    unaff_x22 = puVar14;
  }
  unaff_x24 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  unaff_x25 = auStack_158;
  func_0x000107c61534();
  *(undefined8 *)(unaff_x24 + 0x18) = 8;
  *(undefined8 *)(unaff_x24 + 0x10) = 4;
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0d758;
  func_0x000107c5faec();
  unaff_x23 = (undefined8 *)(unaff_x24 + 0x20);
  *unaff_x23 = ppuVar9;
  *(undefined1 **)(unaff_x24 + 0x28) = unaff_x25;
  func_0x000107c2bb58();
  func_0x000107c61180();
  if (ppuVar9 == (undefined **)0x0) {
    *(undefined **)(unaff_x24 + 0x48) = puVar4;
    puVar12 = unaff_x25;
LAB_102c64744:
    *(undefined8 *)(unaff_x24 + 0x30) = 0;
    unaff_x25 = (undefined1 *)0xe000000000000000;
  }
  else {
    unaff_x26 = ppuVar9;
    func_0x000107c5faec();
    puVar12 = unaff_x25;
    func_0x000107c61170(ppuVar9);
    *(undefined **)(unaff_x24 + 0x48) = puVar4;
    if (unaff_x25 == (undefined1 *)0x0) goto LAB_102c64744;
    *(undefined ***)(unaff_x24 + 0x30) = unaff_x26;
  }
  *(undefined1 **)(unaff_x24 + 0x38) = unaff_x25;
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0d718;
  func_0x000107c5faec();
  *(undefined ***)(unaff_x24 + 0x50) = ppuVar9;
  *(undefined1 **)(unaff_x24 + 0x58) = puVar12;
  *(undefined **)(unaff_x24 + 0x78) = puVar4;
  *(ulong *)(unaff_x24 + 0x60) = unaff_x19;
  *(long *)(unaff_x24 + 0x68) = unaff_x20;
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0d7f8;
  func_0x000107c5faec();
  *(undefined ***)(unaff_x24 + 0x80) = ppuVar9;
  *(undefined1 **)(unaff_x24 + 0x88) = puVar12;
  uVar11 = 0x112d48390;
  uVar10 = 0;
  FUN_102c65fe0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(unaff_x24 + 0xa8) = uVar10;
  *(undefined **)(unaff_x24 + 0x90) = unaff_x21;
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0d918;
  func_0x000107c5faec();
  *(undefined ***)(unaff_x24 + 0xb0) = ppuVar9;
  *(undefined8 *)(unaff_x24 + 0xb8) = uVar11;
  uVar11 = 0;
  FUN_102c65fe0(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(unaff_x24 + 0xd8) = uVar11;
  *(undefined **)(unaff_x24 + 0xc0) = unaff_x22;
  unaff_x30 = 0x102c647dc;
  register0x00000008 = (BADSPACEBASE *)auStack_160;
  puVar4 = unaff_x24;
  unaff_x29 = puVar1;
code_r0x000100214a84:
  *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar14 = *(undefined **)(puVar4 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar14 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar14;
    func_0x000107c60498();
    puVar4 = puVar4 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar4,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar15 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar6 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar16 = uVar15;
      uVar13 = uVar6;
      func_0x000100029284();
      if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar3)();
      }
      uVar13 = uVar16 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar13 + 0x40) =
           *(ulong *)(puVar5 + uVar13 + 0x40) | 1L << (uVar16 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar16 * 0x10);
      *puVar2 = uVar15;
      puVar2[1] = uVar6;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar5 + 0x38) + uVar16 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar3)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar4 = puVar4 + 0x30;
      puVar14 = puVar14 + -1;
    } while (puVar14 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c64838; end: 102c64a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c64838(void)

{
  ulong *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 auStack_160 [272];
  
  puVar10 = auStack_160;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 10;
  *(undefined8 *)(lVar2 + 0x10) = 5;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d818;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar10;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe6666666666666);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = 0x112d48390;
  uVar6 = 0;
  FUN_102c65fe0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar2 + 0x48) = uVar6;
  *(undefined **)(lVar2 + 0x30) = puVar5;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d838;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x50) = ppuVar3;
  *(undefined8 *)(lVar2 + 0x58) = uVar9;
  puVar1 = (ulong *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068f48) + _DAT_11308f1f8);
  uVar7 = puVar1[1];
  if (uVar7 == 0) {
    uVar11 = 0;
    uVar7 = 0xe000000000000000;
  }
  else {
    uVar11 = *puVar1 & 0xffffffffffff;
  }
  func_0x000107c61434();
  func_0x000107c6142c(uVar7);
  puVar4 = PTR___sSbN_11034dd40;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar11 = uVar7 >> 0x38 & 0xf;
  }
  *(undefined **)(lVar2 + 0x78) = PTR___sSbN_11034dd40;
  *(bool *)(lVar2 + 0x60) = uVar11 != 0;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d878;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x80) = ppuVar3;
  *(undefined8 *)(lVar2 + 0x88) = uVar9;
  *(undefined **)(lVar2 + 0xa8) = puVar4;
  *(undefined1 *)(lVar2 + 0x90) = 1;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d898;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0xb0) = ppuVar3;
  *(undefined8 *)(lVar2 + 0xb8) = uVar9;
  *(undefined **)(lVar2 + 0xd8) = puVar4;
  *(undefined1 *)(lVar2 + 0xc0) = 1;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d8b8;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0xe0) = ppuVar3;
  *(undefined8 *)(lVar2 + 0xe8) = uVar9;
  *(undefined **)(lVar2 + 0x108) = puVar4;
  *(undefined1 *)(lVar2 + 0xf0) = 1;
  lVar8 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar9 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),5,uVar9);
  return lVar8;
}



/* Entry: 102c64a38; end: 102c64b73;  */

/* WARNING: Possible PIC construction at 0x000102c64b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c64b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c64a38(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x19;
  long lVar12;
  undefined *unaff_x20;
  ulong uVar13;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [128];
  
  puVar9 = auStack_b0;
  puVar1 = &stack0xfffffffffffffff0;
  lVar12 = *(long *)(unaff_x20 + 0x48);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar13 = *(ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068f40);
    func_0x000107c61434(lVar12);
    func_0x000107c4a4e0();
    if ((uVar13 & 1) == 0) {
      unaff_x20 = (undefined *)0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(unaff_x20 + 0x18) = 4;
      *(undefined8 *)(unaff_x20 + 0x10) = 2;
      ppuVar8 = &PTR____CFConstantStringClassReference_110f0d978;
      func_0x000107c5faec();
      unaff_x21 = (undefined8 *)(unaff_x20 + 0x20);
      *unaff_x21 = ppuVar8;
      *(undefined **)(unaff_x20 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(unaff_x20 + 0x28) = puVar9;
      *(undefined8 *)(unaff_x20 + 0x30) = uVar14;
      *(long *)(unaff_x20 + 0x38) = lVar12;
      ppuVar8 = &PTR____CFConstantStringClassReference_110f0d998;
      func_0x000107c5faec();
      *(undefined ***)(unaff_x20 + 0x50) = ppuVar8;
      *(undefined1 **)(unaff_x20 + 0x58) = puVar9;
      *(undefined **)(unaff_x20 + 0x78) = PTR___sSbN_11034dd40;
      unaff_x20[0x60] = 1;
      unaff_x30 = 0x102c64b2c;
      register0x00000008 = (BADSPACEBASE *)auStack_b0;
      puVar5 = unaff_x20;
      unaff_x19 = lVar12;
      unaff_x22 = uVar14;
      unaff_x29 = puVar1;
    }
    else {
      func_0x000107c6142c(lVar12);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar11 = *(undefined **)(puVar5 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar6 = puVar11;
    func_0x000107c60498();
    puVar5 = puVar5 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar5,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar13 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar3 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar7 = uVar13;
      uVar10 = uVar3;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar10 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar10 + 0x40) = *(ulong *)(puVar6 + uVar10 + 0x40) | 1L << (uVar7 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar2 = uVar13;
      puVar2[1] = uVar3;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar5 = puVar5 + 0x30;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102c64b74; end: 102c64bdf;  */

void FUN_102c64b74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c64be0; end: 102c64bff;  */

void FUN_102c64be0(void)

{
  func_0x000102c65c34();
  return;
}



/* Entry: 102c64c00; end: 102c64c27;  */

undefined * FUN_102c64c00(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c64c28; end: 102c64dcf;  */

undefined8 FUN_102c64c28(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102c650b4(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x000102c658d4(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102c64dd0; end: 102c64de3;  */

void FUN_102c64dd0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c64ed4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102c65394(lVar6,param_4 & 1,0x112f05f00,&UNK_10db3a4f0);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c64e98);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102c650b4(0x112f05f00,&UNK_10db3a4f0);
    lVar6 = *unaff_x20;
    goto joined_r0x000102c64ef0;
  }
  lVar6 = *unaff_x20;
joined_r0x000102c64ef0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c64f58);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102c64de4; end: 102c64f57;  */

void FUN_102c64de4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c64ed4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102c65394(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c64e98);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102c650b4(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102c64ef0;
  }
  lVar6 = *unaff_x20;
joined_r0x000102c64ef0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c64f58);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102c64f58; end: 102c65393;  */

void FUN_102c64f58(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c65034);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    func_0x000102c65628(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c64ffc);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x000102c65214();
    lVar8 = *unaff_x20;
    goto joined_r0x000102c65048;
  }
  lVar8 = *unaff_x20;
joined_r0x000102c65048:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = *puVar1;
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c650b4);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 102c65394; end: 102c65fdf;  */

void FUN_102c65394(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
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
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102c655f4:
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c65624);
          (*pcVar6)();
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
          goto LAB_102c655f4;
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
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c65628);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
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
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102c65fe0; end: 102c6605f;  */

void FUN_102c65fe0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c66060; end: 102c660b3; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentContainerDecorator attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c66060(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61604(*(long *)(param_1 + _DAT_112f05f10) + _DAT_112f05f40,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f05f08),PTR_s_attachUI__1125a0c08,param_3);
  return;
}



/* Entry: 102c660b4; end: 102c6615b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c660b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f05f08);
  if (param_1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1105b9120;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(uVar2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102c6615c; end: 102c661e7; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentContainerDecorator detachUI:] */

void FUN_102c6615c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1105b9108;
    func_0x000107c613fc(&UNK_1105b9108,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_102c662a0;
  }
  func_0x000107c61174(param_1);
  FUN_102c660b4(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c661e8; end: 102c66247; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentContainerDecorator init] */

void FUN_102c661e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdProfileAttachmentContainerDecorator",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c66214);
  (*pcVar1)();
}



/* Entry: 102c66248; end: 102c6627f; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentContainerDecorator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c66248(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f05f08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f05f10));
  return;
}



/* Entry: 102c66280; end: 102c6629f;  */

void FUN_102c66280(void)

{
  func_0x000107c61168(&PTR_PTR_11289a430);
  return;
}



/* Entry: 102c662a0; end: 102c662c7;  */

void FUN_102c662a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102c662a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102c662c8; end: 102c66387;  */

/* WARNING: Possible PIC construction at 0x000102c66350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c66354) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c662c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_112f05f60;
  lVar2 = unaff_x20 + _DAT_112f05f60;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f05f48);
    func_0x000107c5194c();
    func_0x000107c61180();
    if ((lVar3 == 0) || (func_0x000107c61170(), lVar3 != lVar2)) {
      func_0x000107c61170(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + lVar1,0);
  return;
}



/* Entry: 102c66388; end: 102c6653b;  */

undefined * FUN_102c66388(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_c0;
  puVar3 = &UNK_1105b9158;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_1105b9158,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,0);
  func_0x000107c613fc(&UNK_1105b9158,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = &UNK_1105b9180;
  func_0x000107c613fc(&UNK_1105b9180,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = &UNK_1105b91a8;
  func_0x000107c613fc(&UNK_1105b91a8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102c67314;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e1779c;
  puStack_78 = &UNK_1105b91c0;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_a0 = 0x102c6731c;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100e17304;
  puStack_a8 = &UNK_1105b91e8;
  puStack_98 = puVar5;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61580(puVar2,2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61174();
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_98);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  return puVar6;
}



/* Entry: 102c6653c; end: 102c665cb;  */

void FUN_102c6653c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  func_0x000107c61604(param_2 + 0x10,param_1);
  func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c4f018();
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102c665cc; end: 102c6668f;  */

void FUN_102c665cc(code *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    func_0x000100b64c10(param_1,param_2);
    func_0x000102c6703c(lVar1,param_4,param_1,param_2);
    func_0x00010058d43c(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_70,1,0);
  func_0x000107c61604(param_3 + 0x10,0);
  return;
}



/* Entry: 102c66690; end: 102c66787;  */

void FUN_102c66690(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  uVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c49aa0();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar2;
      func_0x000107c4f090();
      func_0x000107c61180();
      if (uVar3 != 0) {
        func_0x000107c61170();
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_1105b93f0;
        ppuVar4 = &puStack_78;
        pcStack_58 = param_2;
        uStack_50 = param_3;
        func_0x000107c60bc4(ppuVar4);
        uVar1 = uStack_50;
        func_0x000107c6157c(param_3);
        func_0x000107c61574(uVar1);
        func_0x000107c420a8(uVar2);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(uVar2);
        return;
      }
    }
    func_0x000107c61170(uVar2);
  }
  (*param_2)();
  return;
}



/* Entry: 102c66788; end: 102c667e7; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator init] */

void FUN_102c66788(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdProfileAttachmentOverlayCoordinator",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c667b4);
  (*pcVar1)();
}



/* Entry: 102c667e8; end: 102c66853; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c66804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c66808) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c667e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f05f40);
  return;
}



/* Entry: 102c66854; end: 102c66873;  */

void FUN_102c66854(void)

{
  func_0x000107c61168(&PTR_PTR_11289a4f8);
  return;
}



/* Entry: 102c66874; end: 102c668db; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000102c668bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c668c0) */

void FUN_102c66874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c67240(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c668dc; end: 102c668df; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator adAttachmentHandlerDidPresent:] */

void FUN_102c668dc(void)

{
  return;
}



/* Entry: 102c668e0; end: 102c668e3; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102c668e0(void)

{
  return;
}



/* Entry: 102c668e4; end: 102c668e7; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator adAttachmentHandlerViewDidFullyAppear:] */

void FUN_102c668e4(void)

{
  return;
}



/* Entry: 102c668e8; end: 102c668eb; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_102c668e8(void)

{
  return;
}



/* Entry: 102c668ec; end: 102c668ef; -[_TtC24AdPlaybackImplementation37AdProfileAttachmentOverlayCoordinator adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102c668ec(void)

{
  return;
}



/* Entry: 102c668f0; end: 102c66a33;  */

void FUN_102c668f0(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar2 = &UNK_1105b93b0;
  func_0x000107c613fc(&UNK_1105b93b0,0x20,7);
  *(code **)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  uVar3 = param_1 + 0x10;
  func_0x000107c61618();
  func_0x000100b64c10(param_2,param_3);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c49aa0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar3;
      func_0x000107c4f090();
      func_0x000107c61180();
      if (uVar4 != 0) {
        func_0x000107c61170();
        uStack_58 = 0x102c6740c;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_1105b93c8;
        ppuVar5 = &puStack_78;
        puStack_50 = puVar2;
        func_0x000107c60bc4(ppuVar5);
        puVar1 = puStack_50;
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar1);
        func_0x000107c420a8(uVar3);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar3);
        return;
      }
    }
    func_0x000107c61170(uVar3);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102c66a34; end: 102c66b8f;  */

void FUN_102c66a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar2 = &UNK_1105b9360;
  func_0x000107c613fc(&UNK_1105b9360,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  uVar3 = param_1 + 0x10;
  func_0x000107c61618();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c49aa0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar3;
      func_0x000107c4f090();
      func_0x000107c61180();
      if (uVar4 != 0) {
        func_0x000107c61170();
        uStack_68 = 0x102c67418;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_1105b9378;
        ppuVar5 = &puStack_88;
        puStack_60 = puVar2;
        func_0x000107c60bc4(ppuVar5);
        puVar1 = puStack_60;
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar1);
        func_0x000107c420a8(uVar3);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar3);
        return;
      }
    }
    func_0x000107c61170(uVar3);
  }
  FUN_102c66690(param_2,param_3,param_4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102c66b90; end: 102c6723f;  */

void FUN_102c66b90(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = &UNK_1105b92e8;
  func_0x000107c613fc(&UNK_1105b92e8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined **)(puVar1 + 0x20) = param_6;
  puVar2 = &UNK_1105b9310;
  func_0x000107c613fc(&UNK_1105b9310,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = 0x102c67410;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61580(param_3,2);
  func_0x000107c61580(puVar1,2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  uVar3 = param_1;
  func_0x000107c49aa0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (uVar3 != 0) {
      func_0x000107c61170();
      uVar3 = param_1;
      func_0x000107c4f078();
      func_0x000107c61180();
      if (uVar3 == 0) {
        uStack_60 = 0x102c67414;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1105b9328;
        puStack_58 = puVar2;
        func_0x000107c60bc4(&puStack_80);
        puVar4 = puStack_58;
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar4);
        func_0x000107c420a8(param_1);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(param_3);
        param_6 = puVar2;
      }
      else {
        puVar4 = &UNK_1105b9158;
        func_0x000107c613fc(&UNK_1105b9158,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_1);
        func_0x000107c6157c(param_3);
        func_0x000107c6157c(puVar1);
        func_0x000107c6157c(puVar4);
        func_0x000107c6157c(puVar2);
        FUN_102c66b90(uVar3,param_2,puVar4,param_3,0x102c67410,puVar1);
        func_0x000107c61170(uVar3);
        func_0x000107c61574(puVar4);
        func_0x000107c61578(puVar2,2);
        func_0x000107c61578(param_3,2);
        param_6 = puVar1;
      }
      goto LAB_102c66d44;
    }
  }
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  FUN_102c66a34(param_3,param_4,param_5,param_6);
  func_0x000107c61574(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_4);
LAB_102c66d44:
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_3);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 102c67240; end: 102c67313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c67240(long param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = _DAT_112f05f60;
  lVar1 = unaff_x20 + _DAT_112f05f60;
  func_0x000107c61618();
  if ((lVar1 != 0) && (func_0x000107c61170(), param_1 == lVar1)) {
    func_0x000107c61604(unaff_x20 + lVar4,0);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f05f48);
    lVar1 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if ((lVar1 != 0) && (func_0x000107c61170(), lVar1 == param_1)) {
      func_0x000107c4ffe8(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    pcVar2 = *(code **)(unaff_x20 + _DAT_112f05f58);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f05f58))[1];
      func_0x000107c6157c(uVar3);
      (*pcVar2)();
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102c67314; end: 102c6734f;  */

void FUN_102c67314(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  func_0x000107c61604(lVar1 + 0x10,param_1);
  func_0x000107c61428(lVar2 + 0x10,auStack_60,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4f018();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102c67350; end: 102c673a7;  */

void FUN_102c67350(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c673a8; end: 102c673cf;  */

void FUN_102c673a8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102c673d0; end: 102c6741b;  */

void FUN_102c673d0(long param_1,long param_2)

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



/* Entry: 102c6741c; end: 102c67e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6741c(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  func_0x000102c6a824();
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = puVar3;
  uVar12 = *(undefined8 *)(param_3 + _DAT_11306ce28);
  puVar3 = &UNK_1105b9428;
  func_0x000107c613fc(&UNK_1105b9428,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  func_0x0001000285a8(0x112f05f90,&UNK_10db39f10);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar5 = FUN_102c67e10;
  func_0x0001000bdd8c(FUN_102c67e10,puVar3);
  uVar18 = *(undefined8 *)(param_5 + _DAT_113010a90);
  uVar13 = *(undefined8 *)(param_1 + _DAT_113068e88);
  uVar14 = *(undefined8 *)(param_2 + _DAT_112fee3a8);
  lVar1 = param_1 + _DAT_113068e98;
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  lVar9 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar6);
  pcVar16 = *(code **)(lVar9 + 0x20);
  func_0x000107c6157c(uVar18);
  func_0x000107c615f0(uVar13);
  func_0x000107c61174();
  (*pcVar16)(uVar6,lVar9);
  uVar7 = *(undefined8 *)(param_4 + _DAT_11304a478);
  uVar15 = *(undefined8 *)(param_1 + _DAT_113068e90);
  func_0x000107c6157c();
  func_0x000107c5d17c();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  lVar8 = 0;
  FUN_102c68274();
  lVar9 = lVar8;
  func_0x000107c610f8();
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f060b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f060b8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f060c0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f060c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f060d0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f060d8);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar1 = _DAT_112f060e0;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  uVar10 = uVar17;
  func_0x000107c615f0();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar9 + lVar1) = uVar10;
  *(undefined8 *)(lVar9 + _DAT_112f06038) = uVar13;
  *(undefined8 *)(lVar9 + _DAT_112f06040) = param_9;
  *(undefined8 *)(lVar9 + _DAT_112f06048) = param_8;
  *(undefined8 *)(lVar9 + _DAT_112f06050) = param_10;
  *(undefined8 *)(lVar9 + _DAT_112f06058) = param_7;
  *(undefined8 *)(lVar9 + _DAT_112f06060) = param_11;
  *(undefined8 *)(lVar9 + _DAT_112f06068) = param_6;
  *(undefined8 *)(lVar9 + _DAT_112f06070) = uVar14;
  *(undefined8 *)(lVar9 + _DAT_112f06078) = uVar6;
  *(code **)(lVar9 + _DAT_112f06080) = pcVar5;
  *(long *)(lVar9 + _DAT_112f06088) = lVar4;
  *(undefined8 *)(lVar9 + _DAT_112f06090) = uVar7;
  *(undefined8 *)(lVar9 + _DAT_112f06098) = uVar15;
  *(undefined8 *)(lVar9 + _DAT_112f060a0) = uVar18;
  *(undefined8 *)(lVar9 + _DAT_112f060a8) = uVar17;
  puVar3 = PTR_s_init_1125d9248;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c6157c();
  func_0x000107c615f0(uVar13);
  func_0x000107c61174();
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(uVar17);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(lVar4);
  func_0x000107c615f0(uVar15);
  plVar11 = &lStack_78;
  func_0x000107c61154(plVar11,puVar3);
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar14);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(uVar15);
  func_0x000107c61574(uVar18);
  func_0x000107c615e8(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  *(long **)(unaff_x20 + 0x10) = plVar11;
  return;
}



/* Entry: 102c67e10; end: 102c67e3f;  */

void FUN_102c67e10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c67e40; end: 102c67ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c67e40(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar6 = *(long **)(lVar5 + _DAT_112f06078);
  if (plVar6 != (long *)0x0) {
    puVar1 = &UNK_1105b9478;
    func_0x000107c613fc(&UNK_1105b9478,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar5);
    uVar2 = 0x102c67f44;
    puVar4 = puVar1;
    (**(code **)(*plVar6 + 0x60))(0x102c67f44);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(puVar4 + 0x18))(*(undefined8 *)(lVar5 + _DAT_112f060e0),uVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c67ef8; end: 102c67f1b;  */

void FUN_102c67ef8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c67f1c; end: 102c67f3b;  */

void FUN_102c67f1c(void)

{
  FUN_102c67e40();
  return;
}



/* Entry: 102c67f3c; end: 102c67f4b;  */

undefined8 FUN_102c67f3c(void)

{
  return 0;
}



/* Entry: 102c67f4c; end: 102c67f6b;  */

void FUN_102c67f4c(void)

{
  func_0x000107c61168(&PTR_PTR_112f05fd8);
  return;
}



/* Entry: 102c67f6c; end: 102c67f6f;  */

void FUN_102c67f6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c67f70; end: 102c68083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c67f70(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = *(long *)(lVar4 + _DAT_11308c458);
    lVar2 = lVar3;
    func_0x000107c30b74();
    if (lVar2 < 2) {
      if (lVar2 != -1) {
        if (lVar2 == 0) {
          FUN_102c68294(*(undefined8 *)(lVar4 + _DAT_11308c450),lVar3);
        }
        else {
          if (lVar2 != 1) goto LAB_102c68060;
          FUN_102c68a74(*(undefined8 *)(lVar4 + _DAT_11308c450),lVar3);
        }
      }
    }
    else if (5 < lVar2 - 3U) {
      if (lVar2 != 2) {
LAB_102c68060:
        lStack_50 = lVar2;
        func_0x000107c60614(&UNK_11079a400,&lStack_50,&UNK_11079a400,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c68084);
        (*pcVar1)();
      }
      FUN_102c69030(*(undefined8 *)(lVar4 + _DAT_11308c450));
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c68084; end: 102c680e3; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow init] */

void FUN_102c68084(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdReportingWorkflow",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c680b0);
  (*pcVar1)();
}



/* Entry: 102c680e4; end: 102c68273; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c68180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c681b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c681d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c681b4) */
/* WARNING: Removing unreachable block (ram,0x000102c68184) */
/* WARNING: Removing unreachable block (ram,0x000102c681d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c680e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f06038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06040));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06048));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06050));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06058));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06060));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06068));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06070));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f06078));
  return;
}



/* Entry: 102c68274; end: 102c68293;  */

void FUN_102c68274(void)

{
  func_0x000107c61168(&PTR_PTR_11289a5d8);
  return;
}



/* Entry: 102c68294; end: 102c68a73;  */

/* WARNING: Possible PIC construction at 0x000102c682fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c683ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c683d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c687a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c687c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c687d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c687e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c688bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6894c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6896c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6843c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c68a50) */
/* WARNING: Removing unreachable block (ram,0x000102c68988) */
/* WARNING: Removing unreachable block (ram,0x000102c68970) */
/* WARNING: Removing unreachable block (ram,0x000102c68960) */
/* WARNING: Removing unreachable block (ram,0x000102c688c0) */
/* WARNING: Removing unreachable block (ram,0x000102c68950) */
/* WARNING: Removing unreachable block (ram,0x000102c68920) */
/* WARNING: Removing unreachable block (ram,0x000102c6880c) */
/* WARNING: Removing unreachable block (ram,0x000102c68868) */
/* WARNING: Removing unreachable block (ram,0x000102c68850) */
/* WARNING: Removing unreachable block (ram,0x000102c687ec) */
/* WARNING: Removing unreachable block (ram,0x000102c687dc) */
/* WARNING: Removing unreachable block (ram,0x000102c687cc) */
/* WARNING: Removing unreachable block (ram,0x000102c687a8) */
/* WARNING: Removing unreachable block (ram,0x000102c6877c) */
/* WARNING: Removing unreachable block (ram,0x000102c68800) */
/* WARNING: Removing unreachable block (ram,0x000102c68780) */
/* WARNING: Removing unreachable block (ram,0x000102c68574) */
/* WARNING: Removing unreachable block (ram,0x000102c683dc) */
/* WARNING: Removing unreachable block (ram,0x000102c68468) */
/* WARNING: Removing unreachable block (ram,0x000102c68480) */
/* WARNING: Removing unreachable block (ram,0x000102c684c8) */
/* WARNING: Removing unreachable block (ram,0x000102c684cc) */
/* WARNING: Removing unreachable block (ram,0x000102c6848c) */
/* WARNING: Removing unreachable block (ram,0x000102c684e8) */
/* WARNING: Removing unreachable block (ram,0x000102c68494) */
/* WARNING: Removing unreachable block (ram,0x000102c68a2c) */
/* WARNING: Removing unreachable block (ram,0x000102c6849c) */
/* WARNING: Removing unreachable block (ram,0x000102c68a70) */
/* WARNING: Removing unreachable block (ram,0x000102c684a4) */
/* WARNING: Removing unreachable block (ram,0x000102c684c0) */
/* WARNING: Removing unreachable block (ram,0x000102c68404) */
/* WARNING: Removing unreachable block (ram,0x000102c684ec) */
/* WARNING: Removing unreachable block (ram,0x000102c68578) */
/* WARNING: Removing unreachable block (ram,0x000102c68580) */
/* WARNING: Removing unreachable block (ram,0x000102c6855c) */
/* WARNING: Removing unreachable block (ram,0x000102c683b0) */
/* WARNING: Removing unreachable block (ram,0x000102c68318) */
/* WARNING: Removing unreachable block (ram,0x000102c6831c) */
/* WARNING: Removing unreachable block (ram,0x000102c68410) */
/* WARNING: Removing unreachable block (ram,0x000102c68344) */
/* WARNING: Removing unreachable block (ram,0x000102c68438) */
/* WARNING: Removing unreachable block (ram,0x000102c68370) */
/* WARNING: Removing unreachable block (ram,0x000102c68300) */
/* WARNING: Removing unreachable block (ram,0x000102c68304) */
/* WARNING: Removing unreachable block (ram,0x000102c68440) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c68294(long param_1)

{
  long unaff_x20;
  
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c3d368(*(undefined8 *)(unaff_x20 + _DAT_112f06038));
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c68a74; end: 102c6902f;  */

/* WARNING: Possible PIC construction at 0x000102c68ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c68c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c68f90) */
/* WARNING: Removing unreachable block (ram,0x000102c68f68) */
/* WARNING: Removing unreachable block (ram,0x000102c68f14) */
/* WARNING: Removing unreachable block (ram,0x000102c68f80) */
/* WARNING: Removing unreachable block (ram,0x000102c68f2c) */
/* WARNING: Removing unreachable block (ram,0x000102c68ef0) */
/* WARNING: Removing unreachable block (ram,0x000102c68e74) */
/* WARNING: Removing unreachable block (ram,0x000102c68f04) */
/* WARNING: Removing unreachable block (ram,0x000102c68ed4) */
/* WARNING: Removing unreachable block (ram,0x000102c68dc0) */
/* WARNING: Removing unreachable block (ram,0x000102c68e1c) */
/* WARNING: Removing unreachable block (ram,0x000102c68e04) */
/* WARNING: Removing unreachable block (ram,0x000102c68d8c) */
/* WARNING: Removing unreachable block (ram,0x000102c68d7c) */
/* WARNING: Removing unreachable block (ram,0x000102c68d58) */
/* WARNING: Removing unreachable block (ram,0x000102c68d0c) */
/* WARNING: Removing unreachable block (ram,0x000102c68db8) */
/* WARNING: Removing unreachable block (ram,0x000102c68d34) */
/* WARNING: Removing unreachable block (ram,0x000102c68c0c) */
/* WARNING: Removing unreachable block (ram,0x000102c68c88) */
/* WARNING: Removing unreachable block (ram,0x000102c68c14) */
/* WARNING: Removing unreachable block (ram,0x000102c68bb0) */
/* WARNING: Removing unreachable block (ram,0x000102c68c54) */
/* WARNING: Removing unreachable block (ram,0x000102c68bd4) */
/* WARNING: Removing unreachable block (ram,0x000102c68b8c) */
/* WARNING: Removing unreachable block (ram,0x000102c68af4) */
/* WARNING: Removing unreachable block (ram,0x000102c68af8) */
/* WARNING: Removing unreachable block (ram,0x000102c68c24) */
/* WARNING: Removing unreachable block (ram,0x000102c68b20) */
/* WARNING: Removing unreachable block (ram,0x000102c68c48) */
/* WARNING: Removing unreachable block (ram,0x000102c68c64) */
/* WARNING: Removing unreachable block (ram,0x000102c68b4c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102c68adc) */
/* WARNING: Removing unreachable block (ram,0x000102c68ae0) */
/* WARNING: Removing unreachable block (ram,0x000102c68c5c) */
/* WARNING: Removing unreachable block (ram,0x000102c68c60) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c68a74(long param_1)

{
  long unaff_x20;
  
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c3d368(*(undefined8 *)(unaff_x20 + _DAT_112f06038));
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c69030; end: 102c6968b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69030(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_f8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar4 = param_1;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06038);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar5 == 0) {
    return;
  }
  func_0x0001041f3970();
  func_0x000107c61170(lVar5);
  lVar5 = _DAT_113068f40;
  if (lVar4 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(lVar4 + _DAT_113068f40) + _DAT_11308f140);
  uVar19 = *puVar1;
  lVar12 = puVar1[1];
  puVar1 = (undefined8 *)(*(long *)(lVar4 + _DAT_113068f48) + _DAT_11308f1f8);
  lVar15 = puVar1[1];
  if (lVar15 == 0) {
    uVar17 = *(ulong *)(*(long *)(lVar4 + _DAT_113068f40) + _DAT_113815208);
    if (uVar17 != 0) {
      uVar16 = uVar17 & 0xffffffffffffff8;
      if (uVar17 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar16 + 0x10);
      }
      else {
        uVar6 = uVar17;
        if (-1 < (long)uVar17) {
          uVar6 = uVar16;
        }
        func_0x000107c60480();
      }
      if (uVar6 != 0) {
        if ((uVar17 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar16 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102c6968c);
            (*pcVar3)();
          }
          puVar1 = (undefined8 *)(*(long *)(uVar17 + 0x20) + _DAT_11308f1f8);
          uStack_f8 = *puVar1;
          lVar18 = puVar1[1];
          func_0x000107c61434(lVar18);
          func_0x000107c61434(lVar12);
        }
        else {
          func_0x000107c61434(lVar12);
          func_0x000107c61434(uVar17);
          lVar14 = 0;
          func_0x000100e471e4(0,uVar17);
          func_0x000107c6142c(uVar17);
          uStack_f8 = *(undefined8 *)(lVar14 + _DAT_11308f1f8);
          lVar18 = ((undefined8 *)(lVar14 + _DAT_11308f1f8))[1];
          func_0x000107c61434(lVar18);
          func_0x000107c615e8(lVar14);
        }
        goto LAB_102c691a4;
      }
    }
    func_0x000107c61434(lVar12);
    uStack_f8 = 0;
    lVar18 = 0;
  }
  else {
    uStack_f8 = *puVar1;
    func_0x000107c61434(lVar12);
    lVar18 = lVar15;
  }
LAB_102c691a4:
  puVar8 = &UNK_1105b94c0;
  puVar7 = puVar8;
  func_0x000107c613fc(&UNK_1105b94c0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c613fc(&UNK_1105b94c0,0x18,7);
  lVar14 = unaff_x20;
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_102c6a584;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e1779c;
  puStack_90 = &UNK_1105b95a0;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar10);
  uStack_b8 = 0x102c6a59c;
  puStack_d8 = puVar13;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100e17304;
  puStack_c0 = &UNK_1105b95c8;
  ppuVar11 = &puStack_d8;
  puStack_b0 = puVar8;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61434(lVar15);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar8);
  func_0x000107c47be0(puVar9);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puStack_b0);
  puVar13 = puStack_80;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar13);
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f06068);
  if (lVar18 == 0) {
    uStack_f8 = 0;
  }
  else {
    lVar14 = lVar18;
    func_0x000107c5fadc(uStack_f8,lVar18);
    func_0x000107c6142c(lVar18);
  }
  if (lVar12 == 0) {
    uVar19 = 0;
  }
  else {
    lVar14 = lVar12;
    func_0x000107c5fadc(uVar19,lVar12);
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c3ed28();
  func_0x000107c61180();
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uVar19);
  lVar15 = *(long *)(unaff_x20 + _DAT_112f06060);
  lVar12 = lVar15;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c42c1c(lVar15);
    lVar12 = *(long *)(unaff_x20 + _DAT_112f06088);
    func_0x000107c44340();
    func_0x000107c61180();
    lVar5 = lVar12;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar14);
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    puVar13 = PTR_PTR_1126b9000;
    func_0x000107c610f8(PTR_PTR_1126b9000);
    func_0x000107c30b70();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar5);
    func_0x00010468f7d4(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar12);
    func_0x000107c61174(puVar13);
    lVar5 = lVar12;
    func_0x00010468f3e0(lVar12,puVar13);
    func_0x0001000d224c(&puStack_a8);
    puVar8 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      puVar7 = puStack_a8;
      func_0x000107c3d420(puStack_a8);
      func_0x000107c61180();
      func_0x000107c615e8(puVar8);
      func_0x000107c4d664(puVar7);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar4);
    puVar8 = &UNK_1105b94c0;
    func_0x000107c613fc(&UNK_1105b94c0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar13 = &UNK_1105b9600;
    func_0x000107c613fc(&UNK_1105b9600,0x28,7);
    *(undefined8 *)(puVar13 + 0x10) = uVar20;
    *(undefined **)(puVar13 + 0x18) = puVar8;
    *(long *)(puVar13 + 0x20) = param_1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f060c0);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    *puVar1 = 0x102c6a5f0;
    puVar1[1] = puVar13;
    func_0x000107c6157c(puVar8);
    func_0x000107c61174(param_1);
    func_0x000100d20e08(uVar19,uVar20);
    func_0x000107c61574(puVar8);
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + lVar5) + _DAT_11308f138);
    uVar19 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61174(lVar12);
    FUN_102c6968c(uVar19,uVar2,lVar12);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(lVar12);
    func_0x000107c4ffe8(lVar15);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(lVar12);
    func_0x000107c615e8(lVar15);
  }
  return;
}



/* Entry: 102c6968c; end: 102c698e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6968c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_102c69e54(0,0x112dcf430,&PTR_PTR_1126b3e90);
  uVar1 = 0x11;
  func_0x000103dec218(0x11);
  func_0x0001000d224c(&uStack_48);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  func_0x000107c602fc(0x4c);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0xd000000000000047,0x800000010f103d40);
  func_0x000107c614f0(param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  uVar2 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f103d90);
  func_0x000107c3e200(uStack_48);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102c698e8; end: 102c69993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c698e8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f06098);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c3e2c0(uVar2);
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102c69994; end: 102c69b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69994(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112f06098);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(param_3);
    if (param_1 == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      ppuVar3 = &puStack_88;
      uStack_70 = param_4;
      lStack_68 = param_1;
      uStack_60 = param_2;
      func_0x000107c60bc4(ppuVar3);
      uVar1 = uStack_60;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c41864(uVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102c69b2c; end: 102c69bcf; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow reportAdScopeDidSubmitWithReasonId:comment:] */

/* WARNING: Possible PIC construction at 0x000102c69b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c69b9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69b2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f060c8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102c69bd0; end: 102c69c6f; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow reportAdScopeDidComplete:didSubmit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f060b0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f060b0))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d20df8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c69c70; end: 102c69cab; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow hideAdScopeDidSubmitWithReasonId:comment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f060d8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102c69cac; end: 102c69d53; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow hideAdScopeDidComplete:didSubmit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f060b8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f060b8))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d20df8(pcVar1,uVar2);
  (*pcVar1)(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c69d54; end: 102c69df3; -[_TtC24AdPlaybackImplementation19AdReportingWorkflow adInfoScopeDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f060c0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f060c0))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d20df8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c69df4; end: 102c69e13;  */

void FUN_102c69df4(void)

{
  FUN_102c69994();
  return;
}



/* Entry: 102c69e14; end: 102c69e2f;  */

void FUN_102c69e14(long param_1,long param_2)

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



/* Entry: 102c69e30; end: 102c69e53;  */

void FUN_102c69e30(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102c69a84(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),FUN_102c69e94);
  return;
}



/* Entry: 102c69e54; end: 102c69e93;  */

void FUN_102c69e54(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c69e94; end: 102c6a33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c69e94(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_68;
  
  lVar9 = *(long *)(unaff_x20 + _DAT_112f06040);
  lVar11 = lVar9;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar9);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112f060c8);
  lVar11 = plVar1[1];
  if (lVar11 == 0) {
    lVar9 = -1;
  }
  else {
    lVar9 = *plVar1;
    func_0x00010349ee00(0);
    func_0x000107c61434(lVar11);
    param_2 = lVar11;
    func_0x00010349e7f8();
    func_0x000107c6142c(lVar11);
    if (0x14 < lVar9 + 1U) goto LAB_102c6a300;
    if ((1L << (lVar9 + 1U & 0x3f) & 0xe1f07U) == 0) {
      lVar11 = plVar1[1];
      if (lVar11 != 0) {
        lVar9 = *plVar1;
        func_0x00010349f05c(0);
        func_0x000107c61434(lVar11);
        param_2 = lVar11;
        func_0x00010349ee20(lVar9,lVar11);
        func_0x000107c6142c(lVar11);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_112f06088);
      func_0x000107c44340();
      func_0x000107c61180();
      lVar11 = lVar9;
      func_0x000107c30ad8();
      func_0x000107c61180();
      if (lVar11 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      puVar6 = PTR_PTR_1126b9000;
      func_0x000107c610f8(PTR_PTR_1126b9000);
      func_0x000107c30b70();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar11);
      func_0x00010468f7d4(0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar9);
      func_0x000107c61174(puVar6);
      lVar11 = lVar9;
      func_0x00010468f3e0(lVar9,puVar6);
      func_0x0001000d224c(&lStack_68);
      if (lStack_68 != 0) {
        lVar7 = lStack_68;
        func_0x000107c3d420(lStack_68);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_68);
        func_0x000107c4d664(lVar7);
        func_0x000107c61170(lVar7);
      }
      func_0x000107c61170(lVar11);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar9);
      goto LAB_102c6a300;
    }
  }
  func_0x000107c31158();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar11 = 0;
    lVar9 = 0;
    lVar7 = param_2;
  }
  else {
    lVar11 = lVar9;
    func_0x000107c5faec();
    lVar7 = param_2;
    func_0x000107c61170(lVar9);
    lVar9 = param_2;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f060d0);
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f060d0))[1];
  lVar10 = *(long *)(unaff_x20 + _DAT_112f06088);
  func_0x000107c61434(lVar3);
  func_0x000107c44340();
  func_0x000107c61180();
  lVar4 = lVar10;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  if (lVar9 == 0) {
    lVar11 = 0;
    if (lVar3 != 0) goto LAB_102c6a078;
LAB_102c6a094:
    uVar8 = 0;
  }
  else {
    func_0x000107c5fadc(lVar11,lVar9);
    if (lVar3 == 0) goto LAB_102c6a094;
LAB_102c6a078:
    func_0x000107c5fadc(uVar8,lVar3);
  }
  puVar6 = PTR_PTR_1126b9000;
  func_0x000107c610f8(PTR_PTR_1126b9000);
  func_0x000107c30b70();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar8);
  func_0x00010468f7d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar10);
  func_0x000107c61174(puVar6);
  lVar11 = lVar10;
  func_0x00010468f3e0(lVar10,puVar6);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar7 = lStack_68;
    func_0x000107c3d420(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x000107c4d664(lVar7);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar10);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar9);
LAB_102c6a300:
  lVar11 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c6142c(lVar11);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f060d0);
  uVar8 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 102c6a340; end: 102c6a34b;  */

void FUN_102c6a340(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_102c69e54(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(uVar2,param_1,uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102c6a34c(param_2 & 1,uVar4);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102c6a34c; end: 102c6a583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6a34c(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_58;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06050);
  lVar7 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  if ((param_1 & 1) != 0) {
    lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f060d8))[1];
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f060d8);
      func_0x00010349f05c(0);
      func_0x000107c61434(lVar7);
      param_2 = lVar7;
      func_0x00010349ee20(uVar6,lVar7);
      func_0x000107c6142c(lVar7);
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06088);
  func_0x000107c44340();
  func_0x000107c61180();
  lVar7 = lVar5;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar3 = PTR_PTR_1126b9000;
  func_0x000107c610f8(PTR_PTR_1126b9000);
  func_0x000107c30b70();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar7);
  func_0x00010468f7d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar5);
  func_0x000107c61174(puVar3);
  lVar7 = lVar5;
  func_0x00010468f3e0(lVar5,puVar3);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar4 = lStack_58;
    func_0x000107c3d420(lStack_58);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    func_0x000107c4d664(lVar4);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f060d8);
  uVar6 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 102c6a584; end: 102c6a613;  */

void FUN_102c6a584(void)

{
  FUN_102c698e8();
  return;
}



/* Entry: 102c6a614; end: 102c6a7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6a614(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lStack_48;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06060);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06088);
  func_0x000107c44340();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar3 = PTR_PTR_1126b9000;
  func_0x000107c610f8(PTR_PTR_1126b9000);
  func_0x000107c30b70();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
  func_0x00010468f7d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar5);
  func_0x000107c61174(puVar3);
  lVar1 = lVar5;
  func_0x00010468f3e0(lVar5,puVar3);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar4 = lStack_48;
    func_0x000107c3d420(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c4d664(lVar4);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 102c6a7d4; end: 102c6a7ff;  */

void FUN_102c6a7d4(long param_1,long param_2)

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


