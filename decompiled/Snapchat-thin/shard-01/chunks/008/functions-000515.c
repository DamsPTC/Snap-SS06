/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10148e568; end: 10148e5df;  */

void FUN_10148e568(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10148f2ac(0,param_1,param_2);
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



/* Entry: 10148e5e0; end: 10148e79b;  */

void FUN_10148e5e0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x00010148e6cc(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10148ec64(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10148e6c8);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10148e6cc);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10148e6c4);
  (*pcVar1)();
}



/* Entry: 10148e79c; end: 10148e8fb;  */

ulong FUN_10148e79c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10148e8fc);
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
  FUN_10148e8fc(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10148e8f8);
      (*pcVar1)();
    }
    FUN_10148e98c(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 10148e8fc; end: 10148e98b;  */

undefined *
FUN_10148e8fc(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_10148e568(param_3,param_4,param_5,param_6);
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



/* Entry: 10148e98c; end: 10148eaa7;  */

long FUN_10148e98c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10148eaa4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10148eaa8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10148f2ac(0,param_5,param_6);
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
      FUN_10148f2ac(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10148eaa0);
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



/* Entry: 10148eaa8; end: 10148ec63;  */

ulong FUN_10148eaa8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10148eb8c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10148eb90);
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
  FUN_10148f2ac(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10148ec64);
  (*pcVar2)();
}



/* Entry: 10148ec64; end: 10148ede3;  */

ulong FUN_10148ec64(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10148ede4);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10148edd8);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10148f2ac(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10148eddc);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10148ede0);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_10148eaa8(uVar7,param_3,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10148ede4; end: 10148f2ab;  */

/* WARNING: Possible PIC construction at 0x00010148eec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010148eff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010148f1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010148f22c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148f1d8) */
/* WARNING: Removing unreachable block (ram,0x00010148eff8) */
/* WARNING: Removing unreachable block (ram,0x00010148f26c) */
/* WARNING: Removing unreachable block (ram,0x00010148f274) */
/* WARNING: Removing unreachable block (ram,0x00010148f000) */
/* WARNING: Removing unreachable block (ram,0x00010148f00c) */
/* WARNING: Removing unreachable block (ram,0x00010148f030) */
/* WARNING: Removing unreachable block (ram,0x00010148f054) */
/* WARNING: Removing unreachable block (ram,0x00010148f2a8) */
/* WARNING: Removing unreachable block (ram,0x00010148f060) */
/* WARNING: Removing unreachable block (ram,0x00010148f034) */
/* WARNING: Removing unreachable block (ram,0x00010148f068) */
/* WARNING: Removing unreachable block (ram,0x00010148f268) */
/* WARNING: Removing unreachable block (ram,0x00010148f074) */
/* WARNING: Removing unreachable block (ram,0x00010148f088) */
/* WARNING: Removing unreachable block (ram,0x00010148f0cc) */
/* WARNING: Removing unreachable block (ram,0x00010148f14c) */
/* WARNING: Removing unreachable block (ram,0x00010148f134) */
/* WARNING: Removing unreachable block (ram,0x00010148f154) */
/* WARNING: Removing unreachable block (ram,0x00010148f204) */
/* WARNING: Removing unreachable block (ram,0x00010148f164) */
/* WARNING: Removing unreachable block (ram,0x00010148f1a0) */
/* WARNING: Removing unreachable block (ram,0x00010148f210) */
/* WARNING: Removing unreachable block (ram,0x00010148f218) */
/* WARNING: Removing unreachable block (ram,0x00010148f1b4) */
/* WARNING: Removing unreachable block (ram,0x00010148f09c) */
/* WARNING: Removing unreachable block (ram,0x00010148f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010148f020) */
/* WARNING: Removing unreachable block (ram,0x00010148f284) */
/* WARNING: Removing unreachable block (ram,0x00010148eecc) */
/* WARNING: Removing unreachable block (ram,0x00010148efd0) */
/* WARNING: Removing unreachable block (ram,0x00010148efd8) */
/* WARNING: Removing unreachable block (ram,0x00010148eee0) */
/* WARNING: Removing unreachable block (ram,0x00010148efe8) */
/* WARNING: Removing unreachable block (ram,0x00010148eeec) */
/* WARNING: Removing unreachable block (ram,0x00010148ef00) */
/* WARNING: Removing unreachable block (ram,0x00010148ef94) */
/* WARNING: Removing unreachable block (ram,0x00010148ef04) */
/* WARNING: Removing unreachable block (ram,0x00010148efcc) */
/* WARNING: Removing unreachable block (ram,0x00010148ef10) */
/* WARNING: Removing unreachable block (ram,0x00010148efb8) */
/* WARNING: Removing unreachable block (ram,0x00010148ef24) */
/* WARNING: Removing unreachable block (ram,0x00010148ef90) */
/* WARNING: Removing unreachable block (ram,0x00010148efbc) */
/* WARNING: Removing unreachable block (ram,0x00010148eff0) */
/* WARNING: Removing unreachable block (ram,0x00010148f230) */

void FUN_10148ede4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef84bc0);
  lVar2 = lVar1;
  func_0x000107c60af0();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40210();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    uVar5 = 0;
    FUN_10148f2ac(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar6 = uVar5;
    FUN_100deaee4();
    puVar3 = puVar4;
    func_0x000107c5fe10(puVar4,uVar5,uVar6);
    func_0x000107c61170(puVar4);
    FUN_10148e264(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
    return;
  }
  return;
}



/* Entry: 10148f2ac; end: 10148f327;  */

void FUN_10148f2ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10148f328; end: 10148f367;  */

undefined8 FUN_10148f328(void)

{
  if (lRam0000000113444420 != -1) {
    func_0x000107c61568(0x113444420,0x10148f2ec);
  }
  return 0x1137ff4d0;
}



/* Entry: 10148f368; end: 10148f387;  */

void FUN_10148f368(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10148f388; end: 10148f57f;  */

void FUN_10148f388(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) != 0) {
    (**(code **)(lVar7 + 0x10))
              (lVar4,puVar2 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
    (**(code **)(lVar7 + 0x20))(lVar4 - extraout_x12_00,lVar4,lVar1);
    func_0x000107c5ed98(puVar6,0xd000000000000015,0x800000010d947110,1);
    func_0x000107c5ed98(param_1,0x736e6f6973736573,0xe800000000000000,1);
    pcVar5 = *(code **)(lVar7 + 8);
    (*pcVar5)(puVar6,lVar1);
    (*pcVar5)(lVar4 - extraout_x12_00,lVar1);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar1);
    return;
  }
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010148f57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 10148f580; end: 10148f593;  */

void FUN_10148f580(undefined8 param_1)

{
  if (lRam0000000113444458 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63bec8);
  return;
}



/* Entry: 10148f594; end: 10148f9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148f594(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  char *pcStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar12 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar5 = 0;
  lStack_98 = lVar12;
  func_0x000107c5ffd8();
  lStack_78 = *(long *)(lVar5 + -8);
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5ffc4();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 5;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x78;
  uVar7 = 0;
  func_0x00010006a340();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  uStack_d0 = uVar7;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  uVar8 = 0;
  FUN_1014a2e0c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  pcStack_80 = "tweakViewControllerPressedDone:";
  func_0x000107c5f81c(lVar15);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4ac68;
  FUN_101490b04(0x112d4ac68,puVar2,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar9 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar10 = 0x112d4ac78;
  func_0x0001014a2e4c(0x112d4ac78,0x112d4ac70,&UNK_10d911480,PTR___sSayxGSTsMc_11034dd08);
  uStack_b8 = uVar10;
  uStack_b0 = uVar9;
  uStack_a0 = uVar7;
  lStack_90 = lVar5;
  func_0x000107c60264(lVar14,&puStack_68,uVar9,uVar10,lVar5,uVar7);
  lVar6 = lStack_a8;
  uStack_bc = *(undefined4 *)
               PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
  ;
  pcStack_c8 = *(code **)(lStack_78 + 0x68);
  (*pcStack_c8)(lVar12,uStack_bc,lStack_70);
  uVar11 = (ulong)pcStack_80 | 0x8000000000000000;
  uVar7 = 0xd000000000000027;
  lStack_88 = lVar14;
  pcStack_80 = (char *)lVar12;
  lStack_78 = uVar8;
  func_0x000107c5ffec(0xd000000000000027,uVar11,lVar15,lVar14,lVar12,0);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar7;
  uVar7 = uStack_d0;
  func_0x000107c613fc(uStack_d0,0x18,7);
  func_0x00010006a360();
  lVar12 = lStack_98;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x70) = 0x404e000000000000;
  lVar5 = _DAT_113444440;
  FUN_10148f388(lStack_98);
  func_0x0001014a3250(lVar12,lVar6,0x112d36580,&UNK_10d9016d0);
  lVar14 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar14 + -8);
  lVar12 = lVar6;
  (**(code **)(lVar13 + 0x30))(lVar6,1,lVar14);
  bVar4 = (int)lVar12 == 1;
  if (!bVar4) {
    (**(code **)(lVar13 + 0x20))(unaff_x20 + lVar5,lVar6,lVar14);
  }
  lVar6 = 0;
  FUN_10148f580();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(unaff_x20 + lVar5,bVar4,1,lVar6);
  *(undefined8 *)(unaff_x20 + _DAT_113444428) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113444430);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar5 = _DAT_113444438;
  func_0x000107c5f81c(lVar15);
  lVar6 = lStack_88;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c60264(lStack_88,&puStack_68,uStack_b0,uStack_b8,lStack_90,uStack_a0);
  pcVar3 = pcStack_80;
  (*pcStack_c8)(pcStack_80,uStack_bc,lStack_70);
  uVar7 = 0xd00000000000002a;
  func_0x000107c5ffec(0xd00000000000002a,0x800000010ef84c30,lVar15,lVar6,pcVar3,0);
  *(undefined8 *)(unaff_x20 + lVar5) = uVar7;
  return;
}



/* Entry: 10148f9bc; end: 10148fa1f;  */

void FUN_10148f9bc(void)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x40),FUN_10148fd30,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10148fa20; end: 10148fd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148fa20(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [8];
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  byte bStack_51;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112da28c8;
  func_0x0001000285a8(0x112da28c8,&UNK_10d9470b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)puVar7 - extraout_x8_00;
  func_0x000107c61428(param_1 + 0x10,auStack_78,1,0);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000106ae7e10(FUN_10148fd58);
  func_0x0001052fb090(param_2);
  FUN_1014a2c3c(param_1 + _DAT_113444440,uVar8,0x112da28c8,&UNK_10d9470b8);
  lVar4 = 0;
  FUN_10148f580();
  uVar5 = 1;
  uVar11 = uVar8;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(uVar8,1,lVar4);
  if ((int)uVar11 == 1) {
    func_0x0001014a3298(uVar8,0x112da28c8,&UNK_10d9470b8);
    uVar11 = 0;
LAB_10148fc00:
    uVar8 = 0;
    func_0x0001052fa250();
    uVar10 = 0;
joined_r0x00010148fbf4:
    if ((uVar8 & 1) == 0) goto LAB_10148fcb4;
  }
  else {
    func_0x000107c5eec4(puVar7);
    func_0x000107c5eeac();
    (**(code **)(lVar9 + 8))(puVar7,lVar3);
    uVar10 = uVar5;
    FUN_10148fd5c();
    func_0x000107c6142c(uVar5);
    func_0x0001014a3214(uVar8,FUN_10148f580);
    if (uVar10 == 0) goto LAB_10148fc00;
    if ((uVar10 >> 0x3c & 1) == 0) {
      if ((uVar10 >> 0x3d & 1) != 0) {
        uStack_80 = uVar10 & 0xffffffffffffff;
        iVar2 = (int)&uStack_88;
        uStack_88 = uVar11;
        func_0x0001052fa250();
        if (iVar2 == 0) goto LAB_10148fcb4;
        goto LAB_10148fc10;
      }
      if ((uVar11 >> 0x3c & 1) == 0) goto LAB_10148fcf8;
      uVar8 = (uVar10 & 0xfffffffffffffff) + 0x20;
      func_0x0001052fa250();
      goto joined_r0x00010148fbf4;
    }
LAB_10148fcf8:
    func_0x000107c602f0(&bStack_51,FUN_10149008c,0,uVar11,uVar10,PTR___sSbN_11034dd40);
    if ((bStack_51 & 1) == 0) goto LAB_10148fcb4;
  }
LAB_10148fc10:
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x0001052faf68(param_3 & 1);
  func_0x0001052fafb8(param_4);
  func_0x0001052fb018(param_5);
  func_0x0001052fb070(param_6);
  if (uVar10 == 0) {
    return;
  }
  func_0x0001014a25ec();
  func_0x000107c613fc();
  func_0x000107c61434(uVar10);
  uVar8 = uVar11;
  FUN_101494490(uVar11,uVar10);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113444428);
  *(ulong *)(param_1 + _DAT_113444428) = uVar8;
  func_0x000107c61574(uVar6);
  puVar1 = (ulong *)(param_1 + _DAT_113444430);
  uVar8 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar8);
  FUN_1014900b8(uVar11,uVar10);
LAB_10148fcb4:
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 10148fd30; end: 10148fd57;  */

void FUN_10148fd30(void)

{
  long unaff_x20;
  
  FUN_10148fa20(*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x1c),*(undefined4 *)(unaff_x20 + 0x20),
                *(undefined4 *)(unaff_x20 + 0x24),*(undefined4 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10148fd58; end: 10148fd5b;  */

void FUN_10148fd58(void)

{
  uRam00000001136bb3c3 = 1;
  return;
}



/* Entry: 10148fd5c; end: 10149008b;  */

void FUN_10148fd5c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *extraout_x8_00;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long alStack_a0 [4];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar8 - extraout_x12;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar4 = 0x746e6572727563;
  lVar9 = -0x1900000000000000;
  func_0x000107c5ed98(lVar11,0x746e6572727563,0xe700000000000000,1);
  func_0x000107c5ed90();
  lStack_80 = 0;
  puVar5 = puVar3;
  func_0x000107c409e4();
  func_0x000107c61170(uVar4);
  if ((int)puVar5 != 0) {
    lVar6 = lStack_80;
    func_0x000107c61174(lStack_80);
    func_0x000107c5edc4();
    lVar10 = lVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar9);
    puVar5 = puVar3;
    func_0x000107c43418();
    func_0x000107c61170(lVar6);
    if ((int)puVar5 != 0) {
      lStack_80 = 0x2d676e69646e6570;
      uStack_78 = 0xe800000000000000;
      func_0x000107c5fb78(param_1,param_2);
      uVar4 = uStack_78;
      func_0x000107c5ed98(lVar8,lStack_80,uStack_78,1);
      func_0x000107c6142c(uVar4);
      func_0x000107c5ed90();
      uVar7 = uVar4;
      func_0x000107c5ed90();
      lStack_80 = 0;
      puVar5 = puVar3;
      func_0x000107c4d13c();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar7);
      lVar9 = lStack_80;
      if ((int)puVar5 == 0) {
        lVar6 = lStack_80;
        func_0x000107c61174(lStack_80);
        func_0x000107c5ed30(lVar9);
        func_0x000107c61170(lVar6);
        func_0x000107c61654();
        func_0x000107c614ac(lVar9);
      }
      else {
        func_0x000107c61174(lStack_80);
      }
      lVar10 = lVar2;
      (**(code **)(lVar12 + 8))(lVar8,lVar2);
      lVar6 = lVar8;
    }
    func_0x000107c5ed90();
    lStack_80 = 0;
    puVar5 = puVar3;
    func_0x000107c409e4();
    func_0x000107c61170(lVar6);
    if ((int)puVar5 != 0) {
      lVar9 = lStack_80;
      func_0x000107c61174();
      FUN_101493f54();
      func_0x000107c5edc4();
      func_0x000107c61170(puVar3);
      (**(code **)(lVar12 + 8))(lVar11,lVar2);
      lVar8 = lVar9;
      goto LAB_101490050;
    }
  }
  lVar8 = lStack_80;
  lVar9 = lStack_80;
  func_0x000107c61174(lStack_80);
  func_0x000107c5ed30();
  func_0x000107c61170(lVar9);
  func_0x000107c61654();
  func_0x000107c61170(puVar3);
  (**(code **)(lVar12 + 8))(lVar11,lVar2);
  func_0x000107c614ac(lVar8);
  lVar9 = 0;
  lVar10 = 0;
