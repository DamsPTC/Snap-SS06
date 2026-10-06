/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c67098; end: 101c6709b;  */

void FUN_101c67098(char param_1)

{
  long unaff_x20;
  char cStack_31;
  
  func_0x0001000d224c(&cStack_31);
  if (cStack_31 == '\x01') {
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    if (param_1 == '\x01') {
      func_0x000101c68204();
    }
    else {
      func_0x000101c67fb4(1);
    }
  }
  return;
}



/* Entry: 101c6709c; end: 101c672df;  */

void FUN_101c6709c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *aplStack_110 [5];
  long lStack_e8;
  undefined **ppuStack_e0;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar1 = 0;
  aplStack_110[1] = param_1;
  func_0x000101c685e4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  ppuStack_70 = &PTR_DAT_11045fc88;
  lVar3 = 0;
  alStack_90[0] = lVar2;
  lStack_78 = lVar1;
  func_0x000101c67790();
  func_0x000107c61534();
  func_0x0001000c6518(alStack_90,lVar1);
  lVar8 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
  puVar7 = (undefined8 *)((long)aplStack_110 - uVar9);
  pcVar6 = *(code **)(extraout_x8 + 0x10);
  (*pcVar6)(puVar7);
  uVar5 = *puVar7;
  *(long *)(lVar3 + 0x28) = lVar1;
  *(undefined ***)(lVar3 + 0x30) = &PTR_DAT_11045fc88;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(undefined8 *)(lVar3 + 0x38) = param_3;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(param_3);
  plVar4 = alStack_90;
  func_0x0001000834e4();
  FUN_101c67344();
  aplStack_110[0] = plVar4;
  func_0x000107c61588(lVar3);
  func_0x0001000834e4((undefined8 *)(lVar3 + 0x10));
  func_0x000107c61574(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c61574(*(undefined8 *)(lVar3 + 0x40));
  ppuStack_70 = &PTR_DAT_11045fc88;
  lVar3 = 0;
  alStack_90[0] = lVar2;
  lStack_78 = lVar1;
  func_0x000101c67078();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined8 *)((long)puVar7 - uVar9);
  (*pcVar6)(puVar7);
  aplStack_110[2] = (long *)*puVar7;
  ppuStack_e0 = &PTR_DAT_11045fc88;
  lStack_e8 = lVar1;
  FUN_101c672f8(aplStack_110 + 2,lVar3 + 0x10);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(param_3);
  pcVar6 = FUN_101c6733c;
  func_0x0001000bdd8c(FUN_101c6733c,param_3);
  func_0x0001000834e4(aplStack_110 + 2);
  *(code **)(lVar3 + 0x38) = pcVar6;
  func_0x0001000834e4(alStack_90);
  func_0x000100286b70(0);
  func_0x000107c610f8();
  plVar4 = aplStack_110[0];
  func_0x000101c68e40(aplStack_110[0],lVar3,&PTR_DAT_11045fc28);
  func_0x000107c61574(lVar2);
  *aplStack_110[1] = (long)plVar4;
  return;
}



/* Entry: 101c672e0; end: 101c672f7;  */

void FUN_101c672e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long *aplStack_110 [5];
  long lStack_e8;
  undefined **ppuStack_e0;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  aplStack_110[1] = param_1;
  func_0x000101c685e4();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  ppuStack_70 = &PTR_DAT_11045fc88;
  lVar5 = 0;
  alStack_90[0] = lVar4;
  lStack_78 = lVar3;
  func_0x000101c67790();
  func_0x000107c61534();
  func_0x0001000c6518(alStack_90,lVar3);
  lVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar10 + 0xfU & 0xfffffffffffffff0;
  puVar9 = (undefined8 *)((long)aplStack_110 - uVar11);
  pcVar8 = *(code **)(extraout_x8 + 0x10);
  (*pcVar8)(puVar9);
  uVar7 = *puVar9;
  *(long *)(lVar5 + 0x28) = lVar3;
  *(undefined ***)(lVar5 + 0x30) = &PTR_DAT_11045fc88;
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar2;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(lVar4);
  func_0x000107c6157c(uVar2);
  plVar6 = alStack_90;
  func_0x0001000834e4();
  FUN_101c67344();
  aplStack_110[0] = plVar6;
  func_0x000107c61588(lVar5);
  func_0x0001000834e4((undefined8 *)(lVar5 + 0x10));
  func_0x000107c61574(*(undefined8 *)(lVar5 + 0x38));
  func_0x000107c61574(*(undefined8 *)(lVar5 + 0x40));
  ppuStack_70 = &PTR_DAT_11045fc88;
  lVar5 = 0;
  alStack_90[0] = lVar4;
  lStack_78 = lVar3;
  func_0x000101c67078();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined8 *)((long)puVar9 - uVar11);
  (*pcVar8)(puVar9);
  aplStack_110[2] = (long *)*puVar9;
  ppuStack_e0 = &PTR_DAT_11045fc88;
  lStack_e8 = lVar3;
  FUN_101c672f8(aplStack_110 + 2,lVar5 + 0x10);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar4);
  func_0x000107c6157c(uVar2);
  pcVar8 = FUN_101c6733c;
  func_0x0001000bdd8c(FUN_101c6733c,uVar2);
  func_0x0001000834e4(aplStack_110 + 2);
  *(code **)(lVar5 + 0x38) = pcVar8;
  func_0x0001000834e4(alStack_90);
  func_0x000100286b70(0);
  func_0x000107c610f8();
  plVar6 = aplStack_110[0];
  func_0x000101c68e40(aplStack_110[0],lVar5,&PTR_DAT_11045fc28);
  func_0x000107c61574(lVar4);
  *aplStack_110[1] = (long)plVar6;
  return;
}



/* Entry: 101c672f8; end: 101c6733b;  */

long FUN_101c672f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101c6733c; end: 101c67343;  */

void FUN_101c6733c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f006c70);
  uVar2 = uStack_38;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  *param_1 = (char)uVar2;
  return;
}



/* Entry: 101c67344; end: 101c67507;  */

long FUN_101c67344(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    func_0x000101c673a0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x40) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 101c67508; end: 101c67757;  */

void FUN_101c67508(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  
  uVar13 = *param_2;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c67d48();
  *param_1 = puVar4;
  if (uVar13 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar15 = uVar13;
    }
    func_0x000107c60480();
  }
  if (uVar15 != 0) {
    lVar14 = 4;
    do {
      plVar12 = (long *)(lVar14 + -4);
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(long **)((uVar13 & 0xffffffffffffff8) + 0x10) <= plVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101c67710);
          (*pcVar3)();
        }
        plVar16 = *(long **)(uVar13 + lVar14 * 8);
        plVar5 = plVar16;
        func_0x000107c6157c();
        uVar8 = param_3;
      }
      else {
        plVar16 = plVar12;
        uVar8 = uVar13;
        FUN_101c677b0();
        plVar5 = plVar16;
      }
      if (SCARRY8((long)plVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101c67704);
        (*pcVar3)();
      }
      uVar10 = lVar14 - 3;
      (**(code **)(*plVar16 + 0x60))();
      plVar12 = plVar5;
      (**(code **)(*plVar16 + 0x78))();
      puVar6 = puVar4;
      func_0x000107c61558();
      plVar7 = plVar5;
      uVar9 = uVar8;
      func_0x000100029284();
      uVar11 = (ulong)~(uint)uVar9 & 1;
      lVar1 = *(long *)(puVar4 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101c67708);
        (*pcVar3)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar1) {
        FUN_101c67ab4(lVar1,puVar6);
        plVar7 = plVar5;
        param_3 = uVar8;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)param_3 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101c67758);
          (*pcVar3)();
        }
      }
      else {
        param_3 = uVar9;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_101c6794c();
        }
      }
      if ((uVar9 & 1) == 0) {
        *(ulong *)(puVar4 + ((ulong)plVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar4 + ((ulong)plVar7 >> 6) * 8 + 0x40) | 1L << ((ulong)plVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar4 + 0x30) + (long)plVar7 * 0x10);
        *puVar2 = (ulong)plVar5;
        puVar2[1] = uVar8;
        *(ulong *)(*(long *)(puVar4 + 0x38) + (long)plVar7 * 8) = (ulong)plVar12 & 0xff;
        func_0x000107c61574(plVar16);
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101c6770c);
          (*pcVar3)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      }
      else {
        *(ulong *)(*(long *)(puVar4 + 0x38) + (long)plVar7 * 8) = (ulong)plVar12 & 0xff;
        func_0x000107c6142c(uVar8);
        func_0x000107c61574(plVar16);
      }
      *param_1 = puVar4;
      lVar14 = lVar14 + 1;
    } while (uVar10 != uVar15);
  }
  return;
}



/* Entry: 101c67758; end: 101c6775b;  */

void FUN_101c67758(void)

{
  return;
}



/* Entry: 101c6775c; end: 101c677af;  */

void FUN_101c6775c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c677b0; end: 101c6794b;  */

ulong FUN_101c677b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c67880);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c67884);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_101c69af4(0);
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
    FUN_101c69af4(0);
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
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f006cb0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c6794c);
  (*pcVar2)();
}



/* Entry: 101c6794c; end: 101c67ab3;  */

void FUN_101c6794c(void)

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
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e0d350,&UNK_10d9e7990);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_101c67a28;
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
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar11;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_101c67a28:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101c67ab4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101c67a8c;
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
LAB_101c67a8c:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101c67ab4; end: 101c67d47;  */

void FUN_101c67ab4(long param_1,ulong param_2)

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
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e0d350;
  func_0x0001000285a8(0x112e0d350,&UNK_10d9e7990);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_101c67d14:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c67d44);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_101c67d14;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c67d48);
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
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101c67d48; end: 101c67e3b;  */

undefined * FUN_101c67d48(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e0d350,&UNK_10d9e7990);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c67e38);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c67e3c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101c67e3c; end: 101c6852f;  */

