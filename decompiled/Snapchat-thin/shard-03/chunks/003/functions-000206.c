/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10270aae8; end: 10270ab03;  */

undefined1  [16] FUN_10270aae8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c740;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 10270ab04; end: 10270ab3f;  */

undefined8 FUN_10270ab04(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270ab40; end: 10270ab6b; +[SCAddWidgetTrigger actionName] */

void FUN_10270ab40(void)

{
  func_0x000107c5fadc(0x676469772d646461,0xea00000000007465);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270ab6c; end: 10270ac8b; -[SCAddWidgetTrigger initWithParameters:] */

undefined8 FUN_10270ab6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x692d646e65697266;
  uVar3 = 0xe900000000000064;
  func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270ac44;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270ac44:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270ac8c; end: 10270aca7;  */

undefined1  [16] FUN_10270ac8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007465;
  auVar1._0_8_ = 0x676469772d646461;
  return auVar1;
}



/* Entry: 10270aca8; end: 10270ace3;  */

undefined8 FUN_10270aca8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270ace4; end: 10270ae13;  */

undefined * FUN_10270ace4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101395f90(0,lVar5,0);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar5 != 0) {
    do {
      puVar2 = puStack_68;
      param_1 = param_1 + 0x20;
      func_0x0001000bb420(param_1,auStack_88);
      func_0x000100102924(auStack_88,auStack_a8);
      uVar3 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      uVar4 = 0;
      func_0x000107c6147c(&uStack_b0,auStack_a8,puVar1 + 8,uVar3,6);
      uVar3 = uStack_b0;
      if ((uVar4 & 1) == 0) {
        func_0x000107c61574(puVar2);
        return (undefined *)0x0;
      }
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x000101395f90(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puStack_68;
}



/* Entry: 10270ae14; end: 10270ae3f; +[SCClusterTappedTrigger actionName] */

void FUN_10270ae14(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01c7a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270ae40; end: 10270b177;  */

undefined8 FUN_10270ae40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  
  uVar2 = 0x6469;
  uVar10 = 0xe200000000000000;
  func_0x0001027084f8();
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      uVar4 = uVar2;
      func_0x000107c5fb5c(uVar2,uVar10);
      if ((long)uVar4 < 1) goto LAB_10270b0a4;
      uVar4 = uVar2 & 0xffffffffffff;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar4 = uVar10 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        lVar3 = 0x656475746974616c;
        func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
        if (lVar3 != 0) {
          lVar11 = lVar3;
          func_0x000107c5dc3c();
          if ((int)lVar11 == 5) {
            func_0x000107c4223c(lVar3);
            uVar12 = param_1;
            func_0x000107c61170(lVar3);
            lVar3 = 0x64757469676e6f6c;
            func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
            if (lVar3 == 0) goto LAB_10270b0c4;
            lVar11 = lVar3;
            func_0x000107c5dc3c();
            if ((int)lVar11 == 5) {
              func_0x000107c4223c(lVar3);
              func_0x000107c61170(lVar3);
              uVar4 = 0x7364695f72657375;
              FUN_1027086ec(0x7364695f72657375,0xe800000000000000);
              if (uVar4 != 0) {
                uVar5 = uVar4;
                func_0x000101158fcc();
                func_0x000107c6142c();
                iVar1 = (int)uVar4;
                if (uVar5 != 0) {
                  if ((*(long *)(uVar5 + 0x10) != 0) &&
                     (func_0x000107c60a00(param_1,uVar12), iVar1 != 0)) {
                    uVar6 = param_2;
                    FUN_10270b9a4(param_2);
                    lVar11 = -0x7ffffffef0fe3a00;
                    lVar3 = -0x2fffffffffffffef;
                    func_0x0001027084f8();
                    if (lVar3 != 0) {
                      lVar7 = lVar3;
                      func_0x000107c5c1d4();
                      func_0x000107c61180();
                      func_0x000107c61170(lVar3);
                      if (lVar7 != 0) {
                        lVar3 = lVar7;
                        func_0x000107c5faec();
                        func_0x000107c61170(lVar7);
                        lVar7 = lVar3;
                        func_0x000107c5fb5c(lVar3,lVar11);
                        if (0 < lVar7) goto LAB_10270b030;
                        func_0x000107c6142c(lVar11);
                      }
                    }
                    lVar3 = 0;
                    lVar11 = 0;
LAB_10270b030:
                    func_0x000107c5fadc(uVar2,uVar10);
                    func_0x000107c6142c(uVar10);
                    uVar10 = uVar5;
                    func_0x000107c5fc48(uVar5,PTR___sSSN_11034da80);
                    func_0x000107c6142c(uVar5);
                    uVar8 = 0;
                    func_0x000103b3abc8(0);
                    uVar9 = uVar6;
                    func_0x000107c5fc48(uVar6,uVar8);
                    func_0x000107c6142c(uVar6);
                    if (lVar11 == 0) {
                      lVar3 = 0;
                    }
                    else {
                      func_0x000107c5fadc(lVar3,lVar11);
                      func_0x000107c6142c(lVar11);
                    }
                    func_0x000107c46d60(param_1,uVar12);
                    func_0x000107c61170(uVar2);
                    func_0x000107c61170(uVar10);
                    func_0x000107c61170(uVar9);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(param_2);
                    return unaff_x20;
                  }
                  func_0x000107c6142c(uVar10);
                  uVar10 = uVar5;
                  goto LAB_10270b0c4;
                }
              }
LAB_10270b0a4:
              func_0x000107c61170(param_2);
              func_0x000107c6142c(uVar10);
              goto LAB_10270b0d0;
            }
          }
          func_0x000107c61170(lVar3);
        }
      }
LAB_10270b0c4:
      func_0x000107c6142c(uVar10);
    }
  }
  func_0x000107c61170(param_2);
LAB_10270b0d0:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270b178; end: 10270b19f; -[SCClusterTappedTrigger initWithParameters:] */

void FUN_10270b178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270ae40();
  return;
}



/* Entry: 10270b1a0; end: 10270b64f;  */

