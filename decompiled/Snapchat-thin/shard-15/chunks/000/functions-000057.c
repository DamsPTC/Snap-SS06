/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7da000; end: 10b7da00b;  */

bool FUN_10b7da000(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7da00c; end: 10b7da087;  */

undefined * FUN_10b7da00c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9ea0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f842b8,
                        &UNK_10e5dc174,&UNK_10e5dc198,4,FUN_10b7da088,0);
    do {
      if (puRam00000001137f9ea0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9ea0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9ea0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9ea0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9ea0;
}



/* Entry: 10b7da088; end: 10b7da093;  */

bool FUN_10b7da088(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7da094; end: 10b7da18b; +[SCAdsInstantPagePaymentEvent descriptor] */

undefined * FUN_10b7da094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3c90,
                        &PTR____CFConstantStringClassReference_110f842d8,&PTR_DAT_1133e15e8,
                        &PTR_s_eventType_1133e1600,0xb,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9ea8 = puVar1;
  }
  return puRam00000001137f9ea8;
}



/* Entry: 10b7da18c; end: 10b7da197;  */

bool FUN_10b7da18c(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b7da198; end: 10b7da227;  */

undefined * FUN_10b7da198(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9eb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84318,
                        &UNK_10e5dc2a8,&UNK_10e5dc51c,0x28,FUN_10b7da228,0,&UNK_10e5dc5bc);
    do {
      if (puRam00000001137f9eb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9eb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9eb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9eb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9eb8;
}



/* Entry: 10b7da228; end: 10b7da233;  */

bool FUN_10b7da228(uint param_1)

{
  return param_1 < 0x28;
}



/* Entry: 10b7da234; end: 10b7da2af;  */

undefined * FUN_10b7da234(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9ec0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84338,
                        &UNK_10e5dc5c2,&UNK_10e5dc648,10,FUN_10b7da2b0,0);
    do {
      if (puRam00000001137f9ec0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9ec0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9ec0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9ec0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9ec0;
}



/* Entry: 10b7da2b0; end: 10b7da2bb;  */

bool FUN_10b7da2b0(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7da2bc; end: 10b7da337;  */

undefined * FUN_10b7da2bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9ec8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84358,
                        &UNK_10e5dc670,&UNK_10e5dc6a0,3,FUN_10b7da338,0);
    do {
      if (puRam00000001137f9ec8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9ec8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9ec8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9ec8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9ec8;
}



/* Entry: 10b7da338; end: 10b7da343;  */

bool FUN_10b7da338(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7da344; end: 10b7da3bf;  */

undefined * FUN_10b7da344(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9ed0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84378,
                        &UNK_10e5dc6ac,&UNK_10e5dc6d0,3,FUN_10b7da3c0,0);
    do {
      if (puRam00000001137f9ed0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9ed0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9ed0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9ed0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9ed0;
}



/* Entry: 10b7da3c0; end: 10b7da3cb;  */

bool FUN_10b7da3c0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7da3cc; end: 10b7da447;  */

undefined * FUN_10b7da3cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9ed8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84398,
                        &UNK_10e5dc6dc,&UNK_10e5dc710,4,FUN_10b7da448,0);
    do {
      if (puRam00000001137f9ed8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9ed8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9ed8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9ed8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9ed8;
}



/* Entry: 10b7da448; end: 10b7da453;  */

bool FUN_10b7da448(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7da454; end: 10b7da4cf;  */

undefined * FUN_10b7da454(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9ee0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f843b8,
                        &UNK_10e5dc720,&UNK_10e5dc76c,9,FUN_10b7da4d0,0);
    do {
      if (puRam00000001137f9ee0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9ee0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9ee0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9ee0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9ee0;
}



/* Entry: 10b7da4d0; end: 10b7da4db;  */

bool FUN_10b7da4d0(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7da4dc; end: 10b7da557; +[SCAdsInstantProduct descriptor] */

undefined * FUN_10b7da4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3d30,
                        &PTR____CFConstantStringClassReference_110f843d8,&PTR_DAT_1133e1760,
                        &PTR_s_productId_1133e1938,0xb,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9ee8 = puVar1;
  }
  return puRam00000001137f9ee8;
}



/* Entry: 10b7da558; end: 10b7da5d3; +[SCAdsInstantPageEvent descriptor] */

undefined * FUN_10b7da558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3d80,
                        &PTR____CFConstantStringClassReference_110f843f8,&PTR_DAT_1133e1760,
                        &PTR_s_eventType_1133e1a98,0x17,0xa0,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9ef0 = puVar1;
  }
  return puRam00000001137f9ef0;
}



/* Entry: 10b7da5d4; end: 10b7da64f; +[SCAdsInstantPageEvent_Money descriptor] */

undefined * FUN_10b7da5d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3dd0,
                        &PTR____CFConstantStringClassReference_110f84418,&PTR_DAT_1133e1760,
                        &PTR_s_amount_1133e1778,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9ef8 = puVar1;
  }
  return puRam00000001137f9ef8;
}



/* Entry: 10b7da650; end: 10b7da6cb; +[SCAdsInstantPageEvent_PaymentMethod descriptor] */

undefined * FUN_10b7da650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3e20,
                        &PTR____CFConstantStringClassReference_110e81218,&PTR_DAT_1133e1760,
                        &PTR_DAT_1133e17b8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9f00 = puVar1;
  }
  return puRam00000001137f9f00;
}



/* Entry: 10b7da6cc; end: 10b7da747; +[SCAdsInstantPageEvent_ProductLineItem descriptor] */

undefined * FUN_10b7da6cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3e70,
                        &PTR____CFConstantStringClassReference_110f84438,&PTR_DAT_1133e1760,
                        &PTR_s_productId_1133e1898,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f9f08 = puVar1;
  }
  return puRam00000001137f9f08;
}