/* WARNING: Removing unreachable block (ram,0x000101c67eb4) */

long * FUN_101c67e3c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long alStack_50 [3];
  long lStack_38;
  
  lVar4 = *param_1;
  lVar1 = lVar4;
  func_0x000107c614f0();
  alStack_50[0] = lVar4;
  lStack_38 = lVar1;
  FUN_101c69040(0);
  func_0x000107c613fc();
  func_0x000107c615f0(lVar4);
  plVar2 = alStack_50;
  FUN_101c68f6c();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x0001000285a8(0x112e0d408,&UNK_10d9e79f0);
  plVar2 = plVar3;
  func_0x000102797850(plVar3);
  func_0x000107c61574(plVar3);
  return plVar2;
}



/* Entry: 101c68530; end: 101c6857f;  */

void FUN_101c68530(long param_1)

{
  long lStack_28;
  
  if (param_1 == 0) {
    func_0x000100c7f554();
  }
  else {
    lStack_28 = param_1;
    func_0x000107c615f0();
    func_0x000100087f6c(&lStack_28);
    func_0x000100c7f554();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101c68580; end: 101c685bf;  */

void FUN_101c68580(long param_1,code *param_2)

{
  if (param_1 != 0) {
    func_0x000107c615f0();
    (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101c685c0; end: 101c68603;  */

void FUN_101c685c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c68604; end: 101c68697;  */

code * FUN_101c68604(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  func_0x0001000285a8(0x112e0d3f8,&UNK_10d9e79e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  uVar1 = 0x101c686d4;
  func_0x0001000b64ac(0x101c686d4,uVar3);
  uVar3 = 0x112e0d400;
  func_0x0001000285a8(0x112e0d400,&UNK_10d9e79e8);
  pcVar2 = FUN_101c67e3c;
  func_0x00010068b194(FUN_101c67e3c,0,uVar3);
  func_0x000107c61574(uVar1);
  return pcVar2;
}



/* Entry: 101c68698; end: 101c686f7;  */

/* WARNING: Removing unreachable block (ram,0x000101c68134) */

void FUN_101c68698(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long alStack_50 [3];
  long lStack_38;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar2 = param_1;
  func_0x000107c614f0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  alStack_50[0] = param_1;
  lStack_38 = lVar2;
  FUN_101c695b4(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_1);
  plVar3 = alStack_50;
  FUN_101c694e0();
  (**(code **)(*plVar3 + 0x60))(uVar1);
  func_0x000107c61574(plVar3);
  return;
}



/* Entry: 101c686f8; end: 101c6885b;  */

int FUN_101c686f8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c68774;
        goto LAB_101c68758;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c68758:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101c68774:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c6885c; end: 101c68863;  */

undefined8 FUN_101c6885c(void)

{
  return 1;
}



/* Entry: 101c68864; end: 101c68903;  */

void FUN_101c68864(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c68904; end: 101c68917;  */

bool FUN_101c68904(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c68918; end: 101c689ef;  */

void FUN_101c68918(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c689f0; end: 101c68a0f;  */

void FUN_101c689f0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101c68a10; end: 101c68a4f;  */

void FUN_101c68a10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e7a60;
  func_0x000107c61520(&UNK_10d9e7a60,&UNK_11045ff78);
  puRam0000000112e0d410 = puVar1;
  return;
}



/* Entry: 101c68a50; end: 101c68a53;  */

void FUN_101c68a50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e7ac8;
  func_0x000107c61520(&UNK_10d9e7ac8,&UNK_11045fee8);
  puRam0000000112e0d418 = puVar1;
  return;
}



/* Entry: 101c68a54; end: 101c68a93;  */

void FUN_101c68a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e7ac8;
  func_0x000107c61520(&UNK_10d9e7ac8,&UNK_11045fee8);
  puRam0000000112e0d418 = puVar1;
  return;
}



/* Entry: 101c68a94; end: 101c68b8f;  */

undefined1  [16] FUN_101c68a94(void)

{
  return ZEXT816(0x11045fee8);
}



/* Entry: 101c68b90; end: 101c68c0f; -[_TtC22FriendActivityServices22FriendActivityServices friendActivityStatusesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c68b90(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0;
  FUN_101c68d90(0);
  func_0x000107c61174(param_1);
  pcVar2 = FUN_101c68c10;
  func_0x0001000bfde0(FUN_101c68c10,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 101c68c10; end: 101c68d8f;  */

void FUN_101c68c10(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar12 = *param_2;
  func_0x0001000285a8(0x112d5f6c0,&UNK_10d93d7c0);
  lVar6 = lVar12;
  func_0x000107c6048c();
  lVar13 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar12 + 0x40);
  if (uVar14 == 0) goto LAB_101c68cb0;
  do {
    uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar14 = uVar14 - 1 & uVar14;
    while( true ) {
      uVar7 = LZCOUNT(uVar7);
      uVar8 = uVar7 | lVar13 << 6;
      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar8 * 0x10);
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar8 * 8);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar10 = (uVar7 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
      *(ulong *)(lVar6 + 0x40 + uVar10) = *(ulong *)(lVar6 + 0x40 + uVar10) | 1L << (uVar7 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = uVar11;
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101c68d90);
        (*pcVar5)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      func_0x000107c61434();
      if (uVar14 != 0) break;
LAB_101c68cb0:
      do {
        lVar1 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c68d8c);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar1) {
          lVar13 = lVar6;
          func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sSiN_11034deb0,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c61574(lVar6);
          *param_1 = lVar13;
          return;
        }
        uVar14 = ((ulong *)(lVar12 + 0x40))[lVar1];
        lVar13 = lVar13 + 1;
      } while (uVar14 == 0);
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar1;
    }
  } while( true );
}



/* Entry: 101c68d90; end: 101c68dd3;  */

void FUN_101c68d90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d55e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d55e50 = puVar1;
  return;
}



/* Entry: 101c68dd4; end: 101c68eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c68dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0d420) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e0d428);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c68eac; end: 101c68f0b; -[_TtC22FriendActivityServices22FriendActivityServices init] */

void FUN_101c68eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendActivityServices.FriendActivityServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c68ed8);
  (*pcVar1)();
}



/* Entry: 101c68f0c; end: 101c68f43; -[_TtC22FriendActivityServices22FriendActivityServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c68f0c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0d420));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e0d428));
  return;
}



/* Entry: 101c68f44; end: 101c68f6b;  */

void FUN_101c68f44(void)

{
  func_0x000101c698f0();
  func_0x000101c69a18();
  FUN_101c68f6c();
  return;
}



/* Entry: 101c68f6c; end: 101c6903f;  */

void FUN_101c68f6c(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000028;
  
  func_0x000101c69a88();
  func_0x000101c69920();
  func_0x000101c69964();
  func_0x000101c6987c();
  if ((param_1 & 1) == 0) {
    func_0x000101c6998c();
    func_0x000101c69844();
    func_0x000101c6985c();
  }
  else {
    func_0x000101c699ac();
    func_0x000103c31f74();
    func_0x000101c69978();
    FUN_101c69040();
    func_0x000101c69a10();
    func_0x000101c69a58();
    FUN_101c691c4();
    func_0x000101c6989c();
    func_0x000101c69a50();
    func_0x000101c69a60();
    func_0x000101c69a28();
    func_0x000101c699f4();
    if (unaff_x21 == 0) {
      func_0x000101c699e0();
      func_0x000101c699cc();
      *(code **)(unaff_x19 + 0x10) = FUN_101c69258;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      return;
    }
    func_0x000101c699cc();
  }
  func_0x000101c699e0();
  FUN_101c69040();
  func_0x000101c69950();
  return;
}



/* Entry: 101c69040; end: 101c6905f;  */

void FUN_101c69040(void)

{
  func_0x000107c61168(&PTR_PTR_112e0d4c8);
  return;
}



/* Entry: 101c69060; end: 101c6907f;  */

void FUN_101c69060(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c69080; end: 101c691c3;  */

/* WARNING: Removing unreachable block (ram,0x000101c69138) */

code * FUN_101c69080(code *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x21;
  code *pcStack_38;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*(long *)param_1 + 0x70))();
  if (((ulong)plVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0xa0))();
    if (unaff_x21 == 0) {
      func_0x000100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar2,0,0);
      plVar2[1] = -0x16ffffffffffff95;
      *plVar2 = 0x636f6c426c6c6163;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined1 *)(plVar2 + 4) = 1;
      func_0x000107c61654();
    }
  }
  else {
    param_1 = *(code **)(*plVar1 + 0x1e8);
    uVar3 = 0x112e0d718;
    func_0x0001000285a8(0x112e0d718,&UNK_10d9e7c80);
    (*param_1)(&pcStack_38,0xffffffffffffffff,uVar3);
    if (unaff_x21 == 0) {
      (**(code **)(*plVar1 + 0xa0))();
      func_0x000107c61574(plVar1);
      return pcStack_38;
    }
  }
  func_0x000107c61574(plVar1);
  return param_1;
}



/* Entry: 101c691c4; end: 101c69257;  */

void FUN_101c691c4(long param_1)

{
  func_0x000100e779e8();
  func_0x000101c698b8();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000101c69a3c();
  func_0x000101c699a0();
  func_0x000103c31710(0xd000000000000019,0x800000010f006de0,0xd00000000000001b,0x800000010f006e00);
  func_0x000101c69938();
  func_0x000107c61538();
  func_0x000101c699e8();
  func_0x000101c699bc();
  func_0x000101c69908();
  return;
}



/* Entry: 101c69258; end: 101c6926f;  */

void FUN_101c69258(void)

{
  FUN_101c69080();
  return;
}



/* Entry: 101c69270; end: 101c69287;  */

undefined1  [16] FUN_101c69270(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000101c699c4(0x112e0d458,auStack_38,0);
  func_0x000101c69a00();
  auVar1._8_8_ = &PTR_DAT_112e0d460;
  auVar1._0_8_ = 0x112e0d458;
  return auVar1;
}