void FUN_10270b1a0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  char cVar19;
  char cStack_a0;
  undefined7 uStack_9f;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar15 = 0;
  uVar6 = 0;
  uVar7 = 0;
  pcVar8 = &cStack_a0;
  uVar9 = 0;
  uVar12 = 0;
  uVar13 = 0;
  puVar16 = (undefined *)*param_2;
  if (*(long *)(puVar16 + 0x10) != 0) {
    func_0x000107c61434(puVar16);
    lVar5 = 0x6469;
    uVar11 = 0;
    func_0x000100029284(0x6469);
    if ((uVar11 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
      func_0x000107c6142c(puVar16);
      puVar3 = PTR___sypN_11034f1a8;
      func_0x000107c6147c(&cStack_a0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      puVar10 = puStack_98;
      if ((uVar15 & 1) != 0) {
        uVar11 = CONCAT71(uStack_9f,cStack_a0);
        uVar15 = uVar11 & 0xffffffffffff;
        if (((ulong)puStack_98 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)puStack_98 >> 0x38 & 0xf;
        }
        if ((uVar15 != 0) && (*(long *)(puVar16 + 0x10) != 0)) {
          func_0x000107c61434(puVar16);
          lVar5 = 0x656475746974616c;
          uVar15 = 0;
          func_0x000100029284(0x656475746974616c);
          if ((uVar15 & 1) != 0) {
            func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
            func_0x000107c6142c(puVar16);
            func_0x000107c6147c(&cStack_a0,&uStack_90,puVar3 + 8,PTR___sSdN_11034dd90,6);
            if (((uVar6 & 1) == 0) || (*(long *)(puVar16 + 0x10) == 0)) goto LAB_10270b444;
            uVar1 = CONCAT71(uStack_9f,cStack_a0);
            func_0x000107c61434(puVar16);
            lVar5 = 0x64757469676e6f6c;
            uVar15 = 0xe900000000000065;
            func_0x000100029284(0x64757469676e6f6c);
            if ((uVar15 & 1) == 0) goto LAB_10270b43c;
            func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
            func_0x000107c6142c(puVar16);
            func_0x000107c6147c(&cStack_a0,&uStack_90,puVar3 + 8,PTR___sSdN_11034dd90,6);
            if (((uVar7 & 1) == 0) || (*(long *)(puVar16 + 0x10) == 0)) goto LAB_10270b444;
            uVar2 = CONCAT71(uStack_9f,cStack_a0);
            func_0x000107c61434(puVar16);
            lVar5 = 0x69747265706f7270;
            uVar15 = 0xea00000000007365;
            func_0x000100029284(0x69747265706f7270);
            if ((uVar15 & 1) == 0) goto LAB_10270b43c;
            func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
            func_0x000107c6142c(puVar16);
            uVar18 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            func_0x000107c6147c(&cStack_a0,&uStack_90,puVar3 + 8,uVar18,6);
            iVar4 = (int)pcVar8;
            if (((ulong)pcVar8 & 1) == 0) goto LAB_10270b444;
            puVar16 = (undefined *)CONCAT71(uStack_9f,cStack_a0);
            func_0x000107c60a00(uVar1,uVar2);
            if (iVar4 == 0) goto LAB_10270b43c;
            if (*(long *)(puVar16 + 0x10) == 0) {
LAB_10270b480:
              uVar18 = 0;
              puVar17 = (undefined *)0xe000000000000000;
            }
            else {
              func_0x000107c61434(puVar16);
              uVar15 = 0;
              lVar5 = -0x2fffffffffffffef;
              func_0x000100029284(0xd000000000000011);
              if ((uVar15 & 1) == 0) {
                func_0x000107c6142c(puVar16);
                goto LAB_10270b480;
              }
              func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
              func_0x000107c6142c(puVar16);
              func_0x000107c6147c(&cStack_a0,&uStack_90,puVar3 + 8,PTR___sSSN_11034da80,6);
              if ((uVar9 & 1) == 0) goto LAB_10270b480;
              uVar18 = CONCAT71(uStack_9f,cStack_a0);
              puVar17 = puStack_98;
            }
            if (*(long *)(puVar16 + 0x10) == 0) {
LAB_10270b500:
              cVar19 = '\0';
            }
            else {
              func_0x000107c61434(puVar16);
              lVar5 = 0x7473756c635f7369;
              uVar15 = 0xea00000000007265;
              func_0x000100029284(0x7473756c635f7369);
              if ((uVar15 & 1) == 0) {
                func_0x000107c6142c(puVar16);
                goto LAB_10270b500;
              }
              func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
              func_0x000107c6142c(puVar16);
              func_0x000107c6147c(&cStack_a0,&uStack_90,puVar3 + 8,PTR___sSbN_11034dd40,6);
              cVar19 = cStack_a0;
              if ((uVar12 & 1) == 0) goto LAB_10270b500;
            }
            if (*(long *)(puVar16 + 0x10) == 0) {
LAB_10270b554:
              uStack_88 = 0;
              uStack_90 = 0;
              lStack_78 = 0;
              uStack_80 = 0;
            }
            else {
              func_0x000107c61434(puVar16);
              lVar5 = 0x7364695f72657375;
              uVar15 = 0;
              func_0x000100029284(0x7364695f72657375);
              if ((uVar15 & 1) == 0) {
                func_0x000107c6142c(puVar16);
                goto LAB_10270b554;
              }
              func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar5 * 0x20,&uStack_90);
              func_0x000107c6142c(puVar16);
            }
            func_0x000107c6142c(puVar16);
            if (lStack_78 == 0) {
              func_0x00010006e7f4(&uStack_90);
              puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              uVar14 = 0x112d38270;
              func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
              func_0x000107c6147c(&cStack_a0,&uStack_90,puVar3 + 8,uVar14,6);
              puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((uVar13 & 1) != 0) {
                puVar16 = (undefined *)CONCAT71(uStack_9f,cStack_a0);
              }
            }
            if (cVar19 == '\0') {
              func_0x000107c6142c(puVar16);
              puVar16 = (undefined *)0x112d38280;
              func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
              func_0x000107c613fc();
              *(undefined8 *)(puVar16 + 0x18) = 2;
              *(undefined8 *)(puVar16 + 0x10) = 1;
              *(ulong *)(puVar16 + 0x20) = uVar11;
              *(undefined **)(puVar16 + 0x28) = puVar10;
              func_0x000107c61434(puVar10);
            }
            else if (*(long *)(puVar16 + 0x10) == 0) {
              func_0x000107c6142c(puVar10);
              puVar10 = puVar17;
              goto LAB_10270b43c;
            }
            uVar14 = 0;
            func_0x000103b3abc8(0);
            func_0x000107c610f8();
            func_0x000103b3ab50(uVar1,uVar2,uVar11,puVar10,puVar16,uVar18,puVar17,cVar19,uVar14);
            goto LAB_10270b450;
          }
LAB_10270b43c:
          func_0x000107c6142c(puVar10);
          puVar10 = puVar16;
        }
LAB_10270b444:
        func_0x000107c6142c(puVar10);
      }
      uVar11 = 0;
      goto LAB_10270b450;
    }
    func_0x000107c6142c(puVar16);
  }
  uVar11 = 0;
LAB_10270b450:
  *param_1 = uVar11;
  return;
}



/* Entry: 10270b650; end: 10270b66b;  */

