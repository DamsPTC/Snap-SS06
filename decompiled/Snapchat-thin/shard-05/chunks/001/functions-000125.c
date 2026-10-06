/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b8d8b8; end: 103b8d917; -[_TtC28SCFriendStorySettingServices28SCFriendStorySettingServices init] */

void FUN_103b8d8b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCFriendStorySettingServices.SCFriendStorySettingServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8d8e4);
  (*pcVar1)();
}



/* Entry: 103b8d918; end: 103b8d927; -[_TtC28SCFriendStorySettingServices28SCFriendStorySettingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff1c58));
  return;
}



/* Entry: 103b8d928; end: 103b8d993;  */

void FUN_103b8d928(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c41dfc();
    func_0x000107c615e8(param_3);
  }
  return;
}



/* Entry: 103b8d994; end: 103b8d99b;  */

void FUN_103b8d994(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c41dfc();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 103b8d99c; end: 103b8d9c7;  */

void FUN_103b8d99c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 103b8d9c8; end: 103b8da53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d9c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_1106dcaf8;
  func_0x000107c613fc(&UNK_1106dcaf8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_103b8dd44,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 103b8da54; end: 103b8dd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8da54(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  func_0x000107c61428(param_1 + 0x10,auStack_a8,0,0);
  lVar9 = param_1 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112ff1ca0;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    func_0x000107c61428(lVar9 + _DAT_112ff1ca0,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    func_0x000107c61434(lVar6);
    func_0x000107c61170(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, func_0x0001000a7158(), ((ulong)puVar4 & 1) == 0)) {
      func_0x000107c6142c(lVar6);
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar6 + 0x38) + lVar9 * 8);
      func_0x000107c61434(uVar13);
      func_0x000107c6142c(lVar6);
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar7 = -1L << ((ulong)*(byte *)(uVar13 + 0x20) & 0x3f);
        puVar12 = (ulong *)(uVar13 + 0x38);
        uVar8 = ~uVar7;
        uVar7 = -uVar7;
        uVar5 = 0xffffffffffffffff;
        if (uVar7 < 0x40) {
          uVar5 = ~(-1L << (uVar7 & 0x3f));
        }
        uVar5 = uVar5 & *puVar12;
        uVar7 = uVar13;
        func_0x000107c61434();
        lVar9 = 0;
        uVar14 = uVar13;
      }
      else {
        uVar7 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar7 = uVar13;
        }
        func_0x000107c61434(uVar13);
        func_0x000107c60288();
        uVar2 = 0;
        func_0x000107c5f1e0(0);
        uVar3 = uVar2;
        FUN_103b8dfcc();
        func_0x000107c5fe30(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_103b8dc20;
      while( true ) {
        while (uVar5 != 0) {
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = *(ulong *)(*(long *)(uVar14 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                            lVar6 * 0x200);
          auStack_d8[0] = uVar7;
          func_0x000107c6157c(uVar7);
          uVar5 = uVar5 - 1 & uVar5;
          lVar10 = lVar9;
          while( true ) {
            lVar9 = lVar6;
            if (uVar7 == 0) goto LAB_103b8dc8c;
            func_0x000107c5f1dc();
            func_0x000107c61574();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_103b8dc20:
            func_0x000107c602ac();
            if (uVar7 == 0) goto LAB_103b8dc88;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            func_0x000107c5f1e0(0);
            func_0x000107c6147c(auStack_d8,auStack_f0,PTR___syXlN_11034f1a0 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8dd44);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_103b8dc88:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_103b8dc8c:
      FUN_103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      func_0x000107c6142c(uVar13);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ff1ca0,auStack_f0,0x21,0);
    FUN_103b8df48(param_2);
    func_0x000107c614a8(auStack_f0);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
  }
  return;
}



/* Entry: 103b8dd44; end: 103b8dd5b;  */

void FUN_103b8dd44(void)

{
  long unaff_x20;
  
  FUN_103b8da54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103b8dd5c; end: 103b8de13; -[SCFriendStorySettingUpdatesListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8dd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_1106dcaf8;
  func_0x000107c613fc(&UNK_1106dcaf8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100087bd4(FUN_103b8e2e0,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 103b8de14; end: 103b8de5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8de14(undefined8 param_1,undefined1 param_2)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x000107c61174();
  func_0x000107c5f1ec(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b8de60; end: 103b8decf; -[SCFriendStorySettingUpdatesListenerAnnouncer didUpdateFriendStorySettingWithUpdateRequest:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8de60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5f1ec(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103b8ded0; end: 103b8deff;  */

void FUN_103b8ded0(void)

{
  func_0x000100499a04();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8df00; end: 103b8df47; -[SCFriendStorySettingUpdatesListenerAnnouncer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b8df1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b8df20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8df00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff1c98));
  return;
}



/* Entry: 103b8df48; end: 103b8dfcb;  */

undefined8 FUN_103b8df48(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  func_0x0001000a7158();
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_103b8e018();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_103b8e174(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103b8dfcc; end: 103b8e00f;  */

void FUN_103b8dfcc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da11d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f1e0(0xff);
  puVar2 = PTR___s7Combine14AnyCancellableCSHAAMc_11034ade0;
  func_0x000107c61520(PTR___s7Combine14AnyCancellableCSHAAMc_11034ade0,uVar1);
  puRam0000000112da11d0 = puVar2;
  return;
}



/* Entry: 103b8e010; end: 103b8e017;  */

void FUN_103b8e010(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103b8e018; end: 103b8e173;  */

void FUN_103b8e018(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112ff1cd0,&UNK_10dc5ca40);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_103b8e0f4;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_103b8e0f4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103b8e174);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_103b8e14c;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_103b8e14c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103b8e174; end: 103b8e2df;  */

void FUN_103b8e174(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_103b8e23c:
          puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar2 + 1 <= puVar3 || param_1 != uVar8)) {
            *puVar3 = *puVar2;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar3 + 1 <= puVar2 || param_1 != uVar8)) {
            *puVar2 = *puVar3;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_103b8e23c;
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x103b8e2e0);
  (*pcVar5)();
}



/* Entry: 103b8e2e0; end: 103b8e2f3;  */

void FUN_103b8e2e0(void)

{
  FUN_103b8dd44();
  return;
}



/* Entry: 103b8e2f4; end: 103b8e39f;  */

void FUN_103b8e2f4(void)

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



/* Entry: 103b8e3a0; end: 103b8e3d7;  */

void FUN_103b8e3a0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103b8e3d8; end: 103b8e3f7; -[SCFriendStorySettingUpdateRequest description] */

void FUN_103b8e3d8(void)

{
  FUN_103b8e748();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8e3f8; end: 103b8e43f; -[SCFriendStorySettingUpdateRequest init] */

void FUN_103b8e3f8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCFriendStorySettingServices/SCFriendStorySettingUpdateRequestWrapper.swift",
                      0x4b,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8e440);
  (*pcVar1)();
}



/* Entry: 103b8e440; end: 103b8e443; -[SCFriendStorySettingUpdateRequest copyWithZone:] */

void FUN_103b8e440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b8e444; end: 103b8e4c3; +[SCFriendStorySettingUpdateRequest muteStoryWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8e444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff1cd8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff1ce0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff1ce8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff1cf0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8e4c4; end: 103b8e547; +[SCFriendStorySettingUpdateRequest unMuteStoryWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8e4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff1cd8) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff1ce0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff1ce8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff1cf0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8e548; end: 103b8e667; +[SCFriendStorySettingUpdateRequest setStoryPrivacyWithUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8e548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112ff1cd8) = 2;
  *(undefined8 *)(lVar1 + _DAT_112ff1ce0) = 0;
  *(undefined8 *)(lVar1 + _DAT_112ff1ce8) = 0;
  *(undefined8 *)(lVar1 + _DAT_112ff1cf0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8e668; end: 103b8e6cb; -[SCFriendStorySettingUpdateRequest matchMuteStory:unMuteStory:setStoryPrivacy:] */

void FUN_103b8e668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103b8e5d8(FUN_103b8e948,auStack_40,FUN_103b8e998,auStack_60,FUN_103b8e958,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b8e6cc; end: 103b8e6ff;  */

void FUN_103b8e6cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8e700; end: 103b8e747; -[SCFriendStorySettingUpdateRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8e700(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff1ce0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff1ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1cf0));
  return;
}



/* Entry: 103b8e748; end: 103b8e907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8e748(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff1cd8) == '\0') {
    if (*(long *)(param_1 + _DAT_112ff1ce0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8e788);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_112ff1cd8) == '\x01') {
    if (*(long *)(param_1 + _DAT_112ff1ce8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8e774);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff1cf0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8e7a0);
    (*pcVar1)();
  }
  return;
}



/* Entry: 103b8e908; end: 103b8e947;  */

void FUN_103b8e908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5caa8;
  func_0x000107c61520(&UNK_10dc5caa8,&UNK_1106dcb90);
  puRam0000000112ff1d20 = puVar1;
  return;
}



/* Entry: 103b8e948; end: 103b8e957;  */

void FUN_103b8e948(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b8e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103b8e958; end: 103b8e997;  */

void FUN_103b8e958(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b8e998; end: 103b8e99b;  */

void FUN_103b8e998(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b8e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103b8e99c; end: 103b8e9a3; +[_TtC11AvatarUtils15AvatarConstants borderWidth] */

undefined8 FUN_103b8e99c(void)

{
  return 0x4008000000000000;
}



/* Entry: 103b8e9a4; end: 103b8e9ab; +[_TtC11AvatarUtils15AvatarConstants borderGapWidth] */

undefined8 FUN_103b8e9a4(void)

{
  return 0x4004000000000000;
}



/* Entry: 103b8e9ac; end: 103b8e9b3; +[_TtC11AvatarUtils15AvatarConstants condensedBorderWidth] */

undefined8 FUN_103b8e9ac(void)

{
  return 0x4000000000000000;
}



/* Entry: 103b8e9b4; end: 103b8e9d3;  */

void FUN_103b8e9b4(void)

{
  func_0x000107c61168(&PTR_PTR_112938cb8);
  return;
}



/* Entry: 103b8e9d4; end: 103b8ea0f; -[_TtC11AvatarUtils15AvatarConstants init] */

void FUN_103b8e9d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b8e9b4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8ea10; end: 103b8ea3f;  */

void FUN_103b8ea10(void)

{
  FUN_103b8e9b4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8ea40; end: 103b8ea4b; -[SCGamesPresenceMainSessionResult sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ea40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1d50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1d50))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8ea4c; end: 103b8ea57; -[SCGamesPresenceMainSessionResult lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ea4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1d58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1d58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8ea58; end: 103b8ead3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ea58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1d50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1d58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8ead4; end: 103b8eb63; -[SCGamesPresenceMainSessionResult initWithSessionId:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ead4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff1d50);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff1d58);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8eb64; end: 103b8eba3; -[SCGamesPresenceMainSessionResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b8eb84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b8eb88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8eb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1d50 + 8))
  ;
  return;
}



/* Entry: 103b8eba4; end: 103b8ebaf; -[SCGamesPresenceSessionResult sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8eba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1d60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1d60))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8ebb0; end: 103b8ebbb; -[SCGamesPresenceSessionResult lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ebb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1d68);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1d68))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8ebbc; end: 103b8ec03;  */

void FUN_103b8ebbc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8ec04; end: 103b8ec4b; -[SCGamesPresenceSessionResult participantUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ec04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1d70);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b8ec4c; end: 103b8ecd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ec4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1d60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1d68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1d70) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8ecd8; end: 103b8ed97; -[SCGamesPresenceSessionResult initWithSessionId:lensId:participantUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ecd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff1d60);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff1d68);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_112ff1d70) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8ed98; end: 103b8ed9b;  */

void FUN_103b8ed98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8ed9c; end: 103b8edeb; -[SCGamesPresenceSessionResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b8edbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b8edc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ed9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1d60 + 8))
  ;
  return;
}



/* Entry: 103b8edec; end: 103b8eea7; +[SCGamesFriendsFeedPresenceHelper presenceUUIDToGamesSessionUUID:] */

void FUN_103b8edec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eeb8(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  func_0x000107c5eeac();
  uVar2 = param_2;
  func_0x000107c5fb1c();
  func_0x000107c6142c(param_2);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c5fadc(param_3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b8eea8; end: 103b8eedf; +[SCGamesFriendsFeedPresenceHelper mainSessionFrom:] */

void FUN_103b8eea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b90030();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b8eee0; end: 103b8eee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b8eee0(undefined *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long extraout_x8;
  undefined8 uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *apuStack_88 [4];
  ulong *puStack_68;
  
  puVar6 = (ulong *)0x0;
  func_0x000107c5eec8();
  puStack_c8 = (ulong *)puVar6[-1];
  puStack_c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(puStack_c8[8]);
  lStack_d0 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e3a4();
  func_0x000107c61180();
  puVar7 = (undefined *)0x0;
  func_0x000103b911ec(0,0x112ff1df0,&PTR_PTR_1126da5a8);
  puVar12 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar20 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar20 = puVar12;
    }
    func_0x000107c60480();
    puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar6;
  if (puVar20 == (undefined *)0x0) {
    func_0x000107c6142c(puVar12);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar22 = puVar6;
    func_0x0001001830b8();
    puVar8 = puVar6;
    puStack_a0 = puVar22;
    func_0x000101690820();
    puVar22 = (ulong *)0x0;
    uStack_d8 = (ulong)puVar12 & 0xc000000000000001;
    uStack_f0 = (ulong)puVar12 & 0xffffffffffffff8;
    puStack_e8 = puVar20;
    puStack_e0 = puVar12;
    puStack_68 = puVar8;
    do {
      if (uStack_d8 == 0) {
        if (*(ulong **)(uStack_f0 + 0x10) <= puVar22) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e58);
          (*pcVar5)();
        }
        puVar8 = *(ulong **)(puVar12 + (long)puVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar22;
        FUN_103b8f6d0(puVar22,puVar12,&PTR_PTR_1126da5a8,0x112ff1df0);
        puVar7 = puVar12;
      }
      if (SCARRY8((long)puVar22,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e44);
        (*pcVar5)();
      }
      puVar9 = puVar8;
      func_0x000107c52060();
      func_0x000107c61180();
      lVar1 = lStack_d0;
      func_0x000107c5eeb8(lStack_d0);
      func_0x000107c61170();
      func_0x000107c5eeac();
      puVar20 = puVar7;
      func_0x000107c5fb1c();
      func_0x000107c6142c(puVar7);
      (*(code *)puStack_c8[1])(lVar1,puStack_c0);
      puVar17 = puStack_68;
      puStack_b0 = (undefined *)((long)puVar22 + 1);
      puStack_a8 = puVar22;
      if (puStack_68[2] == 0) {
LAB_103b9084c:
        func_0x000107c61434(puVar20);
        puVar22 = puVar6;
        func_0x000107c61558();
        puVar17 = puVar6;
        if (((ulong)puVar22 & 1) == 0) {
          puVar17 = (ulong *)0x0;
          func_0x0001000d182c(0,puVar6[2] + 1,1,puVar6);
        }
        uVar18 = puVar17[2];
        puVar6 = puVar17;
        if (puVar17[3] >> 1 <= uVar18) {
          puVar6 = (ulong *)(ulong)(1 < puVar17[3]);
          func_0x0001000d182c(puVar6,uVar18 + 1,1,puVar17);
        }
        puVar17 = puStack_68;
        puVar6[2] = uVar18 + 1;
        puVar6[uVar18 * 2 + 4] = (ulong)puVar9;
        puVar6[uVar18 * 2 + 5] = (ulong)puVar20;
        puVar10 = puStack_68;
        func_0x000107c61558();
        apuStack_88[0] = puVar17;
        puVar22 = puVar9;
        puVar7 = puVar20;
        func_0x000100029284();
        uVar18 = (ulong)~(uint)puVar7 & 1;
        lVar1 = puVar17[2] + uVar18;
        if (SCARRY8(puVar17[2],uVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e4c);
          (*pcVar5)();
        }
        if ((long)puVar17[3] < lVar1) {
          func_0x000101e3d9a0(lVar1,puVar10);
          puVar22 = puVar9;
          puVar12 = puVar20;
          func_0x000100029284();
          puVar17 = apuStack_88[0];
          if (((uint)puVar7 & 1) != ((uint)puVar12 & 1)) goto LAB_103b90ea8;
        }
        else {
          puVar17 = apuStack_88[0];
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000101e48ca0();
            puVar17 = apuStack_88[0];
          }
        }
        apuStack_88[0] = puVar17;
        if (((ulong)puVar7 & 1) == 0) {
          puVar17[((ulong)puVar22 >> 6) + 8] =
               puVar17[((ulong)puVar22 >> 6) + 8] | 1L << ((ulong)puVar22 & 0x3f);
          puVar10 = (ulong *)(puVar17[6] + (long)puVar22 * 0x10);
          *puVar10 = (ulong)puVar9;
          puVar10[1] = (ulong)puVar20;
          *(undefined **)(puVar17[7] + (long)puVar22 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (SCARRY8(puVar17[2],1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e5c);
            (*pcVar5)();
          }
          puVar17[2] = puVar17[2] + 1;
          func_0x000107c61434(puVar20);
          puStack_68 = puVar17;
        }
        else {
          uVar16 = *(undefined8 *)(puVar17[7] + (long)puVar22 * 8);
          *(undefined **)(puVar17[7] + (long)puVar22 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c6142c(uVar16);
          puStack_68 = puVar17;
        }
      }
      else {
        func_0x000107c61434(puStack_68);
        puVar7 = puVar20;
        func_0x000100029284(puVar9);
        func_0x000107c6142c(puVar17);
        if (((ulong)puVar7 & 1) == 0) goto LAB_103b9084c;
      }
      puVar22 = puVar8;
      func_0x000107c43cac();
      puVar7 = PTR___ss5Int64VN_11034ee50;
      puVar12 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      apuStack_88[0] = puVar22;
      func_0x000107c6057c();
      puVar22 = puStack_a0;
      puVar17 = puStack_a0;
      func_0x000107c61558();
      apuStack_88[0] = puVar22;
      puVar10 = puVar9;
      puVar13 = puVar20;
      func_0x000100029284();
      uVar18 = (ulong)~(uint)puVar13 & 1;
      lVar1 = puVar22[2] + uVar18;
      if (SCARRY8(puVar22[2],uVar18)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e48);
        (*pcVar5)();
      }
      if ((long)puVar22[3] < lVar1) {
        func_0x0001001833c8(lVar1,puVar17);
        puVar10 = puVar9;
        puVar14 = puVar20;
        func_0x000100029284();
        if (((uint)puVar13 & 1) != ((uint)puVar14 & 1)) {
LAB_103b90ea8:
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90eb8);
          (*pcVar5)();
        }
      }
      else if (((ulong)puVar17 & 1) == 0) {
        func_0x000100184498();
      }
      puStack_a0 = apuStack_88[0];
      if (((ulong)puVar13 & 1) == 0) {
        apuStack_88[0][((ulong)puVar10 >> 6) + 8] =
             apuStack_88[0][((ulong)puVar10 >> 6) + 8] | 1L << ((ulong)puVar10 & 0x3f);
        puVar22 = (ulong *)(apuStack_88[0][6] + (long)puVar10 * 0x10);
        *puVar22 = (ulong)puVar9;
        puVar22[1] = (ulong)puVar20;
        puVar2 = (undefined8 *)(apuStack_88[0][7] + (long)puVar10 * 0x10);
        *puVar2 = puVar7;
        puVar2[1] = puVar12;
        if (SCARRY8(apuStack_88[0][2],1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e54);
          (*pcVar5)();
        }
        apuStack_88[0][2] = apuStack_88[0][2] + 1;
        func_0x000107c61434(puVar20);
      }
      else {
        puVar2 = (undefined8 *)(apuStack_88[0][7] + (long)puVar10 * 0x10);
        uVar16 = puVar2[1];
        *puVar2 = puVar7;
        puVar2[1] = puVar12;
        func_0x000107c6142c(uVar16);
      }
      ppuVar11 = apuStack_88;
      FUN_103b8eee4(ppuVar11,puVar9,puVar20);
      if (*puVar9 == 0) {
        puVar7 = (undefined *)0x0;
        (*(code *)ppuVar11)(apuStack_88);
        func_0x000107c6142c(puVar20);
        puVar12 = puStack_e0;
      }
      else {
        puVar22 = puVar8;
        puVar10 = puVar9;
        func_0x000107c5d984();
        func_0x000107c61180();
        puVar17 = puVar22;
        func_0x000107c5faec();
        uVar21 = *puVar9;
        uVar18 = uVar21;
        func_0x000107c61558();
        *puVar9 = uVar21;
        uVar19 = uVar21;
        puStack_b8 = puVar6;
        if ((uVar18 & 1) == 0) {
          uVar19 = 0;
          func_0x0001000d182c(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
          *puVar9 = uVar19;
        }
        uVar18 = *(ulong *)(uVar19 + 0x10);
        uVar21 = uVar19;
        if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar18) {
          uVar21 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
          func_0x0001000d182c(uVar21,uVar18 + 1,1,uVar19);
          *puVar9 = uVar21;
        }
        puVar12 = puStack_e0;
        *(ulong *)(uVar21 + 0x10) = uVar18 + 1;
        lVar1 = uVar21 + uVar18 * 0x10;
        *(ulong **)(lVar1 + 0x20) = puVar17;
        *(ulong **)(lVar1 + 0x28) = puVar10;
        puVar7 = (undefined *)0x0;
        (*(code *)ppuVar11)(apuStack_88);
        func_0x000107c6142c(puVar20);
        func_0x000107c61170(puVar22);
        puVar6 = puStack_b8;
      }
      func_0x000107c61170(puVar8);
      puVar22 = (ulong *)((long)puStack_a8 + 1);
    } while (puStack_b0 != puStack_e8);
    func_0x000107c6142c(puVar12);
    puVar22 = (ulong *)puVar6[2];
    puVar8 = puStack_a0;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar22 != (ulong *)0x0) {
      puVar17 = (ulong *)0x0;
      puStack_c0 = puVar6 + 5;
      puStack_c8 = (ulong *)((long)puVar22 + -1);
      puStack_a8 = puVar22;
LAB_103b90c14:
      puVar4 = puStack_68;
      puVar10 = puStack_c0 + (long)puVar17 * 2;
      puVar8 = puStack_a0;
      puVar9 = puVar17;
      puStack_b0 = puVar7;
      do {
        if ((ulong *)puVar6[2] <= puVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e50);
          (*pcVar5)();
        }
        if (puVar8[2] != 0) {
          uVar18 = puVar10[-1];
          uVar19 = *puVar10;
          func_0x000107c61434(uVar19);
          func_0x000107c6157c(puVar8);
          uVar21 = uVar18;
          uVar15 = uVar19;
          func_0x000100029284();
          if ((uVar15 & 1) == 0) {
            func_0x000107c61574(puVar8);
            func_0x000107c6142c(uVar19);
          }
          else {
            puVar2 = (undefined8 *)(puVar8[7] + uVar21 * 0x10);
            uVar16 = *puVar2;
            uVar3 = puVar2[1];
            func_0x000107c61434(uVar3);
            func_0x000107c61574();
            puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar4[2] != 0) {
              func_0x000107c61434(puVar4);
              uVar21 = uVar18;
              uVar15 = uVar19;
              func_0x000100029284();
              puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((uVar15 & 1) != 0) {
                puVar7 = *(undefined **)(puVar4[7] + uVar21 * 8);
                func_0x000107c61434(puVar7);
              }
              puVar8 = puVar4;
              func_0x000107c6142c();
            }
            func_0x000103b90f04();
            puVar17 = puVar8;
            func_0x000107c610f8();
            puVar22 = (ulong *)((long)puVar17 + _DAT_112ff1d60);
            *puVar22 = uVar18;
            puVar22[1] = uVar19;
            puVar2 = (undefined8 *)((long)puVar17 + _DAT_112ff1d68);
            *puVar2 = uVar16;
            puVar2[1] = uVar3;
            *(undefined **)((long)puVar17 + _DAT_112ff1d70) = puVar7;
            ppuVar11 = &puStack_98;
            puStack_98 = puVar17;
            puStack_90 = puVar8;
            func_0x000107c61154(ppuVar11,PTR_s_init_1125d9248);
            puVar22 = puStack_a8;
            puVar12 = puStack_b0;
            puVar8 = puStack_a0;
            if (ppuVar11 != (ulong **)0x0) goto code_r0x000103b90d48;
          }
        }
        puVar9 = (ulong *)((long)puVar9 + 1);
        puVar10 = puVar10 + 2;
        puVar7 = puStack_b0;
        if (puVar22 == puVar9) break;
      } while( true );
    }
LAB_103b90e1c:
    func_0x000107c6142c(puVar6);
    puVar6 = puStack_68;
    func_0x000107c61574(puVar8);
    func_0x000107c6142c(puVar6);
  }
  return puVar7;