/* Entry: 101c69288; end: 101c692af;  */

void FUN_101c69288(void)

{
  func_0x000101c698f0();
  func_0x000101c69a18();
  FUN_101c692b0();
  return;
}



/* Entry: 101c692b0; end: 101c69383;  */

void FUN_101c692b0(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000028;
  
  func_0x000101c69a88();
  func_0x000101c69920();
  func_0x000101c69964();
  func_0x000101c6987c();
  if ((param_1 & 1) == 0) {
    func_0x000101c6998c();
    func_0x000101c69844();
    func_0x000101c6985c();
  }
  else {
    func_0x000101c699ac();
    func_0x000103c31f74();
    func_0x000101c69978();
    FUN_101c69384();
    func_0x000101c69a10();
    func_0x000101c69a58();
    FUN_101c693e0();
    func_0x000101c6989c();
    func_0x000101c69a50();
    func_0x000101c69a60();
    func_0x000101c69a28();
    func_0x000101c699f4();
    if (unaff_x21 == 0) {
      func_0x000101c699e0();
      func_0x000101c699cc();
      *(code **)(unaff_x19 + 0x10) = FUN_101c69464;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      return;
    }
    func_0x000101c699cc();
  }
  func_0x000101c699e0();
  FUN_101c69384();
  func_0x000101c69950();
  return;
}



/* Entry: 101c69384; end: 101c693a3;  */

void FUN_101c69384(void)

{
  func_0x000107c61168(&PTR_PTR_112e0d570);
  return;
}



/* Entry: 101c693a4; end: 101c693bf;  */

undefined1  [16] FUN_101c693a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f006d70;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 101c693c0; end: 101c693df;  */

void FUN_101c693c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c693e0; end: 101c69463;  */

void FUN_101c693e0(long param_1)

{
  func_0x000100e779e8();
  func_0x000101c698b8();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000101c69a3c();
  func_0x000101c699a0();
  func_0x000101c69a74(0x6976697463416e6f,0xef6465646e457974);
  func_0x000101c69a68();
  func_0x000101c69938();
  func_0x000107c61538();
  func_0x000101c699e8();
  func_0x000101c699bc();
  func_0x000101c69908();
  return;
}



/* Entry: 101c69464; end: 101c6949f;  */

void FUN_101c69464(void)

{
  FUN_101c695d4();
  return;
}



/* Entry: 101c694a0; end: 101c694b7;  */

undefined1  [16] FUN_101c694a0(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000101c699c4(0x112e0d468,auStack_38,0);
  func_0x000101c69a00();
  auVar1._8_8_ = 0x112e0d470;
  auVar1._0_8_ = 0x112e0d468;
  return auVar1;
}



/* Entry: 101c694b8; end: 101c694df;  */

void FUN_101c694b8(void)

{
  func_0x000101c698f0();
  func_0x000101c69a18();
  FUN_101c694e0();
  return;
}



/* Entry: 101c694e0; end: 101c695b3;  */

void FUN_101c694e0(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000028;
  
  func_0x000101c69a88();
  func_0x000101c69920();
  func_0x000101c69964();
  func_0x000101c6987c();
  if ((param_1 & 1) == 0) {
    func_0x000101c6998c();
    func_0x000101c69844();
    func_0x000101c6985c();
  }
  else {
    func_0x000101c699ac();
    func_0x000103c31f74();
    func_0x000101c69978();
    FUN_101c695b4();
    func_0x000101c69a10();
    func_0x000101c69a58();
    FUN_101c696d8();
    func_0x000101c6989c();
    func_0x000101c69a50();
    func_0x000101c69a60();
    func_0x000101c69a28();
    func_0x000101c699f4();
    if (unaff_x21 == 0) {
      func_0x000101c699e0();
      func_0x000101c699cc();
      *(undefined8 *)(unaff_x19 + 0x10) = 0x101c69824;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      return;
    }
    func_0x000101c699cc();
  }
  func_0x000101c699e0();
  FUN_101c695b4();
  func_0x000101c69950();
  return;
}



/* Entry: 101c695b4; end: 101c695d3;  */

void FUN_101c695b4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0d618);
  return;
}



/* Entry: 101c695d4; end: 101c696d7;  */

void FUN_101c695d4(undefined1 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x21;
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  long *plStack_48;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  puStack_50 = &UNK_110460228;
  plVar2 = plVar1;
  FUN_101c697a8();
  auStack_68[0] = param_1;
  plStack_48 = plVar2;
  (**(code **)(*plVar1 + 0x120))(auStack_68);
  FUN_101c697e8(auStack_68);
  puVar3 = (undefined8 *)0x0;
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))();
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x000100e49460();
    func_0x000101c69844();
    puVar3[1] = 0xe90000000000006b;
    *puVar3 = 0x636f6c426c6c6163;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 101c696d8; end: 101c69753;  */

void FUN_101c696d8(long param_1)

{
  func_0x000100e779e8();
  func_0x000101c698b8();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000101c69a3c();
  func_0x000101c699a0();
  func_0x000101c69a74();
  func_0x000101c69a68(0xd000000000000011,0x800000010f006da0);
  func_0x000101c69938();
  func_0x000107c61538();
  func_0x000101c699e8();
  func_0x000101c699bc();
  func_0x000101c69908();
  return;
}



/* Entry: 101c69754; end: 101c69763;  */

undefined1  [16] FUN_101c69754(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000101c699c4(0x112e0d478,auStack_38,0);
  func_0x000101c69a00();
  auVar1._8_8_ = &PTR_DAT_112e0d480;
  auVar1._0_8_ = 0x112e0d478;
  return auVar1;
}



/* Entry: 101c69764; end: 101c6979f;  */

undefined1  [16]
FUN_101c69764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000101c699c4(param_3,auStack_38,0);
  func_0x000101c69a00();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 101c697a0; end: 101c697a7;  */

undefined8 FUN_101c697a0(void)

{
  return 0;
}



/* Entry: 101c697a8; end: 101c697e7;  */

void FUN_101c697a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e7dc0;
  func_0x000107c61520(&DAT_10d9e7dc0,&UNK_110460228);
  puRam0000000112e0d680 = puVar1;
  return;
}



/* Entry: 101c697e8; end: 101c6980f;  */

void FUN_101c697e8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c697fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101c69810; end: 101c69837;  */

void FUN_101c69810(void)

{
  FUN_101c693c0();
  return;
}



/* Entry: 101c69838; end: 101c69aa3;  */

undefined8 FUN_101c69838(void)

{
  FUN_101c693a4();
  return 0xd00000000000002e;
}



/* Entry: 101c69aa4; end: 101c69af3;  */

/* WARNING: Possible PIC construction at 0x000101c69ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c69ae8) */
/* WARNING: Removing unreachable block (ram,0x000101c6ae50) */

void FUN_101c69aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x000103c31f74();
  uVar1 = *param_1;
  FUN_101c69af4(&DAT_10d9e7cb0);
  func_0x000101c6ae88();
  FUN_101c6a2a0();
  func_0x000101c6aef4();
  func_0x000101c6ae90(0x1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c69af4; end: 101c69b13;  */

void FUN_101c69af4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0d8b8);
  return;
}



/* Entry: 101c69b14; end: 101c69b93;  */

void FUN_101c69b14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  
  FUN_101c6a368();
  uVar1 = param_1;
  func_0x000101c6a3a8();
  puVar2 = (undefined8 *)&UNK_110460228;
  func_0x000103c30d9c(&UNK_110460228,&UNK_110460228,param_1,uVar1);
  puVar3 = puVar2;
  func_0x000103c31f74();
  plVar4 = (long *)*puVar3;
  pcVar5 = *(code **)(*plVar4 + 0xb8);
  func_0x000101c6ae88();
  (*pcVar5)(0xd00000000000001f,0x800000010d9e7cb0,puVar2);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar4);
  return;
}



/* Entry: 101c69b94; end: 101c69beb;  */