/* Entry: 10b7da748; end: 10b7da7c3; +[SCAdsInstantPageEvent_OrderSummary descriptor] */

undefined * FUN_10b7da748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3ec0,
                        &PTR____CFConstantStringClassReference_110f84458,&PTR_DAT_1133e1760,
                        &PTR_s_itemsArray_1133e1838,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f9f10 = puVar1;
  }
  return puRam00000001137f9f10;
}



/* Entry: 10b7da7c4; end: 10b7da8bb; +[SCAdsInstantPageEvent_Error descriptor] */

undefined * FUN_10b7da7c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3f10,
                        &PTR____CFConstantStringClassReference_110dae318,&PTR_DAT_1133e1760,
                        &PTR_DAT_1133e17f8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9f18 = puVar1;
  }
  return puRam00000001137f9f18;
}



/* Entry: 10b7da8bc; end: 10b7da8c7;  */

bool FUN_10b7da8bc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7da8c8; end: 10b7da953; +[EventData descriptor] */

undefined * FUN_10b7da8c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3fb0,
                        &PTR____CFConstantStringClassReference_110f84498,&PTR_DAT_1133e1d80,
                        &PTR_DAT_1133e1d98,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137f9f28 = puVar1;
  }
  return puRam00000001137f9f28;
}



/* Entry: 10b7da954; end: 10b7daa37; +[AdFormatEvent descriptor] */

void FUN_10b7da954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4000,
                        &PTR____CFConstantStringClassReference_110f844b8,&PTR_DAT_1133e1d80,
                        &PTR_s_eventType_1133e1db8,5,0x28,0x1c);
    puRam00000001137f9f30 = puVar1;
  }
  return;
}



/* Entry: 10b7daa38; end: 10b7daa43;  */

bool FUN_10b7daa38(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7daa44; end: 10b7daacf; +[SCAdsDpaEvent descriptor] */

undefined * FUN_10b7daa44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd40a0,
                        &PTR____CFConstantStringClassReference_110f844f8,&PTR_DAT_1133e1e60,
                        &PTR_s_eventType_1133e1e78,8,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001137f9f40 = puVar1;
  }
  return puRam00000001137f9f40;
}



/* Entry: 10b7daad0; end: 10b7dab37; +[SCAdsDpaCofLoadTime descriptor] */

void FUN_10b7daad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4140,
                        &PTR____CFConstantStringClassReference_110f84518,&PTR_DAT_1133e1f78,
                        &PTR_DAT_1133e1f90,2,0x18,0x1c);
    puRam00000001137f9f48 = puVar1;
  }
  return;
}



/* Entry: 10b7dab38; end: 10b7dab9f; +[SCAdsDpaError descriptor] */

void FUN_10b7dab38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd41e0,
                        &PTR____CFConstantStringClassReference_110f84538,&PTR_DAT_1133e1fd0,0,0,4,
                        0x1c);
    puRam00000001137f9f50 = puVar1;
  }
  return;
}