code_r0x000103b90d48:
  puVar7 = puStack_b0;
  func_0x000107c61550();
  if ((((int)puVar7 == 0) || ((long)puVar12 < 0)) ||
     (puVar7 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar12 >> 0x3e == 0) {
      puVar20 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        puVar20 = puVar12;
      }
      func_0x000107c60480(puVar20);
    }
    puVar7 = (undefined *)0x0;
    FUN_103b8fd98(0,puVar20 + 1,1,puVar12);
  }
  uVar19 = (ulong)puVar7 & 0xffffffffffffff8;
  uVar18 = *(ulong *)(uVar19 + 0x10);
  if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar18) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
    FUN_103b8fd98(puVar12,uVar18 + 1,1,puVar7);
    uVar19 = (ulong)puVar12 & 0xffffffffffffff8;
    puVar7 = puVar12;
  }
  puVar17 = (ulong *)((long)puVar9 + 1);
  *(ulong *)(uVar19 + 0x10) = uVar18 + 1;
  *(ulong ***)(uVar19 + uVar18 * 8 + 0x20) = ppuVar11;
  puVar8 = puStack_a0;
  if (puStack_c8 == puVar9) goto LAB_103b90e1c;
  goto LAB_103b90c14;
}



/* Entry: 103b8eee4; end: 103b8ef57;  */