LAB_101490050:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(lVar9,lVar10);
  uVar1 = (undefined1)lVar9;
  *(long *)(lVar11 + -0x20) = lVar8;
  *(long *)(lVar11 + -0x18) = lVar2;
  *(undefined1 **)(lVar11 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar11 + -8) = FUN_10149008c;
  func_0x0001052fa250();
  *extraout_x8_00 = uVar1;
  return;
}



/* Entry: 10149008c; end: 1014900b7;  */

void FUN_10149008c(undefined1 *param_1,undefined1 param_2)

{
  func_0x0001052fa250();
  *param_1 = param_2;
  return;
}



/* Entry: 1014900b8; end: 10149066b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014900b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + _DAT_113444438);
  puVar4 = &UNK_1103c6e60;
  func_0x000107c613fc(&UNK_1103c6e60,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = FUN_1014a32d8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103c6e78;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61434(param_2);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_101490b04(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x0001014a2e4c(0x112d4af98,0x112d4af90,&UNK_10d914100,PTR___sSayxGSTsMc_11034dd08);
  func_0x000107c60264(puVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar2);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 10149066c; end: 1014906a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10149066c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_113444428) != 0) {
    **(undefined1 **)(*(long *)(unaff_x20 + _DAT_113444428) + 0x18) = 1;
  }
  return;
}



/* Entry: 1014906a8; end: 101490adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014906a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((undefined8 *)(unaff_x20 + _DAT_113444430))[1];
  if (lVar10 != 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_113444430);
    uStack_a8 = *(undefined8 *)(unaff_x20 + _DAT_113444438);
    puVar3 = &UNK_1103c69a8;
    lStack_a0 = lVar11;
    func_0x000107c613fc(&UNK_1103c69a8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar12;
    *(long *)(puVar3 + 0x18) = lVar10;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    pcStack_70 = FUN_101490adc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1103c69c0;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61434(lVar10);
    func_0x000107c61434(param_2);
    func_0x000107c5f808(lVar8);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar12 = 0x112d4af88;
    FUN_101490b04(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar5 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = 0x112d4af98;
    func_0x0001014a2e4c(0x112d4af98,0x112d4af90,&UNK_10d914100,PTR___sSayxGSTsMc_11034dd08);
    func_0x000107c60264(puVar7,&puStack_98,uVar5,uVar6,lVar1,uVar12);
    func_0x000107c5ffe8(0,lVar8,puVar7,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    (**(code **)(lStack_a0 + 8))(puVar7,lVar1);
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
    func_0x000107c61574(puStack_68);
  }
  return;
}



/* Entry: 101490adc; end: 101490b03;  */

/* WARNING: Removing unreachable block (ram,0x000101490a78) */

void FUN_101490adc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  alStack_80[0] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5fb10();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(uVar5,uVar7);
  uVar8 = 0x800000010ef84ca0;
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef84ca0);
  uVar7 = uVar5;
  func_0x000107c5c168(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar5 = uVar7;
  func_0x000107c5faec(uVar7);
  func_0x000107c61170(uVar7);
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  func_0x000107c5fb04(lVar12);
  FUN_100e8b654();
  uVar9 = 0;
  lVar3 = lVar12;
  func_0x000107c60214(lVar12,0,PTR___sSSN_11034da80,uVar7);
  (**(code **)(lVar10 + 8))(lVar12,lVar4);
  if (uVar9 >> 0x3c < 0xf) {
    func_0x000107c5ed80(lVar11,uVar5,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c5ee40(lVar11,1,lVar3,uVar9);
    (**(code **)(lVar13 + 8))(lVar11,alStack_80[0]);
    func_0x0001000b44c0(lVar3,uVar9);
  }
  else {
    func_0x000107c6142c(uVar8);
  }
  return;
}



/* Entry: 101490b04; end: 101490b43;  */

void FUN_101490b04(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101490b44; end: 101492933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101490b44(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_90 [8];
  long lStack_88;
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_70 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112da28c8;
  func_0x0001000285a8(0x112da28c8,&UNK_10d9470b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  FUN_1014a2c3c(unaff_x20 + _DAT_113444440,lVar7,0x112da28c8,&UNK_10d9470b8);
  lVar4 = 0;
  FUN_10148f580();
  lVar3 = lVar7;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar7,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x0001014a3298(lVar7,0x112da28c8,&UNK_10d9470b8);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101490d78();
    func_0x0001014a3214(lVar7,FUN_10148f580);
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
      func_0x000107c6142c(lVar3);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar4,0);
      lVar7 = lVar3 + ((ulong)*(byte *)(lStack_70 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lStack_70 + 0x50) ^ 0xffffffffffffffff));
      lStack_78 = *(long *)(lStack_70 + 0x48);
      pcStack_80 = *(code **)(lStack_70 + 0x10);
      lStack_88 = lVar3;
      do {
        puVar8 = puStack_68;
        puVar5 = puVar6;
        lVar3 = lVar7;
        (*pcStack_80)(puVar6,lVar7,lVar2);
        func_0x000107c5edc4();
        (**(code **)(lStack_70 + 8))(puVar6,lVar2);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puStack_68 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        puVar8 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puStack_68 + uVar1 * 0x10 + 0x20) = puVar5;
        *(long *)(puStack_68 + uVar1 * 0x10 + 0x28) = lVar3;
        lVar7 = lVar7 + lStack_78;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      func_0x000107c6142c(lStack_88);
    }
  }
  return puVar8;
}



/* Entry: 101492934; end: 101492a07;  */

void FUN_101492934(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    func_0x000107c61428(param_5 + 0x30,auStack_80,0,0);
    pcVar1 = *(code **)(param_5 + 0x30);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61574(param_5);
    }
    else {
      uVar2 = *(undefined8 *)(param_5 + 0x38);
      FUN_10148f368(pcVar1,uVar2);
      func_0x000107c61574(param_5);
      (*pcVar1)(param_3,param_4,param_1 & 1,param_2);
      func_0x00010148f378(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 101492a08; end: 101492a17;  */

void FUN_101492a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101492a18; end: 101492a77;  */

void FUN_101492a18(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101492a78; end: 101492fb3;  */

void FUN_101492a78(ulong *param_1,code *param_2,ulong param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_78;
  code *pcStack_70;
  
  uVar15 = *(undefined8 *)(param_4 + 0x10);
  pcVar3 = param_2;
  func_0x000107c6162c(uVar15);
  uVar13 = (uint)param_2;
  if ((param_3 & 1) == 0) {
    if ((*(char *)(param_4 + 0x18) == '\x01' && 7 < uVar13) && param_1 != (ulong *)0x0) {
      pcVar11 = *(code **)(param_4 + 0x20);
      puVar16 = param_1;
      func_0x000107c610a8();
      if (puVar16 == (ulong *)0x0) goto LAB_101492bb0;
      uVar17 = *param_1;
      if (lRam0000000113444468 != -1) {
        pcVar3 = FUN_10149304c;
        func_0x000107c61568(0x113444468,FUN_10149304c);
      }
      uVar17 = uRam0000000113444470 & uVar17;
      if ((uVar17 == 0) || (uVar6 = uVar17, FUN_101492fb4(), pcVar3 = pcVar11, (uVar6 & 1) == 0))
      goto LAB_101492bb0;
      uVar6 = uVar17;
      func_0x000107c614e8();
      func_0x000107c60b14();
      func_0x000107c61180();
      uVar9 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      func_0x000107c61574(uVar15);
    }
    else {
LAB_101492bb0:
      uStack_78 = 0x20636f6c6c614d;
      pcStack_70 = (code *)0xe700000000000000;
      FUN_1014a1d5c((ulong)param_2 & 0xffffffff);
      func_0x000107c5fb78();
      func_0x000107c6142c(pcVar3);
      func_0x000107c61574(uVar15);
      uVar17 = 0;
      pcVar11 = pcStack_70;
      uVar9 = uStack_78;
    }
    if (uVar13 < *(uint *)(param_4 + 0x48)) {
      lVar12 = 0x30;
      if (*(uint *)(param_4 + 0x38) <= uVar13) {
        lVar12 = 0x40;
      }
      uVar6 = *(ulong *)(param_4 + lVar12);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 1;
    }
    uVar7 = (ulong)param_2 & 0xffffffff;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    if (SUB168(auVar1 * auVar2,8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f8c);
      (*pcVar3)();
    }
    if (CARRY8(*(ulong *)(param_4 + 0x58),uVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f90);
      (*pcVar3)();
    }
    uVar18 = uVar7 * uVar6;
    *(ulong *)(param_4 + 0x58) = *(ulong *)(param_4 + 0x58) + uVar7;
    if (CARRY8(*(ulong *)(param_4 + 0x60),uVar18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f94);
      (*pcVar3)();
    }
    *(ulong *)(param_4 + 0x60) = *(ulong *)(param_4 + 0x60) + uVar18;
  }
  else {
    uStack_78 = 0x20676174203a4d56;
    pcStack_70 = (code *)0xe800000000000000;
    puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                        PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c61574(uVar15);
    uVar17 = 0;
    uVar18 = (ulong)param_2 & 0xffffffff;
    uVar6 = 1;
    pcVar11 = pcStack_70;
    uVar9 = uStack_78;
  }
  func_0x000107c61428(param_4 + 0x50,&uStack_78,0x20,0);
  lVar12 = *(long *)(param_4 + 0x50);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    uVar7 = uVar9;
    pcVar3 = pcVar11;
    func_0x000100029284();
    if (((ulong)pcVar3 & 1) != 0) {
      puVar16 = *(ulong **)(*(long *)(lVar12 + 0x38) + uVar7 * 8);
      func_0x000107c6157c(puVar16);
      func_0x000107c614a8(&uStack_78);
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(pcVar11);
      func_0x000107c6157c(puVar16);
      goto LAB_101492e1c;
    }
    func_0x000107c6142c(lVar12);
  }
  puVar16 = &uStack_78;
  func_0x000107c614a8();
  func_0x0001014a256c();
  func_0x000107c613fc();
  puVar16[4] = 0;
  puVar16[5] = 0;
  *(undefined1 *)(puVar16 + 6) = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1014a2d00();
  puVar16[7] = (ulong)puVar5;
  puVar16[2] = uVar9;
  puVar16[3] = (ulong)pcVar11;
  if (uVar17 == 0) {
LAB_101492d7c:
    func_0x000107c61434(pcVar11);
  }
  else {
    uVar15 = 0;
    FUN_1014a2e0c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61488(uVar17,uVar15);
    if (uVar17 == 0) goto LAB_101492d7c;
    func_0x000107c614e8();
    uVar4 = (undefined1)uVar17;
    FUN_1014a2e0c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c614e8();
    func_0x000107c61434(pcVar11);
    func_0x000107c4a560();
    if ((uVar17 & 1) == 0) {
      FUN_1014a2e0c(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x000107c614e8();
      func_0x000107c4a560();
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(puVar16 + 6) = uVar4;
  }
  func_0x000107c61428(param_4 + 0x50,&uStack_78,0x21,0);
  func_0x000107c61580(puVar16,2);
  uVar15 = *(undefined8 *)(param_4 + 0x50);
  func_0x000107c61558(uVar15);
  uVar8 = *(undefined8 *)(param_4 + 0x50);
  *(undefined8 *)(param_4 + 0x50) = 0x8000000000000000;
  FUN_10149a3f4(puVar16,uVar9,pcVar11,uVar15);
  func_0x000107c6142c(pcVar11);
  *(undefined8 *)(param_4 + 0x50) = uVar8;
  func_0x000107c614a8(&uStack_78);
LAB_101492e1c:
  if (CARRY8(puVar16[4],uVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f84);
    (*pcVar3)();
  }
  puVar16[4] = puVar16[4] + uVar6;
  if (!CARRY8(puVar16[5],uVar18)) {
    puVar16[5] = puVar16[5] + uVar18;
    func_0x000107c61574(puVar16);
    iVar14 = (int)((ulong)param_2 >> 0x20);
    if (*(int *)(param_4 + 0x28) != iVar14) {
      puVar10 = &uStack_78;
      func_0x000107c61428(puVar16 + 7,puVar10,0x20,0);
      uVar17 = puVar16[7];
      if ((*(long *)(uVar17 + 0x10) == 0) ||
         (uVar9 = (ulong)param_2 >> 0x20, FUN_10149a22c(), ((ulong)puVar10 & 1) == 0)) {
        puVar10 = &uStack_78;
        func_0x000107c614a8();
        FUN_1014a254c();
        func_0x000107c613fc();
        puVar10[3] = 0;
        puVar10[4] = 0;
        *(int *)(puVar10 + 2) = iVar14;
        func_0x000107c61428(puVar16 + 7,&uStack_78,0x21,0);
        func_0x000107c61580(puVar10,2);
        uVar17 = puVar16[7];
        func_0x000107c61558(uVar17);
        uVar9 = puVar16[7];
        puVar16[7] = 0x8000000000000000;
        FUN_10149a2c4(puVar10,(ulong)param_2 >> 0x20,uVar17);
        puVar16[7] = uVar9;
        func_0x000107c614a8(&uStack_78);
        func_0x000107c61574(puVar16);
        puVar16 = puVar10;
      }
      else {
        puVar10 = *(ulong **)(*(long *)(uVar17 + 0x38) + uVar9 * 8);
        func_0x000107c614a8(&uStack_78);
        func_0x000107c6157c(puVar10);
      }
      func_0x000107c61574(puVar16);
      if (CARRY8(puVar10[3],uVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f98);
        (*pcVar3)();
      }
      puVar10[3] = puVar10[3] + uVar6;
      if (CARRY8(puVar10[4],uVar18)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f9c);
        (*pcVar3)();
      }
      puVar10[4] = puVar10[4] + uVar18;
      puVar16 = puVar10;
    }
    func_0x000107c61574(puVar16);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f88);
  (*pcVar3)();
}



/* Entry: 101492fb4; end: 10149304b;  */

undefined1 FUN_101492fb4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10149304c; end: 101493083;  */

void FUN_10149304c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xfffffffffffffffe;
  func_0x000107c60f9c(0xfffffffffffffffe,"objc_debug_isa_class_mask");
  if (puVar1 == (undefined8 *)0x0) {
    uRam0000000113444470 = 0xffffffffffffffff;
  }
  else {
    uRam0000000113444470 = *puVar1;
  }
  return;
}



/* Entry: 101493084; end: 101493753;  */

/* WARNING: Removing unreachable block (ram,0x000101493608) */

undefined * FUN_101493084(ulong param_1)

{
  long *plVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  code *pcVar5;
  code **ppcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  code **ppcVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  undefined *puStack_e8;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (param_1 >> 0x3e == 0) {
    uVar19 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar19 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar19 != 0) {
    func_0x000107c61428(unaff_x20 + 0x18,auStack_80,0,0);
    func_0x000107c61428(unaff_x20 + 0x20,auStack_98,0,0);
    lVar17 = 0;
    uVar16 = 0;
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101493588);
          (*pcVar3)();
        }
        uVar21 = *(ulong *)(param_1 + 0x20 + uVar16 * 8);
        func_0x000107c6157c(uVar21);
      }
      else {
        uVar21 = uVar16;
        func_0x00010149553c(uVar16,param_1);
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101493574);
        (*pcVar3)();
      }
      uVar16 = uVar16 + 1;
      if ((lVar17 < *(long *)(unaff_x20 + 0x18)) || (*(char *)(uVar21 + 0x30) == '\x01')) {
        bVar4 = SCARRY8(lVar17,1);
        lVar17 = lVar17 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101493578);
          (*pcVar3)();
        }
        uVar10 = 0;
        func_0x000107c61428(uVar21 + 0x38,auStack_b0,0);
        lVar12 = *(long *)(uVar21 + 0x38);
        ppcVar14 = *(code ***)(lVar12 + 0x10);
        if (ppcVar14 == (code **)0x0) {
          func_0x000107c61434(lVar12);
          pcVar3 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          pcVar3 = FUN_1014a254c;
          FUN_10149499c(FUN_1014a254c,0x112da2f98,&UNK_10d9473d8);
          func_0x000107c613fc();
          func_0x000107c61438(lVar12,2);
          pcVar5 = pcVar3;
          func_0x000107c610a4();
          pcVar15 = pcVar5 + -0x19;
          if (0x1f < (long)pcVar5) {
            pcVar15 = pcVar5 + -0x20;
          }
          *(code ***)(pcVar3 + 0x10) = ppcVar14;
          *(ulong *)(pcVar3 + 0x18) = ((long)pcVar15 >> 3) << 1 | 1;
          ppcVar6 = &pcStack_d8;
          FUN_10149b1f8(ppcVar6,pcVar3 + 0x20,ppcVar14,lVar12);
          uVar10 = uStack_c0;
          FUN_100cb2ca8(pcStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8);
          if (ppcVar6 != ppcVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101493584);
            (*pcVar3)();
          }
        }
        pcStack_d8 = pcVar3;
        FUN_101494e9c(&pcStack_d8);
        func_0x000107c6142c(lVar12);
        pcVar3 = pcStack_d8;
        pcVar15 = *(code **)(unaff_x20 + 0x20);
        if ((long)pcVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10149357c);
          (*pcVar3)();
        }
        uVar11 = (uint)((ulong)pcStack_d8 >> 0x3e) & 1;
        if ((long)pcStack_d8 < 0) {
          uVar11 = 1;
        }
        if (uVar11 == 0) {
          pcVar7 = *(code **)(pcStack_d8 + 0x10);
          pcVar18 = pcVar7;
          if (pcVar15 <= pcVar7) {
            pcVar18 = pcVar15;
          }
          pcVar5 = (code *)0x0;
          if (pcVar15 != (code *)0x0) {
            pcVar5 = pcVar18;
          }
          if ((long)pcVar7 < (long)pcVar5) {
LAB_10149357c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101493580);
            (*pcVar3)();
          }
        }
        else {
          pcVar5 = pcStack_d8;
          func_0x000107c60480();
          pcVar7 = pcVar3;
          func_0x000107c60480();
          if ((long)pcVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101493608);
            (*pcVar3)();
          }
          pcVar7 = pcVar5;
          if ((long)pcVar15 <= (long)pcVar5) {
            pcVar7 = pcVar15;
          }
          pcVar18 = pcVar15;
          if (-1 < (long)pcVar5) {
            pcVar18 = pcVar7;
          }
          pcVar5 = (code *)0x0;
          if (pcVar15 != (code *)0x0) {
            pcVar5 = pcVar18;
          }
          pcVar7 = pcVar3;
          func_0x000107c60480();
          if ((long)pcVar7 < (long)pcVar5) goto LAB_10149357c;
        }
        if ((((ulong)pcVar3 & 0xc000000000000001) != 0) && (pcVar5 != (code *)0x0)) {
          FUN_1014a254c();
          func_0x000107c6157c(pcVar3);
          pcVar15 = (code *)0x0;
          do {
            pcVar18 = pcVar15 + 1;
            func_0x000107c60318(pcVar15,pcVar3,pcVar7);
            pcVar15 = pcVar18;
          } while (pcVar5 != pcVar18);
          func_0x000107c61574(pcVar3);
        }
        if (uVar11 == 0) {
          pcVar20 = (code *)0x0;
          pcVar15 = pcVar3 + 0x20;
          pcVar18 = (code *)((ulong)pcVar5 & 0x7fffffffffffffff);
          pcVar7 = pcVar3;
LAB_10149334c:
          uVar8 = 0;
          func_0x000107c605fc(0);
          pcVar3 = pcVar7;
          func_0x000107c615f4(pcVar7,3);
          func_0x000107c61480();
          if (pcVar3 == (code *)0x0) {
            func_0x000107c615e8(pcVar7);
            pcVar3 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          lVar13 = *(long *)(pcVar3 + 0x10);
          func_0x000107c61574();
          lVar12 = (long)pcVar18 - (long)pcVar20;
          if (SBORROW8((long)pcVar18,(long)pcVar20)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101493590);
            (*pcVar3)();
          }
          if (lVar13 != lVar12) {
            pcVar3 = pcVar7;
            func_0x000107c615ec(pcVar7,2);
            pcVar5 = pcVar15;
            pcVar15 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
            goto joined_r0x0001014934e8;
          }
          pcVar3 = pcVar7;
          func_0x000107c61480(pcVar7,uVar8);
          func_0x000107c615ec(pcVar7,2);
          pcVar15 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (pcVar3 == (code *)0x0) goto LAB_101493500;
        }
        else {
          pcVar7 = (code *)0x0;
          pcVar20 = pcVar3;
          func_0x000107c60484();
          func_0x000107c61574(pcVar3);
          pcVar18 = (code *)(uVar10 >> 1);
          pcVar15 = pcVar5;
          if ((uVar10 & 1) != 0) goto LAB_10149334c;
          lVar12 = (long)pcVar18 - (long)pcVar20;
          pcVar15 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (SBORROW8((long)pcVar18,(long)pcVar20)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10149358c);
            (*pcVar3)();
          }