/* Entry: 10b7daba0; end: 10b7dac07; +[SCAdsDpaFinalTemplateSelection descriptor] */

void FUN_10b7daba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4280,
                        &PTR____CFConstantStringClassReference_110f84558,&PTR_DAT_1133e1fe8,
                        &PTR_DAT_1133e2000,5,0x30,0x1c);
    puRam00000001137f9f58 = puVar1;
  }
  return;
}



/* Entry: 10b7dac08; end: 10b7dac6f; +[SCAdsDpaImpressionEnd descriptor] */

void FUN_10b7dac08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4320,
                        &PTR____CFConstantStringClassReference_110f84578,&PTR_DAT_1133e20a0,
                        &PTR_DAT_1133e20b8,3,0x18,0x1c);
    puRam00000001137f9f60 = puVar1;
  }
  return;
}



/* Entry: 10b7dac70; end: 10b7dacd7; +[SCAdsDpaImpressionStart descriptor] */

void FUN_10b7dac70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd43c0,
                        &PTR____CFConstantStringClassReference_110f84598,&PTR_DAT_1133e2118,0,0,4,
                        0x1c);
    puRam00000001137f9f68 = puVar1;
  }
  return;
}



/* Entry: 10b7dacd8; end: 10b7dad53; +[SCAdsDpaMediaStart descriptor] */

undefined * FUN_10b7dacd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4460,
                        &PTR____CFConstantStringClassReference_110f845b8,&PTR_DAT_1133e2130,
                        &PTR_DAT_1133e2148,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9f70 = puVar1;
  }
  return puRam00000001137f9f70;
}



/* Entry: 10b7dad54; end: 10b7dadbb; +[SCAdsDpaTap descriptor] */

void FUN_10b7dad54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4500,
                        &PTR____CFConstantStringClassReference_110f845d8,&PTR_DAT_1133e21c8,
                        &PTR_DAT_1133e21e0,8,0x40,0x1c);
    puRam00000001137f9f78 = puVar1;
  }
  return;
}



/* Entry: 10b7dadbc; end: 10b7dae23; +[SCAdsDpaEventMetadata descriptor] */

void FUN_10b7dadbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd45a0,
                        &PTR____CFConstantStringClassReference_110f845f8,&PTR_DAT_1133e22e0,
                        &PTR_DAT_1133e22f8,5,0x30,0x1c);
    puRam00000001137f9f80 = puVar1;
  }
  return;
}



/* Entry: 10b7dae24; end: 10b7dae8b; +[SCAdsAdCommonMetadata descriptor] */

void FUN_10b7dae24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4640,
                        &PTR____CFConstantStringClassReference_110f84618,&PTR_DAT_1133e2398,
                        &PTR_DAT_1133e23b0,8,0x38,0x1c);
    puRam00000001137f9f88 = puVar1;
  }
  return;
}



/* Entry: 10b7dae8c; end: 10b7daef3; +[SCAdsErrorCommonMetadata descriptor] */

void FUN_10b7dae8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd46e0,
                        &PTR____CFConstantStringClassReference_110f84638,&PTR_DAT_1133e24b0,
                        &PTR_DAT_1133e24c8,3,0x20,0x1c);
    puRam00000001137f9f90 = puVar1;
  }
  return;
}



/* Entry: 10b7daef4; end: 10b7daf47; +[AdEarnedImpressionEventRoot extensionRegistry] */

undefined * FUN_10b7daef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137f9f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e14a0;
    puRam00000001137f9f98 = puVar1;
    func_0x00010bf9dda0(PTR_PTR_1126e14a0);
    func_0x00010bef8160(puVar1,param_2,puVar2);
  }
  return puRam00000001137f9f98;
}



/* Entry: 10b7daf48; end: 10b7dafd3; +[AdEarnedImpressionEvent descriptor] */

undefined * FUN_10b7daf48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4780,
                        &PTR____CFConstantStringClassReference_110f84658,&PTR_DAT_1133e2530,
                        &PTR_DAT_1133e2548,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f9fa0 = puVar1;
  }
  return puRam00000001137f9fa0;
}



/* Entry: 10b7dafd4; end: 10b7db03b; +[SCULUnlockableTrackRequest descriptor] */