undefined1 FUN_101c69b94(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  FUN_101c697a8();
  func_0x000101c6af1c();
  func_0x000103c38cc0(param_1,param_2);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 101c69bec; end: 101c69c4f;  */

ulong FUN_101c69bec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 101c69c50; end: 101c69c7b;  */

void FUN_101c69c50(void)

{
  func_0x0001000285a8(0x112e0d850,&UNK_10d9e7cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 101c69c7c; end: 101c69d1b;  */

/* WARNING: Possible PIC construction at 0x000101c69f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c6a130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c69f64) */
/* WARNING: Removing unreachable block (ram,0x000101c6a134) */
/* WARNING: Removing unreachable block (ram,0x000101c6a138) */

undefined1  [16] FUN_101c69c7c(ulong param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  byte *unaff_x20;
  byte *pbVar8;
  ulong *unaff_x21;
  byte *unaff_x22;
  ulong *unaff_x23;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_70 [80];
  
  puVar5 = (ulong *)0xe600000000000000;
  puVar2 = (ulong *)0x7070615f6e69;
  puVar7 = (ulong *)(param_1 & 0xff);
  puVar3 = puVar2;
  pbVar8 = unaff_x20;
  switch(puVar7) {
  default:
    puVar5 = (ulong *)0xe700000000000000;
  case (ulong *)0x69:
  case (ulong *)0xa0:
  case (ulong *)0xae:
  case (ulong *)0xb8:
  case (ulong *)0xd1:
  case (ulong *)0xee:
    puVar2 = (ulong *)0x6e69;
  case (ulong *)0x93:
  case (ulong *)0xa7:
  case (ulong *)0xbb:
  case (ulong *)0xcf:
  case (ulong *)0xd7:
  case (ulong *)0xdf:
  case (ulong *)0xe7:
  case (ulong *)0xfb:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffff0000ffff | 0x675f0000);
  case (ulong *)0x9e:
  case (ulong *)0xc6:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffff0000ffffffff | 0x6d6100000000);
  case (ulong *)0xc8:
    puVar2 = (ulong *)((ulong)puVar2 | 0x65000000000000);
  case (ulong *)0xb7:
  case (ulong *)0xf7:
    auVar10._8_8_ = puVar5;
    auVar10._0_8_ = puVar2;
    return auVar10;
  case (ulong *)0x2:
  case (ulong *)0x6:
    puVar7 = (ulong *)0x10f006e30;
  case (ulong *)0x8:
    puVar5 = (ulong *)((ulong)puVar7 | 0x8000000000000000);
  case (ulong *)0xc:
    puVar2 = (ulong *)0xd000000000000012;
  case (ulong *)0xa:
  case (ulong *)0x6c:
  case (ulong *)0xfc:
    auVar11._8_8_ = puVar5;
    auVar11._0_8_ = puVar2;
    return auVar11;
  case (ulong *)0x3:
  case (ulong *)0x7:
  case (ulong *)0xa4:
    puVar5 = (ulong *)0x7265;
  case (ulong *)0xb:
    puVar5 = (ulong *)((ulong)puVar5 | 0x790000);
  case (ulong *)0xf:
    puVar5 = (ulong *)((ulong)puVar5 & 0xffffffffffff | 0xeb00000000000000);
  case (ulong *)0xd:
    puVar2 = (ulong *)0x747461625f776f6c;
  case (ulong *)0x0:
  case (ulong *)0x4:
  case (ulong *)0x11:
    auVar12._8_8_ = puVar5;
    auVar12._0_8_ = puVar2;
    return auVar12;
  case (ulong *)0x10:
  case (ulong *)0xd0:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (ulong *)0xa9:
  case (ulong *)0xd9:
  case (ulong *)0xe1:
  case (ulong *)0xe9:
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8),0);
    puVar3 = (ulong *)((long)register0x00000008 + 8);
    FUN_101c69d68(puVar3,0x7070615f6e69);
    puVar5 = puVar2;
  case (ulong *)0xaa:
  case (ulong *)0xda:
  case (ulong *)0xe2:
  case (ulong *)0xea:
    func_0x000107c606a8();
    auVar14._8_8_ = puVar5;
    auVar14._0_8_ = puVar3;
    return auVar14;
  case (ulong *)0x20:
  case (ulong *)0x31:
  case (ulong *)0x40:
  case (ulong *)0x59:
  case (ulong *)0x78:
    break;
  case (ulong *)0x29:
  case (ulong *)0x49:
  case (ulong *)0x51:
  case (ulong *)0x70:
    puVar5 = (ulong *)0x656d6100000000;
  case (ulong *)0x21:
  case (ulong *)0x22:
  case (ulong *)0x41:
  case (ulong *)0x42:
    param_3 = unaff_x19;
    break;
  case (ulong *)0x2d:
  case (ulong *)0x4d:
  case (ulong *)0x55:
  case (ulong *)0x74:
  case (ulong *)0x82:
  case (ulong *)0x30:
  case (ulong *)0x3b:
  case (ulong *)0x50:
  case (ulong *)0x58:
  case (ulong *)0x77:
    uVar6 = (ulong)*unaff_x20;
    FUN_101c69c7c();
    *puVar7 = uVar6;
    puVar7[1] = (ulong)puVar5;
    auVar17._8_8_ = puVar5;
    auVar17._0_8_ = uVar6;
    return auVar17;
  case (ulong *)0x37:
    puVar7 = puVar7 + 0x1ca;
  case (ulong *)0x23:
  case (ulong *)0x43:
    param_3 = (ulong *)((ulong)(puVar7 + -4) | 0x8000000000000000);
    puVar5 = (ulong *)0xd000000000000012;
    unaff_x19 = param_3;
    break;
  case (ulong *)0x7d:
    unaff_x19 = puVar7;
  case (ulong *)0x27:
  case (ulong *)0x38:
  case (ulong *)0x47:
  case (ulong *)0x7b:
    puVar5 = puRam00007070615f6e71;
    puVar7 = puRam00007070615f6e69;
  case (ulong *)0x81:
    puVar2 = puVar7;
    FUN_101c69bec(puVar2,puVar5);
    puVar7 = (ulong *)(ulong)((uint)puVar2 & 0xff);
  case (ulong *)0x24:
  case (ulong *)0x3a:
  case (ulong *)0x44:
  case (ulong *)0x80:
  case (ulong *)0x86:
    *(byte *)unaff_x19 = (byte)puVar7;
  case (ulong *)0x36:
  case (ulong *)0x5e:
  case (ulong *)0x7e:
  case (ulong *)0x2b:
  case (ulong *)0x2f:
  case (ulong *)0x32:
  case (ulong *)0x34:
  case (ulong *)0x39:
  case (ulong *)0x4b:
  case (ulong *)0x4f:
  case (ulong *)0x53:
  case (ulong *)0x57:
  case (ulong *)0x5a:
  case (ulong *)0x5c:
  case (ulong *)0x68:
  case (ulong *)0x72:
  case (ulong *)0x76:
  case (ulong *)0x94:
  case (ulong *)0x35:
  case (ulong *)0x5d:
    auVar16._8_8_ = puVar5;
    auVar16._0_8_ = puVar2;
    return auVar16;
  case (ulong *)0x90:
    auVar13._8_8_ = 0xe600000000000000;
    auVar13._0_8_ = 0x7070615f6e69;
    return auVar13;
  case (ulong *)0x92:
  case (ulong *)0xa6:
  case (ulong *)0xba:
  case (ulong *)0xce:
  case (ulong *)0xd6:
  case (ulong *)0xde:
  case (ulong *)0xe6:
  case (ulong *)0xfa:
    unaff_x19 = (ulong *)0xe600000000000000;
    puVar3 = (ulong *)(unaff_x20 + 0x10);
    unaff_x21 = puVar2;
  case (ulong *)0xb6:
  case (ulong *)0xf6:
    func_0x000101c6ade0(puVar3);
    puVar2 = *(ulong **)(unaff_x20 + 0x18);
  case (ulong *)0xd8:
    *(ulong **)(unaff_x20 + 0x10) = unaff_x21;
    *(ulong **)(unaff_x20 + 0x18) = unaff_x19;
    goto code_r0x000107c6142c;
  case (ulong *)0x95:
  case (ulong *)0xbd:
  case (ulong *)0xfd:
    func_0x000107c6068c(&stack0x00000008);
    unaff_x19 = (ulong *)0xe600000000000000;
  case (ulong *)0x33:
  case (ulong *)0x5b:
  case (ulong *)0x7c:
    puVar5 = unaff_x19;
    puVar2 = (ulong *)&stack0x00000008;
  case (ulong *)0x2a:
  case (ulong *)0x4a:
  case (ulong *)0x52:
  case (ulong *)0x71:
    FUN_101c69d68(puVar2,puVar5);
  case (ulong *)0x28:
  case (ulong *)0x48:
  case (ulong *)0x84:
  case (ulong *)0x26:
  case (ulong *)0x46:
  case (ulong *)0x85:
    func_0x000107c606a8();
  case (ulong *)0x7a:
  case (ulong *)0x25:
  case (ulong *)0x2c:
  case (ulong *)0x2e:
  case (ulong *)0x45:
  case (ulong *)0x4c:
  case (ulong *)0x4e:
  case (ulong *)0x54:
  case (ulong *)0x56:
  case (ulong *)0x73:
  case (ulong *)0x75:
  case (ulong *)0x79:
  case (ulong *)0x83:
    auVar15._8_8_ = puVar5;
    auVar15._0_8_ = puVar2;
    return auVar15;
  case (ulong *)0xa8:
  case (ulong *)0x96:
  case (ulong *)0xbe:
  case (ulong *)0xfe:
    puVar3 = (ulong *)(unaff_x20 + 0x20);
    unaff_x19 = puVar2;
  case (ulong *)0xf4:
    func_0x000101c6ade0(puVar3);
    unaff_x20[0x20] = (byte)unaff_x19;
    auVar22._8_8_ = puVar5;
    auVar22._0_8_ = puVar3;
    return auVar22;
  case (ulong *)0xb4:
    FUN_101c69c50();
    *puVar7 = (ulong)puVar2;
    auVar19._8_8_ = puVar5;
    auVar19._0_8_ = puVar2;
    return auVar19;
  case (ulong *)0xb5:
  case (ulong *)0xf5:
    auVar20._8_8_ = unaff_x20 + 0x10;
    auVar20._0_8_ = 0x7070615f7c2d;
    return auVar20;
  case (ulong *)0xbc:
    unaff_x19 = (ulong *)((ulong)unaff_x19 & 0xffff0000ffff | 0xeb00000000790000);
    puVar5 = (ulong *)0x5f776f6c;
  case (ulong *)0x7f:
    puVar5 = (ulong *)((ulong)puVar5 & 0xffffffffffff | 0x7474616200000000);
    param_3 = unaff_x19;
    break;
  case (ulong *)0xcd:
  case (ulong *)0xd5:
  case (ulong *)0xdd:
  case (ulong *)0xe5:
  case (ulong *)0xf9:
    FUN_101c69b94();
  case (ulong *)0x91:
  case (ulong *)0xa5:
  case (ulong *)0xb9:
    if (unaff_x21 == (ulong *)0x0) {
      *(byte *)unaff_x19 = (byte)puVar2;
    }
    auVar18._8_8_ = puVar5;
    auVar18._0_8_ = puVar2;
    return auVar18;
  case (ulong *)0xe8:
    func_0x000101c6add0(unaff_x20 + 0x10);
    auVar20 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
    func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
    return auVar20;
  case (ulong *)0xf8:
  case (ulong *)0x6a:
  case (ulong *)0xd2:
    unaff_x23 = unaff_x21;
  case (ulong *)0xe0:
    func_0x000103c31f74();
    pbVar8 = (byte *)*puVar3;
    unaff_x19 = puVar2;
    unaff_x22 = unaff_x20;
  case (ulong *)0xab:
  case (ulong *)0xdb:
  case (ulong *)0xe3:
  case (ulong *)0xeb:
    puVar7 = (ulong *)&UNK_10d9e7000;
  case (ulong *)0xcc:
  case (ulong *)0xd4:
  case (ulong *)0xdc:
  case (ulong *)0xe4:
    FUN_101c69af4();
    func_0x000101c6ae88();
    FUN_101c6a2a0();
    (**(code **)(*(long *)pbVar8 + 0xa0))
              (0xd00000000000001c,(ulong)(puVar7 + 0x192) | 0x8000000000000000,puVar3);
    func_0x000101c6ae70();
    func_0x000107c61574(puVar3);
    uVar6 = (ulong)(puVar7 + 0x192) | 0x8000000000000000;
    uVar4 = 0xd00000000000001c;
    (**(code **)(*unaff_x19 + 0x128))(0xd00000000000001c,uVar6);
    if (unaff_x23 != (ulong *)0x0) {
      auVar21._8_8_ = uVar6;
      auVar21._0_8_ = puVar3;
      return auVar21;
    }
    func_0x000101c6aea8(unaff_x22 + 0x10,&stack0x00000048);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar2 = *(ulong **)(unaff_x22 + 0x18);
    pcVar9 = *(code **)(*unaff_x19 + 0x2b8);
    func_0x000107c61434(puVar2);
    puVar5 = (ulong *)0x0;
    (*pcVar9)(uVar4,0,uVar1,puVar2);
    goto code_r0x000107c6142c;
  }
  puVar2 = unaff_x19;
  func_0x000107c5fb58(0x7070615f6e69,puVar5,param_3);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  auVar23._8_8_ = puVar5;
  auVar23._0_8_ = puVar2;
  return auVar23;
}