code * FUN_103b8eee4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x555d);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_103b8fa34();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_103b8ef58;
}



/* Entry: 103b8ef58; end: 103b8ef87;  */

void FUN_103b8ef58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103b8ef88; end: 103b8efdb; +[SCGamesFriendsFeedPresenceHelper allSessionsFrom:] */

void FUN_103b8ef88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b90650();
  func_0x000107c61170(param_3);
  func_0x000103b90f04();
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,param_3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8efdc; end: 103b8f19b;  */

long FUN_103b8efdc(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)0x0;
  uVar4 = 0;
  func_0x000103b911ec(0,0x112e561b8,&PTR_PTR_1126da5b0);
  func_0x000107c5f9e4(param_1,&puStack_68,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
  puVar5 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103b90558(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e56208,&UNK_10da58d90);
  }
  puVar8 = (ulong *)(puVar5 + 0x40);
  uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar13 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *puVar8;
  func_0x000107c61434(puVar5);
  lVar10 = 0;
  lVar9 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar6 = *(ulong *)(*(long *)(puVar5 + 0x38) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                        lVar10 * 0x200);
      func_0x000107c61174();
      uVar7 = uVar6;
      FUN_103b90650();
      if (uVar7 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar11 = uVar7;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c();
      func_0x000107c61170(uVar6);
      bVar3 = SCARRY8(lVar9,uVar11);
      lVar9 = lVar9 + uVar11;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f19c);
        (*pcVar2)();
      }
      lVar1 = lVar10;
    }
    bVar3 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f198);
      (*pcVar2)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar10) break;
    uVar13 = puVar8[lVar10];
  }
  func_0x000107c6142c(puVar5);
  FUN_103b90eb8(puVar5,puVar8,~uVar12,lVar1,0);
  return lVar9;
}