joined_r0x0001014934e8:
          PTR___swiftEmptyArrayStorage_11034f1c8 = pcVar15;
          if (lVar12 != 0) {
            if (0 < lVar12) {
              pcVar15 = FUN_1014a254c;
              FUN_10149499c(FUN_1014a254c,0x112da2f98,&UNK_10d9473d8);
              func_0x000107c613fc();
              pcVar3 = pcVar15;
              func_0x000107c610a4();
              pcVar2 = pcVar3 + -0x19;
              if (0x1f < (long)pcVar3) {
                pcVar2 = pcVar3 + -0x20;
              }
              *(long *)(pcVar15 + 0x10) = lVar12;
              *(ulong *)(pcVar15 + 0x18) = ((long)pcVar2 >> 3) << 1 | 1;
            }
            if (pcVar20 == pcVar18) {
              func_0x000107c615e8(pcVar7);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101493604);
              (*pcVar3)();
            }
            FUN_1014a254c();
            func_0x000107c6140c(pcVar15 + 0x20,pcVar5 + (long)pcVar20 * 8,lVar12,pcVar3);
          }
LAB_101493500:
          func_0x000107c615e8(pcVar7);
          pcVar3 = pcVar15;
        }
        func_0x000107c6157c(uVar21);
        puVar9 = puStack_e8;
        func_0x000107c61558();
        if (((ulong)puVar9 & 1) == 0) {
          plVar1 = (long *)(puStack_e8 + 0x10);
          puStack_e8 = (undefined *)0x0;
          FUN_101494a04(0,*plVar1 + 1,1);
        }
        uVar10 = *(ulong *)(puStack_e8 + 0x10);
        if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar10) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e8 + 0x18));
          FUN_101494a04(puVar9,uVar10 + 1,1,puStack_e8);
          puStack_e8 = puVar9;
        }
        *(ulong *)(puStack_e8 + 0x10) = uVar10 + 1;
        *(ulong *)(puStack_e8 + uVar10 * 0x10 + 0x20) = uVar21;
        *(code **)(puStack_e8 + uVar10 * 0x10 + 0x28) = pcVar3;
      }
      func_0x000107c61574(uVar21);
    } while (uVar16 != uVar19);
  }
  puVar9 = puStack_e8;
  func_0x000101493614(puStack_e8);
  func_0x000107c6142c(puStack_e8);
  return puVar9;
}



/* Entry: 101493754; end: 101493967;  */

bool FUN_101493754(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = param_4;
  uVar4 = param_2;
  func_0x000107c61434();
  do {
    func_0x000107c5fb84();
    bVar2 = uVar4 != 0;
    if (uVar4 == 0) break;
    if ((uVar3 == param_1) && (uVar4 == param_2)) {
      func_0x000107c6142c(uVar4);
      bVar2 = true;
      break;
    }
    uVar5 = uVar4;
    func_0x000107c605b8();
    func_0x000107c6142c();
    uVar1 = uVar3 & 1;
    uVar3 = uVar4;
    uVar4 = uVar5;
  } while (uVar1 == 0);
  func_0x000107c6142c(param_4);
  return bVar2;
}



/* Entry: 101493968; end: 101493a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101493968(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010148f378(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x0001014a3298(unaff_x20 + _DAT_113444440,0x112da28c8,&UNK_10d9470b8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113444428));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_113444430 + 8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_113444438));
  return;
}



/* Entry: 101493a40; end: 101493a43;  */