undefined1  [16] FUN_10270b650(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c7a0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 10270b66c; end: 10270b6a7;  */

undefined8 FUN_10270b66c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270b6a8; end: 10270b703;  */

void FUN_10270b6a8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000103b3abc8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112eba190;
  plVar5 = (long *)&UNK_10dad1b48;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10270b704; end: 10270b82b;  */

ulong FUN_10270b704(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10270b82c);
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
  FUN_10270b82c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10270b828);
      (*pcVar1)();
    }
    FUN_10270b8ac(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10270b82c; end: 10270b8ab;  */

undefined * FUN_10270b82c(undefined *param_1,undefined *param_2)

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
    FUN_10270b6a8();
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



/* Entry: 10270b8ac; end: 10270b9a3;  */

long FUN_10270b8ac(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10270b9a0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10270b9a4);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103b3abc8(0);
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
      func_0x000103b3abc8(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10270b99c);
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



/* Entry: 10270b9a4; end: 10270bba7;  */

undefined * FUN_10270b9a4(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar3 = -0x2fffffffffffffec;
  func_0x0001027084f8(0xd000000000000014,0x800000010f01c5e0);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5dc3c();
    if ((int)lVar4 == 6) {
      func_0x000102707d5c(auStack_80);
      func_0x000107c61170(lVar3);
      if (lStack_68 == 0) {
        func_0x00010006e7f4(auStack_80);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar5 = 0x112daafe8;
        func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
        plVar6 = &lStack_88;
        func_0x000107c6147c(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
        lVar3 = lStack_88;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (((ulong)plVar6 & 1) != 0) {
          lVar4 = lStack_88;
          FUN_10270ace4();
          func_0x000107c6142c(lVar3);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (lVar4 != 0) {
            uVar11 = *(ulong *)(lVar4 + 0x10);
            if (uVar11 != 0) {
              uVar12 = 0;
              do {
                if (*(ulong *)(lVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10270bba8);
                  (*pcVar2)();
                }
                auStack_80[0] = *(undefined8 *)(lVar4 + 0x20 + uVar12 * 8);
                FUN_10270b1a0(&lStack_88,auStack_80);
                lVar3 = lStack_88;
                if (lStack_88 != 0) {
                  puVar8 = puVar9;
                  func_0x000107c61550();
                  if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
                     (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar9 >> 0x3e == 0) {
                      puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar9) {
                        puVar7 = puVar9;
                      }
                      func_0x000107c60480(puVar7);
                    }
                    puVar8 = (undefined *)0x0;
                    FUN_10270b704(0,puVar7 + 1,1,puVar9);
                  }
                  uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
                  uVar1 = *(ulong *)(uVar10 + 0x10);
                  puVar9 = puVar8;
                  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
                    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
                    FUN_10270b704(puVar9,uVar1 + 1,1,puVar8);
                    uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
                  *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar3;
                }
                uVar12 = uVar12 + 1;
              } while (uVar11 != uVar12);
            }
            func_0x000107c6142c(lVar4);
          }
        }
      }
    }
    else {
      func_0x000107c61170(lVar3);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  return puVar9;
}



/* Entry: 10270bba8; end: 10270bbc3;  */

undefined1  [16] FUN_10270bba8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c7c0;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 10270bbc4; end: 10270bbfb;  */

undefined8 FUN_10270bbc4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270bbfc; end: 10270bc17;  */

undefined1  [16] FUN_10270bbfc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c7e0;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 10270bc18; end: 10270bc4f;  */

undefined8 FUN_10270bc18(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270bc50; end: 10270bc6b;  */

undefined1  [16] FUN_10270bc50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c800;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Entry: 10270bc6c; end: 10270bca3;  */

undefined8 FUN_10270bc6c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270bca4; end: 10270bcd3; +[SCLaunchChatTrigger actionName] */

void FUN_10270bca4(void)

{
  func_0x000107c5fadc(0x632d68636e75616c,0xeb00000000746168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270bcd4; end: 10270bdf3; -[SCLaunchChatTrigger initWithParameters:] */

undefined8 FUN_10270bcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x692d646e65697266;
  uVar3 = 0xe900000000000064;
  func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270bdac;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270bdac:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270bdf4; end: 10270be13;  */

undefined1  [16] FUN_10270bdf4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000746168;
  auVar1._0_8_ = 0x632d68636e75616c;
  return auVar1;
}



/* Entry: 10270be14; end: 10270be4f;  */

undefined8 FUN_10270be14(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270be50; end: 10270be7f; +[SCLaunchDropsAppTrigger actionName] */

void FUN_10270be50(void)

{
  func_0x000107c5fadc(0x642d68636e75616c,0xec00000073706f72);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270be80; end: 10270c19f;  */

undefined8 FUN_10270be80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  
  lVar1 = 0x656475746974616c;
  func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc3c();
    if ((int)lVar2 == 5) {
      func_0x000107c4223c(lVar1);
      uVar8 = param_1;
      func_0x000107c61170(lVar1);
      lVar1 = 0x64757469676e6f6c;
      func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5dc3c();
        if ((int)lVar2 != 5) goto LAB_10270c0cc;
        func_0x000107c4223c(lVar1);
        func_0x000107c61170(lVar1);
        lVar1 = 0x64692d706f7264;
        uVar5 = 0xe700000000000000;
        func_0x0001027084f8(0x64692d706f7264,0xe700000000000000);
        if (lVar1 != 0) {
          lVar2 = lVar1;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          if (lVar2 != 0) {
            lVar1 = lVar2;
            func_0x000107c5faec();
            func_0x000107c61170(lVar2);
            lVar2 = lVar1;
            func_0x000107c5fb5c(lVar1,uVar5);
            if (lVar2 < 1) {
              func_0x000107c61170(param_2);
              func_0x000107c6142c(uVar5);
              goto LAB_10270c0dc;
            }
            lVar2 = 0x692d7265646e6573;
            lVar6 = -0x16ffffffffffff9c;
            func_0x0001027084f8();
            if (lVar2 == 0) {
LAB_10270c00c:
              lVar2 = 0;
              lVar6 = 0;
            }
            else {
              lVar3 = lVar2;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              func_0x000107c61170(lVar2);
              if (lVar3 == 0) goto LAB_10270c00c;
              lVar2 = lVar3;
              func_0x000107c5faec();
              func_0x000107c61170(lVar3);
              lVar3 = lVar2;
              func_0x000107c5fb5c(lVar2,lVar6);
              if (lVar3 < 1) {
                func_0x000107c6142c(lVar6);
                goto LAB_10270c00c;
              }
            }
            lVar3 = 0x2d73736572646461;
            lVar7 = -0x13ffffff8b879a8c;
            func_0x0001027084f8();
            if (lVar3 != 0) {
              lVar4 = lVar3;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              func_0x000107c61170(lVar3);
              if (lVar4 != 0) {
                lVar3 = lVar4;
                func_0x000107c5faec();
                func_0x000107c61170(lVar4);
                lVar4 = lVar3;
                func_0x000107c5fb5c(lVar3,lVar7);
                if (0 < lVar4) goto LAB_10270c094;
                func_0x000107c6142c(lVar7);
              }
            }
            lVar3 = 0;
            lVar7 = 0;
LAB_10270c094:
            func_0x000107c5fadc(lVar1,uVar5);
            func_0x000107c6142c(uVar5);
            if (lVar6 == 0) {
              lVar2 = 0;
            }
            else {
              func_0x000107c5fadc(lVar2,lVar6);
              func_0x000107c6142c(lVar6);
            }
            if (lVar7 == 0) {
              lVar3 = 0;
            }
            else {
              func_0x000107c5fadc(lVar3,lVar7);
              func_0x000107c6142c(lVar7);
            }
            func_0x000107c474c0(param_1,uVar8);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(param_2);
            return unaff_x20;
          }
        }
      }
    }
    else {
LAB_10270c0cc:
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c61170(param_2);
LAB_10270c0dc:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270c1a0; end: 10270c1c7; -[SCLaunchDropsAppTrigger initWithParameters:] */

void FUN_10270c1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270be80();
  return;
}



/* Entry: 10270c1c8; end: 10270c1e7;  */

undefined1  [16] FUN_10270c1c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000073706f72;
  auVar1._0_8_ = 0x642d68636e75616c;
  return auVar1;
}



/* Entry: 10270c1e8; end: 10270c223;  */

undefined8 FUN_10270c1e8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270c224; end: 10270c243;  */

undefined1  [16] FUN_10270c224(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c840;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Entry: 10270c244; end: 10270c5c3;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_10270c244(long param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  double adStack_78 [4];
  long lStack_58;
  
  lVar5 = 0x7364692d70616e73;
  func_0x0001027084f8(0x7364692d70616e73,0xe800000000000000);
  if (lVar5 == 0) {
LAB_10270c4b0:
    func_0x000107c61170(param_1);
    return 0.0;
  }
  lVar6 = lVar5;
  func_0x000107c5dc3c();
  if ((int)lVar6 != 6) {
    func_0x000107c61170(param_1);
    param_1 = lVar5;
    goto LAB_10270c4b0;
  }
  func_0x000102707d5c(adStack_78 + 1);
  func_0x000107c61170(lVar5);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(adStack_78 + 1);
    goto LAB_10270c4b0;
  }
  uVar7 = 0x112daafe8;
  func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
  puVar1 = PTR___sypN_11034f1a8;
  pdVar8 = adStack_78;
  func_0x000107c6147c(pdVar8,adStack_78 + 1,PTR___sypN_11034f1a8 + 8,uVar7,6);
  dVar10 = adStack_78[0];
  if (((ulong)pdVar8 & 1) == 0) goto LAB_10270c4b0;
  dVar9 = adStack_78[0];
  func_0x000101158fcc();
  func_0x000107c6142c(dVar10);
  if (dVar9 == 0.0) goto LAB_10270c4b0;
  dVar10 = 1.693744187421596e+190;
  func_0x000102708798(0x676e69646e756f62,0xec000000786f622d);
  if (dVar10 == 0.0) {
    func_0x000107c6142c(dVar9);
    goto LAB_10270c4b0;
  }
  if (*(long *)((long)dVar10 + 0x10) == 0) {
LAB_10270c4d4:
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c61434(dVar10);
    lVar5 = 0x706f74;
    uVar11 = 0;
    func_0x000100029284(0x706f74);
    if ((uVar11 & 1) != 0) {
      func_0x0001000bb420(*(long *)((long)dVar10 + 0x38) + lVar5 * 0x20,adStack_78 + 1);
      func_0x000107c6142c(dVar10);
      pdVar8 = adStack_78;
      func_0x000107c6147c(pdVar8,adStack_78 + 1,puVar1 + 8,PTR___sSdN_11034dd90,6);
      dVar2 = adStack_78[0];
      if ((((ulong)pdVar8 & 1) == 0) || (*(long *)((long)dVar10 + 0x10) == 0)) goto LAB_10270c4d4;
      func_0x000107c61434(dVar10);
      lVar5 = 0x6d6f74746f62;
      uVar11 = 0;
      func_0x000100029284(0x6d6f74746f62);
      if ((uVar11 & 1) == 0) goto LAB_10270c4ec;
      func_0x0001000bb420(*(long *)((long)dVar10 + 0x38) + lVar5 * 0x20,adStack_78 + 1);
      func_0x000107c6142c(dVar10);
      pdVar8 = adStack_78;
      func_0x000107c6147c(pdVar8,adStack_78 + 1,puVar1 + 8,PTR___sSdN_11034dd90,6);
      dVar3 = adStack_78[0];
      if ((((ulong)pdVar8 & 1) == 0) || (*(long *)((long)dVar10 + 0x10) == 0)) goto LAB_10270c4d4;
      func_0x000107c61434(dVar10);
      lVar5 = 0x7466656c;
      uVar11 = 0;
      func_0x000100029284(0x7466656c);
      if ((uVar11 & 1) == 0) goto LAB_10270c4ec;
      func_0x0001000bb420(*(long *)((long)dVar10 + 0x38) + lVar5 * 0x20,adStack_78 + 1);
      func_0x000107c6142c(dVar10);
      pdVar8 = adStack_78;
      func_0x000107c6147c(pdVar8,adStack_78 + 1,puVar1 + 8,PTR___sSdN_11034dd90,6);
      dVar4 = adStack_78[0];
      if (((ulong)pdVar8 & 1) == 0) goto LAB_10270c4d4;
      if (*(long *)((long)dVar10 + 0x10) == 0) {
LAB_10270c51c:
        adStack_78[2] = 0.0;
        adStack_78[1] = 0.0;
        lStack_58 = 0;
        adStack_78[3] = 0.0;
      }
      else {
        func_0x000107c61434(dVar10);
        lVar5 = 0x7468676972;
        uVar11 = 0;
        func_0x000100029284(0x7468676972);
        if ((uVar11 & 1) == 0) {
          func_0x000107c6142c(dVar10);
          goto LAB_10270c51c;
        }
        func_0x0001000bb420(*(long *)((long)dVar10 + 0x38) + lVar5 * 0x20,adStack_78 + 1);
        func_0x000107c6142c(dVar10);
      }
      func_0x000107c6142c(dVar10);
      if (lStack_58 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(dVar9);
        func_0x00010006e7f4(adStack_78 + 1);
        return 0.0;
      }
      pdVar8 = adStack_78;
      func_0x000107c6147c(pdVar8,adStack_78 + 1,puVar1 + 8,PTR___sSdN_11034dd90,6);
      if (((ulong)pdVar8 & 1) != 0) {
        func_0x000103b3b99c(0);
        func_0x000107c610f8();
        func_0x000103b3b8ac(dVar4,dVar2,adStack_78[0] - dVar4,dVar3 - dVar2,dVar9);
        func_0x000107c61170(param_1);
        return dVar9;
      }
      func_0x000107c61170(param_1);
      goto LAB_10270c508;
    }
LAB_10270c4ec:
    func_0x000107c61170(param_1);
    func_0x000107c6142c(dVar9);
    dVar9 = dVar10;
  }
  func_0x000107c6142c(dVar10);
LAB_10270c508:
  func_0x000107c6142c(dVar9);
  return 0.0;
}



/* Entry: 10270c5c4; end: 10270c5f3; +[SCLaunchStoryTrigger actionName] */

void FUN_10270c5c4(void)

{
  func_0x000107c5fadc(0x732d68636e75616c,0xec00000079726f74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270c5f4; end: 10270c713; -[SCLaunchStoryTrigger initWithParameters:] */

undefined8 FUN_10270c5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x692d646e65697266;
  uVar3 = 0xe900000000000064;
  func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270c6cc;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270c6cc:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270c714; end: 10270c733;  */

undefined1  [16] FUN_10270c714(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000079726f74;
  auVar1._0_8_ = 0x732d68636e75616c;
  return auVar1;
}



/* Entry: 10270c734; end: 10270c76f;  */

undefined8 FUN_10270c734(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270c770; end: 10270c79b; +[SCLocationLoadingTimedOutTrigger actionName] */

void FUN_10270c770(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01c870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270c79c; end: 10270c8ab; -[SCLocationLoadingTimedOutTrigger initWithParameters:] */

undefined8 FUN_10270c79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x6469;
  uVar3 = 0xe200000000000000;
  func_0x0001027084f8(0x6469,0xe200000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270c864;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270c864:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270c8ac; end: 10270c8c7;  */

undefined1  [16] FUN_10270c8ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c870;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 10270c8c8; end: 10270c903;  */

undefined8 FUN_10270c8c8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270c904; end: 10270c937; +[SCOpenFocusViewTrigger actionName] */

void FUN_10270c904(void)

{
  func_0x000107c5fadc(0x636f662d6e65706f,0xef776569762d7375);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270c938; end: 10270ca57; -[SCOpenFocusViewTrigger initWithParameters:] */

undefined8 FUN_10270c938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x692d646e65697266;
  uVar3 = 0xe900000000000064;
  func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270ca10;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270ca10:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270ca58; end: 10270ca7b;  */

undefined1  [16] FUN_10270ca58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef776569762d7375;
  auVar1._0_8_ = 0x636f662d6e65706f;
  return auVar1;
}



/* Entry: 10270ca7c; end: 10270cab7;  */

undefined8 FUN_10270ca7c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270cab8; end: 10270cae3; +[SCOpenHomeProfileTrigger actionName] */

void FUN_10270cab8(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01c890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270cae4; end: 10270cd23;  */

undefined8 FUN_10270cae4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = 0x656475746974616c;
  func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc3c();
    if ((int)lVar2 == 5) {
      func_0x000107c4223c(lVar1);
      uVar4 = param_1;
      func_0x000107c61170(lVar1);
      lVar1 = 0x64757469676e6f6c;
      func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
      if (lVar1 == 0) goto LAB_10270cc84;
      lVar2 = lVar1;
      func_0x000107c5dc3c();
      if ((int)lVar2 == 5) {
        func_0x000107c4223c(lVar1);
        uVar5 = uVar4;
        func_0x000107c61170(lVar1);
        lVar1 = 0x656c676e61;
        func_0x0001027084f8(0x656c676e61,0xe500000000000000);
        if (lVar1 == 0) goto LAB_10270cc84;
        lVar2 = lVar1;
        func_0x000107c5dc3c();
        if ((int)lVar2 == 5) {
          func_0x000107c4223c(lVar1);
          uVar6 = uVar5;
          func_0x000107c61170(lVar1);
          lVar1 = 0x6d6f6f7a;
          func_0x0001027084f8(0x6d6f6f7a,0xe400000000000000);
          if (lVar1 == 0) goto LAB_10270cc84;
          lVar2 = lVar1;
          func_0x000107c5dc3c();
          if ((int)lVar2 == 5) {
            func_0x000107c4223c(lVar1);
            func_0x000107c61170(lVar1);
            lVar1 = 0x692d646e65697266;
            uVar3 = 0xe900000000000064;
            func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
            if (lVar1 != 0) {
              lVar2 = lVar1;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              func_0x000107c61170(lVar1);
              if (lVar2 != 0) {
                lVar1 = lVar2;
                func_0x000107c5faec();
                func_0x000107c61170(lVar2);
                lVar2 = lVar1;
                func_0x000107c5fb5c(lVar1,uVar3);
                if (0 < lVar2) goto LAB_10270ccd8;
                func_0x000107c6142c(uVar3);
              }
              lVar1 = 0;
            }
            uVar3 = 0xe000000000000000;
LAB_10270ccd8:
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar3);
            func_0x000107c46a10(param_1,uVar4,uVar5,uVar6);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(param_2);
            return unaff_x20;
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
LAB_10270cc84:
  func_0x000107c61170(param_2);
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270cd24; end: 10270cd4b; -[SCOpenHomeProfileTrigger initWithParameters:] */

void FUN_10270cd24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270cae4();
  return;
}



/* Entry: 10270cd4c; end: 10270cd67;  */

undefined1  [16] FUN_10270cd4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c890;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 10270cd68; end: 10270cda3;  */

undefined8 FUN_10270cd68(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270cda4; end: 10270cdcf; +[SCOpenLensTrigger actionName] */

void FUN_10270cda4(void)

{
  func_0x000107c5fadc(0x6e656c2d6e65706f,0xe900000000000073);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270cdd0; end: 10270d023;  */

undefined8 FUN_10270cdd0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  long lVar7;
  
  lVar1 = 0x64692d736e656c;
  uVar5 = 0xe700000000000000;
  func_0x0001027084f8(0x64692d736e656c,0xe700000000000000);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar4 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar5);
      if (0 < lVar4) {
        uVar2 = 0x692d646e65697266;
        uVar6 = 0xe900000000000064;
        func_0x0001027084f8();
        if (uVar2 != 0) {
          uVar3 = uVar2;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          if (uVar3 != 0) {
            uVar2 = uVar3;
            func_0x000107c5faec();
            func_0x000107c61170(uVar3);
            uVar3 = uVar2;
            func_0x000107c5fb5c(uVar2,uVar6);
            if (0 < (long)uVar3) goto LAB_10270ced4;
            func_0x000107c6142c(uVar6);
          }
        }
        uVar2 = 0;
        uVar6 = 0;
LAB_10270ced4:
        lVar4 = 0x702d68636e75616c;
        func_0x000102708798(0x702d68636e75616c,0xed0000736d617261);
        func_0x000107c5fadc(lVar1,uVar5);
        func_0x000107c6142c(uVar5);
        if (uVar6 == 0) {
          uVar2 = 0;
        }
        else {
          uVar3 = uVar2 & 0xffffffffffff;
          if ((uVar6 & 0x2000000000000000) != 0) {
            uVar3 = uVar6 >> 0x38 & 0xf;
          }
          if (uVar3 == 0) {
            uVar2 = 0;
          }
          else {
            func_0x000107c5fadc(uVar2,uVar6);
          }
          func_0x000107c6142c(uVar6);
        }
        if (lVar4 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar4;
          func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(lVar4);
        }
        func_0x000107c472c4();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(param_1);
        return unaff_x20;
      }
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar5);
      goto LAB_10270cf48;
    }
  }
  func_0x000107c61170(param_1);
LAB_10270cf48:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270d024; end: 10270d04b; -[SCOpenLensTrigger initWithParameters:] */

void FUN_10270d024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270cdd0();
  return;
}



/* Entry: 10270d04c; end: 10270d067;  */

undefined1  [16] FUN_10270d04c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000073;
  auVar1._0_8_ = 0x6e656c2d6e65706f;
  return auVar1;
}



/* Entry: 10270d068; end: 10270d0a3;  */

undefined8 FUN_10270d068(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270d0a4; end: 10270d0cf; +[SCOpenNowPlayingSettingsTrigger actionName] */

void FUN_10270d0a4(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01c8d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270d0d0; end: 10270d0ef; -[SCOpenNowPlayingSettingsTrigger initWithParameters:] */

void FUN_10270d0d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10270d0f0; end: 10270d12b;  */

undefined8 FUN_10270d0f0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270d12c; end: 10270d157; +[SCOpenPlaceTrigger actionName] */

void FUN_10270d12c(void)

{
  func_0x000107c5fadc(0x616c702d6e65706f,0xea00000000006563);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270d158; end: 10270d7af;  */

undefined8 FUN_10270d158(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = 0x656372756f73;
  lVar8 = -0x1a00000000000000;
  func_0x0001027084f8();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      uVar2 = uVar1;
      func_0x000107c5fb5c(uVar1,lVar8);
      if ((long)uVar2 < 1) {
LAB_10270d6cc:
        func_0x000107c61170(param_2);
LAB_10270d6d8:
        func_0x000107c6142c(lVar8);
        goto LAB_10270d6dc;
      }
      lVar3 = 0x64692d6563616c70;
      lVar9 = -0x1800000000000000;
      func_0x0001027084f8(0x64692d6563616c70,0xe800000000000000);
      lVar5 = lVar8;
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5c1d4();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          lVar3 = lVar4;
          lVar5 = lVar9;
          func_0x000107c5faec();
          func_0x000107c61170(lVar4);
          lVar9 = lVar3;
          func_0x000107c5fb5c(lVar3,lVar5);
          if (lVar9 < 1) {
            func_0x000107c6142c(lVar8);
            func_0x000107c61170(param_2);
            lVar8 = lVar5;
            goto LAB_10270d6d8;
          }
          lVar9 = 0x656475746974616c;
          func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
          if (lVar9 != 0) {
            lVar4 = lVar9;
            func_0x000107c5dc3c();
            if ((int)lVar4 == 5) {
              func_0x000107c4223c(lVar9);
              uVar11 = param_1;
              func_0x000107c61170(lVar9);
              lVar9 = 0x64757469676e6f6c;
              func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
              if (lVar9 != 0) {
                lVar4 = lVar9;
                func_0x000107c5dc3c();
                if ((int)lVar4 != 5) goto LAB_10270d364;
                func_0x000107c4223c(lVar9);
                uVar12 = uVar11;
                func_0x000107c61170(lVar9);
                if ((uVar1 == 0x5f50414d45534142) && (lVar8 == -0x12ffffbabcbeb3b0)) {
                  func_0x000107c6142c(0xed00004543414c50);
                }
                else {
                  func_0x000107c605b8(uVar1,lVar8,0x5f50414d45534142,0xed00004543414c50,0);
                  func_0x000107c6142c(lVar8);
                  if ((uVar1 & 1) == 0) {
                    lVar8 = 0x692d646e65697266;
                    lVar9 = -0x16ffffffffffff9c;
                    func_0x0001027084f8();
                    if (lVar8 == 0) {
LAB_10270d678:
                      lVar10 = 0;
                      lVar9 = 0;
                    }
                    else {
                      lVar4 = lVar8;
                      func_0x000107c5c1d4();
                      func_0x000107c61180();
                      func_0x000107c61170(lVar8);
                      if (lVar4 == 0) goto LAB_10270d678;
                      lVar10 = lVar4;
                      func_0x000107c5faec();
                      func_0x000107c61170(lVar4);
                      lVar8 = lVar10;
                      func_0x000107c5fb5c(lVar10,lVar9);
                      if (lVar8 < 1) {
                        func_0x000107c6142c(lVar9);
                        goto LAB_10270d678;
                      }
                    }
                    func_0x000107c5fadc(lVar3,lVar5);
                    func_0x000107c6142c(lVar5);
                    if (lVar9 == 0) {
                      lVar10 = 0;
                    }
                    else {
                      func_0x000107c5fadc(lVar10,lVar9);
                      func_0x000107c6142c(lVar9);
                    }
                    goto LAB_10270d744;
                  }
                }
                lVar9 = 0x64695f726579616c;
                lVar8 = -0x1800000000000000;
                func_0x0001027084f8(0x64695f726579616c,0xe800000000000000);
                if (lVar9 != 0) {
                  lVar4 = lVar9;
                  func_0x000107c5c1d4();
                  func_0x000107c61180();
                  func_0x000107c61170(lVar9);
                  if (lVar4 != 0) {
                    lVar10 = lVar4;
                    func_0x000107c5faec();
                    func_0x000107c61170(lVar4);
                    lVar9 = lVar10;
                    func_0x000107c5fb5c(lVar10,lVar8);
                    if (lVar9 < 1) {
                      func_0x000107c6142c(lVar5);
                      goto LAB_10270d6cc;
                    }
                    lVar9 = 0x7370756f7267;
                    FUN_1027086ec(0x7370756f7267,0xe600000000000000);
                    if (lVar9 == 0) {
LAB_10270d6b8:
                      func_0x000107c61170(param_2);
                    }
                    else {
                      lVar4 = lVar9;
                      func_0x000101158fcc();
                      func_0x000107c6142c(lVar9);
                      if (lVar4 == 0) goto LAB_10270d6b8;
                      lVar9 = -0x2fffffffffffffed;
                      func_0x000102708798(0xd000000000000013,0x800000010f01c910);
                      if (lVar9 == 0) {
                        func_0x000107c6142c(lVar5);
                        func_0x000107c6142c(lVar8);
                        lVar5 = lVar4;
                        goto LAB_10270d330;
                      }
                      lVar6 = 0x785f6e6565726373;
                      func_0x0001027084f8(0x785f6e6565726373,0xe800000000000000);
                      if (lVar6 != 0) {
                        lVar7 = lVar6;
                        func_0x000107c5dc3c();
                        if ((int)lVar7 == 5) {
                          func_0x000107c4223c(lVar6);
                          uVar13 = uVar12;
                          func_0x000107c61170(lVar6);
                          lVar6 = 0x795f6e6565726373;
                          func_0x0001027084f8(0x795f6e6565726373,0xe800000000000000);
                          if (lVar6 == 0) goto LAB_10270d78c;
                          lVar7 = lVar6;
                          func_0x000107c5dc3c();
                          if ((int)lVar7 == 5) {
                            func_0x000107c4223c(lVar6);
                            uVar14 = uVar13;
                            func_0x000107c61170(lVar6);
                            uVar17 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
                            uVar16 = *(undefined8 *)
                                      (PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
                            lVar6 = 0x616c5f646c726f77;
                            func_0x0001027084f8(0x616c5f646c726f77,0xe900000000000074);
                            if (lVar6 != 0) {
                              lVar7 = lVar6;
                              func_0x000107c5dc3c();
                              if ((int)lVar7 == 5) {
                                func_0x000107c4223c(lVar6);
                                uVar15 = uVar14;
                                func_0x000107c61170(lVar6);
                                lVar6 = 0x6e6c5f646c726f77;
                                func_0x0001027084f8(0x6e6c5f646c726f77,0xe900000000000067);
                                if (lVar6 == 0) goto LAB_10270d58c;
                                lVar7 = lVar6;
                                func_0x000107c5dc3c();
                                if ((int)lVar7 == 5) {
                                  func_0x000107c4223c(lVar6);
                                  uVar16 = uVar15;
                                  uVar17 = uVar14;
                                }
                              }
                              func_0x000107c61170(lVar6);
                            }
LAB_10270d58c:
                            func_0x000103b39c78(0);
                            func_0x000107c610f8();
                            func_0x000103b399f4(uVar17,uVar16,uVar12,uVar13,lVar10,lVar8,lVar4,lVar9
                                               );
                            func_0x000107c5fadc(lVar3,lVar5);
                            func_0x000107c6142c(lVar5);
LAB_10270d744:
                            func_0x000107c47ebc(param_1,uVar11);
                            func_0x000107c61170(lVar3);
                            func_0x000107c61170(lVar10);
                            func_0x000107c61170(param_2);
                            return unaff_x20;
                          }
                        }
                        func_0x000107c61170(lVar6);
                      }
LAB_10270d78c:
                      func_0x000107c61170(param_2);
                      func_0x000107c6142c(lVar9);
                      func_0x000107c6142c(lVar4);
                    }
                    func_0x000107c6142c(lVar8);
                    lVar8 = lVar5;
                    goto LAB_10270d6d8;
                  }
                }
                goto LAB_10270d330;
              }
            }
            else {
LAB_10270d364:
              func_0x000107c61170(lVar9);
            }
          }
          func_0x000107c61170(param_2);
          func_0x000107c6142c(lVar5);
          goto LAB_10270d6d8;
        }
      }
LAB_10270d330:
      func_0x000107c6142c(lVar5);
    }
  }
  func_0x000107c61170(param_2);
LAB_10270d6dc:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270d7b0; end: 10270d7d7; -[SCOpenPlaceTrigger initWithParameters:] */

void FUN_10270d7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270d158();
  return;
}



/* Entry: 10270d7d8; end: 10270d7f3;  */

undefined1  [16] FUN_10270d7d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006563;
  auVar1._0_8_ = 0x616c702d6e65706f;
  return auVar1;
}



/* Entry: 10270d7f4; end: 10270d82f;  */

undefined8 FUN_10270d7f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270d830; end: 10270d85b; +[SCOpenSongTrigger actionName] */

void FUN_10270d830(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01c930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270d85c; end: 10270d91b;  */

undefined8 FUN_10270d85c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0x64692d6b63617274;
  func_0x0001027084f8(0x64692d6b63617274,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc3c();
    if ((int)lVar2 == 5) {
      func_0x000107c4223c(lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c48e10(param_1);
      func_0x000107c61170(param_2);
      return unaff_x20;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270d91c; end: 10270d943; -[SCOpenSongTrigger initWithParameters:] */

void FUN_10270d91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270d85c();
  return;
}



/* Entry: 10270d944; end: 10270d95f;  */

undefined1  [16] FUN_10270d944(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c930;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 10270d960; end: 10270d99b;  */

undefined8 FUN_10270d960(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270d99c; end: 10270d9c7; +[SCPetTappedTrigger actionName] */

void FUN_10270d99c(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01c950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270d9c8; end: 10270db6b;  */

undefined8 FUN_10270d9c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  
  lVar1 = 0x6469;
  uVar4 = 0xe200000000000000;
  func_0x0001027084f8(0x6469,0xe200000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar4);
      if (0 < lVar2) {
        lVar2 = 0x656475746974616c;
        func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x000107c5dc3c();
          if ((int)lVar3 == 5) {
            func_0x000107c4223c(lVar2);
            uVar5 = param_1;
            func_0x000107c61170(lVar2);
            lVar2 = 0x64757469676e6f6c;
            func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
            if (lVar2 == 0) goto LAB_10270db24;
            lVar3 = lVar2;
            func_0x000107c5dc3c();
            if ((int)lVar3 == 5) {
              func_0x000107c4223c(lVar2);
              func_0x000107c61170(lVar2);
              func_0x000107c5fadc(lVar1,uVar4);
              func_0x000107c6142c(uVar4);
              func_0x000107c47e78(param_1,uVar5);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(param_2);
              return unaff_x20;
            }
          }
          func_0x000107c61170(lVar2);
        }
      }
LAB_10270db24:
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar4);
      goto LAB_10270db34;
    }
  }
  func_0x000107c61170(param_2);
LAB_10270db34:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270db6c; end: 10270db93; -[SCPetTappedTrigger initWithParameters:] */

void FUN_10270db6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270d9c8();
  return;
}



/* Entry: 10270db94; end: 10270dbaf;  */

undefined1  [16] FUN_10270db94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c950;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 10270dbb0; end: 10270dbeb;  */

undefined8 FUN_10270dbb0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270dbec; end: 10270dc17; +[SCPlayFriendStoryTrigger actionName] */

void FUN_10270dbec(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01c970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270dc18; end: 10270de8f;  */

undefined8 FUN_10270dc18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  
  lVar1 = 0x64692d6563616c70;
  uVar5 = 0xe800000000000000;
  func_0x0001027084f8(0x64692d6563616c70,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar5);
      if (lVar2 < 1) {
        func_0x000107c61170(param_2);
LAB_10270de50:
        func_0x000107c6142c(uVar5);
        goto LAB_10270de54;
      }
      lVar2 = 0x692d646e65697266;
      uVar6 = 0xe900000000000064;
      func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5c1d4();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar3 != 0) {
          lVar2 = lVar3;
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c5fb5c(lVar2,uVar6);
          if (lVar3 < 1) {
            func_0x000107c6142c(uVar5);
            func_0x000107c61170(param_2);
            uVar5 = uVar6;
            goto LAB_10270de50;
          }
          lVar3 = 0x785f6e6565726373;
          func_0x0001027084f8(0x785f6e6565726373,0xe800000000000000);
          if (lVar3 != 0) {
            lVar4 = lVar3;
            func_0x000107c5dc3c();
            if ((int)lVar4 == 5) {
              func_0x000107c4223c(lVar3);
              uVar7 = param_1;
              func_0x000107c61170(lVar3);
              lVar3 = 0x795f6e6565726373;
              func_0x0001027084f8(0x795f6e6565726373,0xe800000000000000);
              if (lVar3 == 0) goto LAB_10270de3c;
              lVar4 = lVar3;
              func_0x000107c5dc3c();
              if ((int)lVar4 == 5) {
                func_0x000107c4223c(lVar3);
                func_0x000107c61170(lVar3);
                func_0x000107c5fadc(lVar1,uVar5);
                func_0x000107c6142c(uVar5);
                func_0x000107c5fadc(lVar2,uVar6);
                func_0x000107c6142c(uVar6);
                func_0x000107c47eb8(param_1,uVar7);
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(param_2);
                return unaff_x20;
              }
            }
            func_0x000107c61170(lVar3);
          }
LAB_10270de3c:
          func_0x000107c61170(param_2);
          func_0x000107c6142c(uVar6);
          goto LAB_10270de50;
        }
      }
      func_0x000107c6142c(uVar5);
    }
  }
  func_0x000107c61170(param_2);
LAB_10270de54:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270de90; end: 10270deb7; -[SCPlayFriendStoryTrigger initWithParameters:] */

void FUN_10270de90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270dc18();
  return;
}



/* Entry: 10270deb8; end: 10270ded3;  */

undefined1  [16] FUN_10270deb8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c970;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 10270ded4; end: 10270df0f;  */

undefined8 FUN_10270ded4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270df10; end: 10270df2f;  */

undefined1  [16] FUN_10270df10(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c990;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 10270df30; end: 10270e01f;  */

undefined8 FUN_10270df30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = 0x785f6e6565726373;
  func_0x0001027084f8(0x785f6e6565726373,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc3c();
    if ((int)lVar2 == 5) {
      func_0x000107c4223c(lVar1);
      uVar4 = param_1;
      func_0x000107c61170(lVar1);
      lVar1 = 0x795f6e6565726373;
      func_0x0001027084f8(0x795f6e6565726373,0xe800000000000000);
      if (lVar1 == 0) goto LAB_10270e004;
      lVar2 = lVar1;
      func_0x000107c5dc3c();
      if ((int)lVar2 == 5) {
        func_0x000107c4223c(lVar1);
        func_0x000107c61170(lVar1);
        uVar3 = 0;
        func_0x000103b3cecc(0);
        func_0x000107c610f8();
        func_0x000103b3ce18(param_1,uVar4);
        func_0x000107c61170(param_2);
        return uVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
LAB_10270e004:
  func_0x000107c61170(param_2);
  return 0;
}



/* Entry: 10270e020; end: 10270e053; +[SCPlayPOIStoryTrigger actionName] */

void FUN_10270e020(void)

{
  func_0x000107c5fadc(0x696f702d79616c70,0xee0079726f74732d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270e054; end: 10270e933;  */

undefined8 FUN_10270e054(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_f8;
  long lStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lVar1 = 0x64692d696f70;
  uVar8 = 0xe600000000000000;
  func_0x0001027084f8(0x64692d696f70,0xe600000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar8);
      if (0 < lVar2) {
        lVar2 = 0x656475746974616c;
        func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
        if (lVar2 != 0) {
          lVar11 = lVar2;
          func_0x000107c5dc3c();
          if ((int)lVar11 == 5) {
            func_0x000107c4223c(lVar2);
            uVar15 = param_1;
            func_0x000107c61170(lVar2);
            lVar2 = 0x64757469676e6f6c;
            func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
            if (lVar2 != 0) {
              lVar11 = lVar2;
              func_0x000107c5dc3c();
              if ((int)lVar11 != 5) goto LAB_10270e27c;
              func_0x000107c4223c(lVar2);
              uVar16 = uVar15;
              func_0x000107c61170(lVar2);
              puVar3 = (undefined *)0xd000000000000013;
              func_0x000102708798(0xd000000000000013,0x800000010f01c910);
              if (puVar3 == (undefined *)0x0) {
                puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000100214a84();
              }
              uVar9 = 0x800000010f01c9e0;
              lVar2 = -0x2ffffffffffffff0;
              func_0x0001027084f8();
              if (lVar2 == 0) {
LAB_10270e2ec:
                lStack_e8 = 0;
                uStack_e0 = 0xf000000000000000;
              }
              else {
                lVar11 = lVar2;
                func_0x000107c5c1d4();
                func_0x000107c61180();
                func_0x000107c61170(lVar2);
                if (lVar11 == 0) goto LAB_10270e2ec;
                lStack_e8 = lVar11;
                func_0x000107c5faec();
                func_0x000107c61170(lVar11);
                lVar2 = lStack_e8;
                func_0x000107c5fb5c(lStack_e8,uVar9);
                if (lVar2 < 1) {
                  func_0x000107c6142c(uVar9);
                  goto LAB_10270e2ec;
                }
                uStack_e0 = uVar9;
                func_0x000107c5ee08(lStack_e8,uVar9,0);
                func_0x000107c6142c(uVar9);
                if (0xe < uStack_e0 >> 0x3c) {
                  func_0x000107c6142c(uVar8);
                  func_0x000107c6142c(puVar3);
                  goto LAB_10270e270;
                }
              }
              lVar2 = 0x64695f726579616c;
              uVar10 = 0xe800000000000000;
              func_0x0001027084f8(0x64695f726579616c,0xe800000000000000);
              if (lVar2 == 0) {
LAB_10270e518:
                lStack_f8 = 0;
              }
              else {
                lVar11 = lVar2;
                func_0x000107c5c1d4();
                func_0x000107c61180();
                func_0x000107c61170(lVar2);
                if (lVar11 == 0) goto LAB_10270e518;
                lStack_f8 = lVar11;
                func_0x000107c5faec();
                func_0x000107c61170(lVar11);
                lVar2 = lStack_f8;
                func_0x000107c5fb5c(lStack_f8,uVar10);
                if (lVar2 < 1) {
LAB_10270e510:
                  func_0x000107c6142c(uVar10);
                  goto LAB_10270e518;
                }
                lVar2 = 0x7370756f7267;
                func_0x0001027086ec(0x7370756f7267,0xe600000000000000);
                if (lVar2 == 0) goto LAB_10270e510;
                lVar11 = lVar2;
                func_0x000101158fcc();
                func_0x000107c6142c(lVar2);
                if (lVar11 == 0) goto LAB_10270e510;
                lVar2 = 0x785f6e6565726373;
                func_0x0001027084f8(0x785f6e6565726373,0xe800000000000000);
                if (lVar2 == 0) {
LAB_10270e508:
                  func_0x000107c6142c(lVar11);
                  goto LAB_10270e510;
                }
                lVar4 = lVar2;
                func_0x000107c5dc3c();
                if ((int)lVar4 != 5) {
LAB_10270e500:
                  func_0x000107c61170(lVar2);
                  goto LAB_10270e508;
                }
                func_0x000107c4223c(lVar2);
                uVar17 = uVar16;
                func_0x000107c61170(lVar2);
                lVar2 = 0x795f6e6565726373;
                func_0x0001027084f8(0x795f6e6565726373,0xe800000000000000);
                if (lVar2 == 0) goto LAB_10270e508;
                lVar4 = lVar2;
                func_0x000107c5dc3c();
                if ((int)lVar4 != 5) goto LAB_10270e500;
                func_0x000107c4223c(lVar2);
                uVar18 = uVar17;
                func_0x000107c61170(lVar2);
                uVar21 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
                uVar20 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
                lVar2 = 0x616c5f646c726f77;
                func_0x0001027084f8(0x616c5f646c726f77,0xe900000000000074);
                if (lVar2 != 0) {
                  lVar4 = lVar2;
                  func_0x000107c5dc3c();
                  if ((int)lVar4 == 5) {
                    func_0x000107c4223c(lVar2);
                    uVar19 = uVar18;
                    func_0x000107c61170(lVar2);
                    lVar2 = 0x6e6c5f646c726f77;
                    func_0x0001027084f8(0x6e6c5f646c726f77,0xe900000000000067);
                    if (lVar2 == 0) goto LAB_10270e4b8;
                    lVar4 = lVar2;
                    func_0x000107c5dc3c();
                    if ((int)lVar4 == 5) {
                      func_0x000107c4223c(lVar2);
                      uVar20 = uVar19;
                      uVar21 = uVar18;
                    }
                  }
                  func_0x000107c61170(lVar2);
                }
LAB_10270e4b8:
                func_0x000103b39c78(0);
                func_0x000107c610f8();
                func_0x000107c61434(puVar3);
                func_0x000103b399f4(uVar21,uVar20,uVar16,uVar17,lStack_f8,uVar10,lVar11,puVar3);
              }
              lVar2 = 0x64692d6563616c70;
              lVar11 = -0x1800000000000000;
              func_0x0001027084f8();
              if (lVar2 == 0) {
LAB_10270e590:
                lVar2 = 0;
                lVar11 = 0;
              }
              else {
                lVar4 = lVar2;
                func_0x000107c5c1d4();
                func_0x000107c61180();
                func_0x000107c61170(lVar2);
                if (lVar4 == 0) goto LAB_10270e590;
                lVar2 = lVar4;
                func_0x000107c5faec();
                func_0x000107c61170(lVar4);
                lVar4 = lVar2;
                func_0x000107c5fb5c(lVar2,lVar11);
                if (lVar4 < 1) {
                  func_0x000107c6142c(lVar11);
                  goto LAB_10270e590;
                }
              }
              lVar4 = 0x6c6562616c;
              lVar12 = -0x1b00000000000000;
              func_0x0001027084f8();
              if (lVar4 == 0) {
LAB_10270e60c:
                lVar4 = 0;
                lVar12 = 0;
              }
              else {
                lVar5 = lVar4;
                func_0x000107c5c1d4();
                func_0x000107c61180();
                func_0x000107c61170(lVar4);
                if (lVar5 == 0) goto LAB_10270e60c;
                lVar4 = lVar5;
                func_0x000107c5faec();
                func_0x000107c61170(lVar5);
                lVar5 = lVar4;
                func_0x000107c5fb5c(lVar4,lVar12);
                if (lVar5 < 1) {
                  func_0x000107c6142c(lVar12);
                  goto LAB_10270e60c;
                }
              }
              lVar5 = 0x646e696b;
              lVar13 = -0x1c00000000000000;
              func_0x0001027084f8();
              if (lVar5 == 0) {
LAB_10270e684:
                lVar5 = 0;
                lVar13 = 0;
              }
              else {
                lVar6 = lVar5;
                func_0x000107c5c1d4();
                func_0x000107c61180();
                func_0x000107c61170(lVar5);
                if (lVar6 == 0) goto LAB_10270e684;
                lVar5 = lVar6;
                func_0x000107c5faec();
                func_0x000107c61170(lVar6);
                lVar6 = lVar5;
                func_0x000107c5fb5c(lVar5,lVar13);
                if (lVar6 < 1) {
                  func_0x000107c6142c(lVar13);
                  goto LAB_10270e684;
                }
              }
              lVar6 = 0x69616e626d756874;
              lVar14 = -0x12ffff938d8aa094;
              func_0x0001027084f8();
              if (lVar6 == 0) {
LAB_10270e720:
                lVar6 = 0;
                lVar14 = 0;
              }
              else {
                lVar7 = lVar6;
                func_0x000107c5c1d4();
                func_0x000107c61180();
                func_0x000107c61170(lVar6);
                if (lVar7 == 0) goto LAB_10270e720;
                lVar6 = lVar7;
                func_0x000107c5faec();
                func_0x000107c61170(lVar7);
                lVar7 = lVar6;
                func_0x000107c5fb5c(lVar6,lVar14);
                if (lVar7 < 1) {
                  func_0x000107c6142c(lVar14);
                  lVar6 = 0;
                  lVar14 = 0;
                }
              }
              if (*(long *)(puVar3 + 0x10) == 0) {
LAB_10270e7c4:
                uStack_c8 = 0;
                uStack_d0 = 0;
                lStack_b8 = 0;
                uStack_c0 = 0;
                func_0x000107c6142c(puVar3);
              }
              else {
                func_0x000107c61434(puVar3);
                lVar7 = 0x72706d6f635f7369;
                uVar9 = 0xed00006465737365;
                func_0x000100029284(0x72706d6f635f7369);
                if ((uVar9 & 1) == 0) {
                  func_0x000107c6142c(puVar3);
                  goto LAB_10270e7c4;
                }
                func_0x0001000bb420(*(long *)(puVar3 + 0x38) + lVar7 * 0x20,&uStack_d0);
                func_0x000107c61430(puVar3,2);
                if (lStack_b8 != 0) {
                  func_0x000107c6147c(&uStack_d1,&uStack_d0,PTR___sypN_11034f1a8 + 8,
                                      PTR___sSbN_11034dd40,6);
                  goto LAB_10270e7e0;
                }
              }
              func_0x00010006e7f4(&uStack_d0);
LAB_10270e7e0:
              func_0x000107c5fadc(lVar1,uVar8);
              func_0x000107c6142c(uVar8);
              if (uStack_e0 >> 0x3c < 0xf) {
                lVar7 = lStack_e8;
                func_0x000107c5ee20(lStack_e8);
              }
              else {
                lVar7 = 0;
              }
              if (lVar11 == 0) {
                lVar2 = 0;
              }
              else {
                func_0x000107c5fadc(lVar2,lVar11);
                func_0x000107c6142c(lVar11);
              }
              if (lVar12 == 0) {
                lVar4 = 0;
              }
              else {
                func_0x000107c5fadc(lVar4,lVar12);
                func_0x000107c6142c(lVar12);
              }
              if (lVar13 == 0) {
                lVar5 = 0;
              }
              else {
                func_0x000107c5fadc(lVar5,lVar13);
                func_0x000107c6142c(lVar13);
              }
              if (lVar14 == 0) {
                lVar6 = 0;
              }
              else {
                func_0x000107c5fadc(lVar6,lVar14);
                func_0x000107c6142c(lVar14);
              }
              func_0x000107c47f98(param_1,uVar15);
              func_0x0001000b44c0(lStack_e8,uStack_e0);
              func_0x000107c61170(lStack_f8);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar7);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(param_2);
              return unaff_x20;
            }
          }
          else {
LAB_10270e27c:
            func_0x000107c61170(lVar2);
          }
        }
      }
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar8);
      goto LAB_10270e294;
    }
  }
LAB_10270e270:
  func_0x000107c61170(param_2);
LAB_10270e294:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270e934; end: 10270e95b; -[SCPlayPOIStoryTrigger initWithParameters:] */

void FUN_10270e934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270e054();
  return;
}



/* Entry: 10270e95c; end: 10270e97f;  */

undefined1  [16] FUN_10270e95c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee0079726f74732d;
  auVar1._0_8_ = 0x696f702d79616c70;
  return auVar1;
}



/* Entry: 10270e980; end: 10270e9bb;  */

undefined8 FUN_10270e980(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270e9bc; end: 10270eac3;  */

undefined * FUN_10270e9bc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eba188,&UNK_10dad1aa8);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar12 = puVar10[1];
      uVar11 = *puVar10;
      func_0x000107c61434(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10270eac0);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar4 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x10);
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10270eac4);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 4;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 10270eac4; end: 10270eaef; +[SCPlayPlaceStoryTrigger actionName] */

void FUN_10270eac4(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f01ca40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270eaf0; end: 10270ec9b;  */

undefined8 FUN_10270eaf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  
  lVar1 = 0x64692d6563616c70;
  uVar4 = 0xe800000000000000;
  func_0x0001027084f8(0x64692d6563616c70,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar4);
      if (0 < lVar2) {
        lVar2 = 0x785f6e6565726373;
        func_0x0001027084f8(0x785f6e6565726373,0xe800000000000000);
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x000107c5dc3c();
          if ((int)lVar3 == 5) {
            func_0x000107c4223c(lVar2);
            uVar5 = param_1;
            func_0x000107c61170(lVar2);
            lVar2 = 0x795f6e6565726373;
            func_0x0001027084f8(0x795f6e6565726373,0xe800000000000000);
            if (lVar2 == 0) goto LAB_10270ec54;
            lVar3 = lVar2;
            func_0x000107c5dc3c();
            if ((int)lVar3 == 5) {
              func_0x000107c4223c(lVar2);
              func_0x000107c61170(lVar2);
              func_0x000107c5fadc(lVar1,uVar4);
              func_0x000107c6142c(uVar4);
              func_0x000107c47ec0(param_1,uVar5);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(param_2);
              return unaff_x20;
            }
          }
          func_0x000107c61170(lVar2);
        }
      }
LAB_10270ec54:
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar4);
      goto LAB_10270ec64;
    }
  }
  func_0x000107c61170(param_2);