void FUN_10b7dafd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4820,
                        &PTR____CFConstantStringClassReference_110f84678,&PTR_DAT_1133e25b0,
                        &PTR_DAT_1133e2648,8,0x40,0x1c);
    puRam00000001137f9fa8 = puVar1;
  }
  return;
}



/* Entry: 10b7db03c; end: 10b7db0c7; +[SCULSnapInfo descriptor] */

undefined * FUN_10b7db03c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4870,
                        &PTR____CFConstantStringClassReference_110e8d5f8,&PTR_DAT_1133e25b0,
                        &PTR_DAT_1133e25c8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f9fb0 = puVar1;
  }
  return puRam00000001137f9fb0;
}



/* Entry: 10b7db0c8; end: 10b7db12f; +[SCULSingleUnlockableTrack descriptor] */

void FUN_10b7db0c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd48c0,
                        &PTR____CFConstantStringClassReference_110f84698,&PTR_DAT_1133e25b0,
                        &PTR_DAT_1133e2608,2,0x18,0x1c);
    puRam00000001137f9fb8 = puVar1;
  }
  return;
}



/* Entry: 10b7db130; end: 10b7db197; +[SCAdsBatchTrackRequest descriptor] */

void FUN_10b7db130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4960,
                        &PTR____CFConstantStringClassReference_110f846b8,
                        &PTR_s_snapchat_ads_request_schema_1133e2748,&PTR_DAT_1133e2760,2,0x18,0x1c)
    ;
    puRam00000001137f9fc0 = puVar1;
  }
  return;
}



/* Entry: 10b7db198; end: 10b7db1ff; +[SCAdsCommonRequestData descriptor] */

void FUN_10b7db198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd49b0,
                        &PTR____CFConstantStringClassReference_110f846d8,
                        &PTR_s_snapchat_ads_request_schema_1133e2748,&PTR_s_application_1133e2820,5,
                        0x30,0x1c);
    puRam00000001137f9fc8 = puVar1;
  }
  return;
}



/* Entry: 10b7db200; end: 10b7db267; +[SCAdsSingleTrack descriptor] */

void FUN_10b7db200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4a00,
                        &PTR____CFConstantStringClassReference_110f846f8,
                        &PTR_s_snapchat_ads_request_schema_1133e2748,&PTR_DAT_1133e27a0,4,0x28,0x1c)
    ;
    puRam00000001137f9fd0 = puVar1;
  }
  return;
}



/* Entry: 10b7db268; end: 10b7db273;  */

bool FUN_10b7db268(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7db274; end: 10b7db2db; +[SCULFilterInfo descriptor] */

void FUN_10b7db274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4aa0,
                        &PTR____CFConstantStringClassReference_110e73538,&PTR_DAT_1133e28c0,
                        &PTR_s_unlockableId_1133e28d8,2,0x10,0x1c);
    puRam00000001137f9fe0 = puVar1;
  }
  return;
}



/* Entry: 10b7db2dc; end: 10b7db343; +[SCULLensInfo descriptor] */

void FUN_10b7db2dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4af0,
                        &PTR____CFConstantStringClassReference_110e01618,&PTR_DAT_1133e28c0,
                        &PTR_s_unlockableId_1133e2958,4,0x20,0x1c);
    puRam00000001137f9fe8 = puVar1;
  }
  return;
}



/* Entry: 10b7db344; end: 10b7db427; +[SCULStickerInfo descriptor] */

void FUN_10b7db344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4b40,
                        &PTR____CFConstantStringClassReference_110e04d98,&PTR_DAT_1133e28c0,
                        &PTR_s_unlockableId_1133e2918,2,0x18,0x1c);
    puRam00000001137f9ff0 = puVar1;
  }
  return;
}



/* Entry: 10b7db428; end: 10b7db433;  */

bool FUN_10b7db428(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7db434; end: 10b7db487; +[TrackEventRoot extensionRegistry] */

undefined * FUN_10b7db434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137fa008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e14a0;
    puRam00000001137fa008 = puVar1;
    func_0x00010bf9dda0(PTR_PTR_1126e14a0);
    func_0x00010bef8160(puVar1,param_2,puVar2);
  }
  return puRam00000001137fa008;
}



/* Entry: 10b7db488; end: 10b7db513; +[AdTrackEvent descriptor] */