/* Entry: 103b8f19c; end: 103b8f2e7;  */

void FUN_103b8f19c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_70;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    func_0x000107c4b264(param_2);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar2 = &UNK_1106dcd08;
    func_0x000107c613fc(&UNK_1106dcd08,0x20,7);
    *(code **)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    uStack_50 = 0x103b90ec0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100bcda3c;
    puStack_58 = &UNK_1106dcd20;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar2);
    func_0x000107c5dc64(param_2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c61170(param_2);
    return;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103b90558(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e07210,&UNK_10dc5cbd0);
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  return;
}



/* Entry: 103b8f2e8; end: 103b8f553;  */

void FUN_103b8f2e8(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  if (param_1 != 0) {
    puStack_a8 = (undefined *)0x0;
    uVar4 = 0;
    func_0x000103b911ec(0,0x112d68e68,&PTR_PTR_1126de278);
    func_0x000107c5fc50(param_1,&puStack_a8,uVar4);
    puVar1 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      puVar11 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff8);
      if ((ulong)puStack_a8 >> 0x3e == 0) {
        puVar9 = *(undefined **)(puVar11 + 0x10);
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar9 = puStack_a8;
        if (-1 < (long)puStack_a8) {
          puVar9 = puVar11;
        }
        func_0x000107c60480();
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_78;
      if (puVar9 != (undefined *)0x0) {
        FUN_103b90558(puStack_78,0x112e07210,&UNK_10dc5cbd0);
        puVar10 = (undefined *)0x0;
        while( true ) {
          if (puVar9 == puVar10) {
            func_0x000107c6142c(puVar1);
            (*param_2)(puStack_78);
            func_0x000107c6142c(puStack_78);
            return;
          }
          if (((ulong)puVar1 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar11 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103b8f508);
              (*pcVar3)();
            }
            puVar5 = *(undefined **)(puVar1 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174(puVar5);
          }
          else {
            puVar5 = puVar10;
            FUN_103b8f6d0(puVar10,puVar1,&PTR_PTR_1126de278,0x112d68e68);
          }
          if (SCARRY8((long)puVar10,1)) break;
          puVar6 = &UNK_1106dcdd0;
          func_0x000107c613fc(&UNK_1106dcdd0,0x18,7);
          *(undefined ***)(puVar6 + 0x10) = &puStack_78;
          puVar7 = &UNK_1106dcdf8;
          func_0x000107c613fc(&UNK_1106dcdf8,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_103b91124;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          uStack_88 = 0x103b911cc;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100fe2610;
          puStack_90 = &UNK_1106dce10;
          ppuVar8 = &puStack_a8;
          puStack_80 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          puVar2 = puStack_80;
          func_0x000107c6157c(puVar7);
          func_0x000107c61574(puVar2);
          func_0x000107c4c744(puVar5);
          func_0x000107c61170(puVar5);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61574(puVar6);
          puVar5 = puVar7;
          func_0x000107c61544(puVar7,"",0x7b,0x95,0x15,1);
          func_0x000107c61574(puVar7);
          puVar10 = puVar10 + 1;
          if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103b8f50c);
            (*pcVar3)();
          }
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b8f504);
        (*pcVar3)();
      }
      func_0x000107c6142c(puVar1);
    }
  }
  (*param_2)(0);
  return;
}