/* Entry: 101c69d1c; end: 101c69d5f;  */

void FUN_101c69d1c(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_101c69d68(auStack_68,param_1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c69d60; end: 101c69d67;  */

/* WARNING: Possible PIC construction at 0x000101c6a130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c69f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6a134) */
/* WARNING: Removing unreachable block (ram,0x000101c6a138) */
/* WARNING: Removing unreachable block (ram,0x000101c69f64) */

undefined1  [16] FUN_101c69d60(code *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  byte *unaff_x20;
  byte *pbVar15;
  code *unaff_x21;
  byte *unaff_x22;
  code *unaff_x23;
  code *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_stack_00000000;
  undefined *in_stack_00000018;
  code *in_stack_00000020;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [32];
  
  pcVar12 = (code *)(ulong)*unaff_x20;
  puVar4 = &stack0xffffffffffffffe0;
  puVar2 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  pcVar14 = (code *)0xe600000000000000;
  pcVar13 = (code *)0x7070615f6e69;
  puVar3 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xffffffffffffffe0;
  pcVar11 = param_1;
  pbVar15 = unaff_x20;
  switch(*unaff_x20) {
  case 0:
  case 0xd:
    break;
  default:
    pcVar14 = (code *)0xe700000000000000;
  case 0x65:
  case 0x9c:
  case 0xaa:
  case 0xb4:
  case 0xcd:
  case 0xea:
    pcVar13 = (code *)0x6e69;
code_r0x000101c69dac:
    pcVar13 = (code *)((ulong)pcVar13 & 0xffffffff0000ffff | 0x675f0000);
code_r0x000101c69db0:
    pcVar13 = (code *)((ulong)pcVar13 & 0xffff0000ffffffff | 0x6d6100000000);
code_r0x000101c69db4:
    pcVar13 = (code *)((ulong)pcVar13 | 0x65000000000000);
code_r0x000101c69db8:
    break;
  case 2:
    pcVar12 = (code *)0x10f006e30;
  case 4:
    pcVar14 = (code *)((ulong)pcVar12 | 0x8000000000000000);
code_r0x000101c69dcc:
    pcVar13 = (code *)0xd000000000000012;
code_r0x000101c69dd4:
    break;
  case 3:
  case 0xa0:
    pcVar14 = (code *)0x7265;
  case 7:
    pcVar14 = (code *)((ulong)pcVar14 | 0x790000);
code_r0x000101c69de0:
    pcVar14 = (code *)((ulong)pcVar14 & 0xffffffffffff | 0xeb00000000000000);
code_r0x000101c69de4:
    pcVar13 = (code *)0x747461625f776f6c;
    break;
  case 6:
  case 0x68:
  case 0xf8:
    goto code_r0x000101c69dd4;
  case 8:
    goto code_r0x000101c69dcc;
  case 9:
    goto code_r0x000101c69de4;
  case 0xb:
    goto code_r0x000101c69de0;
  case 0xc:
  case 0xcc:
    puVar2 = auStack_90;
  case 0xa5:
  case 0xd5:
  case 0xdd:
    puVar3 = puVar2;
code_r0x000101c69e24:
    func_0x000107c6068c(puVar3 + 8);
    param_1 = (code *)(puVar3 + 8);
    FUN_101c69d68(param_1,0x7070615f6e69);
    func_0x000107c606a8();
code_r0x000101c69e44:
    auVar16._8_8_ = pcVar13;
    auVar16._0_8_ = param_1;
    return auVar16;
  case 0x1c:
  case 0x2d:
  case 0x3c:
  case 0x55:
  case 0x74:
    goto code_r0x000101c69ef0;
  case 0x1d:
  case 0x1e:
  case 0x3d:
  case 0x3e:
  case 0x33:
    pcVar14 = pcVar12;
code_r0x000101c69ebc:
    FUN_101c69b94();
    if (unaff_x21 == (code *)0x0) {
      *pcVar14 = SUB81(param_1,0);
    }
    auVar18._8_8_ = pcVar13;
    auVar18._0_8_ = param_1;
    return auVar18;
  case 0x1f:
  case 0x3f:
    goto code_r0x000101c69ebc;
  case 0x20:
  case 0x36:
  case 0x40:
  case 0x7c:
  case 0x82:
  case 0x32:
  case 0x5a:
  case 0x7a:
code_r0x000101c69f74:
    auVar21._8_8_ = 0x7070615f6e69;
    auVar21._0_8_ = param_1;
    return auVar21;
  case 0x21:
  case 0x28:
  case 0x2a:
  case 0x41:
  case 0x48:
  case 0x4a:
  case 0x50:
  case 0x52:
  case 0x6f:
  case 0x71:
  case 0x75:
  case 0x7f:
    goto code_r0x000101c69f48;
  case 0x22:
  case 0x42:
  case 0x81:
    goto code_r0x000101c69f38;
  case 0x23:
  case 0x34:
  case 0x43:
  case 0x77:
    goto code_r0x000101c69f5c;
  case 0x24:
  case 0x44:
  case 0x80:
    puVar4 = &stack0xffffffffffffff90;
    goto code_r0x000101c69f38;
  case 0x25:
  case 0x45:
  case 0x4d:
  case 0x6c:
    auVar17._8_8_ = 0x7070615f6e69;
    auVar17._0_8_ = param_1;
    return auVar17;
  case 0x26:
  case 0x46:
  case 0x4e:
  case 0x6d:
    goto code_r0x000101c69f30;
  case 0x27:
  case 0x2b:
  case 0x2e:
  case 0x30:
  case 0x35:
  case 0x47:
  case 0x4b:
  case 0x4f:
  case 0x53:
  case 0x56:
  case 0x58:
  case 100:
  case 0x6e:
  case 0x72:
  case 0x90:
    goto code_r0x000101c69f74;
  case 0x29:
  case 0x49:
  case 0x51:
  case 0x70:
  case 0x7e:
    goto code_r0x000101c69f7c;
  case 0x2c:
  case 0x37:
  case 0x4c:
  case 0x54:
  case 0x73:
    goto code_r0x000101c69f88;
  case 0x2f:
  case 0x57:
  case 0x78:
    goto code_r0x000101c69f28;
  case 0x31:
  case 0x59:
    goto code_r0x000101c69f7c;
  case 0x66:
  case 0xce:
    goto code_r0x000101c6a154;
  case 0x76:
    goto code_r0x000101c69f40;
  case 0x79:
    goto code_r0x000101c69f54;
  case 0x7b:
    goto code_r0x000101c69ee4;
  case 0x7d:
    goto code_r0x000101c69f60;
  case 0x8c:
    goto code_r0x000101c69e08;
  case 0x8d:
  case 0xa1:
  case 0xb5:
    goto code_r0x000101c69fb8;
  case 0x8e:
  case 0xa2:
  case 0xb6:
  case 0xca:
  case 0xd2:
  case 0xda:
  case 0xe2:
  case 0xf6:
    param_1[0x20] = (code)0x0;
    auVar27._8_8_ = 0x7070615f6e69;
    auVar27._0_8_ = param_1;
    return auVar27;
  case 0x8f:
  case 0xa3:
  case 0xb7:
  case 0xcb:
  case 0xd3:
  case 0xdb:
  case 0xe3:
  case 0xf7:
    goto code_r0x000101c69dac;
  case 0x91:
  case 0xb9:
  case 0xf9:
    param_1 = *(code **)(unaff_x20 + 0x10);
    pcVar13 = *(code **)(unaff_x20 + 0x18);
    func_0x000107c61434(pcVar13);
    goto code_r0x000101c69f28;
  case 0x92:
  case 0xba:
  case 0xfa:
    goto code_r0x000101c6a0c8;
  case 0x9a:
  case 0xc2:
    goto code_r0x000101c69db0;
  case 0xa4:
    goto code_r0x000101c6a0c4;
  case 0xa6:
  case 0xd6:
  case 0xde:
  case 0xe6:
    goto code_r0x000101c69e44;
  case 0xa7:
  case 0xd7:
  case 0xdf:
  case 0xe7:
    goto code_r0x000101c6a174;
  case 0xb0:
    pbVar15 = unaff_x20 + 0x20;
    func_0x000101c6ade0(pbVar15);
    unaff_x20[0x20] = (byte)param_1;
    auVar26._8_8_ = pcVar13;
    auVar26._0_8_ = pbVar15;
    return auVar26;
  case 0xb1:
  case 0xf1:
    goto code_r0x000101c6a088;
  case 0xb2:
  case 0xf2:
    puVar6 = auStack_d0;
  case 0xd4:
    *(undefined **)(puVar6 + 0x70) = unaff_x25;
    *(code **)(puVar6 + 0x78) = unaff_x24;
    *(code **)(puVar6 + 0x80) = unaff_x23;
    *(byte **)(puVar6 + 0x88) = unaff_x22;
    *(byte **)(puVar6 + 0x90) = unaff_x20;
    *(undefined8 *)(puVar6 + 0x98) = 0xe600000000000000;
    *(undefined1 **)(puVar6 + 0xa0) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar6 + 0xa8) = unaff_x30;
    func_0x000103c31f74();
    pbVar15 = *(byte **)pcVar11;
    unaff_x25 = &UNK_10d9e7c90;
    puVar7 = puVar6;
    pcVar14 = param_1;
    unaff_x22 = unaff_x20;
    unaff_x23 = unaff_x21;
code_r0x000101c6a088:
    FUN_101c69af4();
    func_0x000101c6ae88();
    FUN_101c6a2a0();
    (**(code **)(*(long *)pbVar15 + 0xa0))
              (0xd00000000000001c,(ulong)unaff_x25 | 0x8000000000000000,pcVar11);
    func_0x000101c6ae70();
    func_0x000107c61574(pcVar11);
    pcVar12 = *(code **)pcVar14;
    puVar8 = puVar7;
    unaff_x24 = pcVar11;
code_r0x000101c6a0c4:
    pcVar12 = *(code **)(pcVar12 + 0x128);
    puVar9 = puVar8;
code_r0x000101c6a0c8:
    pcVar13 = (code *)((ulong)unaff_x25 | 0x8000000000000000);
    param_1 = (code *)0xd00000000000001c;
    puVar10 = puVar9;
code_r0x000101c6a0d4:
    (*pcVar12)(param_1,pcVar13);
    if (unaff_x23 != (code *)0x0) goto LAB_101c6a190;
    func_0x000101c6aea8(unaff_x22 + 0x10,puVar10 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar11 = *(code **)(unaff_x22 + 0x18);
    pcVar12 = *(code **)(*(long *)pcVar14 + 0x2b8);
    func_0x000107c61434(pcVar11);
    pcVar13 = (code *)0x0;
    (*pcVar12)(param_1,0,uVar1,pcVar11);
    goto code_r0x000107c6142c;
  case 0xb3:
  case 0xf3:
    goto code_r0x000101c69db8;
  case 0xb8:
    pcVar14 = pcVar12;
    goto code_r0x000101c69ee4;
  case 0xc4:
    goto code_r0x000101c69db4;
  case 200:
  case 0xd0:
  case 0xd8:
  case 0xe0:
    goto code_r0x000101c6a178;
  case 0xc9:
  case 0xd1:
  case 0xd9:
  case 0xe1:
  case 0xf5:
    param_1 = (code *)(ulong)unaff_x20[0x20];
    goto code_r0x000101c69fb8;
  case 0xdc:
    goto code_r0x000101c6a164;
  case 0xe4:
    func_0x000101c6adf0(unaff_x20 + 0x20,param_1);
    auVar24._8_8_ = unaff_x20 + 0x20;
    auVar24._0_8_ = 0x101c6adc8;
    return auVar24;
  case 0xe5:
    goto code_r0x000101c69e24;
  case 0xf0:
    goto code_r0x000101c6a0d4;
  case 0xf4:
    in_stack_00000018 = &UNK_110460228;
    goto code_r0x000101c6a154;
  }
  pcVar11 = pcVar14;
  func_0x000107c5fb58(param_1,pcVar13,pcVar11);
code_r0x000101c69e08:
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar11);
  auVar28._8_8_ = pcVar13;
  auVar28._0_8_ = pcVar11;
  return auVar28;
code_r0x000101c69f38:
  *(byte **)(puVar4 + 0x20) = unaff_x22;
  *(code **)(puVar4 + 0x28) = unaff_x21;
  *(byte **)(puVar4 + 0x30) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x38) = 0xe600000000000000;
  puVar5 = puVar4;
code_r0x000101c69f40:
  *(undefined1 **)(puVar5 + 0x40) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar5 + 0x48) = unaff_x30;