void FUN_101493a40(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    pcVar1 = *(code **)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar5 = *(undefined4 *)(param_1 + 2);
    func_0x000107c6157c(uVar3);
    (*pcVar1)(uVar2,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 101493a44; end: 101493a67;  */

void FUN_101493a44(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101493a68; end: 101493c77;  */

/* WARNING: Removing unreachable block (ram,0x000101493b88) */
/* WARNING: Removing unreachable block (ram,0x000101493c50) */

long FUN_101493a68(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_48;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_101493bd0;
      puStack_48 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_58 = param_2 & 0xffffffffffffff;
      puStack_48 = &uStack_60;
      uStack_60 = param_1;
    }
    func_0x0001052fb3ec();
  }
  else {
LAB_101493bd0:
    uVar2 = 0x112da2ff8;
    func_0x0001000285a8(0x112da2ff8,&UNK_10d947438);
    func_0x000107c602f0(&puStack_48,FUN_101493c78,0,param_1,param_2,uVar2);
  }
  if (puStack_48 == (ulong *)0x0) {
    func_0x000107c6142c(param_2);
    func_0x000107c61464();
    unaff_x20 = 0;
  }
  else {
    *(ulong **)(unaff_x20 + 0x10) = puStack_48;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    uVar2 = 0x742e736567616d69;
    uVar5 = 0xea00000000007478;
    func_0x000107c5fadc(0x742e736567616d69,0xea00000000007478);
    uVar3 = param_1;
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x000107c5fb04(lVar1);
    uVar2 = uVar5;
    func_0x000107c5facc(uVar4,uVar5,lVar1);
    func_0x000107c6142c(uVar5);
    FUN_1014a1640(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
    *(ulong *)(unaff_x20 + 0x18) = uVar4;
  }
  return unaff_x20;
}



/* Entry: 101493c78; end: 101493ca3;  */

void FUN_101493c78(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001052fb3ec();
  *param_1 = param_2;
  return;
}



/* Entry: 101493ca4; end: 101493ccf;  */

void FUN_101493ca4(void)

{
  long unaff_x20;
  
  func_0x0001052fb6b4(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101493cd0; end: 101493ef7;  */

/* WARNING: Possible PIC construction at 0x000101493dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101493e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101493e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101493e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101493e90) */
/* WARNING: Removing unreachable block (ram,0x000101493e1c) */
/* WARNING: Removing unreachable block (ram,0x000101493ef0) */
/* WARNING: Removing unreachable block (ram,0x000101493e20) */
/* WARNING: Removing unreachable block (ram,0x000101493df0) */
/* WARNING: Removing unreachable block (ram,0x000101493ea0) */
/* WARNING: Removing unreachable block (ram,0x000101493ef4) */
/* WARNING: Removing unreachable block (ram,0x000101493efc) */
/* WARNING: Removing unreachable block (ram,0x000101493f50) */
/* WARNING: Removing unreachable block (ram,0x000101493f00) */
/* WARNING: Removing unreachable block (ram,0x000101493ed0) */

void FUN_101493cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar2 = &UNK_1103c6de8;
  puVar1 = puVar2;
  func_0x000107c613fc(&UNK_1103c6de8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  func_0x000107c613fc(&UNK_1103c6de8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar3 = &UNK_1103c6e10;
  func_0x000107c613fc(&UNK_1103c6e10,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  puVar4 = &UNK_1103c6e38;
  func_0x000107c613fc(&UNK_1103c6e38,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1014a2e90;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = puVar4;
  func_0x0001014a25ac();
  func_0x000107c613fc();
  *(code **)(puVar5 + 0x10) = FUN_1014a2f2c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x0001052fb7e8(uVar6,0x1014a3398,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 101493ef8; end: 101493f53;  */

void FUN_101493ef8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    pcVar1 = *(code **)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar5 = *(undefined4 *)(param_1 + 2);
    func_0x000107c6157c(uVar3);
    (*pcVar1)(uVar2,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 101493f54; end: 101494173;  */

/* WARNING: Possible PIC construction at 0x000101494134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101494138) */
/* WARNING: Removing unreachable block (ram,0x000101494150) */

ulong FUN_101493f54(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar10;
  code *pcVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_d0 [8];
  ulong uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar9 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar9 - extraout_x12;
  func_0x000101490d78();
  uVar10 = *(ulong *)(uVar3 + 0x10);
  if (uVar10 < 4) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      func_0x000107c60e78();
      *(long *)(lVar14 + -0x40) = lVar14;
      *(undefined8 *)(lVar14 + -0x38) = unaff_x23;
      *(long *)(lVar14 + -0x30) = lVar9;
      *(undefined8 *)(lVar14 + -0x28) = unaff_x21;
      *(ulong *)(lVar14 + -0x20) = uVar10;
      *(ulong *)(lVar14 + -0x18) = uVar2;
      *(undefined1 **)(lVar14 + -0x10) = &stack0xfffffffffffffff0;
      *(code **)(lVar14 + -8) = FUN_101494174;
      lVar16 = 0;
      func_0x000107c5eea4();
      lVar15 = *(long *)(lVar16 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
      lVar14 = (lVar14 + -0x40) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar13 = lVar14 - extraout_x12_00;
      FUN_101494244(lVar13,uVar3);
      FUN_101494244(lVar14,param_2);
      lVar9 = lVar13;
      func_0x000107c5ee74(lVar13,lVar14);
      pcVar11 = *(code **)(lVar15 + 8);
      (*pcVar11)(lVar14,lVar16);
      (*pcVar11)(lVar13,lVar16);
      return (ulong)((uint)lVar9 & 1);
    }
  }
  else {
    bVar1 = *(byte *)(lVar16 + 0x50);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    lVar12 = *(long *)(lVar16 + 0x48);
    pcStack_88 = *(code **)(lVar16 + 0x10);
    lVar15 = uVar10 - 3;
    lVar13 = uVar3 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) + lVar12 * 3;
    uStack_90 = uVar3;
    puStack_80 = puVar4;
    do {
      (*pcStack_88)(lVar14,lVar13,uVar2);
      (**(code **)(lVar16 + 0x20))(lVar9,lVar14,uVar2);
      puVar4 = puStack_80;
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar7 = puVar4;
      func_0x000107c5ed90();
      uStack_70 = 0;
      puVar8 = puVar4;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      uVar6 = uStack_70;
      if ((int)puVar8 == 0) {
        uVar5 = uStack_70;
        func_0x000107c61174(uStack_70);
        func_0x000107c5ed30(uVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61654();
        func_0x000107c614ac(uVar6);
      }
      else {
        func_0x000107c61174(uStack_70);
      }
      (**(code **)(lVar16 + 8))(lVar9,uVar2);
      lVar13 = lVar13 + lVar12;
      lVar15 = lVar15 + -1;
      uVar3 = uStack_90;
    } while (lVar15 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return uVar3;
}



/* Entry: 101494174; end: 101494243;  */

uint FUN_101494174(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  FUN_101494244(lVar5,param_1);
  FUN_101494244(puVar4,param_2);
  lVar2 = lVar5;
  func_0x000107c5ee74(lVar5,puVar4);
  pcVar3 = *(code **)(lVar6 + 8);
  (*pcVar3)(puVar4,lVar1);
  (*pcVar3)(lVar5,lVar1);
  return (uint)lVar2 & 1;
}



/* Entry: 101494244; end: 10149448f;  */

/* WARNING: Removing unreachable block (ram,0x00010149437c) */

void FUN_101494244(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_90 [48];
  
  lVar1 = 0;
  func_0x000107c5ecc4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0x112da3000;
  func_0x0001000285a8(0x112da3000,&UNK_10db90480);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  func_0x000107c61174();
  lVar3 = lVar2;
  FUN_1014a3020(lVar2);
  func_0x000107c61588(lVar2);
  FUN_1014a3214((undefined8 *)(lVar2 + 0x20),FUN_1014a2fa0);
  func_0x000107c5ed78(puVar6,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5ecb8(lVar5 - extraout_x12);
  (**(code **)(lVar7 + 8))(puVar6,lVar1);
  func_0x0001014a3250(lVar5 - extraout_x12,lVar5,0x112d373d8,&UNK_10d9014c0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar1 = *(long *)(lVar3 + -8);
  pcVar4 = *(code **)(lVar1 + 0x30);
  lVar2 = lVar5;
  (*pcVar4)(lVar5,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x000107c5ee60(param_1);
    lVar2 = lVar5;
    (*pcVar4)(lVar5,1,lVar3);
    if ((int)lVar2 != 1) {
      func_0x0001014a3298(lVar5,0x112d373d8,&UNK_10d9014c0);
    }
  }
  else {
    (**(code **)(lVar1 + 0x20))(param_1,lVar5,lVar3);
  }
  return;
}



/* Entry: 101494490; end: 1014945d7;  */

long FUN_101494490(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar5 = 0x800000010ef84c60;
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef84c60);
  lVar2 = param_1;
  func_0x000107c5c168();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  func_0x000107c5fb28(lVar3,uVar5);
  func_0x000107c6142c(uVar5);
  lVar2 = lVar3 + 0x20;
  func_0x000107c5f1d4(lVar2,0x202,0x1a4);
  func_0x000107c61574(lVar3);
  if (-1 < (int)lVar2) {
    lVar3 = lVar2;
    func_0x000107c60fec(lVar2,1);
    if ((int)lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c610e4(0,1,3,1,lVar2,0);
      if ((lVar3 != 0) && (lVar4 = lVar3, func_0x000107c5f1d0(), lVar3 != lVar4)) {
        *(int *)(unaff_x20 + 0x10) = (int)lVar2;
        *(long *)(unaff_x20 + 0x18) = lVar3;
        return unaff_x20;
      }
    }
    func_0x000107c60f10(lVar2);
  }
  func_0x000107c61464();
  return 0;
}



/* Entry: 1014945d8; end: 101494607;  */

void FUN_1014945d8(void)

{
  long unaff_x20;
  
  func_0x000107c610ec(*(undefined8 *)(unaff_x20 + 0x18),1);
  func_0x000107c60f10(*(undefined4 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101494608; end: 10149460f;  */

void FUN_101494608(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101494610; end: 10149473f;  */

void FUN_101494610(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101494740; end: 1014947b7;  */

undefined8 FUN_101494740(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 1014947b8; end: 1014948ef;  */

undefined1 * FUN_1014947b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1014948f0; end: 101494917;  */

void FUN_1014948f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 101494918; end: 10149499b;  */

void FUN_101494918(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112da3030;
  FUN_101490b04(0x112da3030,FUN_1014a2fa0,&UNK_10d947508);
  uVar2 = 0x112da3038;
  FUN_101490b04(0x112da3038,FUN_1014a2fa0,&UNK_10d9474c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 10149499c; end: 101494a03;  */

void FUN_10149499c(code *param_1,ulong *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar2 != 0) && ((*param_1)(), lVar2 != 0)) {
    param_2 = (ulong *)0x112d36e60;
    param_3 = (long *)&UNK_10d901170;
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar1 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar1,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar1;
  }
  return;
}



/* Entry: 101494a04; end: 101494b33;  */

undefined * FUN_101494a04(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101494b34);
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
    puVar3 = (undefined *)0x112da2f88;
    func_0x0001000285a8(0x112da2f88,&UNK_10d9473c8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112da2f90;
    func_0x0001000285a8(0x112da2f90,&UNK_10d9473d0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101494b34; end: 101494c4b;  */

undefined * FUN_101494b34(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x1014a256c;
    FUN_10149499c(0x1014a256c,0x112da2f80,&UNK_10d9473b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101494c4c; end: 101494d8f;  */

void FUN_101494c4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    func_0x00010149b0d8();
  }
  uVar7 = *(ulong *)(uVar4 + 0x10);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  lStack_70 = uVar4 + uVar6;
  uVar3 = uVar7;
  uStack_68 = uVar7;
  func_0x000107c60574();
  if ((long)uVar3 < (long)uVar7) {
    puVar8 = (undefined *)(uVar7 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar7) {
      puVar2 = puVar8;
      func_0x000107c60380(puVar8,lVar1);
      *(undefined **)(puVar2 + 0x10) = puVar8;
    }
    puStack_80 = puVar2 + uVar6;
    puStack_78 = puVar8;
    FUN_1014956d0(&puStack_80,auStack_58,&lStack_70,param_1,param_2,uVar3);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar7 != 0) {
    FUN_1014970d4(0,uVar7,1,param_1,param_2);
  }
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 101494d90; end: 101494e9b;  */

void FUN_101494d90(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_10149b0ec();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112da2fd0;
      func_0x0001000285a8(0x112da2fd0,&UNK_10d947410);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_101495e84(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_101497300(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101494e9c; end: 101494fd3;  */

void FUN_101494e9c(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    func_0x00010149b118();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  plStack_50 = plVar1;
  uStack_48 = uVar12;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      uVar12 = uVar5;
      FUN_1014a254c();
      puVar3 = puVar13;
      func_0x000107c60380(puVar13,uVar12);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_10149627c(&puStack_68,auStack_58,&plStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (1 < uVar12) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (*(ulong *)(lVar7 + 0x20) <= *(ulong *)(lVar10 + 0x20)) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 101494fd4; end: 101495107;  */

void FUN_101494fd4(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    func_0x00010149b154();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  plStack_50 = plVar1;
  uStack_48 = uVar12;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      puVar3 = puVar13;
      func_0x000107c60380(puVar13,PTR___sSiN_11034deb0);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_101496618(&puStack_68,auStack_58,&plStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 101495108; end: 10149526f;  */

void FUN_101495108(ulong *param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_98 [8];
  long lStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar9 = *param_1;
  uVar6 = uVar9;
  func_0x000107c61558();
  if ((uVar6 & 1) == 0) {
    func_0x00010149b190();
  }
  uVar10 = *(ulong *)(uVar9 + 0x10);
  lStack_90 = uVar9 + 0x20;
  uVar6 = uVar10;
  uStack_88 = uVar10;
  func_0x000107c60574();
  if ((long)uVar6 < (long)uVar10) {
    puVar11 = (undefined *)(uVar10 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar10) {
      puVar2 = puVar11;
      func_0x000107c60380(puVar11,&UNK_1103c6b68);
      *(undefined **)(puVar2 + 0x10) = puVar11;
    }
    puStack_80 = puVar2 + 0x20;
    puStack_78 = puVar11;
    FUN_101496980(&puStack_80,auStack_98,&lStack_90,uVar6);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if ((uVar10 != 0) && (uVar10 != 1)) {
    puVar7 = (ulong *)(uVar9 + 0x60);
    lVar4 = -1;
    uVar6 = 1;
    lVar5 = lVar4;
    puVar3 = puVar7;
LAB_1014951b4:
    do {
      puVar8 = puVar7 + -8;
      if (*puVar7 < *puVar8) {
        uVar13 = puVar7[1];
        uVar12 = *puVar7;
        uVar15 = puVar7[3];
        uVar14 = puVar7[2];
        uVar17 = puVar7[5];
        uVar16 = puVar7[4];
        uVar19 = puVar7[7];
        uVar18 = puVar7[6];
        puVar7[1] = puVar7[-7];
        *puVar7 = *puVar8;
        puVar7[3] = puVar7[-5];
        puVar7[2] = puVar7[-6];
        puVar7[5] = puVar7[-3];
        puVar7[4] = puVar7[-4];
        puVar7[7] = puVar7[-1];
        puVar7[6] = puVar7[-2];
        puVar7[-3] = uVar17;
        puVar7[-4] = uVar16;
        puVar7[-1] = uVar19;
        puVar7[-2] = uVar18;
        puVar7[-7] = uVar13;
        *puVar8 = uVar12;
        puVar7[-5] = uVar15;
        puVar7[-6] = uVar14;
        puVar7 = puVar7 + -8;
        bVar1 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        if (bVar1) goto LAB_1014951b4;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar3 + 8;
      lVar4 = lVar5 + -1;
      lVar5 = lVar4;
      puVar3 = puVar7;
    } while (uVar6 != uVar10);
  }
  *param_1 = uVar9;
  return;
}



/* Entry: 101495270; end: 1014953a7;  */

void FUN_101495270(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    func_0x00010149b1bc();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  plStack_50 = plVar1;
  uStack_48 = uVar12;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      uVar12 = uVar5;
      func_0x0001014a256c();
      puVar3 = puVar13;
      func_0x000107c60380(puVar13,uVar12);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_101496d38(&puStack_68,auStack_58,&plStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (1 < uVar12) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (*(ulong *)(lVar7 + 0x28) <= *(ulong *)(lVar10 + 0x28)) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 1014953a8; end: 1014956cf;  */

ulong FUN_1014953a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101495470);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101495474);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1014a254c();
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    FUN_1014a254c();
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000002f,0x800000010ef850e0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10149553c);
  (*pcVar2)();
}



/* Entry: 1014956d0; end: 101495e83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1014956d0(long *param_1,undefined8 param_2,ulong *param_3,code *param_4,undefined8 param_5,
                  long param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  code *pcVar10;
  long unaff_x21;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auStack_130 [8];
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  ulong uStack_110;
  long *plStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_58;
  
  lVar3 = 0;
  pcStack_78 = param_4;
  uStack_70 = param_5;
  func_0x000107c5ede0();
  lStack_80 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  puStack_d0 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_c0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = lVar8 - extraout_x12_00;
  uStack_c8 = uVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar9 - extraout_x12_01;
  lStack_d8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_02;
  lStack_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_03;
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_04;
  lStack_f8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_e8 = lVar8 - extraout_x12_05;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = param_3[1];
  puStack_e0 = param_3;
  if (0 < (long)uVar9) {
    uVar12 = 0;
    plStack_108 = param_1;
    lStack_f0 = param_6;
    do {
      lVar8 = lStack_80;
      uVar5 = uVar12 + 1;
      uVar14 = uVar12;
      if ((long)uVar5 < (long)uVar9) {
        uVar14 = *param_3;
        pcVar17 = *(code **)(lStack_80 + 0x48);
        pcVar11 = (code *)(uVar14 + (long)pcVar17 * uVar5);
        pcVar10 = *(code **)(lStack_80 + 0x10);
        uStack_b8 = uVar9;
        (*pcVar10)(lStack_e8,pcVar11,lVar3);
        lVar16 = lStack_f8;
        pcStack_b0 = pcVar10;
        (*pcVar10)(lStack_f8,uVar14 + (long)pcVar17 * uVar12,lVar3);
        lVar18 = lStack_e8;
        (*pcStack_78)(lStack_e8,lVar16);
        pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,(int)lVar18);
        pcVar10 = *(code **)(lVar8 + 8);
        (*pcVar10)(lVar16,lVar3);
        (*pcVar10)(lStack_e8,lVar3);
        if (unaff_x21 != 0) goto LAB_101495e1c;
        uStack_110 = uStack_b8 - 1;
        uStack_98 = uStack_b8 - 2;
        pcVar15 = (code *)(uVar14 + (long)pcVar17 * (uVar12 + 2));
        uStack_100 = uVar12;
        pcStack_88 = pcVar17;
        do {
          uVar14 = uVar12;
          lVar8 = lStack_a8;
          pcVar17 = pcStack_b0;
          uVar5 = uStack_b8;
          uVar9 = uStack_110;
          if (uStack_98 == uVar14) goto LAB_1014959a8;
          (*pcStack_b0)(lStack_a8,pcVar15,lVar3);
          lVar16 = lStack_a0;
          (*pcVar17)(lStack_a0,pcVar11,lVar3);
          lVar18 = lVar8;
          (*pcStack_78)(lVar8,lVar16);
          (*pcVar10)(lVar16,lVar3);
          (*pcVar10)(lVar8,lVar3);
          pcVar15 = pcVar15 + (long)pcStack_88;
          pcVar11 = pcVar11 + (long)pcStack_88;
          uVar12 = uVar14 + 1;
        } while (((uint)pcStack_90 & 1) == ((uint)lVar18 & 1));
        uVar5 = uVar14 + 2;
        uVar9 = uVar14 + 1;
LAB_1014959a8:
        param_3 = puStack_e0;
        uVar14 = uStack_100;
        param_1 = plStack_108;
        if (((ulong)pcStack_90 & 1) != 0) {
          if ((long)uVar5 < (long)uStack_100) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e70);
            (*pcVar11)();
          }
          if ((long)uStack_100 <= (long)uVar9) {
            lVar8 = 0;
            uVar12 = *puStack_e0;
            lVar16 = (long)pcStack_88 * (uVar5 - 1);
            lVar18 = uVar5 * (long)pcStack_88;
            pcVar11 = (code *)(uStack_100 * (long)pcStack_88);
            pcVar10 = pcStack_88;
            uVar9 = uStack_100;
            uStack_b8 = uVar5;
            do {
              if (uVar9 != (uStack_b8 + lVar8) - 1) {
                if (uVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e7c);
                  (*pcVar11)();
                }
                pcVar10 = pcVar11 + uVar12;
                pcStack_90 = *(code **)(lStack_80 + 0x20);
                (*pcStack_90)(lStack_d8,pcVar10,lVar3);
                if (((long)pcVar11 < lVar16) || ((code *)(uVar12 + lVar18) <= pcVar10)) {
                  func_0x000107c61414(pcVar10,uVar12 + lVar16,1,lVar3);
                }
                else if (pcStack_88 != (code *)0x0) {
                  func_0x000107c61410(pcVar10,uVar12 + lVar16,1,lVar3);
                }
                (*pcStack_90)(uVar12 + lVar16,lStack_d8,lVar3);
                pcVar10 = pcStack_88;
              }
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + -1;
              lVar16 = lVar16 - (long)pcVar10;
              lVar18 = lVar18 - (long)pcVar10;
              pcVar11 = pcVar11 + (long)pcVar10;
              param_3 = puStack_e0;
              uVar5 = uStack_b8;
              uVar14 = uStack_100;
              param_1 = plStack_108;
            } while ((long)uVar9 < (long)(uStack_b8 + lVar8));
          }
        }
      }
      uVar9 = param_3[1];
      if ((long)uVar5 < (long)uVar9) {
        if (SBORROW8(uVar5,uVar14)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e54);
          (*pcVar11)();
        }
        if (lStack_f0 <= (long)(uVar5 - uVar14)) goto LAB_101495b04;
        if (SCARRY8(uVar14,lStack_f0)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e68);
          (*pcVar11)();
        }
        uVar12 = uVar14 + lStack_f0;
        if ((long)uVar9 <= (long)(uVar14 + lStack_f0)) {
          uVar12 = uVar9;
        }
        if ((long)uVar12 < (long)uVar14) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e6c);
          (*pcVar11)();
        }
        if (uVar5 == uVar12) goto LAB_101495b04;
        pcStack_90 = (code *)*param_3;
        lStack_128 = *(long *)(lStack_80 + 0x48);
        pcStack_88 = *(code **)(lStack_80 + 0x10);
        pcVar11 = pcStack_90 + lStack_128 * (uVar5 - 1);
        uStack_98 = -lStack_128;
        uVar9 = uVar14 - uVar5;
        pcVar10 = pcStack_90 + uVar5 * lStack_128;
        uStack_120 = uVar12;
        pcVar17 = pcVar10;
        uVar12 = uVar9;
        uStack_100 = uVar14;
        pcVar15 = pcVar11;
LAB_101495be0:
        do {
          pcStack_b0 = pcVar15;
          uStack_b8 = uVar5;
          uStack_110 = uVar12;
          pcStack_118 = pcVar17;
          pcVar17 = pcStack_88;
          uVar12 = uStack_c8;
          (*pcStack_88)(uStack_c8,pcVar10,lVar3);
          lVar8 = lStack_c0;
          (*pcVar17)(lStack_c0,pcVar11,lVar3);
          uVar5 = uVar12;
          (*pcStack_78)(uVar12,lVar8);
          pcVar17 = *(code **)(lStack_80 + 8);
          (*pcVar17)(lVar8,lVar3);
          (*pcVar17)(uVar12,lVar3);
          puVar1 = puStack_d0;
          if (unaff_x21 != 0) goto LAB_101495e1c;
          if ((uVar5 & 1) != 0) {
            if (pcStack_90 == (code *)0x0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e74);
              (*pcVar11)();
            }
            pcVar17 = *(code **)(lStack_80 + 0x20);
            (*pcVar17)(puStack_d0,pcVar10,lVar3);
            func_0x000107c61414(pcVar10,pcVar11,1,lVar3);
            (*pcVar17)(pcVar11,puVar1,lVar3);
            pcVar11 = pcVar11 + uStack_98;
            pcVar10 = pcVar10 + uStack_98;
            bVar2 = uVar9 != 0xffffffffffffffff;
            uVar9 = uVar9 + 1;
            pcVar17 = pcStack_118;
            uVar12 = uStack_110;
            uVar5 = uStack_b8;
            pcVar15 = pcStack_b0;
            if (bVar2) goto LAB_101495be0;
          }
          pcVar11 = pcStack_b0 + lStack_128;
          uVar9 = uStack_110 - 1;
          pcVar10 = pcStack_118 + lStack_128;
          pcVar17 = pcVar10;
          uVar12 = uVar9;
          uVar5 = uStack_b8 + 1;
          pcVar15 = pcVar11;
        } while (uStack_b8 + 1 != uStack_120);
        param_3 = puStack_e0;
        uVar12 = uStack_120;
        uVar14 = uStack_100;
        param_1 = plStack_108;
        if ((long)uStack_120 < (long)uStack_100) goto LAB_101495e4c;
      }
      else {
LAB_101495b04:
        uVar12 = uVar5;
        if ((long)uVar5 < (long)uVar14) {
LAB_101495e4c:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e50);
          (*pcVar11)();
        }
      }
      puVar7 = puStack_58;
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar9 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar9 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
      *(ulong *)(puVar7 + uVar9 * 0x10 + 0x20) = uVar14;
      *(ulong *)(puVar7 + uVar9 * 0x10 + 0x28) = uVar12;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e80);
        (*pcVar11)();
      }
      FUN_101497394(&puStack_58,*param_1,pcStack_78,uStack_70);
      if (unaff_x21 != 0) goto LAB_101495e1c;
      uVar9 = param_3[1];
    } while ((long)uVar12 < (long)uVar9);
  }
  puVar7 = puStack_58;
  lVar3 = *param_1;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e84);
    (*pcVar11)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar9 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar9) {
    uVar12 = *param_3;
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e78);
      (*pcVar11)();
    }
    lVar18 = uVar9 - 1;
    lVar13 = *(long *)(puVar7 + uVar9 * 0x10);
    lVar8 = *(long *)(puVar7 + lVar18 * 0x10 + 0x28);
    lVar16 = *(long *)(lStack_80 + 0x48);
    FUN_101497fe0(uVar12 + lVar16 * lVar13,
                  uVar12 + lVar16 * *(long *)(puVar7 + lVar18 * 0x10 + 0x20),uVar12 + lVar16 * lVar8
                  ,lVar3,pcStack_78,uStack_70);
    if (unaff_x21 != 0) break;
    if (lVar8 < lVar13) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e48);
      (*pcVar11)();
    }
    puVar4 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar9 - 2) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x101495e4c);
      (*pcVar11)();
    }
    *(long *)(puVar7 + uVar9 * 0x10) = lVar13;
    *(long *)((long)(puVar7 + uVar9 * 0x10) + 8) = lVar8;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar18);
    param_3 = puStack_e0;
    puVar7 = puStack_58;
    uVar9 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101495e1c:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 101495e84; end: 10149627b;  */

void FUN_101495e84(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  long unaff_x21;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = param_3[1];
  if (0 < lVar9) {
    lVar11 = 0;
    do {
      puVar8 = puStack_58;
      lVar23 = lVar11 + 1;
      if (lVar23 < lVar9) {
        lVar12 = *param_3;
        uVar15 = *(ulong *)(lVar12 + lVar23 * 0x28);
        lVar13 = lVar11 * 0x28;
        uVar17 = *(ulong *)(lVar12 + lVar13);
        puVar14 = (ulong *)(lVar12 + lVar13) + 10;
        lVar16 = lVar11 + 2;
        uVar18 = uVar15;
        do {
          lVar10 = lVar16;
          lVar23 = lVar9;
          if (lVar9 == lVar10) break;
          uVar21 = *puVar14;
          bVar5 = uVar18 <= uVar21;
          puVar14 = puVar14 + 5;
          lVar16 = lVar10 + 1;
          uVar18 = uVar21;
          lVar23 = lVar10;
        } while (uVar15 < uVar17 != bVar5);
        if (uVar15 < uVar17) {
          if (lVar23 < lVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101496250);
            (*pcVar4)();
          }
          if (lVar11 < lVar23) {
            lVar10 = lVar23 * 0x28;
            lVar16 = lVar23;
            lVar9 = lVar11;
            do {
              lVar16 = lVar16 + -1;
              if (lVar9 != lVar16) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101496270);
                  (*pcVar4)();
                }
                puVar1 = (undefined8 *)(lVar12 + lVar13);
                uVar19 = puVar1[4];
                lVar2 = lVar12 + lVar10;
                uVar28 = puVar1[1];
                uVar27 = *puVar1;
                uVar25 = puVar1[3];
                uVar24 = puVar1[2];
                uVar22 = *(undefined8 *)(lVar2 + -8);
                uVar30 = *(undefined8 *)(lVar2 + -0x10);
                uVar29 = *(undefined8 *)(lVar2 + -0x18);
                uVar31 = *(undefined8 *)(lVar2 + -0x28);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x20);
                *puVar1 = uVar31;
                puVar1[3] = uVar30;
                puVar1[2] = uVar29;
                puVar1[4] = uVar22;
                *(undefined8 *)(lVar2 + -0x20) = uVar28;
                *(undefined8 *)(lVar2 + -0x28) = uVar27;
                *(undefined8 *)(lVar2 + -0x10) = uVar25;
                *(undefined8 *)(lVar2 + -0x18) = uVar24;
                *(undefined8 *)(lVar2 + -8) = uVar19;
              }
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + -0x28;
              lVar13 = lVar13 + 0x28;
            } while (lVar9 < lVar16);
            lVar9 = param_3[1];
          }
        }
      }
      lVar13 = lVar23;
      if (lVar23 < lVar9) {
        if (SBORROW8(lVar23,lVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10149624c);
          (*pcVar4)();
        }
        if (lVar23 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101496254);
            (*pcVar4)();
          }
          lVar16 = lVar11 + param_4;
          if (lVar9 <= lVar11 + param_4) {
            lVar16 = lVar9;
          }
          if (lVar16 < lVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101496258);
            (*pcVar4)();
          }
          if (lVar23 != lVar16) {
            lVar9 = *param_3;
            puVar14 = (ulong *)(lVar9 + lVar23 * 0x28 + -0x28);
            lVar12 = lVar11 - lVar23;
            do {
              uVar18 = *(ulong *)(lVar9 + lVar23 * 0x28);
              lVar13 = lVar12;
              puVar20 = puVar14;
              do {
                if (*puVar20 <= uVar18) break;
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10149625c);
                  (*pcVar4)();
                }
                uVar26 = puVar20[7];
                uVar21 = puVar20[6];
                uVar15 = puVar20[8];
                puVar20[6] = puVar20[1];
                puVar20[5] = *puVar20;
                puVar20[8] = puVar20[3];
                puVar20[7] = puVar20[2];
                uVar17 = puVar20[4];
                *puVar20 = uVar18;
                puVar20[2] = uVar26;
                puVar20[1] = uVar21;
                puVar20[3] = uVar15;
                puVar20[4] = puVar20[9];
                puVar20[9] = uVar17;
                bVar5 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                puVar20 = puVar20 + -5;
              } while (bVar5);
              lVar23 = lVar23 + 1;
              puVar14 = puVar14 + 5;
              lVar12 = lVar12 + -1;
              lVar13 = lVar16;
            } while (lVar23 != lVar16);
          }
        }
      }
      if (lVar13 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10149623c);
        (*pcVar4)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar18 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar18) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar18 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar18 + 1;
      *(long *)(puVar8 + uVar18 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar8 + uVar18 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101496274);
        (*pcVar4)();
      }
      FUN_10149761c(&puStack_58,*param_1,param_3);
      puVar8 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101496210;
      lVar9 = param_3[1];
      lVar11 = lVar13;
    } while (lVar13 < lVar9);
  }
  puVar8 = puStack_58;
  lVar9 = *param_1;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10149627c);
    (*pcVar4)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar14 = (ulong *)(puVar8 + 0x10);
  uVar18 = *puVar14;
  while (1 < uVar18) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101496278);
      (*pcVar4)();
    }
    plVar3 = (long *)(puVar8 + uVar18 * 0x10);
    lVar23 = *plVar3;
    puVar20 = puVar14 + uVar18 * 2;
    uVar15 = puVar20[1];
    FUN_1014985a4(lVar11 + lVar23 * 0x28,lVar11 + *puVar20 * 0x28,lVar11 + uVar15 * 0x28,lVar9);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar23) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101496240);
      (*pcVar4)();
    }
    if (*puVar14 <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101496244);
      (*pcVar4)();
    }
    *plVar3 = lVar23;
    plVar3[1] = uVar15;
    uVar15 = *puVar14;
    lVar11 = uVar15 - uVar18;
    if (uVar15 < uVar18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101496248);
      (*pcVar4)();
    }
    uVar18 = uVar15 - 1;
    func_0x000107c610b8(puVar20,puVar20 + 2,lVar11 * 0x10);
    *puVar14 = uVar18;
  }
LAB_101496210:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 10149627c; end: 101496617;  */

void FUN_10149627c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x21;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = param_3[1];
  if (0 < lVar6) {
    lVar8 = 0;
    do {
      puVar5 = puStack_58;
      lVar22 = lVar8 + 1;
      if (lVar22 < lVar6) {
        lVar9 = *param_3;
        uVar10 = *(ulong *)(*(long *)(lVar9 + lVar22 * 8) + 0x20);
        uVar13 = *(ulong *)(*(long *)(lVar9 + lVar8 * 8) + 0x20);
        lVar20 = lVar8 + 2;
        uVar21 = uVar10;
        do {
          lVar14 = lVar20;
          lVar22 = lVar6;
          if (lVar6 == lVar14) break;
          uVar18 = *(ulong *)(*(long *)(lVar9 + lVar14 * 8) + 0x20);
          bVar2 = uVar18 <= uVar21;
          lVar20 = lVar14 + 1;
          uVar21 = uVar18;
          lVar22 = lVar14;
        } while (uVar13 < uVar10 != bVar2);
        if (uVar13 < uVar10) {
          if (lVar22 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965ec);
            (*pcVar1)();
          }
          if (lVar8 < lVar22) {
            puVar7 = (undefined8 *)(lVar9 + lVar22 * 8);
            puVar11 = (undefined8 *)(lVar9 + lVar8 * 8);
            lVar20 = lVar22;
            lVar6 = lVar8;
            do {
              puVar7 = puVar7 + -1;
              lVar20 = lVar20 + -1;
              if (lVar6 != lVar20) {
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10149660c);
                  (*pcVar1)();
                }
                uVar16 = *puVar11;
                *puVar11 = *puVar7;
                *puVar7 = uVar16;
              }
              lVar6 = lVar6 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar6 < lVar20);
            lVar6 = param_3[1];
          }
        }
      }
      lVar20 = lVar22;
      if (lVar22 < lVar6) {
        if (SBORROW8(lVar22,lVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965e8);
          (*pcVar1)();
        }
        if (lVar22 - lVar8 < param_4) {
          if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965f0);
            (*pcVar1)();
          }
          lVar9 = lVar8 + param_4;
          if (lVar6 <= lVar8 + param_4) {
            lVar9 = lVar6;
          }
          if (lVar9 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965f4);
            (*pcVar1)();
          }
          if (lVar22 != lVar9) {
            lVar6 = *param_3;
            plVar12 = (long *)(lVar6 + lVar22 * 8 + -8);
            lVar14 = lVar8 - lVar22;
            do {
              lVar15 = *(long *)(lVar6 + lVar22 * 8);
              lVar20 = lVar14;
              plVar17 = plVar12;
              do {
                lVar19 = *plVar17;
                if (*(ulong *)(lVar15 + 0x20) <= *(ulong *)(lVar19 + 0x20)) break;
                if (lVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965f8);
                  (*pcVar1)();
                }
                *plVar17 = lVar15;
                plVar17[1] = lVar19;
                bVar2 = lVar20 != -1;
                lVar20 = lVar20 + 1;
                plVar17 = plVar17 + -1;
              } while (bVar2);
              lVar22 = lVar22 + 1;
              plVar12 = plVar12 + 1;
              lVar14 = lVar14 + -1;
              lVar20 = lVar9;
            } while (lVar22 != lVar9);
          }
        }
      }
      if (lVar20 < lVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965dc);
        (*pcVar1)();
      }
      puVar3 = puStack_58;
      func_0x000107c61558();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar21 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar21) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        func_0x0001000a91e0(puVar5,uVar21 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar21 + 1;
      *(long *)(puVar5 + uVar21 * 0x10 + 0x20) = lVar8;
      *(long *)(puVar5 + uVar21 * 0x10 + 0x28) = lVar20;
      puStack_58 = puVar5;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101496610);
        (*pcVar1)();
      }
      FUN_101497d70(&puStack_58,*param_1,param_3,FUN_1014987f4);
      puVar5 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1014965b0;
      lVar6 = param_3[1];
      lVar8 = lVar20;
    } while (lVar20 < lVar6);
  }
  puVar5 = puStack_58;
  lVar6 = *param_1;
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101496618);
    (*pcVar1)();
  }
  puVar3 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar3 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar21 = *(ulong *)(puVar5 + 0x10);
  while (puStack_58 = puVar5, 1 < uVar21) {
    lVar8 = *param_3;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101496614);
      (*pcVar1)();
    }
    lVar20 = uVar21 - 1;
    lVar9 = *(long *)(puVar5 + uVar21 * 0x10);
    lVar22 = *(long *)(puVar5 + lVar20 * 0x10 + 0x28);
    FUN_1014987f4(lVar8 + lVar9 * 8,lVar8 + *(long *)(puVar5 + lVar20 * 0x10 + 0x20) * 8,
                  lVar8 + lVar22 * 8,lVar6);
    if (unaff_x21 != 0) break;
    if (lVar22 < lVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965e0);
      (*pcVar1)();
    }
    puVar3 = puVar5;
    func_0x000107c61558();
    if (((ulong)puVar3 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar5 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014965e4);
      (*pcVar1)();
    }
    *(long *)(puVar5 + uVar21 * 0x10) = lVar9;
    *(long *)((long)(puVar5 + uVar21 * 0x10) + 8) = lVar22;
    puStack_58 = puVar5;
    func_0x0001000a97cc(lVar20);
    puVar5 = puStack_58;
    uVar21 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1014965b0:
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 101496618; end: 10149697f;  */