/* Entry: 103b8f554; end: 103b8f5ef; +[SCGamesFriendsFeedPresenceHelper fetchLensMetadataWithLensIds:retriever:performer:completion:] */

void FUN_103b8f554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c60bc4(param_6);
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c60bc4(param_6);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  FUN_103b90f44(param_3,param_4,param_5,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b8f5f0; end: 103b8f65f;  */

void FUN_103b8f5f0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000103b911ec(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b8f660; end: 103b8f69b; -[SCGamesFriendsFeedPresenceHelper init] */

void FUN_103b8f660(undefined8 param_1)

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



/* Entry: 103b8f69c; end: 103b8f6cf;  */

void FUN_103b8f69c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8f6d0; end: 103b8f88b;  */

ulong FUN_103b8f6d0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f7b4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f7b8);
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
  func_0x000103b911ec(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f88c);
  (*pcVar2)();
}



/* Entry: 103b8f88c; end: 103b8f8e3;  */

void FUN_103b8f88c(void)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar3 == 0) || (func_0x000103b90f04(), lVar3 == 0)) {
    puVar1 = (ulong *)0x112ff1df8;
    plVar4 = (long *)&UNK_10dc5cbe0;
  }
  else {
    puVar1 = (ulong *)0x112d36e60;
    plVar4 = (long *)&UNK_10d901170;
  }
  if (*puVar1 == 0 || (*puVar1 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar4 + (long)(int)*plVar4);
    func_0x000107c61518(puVar2,*plVar4 >> 0x20,0,0);
    *puVar1 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103b8f8e4; end: 103b8fa33;  */

void FUN_103b8f8e4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f9bc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000101bb6f30(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8f984);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101bb6dc0();
    lVar6 = *unaff_x20;
    goto joined_r0x000103b8f9d0;
  }
  lVar6 = *unaff_x20;
joined_r0x000103b8f9d0:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8fa34);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103b8fa34; end: 103b8facb;  */

code * FUN_103b8fa34(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0xb122);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_103b8fd74();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_103b8fb08(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_103b8facc;
}



/* Entry: 103b8facc; end: 103b8fb07;  */

void FUN_103b8facc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 103b8fb08; end: 103b8fc43;  */

undefined1  [16] FUN_103b8fb08(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0xb8bf);
  }
  *param_1 = (long)puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8fc00);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    func_0x000101e3d9a0(lVar1,param_4 & 1);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b8fbe0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101e48ca0();
    puVar3[4] = lVar4;
    goto joined_r0x000103b8fc14;
  }
  puVar3[4] = lVar4;
joined_r0x000103b8fc14:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_103b8fc44;
  return auVar10;
}



/* Entry: 103b8fc44; end: 103b8fd73;  */

void FUN_103b8fc44(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  lVar9 = *param_1;
  bVar3 = *(byte *)(param_1 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) goto LAB_103b8fcd4;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_103b8fcc8;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103b8fd74);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_103b8fcd4:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        func_0x000101e49190(lVar6,lVar7);
      }
      goto LAB_103b8fd48;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_103b8fcc8:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_103b8fd48;
    }
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103b8fcb8);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_103b8fd48:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 103b8fd74; end: 103b8fd97;  */

undefined1  [16] FUN_103b8fd74(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x103b8fd8c;
  return auVar1;
}



/* Entry: 103b8fd98; end: 103b8febf;  */

ulong FUN_103b8fd98(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8fec0);
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
  FUN_103b8fec0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8febc);
      (*pcVar1)();
    }
    FUN_103b8ff40(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103b8fec0; end: 103b8ff3f;  */

undefined * FUN_103b8fec0(undefined *param_1,undefined *param_2)

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
    FUN_103b8f88c();
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



/* Entry: 103b8ff40; end: 103b9002f;  */

long FUN_103b8ff40(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9002c);
      (*pcVar2)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b90030);
        (*pcVar2)();
      }
      lVar3 = param_1;
      func_0x000103b90f04();
      lVar4 = param_1;
      do {
        lVar5 = lVar4 + 1;
        func_0x000107c60318(lVar4,param_4,lVar3);
        lVar4 = lVar5;
      } while (param_2 != lVar5);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      func_0x000103b90f04();
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,lVar5);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b90028);
    (*pcVar2)();
  }
  uVar1 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar1);
  return param_1;
}