code_r0x000101c69f48:
  pcVar11 = (code *)(unaff_x20 + 0x10);
  pcVar14 = pcVar13;
  unaff_x21 = param_1;
code_r0x000101c69f54:
  func_0x000101c6ade0(pcVar11);
  param_1 = *(code **)(unaff_x20 + 0x18);
code_r0x000101c69f5c:
  *(code **)(unaff_x20 + 0x10) = unaff_x21;
  *(code **)(unaff_x20 + 0x18) = pcVar14;
  pcVar11 = param_1;
code_r0x000101c69f60:
  goto code_r0x000107c6142c;
code_r0x000101c69fb8:
  auVar23._8_8_ = 0x7070615f6e69;
  auVar23._0_8_ = param_1;
  return auVar23;
code_r0x000101c69f7c:
  pcVar11 = (code *)(unaff_x20 + 0x10);
  pcVar13 = param_1;
code_r0x000101c69f88:
  func_0x000101c6adf0(pcVar11,pcVar13);
  auVar22._8_8_ = unaff_x20 + 0x10;
  auVar22._0_8_ = 0x101c6adc4;
  return auVar22;
code_r0x000101c69f28:
code_r0x000101c69f30:
  auVar20._8_8_ = pcVar13;
  auVar20._0_8_ = param_1;
  return auVar20;
code_r0x000101c69ee4:
  FUN_101c69c50();
  *(code **)pcVar14 = param_1;
code_r0x000101c69ef0:
  auVar19._8_8_ = pcVar13;
  auVar19._0_8_ = param_1;
  return auVar19;
code_r0x000101c6a154:
  FUN_101c697a8();
  in_stack_00000000 = SUB81(unaff_x20,0);
  pcVar12 = pcRame600000000000000;
  in_stack_00000020 = param_1;
code_r0x000101c6a164:
  pcVar12 = *(code **)(pcVar12 + 0x308);
  pcVar13 = (code *)0x1;
code_r0x000101c6a174:
code_r0x000101c6a178:
  (*pcVar12)();
  func_0x0001000834e4(&stack0x00000000);
LAB_101c6a190:
  auVar25._8_8_ = pcVar13;
  auVar25._0_8_ = unaff_x24;
  return auVar25;
}



/* Entry: 101c69d68; end: 101c69e0b;  */

/* WARNING: Possible PIC construction at 0x000101c6a130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c69f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6a134) */
/* WARNING: Removing unreachable block (ram,0x000101c6a138) */
/* WARNING: Removing unreachable block (ram,0x000101c69f64) */