undefined * FUN_10b7db488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4c80,
                        &PTR____CFConstantStringClassReference_110f84778,&PTR_DAT_1133e2aa0,
                        &PTR_DAT_1133e2ab8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137fa010 = puVar1;
  }
  return puRam00000001137fa010;
}



/* Entry: 10b7db514; end: 10b7db567; +[TrackEventShadowRoot extensionRegistry] */

undefined * FUN_10b7db514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137fa018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e14a0;
    puRam00000001137fa018 = puVar1;
    func_0x00010bf9dda0(PTR_PTR_1126e14a0);
    func_0x00010bef8160(puVar1,param_2,puVar2);
  }
  return puRam00000001137fa018;
}



/* Entry: 10b7db568; end: 10b7db5f3; +[AdTrackEventShadow descriptor] */

undefined * FUN_10b7db568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4d20,
                        &PTR____CFConstantStringClassReference_110f84798,&PTR_DAT_1133e2b40,
                        &PTR_DAT_1133e2b58,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137fa020 = puVar1;
  }
  return puRam00000001137fa020;
}



/* Entry: 10b7db5f4; end: 10b7db66f;  */

undefined * FUN_10b7db5f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa028 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f847b8,
                        &UNK_10e5dc8e0,&UNK_10e5dc9a4,10,FUN_10b7db670,0);
    do {
      if (puRam00000001137fa028 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa028;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa028,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa028 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa028;
}



/* Entry: 10b7db670; end: 10b7db67b;  */

bool FUN_10b7db670(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7db67c; end: 10b7db6f7;  */

undefined * FUN_10b7db67c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa030 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f847d8,
                        &UNK_10e5dc9cc,&UNK_10e5dca04,3,FUN_10b7db6f8,0);
    do {
      if (puRam00000001137fa030 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa030;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa030,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa030 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa030;
}



/* Entry: 10b7db6f8; end: 10b7db703;  */

bool FUN_10b7db6f8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7db704; end: 10b7db77f;  */

undefined * FUN_10b7db704(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa038 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f847f8,
                        &UNK_10e5dca10,&UNK_10e5dca5c,4,FUN_10b7db780,0);
    do {
      if (puRam00000001137fa038 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa038;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa038,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa038 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa038;
}



/* Entry: 10b7db780; end: 10b7db78b;  */

bool FUN_10b7db780(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7db78c; end: 10b7db807;  */

undefined * FUN_10b7db78c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84818,
                        &UNK_10e5dca6c,&UNK_10e5dca8c,3,FUN_10b7db808,0);
    do {
      if (puRam00000001137fa040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa040;
}



/* Entry: 10b7db808; end: 10b7db813;  */

bool FUN_10b7db808(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7db814; end: 10b7db88f;  */

undefined * FUN_10b7db814(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa048 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84838,
                        &UNK_10e5dca98,&UNK_10e5dcad0,5,FUN_10b7db890,0);
    do {
      if (puRam00000001137fa048 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa048;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa048,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa048 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa048;
}



/* Entry: 10b7db890; end: 10b7db89b;  */

bool FUN_10b7db890(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7db89c; end: 10b7db917;  */

undefined * FUN_10b7db89c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa050 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84858,
                        &UNK_10e5dcae4,&UNK_10e5dcaf4,2,FUN_10b7db918,0);
    do {
      if (puRam00000001137fa050 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa050;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa050,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa050 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa050;
}



/* Entry: 10b7db918; end: 10b7db923;  */

bool FUN_10b7db918(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7db924; end: 10b7db99f; +[SCAdsTrackRequest descriptor] */

undefined * FUN_10b7db924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4dc0,
                        &PTR____CFConstantStringClassReference_110f84878,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_DAT_1133e2f50,0x11,0x88,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa058 = puVar1;
  }
  return puRam00000001137fa058;
}



/* Entry: 10b7db9a0; end: 10b7dba07; +[SCAdsInventoryTrackRequest descriptor] */

void FUN_10b7db9a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4e10,
                        &PTR____CFConstantStringClassReference_110f84898,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_s_requestId_1133e2d10,6,
                        0x30,0x1c);
    puRam00000001137fa060 = puVar1;
  }
  return;
}



/* Entry: 10b7dba08; end: 10b7dba83; +[SCAdsAdTrackItem descriptor] */

undefined * FUN_10b7dba08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4e60,
                        &PTR____CFConstantStringClassReference_110f848b8,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_DAT_1133e3170,0x16,0xa8,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa068 = puVar1;
  }
  return puRam00000001137fa068;
}



/* Entry: 10b7dba84; end: 10b7dbaeb; +[SCAdsFailureToDeliverReason descriptor] */

void FUN_10b7dba84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4eb0,
                        &PTR____CFConstantStringClassReference_110f848d8,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_s_reason_1133e2c30,2,0x10,
                        0x1c);
    puRam00000001137fa070 = puVar1;
  }
  return;
}