void FUN_101496618(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101496954);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101496974);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101496950);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101496958);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10149695c);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101496960);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101496940);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101496978);
        (*pcVar2)();
      }
      FUN_101497890(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101496910;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101496980);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10149697c);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_101498a0c(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101496944);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101496948);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10149694c);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_101496910:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 101496980; end: 101496d37;  */

void FUN_101496980(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long unaff_x21;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = puStack_58;
      lVar23 = lVar10 + 1;
      if (lVar23 < lVar8) {
        lVar11 = *param_3;
        uVar15 = *(ulong *)(lVar11 + lVar23 * 0x40);
        puVar21 = (ulong *)(lVar11 + lVar10 * 0x40);
        uVar18 = *puVar21;
        puVar21 = puVar21 + 0x10;
        lVar16 = lVar10 + 2;
        uVar22 = uVar15;
        do {
          lVar17 = lVar16;
          lVar23 = lVar8;
          if (lVar8 == lVar17) break;
          uVar20 = *puVar21;
          bVar4 = uVar22 <= uVar20;
          puVar21 = puVar21 + 8;
          lVar16 = lVar17 + 1;
          uVar22 = uVar20;
          lVar23 = lVar17;
        } while (uVar15 < uVar18 != bVar4);
        if (uVar15 < uVar18) {
          if (lVar23 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d0c);
            (*pcVar3)();
          }
          if (lVar10 < lVar23) {
            puVar13 = (undefined8 *)(lVar11 + lVar10 * 0x40);
            lVar16 = lVar23;
            lVar8 = lVar10;
            puVar2 = (undefined8 *)(lVar11 + lVar23 * 0x40);
            do {
              puVar9 = puVar2 + -8;
              lVar16 = lVar16 + -1;
              if (lVar8 != lVar16) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d2c);
                  (*pcVar3)();
                }
                uVar27 = puVar13[5];
                uVar26 = puVar13[4];
                uVar25 = puVar13[7];
                uVar24 = puVar13[6];
                uVar34 = puVar13[1];
                uVar32 = *puVar13;
                uVar30 = puVar13[3];
                uVar28 = puVar13[2];
                uVar36 = puVar2[-4];
                uVar38 = puVar2[-1];
                uVar37 = puVar2[-2];
                uVar42 = puVar2[-7];
                uVar41 = *puVar9;
                uVar40 = puVar2[-5];
                uVar39 = puVar2[-6];
                puVar13[5] = puVar2[-3];
                puVar13[4] = uVar36;
                puVar13[7] = uVar38;
                puVar13[6] = uVar37;
                puVar13[1] = uVar42;
                *puVar13 = uVar41;
                puVar13[3] = uVar40;
                puVar13[2] = uVar39;
                puVar2[-7] = uVar34;
                *puVar9 = uVar32;
                puVar2[-5] = uVar30;
                puVar2[-6] = uVar28;
                puVar2[-3] = uVar27;
                puVar2[-4] = uVar26;
                puVar2[-1] = uVar25;
                puVar2[-2] = uVar24;
              }
              lVar8 = lVar8 + 1;
              puVar13 = puVar13 + 8;
              puVar2 = puVar9;
            } while (lVar8 < lVar16);
            lVar8 = param_3[1];
          }
        }
      }
      lVar16 = lVar23;
      if (lVar23 < lVar8) {
        if (SBORROW8(lVar23,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d08);
          (*pcVar3)();
        }
        if (lVar23 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d10);
            (*pcVar3)();
          }
          lVar11 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar11 = lVar8;
          }
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d14);
            (*pcVar3)();
          }
          if (lVar23 != lVar11) {
            lVar12 = *param_3;
            puVar21 = (ulong *)(lVar12 + lVar23 * 0x40);
            lVar8 = lVar10 - lVar23;
            lVar17 = lVar8;
            puVar14 = puVar21;
LAB_101496b18:
            do {
              puVar19 = puVar21 + -8;
              if (*puVar21 < *puVar19) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d18);
                  (*pcVar3)();
                }
                uVar20 = puVar21[5];
                uVar18 = puVar21[4];
                uVar15 = puVar21[7];
                uVar22 = puVar21[6];
                uVar35 = puVar21[1];
                uVar33 = *puVar21;
                uVar31 = puVar21[3];
                uVar29 = puVar21[2];
                puVar21[1] = puVar21[-7];
                *puVar21 = *puVar19;
                puVar21[3] = puVar21[-5];
                puVar21[2] = puVar21[-6];
                puVar21[5] = puVar21[-3];
                puVar21[4] = puVar21[-4];
                puVar21[7] = puVar21[-1];
                puVar21[6] = puVar21[-2];
                puVar21[-7] = uVar35;
                *puVar19 = uVar33;
                puVar21[-5] = uVar31;
                puVar21[-6] = uVar29;
                puVar21[-3] = uVar20;
                puVar21[-4] = uVar18;
                puVar21[-1] = uVar15;
                puVar21[-2] = uVar22;
                bVar4 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                puVar21 = puVar21 + -8;
                if (bVar4) goto LAB_101496b18;
              }
              lVar23 = lVar23 + 1;
              puVar21 = puVar14 + 8;
              lVar8 = lVar17 + -1;
              lVar16 = lVar11;
              lVar17 = lVar8;
              puVar14 = puVar21;
            } while (lVar23 != lVar11);
          }
        }
      }
      if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101496cf8);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar22 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar22) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar22 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar22 + 1;
      *(long *)(puVar7 + uVar22 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar22 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d30);
        (*pcVar3)();
      }
      FUN_101497b00(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101496cc8;
      lVar8 = param_3[1];
      lVar10 = lVar16;
    } while (lVar16 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d38);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar21 = (ulong *)(puVar7 + 0x10);
  uVar22 = *puVar21;
  while (1 < uVar22) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d34);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar22 * 0x10);
    lVar23 = *plVar1;
    puVar14 = puVar21 + uVar22 * 2;
    uVar15 = puVar14[1];
    FUN_101498c14(lVar10 + lVar23 * 0x40,lVar10 + *puVar14 * 0x40,lVar10 + uVar15 * 0x40,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101496cfc);
      (*pcVar3)();
    }
    if (*puVar21 <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d00);
      (*pcVar3)();
    }
    *plVar1 = lVar23;
    plVar1[1] = uVar15;
    uVar15 = *puVar21;
    lVar10 = uVar15 - uVar22;
    if (uVar15 < uVar22) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101496d04);
      (*pcVar3)();
    }
    uVar22 = uVar15 - 1;
    func_0x000107c610b8(puVar14,puVar14 + 2,lVar10 * 0x10);
    *puVar21 = uVar22;
  }