undefined1  [16] FUN_101c69d68(code *param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  long *unaff_x20;
  long *plVar15;
  code *unaff_x21;
  long *unaff_x22;
  code *unaff_x23;
  code *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_stack_00000000;
  undefined *in_stack_00000018;
  code *in_stack_00000020;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [32];
  
  puVar4 = &stack0xffffffffffffffe0;
  puVar2 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  pcVar14 = (code *)0xe600000000000000;
  pcVar12 = (code *)0x7070615f6e69;
  pcVar13 = (code *)(param_2 & 0xff);
  puVar3 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xffffffffffffffe0;
  pcVar11 = param_1;
  plVar15 = unaff_x20;
  switch(pcVar13) {
  case (code *)0x0:
  case (code *)0xd:
    break;
  default:
    pcVar14 = (code *)0xe700000000000000;
  case (code *)0x65:
  case (code *)0x9c:
  case (code *)0xaa:
  case (code *)0xb4:
  case (code *)0xcd:
  case (code *)0xea:
    pcVar12 = (code *)0x6e69;
code_r0x000101c69dac:
    pcVar12 = (code *)((ulong)pcVar12 & 0xffffffff0000ffff | 0x675f0000);
code_r0x000101c69db0:
    pcVar12 = (code *)((ulong)pcVar12 & 0xffff0000ffffffff | 0x6d6100000000);
code_r0x000101c69db4:
    pcVar12 = (code *)((ulong)pcVar12 | 0x65000000000000);
code_r0x000101c69db8:
    break;
  case (code *)0x2:
    pcVar13 = (code *)0x10f006e30;
  case (code *)0x4:
    pcVar14 = (code *)((ulong)pcVar13 | 0x8000000000000000);
code_r0x000101c69dcc:
    pcVar12 = (code *)0xd000000000000012;
code_r0x000101c69dd4:
    break;
  case (code *)0x3:
  case (code *)0xa0:
    pcVar14 = (code *)0x7265;
  case (code *)0x7:
    pcVar14 = (code *)((ulong)pcVar14 | 0x790000);
code_r0x000101c69de0:
    pcVar14 = (code *)((ulong)pcVar14 & 0xffffffffffff | 0xeb00000000000000);
code_r0x000101c69de4:
    pcVar12 = (code *)0x747461625f776f6c;
    break;
  case (code *)0x6:
  case (code *)0x68:
  case (code *)0xf8:
    goto code_r0x000101c69dd4;
  case (code *)0x8:
    goto code_r0x000101c69dcc;
  case (code *)0x9:
    goto code_r0x000101c69de4;
  case (code *)0xb:
    goto code_r0x000101c69de0;
  case (code *)0xc:
  case (code *)0xcc:
    puVar2 = auStack_90;
  case (code *)0xa5:
  case (code *)0xd5:
  case (code *)0xdd:
    puVar3 = puVar2;
code_r0x000101c69e24:
    func_0x000107c6068c(puVar3 + 8);
    param_1 = (code *)(puVar3 + 8);
    FUN_101c69d68(param_1,0x7070615f6e69);
    func_0x000107c606a8();
code_r0x000101c69e44:
    auVar16._8_8_ = pcVar12;
    auVar16._0_8_ = param_1;
    return auVar16;
  case (code *)0x1c:
  case (code *)0x2d:
  case (code *)0x3c:
  case (code *)0x55:
  case (code *)0x74:
    goto code_r0x000101c69ef0;
  case (code *)0x1d:
  case (code *)0x1e:
  case (code *)0x3d:
  case (code *)0x3e:
  case (code *)0x33:
    pcVar14 = pcVar13;
code_r0x000101c69ebc:
    FUN_101c69b94();
    if (unaff_x21 == (code *)0x0) {
      *pcVar14 = SUB81(param_1,0);
    }
    auVar18._8_8_ = pcVar12;
    auVar18._0_8_ = param_1;
    return auVar18;
  case (code *)0x1f:
  case (code *)0x3f:
    goto code_r0x000101c69ebc;
  case (code *)0x20:
  case (code *)0x36:
  case (code *)0x40:
  case (code *)0x7c:
  case (code *)0x82:
  case (code *)0x32:
  case (code *)0x5a:
  case (code *)0x7a:
code_r0x000101c69f74:
    auVar21._8_8_ = 0x7070615f6e69;
    auVar21._0_8_ = param_1;
    return auVar21;
  case (code *)0x21:
  case (code *)0x28:
  case (code *)0x2a:
  case (code *)0x41:
  case (code *)0x48:
  case (code *)0x4a:
  case (code *)0x50:
  case (code *)0x52:
  case (code *)0x6f:
  case (code *)0x71:
  case (code *)0x75:
  case (code *)0x7f:
    goto code_r0x000101c69f48;
  case (code *)0x22:
  case (code *)0x42:
  case (code *)0x81:
    goto code_r0x000101c69f38;
  case (code *)0x23:
  case (code *)0x34:
  case (code *)0x43:
  case (code *)0x77:
    goto code_r0x000101c69f5c;
  case (code *)0x24:
  case (code *)0x44:
  case (code *)0x80:
    puVar4 = &stack0xffffffffffffff90;
    goto code_r0x000101c69f38;
  case (code *)0x25:
  case (code *)0x45:
  case (code *)0x4d:
  case (code *)0x6c:
    auVar17._8_8_ = 0x7070615f6e69;
    auVar17._0_8_ = param_1;
    return auVar17;
  case (code *)0x26:
  case (code *)0x46:
  case (code *)0x4e:
  case (code *)0x6d:
    goto code_r0x000101c69f30;
  case (code *)0x27:
  case (code *)0x2b:
  case (code *)0x2e:
  case (code *)0x30:
  case (code *)0x35:
  case (code *)0x47:
  case (code *)0x4b:
  case (code *)0x4f:
  case (code *)0x53:
  case (code *)0x56:
  case (code *)0x58:
  case (code *)0x64:
  case (code *)0x6e:
  case (code *)0x72:
  case (code *)0x90:
    goto code_r0x000101c69f74;
  case (code *)0x29:
  case (code *)0x49:
  case (code *)0x51:
  case (code *)0x70:
  case (code *)0x7e:
    goto code_r0x000101c69f7c;
  case (code *)0x2c:
  case (code *)0x37:
  case (code *)0x4c:
  case (code *)0x54:
  case (code *)0x73:
    goto code_r0x000101c69f88;
  case (code *)0x2f:
  case (code *)0x57:
  case (code *)0x78:
    goto code_r0x000101c69f28;
  case (code *)0x31:
  case (code *)0x59:
    goto code_r0x000101c69f7c;
  case (code *)0x66:
  case (code *)0xce:
    goto code_r0x000101c6a154;
  case (code *)0x76:
    goto code_r0x000101c69f40;
  case (code *)0x79:
    goto code_r0x000101c69f54;
  case (code *)0x7b:
    goto code_r0x000101c69ee4;
  case (code *)0x7d:
    goto code_r0x000101c69f60;
  case (code *)0x8c:
    goto code_r0x000101c69e08;
  case (code *)0x8d:
  case (code *)0xa1:
  case (code *)0xb5:
    goto code_r0x000101c69fb8;
  case (code *)0x8e:
  case (code *)0xa2:
  case (code *)0xb6:
  case (code *)0xca:
  case (code *)0xd2:
  case (code *)0xda:
  case (code *)0xe2:
  case (code *)0xf6:
    param_1[0x20] = (code)0x0;
    auVar27._8_8_ = 0x7070615f6e69;
    auVar27._0_8_ = param_1;
    return auVar27;
  case (code *)0x8f:
  case (code *)0xa3:
  case (code *)0xb7:
  case (code *)0xcb:
  case (code *)0xd3:
  case (code *)0xdb:
  case (code *)0xe3:
  case (code *)0xf7:
    goto code_r0x000101c69dac;
  case (code *)0x91:
  case (code *)0xb9:
  case (code *)0xf9:
    param_1 = (code *)unaff_x20[2];
    pcVar12 = (code *)unaff_x20[3];
    func_0x000107c61434(pcVar12);
    goto code_r0x000101c69f28;
  case (code *)0x92:
  case (code *)0xba:
  case (code *)0xfa:
    goto code_r0x000101c6a0c8;
  case (code *)0x9a:
  case (code *)0xc2:
    goto code_r0x000101c69db0;
  case (code *)0xa4:
    goto code_r0x000101c6a0c4;
  case (code *)0xa6:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xe6:
    goto code_r0x000101c69e44;
  case (code *)0xa7:
  case (code *)0xd7:
  case (code *)0xdf:
  case (code *)0xe7:
    goto code_r0x000101c6a174;
  case (code *)0xb0:
    plVar15 = unaff_x20 + 4;
    func_0x000101c6ade0(plVar15);
    *(char *)(unaff_x20 + 4) = (char)param_1;
    auVar26._8_8_ = pcVar12;
    auVar26._0_8_ = plVar15;
    return auVar26;
  case (code *)0xb1:
  case (code *)0xf1:
    goto code_r0x000101c6a088;
  case (code *)0xb2:
  case (code *)0xf2:
    puVar6 = auStack_d0;
  case (code *)0xd4:
    *(undefined **)(puVar6 + 0x70) = unaff_x25;
    *(code **)(puVar6 + 0x78) = unaff_x24;
    *(code **)(puVar6 + 0x80) = unaff_x23;
    *(long **)(puVar6 + 0x88) = unaff_x22;
    *(long **)(puVar6 + 0x90) = unaff_x20;
    *(undefined8 *)(puVar6 + 0x98) = 0xe600000000000000;
    *(undefined1 **)(puVar6 + 0xa0) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar6 + 0xa8) = unaff_x30;
    func_0x000103c31f74();
    plVar15 = *(long **)pcVar11;
    unaff_x25 = &UNK_10d9e7c90;
    puVar7 = puVar6;
    pcVar14 = param_1;
    unaff_x22 = unaff_x20;
    unaff_x23 = unaff_x21;
code_r0x000101c6a088:
    FUN_101c69af4();
    func_0x000101c6ae88();
    FUN_101c6a2a0();
    (**(code **)(*plVar15 + 0xa0))(0xd00000000000001c,(ulong)unaff_x25 | 0x8000000000000000,pcVar11)
    ;
    func_0x000101c6ae70();
    func_0x000107c61574(pcVar11);
    pcVar13 = *(code **)pcVar14;
    puVar8 = puVar7;
    unaff_x24 = pcVar11;
code_r0x000101c6a0c4:
    pcVar13 = *(code **)(pcVar13 + 0x128);
    puVar9 = puVar8;
code_r0x000101c6a0c8:
    pcVar12 = (code *)((ulong)unaff_x25 | 0x8000000000000000);
    param_1 = (code *)0xd00000000000001c;
    puVar10 = puVar9;
code_r0x000101c6a0d4:
    (*pcVar13)(param_1,pcVar12);
    if (unaff_x23 != (code *)0x0) goto LAB_101c6a190;
    func_0x000101c6aea8(unaff_x22 + 2,puVar10 + 0x48);
    lVar1 = unaff_x22[2];
    pcVar11 = (code *)unaff_x22[3];
    pcVar13 = *(code **)(*(long *)pcVar14 + 0x2b8);
    func_0x000107c61434(pcVar11);
    pcVar12 = (code *)0x0;
    (*pcVar13)(param_1,0,lVar1,pcVar11);
    goto code_r0x000107c6142c;
  case (code *)0xb3:
  case (code *)0xf3:
    goto code_r0x000101c69db8;
  case (code *)0xb8:
    pcVar14 = pcVar13;
    goto code_r0x000101c69ee4;
  case (code *)0xc4:
    goto code_r0x000101c69db4;
  case (code *)0xc8:
  case (code *)0xd0:
  case (code *)0xd8:
  case (code *)0xe0:
    goto code_r0x000101c6a178;
  case (code *)0xc9:
  case (code *)0xd1:
  case (code *)0xd9:
  case (code *)0xe1:
  case (code *)0xf5:
    param_1 = (code *)(ulong)*(byte *)(unaff_x20 + 4);
    goto code_r0x000101c69fb8;
  case (code *)0xdc:
    goto code_r0x000101c6a164;
  case (code *)0xe4:
    func_0x000101c6adf0(unaff_x20 + 4,param_1);
    auVar24._8_8_ = unaff_x20 + 4;
    auVar24._0_8_ = 0x101c6adc8;
    return auVar24;
  case (code *)0xe5:
    goto code_r0x000101c69e24;
  case (code *)0xf0:
    goto code_r0x000101c6a0d4;
  case (code *)0xf4:
    in_stack_00000018 = &UNK_110460228;
    goto code_r0x000101c6a154;
  }
  pcVar11 = pcVar14;
  func_0x000107c5fb58(param_1,pcVar12,pcVar11);
code_r0x000101c69e08:
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar11);
  auVar28._8_8_ = pcVar12;
  auVar28._0_8_ = pcVar11;
  return auVar28;