/* Entry: 103b90030; end: 103b90557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_103b90030(undefined *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar6 = 0;
  func_0x000107c5eec8();
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puStack_a8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e3a4();
  func_0x000107c61180();
  puVar7 = (undefined *)0x0;
  func_0x000103b911ec(0,0x112ff1df0,&PTR_PTR_1126da5a8);
  puVar8 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar17 = *(undefined **)((undefined *)((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  }
  else {
    puVar17 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if (((ulong)puVar8 & 0x8000000000000000) != 0) {
      puVar17 = puVar8;
    }
    func_0x000107c60480();
    puVar9 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  }
  PTR__OBJC_CLASS___NSCountedSet_1126ba498 = puVar9;
  if ((long)puVar17 < 1) goto LAB_103b90520;
  func_0x000107c610f8();
  func_0x000107c45cd4();
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar18 = *(undefined **)((undefined *)((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    if (puVar18 == (undefined *)0x0) goto LAB_103b90498;
LAB_103b90124:
    uVar19 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_b8 = (ulong)puVar8 & 0xc000000000000001;
    puStack_b0 = (undefined *)0x0;
    uStack_d8 = (ulong)puVar8 & 0xffffffffffffff8;
    uStack_d0 = 0;
    puStack_c8 = puVar18;
    puStack_c0 = puVar8;
    do {
      if (uStack_b8 == 0) {
        if (*(ulong *)(uStack_d8 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90504);
          (*pcVar5)();
        }
        uVar10 = *(ulong *)(puStack_c0 + uVar19 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar19;
        puVar7 = puStack_c0;
        FUN_103b8f6d0(uVar19,puStack_c0,&PTR_PTR_1126da5a8,0x112ff1df0);
      }
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103b904f8);
        (*pcVar5)();
      }
      puStack_80 = (undefined *)(uVar19 + 1);
      uVar11 = uVar10;
      func_0x000107c52060();
      func_0x000107c61180();
      puVar4 = puStack_a8;
      func_0x000107c5eeb8(puStack_a8);
      func_0x000107c61170();
      func_0x000107c5eeac();
      puVar18 = puVar7;
      func_0x000107c5fb1c();
      func_0x000107c6142c(puVar7);
      (**(code **)(lStack_a0 + 8))(puVar4,lStack_98);
      uVar16 = uVar11;
      func_0x000107c5fadc(uVar11,puVar18);
      func_0x000107c3d798(puVar9);
      func_0x000107c61170(uVar16);
      uStack_88 = uVar10;
      func_0x000107c43cac();
      puVar7 = PTR___ss5Int64VN_11034ee50;
      puVar14 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      puStack_68 = (undefined *)uVar10;
      func_0x000107c6057c();
      puVar8 = puVar17;
      func_0x000107c61558();
      uVar10 = uVar11;
      puVar15 = puVar18;
      puStack_68 = puVar17;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)puVar15 & 1;
      lVar6 = *(long *)(puVar17 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(puVar17 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103b904fc);
        (*pcVar5)();
      }
      if (*(long *)(puVar17 + 0x18) < lVar6) {
        func_0x0001001833c8(lVar6,puVar8);
        uVar10 = uVar11;
        puVar8 = puVar18;
        func_0x000100029284();
        if (((uint)puVar15 & 1) != ((uint)puVar8 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90558);
          (*pcVar5)();
        }
joined_r0x000103b90318:
        if (((ulong)puVar15 & 1) != 0) goto LAB_103b902f4;
LAB_103b9031c:
        puVar8 = puStack_68;
        *(ulong *)(puStack_68 + (uVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_68 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar10 * 0x10);
        *puVar1 = uVar11;
        puVar1[1] = (ulong)puVar18;
        puVar2 = (undefined8 *)(*(long *)(puStack_68 + 0x38) + uVar10 * 0x10);
        *puVar2 = puVar7;
        puVar2[1] = puVar14;
        if (SCARRY8(*(long *)(puStack_68 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90500);
          (*pcVar5)();
        }
        *(long *)(puStack_68 + 0x10) = *(long *)(puStack_68 + 0x10) + 1;
        func_0x000107c61434(puVar18);
      }
      else {
        if (((ulong)puVar8 & 1) == 0) {
          func_0x000100184498();
          goto joined_r0x000103b90318;
        }
        if (((ulong)puVar15 & 1) == 0) goto LAB_103b9031c;
LAB_103b902f4:
        puVar8 = puStack_68;
        puVar2 = (undefined8 *)(*(long *)(puStack_68 + 0x38) + uVar10 * 0x10);
        uVar12 = puVar2[1];
        *puVar2 = puVar7;
        puVar2[1] = puVar14;
        func_0x000107c6142c(uVar12);
      }
      uVar10 = uVar11;
      puVar7 = puVar18;
      func_0x000107c5fadc(uVar11);
      puVar17 = puVar9;
      func_0x000107c40810();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uStack_88);
      if ((long)puStack_90 < (long)puVar17) {
        func_0x000107c6142c(puStack_b0);
        uStack_d0 = uVar11;
        puStack_b0 = puVar18;
        puStack_90 = puVar17;
      }
      else {
        func_0x000107c6142c(puVar18);
      }
      uVar19 = uVar19 + 1;
      puVar17 = puVar8;
    } while (puStack_80 != puStack_c8);
    func_0x000107c6142c(puStack_c0);
    puVar7 = puStack_b0;
    if (puStack_b0 == (undefined *)0x0) {
      func_0x000107c61170(puVar9);
      goto LAB_103b90520;
    }
    if (*(long *)(puVar8 + 0x10) != 0) {
      func_0x000107c61434(puStack_b0);
      func_0x000107c6157c(puVar8);
      uVar19 = uStack_d0;
      uVar10 = uStack_d0;
      puVar17 = puVar7;
      func_0x000100029284();
      if (((ulong)puVar17 & 1) != 0) {
        puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar10 * 0x10);
        uVar12 = *puVar2;
        uVar3 = puVar2[1];
        func_0x000107c61434(uVar3);
        puVar17 = puVar8;
        func_0x000107c61574();
        FUN_103b90ee4();
        puVar18 = puVar17;
        func_0x000107c610f8();
        puVar1 = (ulong *)(puVar18 + _DAT_112ff1d50);
        *puVar1 = uVar19;
        puVar1[1] = (ulong)puVar7;
        puVar2 = (undefined8 *)(puVar18 + _DAT_112ff1d58);
        *puVar2 = uVar12;
        puVar2[1] = uVar3;
        ppuVar13 = &puStack_78;
        puStack_78 = puVar18;
        puStack_70 = puVar17;
        func_0x000107c61154(ppuVar13,PTR_s_init_1125d9248);
        func_0x000107c61574(puVar8);
        func_0x000107c6142c(puVar7);
        func_0x000107c61170(puVar9);
        return ppuVar13;
      }
      func_0x000107c61170(puVar9);
      func_0x000107c61430(puVar7,2);
      func_0x000107c61574(puVar8);
      goto LAB_103b90520;
    }
    func_0x000107c61170(puVar9);
  }
  else {
    puVar18 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if (((ulong)puVar8 & 0x8000000000000000) != 0) {
      puVar18 = puVar8;
    }
    func_0x000107c60480();
    if (puVar18 != (undefined *)0x0) goto LAB_103b90124;
LAB_103b90498:
    func_0x000107c61170(puVar9);
    puVar7 = puVar8;
    puVar8 = puVar17;
  }
  func_0x000107c6142c(puVar7);
LAB_103b90520:
  func_0x000107c6142c(puVar8);
  return (undefined **)0x0;
}



/* Entry: 103b90558; end: 103b9064f;  */