LAB_10270ec64:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270ec9c; end: 10270ecc3; -[SCPlayPlaceStoryTrigger initWithParameters:] */

void FUN_10270ec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270eaf0();
  return;
}



/* Entry: 10270ecc4; end: 10270ecdf;  */

undefined1  [16] FUN_10270ecc4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01ca40;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Entry: 10270ece0; end: 10270ed1b;  */

undefined8 FUN_10270ece0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270ed1c; end: 10270ed37;  */

undefined1  [16] FUN_10270ed1c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01ca60;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Entry: 10270ed38; end: 10270ed6f;  */

undefined8 FUN_10270ed38(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270ed70; end: 10270ed9b; +[SCRequestRealTimeLocationTrigger actionName] */

void FUN_10270ed70(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01ca80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270ed9c; end: 10270eebb; -[SCRequestRealTimeLocationTrigger initWithParameters:] */

undefined8 FUN_10270ed9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x692d646e65697266;
  uVar3 = 0xe900000000000064;
  func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270ee74;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270ee74:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270eebc; end: 10270eed7;  */

undefined1  [16] FUN_10270eebc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01ca80;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 10270eed8; end: 10270ef13;  */

undefined8 FUN_10270eed8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270ef14; end: 10270ef3f; +[SCSelectAddressPinTrigger actionName] */

void FUN_10270ef14(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01caa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