LAB_101496cc8:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 101496d38; end: 1014970d3;  */

void FUN_101496d38(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x21;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = param_3[1];
  if (0 < lVar6) {
    lVar8 = 0;
    do {
      puVar5 = puStack_58;
      lVar22 = lVar8 + 1;
      if (lVar22 < lVar6) {
        lVar9 = *param_3;
        uVar10 = *(ulong *)(*(long *)(lVar9 + lVar22 * 8) + 0x28);
        uVar13 = *(ulong *)(*(long *)(lVar9 + lVar8 * 8) + 0x28);
        lVar20 = lVar8 + 2;
        uVar21 = uVar10;
        do {
          lVar14 = lVar20;
          lVar22 = lVar6;
          if (lVar6 == lVar14) break;
          uVar18 = *(ulong *)(*(long *)(lVar9 + lVar14 * 8) + 0x28);
          bVar2 = uVar18 <= uVar21;
          lVar20 = lVar14 + 1;
          uVar21 = uVar18;
          lVar22 = lVar14;
        } while (uVar13 < uVar10 != bVar2);
        if (uVar13 < uVar10) {
          if (lVar22 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970a8);
            (*pcVar1)();
          }
          if (lVar8 < lVar22) {
            puVar7 = (undefined8 *)(lVar9 + lVar22 * 8);
            puVar11 = (undefined8 *)(lVar9 + lVar8 * 8);
            lVar20 = lVar22;
            lVar6 = lVar8;
            do {
              puVar7 = puVar7 + -1;
              lVar20 = lVar20 + -1;
              if (lVar6 != lVar20) {
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970c8);
                  (*pcVar1)();
                }
                uVar16 = *puVar11;
                *puVar11 = *puVar7;
                *puVar7 = uVar16;
              }
              lVar6 = lVar6 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar6 < lVar20);
            lVar6 = param_3[1];
          }
        }
      }
      lVar20 = lVar22;
      if (lVar22 < lVar6) {
        if (SBORROW8(lVar22,lVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970a4);
          (*pcVar1)();
        }
        if (lVar22 - lVar8 < param_4) {
          if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970ac);
            (*pcVar1)();
          }
          lVar9 = lVar8 + param_4;
          if (lVar6 <= lVar8 + param_4) {
            lVar9 = lVar6;
          }
          if (lVar9 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970b0);
            (*pcVar1)();
          }
          if (lVar22 != lVar9) {
            lVar6 = *param_3;
            plVar12 = (long *)(lVar6 + lVar22 * 8 + -8);
            lVar14 = lVar8 - lVar22;
            do {
              lVar15 = *(long *)(lVar6 + lVar22 * 8);
              lVar20 = lVar14;
              plVar17 = plVar12;
              do {
                lVar19 = *plVar17;
                if (*(ulong *)(lVar15 + 0x28) <= *(ulong *)(lVar19 + 0x28)) break;
                if (lVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970b4);
                  (*pcVar1)();
                }
                *plVar17 = lVar15;
                plVar17[1] = lVar19;
                bVar2 = lVar20 != -1;
                lVar20 = lVar20 + 1;
                plVar17 = plVar17 + -1;
              } while (bVar2);
              lVar22 = lVar22 + 1;
              plVar12 = plVar12 + 1;
              lVar14 = lVar14 + -1;
              lVar20 = lVar9;
            } while (lVar22 != lVar9);
          }
        }
      }
      if (lVar20 < lVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101497098);
        (*pcVar1)();
      }
      puVar3 = puStack_58;
      func_0x000107c61558();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar21 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar21) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        func_0x0001000a91e0(puVar5,uVar21 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar21 + 1;
      *(long *)(puVar5 + uVar21 * 0x10 + 0x20) = lVar8;
      *(long *)(puVar5 + uVar21 * 0x10 + 0x28) = lVar20;
      puStack_58 = puVar5;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970cc);
        (*pcVar1)();
      }
      FUN_101497d70(&puStack_58,*param_1,param_3,FUN_101498e44);
      puVar5 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10149706c;
      lVar6 = param_3[1];
      lVar8 = lVar20;
    } while (lVar20 < lVar6);
  }
  puVar5 = puStack_58;
  lVar6 = *param_1;
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970d4);
    (*pcVar1)();
  }
  puVar3 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar3 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar21 = *(ulong *)(puVar5 + 0x10);
  while (puStack_58 = puVar5, 1 < uVar21) {
    lVar8 = *param_3;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970d0);
      (*pcVar1)();
    }
    lVar20 = uVar21 - 1;
    lVar9 = *(long *)(puVar5 + uVar21 * 0x10);
    lVar22 = *(long *)(puVar5 + lVar20 * 0x10 + 0x28);
    FUN_101498e44(lVar8 + lVar9 * 8,lVar8 + *(long *)(puVar5 + lVar20 * 0x10 + 0x20) * 8,
                  lVar8 + lVar22 * 8,lVar6);
    if (unaff_x21 != 0) break;
    if (lVar22 < lVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10149709c);
      (*pcVar1)();
    }
    puVar3 = puVar5;
    func_0x000107c61558();
    if (((ulong)puVar3 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar5 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014970a0);
      (*pcVar1)();
    }
    *(long *)(puVar5 + uVar21 * 0x10) = lVar9;
    *(long *)((long)(puVar5 + uVar21 * 0x10) + 8) = lVar22;
    puStack_58 = puVar5;
    func_0x0001000a97cc(lVar20);
    puVar5 = puStack_58;
    uVar21 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10149706c:
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 1014970d4; end: 1014972ff;  */