undefined * FUN_103b90558(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b9064c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b90650);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 103b90650; end: 103b90eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b90650(undefined *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long extraout_x8;
  undefined8 uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *apuStack_88 [4];
  ulong *puStack_68;
  
  puVar6 = (ulong *)0x0;
  func_0x000107c5eec8();
  puStack_c8 = (ulong *)puVar6[-1];
  puStack_c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(puStack_c8[8]);
  lStack_d0 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e3a4();
  func_0x000107c61180();
  puVar7 = (undefined *)0x0;
  func_0x000103b911ec(0,0x112ff1df0,&PTR_PTR_1126da5a8);
  puVar12 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar20 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar20 = puVar12;
    }
    func_0x000107c60480();
    puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar6;
  if (puVar20 == (undefined *)0x0) {
    func_0x000107c6142c(puVar12);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar22 = puVar6;
    func_0x0001001830b8();
    puVar8 = puVar6;
    puStack_a0 = puVar22;
    func_0x000101690820();
    puVar22 = (ulong *)0x0;
    uStack_d8 = (ulong)puVar12 & 0xc000000000000001;
    uStack_f0 = (ulong)puVar12 & 0xffffffffffffff8;
    puStack_e8 = puVar20;
    puStack_e0 = puVar12;
    puStack_68 = puVar8;
    do {
      if (uStack_d8 == 0) {
        if (*(ulong **)(uStack_f0 + 0x10) <= puVar22) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e58);
          (*pcVar5)();
        }
        puVar8 = *(ulong **)(puVar12 + (long)puVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar22;
        FUN_103b8f6d0(puVar22,puVar12,&PTR_PTR_1126da5a8,0x112ff1df0);
        puVar7 = puVar12;
      }
      if (SCARRY8((long)puVar22,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e44);
        (*pcVar5)();
      }
      puVar9 = puVar8;
      func_0x000107c52060();
      func_0x000107c61180();
      lVar1 = lStack_d0;
      func_0x000107c5eeb8(lStack_d0);
      func_0x000107c61170();
      func_0x000107c5eeac();
      puVar20 = puVar7;
      func_0x000107c5fb1c();
      func_0x000107c6142c(puVar7);
      (*(code *)puStack_c8[1])(lVar1,puStack_c0);
      puVar17 = puStack_68;
      puStack_b0 = (undefined *)((long)puVar22 + 1);
      puStack_a8 = puVar22;
      if (puStack_68[2] == 0) {
LAB_103b9084c:
        func_0x000107c61434(puVar20);
        puVar22 = puVar6;
        func_0x000107c61558();
        puVar17 = puVar6;
        if (((ulong)puVar22 & 1) == 0) {
          puVar17 = (ulong *)0x0;
          func_0x0001000d182c(0,puVar6[2] + 1,1,puVar6);
        }
        uVar18 = puVar17[2];
        puVar6 = puVar17;
        if (puVar17[3] >> 1 <= uVar18) {
          puVar6 = (ulong *)(ulong)(1 < puVar17[3]);
          func_0x0001000d182c(puVar6,uVar18 + 1,1,puVar17);
        }
        puVar17 = puStack_68;
        puVar6[2] = uVar18 + 1;
        puVar6[uVar18 * 2 + 4] = (ulong)puVar9;
        puVar6[uVar18 * 2 + 5] = (ulong)puVar20;
        puVar10 = puStack_68;
        func_0x000107c61558();
        apuStack_88[0] = puVar17;
        puVar22 = puVar9;
        puVar7 = puVar20;
        func_0x000100029284();
        uVar18 = (ulong)~(uint)puVar7 & 1;
        lVar1 = puVar17[2] + uVar18;
        if (SCARRY8(puVar17[2],uVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e4c);
          (*pcVar5)();
        }
        if ((long)puVar17[3] < lVar1) {
          func_0x000101e3d9a0(lVar1,puVar10);
          puVar22 = puVar9;
          puVar12 = puVar20;
          func_0x000100029284();
          puVar17 = apuStack_88[0];
          if (((uint)puVar7 & 1) != ((uint)puVar12 & 1)) goto LAB_103b90ea8;
        }
        else {
          puVar17 = apuStack_88[0];
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000101e48ca0();
            puVar17 = apuStack_88[0];
          }
        }
        apuStack_88[0] = puVar17;
        if (((ulong)puVar7 & 1) == 0) {
          puVar17[((ulong)puVar22 >> 6) + 8] =
               puVar17[((ulong)puVar22 >> 6) + 8] | 1L << ((ulong)puVar22 & 0x3f);
          puVar10 = (ulong *)(puVar17[6] + (long)puVar22 * 0x10);
          *puVar10 = (ulong)puVar9;
          puVar10[1] = (ulong)puVar20;
          *(undefined **)(puVar17[7] + (long)puVar22 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (SCARRY8(puVar17[2],1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e5c);
            (*pcVar5)();
          }
          puVar17[2] = puVar17[2] + 1;
          func_0x000107c61434(puVar20);
          puStack_68 = puVar17;
        }
        else {
          uVar16 = *(undefined8 *)(puVar17[7] + (long)puVar22 * 8);
          *(undefined **)(puVar17[7] + (long)puVar22 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c6142c(uVar16);
          puStack_68 = puVar17;
        }
      }
      else {
        func_0x000107c61434(puStack_68);
        puVar7 = puVar20;
        func_0x000100029284(puVar9);
        func_0x000107c6142c(puVar17);
        if (((ulong)puVar7 & 1) == 0) goto LAB_103b9084c;
      }
      puVar22 = puVar8;
      func_0x000107c43cac();
      puVar7 = PTR___ss5Int64VN_11034ee50;
      puVar12 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      apuStack_88[0] = puVar22;
      func_0x000107c6057c();
      puVar22 = puStack_a0;
      puVar17 = puStack_a0;
      func_0x000107c61558();
      apuStack_88[0] = puVar22;
      puVar10 = puVar9;
      puVar13 = puVar20;
      func_0x000100029284();
      uVar18 = (ulong)~(uint)puVar13 & 1;
      lVar1 = puVar22[2] + uVar18;
      if (SCARRY8(puVar22[2],uVar18)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e48);
        (*pcVar5)();
      }
      if ((long)puVar22[3] < lVar1) {
        func_0x0001001833c8(lVar1,puVar17);
        puVar10 = puVar9;
        puVar14 = puVar20;
        func_0x000100029284();
        if (((uint)puVar13 & 1) != ((uint)puVar14 & 1)) {
LAB_103b90ea8:
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90eb8);
          (*pcVar5)();
        }
      }
      else if (((ulong)puVar17 & 1) == 0) {
        func_0x000100184498();
      }
      puStack_a0 = apuStack_88[0];
      if (((ulong)puVar13 & 1) == 0) {
        apuStack_88[0][((ulong)puVar10 >> 6) + 8] =
             apuStack_88[0][((ulong)puVar10 >> 6) + 8] | 1L << ((ulong)puVar10 & 0x3f);
        puVar22 = (ulong *)(apuStack_88[0][6] + (long)puVar10 * 0x10);
        *puVar22 = (ulong)puVar9;
        puVar22[1] = (ulong)puVar20;
        puVar2 = (undefined8 *)(apuStack_88[0][7] + (long)puVar10 * 0x10);
        *puVar2 = puVar7;
        puVar2[1] = puVar12;
        if (SCARRY8(apuStack_88[0][2],1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e54);
          (*pcVar5)();
        }
        apuStack_88[0][2] = apuStack_88[0][2] + 1;
        func_0x000107c61434(puVar20);
      }
      else {
        puVar2 = (undefined8 *)(apuStack_88[0][7] + (long)puVar10 * 0x10);
        uVar16 = puVar2[1];
        *puVar2 = puVar7;
        puVar2[1] = puVar12;
        func_0x000107c6142c(uVar16);
      }
      ppuVar11 = apuStack_88;
      FUN_103b8eee4(ppuVar11,puVar9,puVar20);
      if (*puVar9 == 0) {
        puVar7 = (undefined *)0x0;
        (*(code *)ppuVar11)(apuStack_88);
        func_0x000107c6142c(puVar20);
        puVar12 = puStack_e0;
      }
      else {
        puVar22 = puVar8;
        puVar10 = puVar9;
        func_0x000107c5d984();
        func_0x000107c61180();
        puVar17 = puVar22;
        func_0x000107c5faec();
        uVar21 = *puVar9;
        uVar18 = uVar21;
        func_0x000107c61558();
        *puVar9 = uVar21;
        uVar19 = uVar21;
        puStack_b8 = puVar6;
        if ((uVar18 & 1) == 0) {
          uVar19 = 0;
          func_0x0001000d182c(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
          *puVar9 = uVar19;
        }
        uVar18 = *(ulong *)(uVar19 + 0x10);
        uVar21 = uVar19;
        if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar18) {
          uVar21 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
          func_0x0001000d182c(uVar21,uVar18 + 1,1,uVar19);
          *puVar9 = uVar21;
        }
        puVar12 = puStack_e0;
        *(ulong *)(uVar21 + 0x10) = uVar18 + 1;
        lVar1 = uVar21 + uVar18 * 0x10;
        *(ulong **)(lVar1 + 0x20) = puVar17;
        *(ulong **)(lVar1 + 0x28) = puVar10;
        puVar7 = (undefined *)0x0;
        (*(code *)ppuVar11)(apuStack_88);
        func_0x000107c6142c(puVar20);
        func_0x000107c61170(puVar22);
        puVar6 = puStack_b8;
      }
      func_0x000107c61170(puVar8);
      puVar22 = (ulong *)((long)puStack_a8 + 1);
    } while (puStack_b0 != puStack_e8);
    func_0x000107c6142c(puVar12);
    puVar22 = (ulong *)puVar6[2];
    puVar8 = puStack_a0;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar22 != (ulong *)0x0) {
      puVar17 = (ulong *)0x0;
      puStack_c0 = puVar6 + 5;
      puStack_c8 = (ulong *)((long)puVar22 + -1);
      puStack_a8 = puVar22;
LAB_103b90c14:
      puVar4 = puStack_68;
      puVar10 = puStack_c0 + (long)puVar17 * 2;
      puVar8 = puStack_a0;
      puVar9 = puVar17;
      puStack_b0 = puVar7;
      do {
        if ((ulong *)puVar6[2] <= puVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b90e50);
          (*pcVar5)();
        }
        if (puVar8[2] != 0) {
          uVar18 = puVar10[-1];
          uVar19 = *puVar10;
          func_0x000107c61434(uVar19);
          func_0x000107c6157c(puVar8);
          uVar21 = uVar18;
          uVar15 = uVar19;
          func_0x000100029284();
          if ((uVar15 & 1) == 0) {
            func_0x000107c61574(puVar8);
            func_0x000107c6142c(uVar19);
          }
          else {
            puVar2 = (undefined8 *)(puVar8[7] + uVar21 * 0x10);
            uVar16 = *puVar2;
            uVar3 = puVar2[1];
            func_0x000107c61434(uVar3);
            func_0x000107c61574();
            puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar4[2] != 0) {
              func_0x000107c61434(puVar4);
              uVar21 = uVar18;
              uVar15 = uVar19;
              func_0x000100029284();
              puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((uVar15 & 1) != 0) {
                puVar7 = *(undefined **)(puVar4[7] + uVar21 * 8);
                func_0x000107c61434(puVar7);
              }
              puVar8 = puVar4;
              func_0x000107c6142c();
            }
            func_0x000103b90f04();
            puVar17 = puVar8;
            func_0x000107c610f8();
            puVar22 = (ulong *)((long)puVar17 + _DAT_112ff1d60);
            *puVar22 = uVar18;
            puVar22[1] = uVar19;
            puVar2 = (undefined8 *)((long)puVar17 + _DAT_112ff1d68);
            *puVar2 = uVar16;
            puVar2[1] = uVar3;
            *(undefined **)((long)puVar17 + _DAT_112ff1d70) = puVar7;
            ppuVar11 = &puStack_98;
            puStack_98 = puVar17;
            puStack_90 = puVar8;
            func_0x000107c61154(ppuVar11,PTR_s_init_1125d9248);
            puVar22 = puStack_a8;
            puVar12 = puStack_b0;
            puVar8 = puStack_a0;
            if (ppuVar11 != (ulong **)0x0) goto code_r0x000103b90d48;
          }
        }
        puVar9 = (ulong *)((long)puVar9 + 1);
        puVar10 = puVar10 + 2;
        puVar7 = puStack_b0;
        if (puVar22 == puVar9) break;
      } while( true );
    }