code_r0x000101c69f38:
  *(long **)(puVar4 + 0x20) = unaff_x22;
  *(code **)(puVar4 + 0x28) = unaff_x21;
  *(long **)(puVar4 + 0x30) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x38) = 0xe600000000000000;
  puVar5 = puVar4;
code_r0x000101c69f40:
  *(undefined1 **)(puVar5 + 0x40) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar5 + 0x48) = unaff_x30;
code_r0x000101c69f48:
  pcVar11 = (code *)(unaff_x20 + 2);
  pcVar14 = pcVar12;
  unaff_x21 = param_1;
code_r0x000101c69f54:
  func_0x000101c6ade0(pcVar11);
  param_1 = (code *)unaff_x20[3];
code_r0x000101c69f5c:
  unaff_x20[2] = (long)unaff_x21;
  unaff_x20[3] = (long)pcVar14;
  pcVar11 = param_1;
code_r0x000101c69f60:
  goto code_r0x000107c6142c;
code_r0x000101c69fb8:
  auVar23._8_8_ = 0x7070615f6e69;
  auVar23._0_8_ = param_1;
  return auVar23;
code_r0x000101c69f7c:
  pcVar11 = (code *)(unaff_x20 + 2);
  pcVar12 = param_1;
code_r0x000101c69f88:
  func_0x000101c6adf0(pcVar11,pcVar12);
  auVar22._8_8_ = unaff_x20 + 2;
  auVar22._0_8_ = 0x101c6adc4;
  return auVar22;
code_r0x000101c69f28:
code_r0x000101c69f30:
  auVar20._8_8_ = pcVar12;
  auVar20._0_8_ = param_1;
  return auVar20;
code_r0x000101c69ee4:
  FUN_101c69c50();
  *(code **)pcVar14 = param_1;
code_r0x000101c69ef0:
  auVar19._8_8_ = pcVar12;
  auVar19._0_8_ = param_1;
  return auVar19;
code_r0x000101c6a154:
  FUN_101c697a8();
  in_stack_00000000 = SUB81(unaff_x20,0);
  pcVar13 = pcRame600000000000000;
  in_stack_00000020 = param_1;
code_r0x000101c6a164:
  pcVar13 = *(code **)(pcVar13 + 0x308);
  pcVar12 = (code *)0x1;
code_r0x000101c6a174:
code_r0x000101c6a178:
  (*pcVar13)();
  func_0x0001000834e4(&stack0x00000000);
LAB_101c6a190:
  auVar25._8_8_ = pcVar12;
  auVar25._0_8_ = unaff_x24;
  return auVar25;
}



/* Entry: 101c69e0c; end: 101c69e13;  */

void FUN_101c69e0c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  FUN_101c69d68(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c69e14; end: 101c69eab;  */

void FUN_101c69e14(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_101c69d68(auStack_68,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c69eac; end: 101c69ed3;  */

void FUN_101c69eac(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_101c69b94();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101c69ed4; end: 101c69f33;  */

void FUN_101c69ed4(undefined8 *param_1,undefined8 param_2)

{
  FUN_101c69c50();
  *param_1 = param_2;
  return;
}



/* Entry: 101c69f34; end: 101c69f77;  */

void FUN_101c69f34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000101c6ade0(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c69f78; end: 101c69fc3;  */

undefined1  [16] FUN_101c69f78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000101c6adf0(unaff_x20 + 0x10,param_1);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c6adc4;
  return auVar1;
}



/* Entry: 101c69fc4; end: 101c69feb;  */

void FUN_101c69fc4(undefined1 param_1)

{
  long unaff_x20;
  
  func_0x000101c6ade0(unaff_x20 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 101c69fec; end: 101c6a013;  */

undefined1  [16] FUN_101c69fec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000101c6adf0(unaff_x20 + 0x20,param_1);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101c6adc8;
  return auVar1;
}



/* Entry: 101c6a014; end: 101c6a04b;  */

void FUN_101c6a014(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  func_0x000101c6ae24();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101c6a04c; end: 101c6a1b3;  */

long * FUN_101c6a04c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  plVar4 = param_1;
  func_0x000103c31f74();
  plVar6 = (long *)*plVar4;
  FUN_101c69af4();
  func_0x000101c6ae88();
  FUN_101c6a2a0();
  (**(code **)(*plVar6 + 0xa0))(0xd00000000000001c,0x800000010d9e7c90,plVar4);
  func_0x000101c6ae70();
  func_0x000107c61574(plVar4);
  plVar6 = (long *)0xd00000000000001c;
  (**(code **)(*param_1 + 0x128))(0xd00000000000001c,0x800000010d9e7c90);
  if (unaff_x21 == 0) {
    func_0x000101c6aea8(unaff_x20 + 0x10,auStack_68);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    pcVar7 = *(code **)(*param_1 + 0x2b8);
    func_0x000107c61434(uVar2);
    (*pcVar7)(plVar6,0,uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    lVar5 = unaff_x20 + 0x20;
    func_0x000101c6aea8(lVar5,auStack_a8);
    uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
    puStack_78 = &UNK_110460228;
    FUN_101c697a8();
    auStack_90[0] = uVar3;
    lStack_70 = lVar5;
    (**(code **)(*param_1 + 0x308))(plVar6,1,auStack_90);
    func_0x0001000834e4(auStack_90);
    plVar4 = plVar6;
  }
  return plVar4;
}



/* Entry: 101c6a1b4; end: 101c6a1e3;  */

void FUN_101c6a1b4(undefined8 param_1)

{
  func_0x000101c6aee0();
  func_0x000107c613fc(param_1,0x21,7);
  func_0x000101c6af08();
  FUN_101c6a1e4();
  return;
}



/* Entry: 101c6a1e4; end: 101c6a29f;  */

/* WARNING: Removing unreachable block (ram,0x000101c6a258) */

void FUN_101c6a1e4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  undefined1 uStack_31;
  
  uVar2 = 0;
  uVar1 = param_2;
  (**(code **)(*param_1 + 0x218))();
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    pcVar3 = *(code **)(*param_1 + 600);
    func_0x000101c6a3e8();
    func_0x000101c6af1c();
    (*pcVar3)(param_2,1);
    func_0x000101c6ae70();
    *(undefined1 *)(unaff_x20 + 0x20) = uStack_31;
  }
  else {
    func_0x000101c6ae70();
    FUN_101c69af4();
    func_0x000107c61464();
  }
  return;
}



/* Entry: 101c6a2a0; end: 101c6a367;  */

void FUN_101c6a2a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000100e779e8();
  func_0x000101c6ae08();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  lVar1 = param_1;
  func_0x000101c6aec0();
  func_0x000101c6adfc();
  uVar2 = 0x644972657375;
  func_0x000103c31710(0x644972657375,0xe600000000000000,0x73,0xe100000000000000);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x000101c6adfc(lVar1);
  uVar2 = 0x737574617473;
  func_0x000103c31710(0x737574617473,0xe600000000000000,0x275d305b273a72,0xe700000000000000);
  func_0x000101c6ae2c();
  func_0x000107c61538();
  func_0x000101c6ae9c();
  func_0x000101c6ae24();
  func_0x000103c31164(param_1,lVar1,0,uVar2);
  return;
}



/* Entry: 101c6a368; end: 101c6a44b;  */

void FUN_101c6a368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0d788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e7e10;
  func_0x000107c61520(&UNK_10d9e7e10,&UNK_110460228);
  puRam0000000112e0d788 = puVar1;
  return;
}



/* Entry: 101c6a44c; end: 101c6a473;  */

void FUN_101c6a44c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_101c6a1b4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101c6a474; end: 101c6a487;  */

void FUN_101c6a474(void)

{
  FUN_101c6a04c();
  return;
}



/* Entry: 101c6a488; end: 101c6a4d3;  */

void FUN_101c6a488(long *param_1)

{
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



/* Entry: 101c6a4d4; end: 101c6a5eb;  */

void FUN_101c6a4d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_1;
  func_0x000103c31f74();
  plVar3 = (long *)*plVar3;
  func_0x000101c6a608();
  plVar1 = plVar3;
  func_0x000107c6157c(plVar3);
  FUN_101c6a930();
  (**(code **)(*plVar3 + 0xa0))(0xd000000000000017,0x800000010d9e7ce0,plVar1);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(plVar1);
  uVar2 = 0xd000000000000017;
  (**(code **)(*param_1 + 0x128))(0xd000000000000017,0x800000010d9e7ce0);
  if (unaff_x21 == 0) {
    pcVar4 = *(code **)(*param_1 + 0x3b0);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)();
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,1,0x101c6ad94,auStack_80);
  }
  return;
}



/* Entry: 101c6a5ec; end: 101c6a627;  */

void FUN_101c6a5ec(void)

{
  long unaff_x20;
  
  FUN_101c6a4d4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101c6a628; end: 101c6a693;  */

void FUN_101c6a628(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  (**(code **)(*param_1 + 0x140))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 101c6a694; end: 101c6a6ff;  */

void FUN_101c6a694(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  (**(code **)(*param_1 + 0x140))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 101c6a700; end: 101c6a727;  */

void FUN_101c6a700(void)

{
  long unaff_x20;
  
  func_0x000101c6add0(unaff_x20 + 0x10);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c6a728; end: 101c6a757;  */

void FUN_101c6a728(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000101c6ade0(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101c6a758; end: 101c6a7a7;  */

undefined1  [16] FUN_101c6a758(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000101c6adf0(unaff_x20 + 0x10,param_1);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c6adcc;
  return auVar1;
}



/* Entry: 101c6a7a8; end: 101c6a7d7;  */

void FUN_101c6a7a8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000101c6ade0(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101c6a7d8; end: 101c6a7ff;  */

undefined1  [16] FUN_101c6a7d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000101c6adf0(unaff_x20 + 0x18,param_1);
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = FUN_101c6a800;
  return auVar1;
}



/* Entry: 101c6a800; end: 101c6a803;  */

void FUN_101c6a800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}