void FUN_1014970d4(long param_1,long param_2,long param_3,code *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  code *pcStack_90;
  ulong uStack_88;
  long lStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0;
  pcStack_78 = param_4;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puStack_98 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_88 = lVar6 - extraout_x12_00;
  if (param_3 != param_2) {
    lStack_a0 = *unaff_x20;
    lStack_d8 = *(long *)(lVar8 + 0x48);
    pcStack_90 = *(code **)(lVar8 + 0x10);
    lVar6 = lStack_a0 + lStack_d8 * (param_3 + -1);
    lStack_a8 = -lStack_d8;
    lStack_70 = param_1 - param_3;
    lVar7 = lStack_a0 + lStack_d8 * param_3;
    lStack_d0 = param_2;
    lStack_c8 = lVar7;
    lStack_c0 = lStack_70;
    lStack_b8 = lVar6;
    lStack_b0 = param_3;
    lStack_68 = lVar4;
LAB_1014971fc:
    do {
      uVar2 = uStack_88;
      pcVar9 = pcStack_90;
      (*pcStack_90)(uStack_88,lVar7,lVar4);
      lVar3 = lStack_80;
      (*pcVar9)(lStack_80,lVar6,lStack_68);
      uVar5 = uVar2;
      (*pcStack_78)(uVar2,lVar3);
      lVar4 = lStack_68;
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar3,lStack_68);
      (*pcVar9)(uVar2,lVar4);
      lVar3 = lStack_70;
      puVar1 = puStack_98;
      if (unaff_x21 != 0) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        if (lStack_a0 == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x101497300);
          (*pcVar9)();
        }
        pcVar9 = *(code **)(lVar8 + 0x20);
        (*pcVar9)(puStack_98,lVar7,lVar4);
        func_0x000107c61414(lVar7,lVar6,1,lVar4);
        (*pcVar9)(lVar6,puVar1,lVar4);
        lVar6 = lVar6 + lStack_a8;
        lVar7 = lVar7 + lStack_a8;
        lStack_70 = lVar3 + 1;
        if (lVar3 != -1) goto LAB_1014971fc;
      }
      lStack_b0 = lStack_b0 + 1;
      lVar6 = lStack_b8 + lStack_d8;
      lStack_70 = lStack_c0 + -1;
      lVar7 = lStack_c8 + lStack_d8;
      lStack_c8 = lVar7;
      lStack_c0 = lStack_70;
      lStack_b8 = lVar6;
    } while (lStack_b0 != lStack_d0);
  }
  return;
}



/* Entry: 101497300; end: 101497393;  */

void FUN_101497300(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x28 + -0x28);
    param_1 = param_1 - param_3;
    do {
      uVar7 = *(ulong *)(lVar5 + param_3 * 0x28);
      lVar8 = param_1;
      puVar9 = puVar6;
      do {
        if (*puVar9 <= uVar7) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101497394);
          (*pcVar2)();
        }
        uVar11 = puVar9[7];
        uVar10 = puVar9[6];
        uVar1 = puVar9[8];
        puVar9[6] = puVar9[1];
        puVar9[5] = *puVar9;
        puVar9[8] = puVar9[3];
        puVar9[7] = puVar9[2];
        uVar4 = puVar9[4];
        *puVar9 = uVar7;
        puVar9[2] = uVar11;
        puVar9[1] = uVar10;
        puVar9[3] = uVar1;
        puVar9[4] = puVar9[9];
        puVar9[9] = uVar4;
        bVar3 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + -5;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 5;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101497394; end: 10149761b;  */

undefined8 FUN_101497394(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar9 = *param_1;
  if (1 < *(ulong *)(uVar9 + 0x10)) {
    uVar5 = uVar9;
    func_0x000107c61558();
    if ((uVar5 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar9;
    uVar5 = *(ulong *)(uVar9 + 0x10);
    do {
      lVar10 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar9 + 0x28),*(long *)(uVar9 + 0x20));
          lVar6 = *(long *)(uVar9 + 0x28) - *(long *)(uVar9 + 0x20);
          goto LAB_10149746c;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101497604);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar3 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_1014974d0:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975f4);
          (*pcVar2)();
        }
        lVar6 = uVar9 + lVar10 * 0x10;
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975fc);
          (*pcVar2)();
        }
        lVar11 = lVar10;
        if (lVar6 - lVar4 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar9 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975dc);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975e0);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar4 = *plVar1;
        lVar11 = plVar1[1];
        lVar8 = lVar11 - lVar4;
        if (SBORROW8(lVar11,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975e8);
          (*pcVar2)();
        }
        if (SCARRY8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975f0);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar6 + lVar8 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_10149746c:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975e4);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + uVar5 * 0x10);
          lVar4 = *plVar1;
          lVar11 = plVar1[1];
          lVar7 = lVar11 - lVar4;
          if (SBORROW8(lVar11,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975ec);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
          lVar4 = *plVar1;
          lVar11 = plVar1[1];
          lVar8 = lVar11 - lVar4;
          if (SBORROW8(lVar11,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975f8);
            (*pcVar2)();
          }
          if (SCARRY8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101497600);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar7 + lVar8 < lVar6) goto LAB_1014974d0;
          lVar11 = uVar5 - 2;
          if (lVar8 <= lVar6) {
            lVar11 = lVar10;
          }
        }
        else {
          plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
          lVar7 = *plVar1;
          lVar4 = plVar1[1];
          if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101497608);
            (*pcVar2)();
          }
          lVar11 = uVar5 - 2;
          if (lVar4 - lVar7 <= lVar6) {
            lVar11 = lVar10;
          }
        }
      }
      uVar12 = lVar11 - 1;
      if (uVar5 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975d0);
        (*pcVar2)();
      }
      lVar10 = *unaff_x20;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10149761c);
        (*pcVar2)();
      }
      lVar8 = *(long *)(uVar9 + 0x20 + uVar12 * 0x10);
      plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
      lVar6 = *plVar1;
      lVar7 = plVar1[1];
      lVar4 = 0;
      func_0x000107c5ede0();
      lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
      FUN_101497fe0(lVar10 + lVar4 * lVar8,lVar10 + lVar4 * lVar6,lVar10 + lVar4 * lVar7,param_2,
                    param_3,param_4);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975d4);
        (*pcVar2)();
      }
      uVar5 = uVar9;
      func_0x000107c61558();
      if ((uVar5 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014975d8);
        (*pcVar2)();
      }
      lVar10 = uVar9 + uVar12 * 0x10;
      *(long *)(lVar10 + 0x20) = lVar8;
      *(long *)(lVar10 + 0x28) = lVar7;
      *param_1 = uVar9;
      func_0x0001000a97cc(lVar11);
      uVar9 = *param_1;
      uVar5 = *(ulong *)(uVar9 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Entry: 10149761c; end: 10149788f;  */

undefined8 FUN_10149761c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_1014976f4;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497870);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101497754:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497860);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497868);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497848);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10149784c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497854);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10149785c);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1014976f4:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497850);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497858);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497864);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10149786c);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101497754;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497874);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497838);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497890);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_1014985a4(lVar8 + lVar12 * 0x28,lVar8 + *plVar3 * 0x28,lVar8 + lVar9 * 0x28,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10149783c);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497840);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497844);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 101497890; end: 101497aff;  */

undefined8 FUN_101497890(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_101497968;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ae0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1014979c8:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ad0);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ad8);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ab8);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497abc);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ac4);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497acc);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101497968:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ac0);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ac8);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ad4);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497adc);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1014979c8;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ae4);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497aa8);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497b00);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_101498a0c(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497aac);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ab0);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497ab4);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 101497b00; end: 101497d6f;  */

undefined8 FUN_101497b00(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_101497bd8;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d50);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101497c38:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d40);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d48);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d28);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d2c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d34);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d3c);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101497bd8:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d30);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d38);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d44);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d4c);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101497c38;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d54);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d18);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d70);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_101498c14(lVar8 + lVar11 * 0x40,lVar8 + *plVar3 * 0x40,lVar8 + lVar9 * 0x40,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d1c);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d20);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101497d24);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 101497d70; end: 101497fdf;  */

undefined8 FUN_101497d70(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101497e48;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fc8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101497eac:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fb8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fc0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fa0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fa4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fac);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fb4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101497e48:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fa8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fb0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fbc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fc4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101497eac;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fcc);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101497f94);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101497fe0);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      (*param_4)(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101497f98);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101497f9c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101497fe0; end: 1014985a3;  */

undefined8
FUN_101497fe0(code *param_1,code *param_2,code *param_3,code *param_4,code *param_5,
             undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  code *extraout_x14;
  undefined1 *extraout_x15;
  code *pcVar6;
  code *pcVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined1 *puStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_58;
  
  lVar2 = 0;
  pcStack_88 = param_5;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = (long)(auStack_e0 +
                ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00)) -
          extraout_x12_01;
  pcStack_98 = *(code **)(extraout_x13 + 0x48);
  if (pcStack_98 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10149859c);
    (*pcVar10)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) &&
     (pcStack_98 == (code *)0xffffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1014985a0);
    (*pcVar10)();
  }
  if (((long)param_3 - (long)param_2 == -0x8000000000000000) &&
     (pcStack_98 == (code *)0xffffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1014985a4);
    (*pcVar10)();
  }
  lVar8 = 0;
  if (pcStack_98 != (code *)0x0) {
    lVar8 = ((long)param_2 - (long)param_1) / (long)pcStack_98;
  }
  lVar9 = 0;
  if (pcStack_98 != (code *)0x0) {
    lVar9 = ((long)param_3 - (long)param_2) / (long)pcStack_98;
  }
  lStack_80 = extraout_x13;
  pcStack_68 = param_4;
  pcStack_58 = param_1;
  if (lVar8 < lVar9) {
    lVar9 = lVar8 * (long)pcStack_98;
    if ((param_4 < param_1) || (param_1 + lVar9 <= param_4)) {
      uStack_90 = param_6;
      func_0x000107c61414(param_4,param_1,lVar8,lVar2);
    }
    else {
      uStack_90 = param_6;
      if (param_4 != param_1) {
        func_0x000107c61410(param_4,param_1,lVar8,lVar2);
      }
    }
    pcStack_a0 = param_4 + lVar9;
    pcStack_70 = pcStack_a0;
    if (0 < lVar9 && param_2 < param_3) {
      pcStack_b0 = *(code **)(lStack_80 + 0x10);
      pcStack_c8 = param_3;
      puStack_a8 = auStack_e0 +
                   ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
      while( true ) {
        pcVar10 = pcStack_b0;
        (*pcStack_b0)(uVar5,param_2,lVar2);
        puVar1 = puStack_a8;
        (*pcVar10)(puStack_a8,param_4,lVar2);
        uVar4 = uVar5;
        (*pcStack_88)(uVar5,puVar1);
        if (unaff_x21 != 0) break;
        pcVar10 = *(code **)(lStack_80 + 8);
        lStack_78 = unaff_x21;
        (*pcVar10)(puVar1,lVar2);
        (*pcVar10)(uVar5,lVar2);
        pcVar10 = pcStack_c8;
        if ((uVar4 & 1) == 0) {
          pcVar11 = param_4 + (long)pcStack_98;
          pcVar7 = param_2;
          pcVar6 = pcVar11;
          if ((param_1 < param_4) || (pcVar11 <= param_1)) {
            func_0x000107c61414(param_1,param_4,1,lVar2);
            pcVar10 = pcStack_c8;
          }
          else if (param_1 != param_4) {
            func_0x000107c61410(param_1,param_4,1,lVar2);
            pcVar10 = pcStack_c8;
          }
        }
        else {
          pcVar7 = param_2 + (long)pcStack_98;
          pcVar11 = param_4;
          if ((param_1 < param_2) || (pcVar7 <= param_1)) {
            func_0x000107c61414(param_1,param_2,1,lVar2);
            pcVar10 = pcStack_c8;
            pcVar6 = pcStack_68;
          }
          else {
            pcVar6 = pcStack_68;
            if (param_1 != param_2) {
              func_0x000107c61410(param_1,param_2,1,lVar2);
              pcVar6 = pcStack_68;
            }
          }
        }
        pcStack_68 = pcVar6;
        param_1 = param_1 + (long)pcStack_98;
        pcStack_58 = param_1;
        if ((pcStack_a0 <= pcVar11) ||
           (param_2 = pcVar7, unaff_x21 = lStack_78, param_4 = pcVar11, pcVar10 <= pcVar7))
        goto LAB_101498560;
      }
      pcVar10 = *(code **)(lStack_80 + 8);
      (*pcVar10)(puVar1,lVar2);
      (*pcVar10)(uVar5,lVar2);
    }
  }
  else {
    lVar8 = lVar9 * (long)pcStack_98;
    puStack_a8 = extraout_x15;
    pcStack_a0 = extraout_x14;
    if ((param_4 < param_2) || (param_2 + lVar8 <= param_4)) {
      func_0x000107c61414(param_4,param_2,lVar9,lVar2);
    }
    else if (param_4 != param_2) {
      func_0x000107c61410(param_4,param_2,lVar9,lVar2);
    }
    pcStack_70 = param_4 + lVar8;
    pcStack_58 = param_2;
    if (0 < lVar8 && param_1 < param_2) {
      lVar8 = -(long)pcStack_98;
      pcStack_b8 = *(code **)(lStack_80 + 0x10);
      pcStack_98 = pcStack_70;
      pcStack_d8 = param_1;
      lStack_d0 = lVar8;
      pcStack_c0 = param_4;
      uStack_90 = param_6;
      do {
        pcStack_b0 = param_2 + lVar8;
        pcVar10 = pcStack_98;
        pcVar7 = param_3;
        pcStack_c8 = param_2;
        pcStack_58 = param_2;
        while( true ) {
          puVar1 = puStack_a8;
          pcVar6 = pcStack_b8;
          pcVar11 = pcVar10 + lVar8;
          pcStack_98 = pcVar10;
          lStack_78 = unaff_x21;
          (*pcStack_b8)(puStack_a8,pcVar11,lVar2);
          pcVar10 = pcStack_a0;
          (*pcVar6)(pcStack_a0,pcStack_b0,lVar2);
          puVar3 = puVar1;
          (*pcStack_88)(puVar1,pcVar10);
          if (lStack_78 != 0) {
            pcVar7 = *(code **)(lStack_80 + 8);
            (*pcVar7)(pcVar10,lVar2);
            (*pcVar7)(puVar1,lVar2);
            goto LAB_101498560;
          }
          param_3 = pcVar7 + lVar8;
          pcVar6 = *(code **)(lStack_80 + 8);
          (*pcVar6)(pcVar10,lVar2);
          (*pcVar6)(puVar1,lVar2);
          param_2 = pcStack_b0;
          lVar8 = lStack_d0;
          if (((ulong)puVar3 & 1) != 0) break;
          pcStack_70 = pcVar11;
          if ((pcVar7 < pcStack_98) || (pcStack_98 <= param_3)) {
            func_0x000107c61414(param_3,pcVar11,1,lVar2);
            lVar8 = lStack_d0;
          }
          else if (pcVar7 != pcStack_98) {
            func_0x000107c61410(param_3,pcVar11,1,lVar2);
          }
          pcVar10 = pcVar11;
          unaff_x21 = lStack_78;
          pcVar7 = param_3;
          if (pcVar11 <= pcStack_c0) goto LAB_101498560;
        }
        if ((pcVar7 < pcStack_c8) || (pcStack_c8 <= param_3)) {
          func_0x000107c61414(param_3,pcStack_b0,1,lVar2);
          lVar8 = lStack_d0;
        }
        else if (pcVar7 != pcStack_c8) {
          func_0x000107c61410(param_3,pcStack_b0,1,lVar2);
        }
        pcStack_58 = param_2;
      } while ((pcStack_c0 < pcStack_98) && (unaff_x21 = lStack_78, pcStack_d8 < param_2));
    }
  }