LAB_103b90e1c:
    func_0x000107c6142c(puVar6);
    puVar6 = puStack_68;
    func_0x000107c61574(puVar8);
    func_0x000107c6142c(puVar6);
  }
  return puVar7;
code_r0x000103b90d48:
  puVar7 = puStack_b0;
  func_0x000107c61550();
  if ((((int)puVar7 == 0) || ((long)puVar12 < 0)) ||
     (puVar7 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar12 >> 0x3e == 0) {
      puVar20 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        puVar20 = puVar12;
      }
      func_0x000107c60480(puVar20);
    }
    puVar7 = (undefined *)0x0;
    FUN_103b8fd98(0,puVar20 + 1,1,puVar12);
  }
  uVar19 = (ulong)puVar7 & 0xffffffffffffff8;
  uVar18 = *(ulong *)(uVar19 + 0x10);
  if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar18) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
    FUN_103b8fd98(puVar12,uVar18 + 1,1,puVar7);
    uVar19 = (ulong)puVar12 & 0xffffffffffffff8;
    puVar7 = puVar12;
  }
  puVar17 = (ulong *)((long)puVar9 + 1);
  *(ulong *)(uVar19 + 0x10) = uVar18 + 1;
  *(ulong ***)(uVar19 + uVar18 * 8 + 0x20) = ppuVar11;
  puVar8 = puStack_a0;
  if (puStack_c8 == puVar9) goto LAB_103b90e1c;
  goto LAB_103b90c14;
}



/* Entry: 103b90eb8; end: 103b90ee3;  */

void FUN_103b90eb8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103b90ee4; end: 103b90f43;  */

void FUN_103b90ee4(void)

{
  func_0x000107c61168(&PTR_PTR_112938d68);
  return;
}



/* Entry: 103b90f44; end: 103b9111b;  */

/* WARNING: Possible PIC construction at 0x000103b90fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b9106c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b90fd0) */
/* WARNING: Removing unreachable block (ram,0x000103b91070) */

void FUN_103b90f44(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = &UNK_1106dcd58;
  func_0x000107c613fc(&UNK_1106dcd58,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x000107c60bc4(param_4);
  if (lVar4 == 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103b90558(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e07210,&UNK_10dc5cbd0);
    uVar3 = 0;
    func_0x000103b911ec(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    param_1 = puVar2;
    func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c6142c(puVar2);
  }
  else {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    func_0x000107c4b264(param_2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b9111c; end: 103b91123;  */

void FUN_103b9111c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000103b911ec(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b91124; end: 103b911cb;  */

void FUN_103b91124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_1);
  uVar2 = *puVar4;
  func_0x000107c61558(uVar2);
  uVar3 = *puVar4;
  *puVar4 = 0x8000000000000000;
  FUN_103b8f8e4(param_1,uVar1,param_2,uVar2);
  func_0x000107c6142c(param_2);
  *puVar4 = uVar3;
  return;
}



/* Entry: 103b911cc; end: 103b9122b;  */

void FUN_103b911cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103b9122c; end: 103b91247;  */

void FUN_103b9122c(long param_1,long param_2)

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



/* Entry: 103b91248; end: 103b915bb;  */

long FUN_103b91248(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b915bc; end: 103b915cb; -[_TtC42SCSpotlightRepliesViewCountManagerServices42SCSpotlightRepliesViewCountManagerServices repliesViewCountManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b915bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff1e00));
  return;
}



/* Entry: 103b915cc; end: 103b91617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b915cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1e00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b91618; end: 103b91677; -[_TtC42SCSpotlightRepliesViewCountManagerServices42SCSpotlightRepliesViewCountManagerServices init] */

void FUN_103b91618(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightRepliesViewCountManagerServices.SCSpotlightRepliesViewCountManagerServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b91644);
  (*pcVar1)();
}



/* Entry: 103b91678; end: 103b9169b; -[_TtC42SCSpotlightRepliesViewCountManagerServices42SCSpotlightRepliesViewCountManagerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff1e00));
  return;
}



/* Entry: 103b9169c; end: 103b91773;  */

void FUN_103b9169c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c606a0(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b91774; end: 103b9177f;  */

void FUN_103b91774(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b91780; end: 103b9178f; -[SCSpotlightRepliesCount repliesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103b91780(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112ff1e30);
}



/* Entry: 103b91790; end: 103b917eb; -[SCSpotlightRepliesCount snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91790(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1e38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1e38);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b917ec; end: 103b917fb; -[SCSpotlightRepliesCount viewCountType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b917ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff1e40);
}



/* Entry: 103b917fc; end: 103b9187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b917fc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112ff1e30) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e38);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1e40) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b91880; end: 103b9191b; -[SCSpotlightRepliesCount initWithRepliesCount:snapId:viewCountType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91880(long param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined4 *)(param_1 + _DAT_112ff1e30) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112ff1e38);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff1e40) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}