/* Entry: 10b7dbaec; end: 10b7dbb53; +[SCAdsClientRankingModelOutput descriptor] */

void FUN_10b7dbaec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4f00,
                        &PTR____CFConstantStringClassReference_110f848f8,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_s_modelId_1133e2c70,5,0x30
                        ,0x1c);
    puRam00000001137fa078 = puVar1;
  }
  return;
}



/* Entry: 10b7dbb54; end: 10b7dbbbb; +[SCAdsClientRankingFeatures descriptor] */

void FUN_10b7dbb54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4f50,
                        &PTR____CFConstantStringClassReference_110f44498,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_s_appVersion_1133e2dd0,0xc
                        ,0x60,0x1c);
    puRam00000001137fa080 = puVar1;
  }
  return;
}



/* Entry: 10b7dbbbc; end: 10b7dbcb3; +[SCAdsClientAdFreshStatus descriptor] */

undefined * FUN_10b7dbbbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4fa0,
                        &PTR____CFConstantStringClassReference_110f84918,
                        &PTR_s_snapchat_ads_request_schema_1133e2bf8,&PTR_DAT_1133e2c10,1,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa088 = puVar1;
  }
  return puRam00000001137fa088;
}



/* Entry: 10b7dbcb4; end: 10b7dbcbf;  */

bool FUN_10b7dbcb4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7dbcc0; end: 10b7dbd3b;  */

undefined * FUN_10b7dbcc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa098 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84958,
                        &UNK_10e5dcb40,&UNK_10e5dcc10,10,FUN_10b7dbd3c,0);
    do {
      if (puRam00000001137fa098 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa098;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa098,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa098 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa098;
}



/* Entry: 10b7dbd3c; end: 10b7dbd47;  */

bool FUN_10b7dbd3c(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7dbd48; end: 10b7dbdaf; +[SCAdsAdInsertionConfig descriptor] */

void FUN_10b7dbd48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd50e0,
                        &PTR____CFConstantStringClassReference_110f450d8,
                        &PTR_s_snapchat_ads_request_schema_1133e3430,&PTR_DAT_1133e34e8,0x19,0xd0,
                        0x1c);
    puRam00000001137fa0a0 = puVar1;
  }
  return;
}



/* Entry: 10b7dbdb0; end: 10b7dbe17; +[SCAdsLensPosition descriptor] */

void FUN_10b7dbdb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5130,
                        &PTR____CFConstantStringClassReference_110f84978,
                        &PTR_s_snapchat_ads_request_schema_1133e3430,&PTR_DAT_1133e3448,2,0xc,0x1c);
    puRam00000001137fa0a8 = puVar1;
  }
  return;
}



/* Entry: 10b7dbe18; end: 10b7dbefb; +[SCAdsChatFeedPosition descriptor] */

void FUN_10b7dbe18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5180,
                        &PTR____CFConstantStringClassReference_110f84998,
                        &PTR_s_snapchat_ads_request_schema_1133e3430,&PTR_DAT_1133e3488,3,0x18,0x1c)
    ;
    puRam00000001137fa0b0 = puVar1;
  }
  return;
}



/* Entry: 10b7dbefc; end: 10b7dbf07;  */

bool FUN_10b7dbefc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dbf08; end: 10b7dbf6f; +[SCAdsChatFeedInsertionConfig descriptor] */

void FUN_10b7dbf08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5220,
                        &PTR____CFConstantStringClassReference_110f849d8,
                        &PTR_s_snapchat_ads_request_schema_1133e3808,&PTR_DAT_1133e3820,7,0x1c,0x1c)
    ;
    puRam00000001137fa0c0 = puVar1;
  }
  return;
}



/* Entry: 10b7dbf70; end: 10b7dc053; +[SCAdsPromotedStoriesInsertionConfig descriptor] */