LAB_101498560:
  FUN_10149905c(&pcStack_58,&pcStack_68,&pcStack_70);
  return 1;
}



/* Entry: 1014985a4; end: 1014987f3;  */

undefined8 FUN_1014985a4(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x28;
  lVar2 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 5 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x28);
    }
    puVar4 = param_4 + lVar1 * 5;
    puVar6 = param_1;
    if (0x27 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (*param_2 < *param_4) {
          puVar7 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 5;
        }
        else {
          puVar7 = param_4 + 5;
          puVar3 = param_4;
        }
        param_4 = puVar7;
        if (puVar6 != puVar3) {
          uVar9 = puVar3[1];
          uVar8 = *puVar3;
          uVar11 = puVar3[3];
          uVar10 = puVar3[2];
          puVar6[4] = puVar3[4];
          puVar6[1] = uVar9;
          *puVar6 = uVar8;
          puVar6[3] = uVar11;
          puVar6[2] = uVar10;
        }
        puVar6 = puVar6 + 5;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x28);
    }
    puVar3 = param_4 + lVar2 * 5;
    puVar4 = puVar3;
    puVar6 = param_2;
    if ((param_1 < param_2) && (0x27 < (long)param_3 - (long)param_2)) {
      do {
        puVar5 = param_2 + -5;
        puVar7 = param_3;
        while( true ) {
          param_3 = puVar7 + -5;
          puVar4 = puVar3 + -5;
          if (*puVar4 < *puVar5) break;
          if (puVar7 != puVar3) {
            uVar9 = puVar3[-4];
            uVar8 = *puVar4;
            uVar11 = puVar3[-2];
            uVar10 = puVar3[-3];
            puVar7[-1] = puVar3[-1];
            puVar7[-4] = uVar9;
            *param_3 = uVar8;
            puVar7[-2] = uVar11;
            puVar7[-3] = uVar10;
          }
          puVar3 = puVar4;
          puVar6 = param_2;
          puVar7 = param_3;
          if (puVar4 <= param_4) goto LAB_101498790;
        }
        if (puVar7 != param_2) {
          uVar9 = param_2[-4];
          uVar8 = *puVar5;
          uVar11 = param_2[-2];
          uVar10 = param_2[-3];
          puVar7[-1] = param_2[-1];
          puVar7[-4] = uVar9;
          *param_3 = uVar8;
          puVar7[-2] = uVar11;
          puVar7[-3] = uVar10;
        }
        puVar4 = puVar3;
        puVar6 = puVar5;
      } while ((param_1 < puVar5) && (param_2 = puVar5, param_4 < puVar3));
    }
  }
LAB_101498790:
  lVar1 = ((long)puVar4 - (long)param_4) / 0x28;
  if ((puVar6 != param_4) || (param_4 + lVar1 * 5 <= puVar6)) {
    func_0x000107c610b8(puVar6,param_4,lVar1 * 0x28);
  }
  return 1;
}



/* Entry: 1014987f4; end: 101498a0b;  */

undefined8 FUN_1014987f4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*(ulong *)(*param_4 + 0x20) < *(ulong *)(lVar2 + 0x20)) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*(ulong *)(*plVar7 + 0x20) < *(ulong *)(*plVar5 + 0x20)) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_1014989b0;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_1014989b0:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101498a0c; end: 101498c13;  */

undefined8 FUN_101498a0c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (lVar2 < *param_4) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*plVar5 < *plVar7) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_101498bb8;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_101498bb8:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101498c14; end: 101498e43;  */

undefined8 FUN_101498c14(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar1 = lVar9 + 0x3f;
  if (-1 < lVar9) {
    lVar1 = lVar9;
  }
  lVar1 = lVar1 >> 6;
  lVar10 = (long)param_3 - (long)param_2;
  lVar5 = lVar10 + 0x3f;
  if (-1 < lVar10) {
    lVar5 = lVar10;
  }
  lVar5 = lVar5 >> 6;
  if (lVar1 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 8 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 6);
    }
    puVar4 = param_4 + lVar1 * 8;
    puVar7 = param_1;
    if (0x3f < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if (*param_2 < *param_4) {
          puVar8 = param_4;
          puVar2 = param_2;
          param_2 = param_2 + 8;
        }
        else {
          puVar8 = param_4 + 8;
          puVar2 = param_4;
        }
        param_4 = puVar8;
        if (puVar7 != puVar2) {
          uVar3 = puVar2[1];
          uVar11 = *puVar2;
          uVar13 = puVar2[3];
          uVar12 = puVar2[2];
          uVar14 = puVar2[4];
          uVar16 = puVar2[7];
          uVar15 = puVar2[6];
          puVar7[5] = puVar2[5];
          puVar7[4] = uVar14;
          puVar7[7] = uVar16;
          puVar7[6] = uVar15;
          puVar7[1] = uVar3;
          *puVar7 = uVar11;
          puVar7[3] = uVar13;
          puVar7[2] = uVar12;
        }
        puVar7 = puVar7 + 8;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 8 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 6);
    }
    puVar2 = param_4 + lVar5 * 8;
    puVar4 = puVar2;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0x3f < lVar10)) {
      do {
        puVar6 = param_2 + -8;
        puVar8 = param_3;
        while( true ) {
          param_3 = puVar8 + -8;
          puVar4 = puVar2 + -8;
          if (*puVar4 < *puVar6) break;
          if (puVar8 != puVar2) {
            uVar3 = puVar2[-7];
            uVar11 = *puVar4;
            uVar13 = puVar2[-5];
            uVar12 = puVar2[-6];
            uVar14 = puVar2[-4];
            uVar16 = puVar2[-1];
            uVar15 = puVar2[-2];
            puVar8[-3] = puVar2[-3];
            puVar8[-4] = uVar14;
            puVar8[-1] = uVar16;
            puVar8[-2] = uVar15;
            puVar8[-7] = uVar3;
            *param_3 = uVar11;
            puVar8[-5] = uVar13;
            puVar8[-6] = uVar12;
          }
          puVar2 = puVar4;
          puVar7 = param_2;
          puVar8 = param_3;
          if (puVar4 <= param_4) goto LAB_101498de8;
        }
        if (puVar8 != param_2) {
          uVar3 = param_2[-7];
          uVar11 = *puVar6;
          uVar13 = param_2[-5];
          uVar12 = param_2[-6];
          uVar14 = param_2[-4];
          uVar16 = param_2[-1];
          uVar15 = param_2[-2];
          puVar8[-3] = param_2[-3];
          puVar8[-4] = uVar14;
          puVar8[-1] = uVar16;
          puVar8[-2] = uVar15;
          puVar8[-7] = uVar3;
          *param_3 = uVar11;
          puVar8[-5] = uVar13;
          puVar8[-6] = uVar12;
        }
        puVar4 = puVar2;
        puVar7 = puVar6;
      } while ((param_1 < puVar6) && (param_2 = puVar6, param_4 < puVar2));
    }
  }
LAB_101498de8:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar11 = uVar3 + 0x3f;
  if (-1 < (long)uVar3) {
    uVar11 = uVar3;
  }
  if ((puVar7 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xffffffffffffffc0)) <= puVar7)) {
    func_0x000107c610b8(puVar7,param_4,((long)uVar11 >> 6) << 6);
  }
  return 1;
}



/* Entry: 101498e44; end: 10149905b;  */

undefined8 FUN_101498e44(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*(ulong *)(*param_4 + 0x28) < *(ulong *)(lVar2 + 0x28)) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*(ulong *)(*plVar7 + 0x28) < *(ulong *)(*plVar5 + 0x28)) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_101499000;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_101499000:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10149905c; end: 10149910b;  */

void FUN_10149905c(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101499108);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_arrayInitWithTakeBackToFront_11034f240)(uVar6,uVar5);
        return;
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_arrayInitWithTakeFrontToBack_11034f248)(uVar6,uVar5,lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10149910c);
  (*pcVar2)();
}



/* Entry: 10149910c; end: 10149917f;  */

void FUN_10149910c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101499180();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101499180; end: 10149944b;  */

undefined * FUN_101499180(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014992fc);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d55580;
    func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014992f4);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014992f8);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 10149944c; end: 1014998a7;  */

undefined *
FUN_10149944c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101499560);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1014998a8; end: 1014999df;  */

code * FUN_1014998a8(code *param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014999e0);
        (*pcVar3)();
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
  pcVar4 = param_1;
  pcVar3 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar3 = param_5;
    FUN_10149499c(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar4 = pcVar3;
    func_0x000107c610a4();
    pcVar1 = pcVar4 + -0x19;
    if (0x1f < (long)pcVar4) {
      pcVar1 = pcVar4 + -0x20;
    }
    *(ulong *)(pcVar3 + 0x10) = uVar6;
    *(ulong *)(pcVar3 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar3 + 0x20;
  pcVar2 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    (*param_5)();
    func_0x000107c6140c(pcVar1,pcVar2,uVar6,pcVar4);
  }
  else {
    if (pcVar3 != param_4 || pcVar2 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar2,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar3;
}



/* Entry: 1014999e0; end: 101499ae7;  */

undefined * FUN_1014999e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101499ae8);
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
    puVar3 = (undefined *)0x112da2ff0;
    func_0x0001000285a8(0x112da2ff0,&UNK_10d947430);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSJN_11034d818);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101499ae8; end: 101499bdb;  */

undefined8
FUN_101499ae8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60688();
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(lVar5 + 0x30) + uVar1 * 8) == param_2) {
        uVar2 = 0;
        goto LAB_101499bbc;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  lVar3 = *unaff_x20;
  FUN_101499bdc(param_2,uVar1,lVar5,param_3,param_4,param_5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_101499bbc:
  *param_1 = param_2;
  return uVar2;
}



/* Entry: 101499bdc; end: 101499cf7;  */

void FUN_101499bdc(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_101499ee0(param_4,param_5);
    }
  }
  else {
    lVar4 = uVar3 + 1;
    if ((param_3 & 1) == 0) {
      FUN_101499cf8(lVar4,param_4,param_5);
    }
    else {
      FUN_10149a010(lVar4,param_4,param_5);
    }
    lVar4 = *unaff_x20;
    param_2 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(param_2,param_1);
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == param_1) {
          func_0x000107c60620(param_6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101499cf8);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(long *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101499cec);
  (*pcVar1)();
}



/* Entry: 101499cf8; end: 101499edf;  */

void FUN_101499cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_2,param_3);
  lVar4 = lVar11;
  func_0x000107c602e0(lVar11,lVar1,0,param_2);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101499eb0:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar11 + 0x38);
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101499edc);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_101499eb0;
        uVar14 = ((ulong *)(lVar11 + 0x38))[lVar13];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar7;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar12);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101499ee0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar12;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Entry: 101499ee0; end: 10149a00f;  */

void FUN_101499ee0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8();
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10149a010);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101499ff0;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_101499ff0:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10149a010; end: 10149a22b;  */

void FUN_10149a010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_2,param_3);
  lVar4 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,param_2);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_10149a1f8:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  bVar10 = *(byte *)(lVar13 + 0x20) & 0x3f;
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = -1L << (uVar9 & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (bVar10 < 6) {
    uVar17 = ~uVar12;
  }
  uVar17 = uVar17 & *puVar14;
  uVar9 = uVar9 + 0x3f >> 6;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10149a228);
          (*pcVar3)();
        }
        if ((long)uVar9 <= lVar16) {
          if (bVar10 < 6) {
            *puVar14 = uVar12;
          }
          else {
            func_0x000107c60ee4(puVar14,uVar9 << 3);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_10149a1f8;
        }
        uVar17 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar17 == 0);
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar7;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar15);
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10149a22c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 10149a22c; end: 10149a25f;  */

void FUN_10149a22c(int param_1)

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



/* Entry: 10149a260; end: 10149a2c3;  */

void FUN_10149a260(int param_1,ulong param_2)

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



/* Entry: 10149a2c4; end: 10149a3f3;  */

void FUN_10149a2c4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_10149a22c();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10149a388);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_10149a810(lVar5);
    uVar2 = param_2;
    FUN_10149a22c();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10149a354);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00010149a544();
    lVar5 = *unaff_x20;
    goto joined_r0x00010149a39c;
  }
  lVar5 = *unaff_x20;
joined_r0x00010149a39c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(int *)(*(long *)(lVar5 + 0x30) + uVar2 * 4) = (int)param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10149a3f4);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10149a3f4; end: 10149a80f;  */

void FUN_10149a3f4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10149a4cc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x00010149aa78(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10149a494);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010149a6a0();
    lVar6 = *unaff_x20;
    goto joined_r0x00010149a4e0;
  }
  lVar6 = *unaff_x20;
joined_r0x00010149a4e0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10149a544);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10149a810; end: 10149ad13;  */

void FUN_10149a810(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112da2fb8;
  func_0x0001000285a8(0x112da2fb8,&UNK_10d9473f8);
  lVar5 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar14);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10149aa44:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10149aa74);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_10149aa44;
        }
        uVar16 = puVar13[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar15 << 6;
    uVar2 = *(undefined4 *)(*(long *)(lVar12 + 0x30) + uVar7 * 4);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar7 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c6157c(uVar14);
    }
    uVar6 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c60684(uVar6,uVar2,4);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10149aa78);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar3 = (bool)(uVar6 == uVar7 | bVar3);
        uVar6 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar7 * 4) = uVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 10149ad14; end: 10149ad4f;  */

void FUN_10149ad14(long param_1)

{
  func_0x000101499690(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112d5dfa8,&UNK_10d9473c0,
                      PTR__swift_bridgeObjectRelease_11034f258);
  return;
}



/* Entry: 10149ad50; end: 10149ae5b;  */

/* WARNING: Removing unreachable block (ram,0x00010149ae50) */

undefined1  [16]
FUN_10149ad50(undefined8 ***param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_100edab88();
  func_0x000107c61434(param_4);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSsN_11034e1d8;
  func_0x000107c5fbd4(pppuVar1,PTR___sSsN_11034e1d8,
                      PTR___sSss25LosslessStringConvertiblesWP_11034e1f0,param_1);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_10149ae5c(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    FUN_10149ae5c(pppuVar2,puVar4,param_5);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}