void FUN_10b7dbf70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd52c0,
                        &PTR____CFConstantStringClassReference_110f849f8,
                        &PTR_s_snapchat_ads_request_schema_1133e3900,&PTR_DAT_1133e3918,4,0x28,0x1c)
    ;
    puRam00000001137fa0c8 = puVar1;
  }
  return;
}



/* Entry: 10b7dc054; end: 10b7dc05f;  */

bool FUN_10b7dc054(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7dc060; end: 10b7dc0db;  */

undefined * FUN_10b7dc060(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa0d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84a38,
                        &UNK_10e5dcce4,&UNK_10e5dccfc,2,FUN_10b7dc0dc,0);
    do {
      if (puRam00000001137fa0d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa0d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa0d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa0d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa0d8;
}



/* Entry: 10b7dc0dc; end: 10b7dc0e7;  */

bool FUN_10b7dc0dc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dc0e8; end: 10b7dc163;  */

undefined * FUN_10b7dc0e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa0e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84a58,
                        &UNK_10e5dcd04,&UNK_10e5dcd28,2,FUN_10b7dc164,0);
    do {
      if (puRam00000001137fa0e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa0e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa0e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa0e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa0e0;
}



/* Entry: 10b7dc164; end: 10b7dc16f;  */

bool FUN_10b7dc164(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dc170; end: 10b7dc1d7; +[SCAdsAdKitFeatureFlags descriptor] */

void FUN_10b7dc170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5360,
                        &PTR____CFConstantStringClassReference_110f84a78,
                        &PTR_s_snapchat_ads_request_schema_1133e39a0,&PTR_DAT_1133e3a38,0x11,0x40,
                        0x1c);
    puRam00000001137fa0e8 = puVar1;
  }
  return;
}



/* Entry: 10b7dc1d8; end: 10b7dc263; +[SCAdsAdKitVideoAssetOption descriptor] */

undefined * FUN_10b7dc1d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd53b0,
                        &PTR____CFConstantStringClassReference_110f84a98,
                        &PTR_s_snapchat_ads_request_schema_1133e39a0,&PTR_s_stringValue_1133e39b8,1,
                        0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137fa0f0 = puVar1;
  }
  return puRam00000001137fa0f0;
}



/* Entry: 10b7dc264; end: 10b7dc347; +[SCAdsAdKitAdDismissAffordance descriptor] */

void FUN_10b7dc264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa0f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5400,
                        &PTR____CFConstantStringClassReference_110f84ab8,
                        &PTR_s_snapchat_ads_request_schema_1133e39a0,&PTR_DAT_1133e39d8,3,0x18,0x1c)
    ;
    puRam00000001137fa0f8 = puVar1;
  }
  return;
}



/* Entry: 10b7dc348; end: 10b7dc353;  */

bool FUN_10b7dc348(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dc354; end: 10b7dc3cf;  */

undefined * FUN_10b7dc354(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa108 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84af8,
                        &UNK_10e5dcd64,&UNK_10e5dcd84,3,FUN_10b7dc3d0,0);
    do {
      if (puRam00000001137fa108 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa108;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa108,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa108 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa108;
}



/* Entry: 10b7dc3d0; end: 10b7dc3db;  */

bool FUN_10b7dc3d0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dc3dc; end: 10b7dc457;  */

undefined * FUN_10b7dc3dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa110 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84b18,
                        &UNK_10e5dcd90,&UNK_10e5dcdac,2,FUN_10b7dc458,0);
    do {
      if (puRam00000001137fa110 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa110;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa110,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa110 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa110;
}



/* Entry: 10b7dc458; end: 10b7dc463;  */

bool FUN_10b7dc458(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dc464; end: 10b7dc4df;  */

undefined * FUN_10b7dc464(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa118 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84b38,
                        &UNK_10e5dcdb4,&UNK_10e5dcde0,4,FUN_10b7dc4e0,0);
    do {
      if (puRam00000001137fa118 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa118;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa118,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa118 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa118;
}



/* Entry: 10b7dc4e0; end: 10b7dc4eb;  */

bool FUN_10b7dc4e0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7dc4ec; end: 10b7dc567;  */

undefined * FUN_10b7dc4ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84b58,
                        &UNK_10e5dcdf0,&UNK_10e5dce14,3,FUN_10b7dc568,0);
    do {
      if (puRam00000001137fa120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa120;
}


